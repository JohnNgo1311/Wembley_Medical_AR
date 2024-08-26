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
	{ 12755, 0,  0 } /*tableIndex: 0 */,
	{ 12755, 0,  1 } /*tableIndex: 1 */,
	{ 20937, 1,  3 } /*tableIndex: 2 */,
	{ 15597, 2,  5 } /*tableIndex: 3 */,
	{ 10695, 3,  5 } /*tableIndex: 4 */,
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
	{ 68130, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 68130, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 68130, 1, 211, 211, 9, 39, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 68130, 1, 211, 211, 9, 39, 1, kSequencePointKind_StepOut, 0, 3 } /* seqPointIndex: 3 */,
	{ 68130, 1, 212, 212, 9, 10, 7, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 68130, 1, 213, 213, 9, 10, 8, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 68131, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 68131, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 68131, 2, 737, 737, 43, 44, 0, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 68131, 2, 737, 737, 45, 46, 1, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 68132, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 68132, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 68132, 2, 143, 143, 9, 94, 0, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 68132, 2, 143, 143, 9, 94, 1, kSequencePointKind_StepOut, 0, 13 } /* seqPointIndex: 13 */,
	{ 68132, 2, 732, 732, 9, 161, 11, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 68132, 2, 732, 732, 9, 161, 16, kSequencePointKind_StepOut, 0, 15 } /* seqPointIndex: 15 */,
	{ 68132, 2, 732, 732, 9, 161, 28, kSequencePointKind_StepOut, 0, 16 } /* seqPointIndex: 16 */,
	{ 68133, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 68133, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 68133, 2, 792, 792, 40, 44, 0, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 68134, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 68134, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 68134, 3, 185, 185, 9, 53, 0, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 68134, 3, 185, 185, 9, 53, 1, kSequencePointKind_StepOut, 0, 23 } /* seqPointIndex: 23 */,
	{ 68134, 3, 186, 186, 9, 10, 7, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 68134, 3, 192, 192, 13, 14, 8, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 68134, 3, 193, 193, 17, 37, 9, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 68134, 3, 195, 195, 17, 47, 16, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 68134, 3, 195, 195, 17, 47, 18, kSequencePointKind_StepOut, 0, 28 } /* seqPointIndex: 28 */,
	{ 68134, 3, 196, 196, 17, 48, 24, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 68134, 3, 196, 196, 17, 48, 26, kSequencePointKind_StepOut, 0, 30 } /* seqPointIndex: 30 */,
	{ 68134, 3, 197, 197, 13, 14, 32, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 68134, 3, 199, 199, 13, 14, 35, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 68134, 3, 203, 203, 13, 14, 36, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 68134, 3, 204, 204, 9, 10, 38, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 68135, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 68135, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 68135, 3, 209, 209, 33, 37, 0, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 68136, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 68136, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 68136, 3, 226, 226, 13, 14, 0, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 68136, 3, 228, 228, 17, 62, 1, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 68136, 3, 228, 228, 17, 62, 2, kSequencePointKind_StepOut, 0, 42 } /* seqPointIndex: 42 */,
	{ 68136, 3, 228, 228, 0, 0, 18, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 68136, 3, 228, 228, 63, 77, 21, kSequencePointKind_Normal, 0, 44 } /* seqPointIndex: 44 */,
	{ 68136, 3, 230, 230, 17, 65, 24, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 68136, 3, 232, 232, 17, 38, 37, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 68136, 3, 232, 232, 0, 0, 41, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 68136, 3, 233, 233, 17, 18, 44, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 68136, 3, 234, 234, 21, 50, 45, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 68136, 3, 234, 234, 21, 50, 46, kSequencePointKind_StepOut, 0, 50 } /* seqPointIndex: 50 */,
	{ 68136, 3, 235, 235, 17, 18, 52, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 68136, 3, 237, 237, 17, 49, 53, kSequencePointKind_Normal, 0, 52 } /* seqPointIndex: 52 */,
	{ 68136, 3, 240, 240, 17, 30, 60, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 68136, 3, 240, 240, 17, 30, 61, kSequencePointKind_StepOut, 0, 54 } /* seqPointIndex: 54 */,
	{ 68136, 3, 240, 240, 0, 0, 67, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 68136, 3, 241, 241, 17, 18, 70, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 68136, 3, 246, 246, 21, 60, 71, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 68136, 3, 246, 246, 21, 60, 72, kSequencePointKind_StepOut, 0, 58 } /* seqPointIndex: 58 */,
	{ 68136, 3, 265, 265, 21, 54, 78, kSequencePointKind_Normal, 0, 59 } /* seqPointIndex: 59 */,
	{ 68136, 3, 266, 266, 17, 18, 84, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 68136, 3, 268, 268, 17, 29, 85, kSequencePointKind_Normal, 0, 61 } /* seqPointIndex: 61 */,
	{ 68136, 3, 268, 268, 0, 0, 88, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 68136, 3, 269, 269, 17, 18, 92, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 68136, 3, 270, 270, 21, 40, 93, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 68136, 3, 270, 270, 21, 40, 94, kSequencePointKind_StepOut, 0, 65 } /* seqPointIndex: 65 */,
	{ 68136, 3, 271, 271, 17, 18, 100, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 68136, 3, 272, 272, 13, 14, 101, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 68137, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 68 } /* seqPointIndex: 68 */,
	{ 68137, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 68137, 3, 302, 302, 13, 14, 0, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 68137, 3, 303, 303, 17, 66, 1, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 68137, 3, 305, 305, 17, 29, 14, kSequencePointKind_Normal, 0, 72 } /* seqPointIndex: 72 */,
	{ 68137, 3, 305, 305, 0, 0, 16, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 68137, 3, 306, 306, 17, 18, 19, kSequencePointKind_Normal, 0, 74 } /* seqPointIndex: 74 */,
	{ 68137, 3, 307, 307, 21, 50, 20, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 68137, 3, 307, 307, 21, 50, 21, kSequencePointKind_StepOut, 0, 76 } /* seqPointIndex: 76 */,
	{ 68137, 3, 308, 308, 17, 18, 27, kSequencePointKind_Normal, 0, 77 } /* seqPointIndex: 77 */,
	{ 68137, 3, 310, 310, 17, 50, 28, kSequencePointKind_Normal, 0, 78 } /* seqPointIndex: 78 */,
	{ 68137, 3, 311, 311, 17, 29, 35, kSequencePointKind_Normal, 0, 79 } /* seqPointIndex: 79 */,
	{ 68137, 3, 311, 311, 0, 0, 37, kSequencePointKind_Normal, 0, 80 } /* seqPointIndex: 80 */,
	{ 68137, 3, 312, 312, 17, 18, 40, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 68137, 3, 313, 313, 21, 40, 41, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 68137, 3, 313, 313, 21, 40, 42, kSequencePointKind_StepOut, 0, 83 } /* seqPointIndex: 83 */,
	{ 68137, 3, 314, 314, 21, 49, 48, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 68137, 3, 314, 314, 21, 49, 49, kSequencePointKind_StepOut, 0, 85 } /* seqPointIndex: 85 */,
	{ 68137, 3, 315, 315, 17, 18, 55, kSequencePointKind_Normal, 0, 86 } /* seqPointIndex: 86 */,
	{ 68137, 3, 316, 316, 13, 14, 56, kSequencePointKind_Normal, 0, 87 } /* seqPointIndex: 87 */,
	{ 68138, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 88 } /* seqPointIndex: 88 */,
	{ 68138, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 89 } /* seqPointIndex: 89 */,
	{ 68138, 3, 410, 410, 42, 46, 0, kSequencePointKind_Normal, 0, 90 } /* seqPointIndex: 90 */,
	{ 68139, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 91 } /* seqPointIndex: 91 */,
	{ 68139, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 92 } /* seqPointIndex: 92 */,
	{ 68139, 3, 664, 664, 9, 10, 0, kSequencePointKind_Normal, 0, 93 } /* seqPointIndex: 93 */,
	{ 68139, 3, 665, 665, 13, 38, 1, kSequencePointKind_Normal, 0, 94 } /* seqPointIndex: 94 */,
	{ 68139, 3, 665, 665, 13, 38, 2, kSequencePointKind_StepOut, 0, 95 } /* seqPointIndex: 95 */,
	{ 68139, 3, 665, 665, 13, 38, 13, kSequencePointKind_StepOut, 0, 96 } /* seqPointIndex: 96 */,
	{ 68139, 3, 666, 666, 9, 10, 19, kSequencePointKind_Normal, 0, 97 } /* seqPointIndex: 97 */,
	{ 68140, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 98 } /* seqPointIndex: 98 */,
	{ 68140, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 99 } /* seqPointIndex: 99 */,
	{ 68140, 3, 669, 669, 9, 10, 0, kSequencePointKind_Normal, 0, 100 } /* seqPointIndex: 100 */,
	{ 68140, 3, 684, 684, 9, 10, 1, kSequencePointKind_Normal, 0, 101 } /* seqPointIndex: 101 */,
	{ 68141, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 102 } /* seqPointIndex: 102 */,
	{ 68141, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 103 } /* seqPointIndex: 103 */,
	{ 68141, 3, 694, 694, 9, 10, 0, kSequencePointKind_Normal, 0, 104 } /* seqPointIndex: 104 */,
	{ 68141, 3, 708, 708, 9, 10, 1, kSequencePointKind_Normal, 0, 105 } /* seqPointIndex: 105 */,
	{ 68142, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 106 } /* seqPointIndex: 106 */,
	{ 68142, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 107 } /* seqPointIndex: 107 */,
	{ 68142, 3, 715, 715, 9, 10, 0, kSequencePointKind_Normal, 0, 108 } /* seqPointIndex: 108 */,
	{ 68142, 3, 716, 716, 13, 20, 1, kSequencePointKind_Normal, 0, 109 } /* seqPointIndex: 109 */,
	{ 68142, 3, 716, 716, 33, 65, 2, kSequencePointKind_Normal, 0, 110 } /* seqPointIndex: 110 */,
	{ 68142, 3, 716, 716, 33, 65, 2, kSequencePointKind_StepOut, 0, 111 } /* seqPointIndex: 111 */,
	{ 68142, 3, 716, 716, 0, 0, 10, kSequencePointKind_Normal, 0, 112 } /* seqPointIndex: 112 */,
	{ 68142, 3, 716, 716, 22, 29, 12, kSequencePointKind_Normal, 0, 113 } /* seqPointIndex: 113 */,
	{ 68142, 3, 717, 717, 13, 14, 16, kSequencePointKind_Normal, 0, 114 } /* seqPointIndex: 114 */,
	{ 68142, 3, 718, 718, 17, 29, 17, kSequencePointKind_Normal, 0, 115 } /* seqPointIndex: 115 */,
	{ 68142, 3, 718, 718, 0, 0, 20, kSequencePointKind_Normal, 0, 116 } /* seqPointIndex: 116 */,
	{ 68142, 3, 718, 718, 0, 0, 23, kSequencePointKind_Normal, 0, 117 } /* seqPointIndex: 117 */,
	{ 68142, 3, 718, 718, 0, 0, 29, kSequencePointKind_StepOut, 0, 118 } /* seqPointIndex: 118 */,
	{ 68142, 3, 718, 718, 0, 0, 42, kSequencePointKind_StepOut, 0, 119 } /* seqPointIndex: 119 */,
	{ 68142, 3, 721, 721, 25, 61, 51, kSequencePointKind_Normal, 0, 120 } /* seqPointIndex: 120 */,
	{ 68142, 3, 722, 722, 25, 31, 57, kSequencePointKind_Normal, 0, 121 } /* seqPointIndex: 121 */,
	{ 68142, 3, 724, 724, 25, 67, 59, kSequencePointKind_Normal, 0, 122 } /* seqPointIndex: 122 */,
	{ 68142, 3, 725, 725, 25, 31, 65, kSequencePointKind_Normal, 0, 123 } /* seqPointIndex: 123 */,
	{ 68142, 3, 727, 727, 13, 14, 67, kSequencePointKind_Normal, 0, 124 } /* seqPointIndex: 124 */,
	{ 68142, 3, 727, 727, 0, 0, 68, kSequencePointKind_Normal, 0, 125 } /* seqPointIndex: 125 */,
	{ 68142, 3, 716, 716, 30, 32, 72, kSequencePointKind_Normal, 0, 126 } /* seqPointIndex: 126 */,
	{ 68142, 3, 729, 729, 13, 48, 78, kSequencePointKind_Normal, 0, 127 } /* seqPointIndex: 127 */,
	{ 68142, 3, 729, 729, 13, 48, 78, kSequencePointKind_StepOut, 0, 128 } /* seqPointIndex: 128 */,
	{ 68142, 3, 729, 729, 0, 0, 85, kSequencePointKind_Normal, 0, 129 } /* seqPointIndex: 129 */,
	{ 68142, 3, 730, 730, 13, 14, 89, kSequencePointKind_Normal, 0, 130 } /* seqPointIndex: 130 */,
	{ 68142, 3, 731, 731, 17, 53, 90, kSequencePointKind_Normal, 0, 131 } /* seqPointIndex: 131 */,
	{ 68142, 3, 732, 732, 17, 48, 96, kSequencePointKind_Normal, 0, 132 } /* seqPointIndex: 132 */,
	{ 68142, 3, 733, 733, 13, 14, 102, kSequencePointKind_Normal, 0, 133 } /* seqPointIndex: 133 */,
	{ 68142, 3, 734, 734, 9, 10, 103, kSequencePointKind_Normal, 0, 134 } /* seqPointIndex: 134 */,
	{ 68143, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 135 } /* seqPointIndex: 135 */,
	{ 68143, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 136 } /* seqPointIndex: 136 */,
	{ 68143, 3, 737, 737, 9, 10, 0, kSequencePointKind_Normal, 0, 137 } /* seqPointIndex: 137 */,
	{ 68143, 3, 760, 760, 13, 26, 1, kSequencePointKind_Normal, 0, 138 } /* seqPointIndex: 138 */,
	{ 68143, 3, 761, 761, 9, 10, 5, kSequencePointKind_Normal, 0, 139 } /* seqPointIndex: 139 */,
	{ 68144, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 140 } /* seqPointIndex: 140 */,
	{ 68144, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 141 } /* seqPointIndex: 141 */,
	{ 68144, 4, 168, 168, 9, 10, 0, kSequencePointKind_Normal, 0, 142 } /* seqPointIndex: 142 */,
	{ 68144, 4, 169, 169, 13, 167, 1, kSequencePointKind_Normal, 0, 143 } /* seqPointIndex: 143 */,
	{ 68144, 4, 169, 169, 13, 167, 8, kSequencePointKind_StepOut, 0, 144 } /* seqPointIndex: 144 */,
	{ 68144, 4, 170, 170, 9, 10, 14, kSequencePointKind_Normal, 0, 145 } /* seqPointIndex: 145 */,
	{ 68146, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 146 } /* seqPointIndex: 146 */,
	{ 68146, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 147 } /* seqPointIndex: 147 */,
	{ 68146, 5, 193, 193, 9, 10, 0, kSequencePointKind_Normal, 0, 148 } /* seqPointIndex: 148 */,
	{ 68146, 5, 195, 195, 13, 98, 1, kSequencePointKind_Normal, 0, 149 } /* seqPointIndex: 149 */,
	{ 68146, 5, 195, 195, 13, 98, 5, kSequencePointKind_StepOut, 0, 150 } /* seqPointIndex: 150 */,
	{ 68146, 5, 196, 196, 13, 124, 10, kSequencePointKind_Normal, 0, 151 } /* seqPointIndex: 151 */,
	{ 68146, 5, 196, 196, 13, 124, 14, kSequencePointKind_StepOut, 0, 152 } /* seqPointIndex: 152 */,
	{ 68146, 5, 198, 198, 13, 27, 20, kSequencePointKind_Normal, 0, 153 } /* seqPointIndex: 153 */,
	{ 68146, 5, 199, 199, 9, 10, 24, kSequencePointKind_Normal, 0, 154 } /* seqPointIndex: 154 */,
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
	{ 10262, 1 },
	{ 10264, 2 },
	{ 10263, 2 },
	{ 10265, 3 },
	{ 10267, 4 },
	{ 10269, 5 },
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
