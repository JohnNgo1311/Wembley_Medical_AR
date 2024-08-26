#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[5] = 
{
	{ 12841, 0,  0 } /*tableIndex: 0 */,
	{ 12841, 0,  1 } /*tableIndex: 1 */,
	{ 21109, 1,  3 } /*tableIndex: 2 */,
	{ 15703, 2,  5 } /*tableIndex: 3 */,
	{ 10774, 3,  5 } /*tableIndex: 4 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[4] = 
{
	"changed",
	"arg",
	"hash128",
	"result",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[18] = 
{
	{ 0, 0 } /* 0x06000001 System.Void Unity.Burst.BurstCompileAttribute::.ctor() */,
	{ 0, 0 } /* 0x06000002 System.Void Unity.Burst.BurstCompiler::DummyMethod() */,
	{ 0, 0 } /* 0x06000003 System.Void Unity.Burst.BurstCompiler::.cctor() */,
	{ 0, 0 } /* 0x06000004 System.Reflection.MethodInfo Unity.Burst.BurstCompiler/FakeDelegate::get_Method() */,
	{ 0, 0 } /* 0x06000005 System.Void Unity.Burst.BurstCompilerOptions::.ctor(System.Boolean) */,
	{ 0, 0 } /* 0x06000006 System.Boolean Unity.Burst.BurstCompilerOptions::get_IsGlobal() */,
	{ 0, 1 } /* 0x06000007 System.Void Unity.Burst.BurstCompilerOptions::set_EnableBurstCompilation(System.Boolean) */,
	{ 1, 1 } /* 0x06000008 System.Void Unity.Burst.BurstCompilerOptions::set_EnableBurstSafetyChecks(System.Boolean) */,
	{ 0, 0 } /* 0x06000009 System.Action Unity.Burst.BurstCompilerOptions::get_OptionsChanged() */,
	{ 0, 0 } /* 0x0600000A System.Void Unity.Burst.BurstCompilerOptions::OnOptionsChanged() */,
	{ 0, 0 } /* 0x0600000B System.Void Unity.Burst.BurstCompilerOptions::MaybeTriggerRecompilation() */,
	{ 0, 0 } /* 0x0600000C System.Void Unity.Burst.BurstCompilerOptions::MaybePreventChangingOption() */,
	{ 2, 1 } /* 0x0600000D System.Void Unity.Burst.BurstCompilerOptions::.cctor() */,
	{ 0, 0 } /* 0x0600000E System.Boolean Unity.Burst.BurstCompilerOptions::CheckIsSecondaryUnityProcess() */,
	{ 0, 0 } /* 0x0600000F System.Void Unity.Burst.BurstRuntime::Log(System.Byte*,System.Int32,System.Byte*,System.Int32) */,
	{ 0, 0 } /* 0x06000010 System.Void Unity.Burst.BurstRuntime/PreserveAttribute::.ctor() */,
	{ 3, 2 } /* 0x06000011 System.Void* Unity.Burst.SharedStatic::GetOrCreateSharedStaticInternal(System.Int64,System.Int64,System.UInt32,System.UInt32) */,
	{ 0, 0 } /* 0x06000012 System.Void Unity.Burst.SharedStatic/PreserveAttribute::.ctor() */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_Burst[];
Il2CppSequencePoint g_sequencePointsUnity_Burst[155] = 
{
	{ 69057, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 69057, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 69057, 1, 211, 211, 9, 39, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 69057, 1, 211, 211, 9, 39, 1, kSequencePointKind_StepOut, 0, 3 } /* seqPointIndex: 3 */,
	{ 69057, 1, 212, 212, 9, 10, 7, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 69057, 1, 213, 213, 9, 10, 8, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 69058, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 69058, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 69058, 2, 737, 737, 43, 44, 0, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 69058, 2, 737, 737, 45, 46, 1, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 69059, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 69059, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 69059, 2, 143, 143, 9, 94, 0, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 69059, 2, 143, 143, 9, 94, 1, kSequencePointKind_StepOut, 0, 13 } /* seqPointIndex: 13 */,
	{ 69059, 2, 732, 732, 9, 161, 11, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 69059, 2, 732, 732, 9, 161, 16, kSequencePointKind_StepOut, 0, 15 } /* seqPointIndex: 15 */,
	{ 69059, 2, 732, 732, 9, 161, 28, kSequencePointKind_StepOut, 0, 16 } /* seqPointIndex: 16 */,
	{ 69060, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 69060, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 69060, 2, 792, 792, 40, 44, 0, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 69061, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 69061, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 69061, 3, 185, 185, 9, 53, 0, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 69061, 3, 185, 185, 9, 53, 1, kSequencePointKind_StepOut, 0, 23 } /* seqPointIndex: 23 */,
	{ 69061, 3, 186, 186, 9, 10, 7, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 69061, 3, 192, 192, 13, 14, 8, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 69061, 3, 193, 193, 17, 37, 9, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 69061, 3, 195, 195, 17, 47, 16, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 69061, 3, 195, 195, 17, 47, 18, kSequencePointKind_StepOut, 0, 28 } /* seqPointIndex: 28 */,
	{ 69061, 3, 196, 196, 17, 48, 24, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 69061, 3, 196, 196, 17, 48, 26, kSequencePointKind_StepOut, 0, 30 } /* seqPointIndex: 30 */,
	{ 69061, 3, 197, 197, 13, 14, 32, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 69061, 3, 199, 199, 13, 14, 35, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 69061, 3, 203, 203, 13, 14, 36, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 69061, 3, 204, 204, 9, 10, 38, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 69062, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 69062, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 69062, 3, 209, 209, 33, 37, 0, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 69063, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 69063, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 69063, 3, 226, 226, 13, 14, 0, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 69063, 3, 228, 228, 17, 62, 1, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 69063, 3, 228, 228, 17, 62, 2, kSequencePointKind_StepOut, 0, 42 } /* seqPointIndex: 42 */,
	{ 69063, 3, 228, 228, 0, 0, 18, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 69063, 3, 228, 228, 63, 77, 21, kSequencePointKind_Normal, 0, 44 } /* seqPointIndex: 44 */,
	{ 69063, 3, 230, 230, 17, 65, 24, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 69063, 3, 232, 232, 17, 38, 37, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 69063, 3, 232, 232, 0, 0, 41, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 69063, 3, 233, 233, 17, 18, 44, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 69063, 3, 234, 234, 21, 50, 45, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 69063, 3, 234, 234, 21, 50, 46, kSequencePointKind_StepOut, 0, 50 } /* seqPointIndex: 50 */,
	{ 69063, 3, 235, 235, 17, 18, 52, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 69063, 3, 237, 237, 17, 49, 53, kSequencePointKind_Normal, 0, 52 } /* seqPointIndex: 52 */,
	{ 69063, 3, 240, 240, 17, 30, 60, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 69063, 3, 240, 240, 17, 30, 61, kSequencePointKind_StepOut, 0, 54 } /* seqPointIndex: 54 */,
	{ 69063, 3, 240, 240, 0, 0, 67, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 69063, 3, 241, 241, 17, 18, 70, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 69063, 3, 246, 246, 21, 60, 71, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 69063, 3, 246, 246, 21, 60, 72, kSequencePointKind_StepOut, 0, 58 } /* seqPointIndex: 58 */,
	{ 69063, 3, 265, 265, 21, 54, 78, kSequencePointKind_Normal, 0, 59 } /* seqPointIndex: 59 */,
	{ 69063, 3, 266, 266, 17, 18, 84, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 69063, 3, 268, 268, 17, 29, 85, kSequencePointKind_Normal, 0, 61 } /* seqPointIndex: 61 */,
	{ 69063, 3, 268, 268, 0, 0, 88, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 69063, 3, 269, 269, 17, 18, 92, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 69063, 3, 270, 270, 21, 40, 93, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 69063, 3, 270, 270, 21, 40, 94, kSequencePointKind_StepOut, 0, 65 } /* seqPointIndex: 65 */,
	{ 69063, 3, 271, 271, 17, 18, 100, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 69063, 3, 272, 272, 13, 14, 101, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 69064, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 68 } /* seqPointIndex: 68 */,
	{ 69064, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 69064, 3, 302, 302, 13, 14, 0, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 69064, 3, 303, 303, 17, 66, 1, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 69064, 3, 305, 305, 17, 29, 14, kSequencePointKind_Normal, 0, 72 } /* seqPointIndex: 72 */,
	{ 69064, 3, 305, 305, 0, 0, 16, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 69064, 3, 306, 306, 17, 18, 19, kSequencePointKind_Normal, 0, 74 } /* seqPointIndex: 74 */,
	{ 69064, 3, 307, 307, 21, 50, 20, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 69064, 3, 307, 307, 21, 50, 21, kSequencePointKind_StepOut, 0, 76 } /* seqPointIndex: 76 */,
	{ 69064, 3, 308, 308, 17, 18, 27, kSequencePointKind_Normal, 0, 77 } /* seqPointIndex: 77 */,
	{ 69064, 3, 310, 310, 17, 50, 28, kSequencePointKind_Normal, 0, 78 } /* seqPointIndex: 78 */,
	{ 69064, 3, 311, 311, 17, 29, 35, kSequencePointKind_Normal, 0, 79 } /* seqPointIndex: 79 */,
	{ 69064, 3, 311, 311, 0, 0, 37, kSequencePointKind_Normal, 0, 80 } /* seqPointIndex: 80 */,
	{ 69064, 3, 312, 312, 17, 18, 40, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 69064, 3, 313, 313, 21, 40, 41, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 69064, 3, 313, 313, 21, 40, 42, kSequencePointKind_StepOut, 0, 83 } /* seqPointIndex: 83 */,
	{ 69064, 3, 314, 314, 21, 49, 48, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 69064, 3, 314, 314, 21, 49, 49, kSequencePointKind_StepOut, 0, 85 } /* seqPointIndex: 85 */,
	{ 69064, 3, 315, 315, 17, 18, 55, kSequencePointKind_Normal, 0, 86 } /* seqPointIndex: 86 */,
	{ 69064, 3, 316, 316, 13, 14, 56, kSequencePointKind_Normal, 0, 87 } /* seqPointIndex: 87 */,
	{ 69065, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 88 } /* seqPointIndex: 88 */,
	{ 69065, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 89 } /* seqPointIndex: 89 */,
	{ 69065, 3, 410, 410, 42, 46, 0, kSequencePointKind_Normal, 0, 90 } /* seqPointIndex: 90 */,
	{ 69066, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 91 } /* seqPointIndex: 91 */,
	{ 69066, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 92 } /* seqPointIndex: 92 */,
	{ 69066, 3, 664, 664, 9, 10, 0, kSequencePointKind_Normal, 0, 93 } /* seqPointIndex: 93 */,
	{ 69066, 3, 665, 665, 13, 38, 1, kSequencePointKind_Normal, 0, 94 } /* seqPointIndex: 94 */,
	{ 69066, 3, 665, 665, 13, 38, 2, kSequencePointKind_StepOut, 0, 95 } /* seqPointIndex: 95 */,
	{ 69066, 3, 665, 665, 13, 38, 13, kSequencePointKind_StepOut, 0, 96 } /* seqPointIndex: 96 */,
	{ 69066, 3, 666, 666, 9, 10, 19, kSequencePointKind_Normal, 0, 97 } /* seqPointIndex: 97 */,
	{ 69067, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 98 } /* seqPointIndex: 98 */,
	{ 69067, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 99 } /* seqPointIndex: 99 */,
	{ 69067, 3, 669, 669, 9, 10, 0, kSequencePointKind_Normal, 0, 100 } /* seqPointIndex: 100 */,
	{ 69067, 3, 684, 684, 9, 10, 1, kSequencePointKind_Normal, 0, 101 } /* seqPointIndex: 101 */,
	{ 69068, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 102 } /* seqPointIndex: 102 */,
	{ 69068, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 103 } /* seqPointIndex: 103 */,
	{ 69068, 3, 694, 694, 9, 10, 0, kSequencePointKind_Normal, 0, 104 } /* seqPointIndex: 104 */,
	{ 69068, 3, 708, 708, 9, 10, 1, kSequencePointKind_Normal, 0, 105 } /* seqPointIndex: 105 */,
	{ 69069, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 106 } /* seqPointIndex: 106 */,
	{ 69069, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 107 } /* seqPointIndex: 107 */,
	{ 69069, 3, 715, 715, 9, 10, 0, kSequencePointKind_Normal, 0, 108 } /* seqPointIndex: 108 */,
	{ 69069, 3, 716, 716, 13, 20, 1, kSequencePointKind_Normal, 0, 109 } /* seqPointIndex: 109 */,
	{ 69069, 3, 716, 716, 33, 65, 2, kSequencePointKind_Normal, 0, 110 } /* seqPointIndex: 110 */,
	{ 69069, 3, 716, 716, 33, 65, 2, kSequencePointKind_StepOut, 0, 111 } /* seqPointIndex: 111 */,
	{ 69069, 3, 716, 716, 0, 0, 10, kSequencePointKind_Normal, 0, 112 } /* seqPointIndex: 112 */,
	{ 69069, 3, 716, 716, 22, 29, 12, kSequencePointKind_Normal, 0, 113 } /* seqPointIndex: 113 */,
	{ 69069, 3, 717, 717, 13, 14, 16, kSequencePointKind_Normal, 0, 114 } /* seqPointIndex: 114 */,
	{ 69069, 3, 718, 718, 17, 29, 17, kSequencePointKind_Normal, 0, 115 } /* seqPointIndex: 115 */,
	{ 69069, 3, 718, 718, 0, 0, 20, kSequencePointKind_Normal, 0, 116 } /* seqPointIndex: 116 */,
	{ 69069, 3, 718, 718, 0, 0, 23, kSequencePointKind_Normal, 0, 117 } /* seqPointIndex: 117 */,
	{ 69069, 3, 718, 718, 0, 0, 29, kSequencePointKind_StepOut, 0, 118 } /* seqPointIndex: 118 */,
	{ 69069, 3, 718, 718, 0, 0, 42, kSequencePointKind_StepOut, 0, 119 } /* seqPointIndex: 119 */,
	{ 69069, 3, 721, 721, 25, 61, 51, kSequencePointKind_Normal, 0, 120 } /* seqPointIndex: 120 */,
	{ 69069, 3, 722, 722, 25, 31, 57, kSequencePointKind_Normal, 0, 121 } /* seqPointIndex: 121 */,
	{ 69069, 3, 724, 724, 25, 67, 59, kSequencePointKind_Normal, 0, 122 } /* seqPointIndex: 122 */,
	{ 69069, 3, 725, 725, 25, 31, 65, kSequencePointKind_Normal, 0, 123 } /* seqPointIndex: 123 */,
	{ 69069, 3, 727, 727, 13, 14, 67, kSequencePointKind_Normal, 0, 124 } /* seqPointIndex: 124 */,
	{ 69069, 3, 727, 727, 0, 0, 68, kSequencePointKind_Normal, 0, 125 } /* seqPointIndex: 125 */,
	{ 69069, 3, 716, 716, 30, 32, 72, kSequencePointKind_Normal, 0, 126 } /* seqPointIndex: 126 */,
	{ 69069, 3, 729, 729, 13, 48, 78, kSequencePointKind_Normal, 0, 127 } /* seqPointIndex: 127 */,
	{ 69069, 3, 729, 729, 13, 48, 78, kSequencePointKind_StepOut, 0, 128 } /* seqPointIndex: 128 */,
	{ 69069, 3, 729, 729, 0, 0, 85, kSequencePointKind_Normal, 0, 129 } /* seqPointIndex: 129 */,
	{ 69069, 3, 730, 730, 13, 14, 89, kSequencePointKind_Normal, 0, 130 } /* seqPointIndex: 130 */,
	{ 69069, 3, 731, 731, 17, 53, 90, kSequencePointKind_Normal, 0, 131 } /* seqPointIndex: 131 */,
	{ 69069, 3, 732, 732, 17, 48, 96, kSequencePointKind_Normal, 0, 132 } /* seqPointIndex: 132 */,
	{ 69069, 3, 733, 733, 13, 14, 102, kSequencePointKind_Normal, 0, 133 } /* seqPointIndex: 133 */,
	{ 69069, 3, 734, 734, 9, 10, 103, kSequencePointKind_Normal, 0, 134 } /* seqPointIndex: 134 */,
	{ 69070, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 135 } /* seqPointIndex: 135 */,
	{ 69070, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 136 } /* seqPointIndex: 136 */,
	{ 69070, 3, 737, 737, 9, 10, 0, kSequencePointKind_Normal, 0, 137 } /* seqPointIndex: 137 */,
	{ 69070, 3, 760, 760, 13, 26, 1, kSequencePointKind_Normal, 0, 138 } /* seqPointIndex: 138 */,
	{ 69070, 3, 761, 761, 9, 10, 5, kSequencePointKind_Normal, 0, 139 } /* seqPointIndex: 139 */,
	{ 69071, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 140 } /* seqPointIndex: 140 */,
	{ 69071, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 141 } /* seqPointIndex: 141 */,
	{ 69071, 4, 168, 168, 9, 10, 0, kSequencePointKind_Normal, 0, 142 } /* seqPointIndex: 142 */,
	{ 69071, 4, 169, 169, 13, 167, 1, kSequencePointKind_Normal, 0, 143 } /* seqPointIndex: 143 */,
	{ 69071, 4, 169, 169, 13, 167, 8, kSequencePointKind_StepOut, 0, 144 } /* seqPointIndex: 144 */,
	{ 69071, 4, 170, 170, 9, 10, 14, kSequencePointKind_Normal, 0, 145 } /* seqPointIndex: 145 */,
	{ 69073, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 146 } /* seqPointIndex: 146 */,
	{ 69073, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 147 } /* seqPointIndex: 147 */,
	{ 69073, 5, 193, 193, 9, 10, 0, kSequencePointKind_Normal, 0, 148 } /* seqPointIndex: 148 */,
	{ 69073, 5, 195, 195, 13, 98, 1, kSequencePointKind_Normal, 0, 149 } /* seqPointIndex: 149 */,
	{ 69073, 5, 195, 195, 13, 98, 5, kSequencePointKind_StepOut, 0, 150 } /* seqPointIndex: 150 */,
	{ 69073, 5, 196, 196, 13, 124, 10, kSequencePointKind_Normal, 0, 151 } /* seqPointIndex: 151 */,
	{ 69073, 5, 196, 196, 13, 124, 14, kSequencePointKind_StepOut, 0, 152 } /* seqPointIndex: 152 */,
	{ 69073, 5, 198, 198, 13, 27, 20, kSequencePointKind_Normal, 0, 153 } /* seqPointIndex: 153 */,
	{ 69073, 5, 199, 199, 9, 10, 24, kSequencePointKind_Normal, 0, 154 } /* seqPointIndex: 154 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnity_Burst[];
Il2CppSequencePoint g_sequencePointsUnity_Burst[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "D:\\Wembley_Medical_AR\\WembleyAR\\Library\\PackageCache\\com.unity.burst@1.7.3\\Runtime\\BurstCompileAttribute.cs", { 94, 36, 171, 130, 24, 136, 27, 251, 19, 140, 199, 97, 242, 133, 68, 50} }, //1 
{ "D:\\Wembley_Medical_AR\\WembleyAR\\Library\\PackageCache\\com.unity.burst@1.7.3\\Runtime\\BurstCompiler.cs", { 196, 47, 68, 234, 98, 123, 214, 70, 36, 109, 116, 60, 114, 189, 61, 88} }, //2 
{ "D:\\Wembley_Medical_AR\\WembleyAR\\Library\\PackageCache\\com.unity.burst@1.7.3\\Runtime\\BurstCompilerOptions.cs", { 170, 110, 89, 52, 99, 36, 7, 28, 124, 126, 185, 179, 91, 213, 37, 193} }, //3 
{ "D:\\Wembley_Medical_AR\\WembleyAR\\Library\\PackageCache\\com.unity.burst@1.7.3\\Runtime\\BurstRuntime.cs", { 180, 186, 165, 48, 121, 23, 253, 31, 88, 229, 242, 173, 59, 137, 72, 31} }, //4 
{ "D:\\Wembley_Medical_AR\\WembleyAR\\Library\\PackageCache\\com.unity.burst@1.7.3\\Runtime\\SharedStatic.cs", { 87, 87, 109, 139, 35, 19, 164, 249, 158, 94, 253, 192, 145, 203, 89, 190} }, //5 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[6] = 
{
	{ 10375, 1 },
	{ 10377, 2 },
	{ 10376, 2 },
	{ 10378, 3 },
	{ 10380, 4 },
	{ 10382, 5 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[6] = 
{
	{ 0, 102 },
	{ 0, 57 },
	{ 0, 104 },
	{ 12, 68 },
	{ 0, 7 },
	{ 0, 26 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[18] = 
{
	{ 0, 0, 0 } /* System.Void Unity.Burst.BurstCompileAttribute::.ctor() */,
	{ 0, 0, 0 } /* System.Void Unity.Burst.BurstCompiler::DummyMethod() */,
	{ 0, 0, 0 } /* System.Void Unity.Burst.BurstCompiler::.cctor() */,
	{ 0, 0, 0 } /* System.Reflection.MethodInfo Unity.Burst.BurstCompiler/FakeDelegate::get_Method() */,
	{ 0, 0, 0 } /* System.Void Unity.Burst.BurstCompilerOptions::.ctor(System.Boolean) */,
	{ 0, 0, 0 } /* System.Boolean Unity.Burst.BurstCompilerOptions::get_IsGlobal() */,
	{ 102, 0, 1 } /* System.Void Unity.Burst.BurstCompilerOptions::set_EnableBurstCompilation(System.Boolean) */,
	{ 57, 1, 1 } /* System.Void Unity.Burst.BurstCompilerOptions::set_EnableBurstSafetyChecks(System.Boolean) */,
	{ 0, 0, 0 } /* System.Action Unity.Burst.BurstCompilerOptions::get_OptionsChanged() */,
	{ 0, 0, 0 } /* System.Void Unity.Burst.BurstCompilerOptions::OnOptionsChanged() */,
	{ 0, 0, 0 } /* System.Void Unity.Burst.BurstCompilerOptions::MaybeTriggerRecompilation() */,
	{ 0, 0, 0 } /* System.Void Unity.Burst.BurstCompilerOptions::MaybePreventChangingOption() */,
	{ 104, 2, 2 } /* System.Void Unity.Burst.BurstCompilerOptions::.cctor() */,
	{ 7, 4, 1 } /* System.Boolean Unity.Burst.BurstCompilerOptions::CheckIsSecondaryUnityProcess() */,
	{ 0, 0, 0 } /* System.Void Unity.Burst.BurstRuntime::Log(System.Byte*,System.Int32,System.Byte*,System.Int32) */,
	{ 0, 0, 0 } /* System.Void Unity.Burst.BurstRuntime/PreserveAttribute::.ctor() */,
	{ 26, 5, 1 } /* System.Void* Unity.Burst.SharedStatic::GetOrCreateSharedStaticInternal(System.Int64,System.Int64,System.UInt32,System.UInt32) */,
	{ 0, 0, 0 } /* System.Void Unity.Burst.SharedStatic/PreserveAttribute::.ctor() */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnity_Burst;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnity_Burst = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	155,
	(Il2CppSequencePoint*)g_sequencePointsUnity_Burst,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	6,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
