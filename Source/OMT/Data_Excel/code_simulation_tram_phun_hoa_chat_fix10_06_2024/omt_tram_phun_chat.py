import paho.mqtt.client as mqtt
import time
import pandas as pd
import os, sys
import threading
from datetime import datetime, timedelta, timezone
import json

lock = threading.Lock()

may_nut_chan = pd.read_csv('stored_data.csv', index_col=0)
daddr = [*may_nut_chan['ID']]
dname = [*may_nut_chan['Name Variable']]
dvalue = [*may_nut_chan['Value']]
dseconds = [*may_nut_chan['seconds']]
dtype = [*may_nut_chan['Kind of Data']]
dlenght = len(daddr)

may_nut_chan = pd.read_csv('stored_data.csv')
dindex = [*may_nut_chan['No.']]

class ST():
    On = 0
    Run = 1
    Idle = 2
    Alarm = 3
    Setup = 4
    Off = 5
    Ready = 6
    Wifi_disconnect = 7

#---------- Generate Json Payload -------------------------------
def generate_data_status(state, value):
	data = [{
                'name': 'machineStatus',
                'value': value,
                'timestamp': datetime.now().isoformat(timespec='microseconds')
	}]
	return (json.dumps(data))


def generate_data(data_name, data_value):
	data = [{
                'name': str(data_name),
                'value': data_value,
                'timestamp': datetime.now().isoformat(timespec='microseconds')
	}]
	return (json.dumps(data))


#-------------------------------------------------------------

# topic_desktop_backend = 'test/WembleyMedical/BTM/IE-F3-BLO06/Backend/'
# topic_desktop_app = 'test/WembleyMedical/BTM/IE-F3-BLO06/Desktop/'
topic_desktop_backend = 'WembleyMedical/BTM/IE-F3-BLO06/Backend/'
topic_desktop_app = 'WembleyMedical/BTM/IE-F3-BLO06/Desktop/'
topic_standard = 'SimulatedWembleyMedical/BTM/IE-F3-BLO06/'

# --------------------------- Setup MQTT -------------------------------------
# Define MQTT call-back function
def on_connect(client, userdata, flags, rc):
    global status_old, is_connectWifi
    print('Connected to MQTT broker with result code ' + str(rc))

def on_disconnect(client, userdata, rc):
    if rc != 0:
        print('Unexpected disconnection from MQTT broker')


# Client 1
mqttBroker = '52.141.29.70'  # cloud
# mqttBroker = '10.0.70.45'  # cloud
mqttPort = 1883
mqttKeepAliveINTERVAL = 45

# Initiate Mqtt Client
client = mqtt.Client(mqtt.CallbackAPIVersion.VERSION1)
# type: ignore

# if machine is immediately turned off --> last_will sends 'machineStatus: Off' to topic
client.will_set(topic_standard + 'Status/machineStatus',str(generate_data_status('Off', ST.Off)),1,1)
# Register callback function
client.on_connect = on_connect
client.on_disconnect = on_disconnect
# Connect with MQTT Broker
print('connecting to broker ',mqttBroker)
# Check connection to MQTT Broker 
try:
	client.connect(mqttBroker, mqttPort, mqttKeepAliveINTERVAL)
except:
	print("Can't connect MQTT Broker!")
	
client.loop_start()
time.sleep(1)


# # Client 2
# # mqttBroker = '10.0.70.45'  # cloud
# mqttBroker = '52.141.29.70'  # cloud
# mqttPort = 1883
# mqttKeepAliveINTERVAL = 45

# # Initiate Mqtt Client
# client2 = mqtt.Client()
# # if machine is immediately turned off --> last_will sends 'machineStatus: Off' to topic
# client2.will_set(topic_standard + 'Status/machineStatus',str(generate_data_status('Off', ST.Off)),1,1)
# # Register callback function
# # client2.on_connect = on_connect
# # client2.on_disconnect = on_disconnect
# # Connect with MQTT Broker
# print('connecting to broker ',mqttBroker)
# # Check connection to MQTT Broker 
# try:
# 	client2.connect(mqttBroker, mqttPort, mqttKeepAliveINTERVAL)
# except:
# 	print("Can't connect MQTT Broker!")

# client2.loop_start()
# time.sleep(1)


client.publish(topic_standard + 'Status/machineStatus',str(generate_data_status('On', ST.On)),1,1)
# client2.publish(topic_standard + 'Status/machineStatus',str(generate_data_status('On', ST.On)),1,1)
old_operationTime = datetime.now()

time.sleep(5)
# ----------------------------------------------------------------------------
old_productCount = 0
new_productCount = 0    
old_errorProduct = 0
new_errorProduct = 0
old_productCountRaw = 0
new_productCountRaw = 0
old_errorProductRaw = 0
new_errorProductRaw = 0
old_goodProductRaw = 0
new_goodProductRaw = 0

old_tray_qty = 0
new_tray_qty = 0

old_count_repeat = 1

value_cycleTime = 0
data_cycleTime = None
data_productCount = None
def publish_data(name, value, addr, _index, kind_of_data, count_repeat):
    global old_productCount, old_count_repeat, new_productCount, old_errorProduct, new_errorProduct, old_productCountRaw, new_productCountRaw, old_errorProductRaw, new_errorProductRaw
    global old_goodProductRaw, new_goodProductRaw
    global old_tray_qty, new_tray_qty
    global value_cycleTime, data_cycleTime, data_productCount

    if count_repeat == 0:
        if name == 'productCount':
            old_productCount = int(value)
        if name == 'errorProduct':
            old_errorProduct = int(value)
        if name == 'productCountRaw':
            old_productCountRaw = int(value)
        if name == 'errorProductRaw':
            old_errorProductRaw = int(value)
        if name == 'goodProductRaw':
            old_goodProductRaw = int(value)
        if name == 'S1_PLASTIC_TRAYS_QTY':
            old_tray_qty = int(value)
    else:
        if old_count_repeat != count_repeat:
            old_productCount = new_productCount
            old_errorProduct = new_errorProduct
            old_productCountRaw = new_productCountRaw
            old_errorProductRaw = new_errorProductRaw
            old_goodProductRaw = new_goodProductRaw
            old_tray_qty = new_tray_qty
            
            old_count_repeat = count_repeat

        if name == 'productCount':
            value = old_productCount + int(value)
            new_productCount = int(value)
        if name == 'errorProduct':
            value = old_errorProduct + int(value)
            new_errorProduct = int(value)
        if name == 'productCountRaw':
            value = old_productCountRaw + int(value)
            new_productCountRaw = int(value)
        if name == 'errorProductRaw':
            value = old_errorProductRaw + int(value)
            new_errorProductRaw = int(value)
        if name == 'goodProductRaw':
            value = old_goodProductRaw + int(value)
            new_goodProductRaw = int(value)
        if name == 'S1_PLASTIC_TRAYS_QTY':
            value = old_tray_qty + int(value)
            new_tray_qty = int(value)

    if kind_of_data == 'Setting':
        if name == 'S1_PARA_CLEAN_DURATION_TIME':
            value = float(value)
        elif name == 'S1_PARA_DRY1_POSITION_01' or name == 'S1_PARA_DRY2_POSITION_01':
            value = float(value)
        elif name == 'S1_PARA_DRY1_POSITION_12' or name == 'S1_PARA_DRY2_POSITION_12':
            value = float(value)
        elif name == 'S1_PARA_DRY1_POSITION_23' or name == 'S1_PARA_DRY2_POSITION_23':
            value = float(value)
        elif name == 'S1_PARA_DRY1_PAUSE_1' or name == 'S1_PARA_DRY2_PAUSE_1':
            value = float(value)
        elif name == 'S1_PARA_DRY1_PAUSE_2' or name == 'S1_PARA_DRY2_PAUSE_2':
            value = float(value)
        elif name == 'S1_PARA_DRY1_PAUSE_3' or name == 'S1_PARA_DRY2_PAUSE_3':
            value = float(value)
        else:
            value = int(value)
        
    if kind_of_data == 'MachineStatus':
        name = 'machineStatus'
        value = int(value)
        data = generate_data_status(name, value)
        print(data)
        mqtt_topic = topic_standard + 'Status/' + str(name)
        client.publish(mqtt_topic, data, 1, 1)
    elif kind_of_data == 'Alarm':
        value = int(value)
        data = generate_data(addr, value)
        print(data)
        mqtt_topic = topic_standard + 'Status/' + str(name)
        client.publish(mqtt_topic, data, 1, 1)
    elif kind_of_data == 'Station Status'\
            or kind_of_data == 'Product Line'\
            or kind_of_data == 'Setting':
        value = int(value)
        data = generate_data(name, value)
        print(data)
        mqtt_topic = topic_standard + 'Setting/' + str(name)
        client.publish(mqtt_topic, data, 1, 1)
    elif kind_of_data == 'Chemical Detection Current':
        value = int(value)
        data = generate_data(name, value)
        print(data)
        mqtt_topic = topic_standard + 'ChemicalDetection/' + str(name)
        client.publish(mqtt_topic, data, 1, 1)
    # elif kind_of_data == 'Chemical Detection History':
    #     value = int(value)
    #     data = generate_data(name, value)
    #     mqtt_topic = topic_standard + 'ChemicalDetection/' + str(name)
    #     client.publish(mqtt_topic, data, 1, 1)
    elif kind_of_data == 'Production Data':
        if name == 'S1_CURRENT_LEVEL_AUTH':
            pass
        elif name == 'EFF':
            value = float(value)
        else:
            value = int(value)
        data = generate_data(name, value)
        print(data)
    # else:
    #     data = generate_data(name, value)
        if name == 'S1_CYCLE_TIME':
            data_cycleTime = data
            with lock:
                client.publish(topic_standard + 'Parameter/ S1_CYCLE_TIME', data_cycleTime, 1, 1)
                print(data_cycleTime)
        elif name == 'productCount':
            data_productCount = data
            with lock:
                client.publish(topic_standard + 'Parameter/productCount', data_productCount, 1, 1)
                print(data_productCount)
        elif name == 'errorProduct':
            with lock:
                client.publish(topic_standard + 'Parameter/errorProduct', data, 1, 1)
                print(data)
        else :
            with lock:
                client.publish(topic_standard + 'Parameter/' + name, data, 1, 1)
                print(data)
            

    # if kind_of_data != 'Chemical Detection History'\
    #     and kind_of_data != 'Station Status':
    #     with lock:
    #         client.publish(topic_desktop_backend + name, data, 1, 1)

    # if kind_of_data == 'MachineStatus'\
    #     or kind_of_data == 'Chemical Detection Current'\
    #     or kind_of_data == 'Station Status'\
    #     or kind_of_data == 'Production Data'\
    #     or kind_of_data == 'Setting':
        
    #     with lock:
    #         client2.publish(topic_desktop_app + name, data, 1, 1)
    # with lock:
    #     print(_index, data)


#---------------------------------------------------------------------------
def task_simulation():
    #global topic_desktop_backend, dlenght
    global topic_standard, dlenght
    offset_time = 0
    index_restart = 2511  # Nhớ cập nhật lại
    index = 0   #chay tu dau
    offset_time = dseconds[index]
    oldtime = datetime.now()
    count_repeat = 0


    while True:
        newtime = datetime.now()
        deltatime = (newtime-oldtime).total_seconds() + offset_time
        if deltatime > dseconds[index]:
            name = dname[index]
            value = dvalue[index]
            addr = daddr[index]
            _index = dindex[index]
            kind_of_data = dtype[index]

            publish_data(name, value, addr, _index, kind_of_data, count_repeat)
            index += 1
        
        if index == dlenght:
            index = index_restart
            oldtime = newtime
            offset_time = dseconds[index_restart]
            count_repeat += 1


def task_publish_operationTime():
    global old_operationTime
    while True:
        time.sleep(1)
        new_operationTime = datetime.now()
        delta_operationTime = (new_operationTime - old_operationTime).total_seconds()
        _delta_operationTime = (datetime.fromtimestamp(delta_operationTime) + timedelta(hours=-7)).strftime('%H:%M:%S')
        data = generate_data('operationTimeRaw', _delta_operationTime)
        topic2 = topic_standard +'Parameter/operationTimeRaw'
        with lock:
            client.publish(topic2, data, 1, 1)
            print(data)


if __name__ == '__main__':
    
    t1 = threading.Thread(target=task_simulation)
    t2 = threading.Thread(target=task_publish_operationTime)

    t1.start()
    t2.start()
    t1.join()
    t2.join()
