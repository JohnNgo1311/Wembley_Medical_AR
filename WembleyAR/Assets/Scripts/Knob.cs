using UnityEngine;

public class Knob : MonoBehaviour
{
    private MyVideoPlayer videoPlayerScript;
    private Vector3 knobOffset;

    void Start()
    {
        videoPlayerScript = FindObjectOfType<MyVideoPlayer>();
    }

    void OnMouseDown()
    {
        knobOffset = transform.position - Camera.main.ScreenToWorldPoint(Input.mousePosition);
        videoPlayerScript.KnobOnPressDown();
    }

    void OnMouseDrag()
    {
        Vector3 curScreenPoint = new Vector3(Input.mousePosition.x, Input.mousePosition.y, knobOffset.z);
        Vector3 curPosition = Camera.main.ScreenToWorldPoint(curScreenPoint) + knobOffset;
        transform.position = new Vector3(curPosition.x, transform.position.y, transform.position.z);
        videoPlayerScript.KnobOnDrag();
    }

    void OnMouseUp()
    {
        videoPlayerScript.KnobOnRelease();
    }
}
