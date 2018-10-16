#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// NCMB.NCMBUser/<LinkWithAuthDataAsync>c__AnonStorey5
struct U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_t2722274458;
// NCMB.NCMBException
struct NCMBException_t2865652588;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerable_1_t4242887519;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t1510070208;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>
struct Func_2_t268983481;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_t4016427559;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Object>
struct Func_2_t1501638956;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2865362463;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// NCMB.NCMBUser
struct NCMBUser_t3450556553;
// NCMB.NCMBCallback
struct NCMBCallback_t3196884667;
// System.String
struct String_t;
// NCMB.NCMBUser/<LogInWithAuthDataAsync>c__AnonStorey4
struct U3CLogInWithAuthDataAsyncU3Ec__AnonStorey4_t835417452;
// NCMB.NCMBUser/<RequestAuthenticationMailAsync>c__AnonStorey2
struct U3CRequestAuthenticationMailAsyncU3Ec__AnonStorey2_t3874618840;
// NCMB.NCMBUser/<UnLinkWithAuthDataAsync>c__AnonStorey6
struct U3CUnLinkWithAuthDataAsyncU3Ec__AnonStorey6_t2992002127;
// ObjCtrl
struct ObjCtrl_t2048577503;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.UI.Button
struct Button_t4055032469;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t48803504;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t2581268647;
// PlayerScript
struct PlayerScript_t1783516946;
// ProfileCloseScript
struct ProfileCloseScript_t727353722;
// ProfileEditScript
struct ProfileEditScript_t4034749066;
// UnityEngine.UI.InputField
struct InputField_t3762917431;
// ProfileSaveScript
struct ProfileSaveScript_t3099832256;
// NCMB.NCMBQuery`1<NCMB.NCMBObject>
struct NCMBQuery_1_t1736825847;
// NCMB.NCMBQuery`1<System.Object>
struct NCMBQuery_1_t2165745577;
// NCMB.NCMBQueryCallback`1<NCMB.NCMBObject>
struct NCMBQueryCallback_1_t3839413818;
// NCMB.NCMBQueryCallback`1<System.Object>
struct NCMBQueryCallback_1_t4268333548;
// System.Collections.Generic.List`1<NCMB.NCMBObject>
struct List_1_t4123261176;
// NCMB.NCMBObject
struct NCMBObject_t2651186434;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// PushMicrobotPushScript
struct PushMicrobotPushScript_t2516234185;
// SlackApi.PostMessageData
struct PostMessageData_t1903475841;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Action
struct Action_t1264377477;
// System.Action`1<System.String>
struct Action_1_t2019918284;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// ResetButtonScript
struct ResetButtonScript_t1499367335;
// SimpleJSON.Json/Serializer
struct Serializer_t1431492217;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Collections.IList
struct IList_t2094931216;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Char[]
struct CharU5BU5D_t3528271667;
// SlackApi.SlackAPI/<PostMessage>c__Iterator0
struct U3CPostMessageU3Ec__Iterator0_t572351527;
// SlackApi.UploadData
struct UploadData_t2454610352;
// SlackApi.SlackAPI/<UploadScreenShot>c__Iterator1
struct U3CUploadScreenShotU3Ec__Iterator1_t762007288;
// UnityEngine.WWWForm
struct WWWForm_t4064702195;
// UnityEngine.WWW
struct WWW_t3688466362;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t1314943911;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// VariableManager
struct VariableManager_t3496271310;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t1293755103;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// NCMB.NCMBObject[]
struct NCMBObjectU5BU5D_t3320458423;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t1694351041;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// UnityEngine.Sprite
struct Sprite_t280657092;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
struct IDictionary_2_t2641362951;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t1329213854;
// System.Collections.Generic.LinkedList`1<System.Collections.Generic.IDictionary`2<System.String,NCMB.Internal.INCMBFieldOperation>>
struct LinkedList_1_t2295666153;
// UnityEngine.UI.Text
struct Text_t1901882714;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t731888065;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t648412432;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t467195904;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t2355412304;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.Event
struct Event_t2956885303;
// UnityEngine.UI.FontData
struct FontData_t746620069;

extern RuntimeClass* U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_t2722274458_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t268983481_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t1501638956_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Enumerable_Concat_TisKeyValuePair_2_t968067334_m525342773_RuntimeMethod_var;
extern const RuntimeMethod* U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_U3CU3Em__1_m3363970239_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m3583875901_RuntimeMethod_var;
extern const RuntimeMethod* U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_U3CU3Em__2_m1398065494_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m3414179261_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToDictionary_TisKeyValuePair_2_t968067334_TisString_t_TisRuntimeObject_m162120612_RuntimeMethod_var;
extern const uint32_t U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_U3CU3Em__0_m3024477021_MetadataUsageId;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m256823211_RuntimeMethod_var;
extern const uint32_t U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_U3CU3Em__1_m3363970239_MetadataUsageId;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m4108279609_RuntimeMethod_var;
extern const uint32_t U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_U3CU3Em__2_m1398065494_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Clear_m3181358953_RuntimeMethod_var;
extern const uint32_t U3CLogInWithAuthDataAsyncU3Ec__AnonStorey4_U3CU3Em__0_m2910081602_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Remove_m1799044440_RuntimeMethod_var;
extern const uint32_t U3CUnLinkWithAuthDataAsyncU3Ec__AnonStorey6_U3CU3Em__0_m1644182132_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityAction_t3245792599_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisButton_t4055032469_m1381873113_RuntimeMethod_var;
extern const RuntimeMethod* ObjCtrl_ResetOnClick_m1415861476_RuntimeMethod_var;
extern const uint32_t ObjCtrl_Start_m2904966602_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const uint32_t ObjCtrl_Update_m2655592593_MetadataUsageId;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3429492703;
extern const uint32_t ObjCtrl_ResetOnClick_m1415861476_MetadataUsageId;
extern String_t* _stringLiteral1828639942;
extern String_t* _stringLiteral2984908384;
extern const uint32_t PlayerScript_Update_m4164928735_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t ProfileCloseScript_CloseOnClick_m1821287866_MetadataUsageId;
extern String_t* _stringLiteral2530674981;
extern String_t* _stringLiteral97506931;
extern const uint32_t ProfileSaveScript_Update_m1568002084_MetadataUsageId;
extern RuntimeClass* NCMBQuery_1_t1736825847_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* NCMBQueryCallback_1_t3839413818_il2cpp_TypeInfo_var;
extern const RuntimeMethod* NCMBQuery_1__ctor_m175463168_RuntimeMethod_var;
extern const RuntimeMethod* NCMBQuery_1_WhereEqualTo_m661601083_RuntimeMethod_var;
extern const RuntimeMethod* ProfileSaveScript_U3CSaveTextU3Em__0_m1798662368_RuntimeMethod_var;
extern const RuntimeMethod* NCMBQueryCallback_1__ctor_m93443526_RuntimeMethod_var;
extern const RuntimeMethod* NCMBQuery_1_FindAsync_m684836409_RuntimeMethod_var;
extern String_t* _stringLiteral2619321690;
extern String_t* _stringLiteral318739541;
extern const uint32_t ProfileSaveScript_SaveText_m2400277834_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Item_m2936930928_RuntimeMethod_var;
extern String_t* _stringLiteral562053875;
extern String_t* _stringLiteral3322332165;
extern String_t* _stringLiteral4224860613;
extern String_t* _stringLiteral1650268683;
extern String_t* _stringLiteral2769243058;
extern String_t* _stringLiteral1245227674;
extern const uint32_t ProfileSaveScript_U3CSaveTextU3Em__0_m1798662368_MetadataUsageId;
extern RuntimeClass* PostMessageData_t1903475841_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2008436112;
extern const uint32_t PushMicrobotPushScript_PushOnClick_m3317924500_MetadataUsageId;
extern const RuntimeMethod* PushMicrobotPushScript_PushOnClick_m3317924500_RuntimeMethod_var;
extern const uint32_t PushMicrobotPushScript_Start_m109812786_MetadataUsageId;
extern const uint32_t PushMicrobotPushScript_Update_m2675743356_MetadataUsageId;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern const uint32_t Serializer__ctor_m4016915493_MetadataUsageId;
extern RuntimeClass* Serializer_t1431492217_il2cpp_TypeInfo_var;
extern const uint32_t Serializer_Serialize_m460980285_MetadataUsageId;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* IList_t2094931216_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_t1363984059_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1202628576;
extern String_t* _stringLiteral4002445229;
extern String_t* _stringLiteral3875954633;
extern const uint32_t Serializer_SerializeValue_m485783884_MetadataUsageId;
extern RuntimeClass* IEnumerable_t1941168011_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t Serializer_SerializeObject_m1961571130_MetadataUsageId;
extern const uint32_t Serializer_SerializeArray_m3163871500_MetadataUsageId;
extern String_t* _stringLiteral3450386420;
extern String_t* _stringLiteral3458119668;
extern String_t* _stringLiteral3454580724;
extern String_t* _stringLiteral3454318580;
extern String_t* _stringLiteral3454842868;
extern String_t* _stringLiteral3455629300;
extern String_t* _stringLiteral3455498228;
extern const uint32_t Serializer_SerializeString_m3358732709_MetadataUsageId;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32_t2560061978_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t3736567304_il2cpp_TypeInfo_var;
extern RuntimeClass* SByte_t1669577662_il2cpp_TypeInfo_var;
extern RuntimeClass* Byte_t1134296376_il2cpp_TypeInfo_var;
extern RuntimeClass* Int16_t2552820387_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt16_t2177724958_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt64_t4134040092_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t594665363_il2cpp_TypeInfo_var;
extern RuntimeClass* Decimal_t2948259380_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614638;
extern const uint32_t Serializer_SerializeOther_m4218573050_MetadataUsageId;
extern String_t* _stringLiteral3707726826;
extern String_t* _stringLiteral2884425308;
extern String_t* _stringLiteral149140440;
extern String_t* _stringLiteral489098567;
extern String_t* _stringLiteral1519004250;
extern const uint32_t PostMessageData__ctor_m292042944_MetadataUsageId;
extern RuntimeClass* U3CPostMessageU3Ec__Iterator0_t572351527_il2cpp_TypeInfo_var;
extern const uint32_t SlackAPI_PostMessage_m3581228338_MetadataUsageId;
extern RuntimeClass* U3CUploadScreenShotU3Ec__Iterator1_t762007288_il2cpp_TypeInfo_var;
extern const uint32_t SlackAPI_UploadScreenShot_m229945823_MetadataUsageId;
extern RuntimeClass* WWWForm_t4064702195_il2cpp_TypeInfo_var;
extern RuntimeClass* WWW_t3688466362_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Action_1_Invoke_m3134296422_RuntimeMethod_var;
extern String_t* _stringLiteral3987835854;
extern String_t* _stringLiteral2356925649;
extern String_t* _stringLiteral661469732;
extern String_t* _stringLiteral2262471471;
extern String_t* _stringLiteral1846588769;
extern String_t* _stringLiteral2005331395;
extern String_t* _stringLiteral470911652;
extern String_t* _stringLiteral1983834711;
extern String_t* _stringLiteral2513269523;
extern const uint32_t U3CPostMessageU3Ec__Iterator0_MoveNext_m3199049117_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CPostMessageU3Ec__Iterator0_Reset_m1843138627_RuntimeMethod_var;
extern const uint32_t U3CPostMessageU3Ec__Iterator0_Reset_m1843138627_MetadataUsageId;
extern RuntimeClass* WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var;
extern RuntimeClass* Texture2D_t3840446185_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Nullable_1_get_HasValue_m589371754_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1__ctor_m3940678751_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_Value_m3000890071_RuntimeMethod_var;
extern String_t* _stringLiteral3963993483;
extern String_t* _stringLiteral3634904466;
extern String_t* _stringLiteral1629333464;
extern String_t* _stringLiteral2045074213;
extern String_t* _stringLiteral498161068;
extern String_t* _stringLiteral4191230889;
extern const uint32_t U3CUploadScreenShotU3Ec__Iterator1_MoveNext_m4141145714_MetadataUsageId;
extern const RuntimeMethod* U3CUploadScreenShotU3Ec__Iterator1_Reset_m1099178972_RuntimeMethod_var;
extern const uint32_t U3CUploadScreenShotU3Ec__Iterator1_Reset_m1099178972_MetadataUsageId;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1158456214;
extern String_t* _stringLiteral4078136661;
extern const uint32_t UploadData__ctor_m1219879025_MetadataUsageId;
extern const RuntimeMethod* VariableManager_U3CUpdateOnClickU3Em__0_m3473470133_RuntimeMethod_var;
extern String_t* _stringLiteral2765874167;
extern const uint32_t VariableManager_UpdateOnClick_m3866228440_MetadataUsageId;
extern const RuntimeMethod* VariableManager_UpdateOnClick_m3866228440_RuntimeMethod_var;
extern const uint32_t VariableManager_Start_m1950950744_MetadataUsageId;
extern const uint32_t VariableManager_Update_m3948355130_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m1317807062_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1595407294_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1905280063_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3687365338_RuntimeMethod_var;
extern String_t* _stringLiteral3243520198;
extern String_t* _stringLiteral271021097;
extern String_t* _stringLiteral189811346;
extern String_t* _stringLiteral3452606109;
extern String_t* _stringLiteral1188813395;
extern String_t* _stringLiteral3452614523;
extern const uint32_t VariableManager_U3CUpdateOnClickU3Em__0_m3473470133_MetadataUsageId;

struct CharU5BU5D_t3528271667;
struct ByteU5BU5D_t4116647657;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef POSTMESSAGEDATA_T1903475841_H
#define POSTMESSAGEDATA_T1903475841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SlackApi.PostMessageData
struct  PostMessageData_t1903475841  : public RuntimeObject
{
public:
	// System.String SlackApi.PostMessageData::token
	String_t* ___token_0;
	// System.String SlackApi.PostMessageData::channel
	String_t* ___channel_1;
	// System.String SlackApi.PostMessageData::icon_url
	String_t* ___icon_url_2;
	// System.String SlackApi.PostMessageData::text
	String_t* ___text_3;
	// System.String SlackApi.PostMessageData::parse
	String_t* ___parse_4;
	// System.String SlackApi.PostMessageData::link_names
	String_t* ___link_names_5;
	// System.String SlackApi.PostMessageData::username
	String_t* ___username_6;
	// System.String SlackApi.PostMessageData::icon_emoji
	String_t* ___icon_emoji_7;

public:
	inline static int32_t get_offset_of_token_0() { return static_cast<int32_t>(offsetof(PostMessageData_t1903475841, ___token_0)); }
	inline String_t* get_token_0() const { return ___token_0; }
	inline String_t** get_address_of_token_0() { return &___token_0; }
	inline void set_token_0(String_t* value)
	{
		___token_0 = value;
		Il2CppCodeGenWriteBarrier((&___token_0), value);
	}

	inline static int32_t get_offset_of_channel_1() { return static_cast<int32_t>(offsetof(PostMessageData_t1903475841, ___channel_1)); }
	inline String_t* get_channel_1() const { return ___channel_1; }
	inline String_t** get_address_of_channel_1() { return &___channel_1; }
	inline void set_channel_1(String_t* value)
	{
		___channel_1 = value;
		Il2CppCodeGenWriteBarrier((&___channel_1), value);
	}

	inline static int32_t get_offset_of_icon_url_2() { return static_cast<int32_t>(offsetof(PostMessageData_t1903475841, ___icon_url_2)); }
	inline String_t* get_icon_url_2() const { return ___icon_url_2; }
	inline String_t** get_address_of_icon_url_2() { return &___icon_url_2; }
	inline void set_icon_url_2(String_t* value)
	{
		___icon_url_2 = value;
		Il2CppCodeGenWriteBarrier((&___icon_url_2), value);
	}

	inline static int32_t get_offset_of_text_3() { return static_cast<int32_t>(offsetof(PostMessageData_t1903475841, ___text_3)); }
	inline String_t* get_text_3() const { return ___text_3; }
	inline String_t** get_address_of_text_3() { return &___text_3; }
	inline void set_text_3(String_t* value)
	{
		___text_3 = value;
		Il2CppCodeGenWriteBarrier((&___text_3), value);
	}

	inline static int32_t get_offset_of_parse_4() { return static_cast<int32_t>(offsetof(PostMessageData_t1903475841, ___parse_4)); }
	inline String_t* get_parse_4() const { return ___parse_4; }
	inline String_t** get_address_of_parse_4() { return &___parse_4; }
	inline void set_parse_4(String_t* value)
	{
		___parse_4 = value;
		Il2CppCodeGenWriteBarrier((&___parse_4), value);
	}

	inline static int32_t get_offset_of_link_names_5() { return static_cast<int32_t>(offsetof(PostMessageData_t1903475841, ___link_names_5)); }
	inline String_t* get_link_names_5() const { return ___link_names_5; }
	inline String_t** get_address_of_link_names_5() { return &___link_names_5; }
	inline void set_link_names_5(String_t* value)
	{
		___link_names_5 = value;
		Il2CppCodeGenWriteBarrier((&___link_names_5), value);
	}

	inline static int32_t get_offset_of_username_6() { return static_cast<int32_t>(offsetof(PostMessageData_t1903475841, ___username_6)); }
	inline String_t* get_username_6() const { return ___username_6; }
	inline String_t** get_address_of_username_6() { return &___username_6; }
	inline void set_username_6(String_t* value)
	{
		___username_6 = value;
		Il2CppCodeGenWriteBarrier((&___username_6), value);
	}

	inline static int32_t get_offset_of_icon_emoji_7() { return static_cast<int32_t>(offsetof(PostMessageData_t1903475841, ___icon_emoji_7)); }
	inline String_t* get_icon_emoji_7() const { return ___icon_emoji_7; }
	inline String_t** get_address_of_icon_emoji_7() { return &___icon_emoji_7; }
	inline void set_icon_emoji_7(String_t* value)
	{
		___icon_emoji_7 = value;
		Il2CppCodeGenWriteBarrier((&___icon_emoji_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTMESSAGEDATA_T1903475841_H
#ifndef WWWFORM_T4064702195_H
#define WWWFORM_T4064702195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WWWForm
struct  WWWForm_t4064702195  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_t1293755103 * ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_t3319525431 * ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_t3319525431 * ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_t3319525431 * ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_t4116647657* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;

public:
	inline static int32_t get_offset_of_formData_0() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___formData_0)); }
	inline List_1_t1293755103 * get_formData_0() const { return ___formData_0; }
	inline List_1_t1293755103 ** get_address_of_formData_0() { return &___formData_0; }
	inline void set_formData_0(List_1_t1293755103 * value)
	{
		___formData_0 = value;
		Il2CppCodeGenWriteBarrier((&___formData_0), value);
	}

	inline static int32_t get_offset_of_fieldNames_1() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___fieldNames_1)); }
	inline List_1_t3319525431 * get_fieldNames_1() const { return ___fieldNames_1; }
	inline List_1_t3319525431 ** get_address_of_fieldNames_1() { return &___fieldNames_1; }
	inline void set_fieldNames_1(List_1_t3319525431 * value)
	{
		___fieldNames_1 = value;
		Il2CppCodeGenWriteBarrier((&___fieldNames_1), value);
	}

	inline static int32_t get_offset_of_fileNames_2() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___fileNames_2)); }
	inline List_1_t3319525431 * get_fileNames_2() const { return ___fileNames_2; }
	inline List_1_t3319525431 ** get_address_of_fileNames_2() { return &___fileNames_2; }
	inline void set_fileNames_2(List_1_t3319525431 * value)
	{
		___fileNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___fileNames_2), value);
	}

	inline static int32_t get_offset_of_types_3() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___types_3)); }
	inline List_1_t3319525431 * get_types_3() const { return ___types_3; }
	inline List_1_t3319525431 ** get_address_of_types_3() { return &___types_3; }
	inline void set_types_3(List_1_t3319525431 * value)
	{
		___types_3 = value;
		Il2CppCodeGenWriteBarrier((&___types_3), value);
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___boundary_4)); }
	inline ByteU5BU5D_t4116647657* get_boundary_4() const { return ___boundary_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(ByteU5BU5D_t4116647657* value)
	{
		___boundary_4 = value;
		Il2CppCodeGenWriteBarrier((&___boundary_4), value);
	}

	inline static int32_t get_offset_of_containsFiles_5() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___containsFiles_5)); }
	inline bool get_containsFiles_5() const { return ___containsFiles_5; }
	inline bool* get_address_of_containsFiles_5() { return &___containsFiles_5; }
	inline void set_containsFiles_5(bool value)
	{
		___containsFiles_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WWWFORM_T4064702195_H
#ifndef UPLOADDATA_T2454610352_H
#define UPLOADDATA_T2454610352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SlackApi.UploadData
struct  UploadData_t2454610352  : public RuntimeObject
{
public:
	// System.String SlackApi.UploadData::token
	String_t* ___token_0;
	// System.String SlackApi.UploadData::channel
	String_t* ___channel_1;
	// System.String SlackApi.UploadData::filename
	String_t* ___filename_2;
	// System.String SlackApi.UploadData::text
	String_t* ___text_3;
	// System.String SlackApi.UploadData::title
	String_t* ___title_4;
	// System.String SlackApi.UploadData::initial_comment
	String_t* ___initial_comment_5;
	// System.String SlackApi.UploadData::username
	String_t* ___username_6;
	// System.String SlackApi.UploadData::icon_url
	String_t* ___icon_url_7;

public:
	inline static int32_t get_offset_of_token_0() { return static_cast<int32_t>(offsetof(UploadData_t2454610352, ___token_0)); }
	inline String_t* get_token_0() const { return ___token_0; }
	inline String_t** get_address_of_token_0() { return &___token_0; }
	inline void set_token_0(String_t* value)
	{
		___token_0 = value;
		Il2CppCodeGenWriteBarrier((&___token_0), value);
	}

	inline static int32_t get_offset_of_channel_1() { return static_cast<int32_t>(offsetof(UploadData_t2454610352, ___channel_1)); }
	inline String_t* get_channel_1() const { return ___channel_1; }
	inline String_t** get_address_of_channel_1() { return &___channel_1; }
	inline void set_channel_1(String_t* value)
	{
		___channel_1 = value;
		Il2CppCodeGenWriteBarrier((&___channel_1), value);
	}

	inline static int32_t get_offset_of_filename_2() { return static_cast<int32_t>(offsetof(UploadData_t2454610352, ___filename_2)); }
	inline String_t* get_filename_2() const { return ___filename_2; }
	inline String_t** get_address_of_filename_2() { return &___filename_2; }
	inline void set_filename_2(String_t* value)
	{
		___filename_2 = value;
		Il2CppCodeGenWriteBarrier((&___filename_2), value);
	}

	inline static int32_t get_offset_of_text_3() { return static_cast<int32_t>(offsetof(UploadData_t2454610352, ___text_3)); }
	inline String_t* get_text_3() const { return ___text_3; }
	inline String_t** get_address_of_text_3() { return &___text_3; }
	inline void set_text_3(String_t* value)
	{
		___text_3 = value;
		Il2CppCodeGenWriteBarrier((&___text_3), value);
	}

	inline static int32_t get_offset_of_title_4() { return static_cast<int32_t>(offsetof(UploadData_t2454610352, ___title_4)); }
	inline String_t* get_title_4() const { return ___title_4; }
	inline String_t** get_address_of_title_4() { return &___title_4; }
	inline void set_title_4(String_t* value)
	{
		___title_4 = value;
		Il2CppCodeGenWriteBarrier((&___title_4), value);
	}

	inline static int32_t get_offset_of_initial_comment_5() { return static_cast<int32_t>(offsetof(UploadData_t2454610352, ___initial_comment_5)); }
	inline String_t* get_initial_comment_5() const { return ___initial_comment_5; }
	inline String_t** get_address_of_initial_comment_5() { return &___initial_comment_5; }
	inline void set_initial_comment_5(String_t* value)
	{
		___initial_comment_5 = value;
		Il2CppCodeGenWriteBarrier((&___initial_comment_5), value);
	}

	inline static int32_t get_offset_of_username_6() { return static_cast<int32_t>(offsetof(UploadData_t2454610352, ___username_6)); }
	inline String_t* get_username_6() const { return ___username_6; }
	inline String_t** get_address_of_username_6() { return &___username_6; }
	inline void set_username_6(String_t* value)
	{
		___username_6 = value;
		Il2CppCodeGenWriteBarrier((&___username_6), value);
	}

	inline static int32_t get_offset_of_icon_url_7() { return static_cast<int32_t>(offsetof(UploadData_t2454610352, ___icon_url_7)); }
	inline String_t* get_icon_url_7() const { return ___icon_url_7; }
	inline String_t** get_address_of_icon_url_7() { return &___icon_url_7; }
	inline void set_icon_url_7(String_t* value)
	{
		___icon_url_7 = value;
		Il2CppCodeGenWriteBarrier((&___icon_url_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPLOADDATA_T2454610352_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef U3CUNLINKWITHAUTHDATAASYNCU3EC__ANONSTOREY6_T2992002127_H
#define U3CUNLINKWITHAUTHDATAASYNCU3EC__ANONSTOREY6_T2992002127_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.NCMBUser/<UnLinkWithAuthDataAsync>c__AnonStorey6
struct  U3CUnLinkWithAuthDataAsyncU3Ec__AnonStorey6_t2992002127  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> NCMB.NCMBUser/<UnLinkWithAuthDataAsync>c__AnonStorey6::currentParam
	Dictionary_2_t2865362463 * ___currentParam_0;
	// System.String NCMB.NCMBUser/<UnLinkWithAuthDataAsync>c__AnonStorey6::provider
	String_t* ___provider_1;
	// NCMB.NCMBCallback NCMB.NCMBUser/<UnLinkWithAuthDataAsync>c__AnonStorey6::callback
	NCMBCallback_t3196884667 * ___callback_2;
	// NCMB.NCMBUser NCMB.NCMBUser/<UnLinkWithAuthDataAsync>c__AnonStorey6::$this
	NCMBUser_t3450556553 * ___U24this_3;

public:
	inline static int32_t get_offset_of_currentParam_0() { return static_cast<int32_t>(offsetof(U3CUnLinkWithAuthDataAsyncU3Ec__AnonStorey6_t2992002127, ___currentParam_0)); }
	inline Dictionary_2_t2865362463 * get_currentParam_0() const { return ___currentParam_0; }
	inline Dictionary_2_t2865362463 ** get_address_of_currentParam_0() { return &___currentParam_0; }
	inline void set_currentParam_0(Dictionary_2_t2865362463 * value)
	{
		___currentParam_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentParam_0), value);
	}

	inline static int32_t get_offset_of_provider_1() { return static_cast<int32_t>(offsetof(U3CUnLinkWithAuthDataAsyncU3Ec__AnonStorey6_t2992002127, ___provider_1)); }
	inline String_t* get_provider_1() const { return ___provider_1; }
	inline String_t** get_address_of_provider_1() { return &___provider_1; }
	inline void set_provider_1(String_t* value)
	{
		___provider_1 = value;
		Il2CppCodeGenWriteBarrier((&___provider_1), value);
	}

	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(U3CUnLinkWithAuthDataAsyncU3Ec__AnonStorey6_t2992002127, ___callback_2)); }
	inline NCMBCallback_t3196884667 * get_callback_2() const { return ___callback_2; }
	inline NCMBCallback_t3196884667 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(NCMBCallback_t3196884667 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier((&___callback_2), value);
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CUnLinkWithAuthDataAsyncU3Ec__AnonStorey6_t2992002127, ___U24this_3)); }
	inline NCMBUser_t3450556553 * get_U24this_3() const { return ___U24this_3; }
	inline NCMBUser_t3450556553 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(NCMBUser_t3450556553 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUNLINKWITHAUTHDATAASYNCU3EC__ANONSTOREY6_T2992002127_H
#ifndef U3CREQUESTAUTHENTICATIONMAILASYNCU3EC__ANONSTOREY2_T3874618840_H
#define U3CREQUESTAUTHENTICATIONMAILASYNCU3EC__ANONSTOREY2_T3874618840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.NCMBUser/<RequestAuthenticationMailAsync>c__AnonStorey2
struct  U3CRequestAuthenticationMailAsyncU3Ec__AnonStorey2_t3874618840  : public RuntimeObject
{
public:
	// NCMB.NCMBCallback NCMB.NCMBUser/<RequestAuthenticationMailAsync>c__AnonStorey2::callback
	NCMBCallback_t3196884667 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CRequestAuthenticationMailAsyncU3Ec__AnonStorey2_t3874618840, ___callback_0)); }
	inline NCMBCallback_t3196884667 * get_callback_0() const { return ___callback_0; }
	inline NCMBCallback_t3196884667 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(NCMBCallback_t3196884667 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((&___callback_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CREQUESTAUTHENTICATIONMAILASYNCU3EC__ANONSTOREY2_T3874618840_H
#ifndef U3CPOSTMESSAGEU3EC__ITERATOR0_T572351527_H
#define U3CPOSTMESSAGEU3EC__ITERATOR0_T572351527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SlackApi.SlackAPI/<PostMessage>c__Iterator0
struct  U3CPostMessageU3Ec__Iterator0_t572351527  : public RuntimeObject
{
public:
	// UnityEngine.WWWForm SlackApi.SlackAPI/<PostMessage>c__Iterator0::<form>__0
	WWWForm_t4064702195 * ___U3CformU3E__0_0;
	// SlackApi.PostMessageData SlackApi.SlackAPI/<PostMessage>c__Iterator0::data
	PostMessageData_t1903475841 * ___data_1;
	// System.String SlackApi.SlackAPI/<PostMessage>c__Iterator0::<url>__0
	String_t* ___U3CurlU3E__0_2;
	// UnityEngine.WWW SlackApi.SlackAPI/<PostMessage>c__Iterator0::<www>__0
	WWW_t3688466362 * ___U3CwwwU3E__0_3;
	// System.String SlackApi.SlackAPI/<PostMessage>c__Iterator0::<error>__0
	String_t* ___U3CerrorU3E__0_4;
	// System.Action`1<System.String> SlackApi.SlackAPI/<PostMessage>c__Iterator0::onError
	Action_1_t2019918284 * ___onError_5;
	// System.Action SlackApi.SlackAPI/<PostMessage>c__Iterator0::onSuccess
	Action_t1264377477 * ___onSuccess_6;
	// System.Object SlackApi.SlackAPI/<PostMessage>c__Iterator0::$current
	RuntimeObject * ___U24current_7;
	// System.Boolean SlackApi.SlackAPI/<PostMessage>c__Iterator0::$disposing
	bool ___U24disposing_8;
	// System.Int32 SlackApi.SlackAPI/<PostMessage>c__Iterator0::$PC
	int32_t ___U24PC_9;

public:
	inline static int32_t get_offset_of_U3CformU3E__0_0() { return static_cast<int32_t>(offsetof(U3CPostMessageU3Ec__Iterator0_t572351527, ___U3CformU3E__0_0)); }
	inline WWWForm_t4064702195 * get_U3CformU3E__0_0() const { return ___U3CformU3E__0_0; }
	inline WWWForm_t4064702195 ** get_address_of_U3CformU3E__0_0() { return &___U3CformU3E__0_0; }
	inline void set_U3CformU3E__0_0(WWWForm_t4064702195 * value)
	{
		___U3CformU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CformU3E__0_0), value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(U3CPostMessageU3Ec__Iterator0_t572351527, ___data_1)); }
	inline PostMessageData_t1903475841 * get_data_1() const { return ___data_1; }
	inline PostMessageData_t1903475841 ** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(PostMessageData_t1903475841 * value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}

	inline static int32_t get_offset_of_U3CurlU3E__0_2() { return static_cast<int32_t>(offsetof(U3CPostMessageU3Ec__Iterator0_t572351527, ___U3CurlU3E__0_2)); }
	inline String_t* get_U3CurlU3E__0_2() const { return ___U3CurlU3E__0_2; }
	inline String_t** get_address_of_U3CurlU3E__0_2() { return &___U3CurlU3E__0_2; }
	inline void set_U3CurlU3E__0_2(String_t* value)
	{
		___U3CurlU3E__0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CurlU3E__0_2), value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E__0_3() { return static_cast<int32_t>(offsetof(U3CPostMessageU3Ec__Iterator0_t572351527, ___U3CwwwU3E__0_3)); }
	inline WWW_t3688466362 * get_U3CwwwU3E__0_3() const { return ___U3CwwwU3E__0_3; }
	inline WWW_t3688466362 ** get_address_of_U3CwwwU3E__0_3() { return &___U3CwwwU3E__0_3; }
	inline void set_U3CwwwU3E__0_3(WWW_t3688466362 * value)
	{
		___U3CwwwU3E__0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwwwU3E__0_3), value);
	}

	inline static int32_t get_offset_of_U3CerrorU3E__0_4() { return static_cast<int32_t>(offsetof(U3CPostMessageU3Ec__Iterator0_t572351527, ___U3CerrorU3E__0_4)); }
	inline String_t* get_U3CerrorU3E__0_4() const { return ___U3CerrorU3E__0_4; }
	inline String_t** get_address_of_U3CerrorU3E__0_4() { return &___U3CerrorU3E__0_4; }
	inline void set_U3CerrorU3E__0_4(String_t* value)
	{
		___U3CerrorU3E__0_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CerrorU3E__0_4), value);
	}

	inline static int32_t get_offset_of_onError_5() { return static_cast<int32_t>(offsetof(U3CPostMessageU3Ec__Iterator0_t572351527, ___onError_5)); }
	inline Action_1_t2019918284 * get_onError_5() const { return ___onError_5; }
	inline Action_1_t2019918284 ** get_address_of_onError_5() { return &___onError_5; }
	inline void set_onError_5(Action_1_t2019918284 * value)
	{
		___onError_5 = value;
		Il2CppCodeGenWriteBarrier((&___onError_5), value);
	}

	inline static int32_t get_offset_of_onSuccess_6() { return static_cast<int32_t>(offsetof(U3CPostMessageU3Ec__Iterator0_t572351527, ___onSuccess_6)); }
	inline Action_t1264377477 * get_onSuccess_6() const { return ___onSuccess_6; }
	inline Action_t1264377477 ** get_address_of_onSuccess_6() { return &___onSuccess_6; }
	inline void set_onSuccess_6(Action_t1264377477 * value)
	{
		___onSuccess_6 = value;
		Il2CppCodeGenWriteBarrier((&___onSuccess_6), value);
	}

	inline static int32_t get_offset_of_U24current_7() { return static_cast<int32_t>(offsetof(U3CPostMessageU3Ec__Iterator0_t572351527, ___U24current_7)); }
	inline RuntimeObject * get_U24current_7() const { return ___U24current_7; }
	inline RuntimeObject ** get_address_of_U24current_7() { return &___U24current_7; }
	inline void set_U24current_7(RuntimeObject * value)
	{
		___U24current_7 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_7), value);
	}

	inline static int32_t get_offset_of_U24disposing_8() { return static_cast<int32_t>(offsetof(U3CPostMessageU3Ec__Iterator0_t572351527, ___U24disposing_8)); }
	inline bool get_U24disposing_8() const { return ___U24disposing_8; }
	inline bool* get_address_of_U24disposing_8() { return &___U24disposing_8; }
	inline void set_U24disposing_8(bool value)
	{
		___U24disposing_8 = value;
	}

	inline static int32_t get_offset_of_U24PC_9() { return static_cast<int32_t>(offsetof(U3CPostMessageU3Ec__Iterator0_t572351527, ___U24PC_9)); }
	inline int32_t get_U24PC_9() const { return ___U24PC_9; }
	inline int32_t* get_address_of_U24PC_9() { return &___U24PC_9; }
	inline void set_U24PC_9(int32_t value)
	{
		___U24PC_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPOSTMESSAGEU3EC__ITERATOR0_T572351527_H
#ifndef JSON_T3351660733_H
#define JSON_T3351660733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.Json
struct  Json_t3351660733  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSON_T3351660733_H
#ifndef NCMBQUERY_1_T1736825847_H
#define NCMBQUERY_1_T1736825847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.NCMBQuery`1<NCMB.NCMBObject>
struct  NCMBQuery_1_t1736825847  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> NCMB.NCMBQuery`1::_where
	Dictionary_2_t2865362463 * ____where_0;
	// System.String NCMB.NCMBQuery`1::WHERE_URL
	String_t* ___WHERE_URL_1;
	// System.String NCMB.NCMBQuery`1::_className
	String_t* ____className_2;
	// System.Int32 NCMB.NCMBQuery`1::_limit
	int32_t ____limit_3;
	// System.Int32 NCMB.NCMBQuery`1::_skip
	int32_t ____skip_4;
	// System.Collections.Generic.List`1<System.String> NCMB.NCMBQuery`1::_order
	List_1_t3319525431 * ____order_5;
	// System.Collections.Generic.List`1<System.String> NCMB.NCMBQuery`1::_include
	List_1_t3319525431 * ____include_6;

public:
	inline static int32_t get_offset_of__where_0() { return static_cast<int32_t>(offsetof(NCMBQuery_1_t1736825847, ____where_0)); }
	inline Dictionary_2_t2865362463 * get__where_0() const { return ____where_0; }
	inline Dictionary_2_t2865362463 ** get_address_of__where_0() { return &____where_0; }
	inline void set__where_0(Dictionary_2_t2865362463 * value)
	{
		____where_0 = value;
		Il2CppCodeGenWriteBarrier((&____where_0), value);
	}

	inline static int32_t get_offset_of_WHERE_URL_1() { return static_cast<int32_t>(offsetof(NCMBQuery_1_t1736825847, ___WHERE_URL_1)); }
	inline String_t* get_WHERE_URL_1() const { return ___WHERE_URL_1; }
	inline String_t** get_address_of_WHERE_URL_1() { return &___WHERE_URL_1; }
	inline void set_WHERE_URL_1(String_t* value)
	{
		___WHERE_URL_1 = value;
		Il2CppCodeGenWriteBarrier((&___WHERE_URL_1), value);
	}

	inline static int32_t get_offset_of__className_2() { return static_cast<int32_t>(offsetof(NCMBQuery_1_t1736825847, ____className_2)); }
	inline String_t* get__className_2() const { return ____className_2; }
	inline String_t** get_address_of__className_2() { return &____className_2; }
	inline void set__className_2(String_t* value)
	{
		____className_2 = value;
		Il2CppCodeGenWriteBarrier((&____className_2), value);
	}

	inline static int32_t get_offset_of__limit_3() { return static_cast<int32_t>(offsetof(NCMBQuery_1_t1736825847, ____limit_3)); }
	inline int32_t get__limit_3() const { return ____limit_3; }
	inline int32_t* get_address_of__limit_3() { return &____limit_3; }
	inline void set__limit_3(int32_t value)
	{
		____limit_3 = value;
	}

	inline static int32_t get_offset_of__skip_4() { return static_cast<int32_t>(offsetof(NCMBQuery_1_t1736825847, ____skip_4)); }
	inline int32_t get__skip_4() const { return ____skip_4; }
	inline int32_t* get_address_of__skip_4() { return &____skip_4; }
	inline void set__skip_4(int32_t value)
	{
		____skip_4 = value;
	}

	inline static int32_t get_offset_of__order_5() { return static_cast<int32_t>(offsetof(NCMBQuery_1_t1736825847, ____order_5)); }
	inline List_1_t3319525431 * get__order_5() const { return ____order_5; }
	inline List_1_t3319525431 ** get_address_of__order_5() { return &____order_5; }
	inline void set__order_5(List_1_t3319525431 * value)
	{
		____order_5 = value;
		Il2CppCodeGenWriteBarrier((&____order_5), value);
	}

	inline static int32_t get_offset_of__include_6() { return static_cast<int32_t>(offsetof(NCMBQuery_1_t1736825847, ____include_6)); }
	inline List_1_t3319525431 * get__include_6() const { return ____include_6; }
	inline List_1_t3319525431 ** get_address_of__include_6() { return &____include_6; }
	inline void set__include_6(List_1_t3319525431 * value)
	{
		____include_6 = value;
		Il2CppCodeGenWriteBarrier((&____include_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NCMBQUERY_1_T1736825847_H
#ifndef LIST_1_T4123261176_H
#define LIST_1_T4123261176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<NCMB.NCMBObject>
struct  List_1_t4123261176  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	NCMBObjectU5BU5D_t3320458423* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4123261176, ____items_1)); }
	inline NCMBObjectU5BU5D_t3320458423* get__items_1() const { return ____items_1; }
	inline NCMBObjectU5BU5D_t3320458423** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(NCMBObjectU5BU5D_t3320458423* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4123261176, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4123261176, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t4123261176_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	NCMBObjectU5BU5D_t3320458423* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t4123261176_StaticFields, ___EmptyArray_4)); }
	inline NCMBObjectU5BU5D_t3320458423* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline NCMBObjectU5BU5D_t3320458423** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(NCMBObjectU5BU5D_t3320458423* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4123261176_H
#ifndef SLACKAPI_T2136206762_H
#define SLACKAPI_T2136206762_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SlackApi.SlackAPI
struct  SlackAPI_t2136206762  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SLACKAPI_T2136206762_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef SERIALIZER_T1431492217_H
#define SERIALIZER_T1431492217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.Json/Serializer
struct  Serializer_t1431492217  : public RuntimeObject
{
public:
	// System.Text.StringBuilder SimpleJSON.Json/Serializer::builder
	StringBuilder_t * ___builder_0;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(Serializer_t1431492217, ___builder_0)); }
	inline StringBuilder_t * get_builder_0() const { return ___builder_0; }
	inline StringBuilder_t ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(StringBuilder_t * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier((&___builder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZER_T1431492217_H
#ifndef U3CLOGINWITHAUTHDATAASYNCU3EC__ANONSTOREY4_T835417452_H
#define U3CLOGINWITHAUTHDATAASYNCU3EC__ANONSTOREY4_T835417452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.NCMBUser/<LogInWithAuthDataAsync>c__AnonStorey4
struct  U3CLogInWithAuthDataAsyncU3Ec__AnonStorey4_t835417452  : public RuntimeObject
{
public:
	// NCMB.NCMBCallback NCMB.NCMBUser/<LogInWithAuthDataAsync>c__AnonStorey4::callback
	NCMBCallback_t3196884667 * ___callback_0;
	// NCMB.NCMBUser NCMB.NCMBUser/<LogInWithAuthDataAsync>c__AnonStorey4::$this
	NCMBUser_t3450556553 * ___U24this_1;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CLogInWithAuthDataAsyncU3Ec__AnonStorey4_t835417452, ___callback_0)); }
	inline NCMBCallback_t3196884667 * get_callback_0() const { return ___callback_0; }
	inline NCMBCallback_t3196884667 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(NCMBCallback_t3196884667 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((&___callback_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CLogInWithAuthDataAsyncU3Ec__AnonStorey4_t835417452, ___U24this_1)); }
	inline NCMBUser_t3450556553 * get_U24this_1() const { return ___U24this_1; }
	inline NCMBUser_t3450556553 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(NCMBUser_t3450556553 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLOGINWITHAUTHDATAASYNCU3EC__ANONSTOREY4_T835417452_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef DICTIONARY_2_T2865362463_H
#define DICTIONARY_2_T2865362463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t2865362463  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ObjectU5BU5D_t2843939325* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___valueSlots_7)); }
	inline ObjectU5BU5D_t2843939325* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ObjectU5BU5D_t2843939325* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2865362463_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1694351041 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1694351041 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1694351041 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1694351041 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2865362463_H
#ifndef CUSTOMYIELDINSTRUCTION_T1895667560_H
#define CUSTOMYIELDINSTRUCTION_T1895667560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t1895667560  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T1895667560_H
#ifndef U3CLINKWITHAUTHDATAASYNCU3EC__ANONSTOREY5_T2722274458_H
#define U3CLINKWITHAUTHDATAASYNCU3EC__ANONSTOREY5_T2722274458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.NCMBUser/<LinkWithAuthDataAsync>c__AnonStorey5
struct  U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_t2722274458  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> NCMB.NCMBUser/<LinkWithAuthDataAsync>c__AnonStorey5::linkParam
	Dictionary_2_t2865362463 * ___linkParam_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> NCMB.NCMBUser/<LinkWithAuthDataAsync>c__AnonStorey5::currentParam
	Dictionary_2_t2865362463 * ___currentParam_1;
	// NCMB.NCMBCallback NCMB.NCMBUser/<LinkWithAuthDataAsync>c__AnonStorey5::callback
	NCMBCallback_t3196884667 * ___callback_2;
	// NCMB.NCMBUser NCMB.NCMBUser/<LinkWithAuthDataAsync>c__AnonStorey5::$this
	NCMBUser_t3450556553 * ___U24this_3;

public:
	inline static int32_t get_offset_of_linkParam_0() { return static_cast<int32_t>(offsetof(U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_t2722274458, ___linkParam_0)); }
	inline Dictionary_2_t2865362463 * get_linkParam_0() const { return ___linkParam_0; }
	inline Dictionary_2_t2865362463 ** get_address_of_linkParam_0() { return &___linkParam_0; }
	inline void set_linkParam_0(Dictionary_2_t2865362463 * value)
	{
		___linkParam_0 = value;
		Il2CppCodeGenWriteBarrier((&___linkParam_0), value);
	}

	inline static int32_t get_offset_of_currentParam_1() { return static_cast<int32_t>(offsetof(U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_t2722274458, ___currentParam_1)); }
	inline Dictionary_2_t2865362463 * get_currentParam_1() const { return ___currentParam_1; }
	inline Dictionary_2_t2865362463 ** get_address_of_currentParam_1() { return &___currentParam_1; }
	inline void set_currentParam_1(Dictionary_2_t2865362463 * value)
	{
		___currentParam_1 = value;
		Il2CppCodeGenWriteBarrier((&___currentParam_1), value);
	}

	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_t2722274458, ___callback_2)); }
	inline NCMBCallback_t3196884667 * get_callback_2() const { return ___callback_2; }
	inline NCMBCallback_t3196884667 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(NCMBCallback_t3196884667 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier((&___callback_2), value);
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_t2722274458, ___U24this_3)); }
	inline NCMBUser_t3450556553 * get_U24this_3() const { return ___U24this_3; }
	inline NCMBUser_t3450556553 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(NCMBUser_t3450556553 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}
};

struct U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_t2722274458_StaticFields
{
public:
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String> NCMB.NCMBUser/<LinkWithAuthDataAsync>c__AnonStorey5::<>f__am$cache0
	Func_2_t268983481 * ___U3CU3Ef__amU24cache0_4;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Object> NCMB.NCMBUser/<LinkWithAuthDataAsync>c__AnonStorey5::<>f__am$cache1
	Func_2_t1501638956 * ___U3CU3Ef__amU24cache1_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_4() { return static_cast<int32_t>(offsetof(U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_t2722274458_StaticFields, ___U3CU3Ef__amU24cache0_4)); }
	inline Func_2_t268983481 * get_U3CU3Ef__amU24cache0_4() const { return ___U3CU3Ef__amU24cache0_4; }
	inline Func_2_t268983481 ** get_address_of_U3CU3Ef__amU24cache0_4() { return &___U3CU3Ef__amU24cache0_4; }
	inline void set_U3CU3Ef__amU24cache0_4(Func_2_t268983481 * value)
	{
		___U3CU3Ef__amU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_5() { return static_cast<int32_t>(offsetof(U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_t2722274458_StaticFields, ___U3CU3Ef__amU24cache1_5)); }
	inline Func_2_t1501638956 * get_U3CU3Ef__amU24cache1_5() const { return ___U3CU3Ef__amU24cache1_5; }
	inline Func_2_t1501638956 ** get_address_of_U3CU3Ef__amU24cache1_5() { return &___U3CU3Ef__amU24cache1_5; }
	inline void set_U3CU3Ef__amU24cache1_5(Func_2_t1501638956 * value)
	{
		___U3CU3Ef__amU24cache1_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLINKWITHAUTHDATAASYNCU3EC__ANONSTOREY5_T2722274458_H
#ifndef UNITYEVENTBASE_T3960448221_H
#define UNITYEVENTBASE_T3960448221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3960448221  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2498835369 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3050769227 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_Calls_0)); }
	inline InvokableCallList_t2498835369 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2498835369 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2498835369 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3050769227 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3050769227 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3050769227 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3960448221_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef SBYTE_T1669577662_H
#define SBYTE_T1669577662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t1669577662 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t1669577662, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T1669577662_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_8;

public:
	inline static int32_t get_offset_of__ticks_8() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_8)); }
	inline int64_t get__ticks_8() const { return ____ticks_8; }
	inline int64_t* get_address_of__ticks_8() { return &____ticks_8; }
	inline void set__ticks_8(int64_t value)
	{
		____ticks_8 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_5;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_6;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_7;

public:
	inline static int32_t get_offset_of_MaxValue_5() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_5)); }
	inline TimeSpan_t881159249  get_MaxValue_5() const { return ___MaxValue_5; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_5() { return &___MaxValue_5; }
	inline void set_MaxValue_5(TimeSpan_t881159249  value)
	{
		___MaxValue_5 = value;
	}

	inline static int32_t get_offset_of_MinValue_6() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_6)); }
	inline TimeSpan_t881159249  get_MinValue_6() const { return ___MinValue_6; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_6() { return &___MinValue_6; }
	inline void set_MinValue_6(TimeSpan_t881159249  value)
	{
		___MinValue_6 = value;
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_7)); }
	inline TimeSpan_t881159249  get_Zero_7() const { return ___Zero_7; }
	inline TimeSpan_t881159249 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(TimeSpan_t881159249  value)
	{
		___Zero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef WAITFORENDOFFRAME_T1314943911_H
#define WAITFORENDOFFRAME_T1314943911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t1314943911  : public YieldInstruction_t403091072
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORENDOFFRAME_T1314943911_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef ENUMERATOR_T1717537757_H
#define ENUMERATOR_T1717537757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<NCMB.NCMBObject>
struct  Enumerator_t1717537757 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t4123261176 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	NCMBObject_t2651186434 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1717537757, ___l_0)); }
	inline List_1_t4123261176 * get_l_0() const { return ___l_0; }
	inline List_1_t4123261176 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t4123261176 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1717537757, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1717537757, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1717537757, ___current_3)); }
	inline NCMBObject_t2651186434 * get_current_3() const { return ___current_3; }
	inline NCMBObject_t2651186434 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(NCMBObject_t2651186434 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1717537757_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef WWW_T3688466362_H
#define WWW_T3688466362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WWW
struct  WWW_t3688466362  : public CustomYieldInstruction_t1895667560
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.WWW::_uwr
	UnityWebRequest_t463507806 * ____uwr_0;

public:
	inline static int32_t get_offset_of__uwr_0() { return static_cast<int32_t>(offsetof(WWW_t3688466362, ____uwr_0)); }
	inline UnityWebRequest_t463507806 * get__uwr_0() const { return ____uwr_0; }
	inline UnityWebRequest_t463507806 ** get_address_of__uwr_0() { return &____uwr_0; }
	inline void set__uwr_0(UnityWebRequest_t463507806 * value)
	{
		____uwr_0 = value;
		Il2CppCodeGenWriteBarrier((&____uwr_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WWW_T3688466362_H
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2552820387_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
#ifndef NULLABLE_1_T378540539_H
#define NULLABLE_1_T378540539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Int32>
struct  Nullable_1_t378540539 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t378540539, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t378540539, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T378540539_H
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_5;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_6;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_7;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_8;

public:
	inline static int32_t get_offset_of_flags_5() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_5)); }
	inline uint32_t get_flags_5() const { return ___flags_5; }
	inline uint32_t* get_address_of_flags_5() { return &___flags_5; }
	inline void set_flags_5(uint32_t value)
	{
		___flags_5 = value;
	}

	inline static int32_t get_offset_of_hi_6() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_6)); }
	inline uint32_t get_hi_6() const { return ___hi_6; }
	inline uint32_t* get_address_of_hi_6() { return &___hi_6; }
	inline void set_hi_6(uint32_t value)
	{
		___hi_6 = value;
	}

	inline static int32_t get_offset_of_lo_7() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_7)); }
	inline uint32_t get_lo_7() const { return ___lo_7; }
	inline uint32_t* get_address_of_lo_7() { return &___lo_7; }
	inline void set_lo_7(uint32_t value)
	{
		___lo_7 = value;
	}

	inline static int32_t get_offset_of_mid_8() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_8)); }
	inline uint32_t get_mid_8() const { return ___mid_8; }
	inline uint32_t* get_address_of_mid_8() { return &___mid_8; }
	inline void set_mid_8(uint32_t value)
	{
		___mid_8 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_3;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t2948259380  ___MaxValueDiv10_4;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_0)); }
	inline Decimal_t2948259380  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t2948259380 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t2948259380  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_1)); }
	inline Decimal_t2948259380  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t2948259380  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_2)); }
	inline Decimal_t2948259380  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t2948259380  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_3)); }
	inline Decimal_t2948259380  get_One_3() const { return ___One_3; }
	inline Decimal_t2948259380 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t2948259380  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_4() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValueDiv10_4)); }
	inline Decimal_t2948259380  get_MaxValueDiv10_4() const { return ___MaxValueDiv10_4; }
	inline Decimal_t2948259380 * get_address_of_MaxValueDiv10_4() { return &___MaxValueDiv10_4; }
	inline void set_MaxValueDiv10_4(Decimal_t2948259380  value)
	{
		___MaxValueDiv10_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef KEYVALUEPAIR_2_T2530217319_H
#define KEYVALUEPAIR_2_T2530217319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t2530217319 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2530217319_H
#ifndef KEYVALUEPAIR_2_T968067334_H
#define KEYVALUEPAIR_2_T968067334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct  KeyValuePair_2_t968067334 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t968067334, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t968067334, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T968067334_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef NCMBEXCEPTION_T2865652588_H
#define NCMBEXCEPTION_T2865652588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.NCMBException
struct  NCMBException_t2865652588  : public Exception_t
{
public:
	// System.String NCMB.NCMBException::_errorCode
	String_t* ____errorCode_11;
	// System.String NCMB.NCMBException::_errorMessage
	String_t* ____errorMessage_12;

public:
	inline static int32_t get_offset_of__errorCode_11() { return static_cast<int32_t>(offsetof(NCMBException_t2865652588, ____errorCode_11)); }
	inline String_t* get__errorCode_11() const { return ____errorCode_11; }
	inline String_t** get_address_of__errorCode_11() { return &____errorCode_11; }
	inline void set__errorCode_11(String_t* value)
	{
		____errorCode_11 = value;
		Il2CppCodeGenWriteBarrier((&____errorCode_11), value);
	}

	inline static int32_t get_offset_of__errorMessage_12() { return static_cast<int32_t>(offsetof(NCMBException_t2865652588, ____errorMessage_12)); }
	inline String_t* get__errorMessage_12() const { return ____errorMessage_12; }
	inline String_t** get_address_of__errorMessage_12() { return &____errorMessage_12; }
	inline void set__errorMessage_12(String_t* value)
	{
		____errorMessage_12 = value;
		Il2CppCodeGenWriteBarrier((&____errorMessage_12), value);
	}
};

struct NCMBException_t2865652588_StaticFields
{
public:
	// System.String NCMB.NCMBException::BAD_REQUEST
	String_t* ___BAD_REQUEST_13;
	// System.String NCMB.NCMBException::INVALID_JSON
	String_t* ___INVALID_JSON_14;
	// System.String NCMB.NCMBException::INVALID_TYPE
	String_t* ___INVALID_TYPE_15;
	// System.String NCMB.NCMBException::REQUIRED
	String_t* ___REQUIRED_16;
	// System.String NCMB.NCMBException::INVALID_FORMAT
	String_t* ___INVALID_FORMAT_17;
	// System.String NCMB.NCMBException::INVALID_VALUE
	String_t* ___INVALID_VALUE_18;
	// System.String NCMB.NCMBException::NOT_EXIST
	String_t* ___NOT_EXIST_19;
	// System.String NCMB.NCMBException::RELATION_ERROR
	String_t* ___RELATION_ERROR_20;
	// System.String NCMB.NCMBException::INVALID_SIZE
	String_t* ___INVALID_SIZE_21;
	// System.String NCMB.NCMBException::INCORRECT_HEADER
	String_t* ___INCORRECT_HEADER_22;
	// System.String NCMB.NCMBException::INCORRECT_PASSWORD
	String_t* ___INCORRECT_PASSWORD_23;
	// System.String NCMB.NCMBException::OAUTH_ERROR
	String_t* ___OAUTH_ERROR_24;
	// System.String NCMB.NCMBException::INVALID_ACL
	String_t* ___INVALID_ACL_25;
	// System.String NCMB.NCMBException::INVALID_OPERATION
	String_t* ___INVALID_OPERATION_26;
	// System.String NCMB.NCMBException::FORBIDDEN_OPERATION
	String_t* ___FORBIDDEN_OPERATION_27;
	// System.String NCMB.NCMBException::INVALID_SETTING
	String_t* ___INVALID_SETTING_28;
	// System.String NCMB.NCMBException::INVALID_GEOPOINT
	String_t* ___INVALID_GEOPOINT_29;
	// System.String NCMB.NCMBException::INVALID_METHOD
	String_t* ___INVALID_METHOD_30;
	// System.String NCMB.NCMBException::DUPPLICATION_ERROR
	String_t* ___DUPPLICATION_ERROR_31;
	// System.String NCMB.NCMBException::FILE_SIZE_ERROR
	String_t* ___FILE_SIZE_ERROR_32;
	// System.String NCMB.NCMBException::DOCUMENT_SIZE_ERROR
	String_t* ___DOCUMENT_SIZE_ERROR_33;
	// System.String NCMB.NCMBException::REQUEST_LIMIT_ERROR
	String_t* ___REQUEST_LIMIT_ERROR_34;
	// System.String NCMB.NCMBException::UNSUPPORT_MEDIA
	String_t* ___UNSUPPORT_MEDIA_35;
	// System.String NCMB.NCMBException::REQUEST_OVERLOAD
	String_t* ___REQUEST_OVERLOAD_36;
	// System.String NCMB.NCMBException::SYSTEM_ERROR
	String_t* ___SYSTEM_ERROR_37;
	// System.String NCMB.NCMBException::STORAGE_ERROR
	String_t* ___STORAGE_ERROR_38;
	// System.String NCMB.NCMBException::MAIL_ERROR
	String_t* ___MAIL_ERROR_39;
	// System.String NCMB.NCMBException::DATABASE_ERROR
	String_t* ___DATABASE_ERROR_40;
	// System.String NCMB.NCMBException::DATA_NOT_FOUND
	String_t* ___DATA_NOT_FOUND_41;

public:
	inline static int32_t get_offset_of_BAD_REQUEST_13() { return static_cast<int32_t>(offsetof(NCMBException_t2865652588_StaticFields, ___BAD_REQUEST_13)); }
	inline String_t* get_BAD_REQUEST_13() const { return ___BAD_REQUEST_13; }
	inline String_t** get_address_of_BAD_REQUEST_13() { return &___BAD_REQUEST_13; }
	inline void set_BAD_REQUEST_13(String_t* value)
	{
		___BAD_REQUEST_13 = value;
		Il2CppCodeGenWriteBarrier((&___BAD_REQUEST_13), value);
	}

	inline static int32_t get_offset_of_INVALID_JSON_14() { return static_cast<int32_t>(offsetof(NCMBException_t2865652588_StaticFields, ___INVALID_JSON_14)); }
	inline String_t* get_INVALID_JSON_14() const { return ___INVALID_JSON_14; }
	inline String_t** get_address_of_INVALID_JSON_14() { return &___INVALID_JSON_14; }
	inline void set_INVALID_JSON_14(String_t* value)
	{
		___INVALID_JSON_14 = value;
		Il2CppCodeGenWriteBarrier((&___INVALID_JSON_14), value);
	}

	inline static int32_t get_offset_of_INVALID_TYPE_15() { return static_cast<int32_t>(offsetof(NCMBException_t2865652588_StaticFields, ___INVALID_TYPE_15)); }
	inline String_t* get_INVALID_TYPE_15() const { return ___INVALID_TYPE_15; }
	inline String_t** get_address_of_INVALID_TYPE_15() { return &___INVALID_TYPE_15; }
	inline void set_INVALID_TYPE_15(String_t* value)
	{
		___INVALID_TYPE_15 = value;
		Il2CppCodeGenWriteBarrier((&___INVALID_TYPE_15), value);
	}

	inline static int32_t get_offset_of_REQUIRED_16() { return static_cast<int32_t>(offsetof(NCMBException_t2865652588_StaticFields, ___REQUIRED_16)); }
	inline String_t* get_REQUIRED_16() const { return ___REQUIRED_16; }
	inline String_t** get_address_of_REQUIRED_16() { return &___REQUIRED_16; }
	inline void set_REQUIRED_16(String_t* value)
	{
		___REQUIRED_16 = value;
		Il2CppCodeGenWriteBarrier((&___REQUIRED_16), value);
	}

	inline static int32_t get_offset_of_INVALID_FORMAT_17() { return static_cast<int32_t>(offsetof(NCMBException_t2865652588_StaticFields, ___INVALID_FORMAT_17)); }
	inline String_t* get_INVALID_FORMAT_17() const { return ___INVALID_FORMAT_17; }
	inline String_t** get_address_of_INVALID_FORMAT_17() { return &___INVALID_FORMAT_17; }
	inline void set_INVALID_FORMAT_17(String_t* value)
	{
		___INVALID_FORMAT_17 = value;
		Il2CppCodeGenWriteBarrier((&___INVALID_FORMAT_17), value);
	}

	inline static int32_t get_offset_of_INVALID_VALUE_18() { return static_cast<int32_t>(offsetof(NCMBException_t2865652588_StaticFields, ___INVALID_VALUE_18)); }
	inline String_t* get_INVALID_VALUE_18() const { return ___INVALID_VALUE_18; }
	inline String_t** get_address_of_INVALID_VALUE_18() { return &___INVALID_VALUE_18; }
	inline void set_INVALID_VALUE_18(String_t* value)
	{
		___INVALID_VALUE_18 = value;
		Il2CppCodeGenWriteBarrier((&___INVALID_VALUE_18), value);
	}

	inline static int32_t get_offset_of_NOT_EXIST_19() { return static_cast<int32_t>(offsetof(NCMBException_t2865652588_StaticFields, ___NOT_EXIST_19)); }
	inline String_t* get_NOT_EXIST_19() const { return ___NOT_EXIST_19; }
	inline String_t** get_address_of_NOT_EXIST_19() { return &___NOT_EXIST_19; }
	inline void set_NOT_EXIST_19(String_t* value)
	{
		___NOT_EXIST_19 = value;
		Il2CppCodeGenWriteBarrier((&___NOT_EXIST_19), value);
	}

	inline static int32_t get_offset_of_RELATION_ERROR_20() { return static_cast<int32_t>(offsetof(NCMBException_t2865652588_StaticFields, ___RELATION_ERROR_20)); }
	inline String_t* get_RELATION_ERROR_20() const { return ___RELATION_ERROR_20; }
	inline String_t** get_address_of_RELATION_ERROR_20() { return &___RELATION_ERROR_20; }
	inline void set_RELATION_ERROR_20(String_t* value)
	{
		___RELATION_ERROR_20 = value;
		Il2CppCodeGenWriteBarrier((&___RELATION_ERROR_20), value);
	}

	inline static int32_t get_offset_of_INVALID_SIZE_21() { return static_cast<int32_t>(offsetof(NCMBException_t2865652588_StaticFields, ___INVALID_SIZE_21)); }
	inline String_t* get_INVALID_SIZE_21() const { return ___INVALID_SIZE_21; }
	inline String_t** get_address_of_INVALID_SIZE_21() { return &___INVALID_SIZE_21; }
	inline void set_INVALID_SIZE_21(String_t* value)
	{
		___INVALID_SIZE_21 = value;
		Il2CppCodeGenWriteBarrier((&___INVALID_SIZE_21), value);
	}

	inline static int32_t get_offset_of_INCORRECT_HEADER_22() { return static_cast<int32_t>(offsetof(NCMBException_t2865652588_StaticFields, ___INCORRECT_HEADER_22)); }
	inline String_t* get_INCORRECT_HEADER_22() const { return ___INCORRECT_HEADER_22; }
	inline String_t** get_address_of_INCORRECT_HEADER_22() { return &___INCORRECT_HEADER_22; }
	inline void set_INCORRECT_HEADER_22(String_t* value)
	{
		___INCORRECT_HEADER_22 = value;
		Il2CppCodeGenWriteBarrier((&___INCORRECT_HEADER_22), value);
	}

	inline static int32_t get_offset_of_INCORRECT_PASSWORD_23() { return static_cast<int32_t>(offsetof(NCMBException_t2865652588_StaticFields, ___INCORRECT_PASSWORD_23)); }
	inline String_t* get_INCORRECT_PASSWORD_23() const { return ___INCORRECT_PASSWORD_23; }
	inline String_t** get_address_of_INCORRECT_PASSWORD_23() { return &___INCORRECT_PASSWORD_23; }
	inline void set_INCORRECT_PASSWORD_23(String_t* value)
	{
		___INCORRECT_PASSWORD_23 = value;
		Il2CppCodeGenWriteBarrier((&___INCORRECT_PASSWORD_23), value);
	}

	inline static int32_t get_offset_of_OAUTH_ERROR_24() { return static_cast<int32_t>(offsetof(NCMBException_t2865652588_StaticFields, ___OAUTH_ERROR_24)); }
	inline String_t* get_OAUTH_ERROR_24() const { return ___OAUTH_ERROR_24; }
	inline String_t** get_address_of_OAUTH_ERROR_24() { return &___OAUTH_ERROR_24; }
	inline void set_OAUTH_ERROR_24(String_t* value)
	{
		___OAUTH_ERROR_24 = value;
		Il2CppCodeGenWriteBarrier((&___OAUTH_ERROR_24), value);
	}

	inline static int32_t get_offset_of_INVALID_ACL_25() { return static_cast<int32_t>(offsetof(NCMBException_t2865652588_StaticFields, ___INVALID_ACL_25)); }
	inline String_t* get_INVALID_ACL_25() const { return ___INVALID_ACL_25; }
	inline String_t** get_address_of_INVALID_ACL_25() { return &___INVALID_ACL_25; }
	inline void set_INVALID_ACL_25(String_t* value)
	{
		___INVALID_ACL_25 = value;
		Il2CppCodeGenWriteBarrier((&___INVALID_ACL_25), value);
	}

	inline static int32_t get_offset_of_INVALID_OPERATION_26() { return static_cast<int32_t>(offsetof(NCMBException_t2865652588_StaticFields, ___INVALID_OPERATION_26)); }
	inline String_t* get_INVALID_OPERATION_26() const { return ___INVALID_OPERATION_26; }
	inline String_t** get_address_of_INVALID_OPERATION_26() { return &___INVALID_OPERATION_26; }
	inline void set_INVALID_OPERATION_26(String_t* value)
	{
		___INVALID_OPERATION_26 = value;
		Il2CppCodeGenWriteBarrier((&___INVALID_OPERATION_26), value);
	}

	inline static int32_t get_offset_of_FORBIDDEN_OPERATION_27() { return static_cast<int32_t>(offsetof(NCMBException_t2865652588_StaticFields, ___FORBIDDEN_OPERATION_27)); }
	inline String_t* get_FORBIDDEN_OPERATION_27() const { return ___FORBIDDEN_OPERATION_27; }
	inline String_t** get_address_of_FORBIDDEN_OPERATION_27() { return &___FORBIDDEN_OPERATION_27; }
	inline void set_FORBIDDEN_OPERATION_27(String_t* value)
	{
		___FORBIDDEN_OPERATION_27 = value;
		Il2CppCodeGenWriteBarrier((&___FORBIDDEN_OPERATION_27), value);
	}

	inline static int32_t get_offset_of_INVALID_SETTING_28() { return static_cast<int32_t>(offsetof(NCMBException_t2865652588_StaticFields, ___INVALID_SETTING_28)); }
	inline String_t* get_INVALID_SETTING_28() const { return ___INVALID_SETTING_28; }
	inline String_t** get_address_of_INVALID_SETTING_28() { return &___INVALID_SETTING_28; }
	inline void set_INVALID_SETTING_28(String_t* value)
	{
		___INVALID_SETTING_28 = value;
		Il2CppCodeGenWriteBarrier((&___INVALID_SETTING_28), value);
	}

	inline static int32_t get_offset_of_INVALID_GEOPOINT_29() { return static_cast<int32_t>(offsetof(NCMBException_t2865652588_StaticFields, ___INVALID_GEOPOINT_29)); }
	inline String_t* get_INVALID_GEOPOINT_29() const { return ___INVALID_GEOPOINT_29; }
	inline String_t** get_address_of_INVALID_GEOPOINT_29() { return &___INVALID_GEOPOINT_29; }
	inline void set_INVALID_GEOPOINT_29(String_t* value)
	{
		___INVALID_GEOPOINT_29 = value;
		Il2CppCodeGenWriteBarrier((&___INVALID_GEOPOINT_29), value);
	}

	inline static int32_t get_offset_of_INVALID_METHOD_30() { return static_cast<int32_t>(offsetof(NCMBException_t2865652588_StaticFields, ___INVALID_METHOD_30)); }
	inline String_t* get_INVALID_METHOD_30() const { return ___INVALID_METHOD_30; }
	inline String_t** get_address_of_INVALID_METHOD_30() { return &___INVALID_METHOD_30; }
	inline void set_INVALID_METHOD_30(String_t* value)
	{
		___INVALID_METHOD_30 = value;
		Il2CppCodeGenWriteBarrier((&___INVALID_METHOD_30), value);
	}

	inline static int32_t get_offset_of_DUPPLICATION_ERROR_31() { return static_cast<int32_t>(offsetof(NCMBException_t2865652588_StaticFields, ___DUPPLICATION_ERROR_31)); }
	inline String_t* get_DUPPLICATION_ERROR_31() const { return ___DUPPLICATION_ERROR_31; }
	inline String_t** get_address_of_DUPPLICATION_ERROR_31() { return &___DUPPLICATION_ERROR_31; }
	inline void set_DUPPLICATION_ERROR_31(String_t* value)
	{
		___DUPPLICATION_ERROR_31 = value;
		Il2CppCodeGenWriteBarrier((&___DUPPLICATION_ERROR_31), value);
	}

	inline static int32_t get_offset_of_FILE_SIZE_ERROR_32() { return static_cast<int32_t>(offsetof(NCMBException_t2865652588_StaticFields, ___FILE_SIZE_ERROR_32)); }
	inline String_t* get_FILE_SIZE_ERROR_32() const { return ___FILE_SIZE_ERROR_32; }
	inline String_t** get_address_of_FILE_SIZE_ERROR_32() { return &___FILE_SIZE_ERROR_32; }
	inline void set_FILE_SIZE_ERROR_32(String_t* value)
	{
		___FILE_SIZE_ERROR_32 = value;
		Il2CppCodeGenWriteBarrier((&___FILE_SIZE_ERROR_32), value);
	}

	inline static int32_t get_offset_of_DOCUMENT_SIZE_ERROR_33() { return static_cast<int32_t>(offsetof(NCMBException_t2865652588_StaticFields, ___DOCUMENT_SIZE_ERROR_33)); }
	inline String_t* get_DOCUMENT_SIZE_ERROR_33() const { return ___DOCUMENT_SIZE_ERROR_33; }
	inline String_t** get_address_of_DOCUMENT_SIZE_ERROR_33() { return &___DOCUMENT_SIZE_ERROR_33; }
	inline void set_DOCUMENT_SIZE_ERROR_33(String_t* value)
	{
		___DOCUMENT_SIZE_ERROR_33 = value;
		Il2CppCodeGenWriteBarrier((&___DOCUMENT_SIZE_ERROR_33), value);
	}

	inline static int32_t get_offset_of_REQUEST_LIMIT_ERROR_34() { return static_cast<int32_t>(offsetof(NCMBException_t2865652588_StaticFields, ___REQUEST_LIMIT_ERROR_34)); }
	inline String_t* get_REQUEST_LIMIT_ERROR_34() const { return ___REQUEST_LIMIT_ERROR_34; }
	inline String_t** get_address_of_REQUEST_LIMIT_ERROR_34() { return &___REQUEST_LIMIT_ERROR_34; }
	inline void set_REQUEST_LIMIT_ERROR_34(String_t* value)
	{
		___REQUEST_LIMIT_ERROR_34 = value;
		Il2CppCodeGenWriteBarrier((&___REQUEST_LIMIT_ERROR_34), value);
	}

	inline static int32_t get_offset_of_UNSUPPORT_MEDIA_35() { return static_cast<int32_t>(offsetof(NCMBException_t2865652588_StaticFields, ___UNSUPPORT_MEDIA_35)); }
	inline String_t* get_UNSUPPORT_MEDIA_35() const { return ___UNSUPPORT_MEDIA_35; }
	inline String_t** get_address_of_UNSUPPORT_MEDIA_35() { return &___UNSUPPORT_MEDIA_35; }
	inline void set_UNSUPPORT_MEDIA_35(String_t* value)
	{
		___UNSUPPORT_MEDIA_35 = value;
		Il2CppCodeGenWriteBarrier((&___UNSUPPORT_MEDIA_35), value);
	}

	inline static int32_t get_offset_of_REQUEST_OVERLOAD_36() { return static_cast<int32_t>(offsetof(NCMBException_t2865652588_StaticFields, ___REQUEST_OVERLOAD_36)); }
	inline String_t* get_REQUEST_OVERLOAD_36() const { return ___REQUEST_OVERLOAD_36; }
	inline String_t** get_address_of_REQUEST_OVERLOAD_36() { return &___REQUEST_OVERLOAD_36; }
	inline void set_REQUEST_OVERLOAD_36(String_t* value)
	{
		___REQUEST_OVERLOAD_36 = value;
		Il2CppCodeGenWriteBarrier((&___REQUEST_OVERLOAD_36), value);
	}

	inline static int32_t get_offset_of_SYSTEM_ERROR_37() { return static_cast<int32_t>(offsetof(NCMBException_t2865652588_StaticFields, ___SYSTEM_ERROR_37)); }
	inline String_t* get_SYSTEM_ERROR_37() const { return ___SYSTEM_ERROR_37; }
	inline String_t** get_address_of_SYSTEM_ERROR_37() { return &___SYSTEM_ERROR_37; }
	inline void set_SYSTEM_ERROR_37(String_t* value)
	{
		___SYSTEM_ERROR_37 = value;
		Il2CppCodeGenWriteBarrier((&___SYSTEM_ERROR_37), value);
	}

	inline static int32_t get_offset_of_STORAGE_ERROR_38() { return static_cast<int32_t>(offsetof(NCMBException_t2865652588_StaticFields, ___STORAGE_ERROR_38)); }
	inline String_t* get_STORAGE_ERROR_38() const { return ___STORAGE_ERROR_38; }
	inline String_t** get_address_of_STORAGE_ERROR_38() { return &___STORAGE_ERROR_38; }
	inline void set_STORAGE_ERROR_38(String_t* value)
	{
		___STORAGE_ERROR_38 = value;
		Il2CppCodeGenWriteBarrier((&___STORAGE_ERROR_38), value);
	}

	inline static int32_t get_offset_of_MAIL_ERROR_39() { return static_cast<int32_t>(offsetof(NCMBException_t2865652588_StaticFields, ___MAIL_ERROR_39)); }
	inline String_t* get_MAIL_ERROR_39() const { return ___MAIL_ERROR_39; }
	inline String_t** get_address_of_MAIL_ERROR_39() { return &___MAIL_ERROR_39; }
	inline void set_MAIL_ERROR_39(String_t* value)
	{
		___MAIL_ERROR_39 = value;
		Il2CppCodeGenWriteBarrier((&___MAIL_ERROR_39), value);
	}

	inline static int32_t get_offset_of_DATABASE_ERROR_40() { return static_cast<int32_t>(offsetof(NCMBException_t2865652588_StaticFields, ___DATABASE_ERROR_40)); }
	inline String_t* get_DATABASE_ERROR_40() const { return ___DATABASE_ERROR_40; }
	inline String_t** get_address_of_DATABASE_ERROR_40() { return &___DATABASE_ERROR_40; }
	inline void set_DATABASE_ERROR_40(String_t* value)
	{
		___DATABASE_ERROR_40 = value;
		Il2CppCodeGenWriteBarrier((&___DATABASE_ERROR_40), value);
	}

	inline static int32_t get_offset_of_DATA_NOT_FOUND_41() { return static_cast<int32_t>(offsetof(NCMBException_t2865652588_StaticFields, ___DATA_NOT_FOUND_41)); }
	inline String_t* get_DATA_NOT_FOUND_41() const { return ___DATA_NOT_FOUND_41; }
	inline String_t** get_address_of_DATA_NOT_FOUND_41() { return &___DATA_NOT_FOUND_41; }
	inline void set_DATA_NOT_FOUND_41(String_t* value)
	{
		___DATA_NOT_FOUND_41 = value;
		Il2CppCodeGenWriteBarrier((&___DATA_NOT_FOUND_41), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NCMBEXCEPTION_T2865652588_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef UNITYEVENT_T2581268647_H
#define UNITYEVENT_T2581268647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t2581268647  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t2581268647, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_T2581268647_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef U3CUPLOADSCREENSHOTU3EC__ITERATOR1_T762007288_H
#define U3CUPLOADSCREENSHOTU3EC__ITERATOR1_T762007288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SlackApi.SlackAPI/<UploadScreenShot>c__Iterator1
struct  U3CUploadScreenShotU3Ec__Iterator1_t762007288  : public RuntimeObject
{
public:
	// System.Nullable`1<System.Int32> SlackApi.SlackAPI/<UploadScreenShot>c__Iterator1::x
	Nullable_1_t378540539  ___x_0;
	// System.Nullable`1<System.Int32> SlackApi.SlackAPI/<UploadScreenShot>c__Iterator1::y
	Nullable_1_t378540539  ___y_1;
	// System.Int32 SlackApi.SlackAPI/<UploadScreenShot>c__Iterator1::<width>__0
	int32_t ___U3CwidthU3E__0_2;
	// System.Int32 SlackApi.SlackAPI/<UploadScreenShot>c__Iterator1::<height>__0
	int32_t ___U3CheightU3E__0_3;
	// UnityEngine.Texture2D SlackApi.SlackAPI/<UploadScreenShot>c__Iterator1::<texture>__0
	Texture2D_t3840446185 * ___U3CtextureU3E__0_4;
	// UnityEngine.Rect SlackApi.SlackAPI/<UploadScreenShot>c__Iterator1::<source>__0
	Rect_t2360479859  ___U3CsourceU3E__0_5;
	// UnityEngine.WWWForm SlackApi.SlackAPI/<UploadScreenShot>c__Iterator1::<form>__0
	WWWForm_t4064702195 * ___U3CformU3E__0_6;
	// System.Byte[] SlackApi.SlackAPI/<UploadScreenShot>c__Iterator1::<contents>__0
	ByteU5BU5D_t4116647657* ___U3CcontentsU3E__0_7;
	// SlackApi.UploadData SlackApi.SlackAPI/<UploadScreenShot>c__Iterator1::data
	UploadData_t2454610352 * ___data_8;
	// System.String SlackApi.SlackAPI/<UploadScreenShot>c__Iterator1::<url>__0
	String_t* ___U3CurlU3E__0_9;
	// UnityEngine.WWW SlackApi.SlackAPI/<UploadScreenShot>c__Iterator1::<www>__0
	WWW_t3688466362 * ___U3CwwwU3E__0_10;
	// System.String SlackApi.SlackAPI/<UploadScreenShot>c__Iterator1::<error>__0
	String_t* ___U3CerrorU3E__0_11;
	// System.Action`1<System.String> SlackApi.SlackAPI/<UploadScreenShot>c__Iterator1::onError
	Action_1_t2019918284 * ___onError_12;
	// System.Action SlackApi.SlackAPI/<UploadScreenShot>c__Iterator1::onSuccess
	Action_t1264377477 * ___onSuccess_13;
	// System.Object SlackApi.SlackAPI/<UploadScreenShot>c__Iterator1::$current
	RuntimeObject * ___U24current_14;
	// System.Boolean SlackApi.SlackAPI/<UploadScreenShot>c__Iterator1::$disposing
	bool ___U24disposing_15;
	// System.Int32 SlackApi.SlackAPI/<UploadScreenShot>c__Iterator1::$PC
	int32_t ___U24PC_16;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(U3CUploadScreenShotU3Ec__Iterator1_t762007288, ___x_0)); }
	inline Nullable_1_t378540539  get_x_0() const { return ___x_0; }
	inline Nullable_1_t378540539 * get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(Nullable_1_t378540539  value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(U3CUploadScreenShotU3Ec__Iterator1_t762007288, ___y_1)); }
	inline Nullable_1_t378540539  get_y_1() const { return ___y_1; }
	inline Nullable_1_t378540539 * get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(Nullable_1_t378540539  value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_U3CwidthU3E__0_2() { return static_cast<int32_t>(offsetof(U3CUploadScreenShotU3Ec__Iterator1_t762007288, ___U3CwidthU3E__0_2)); }
	inline int32_t get_U3CwidthU3E__0_2() const { return ___U3CwidthU3E__0_2; }
	inline int32_t* get_address_of_U3CwidthU3E__0_2() { return &___U3CwidthU3E__0_2; }
	inline void set_U3CwidthU3E__0_2(int32_t value)
	{
		___U3CwidthU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_U3CheightU3E__0_3() { return static_cast<int32_t>(offsetof(U3CUploadScreenShotU3Ec__Iterator1_t762007288, ___U3CheightU3E__0_3)); }
	inline int32_t get_U3CheightU3E__0_3() const { return ___U3CheightU3E__0_3; }
	inline int32_t* get_address_of_U3CheightU3E__0_3() { return &___U3CheightU3E__0_3; }
	inline void set_U3CheightU3E__0_3(int32_t value)
	{
		___U3CheightU3E__0_3 = value;
	}

	inline static int32_t get_offset_of_U3CtextureU3E__0_4() { return static_cast<int32_t>(offsetof(U3CUploadScreenShotU3Ec__Iterator1_t762007288, ___U3CtextureU3E__0_4)); }
	inline Texture2D_t3840446185 * get_U3CtextureU3E__0_4() const { return ___U3CtextureU3E__0_4; }
	inline Texture2D_t3840446185 ** get_address_of_U3CtextureU3E__0_4() { return &___U3CtextureU3E__0_4; }
	inline void set_U3CtextureU3E__0_4(Texture2D_t3840446185 * value)
	{
		___U3CtextureU3E__0_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtextureU3E__0_4), value);
	}

	inline static int32_t get_offset_of_U3CsourceU3E__0_5() { return static_cast<int32_t>(offsetof(U3CUploadScreenShotU3Ec__Iterator1_t762007288, ___U3CsourceU3E__0_5)); }
	inline Rect_t2360479859  get_U3CsourceU3E__0_5() const { return ___U3CsourceU3E__0_5; }
	inline Rect_t2360479859 * get_address_of_U3CsourceU3E__0_5() { return &___U3CsourceU3E__0_5; }
	inline void set_U3CsourceU3E__0_5(Rect_t2360479859  value)
	{
		___U3CsourceU3E__0_5 = value;
	}

	inline static int32_t get_offset_of_U3CformU3E__0_6() { return static_cast<int32_t>(offsetof(U3CUploadScreenShotU3Ec__Iterator1_t762007288, ___U3CformU3E__0_6)); }
	inline WWWForm_t4064702195 * get_U3CformU3E__0_6() const { return ___U3CformU3E__0_6; }
	inline WWWForm_t4064702195 ** get_address_of_U3CformU3E__0_6() { return &___U3CformU3E__0_6; }
	inline void set_U3CformU3E__0_6(WWWForm_t4064702195 * value)
	{
		___U3CformU3E__0_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CformU3E__0_6), value);
	}

	inline static int32_t get_offset_of_U3CcontentsU3E__0_7() { return static_cast<int32_t>(offsetof(U3CUploadScreenShotU3Ec__Iterator1_t762007288, ___U3CcontentsU3E__0_7)); }
	inline ByteU5BU5D_t4116647657* get_U3CcontentsU3E__0_7() const { return ___U3CcontentsU3E__0_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CcontentsU3E__0_7() { return &___U3CcontentsU3E__0_7; }
	inline void set_U3CcontentsU3E__0_7(ByteU5BU5D_t4116647657* value)
	{
		___U3CcontentsU3E__0_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcontentsU3E__0_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(U3CUploadScreenShotU3Ec__Iterator1_t762007288, ___data_8)); }
	inline UploadData_t2454610352 * get_data_8() const { return ___data_8; }
	inline UploadData_t2454610352 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(UploadData_t2454610352 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}

	inline static int32_t get_offset_of_U3CurlU3E__0_9() { return static_cast<int32_t>(offsetof(U3CUploadScreenShotU3Ec__Iterator1_t762007288, ___U3CurlU3E__0_9)); }
	inline String_t* get_U3CurlU3E__0_9() const { return ___U3CurlU3E__0_9; }
	inline String_t** get_address_of_U3CurlU3E__0_9() { return &___U3CurlU3E__0_9; }
	inline void set_U3CurlU3E__0_9(String_t* value)
	{
		___U3CurlU3E__0_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CurlU3E__0_9), value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E__0_10() { return static_cast<int32_t>(offsetof(U3CUploadScreenShotU3Ec__Iterator1_t762007288, ___U3CwwwU3E__0_10)); }
	inline WWW_t3688466362 * get_U3CwwwU3E__0_10() const { return ___U3CwwwU3E__0_10; }
	inline WWW_t3688466362 ** get_address_of_U3CwwwU3E__0_10() { return &___U3CwwwU3E__0_10; }
	inline void set_U3CwwwU3E__0_10(WWW_t3688466362 * value)
	{
		___U3CwwwU3E__0_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwwwU3E__0_10), value);
	}

	inline static int32_t get_offset_of_U3CerrorU3E__0_11() { return static_cast<int32_t>(offsetof(U3CUploadScreenShotU3Ec__Iterator1_t762007288, ___U3CerrorU3E__0_11)); }
	inline String_t* get_U3CerrorU3E__0_11() const { return ___U3CerrorU3E__0_11; }
	inline String_t** get_address_of_U3CerrorU3E__0_11() { return &___U3CerrorU3E__0_11; }
	inline void set_U3CerrorU3E__0_11(String_t* value)
	{
		___U3CerrorU3E__0_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CerrorU3E__0_11), value);
	}

	inline static int32_t get_offset_of_onError_12() { return static_cast<int32_t>(offsetof(U3CUploadScreenShotU3Ec__Iterator1_t762007288, ___onError_12)); }
	inline Action_1_t2019918284 * get_onError_12() const { return ___onError_12; }
	inline Action_1_t2019918284 ** get_address_of_onError_12() { return &___onError_12; }
	inline void set_onError_12(Action_1_t2019918284 * value)
	{
		___onError_12 = value;
		Il2CppCodeGenWriteBarrier((&___onError_12), value);
	}

	inline static int32_t get_offset_of_onSuccess_13() { return static_cast<int32_t>(offsetof(U3CUploadScreenShotU3Ec__Iterator1_t762007288, ___onSuccess_13)); }
	inline Action_t1264377477 * get_onSuccess_13() const { return ___onSuccess_13; }
	inline Action_t1264377477 ** get_address_of_onSuccess_13() { return &___onSuccess_13; }
	inline void set_onSuccess_13(Action_t1264377477 * value)
	{
		___onSuccess_13 = value;
		Il2CppCodeGenWriteBarrier((&___onSuccess_13), value);
	}

	inline static int32_t get_offset_of_U24current_14() { return static_cast<int32_t>(offsetof(U3CUploadScreenShotU3Ec__Iterator1_t762007288, ___U24current_14)); }
	inline RuntimeObject * get_U24current_14() const { return ___U24current_14; }
	inline RuntimeObject ** get_address_of_U24current_14() { return &___U24current_14; }
	inline void set_U24current_14(RuntimeObject * value)
	{
		___U24current_14 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_14), value);
	}

	inline static int32_t get_offset_of_U24disposing_15() { return static_cast<int32_t>(offsetof(U3CUploadScreenShotU3Ec__Iterator1_t762007288, ___U24disposing_15)); }
	inline bool get_U24disposing_15() const { return ___U24disposing_15; }
	inline bool* get_address_of_U24disposing_15() { return &___U24disposing_15; }
	inline void set_U24disposing_15(bool value)
	{
		___U24disposing_15 = value;
	}

	inline static int32_t get_offset_of_U24PC_16() { return static_cast<int32_t>(offsetof(U3CUploadScreenShotU3Ec__Iterator1_t762007288, ___U24PC_16)); }
	inline int32_t get_U24PC_16() const { return ___U24PC_16; }
	inline int32_t* get_address_of_U24PC_16() { return &___U24PC_16; }
	inline void set_U24PC_16(int32_t value)
	{
		___U24PC_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUPLOADSCREENSHOTU3EC__ITERATOR1_T762007288_H
#ifndef TEXTUREFORMAT_T2701165832_H
#define TEXTUREFORMAT_T2701165832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t2701165832 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureFormat_t2701165832, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREFORMAT_T2701165832_H
#ifndef CONTENTTYPE_T1787303396_H
#define CONTENTTYPE_T1787303396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/ContentType
struct  ContentType_t1787303396 
{
public:
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ContentType_t1787303396, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTTYPE_T1787303396_H
#ifndef INPUTTYPE_T1770400679_H
#define INPUTTYPE_T1770400679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/InputType
struct  InputType_t1770400679 
{
public:
	// System.Int32 UnityEngine.UI.InputField/InputType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InputType_t1770400679, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTTYPE_T1770400679_H
#ifndef TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#define TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_t1530597702 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_t1530597702, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#ifndef CHARACTERVALIDATION_T4051914437_H
#define CHARACTERVALIDATION_T4051914437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/CharacterValidation
struct  CharacterValidation_t4051914437 
{
public:
	// System.Int32 UnityEngine.UI.InputField/CharacterValidation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CharacterValidation_t4051914437, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERVALIDATION_T4051914437_H
#ifndef LINETYPE_T4214648469_H
#define LINETYPE_T4214648469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/LineType
struct  LineType_t4214648469 
{
public:
	// System.Int32 UnityEngine.UI.InputField/LineType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LineType_t4214648469, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINETYPE_T4214648469_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef TOUCHTYPE_T2034578258_H
#define TOUCHTYPE_T2034578258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchType
struct  TouchType_t2034578258 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchType_t2034578258, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHTYPE_T2034578258_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T1066900953_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T3468814247_H
#ifndef SPACE_T654135784_H
#define SPACE_T654135784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Space
struct  Space_t654135784 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Space_t654135784, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPACE_T654135784_H
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSITION_T1769908631_H
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONSTATE_T2656606514_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef TOUCHPHASE_T72348083_H
#define TOUCHPHASE_T72348083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchPhase
struct  TouchPhase_t72348083 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchPhase_t72348083, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHPHASE_T72348083_H
#ifndef BUTTONCLICKEDEVENT_T48803504_H
#define BUTTONCLICKEDEVENT_T48803504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button/ButtonClickedEvent
struct  ButtonClickedEvent_t48803504  : public UnityEvent_t2581268647
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTONCLICKEDEVENT_T48803504_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef TOUCH_T1921856868_H
#define TOUCH_T1921856868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Touch
struct  Touch_t1921856868 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t2156229523  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t2156229523  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t2156229523  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Position_1)); }
	inline Vector2_t2156229523  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_t2156229523 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_t2156229523  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_RawPosition_2)); }
	inline Vector2_t2156229523  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_t2156229523 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_t2156229523  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_PositionDelta_3)); }
	inline Vector2_t2156229523  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_t2156229523 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_t2156229523  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCH_T1921856868_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_10;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_11;

public:
	inline static int32_t get_offset_of_ticks_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_10)); }
	inline TimeSpan_t881159249  get_ticks_10() const { return ___ticks_10; }
	inline TimeSpan_t881159249 * get_address_of_ticks_10() { return &___ticks_10; }
	inline void set_ticks_10(TimeSpan_t881159249  value)
	{
		___ticks_10 = value;
	}

	inline static int32_t get_offset_of_kind_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_11)); }
	inline int32_t get_kind_11() const { return ___kind_11; }
	inline int32_t* get_address_of_kind_11() { return &___kind_11; }
	inline void set_kind_11(int32_t value)
	{
		___kind_11 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_12;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_13;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_14;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_15;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_16;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_17;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_18;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_19;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_20;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_21;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_22;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_23;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_24;

public:
	inline static int32_t get_offset_of_MaxValue_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_12)); }
	inline DateTime_t3738529785  get_MaxValue_12() const { return ___MaxValue_12; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_12() { return &___MaxValue_12; }
	inline void set_MaxValue_12(DateTime_t3738529785  value)
	{
		___MaxValue_12 = value;
	}

	inline static int32_t get_offset_of_MinValue_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_13)); }
	inline DateTime_t3738529785  get_MinValue_13() const { return ___MinValue_13; }
	inline DateTime_t3738529785 * get_address_of_MinValue_13() { return &___MinValue_13; }
	inline void set_MinValue_13(DateTime_t3738529785  value)
	{
		___MinValue_13 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_14)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_14() const { return ___ParseTimeFormats_14; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_14() { return &___ParseTimeFormats_14; }
	inline void set_ParseTimeFormats_14(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_14 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_14), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_15() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_15)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_15() const { return ___ParseYearDayMonthFormats_15; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_15() { return &___ParseYearDayMonthFormats_15; }
	inline void set_ParseYearDayMonthFormats_15(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_15 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_15), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_16() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_16)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_16() const { return ___ParseYearMonthDayFormats_16; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_16() { return &___ParseYearMonthDayFormats_16; }
	inline void set_ParseYearMonthDayFormats_16(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_16 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_16), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_17() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_17)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_17() const { return ___ParseDayMonthYearFormats_17; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_17() { return &___ParseDayMonthYearFormats_17; }
	inline void set_ParseDayMonthYearFormats_17(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_17 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_17), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_18() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_18)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_18() const { return ___ParseMonthDayYearFormats_18; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_18() { return &___ParseMonthDayYearFormats_18; }
	inline void set_ParseMonthDayYearFormats_18(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_18 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_18), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_19() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_19)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_19() const { return ___MonthDayShortFormats_19; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_19() { return &___MonthDayShortFormats_19; }
	inline void set_MonthDayShortFormats_19(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_19 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_19), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_20() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_20)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_20() const { return ___DayMonthShortFormats_20; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_20() { return &___DayMonthShortFormats_20; }
	inline void set_DayMonthShortFormats_20(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_20 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_20), value);
	}

	inline static int32_t get_offset_of_daysmonth_21() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_21)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_21() const { return ___daysmonth_21; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_21() { return &___daysmonth_21; }
	inline void set_daysmonth_21(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_21 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_21), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_22() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_22)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_22() const { return ___daysmonthleap_22; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_22() { return &___daysmonthleap_22; }
	inline void set_daysmonthleap_22(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_22 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_22), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_23() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_23)); }
	inline RuntimeObject * get_to_local_time_span_object_23() const { return ___to_local_time_span_object_23; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_23() { return &___to_local_time_span_object_23; }
	inline void set_to_local_time_span_object_23(RuntimeObject * value)
	{
		___to_local_time_span_object_23 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_23), value);
	}

	inline static int32_t get_offset_of_last_now_24() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_24)); }
	inline int64_t get_last_now_24() const { return ___last_now_24; }
	inline int64_t* get_address_of_last_now_24() { return &___last_now_24; }
	inline void set_last_now_24(int64_t value)
	{
		___last_now_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef FUNC_2_T1501638956_H
#define FUNC_2_T1501638956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Object>
struct  Func_2_t1501638956  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T1501638956_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef ACTION_1_T2019918284_H
#define ACTION_1_T2019918284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.String>
struct  Action_1_t2019918284  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T2019918284_H
#ifndef NCMBQUERYCALLBACK_1_T3839413818_H
#define NCMBQUERYCALLBACK_1_T3839413818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.NCMBQueryCallback`1<NCMB.NCMBObject>
struct  NCMBQueryCallback_1_t3839413818  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NCMBQUERYCALLBACK_1_T3839413818_H
#ifndef ACTION_T1264377477_H
#define ACTION_T1264377477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t1264377477  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T1264377477_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef UNITYACTION_T3245792599_H
#define UNITYACTION_T3245792599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction
struct  UnityAction_t3245792599  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_T3245792599_H
#ifndef FUNC_2_T268983481_H
#define FUNC_2_T268983481_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>
struct  Func_2_t268983481  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T268983481_H
#ifndef NCMBCALLBACK_T3196884667_H
#define NCMBCALLBACK_T3196884667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.NCMBCallback
struct  NCMBCallback_t3196884667  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NCMBCALLBACK_T3196884667_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef NULLABLE_1_T1166124571_H
#define NULLABLE_1_T1166124571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.DateTime>
struct  Nullable_1_t1166124571 
{
public:
	// T System.Nullable`1::value
	DateTime_t3738529785  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1166124571, ___value_0)); }
	inline DateTime_t3738529785  get_value_0() const { return ___value_0; }
	inline DateTime_t3738529785 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_t3738529785  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1166124571, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1166124571_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef NCMBOBJECT_T2651186434_H
#define NCMBOBJECT_T2651186434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.NCMBObject
struct  NCMBObject_t2651186434  : public RuntimeObject
{
public:
	// System.Boolean NCMB.NCMBObject::_dirty
	bool ____dirty_1;
	// System.Collections.Generic.IDictionary`2<System.String,System.Boolean> NCMB.NCMBObject::dataAvailability
	RuntimeObject* ___dataAvailability_2;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> NCMB.NCMBObject::estimatedData
	RuntimeObject* ___estimatedData_3;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> NCMB.NCMBObject::serverData
	RuntimeObject* ___serverData_4;
	// System.Object NCMB.NCMBObject::mutex
	RuntimeObject * ___mutex_5;
	// System.Collections.Generic.LinkedList`1<System.Collections.Generic.IDictionary`2<System.String,NCMB.Internal.INCMBFieldOperation>> NCMB.NCMBObject::operationSetQueue
	LinkedList_1_t2295666153 * ___operationSetQueue_7;
	// System.String NCMB.NCMBObject::_className
	String_t* ____className_8;
	// System.String NCMB.NCMBObject::_objectId
	String_t* ____objectId_9;
	// System.Nullable`1<System.DateTime> NCMB.NCMBObject::_updateDate
	Nullable_1_t1166124571  ____updateDate_10;
	// System.Nullable`1<System.DateTime> NCMB.NCMBObject::_createDate
	Nullable_1_t1166124571  ____createDate_11;

public:
	inline static int32_t get_offset_of__dirty_1() { return static_cast<int32_t>(offsetof(NCMBObject_t2651186434, ____dirty_1)); }
	inline bool get__dirty_1() const { return ____dirty_1; }
	inline bool* get_address_of__dirty_1() { return &____dirty_1; }
	inline void set__dirty_1(bool value)
	{
		____dirty_1 = value;
	}

	inline static int32_t get_offset_of_dataAvailability_2() { return static_cast<int32_t>(offsetof(NCMBObject_t2651186434, ___dataAvailability_2)); }
	inline RuntimeObject* get_dataAvailability_2() const { return ___dataAvailability_2; }
	inline RuntimeObject** get_address_of_dataAvailability_2() { return &___dataAvailability_2; }
	inline void set_dataAvailability_2(RuntimeObject* value)
	{
		___dataAvailability_2 = value;
		Il2CppCodeGenWriteBarrier((&___dataAvailability_2), value);
	}

	inline static int32_t get_offset_of_estimatedData_3() { return static_cast<int32_t>(offsetof(NCMBObject_t2651186434, ___estimatedData_3)); }
	inline RuntimeObject* get_estimatedData_3() const { return ___estimatedData_3; }
	inline RuntimeObject** get_address_of_estimatedData_3() { return &___estimatedData_3; }
	inline void set_estimatedData_3(RuntimeObject* value)
	{
		___estimatedData_3 = value;
		Il2CppCodeGenWriteBarrier((&___estimatedData_3), value);
	}

	inline static int32_t get_offset_of_serverData_4() { return static_cast<int32_t>(offsetof(NCMBObject_t2651186434, ___serverData_4)); }
	inline RuntimeObject* get_serverData_4() const { return ___serverData_4; }
	inline RuntimeObject** get_address_of_serverData_4() { return &___serverData_4; }
	inline void set_serverData_4(RuntimeObject* value)
	{
		___serverData_4 = value;
		Il2CppCodeGenWriteBarrier((&___serverData_4), value);
	}

	inline static int32_t get_offset_of_mutex_5() { return static_cast<int32_t>(offsetof(NCMBObject_t2651186434, ___mutex_5)); }
	inline RuntimeObject * get_mutex_5() const { return ___mutex_5; }
	inline RuntimeObject ** get_address_of_mutex_5() { return &___mutex_5; }
	inline void set_mutex_5(RuntimeObject * value)
	{
		___mutex_5 = value;
		Il2CppCodeGenWriteBarrier((&___mutex_5), value);
	}

	inline static int32_t get_offset_of_operationSetQueue_7() { return static_cast<int32_t>(offsetof(NCMBObject_t2651186434, ___operationSetQueue_7)); }
	inline LinkedList_1_t2295666153 * get_operationSetQueue_7() const { return ___operationSetQueue_7; }
	inline LinkedList_1_t2295666153 ** get_address_of_operationSetQueue_7() { return &___operationSetQueue_7; }
	inline void set_operationSetQueue_7(LinkedList_1_t2295666153 * value)
	{
		___operationSetQueue_7 = value;
		Il2CppCodeGenWriteBarrier((&___operationSetQueue_7), value);
	}

	inline static int32_t get_offset_of__className_8() { return static_cast<int32_t>(offsetof(NCMBObject_t2651186434, ____className_8)); }
	inline String_t* get__className_8() const { return ____className_8; }
	inline String_t** get_address_of__className_8() { return &____className_8; }
	inline void set__className_8(String_t* value)
	{
		____className_8 = value;
		Il2CppCodeGenWriteBarrier((&____className_8), value);
	}

	inline static int32_t get_offset_of__objectId_9() { return static_cast<int32_t>(offsetof(NCMBObject_t2651186434, ____objectId_9)); }
	inline String_t* get__objectId_9() const { return ____objectId_9; }
	inline String_t** get_address_of__objectId_9() { return &____objectId_9; }
	inline void set__objectId_9(String_t* value)
	{
		____objectId_9 = value;
		Il2CppCodeGenWriteBarrier((&____objectId_9), value);
	}

	inline static int32_t get_offset_of__updateDate_10() { return static_cast<int32_t>(offsetof(NCMBObject_t2651186434, ____updateDate_10)); }
	inline Nullable_1_t1166124571  get__updateDate_10() const { return ____updateDate_10; }
	inline Nullable_1_t1166124571 * get_address_of__updateDate_10() { return &____updateDate_10; }
	inline void set__updateDate_10(Nullable_1_t1166124571  value)
	{
		____updateDate_10 = value;
	}

	inline static int32_t get_offset_of__createDate_11() { return static_cast<int32_t>(offsetof(NCMBObject_t2651186434, ____createDate_11)); }
	inline Nullable_1_t1166124571  get__createDate_11() const { return ____createDate_11; }
	inline Nullable_1_t1166124571 * get_address_of__createDate_11() { return &____createDate_11; }
	inline void set__createDate_11(Nullable_1_t1166124571  value)
	{
		____createDate_11 = value;
	}
};

struct NCMBObject_t2651186434_StaticFields
{
public:
	// System.String NCMB.NCMBObject::AUTO_CLASS_NAME
	String_t* ___AUTO_CLASS_NAME_0;
	// System.Object NCMB.NCMBObject::fileMutex
	RuntimeObject * ___fileMutex_6;

public:
	inline static int32_t get_offset_of_AUTO_CLASS_NAME_0() { return static_cast<int32_t>(offsetof(NCMBObject_t2651186434_StaticFields, ___AUTO_CLASS_NAME_0)); }
	inline String_t* get_AUTO_CLASS_NAME_0() const { return ___AUTO_CLASS_NAME_0; }
	inline String_t** get_address_of_AUTO_CLASS_NAME_0() { return &___AUTO_CLASS_NAME_0; }
	inline void set_AUTO_CLASS_NAME_0(String_t* value)
	{
		___AUTO_CLASS_NAME_0 = value;
		Il2CppCodeGenWriteBarrier((&___AUTO_CLASS_NAME_0), value);
	}

	inline static int32_t get_offset_of_fileMutex_6() { return static_cast<int32_t>(offsetof(NCMBObject_t2651186434_StaticFields, ___fileMutex_6)); }
	inline RuntimeObject * get_fileMutex_6() const { return ___fileMutex_6; }
	inline RuntimeObject ** get_address_of_fileMutex_6() { return &___fileMutex_6; }
	inline void set_fileMutex_6(RuntimeObject * value)
	{
		___fileMutex_6 = value;
		Il2CppCodeGenWriteBarrier((&___fileMutex_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NCMBOBJECT_T2651186434_H
#ifndef VARIABLEMANAGER_T3496271310_H
#define VARIABLEMANAGER_T3496271310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VariableManager
struct  VariableManager_t3496271310  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text VariableManager::Temp
	Text_t1901882714 * ___Temp_2;
	// UnityEngine.UI.Text VariableManager::Humid
	Text_t1901882714 * ___Humid_3;
	// UnityEngine.UI.Text VariableManager::Console
	Text_t1901882714 * ___Console_4;
	// System.Single VariableManager::lifeTime
	float ___lifeTime_5;
	// System.Single VariableManager::time
	float ___time_6;
	// UnityEngine.UI.Button VariableManager::UpdateButton
	Button_t4055032469 * ___UpdateButton_7;
	// NCMB.NCMBObject VariableManager::obj
	NCMBObject_t2651186434 * ___obj_8;

public:
	inline static int32_t get_offset_of_Temp_2() { return static_cast<int32_t>(offsetof(VariableManager_t3496271310, ___Temp_2)); }
	inline Text_t1901882714 * get_Temp_2() const { return ___Temp_2; }
	inline Text_t1901882714 ** get_address_of_Temp_2() { return &___Temp_2; }
	inline void set_Temp_2(Text_t1901882714 * value)
	{
		___Temp_2 = value;
		Il2CppCodeGenWriteBarrier((&___Temp_2), value);
	}

	inline static int32_t get_offset_of_Humid_3() { return static_cast<int32_t>(offsetof(VariableManager_t3496271310, ___Humid_3)); }
	inline Text_t1901882714 * get_Humid_3() const { return ___Humid_3; }
	inline Text_t1901882714 ** get_address_of_Humid_3() { return &___Humid_3; }
	inline void set_Humid_3(Text_t1901882714 * value)
	{
		___Humid_3 = value;
		Il2CppCodeGenWriteBarrier((&___Humid_3), value);
	}

	inline static int32_t get_offset_of_Console_4() { return static_cast<int32_t>(offsetof(VariableManager_t3496271310, ___Console_4)); }
	inline Text_t1901882714 * get_Console_4() const { return ___Console_4; }
	inline Text_t1901882714 ** get_address_of_Console_4() { return &___Console_4; }
	inline void set_Console_4(Text_t1901882714 * value)
	{
		___Console_4 = value;
		Il2CppCodeGenWriteBarrier((&___Console_4), value);
	}

	inline static int32_t get_offset_of_lifeTime_5() { return static_cast<int32_t>(offsetof(VariableManager_t3496271310, ___lifeTime_5)); }
	inline float get_lifeTime_5() const { return ___lifeTime_5; }
	inline float* get_address_of_lifeTime_5() { return &___lifeTime_5; }
	inline void set_lifeTime_5(float value)
	{
		___lifeTime_5 = value;
	}

	inline static int32_t get_offset_of_time_6() { return static_cast<int32_t>(offsetof(VariableManager_t3496271310, ___time_6)); }
	inline float get_time_6() const { return ___time_6; }
	inline float* get_address_of_time_6() { return &___time_6; }
	inline void set_time_6(float value)
	{
		___time_6 = value;
	}

	inline static int32_t get_offset_of_UpdateButton_7() { return static_cast<int32_t>(offsetof(VariableManager_t3496271310, ___UpdateButton_7)); }
	inline Button_t4055032469 * get_UpdateButton_7() const { return ___UpdateButton_7; }
	inline Button_t4055032469 ** get_address_of_UpdateButton_7() { return &___UpdateButton_7; }
	inline void set_UpdateButton_7(Button_t4055032469 * value)
	{
		___UpdateButton_7 = value;
		Il2CppCodeGenWriteBarrier((&___UpdateButton_7), value);
	}

	inline static int32_t get_offset_of_obj_8() { return static_cast<int32_t>(offsetof(VariableManager_t3496271310, ___obj_8)); }
	inline NCMBObject_t2651186434 * get_obj_8() const { return ___obj_8; }
	inline NCMBObject_t2651186434 ** get_address_of_obj_8() { return &___obj_8; }
	inline void set_obj_8(NCMBObject_t2651186434 * value)
	{
		___obj_8 = value;
		Il2CppCodeGenWriteBarrier((&___obj_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VARIABLEMANAGER_T3496271310_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef RESETBUTTONSCRIPT_T1499367335_H
#define RESETBUTTONSCRIPT_T1499367335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ResetButtonScript
struct  ResetButtonScript_t1499367335  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject ResetButtonScript::LabObject
	GameObject_t1113636619 * ___LabObject_2;

public:
	inline static int32_t get_offset_of_LabObject_2() { return static_cast<int32_t>(offsetof(ResetButtonScript_t1499367335, ___LabObject_2)); }
	inline GameObject_t1113636619 * get_LabObject_2() const { return ___LabObject_2; }
	inline GameObject_t1113636619 ** get_address_of_LabObject_2() { return &___LabObject_2; }
	inline void set_LabObject_2(GameObject_t1113636619 * value)
	{
		___LabObject_2 = value;
		Il2CppCodeGenWriteBarrier((&___LabObject_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESETBUTTONSCRIPT_T1499367335_H
#ifndef PUSHMICROBOTPUSHSCRIPT_T2516234185_H
#define PUSHMICROBOTPUSHSCRIPT_T2516234185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PushMicrobotPushScript
struct  PushMicrobotPushScript_t2516234185  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text PushMicrobotPushScript::Console
	Text_t1901882714 * ___Console_2;
	// System.Single PushMicrobotPushScript::lifeTime
	float ___lifeTime_3;
	// System.Single PushMicrobotPushScript::time
	float ___time_4;
	// UnityEngine.UI.Button PushMicrobotPushScript::PushButton
	Button_t4055032469 * ___PushButton_5;

public:
	inline static int32_t get_offset_of_Console_2() { return static_cast<int32_t>(offsetof(PushMicrobotPushScript_t2516234185, ___Console_2)); }
	inline Text_t1901882714 * get_Console_2() const { return ___Console_2; }
	inline Text_t1901882714 ** get_address_of_Console_2() { return &___Console_2; }
	inline void set_Console_2(Text_t1901882714 * value)
	{
		___Console_2 = value;
		Il2CppCodeGenWriteBarrier((&___Console_2), value);
	}

	inline static int32_t get_offset_of_lifeTime_3() { return static_cast<int32_t>(offsetof(PushMicrobotPushScript_t2516234185, ___lifeTime_3)); }
	inline float get_lifeTime_3() const { return ___lifeTime_3; }
	inline float* get_address_of_lifeTime_3() { return &___lifeTime_3; }
	inline void set_lifeTime_3(float value)
	{
		___lifeTime_3 = value;
	}

	inline static int32_t get_offset_of_time_4() { return static_cast<int32_t>(offsetof(PushMicrobotPushScript_t2516234185, ___time_4)); }
	inline float get_time_4() const { return ___time_4; }
	inline float* get_address_of_time_4() { return &___time_4; }
	inline void set_time_4(float value)
	{
		___time_4 = value;
	}

	inline static int32_t get_offset_of_PushButton_5() { return static_cast<int32_t>(offsetof(PushMicrobotPushScript_t2516234185, ___PushButton_5)); }
	inline Button_t4055032469 * get_PushButton_5() const { return ___PushButton_5; }
	inline Button_t4055032469 ** get_address_of_PushButton_5() { return &___PushButton_5; }
	inline void set_PushButton_5(Button_t4055032469 * value)
	{
		___PushButton_5 = value;
		Il2CppCodeGenWriteBarrier((&___PushButton_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PUSHMICROBOTPUSHSCRIPT_T2516234185_H
#ifndef PROFILEEDITSCRIPT_T4034749066_H
#define PROFILEEDITSCRIPT_T4034749066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProfileEditScript
struct  ProfileEditScript_t4034749066  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject ProfileEditScript::ProfileEdit
	GameObject_t1113636619 * ___ProfileEdit_2;
	// UnityEngine.UI.InputField ProfileEditScript::ProfileEditInput
	InputField_t3762917431 * ___ProfileEditInput_3;
	// UnityEngine.UI.Text ProfileEditScript::ProfileText
	Text_t1901882714 * ___ProfileText_4;

public:
	inline static int32_t get_offset_of_ProfileEdit_2() { return static_cast<int32_t>(offsetof(ProfileEditScript_t4034749066, ___ProfileEdit_2)); }
	inline GameObject_t1113636619 * get_ProfileEdit_2() const { return ___ProfileEdit_2; }
	inline GameObject_t1113636619 ** get_address_of_ProfileEdit_2() { return &___ProfileEdit_2; }
	inline void set_ProfileEdit_2(GameObject_t1113636619 * value)
	{
		___ProfileEdit_2 = value;
		Il2CppCodeGenWriteBarrier((&___ProfileEdit_2), value);
	}

	inline static int32_t get_offset_of_ProfileEditInput_3() { return static_cast<int32_t>(offsetof(ProfileEditScript_t4034749066, ___ProfileEditInput_3)); }
	inline InputField_t3762917431 * get_ProfileEditInput_3() const { return ___ProfileEditInput_3; }
	inline InputField_t3762917431 ** get_address_of_ProfileEditInput_3() { return &___ProfileEditInput_3; }
	inline void set_ProfileEditInput_3(InputField_t3762917431 * value)
	{
		___ProfileEditInput_3 = value;
		Il2CppCodeGenWriteBarrier((&___ProfileEditInput_3), value);
	}

	inline static int32_t get_offset_of_ProfileText_4() { return static_cast<int32_t>(offsetof(ProfileEditScript_t4034749066, ___ProfileText_4)); }
	inline Text_t1901882714 * get_ProfileText_4() const { return ___ProfileText_4; }
	inline Text_t1901882714 ** get_address_of_ProfileText_4() { return &___ProfileText_4; }
	inline void set_ProfileText_4(Text_t1901882714 * value)
	{
		___ProfileText_4 = value;
		Il2CppCodeGenWriteBarrier((&___ProfileText_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROFILEEDITSCRIPT_T4034749066_H
#ifndef PROFILESAVESCRIPT_T3099832256_H
#define PROFILESAVESCRIPT_T3099832256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProfileSaveScript
struct  ProfileSaveScript_t3099832256  : public MonoBehaviour_t3962482529
{
public:
	// System.String ProfileSaveScript::str
	String_t* ___str_2;
	// UnityEngine.UI.InputField ProfileSaveScript::inputField
	InputField_t3762917431 * ___inputField_3;
	// UnityEngine.UI.Text ProfileSaveScript::ProfileText
	Text_t1901882714 * ___ProfileText_4;
	// UnityEngine.UI.Text ProfileSaveScript::Console
	Text_t1901882714 * ___Console_5;
	// System.Int32 ProfileSaveScript::ProfileMemberNumber
	int32_t ___ProfileMemberNumber_6;
	// System.Single ProfileSaveScript::lifeTime
	float ___lifeTime_7;
	// System.Single ProfileSaveScript::time
	float ___time_8;
	// UnityEngine.GameObject ProfileSaveScript::ProfileEdit
	GameObject_t1113636619 * ___ProfileEdit_9;

public:
	inline static int32_t get_offset_of_str_2() { return static_cast<int32_t>(offsetof(ProfileSaveScript_t3099832256, ___str_2)); }
	inline String_t* get_str_2() const { return ___str_2; }
	inline String_t** get_address_of_str_2() { return &___str_2; }
	inline void set_str_2(String_t* value)
	{
		___str_2 = value;
		Il2CppCodeGenWriteBarrier((&___str_2), value);
	}

	inline static int32_t get_offset_of_inputField_3() { return static_cast<int32_t>(offsetof(ProfileSaveScript_t3099832256, ___inputField_3)); }
	inline InputField_t3762917431 * get_inputField_3() const { return ___inputField_3; }
	inline InputField_t3762917431 ** get_address_of_inputField_3() { return &___inputField_3; }
	inline void set_inputField_3(InputField_t3762917431 * value)
	{
		___inputField_3 = value;
		Il2CppCodeGenWriteBarrier((&___inputField_3), value);
	}

	inline static int32_t get_offset_of_ProfileText_4() { return static_cast<int32_t>(offsetof(ProfileSaveScript_t3099832256, ___ProfileText_4)); }
	inline Text_t1901882714 * get_ProfileText_4() const { return ___ProfileText_4; }
	inline Text_t1901882714 ** get_address_of_ProfileText_4() { return &___ProfileText_4; }
	inline void set_ProfileText_4(Text_t1901882714 * value)
	{
		___ProfileText_4 = value;
		Il2CppCodeGenWriteBarrier((&___ProfileText_4), value);
	}

	inline static int32_t get_offset_of_Console_5() { return static_cast<int32_t>(offsetof(ProfileSaveScript_t3099832256, ___Console_5)); }
	inline Text_t1901882714 * get_Console_5() const { return ___Console_5; }
	inline Text_t1901882714 ** get_address_of_Console_5() { return &___Console_5; }
	inline void set_Console_5(Text_t1901882714 * value)
	{
		___Console_5 = value;
		Il2CppCodeGenWriteBarrier((&___Console_5), value);
	}

	inline static int32_t get_offset_of_ProfileMemberNumber_6() { return static_cast<int32_t>(offsetof(ProfileSaveScript_t3099832256, ___ProfileMemberNumber_6)); }
	inline int32_t get_ProfileMemberNumber_6() const { return ___ProfileMemberNumber_6; }
	inline int32_t* get_address_of_ProfileMemberNumber_6() { return &___ProfileMemberNumber_6; }
	inline void set_ProfileMemberNumber_6(int32_t value)
	{
		___ProfileMemberNumber_6 = value;
	}

	inline static int32_t get_offset_of_lifeTime_7() { return static_cast<int32_t>(offsetof(ProfileSaveScript_t3099832256, ___lifeTime_7)); }
	inline float get_lifeTime_7() const { return ___lifeTime_7; }
	inline float* get_address_of_lifeTime_7() { return &___lifeTime_7; }
	inline void set_lifeTime_7(float value)
	{
		___lifeTime_7 = value;
	}

	inline static int32_t get_offset_of_time_8() { return static_cast<int32_t>(offsetof(ProfileSaveScript_t3099832256, ___time_8)); }
	inline float get_time_8() const { return ___time_8; }
	inline float* get_address_of_time_8() { return &___time_8; }
	inline void set_time_8(float value)
	{
		___time_8 = value;
	}

	inline static int32_t get_offset_of_ProfileEdit_9() { return static_cast<int32_t>(offsetof(ProfileSaveScript_t3099832256, ___ProfileEdit_9)); }
	inline GameObject_t1113636619 * get_ProfileEdit_9() const { return ___ProfileEdit_9; }
	inline GameObject_t1113636619 ** get_address_of_ProfileEdit_9() { return &___ProfileEdit_9; }
	inline void set_ProfileEdit_9(GameObject_t1113636619 * value)
	{
		___ProfileEdit_9 = value;
		Il2CppCodeGenWriteBarrier((&___ProfileEdit_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROFILESAVESCRIPT_T3099832256_H
#ifndef OBJCTRL_T2048577503_H
#define OBJCTRL_T2048577503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjCtrl
struct  ObjCtrl_t2048577503  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject ObjCtrl::obj
	GameObject_t1113636619 * ___obj_2;
	// UnityEngine.UI.Button ObjCtrl::reset
	Button_t4055032469 * ___reset_3;
	// UnityEngine.Vector2 ObjCtrl::sPos
	Vector2_t2156229523  ___sPos_4;
	// UnityEngine.Quaternion ObjCtrl::sRot
	Quaternion_t2301928331  ___sRot_5;
	// System.Single ObjCtrl::wid
	float ___wid_6;
	// System.Single ObjCtrl::hei
	float ___hei_7;
	// System.Single ObjCtrl::diag
	float ___diag_8;
	// System.Single ObjCtrl::tx
	float ___tx_9;
	// System.Single ObjCtrl::ty
	float ___ty_10;
	// System.Single ObjCtrl::vMin
	float ___vMin_11;
	// System.Single ObjCtrl::vMax
	float ___vMax_12;
	// System.Single ObjCtrl::sDist
	float ___sDist_13;
	// System.Single ObjCtrl::nDist
	float ___nDist_14;
	// UnityEngine.Vector3 ObjCtrl::initScale
	Vector3_t3722313464  ___initScale_15;
	// System.Single ObjCtrl::v
	float ___v_16;

public:
	inline static int32_t get_offset_of_obj_2() { return static_cast<int32_t>(offsetof(ObjCtrl_t2048577503, ___obj_2)); }
	inline GameObject_t1113636619 * get_obj_2() const { return ___obj_2; }
	inline GameObject_t1113636619 ** get_address_of_obj_2() { return &___obj_2; }
	inline void set_obj_2(GameObject_t1113636619 * value)
	{
		___obj_2 = value;
		Il2CppCodeGenWriteBarrier((&___obj_2), value);
	}

	inline static int32_t get_offset_of_reset_3() { return static_cast<int32_t>(offsetof(ObjCtrl_t2048577503, ___reset_3)); }
	inline Button_t4055032469 * get_reset_3() const { return ___reset_3; }
	inline Button_t4055032469 ** get_address_of_reset_3() { return &___reset_3; }
	inline void set_reset_3(Button_t4055032469 * value)
	{
		___reset_3 = value;
		Il2CppCodeGenWriteBarrier((&___reset_3), value);
	}

	inline static int32_t get_offset_of_sPos_4() { return static_cast<int32_t>(offsetof(ObjCtrl_t2048577503, ___sPos_4)); }
	inline Vector2_t2156229523  get_sPos_4() const { return ___sPos_4; }
	inline Vector2_t2156229523 * get_address_of_sPos_4() { return &___sPos_4; }
	inline void set_sPos_4(Vector2_t2156229523  value)
	{
		___sPos_4 = value;
	}

	inline static int32_t get_offset_of_sRot_5() { return static_cast<int32_t>(offsetof(ObjCtrl_t2048577503, ___sRot_5)); }
	inline Quaternion_t2301928331  get_sRot_5() const { return ___sRot_5; }
	inline Quaternion_t2301928331 * get_address_of_sRot_5() { return &___sRot_5; }
	inline void set_sRot_5(Quaternion_t2301928331  value)
	{
		___sRot_5 = value;
	}

	inline static int32_t get_offset_of_wid_6() { return static_cast<int32_t>(offsetof(ObjCtrl_t2048577503, ___wid_6)); }
	inline float get_wid_6() const { return ___wid_6; }
	inline float* get_address_of_wid_6() { return &___wid_6; }
	inline void set_wid_6(float value)
	{
		___wid_6 = value;
	}

	inline static int32_t get_offset_of_hei_7() { return static_cast<int32_t>(offsetof(ObjCtrl_t2048577503, ___hei_7)); }
	inline float get_hei_7() const { return ___hei_7; }
	inline float* get_address_of_hei_7() { return &___hei_7; }
	inline void set_hei_7(float value)
	{
		___hei_7 = value;
	}

	inline static int32_t get_offset_of_diag_8() { return static_cast<int32_t>(offsetof(ObjCtrl_t2048577503, ___diag_8)); }
	inline float get_diag_8() const { return ___diag_8; }
	inline float* get_address_of_diag_8() { return &___diag_8; }
	inline void set_diag_8(float value)
	{
		___diag_8 = value;
	}

	inline static int32_t get_offset_of_tx_9() { return static_cast<int32_t>(offsetof(ObjCtrl_t2048577503, ___tx_9)); }
	inline float get_tx_9() const { return ___tx_9; }
	inline float* get_address_of_tx_9() { return &___tx_9; }
	inline void set_tx_9(float value)
	{
		___tx_9 = value;
	}

	inline static int32_t get_offset_of_ty_10() { return static_cast<int32_t>(offsetof(ObjCtrl_t2048577503, ___ty_10)); }
	inline float get_ty_10() const { return ___ty_10; }
	inline float* get_address_of_ty_10() { return &___ty_10; }
	inline void set_ty_10(float value)
	{
		___ty_10 = value;
	}

	inline static int32_t get_offset_of_vMin_11() { return static_cast<int32_t>(offsetof(ObjCtrl_t2048577503, ___vMin_11)); }
	inline float get_vMin_11() const { return ___vMin_11; }
	inline float* get_address_of_vMin_11() { return &___vMin_11; }
	inline void set_vMin_11(float value)
	{
		___vMin_11 = value;
	}

	inline static int32_t get_offset_of_vMax_12() { return static_cast<int32_t>(offsetof(ObjCtrl_t2048577503, ___vMax_12)); }
	inline float get_vMax_12() const { return ___vMax_12; }
	inline float* get_address_of_vMax_12() { return &___vMax_12; }
	inline void set_vMax_12(float value)
	{
		___vMax_12 = value;
	}

	inline static int32_t get_offset_of_sDist_13() { return static_cast<int32_t>(offsetof(ObjCtrl_t2048577503, ___sDist_13)); }
	inline float get_sDist_13() const { return ___sDist_13; }
	inline float* get_address_of_sDist_13() { return &___sDist_13; }
	inline void set_sDist_13(float value)
	{
		___sDist_13 = value;
	}

	inline static int32_t get_offset_of_nDist_14() { return static_cast<int32_t>(offsetof(ObjCtrl_t2048577503, ___nDist_14)); }
	inline float get_nDist_14() const { return ___nDist_14; }
	inline float* get_address_of_nDist_14() { return &___nDist_14; }
	inline void set_nDist_14(float value)
	{
		___nDist_14 = value;
	}

	inline static int32_t get_offset_of_initScale_15() { return static_cast<int32_t>(offsetof(ObjCtrl_t2048577503, ___initScale_15)); }
	inline Vector3_t3722313464  get_initScale_15() const { return ___initScale_15; }
	inline Vector3_t3722313464 * get_address_of_initScale_15() { return &___initScale_15; }
	inline void set_initScale_15(Vector3_t3722313464  value)
	{
		___initScale_15 = value;
	}

	inline static int32_t get_offset_of_v_16() { return static_cast<int32_t>(offsetof(ObjCtrl_t2048577503, ___v_16)); }
	inline float get_v_16() const { return ___v_16; }
	inline float* get_address_of_v_16() { return &___v_16; }
	inline void set_v_16(float value)
	{
		___v_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJCTRL_T2048577503_H
#ifndef PROFILECLOSESCRIPT_T727353722_H
#define PROFILECLOSESCRIPT_T727353722_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProfileCloseScript
struct  ProfileCloseScript_t727353722  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text ProfileCloseScript::Name
	Text_t1901882714 * ___Name_2;
	// UnityEngine.UI.Text ProfileCloseScript::Grade
	Text_t1901882714 * ___Grade_3;
	// UnityEngine.UI.Text ProfileCloseScript::Profile
	Text_t1901882714 * ___Profile_4;
	// UnityEngine.GameObject ProfileCloseScript::Information
	GameObject_t1113636619 * ___Information_5;
	// UnityEngine.GameObject ProfileCloseScript::ProfileInput
	GameObject_t1113636619 * ___ProfileInput_6;
	// UnityEngine.UI.InputField ProfileCloseScript::EditInput
	InputField_t3762917431 * ___EditInput_7;

public:
	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(ProfileCloseScript_t727353722, ___Name_2)); }
	inline Text_t1901882714 * get_Name_2() const { return ___Name_2; }
	inline Text_t1901882714 ** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(Text_t1901882714 * value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier((&___Name_2), value);
	}

	inline static int32_t get_offset_of_Grade_3() { return static_cast<int32_t>(offsetof(ProfileCloseScript_t727353722, ___Grade_3)); }
	inline Text_t1901882714 * get_Grade_3() const { return ___Grade_3; }
	inline Text_t1901882714 ** get_address_of_Grade_3() { return &___Grade_3; }
	inline void set_Grade_3(Text_t1901882714 * value)
	{
		___Grade_3 = value;
		Il2CppCodeGenWriteBarrier((&___Grade_3), value);
	}

	inline static int32_t get_offset_of_Profile_4() { return static_cast<int32_t>(offsetof(ProfileCloseScript_t727353722, ___Profile_4)); }
	inline Text_t1901882714 * get_Profile_4() const { return ___Profile_4; }
	inline Text_t1901882714 ** get_address_of_Profile_4() { return &___Profile_4; }
	inline void set_Profile_4(Text_t1901882714 * value)
	{
		___Profile_4 = value;
		Il2CppCodeGenWriteBarrier((&___Profile_4), value);
	}

	inline static int32_t get_offset_of_Information_5() { return static_cast<int32_t>(offsetof(ProfileCloseScript_t727353722, ___Information_5)); }
	inline GameObject_t1113636619 * get_Information_5() const { return ___Information_5; }
	inline GameObject_t1113636619 ** get_address_of_Information_5() { return &___Information_5; }
	inline void set_Information_5(GameObject_t1113636619 * value)
	{
		___Information_5 = value;
		Il2CppCodeGenWriteBarrier((&___Information_5), value);
	}

	inline static int32_t get_offset_of_ProfileInput_6() { return static_cast<int32_t>(offsetof(ProfileCloseScript_t727353722, ___ProfileInput_6)); }
	inline GameObject_t1113636619 * get_ProfileInput_6() const { return ___ProfileInput_6; }
	inline GameObject_t1113636619 ** get_address_of_ProfileInput_6() { return &___ProfileInput_6; }
	inline void set_ProfileInput_6(GameObject_t1113636619 * value)
	{
		___ProfileInput_6 = value;
		Il2CppCodeGenWriteBarrier((&___ProfileInput_6), value);
	}

	inline static int32_t get_offset_of_EditInput_7() { return static_cast<int32_t>(offsetof(ProfileCloseScript_t727353722, ___EditInput_7)); }
	inline InputField_t3762917431 * get_EditInput_7() const { return ___EditInput_7; }
	inline InputField_t3762917431 ** get_address_of_EditInput_7() { return &___EditInput_7; }
	inline void set_EditInput_7(InputField_t3762917431 * value)
	{
		___EditInput_7 = value;
		Il2CppCodeGenWriteBarrier((&___EditInput_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROFILECLOSESCRIPT_T727353722_H
#ifndef NCMBUSER_T3450556553_H
#define NCMBUSER_T3450556553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.NCMBUser
struct  NCMBUser_t3450556553  : public NCMBObject_t2651186434
{
public:
	// System.Boolean NCMB.NCMBUser::_isCurrentUser
	bool ____isCurrentUser_13;

public:
	inline static int32_t get_offset_of__isCurrentUser_13() { return static_cast<int32_t>(offsetof(NCMBUser_t3450556553, ____isCurrentUser_13)); }
	inline bool get__isCurrentUser_13() const { return ____isCurrentUser_13; }
	inline bool* get_address_of__isCurrentUser_13() { return &____isCurrentUser_13; }
	inline void set__isCurrentUser_13(bool value)
	{
		____isCurrentUser_13 = value;
	}
};

struct NCMBUser_t3450556553_StaticFields
{
public:
	// NCMB.NCMBUser NCMB.NCMBUser::_currentUser
	NCMBUser_t3450556553 * ____currentUser_12;

public:
	inline static int32_t get_offset_of__currentUser_12() { return static_cast<int32_t>(offsetof(NCMBUser_t3450556553_StaticFields, ____currentUser_12)); }
	inline NCMBUser_t3450556553 * get__currentUser_12() const { return ____currentUser_12; }
	inline NCMBUser_t3450556553 ** get_address_of__currentUser_12() { return &____currentUser_12; }
	inline void set__currentUser_12(NCMBUser_t3450556553 * value)
	{
		____currentUser_12 = value;
		Il2CppCodeGenWriteBarrier((&____currentUser_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NCMBUSER_T3450556553_H
#ifndef PLAYERSCRIPT_T1783516946_H
#define PLAYERSCRIPT_T1783516946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerScript
struct  PlayerScript_t1783516946  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERSCRIPT_T1783516946_H
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_3;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_4;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_5;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_6;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_7;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_8;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_9;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_10;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_11;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_12;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_13;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_14;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_15;

public:
	inline static int32_t get_offset_of_m_Navigation_3() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_3)); }
	inline Navigation_t3049316579  get_m_Navigation_3() const { return ___m_Navigation_3; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_3() { return &___m_Navigation_3; }
	inline void set_m_Navigation_3(Navigation_t3049316579  value)
	{
		___m_Navigation_3 = value;
	}

	inline static int32_t get_offset_of_m_Transition_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_4)); }
	inline int32_t get_m_Transition_4() const { return ___m_Transition_4; }
	inline int32_t* get_address_of_m_Transition_4() { return &___m_Transition_4; }
	inline void set_m_Transition_4(int32_t value)
	{
		___m_Transition_4 = value;
	}

	inline static int32_t get_offset_of_m_Colors_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_5)); }
	inline ColorBlock_t2139031574  get_m_Colors_5() const { return ___m_Colors_5; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_5() { return &___m_Colors_5; }
	inline void set_m_Colors_5(ColorBlock_t2139031574  value)
	{
		___m_Colors_5 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_6)); }
	inline SpriteState_t1362986479  get_m_SpriteState_6() const { return ___m_SpriteState_6; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_6() { return &___m_SpriteState_6; }
	inline void set_m_SpriteState_6(SpriteState_t1362986479  value)
	{
		___m_SpriteState_6 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_7)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_7() const { return ___m_AnimationTriggers_7; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_7() { return &___m_AnimationTriggers_7; }
	inline void set_m_AnimationTriggers_7(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_7), value);
	}

	inline static int32_t get_offset_of_m_Interactable_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_8)); }
	inline bool get_m_Interactable_8() const { return ___m_Interactable_8; }
	inline bool* get_address_of_m_Interactable_8() { return &___m_Interactable_8; }
	inline void set_m_Interactable_8(bool value)
	{
		___m_Interactable_8 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_9)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_9() const { return ___m_TargetGraphic_9; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_9() { return &___m_TargetGraphic_9; }
	inline void set_m_TargetGraphic_9(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_9), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_10)); }
	inline bool get_m_GroupsAllowInteraction_10() const { return ___m_GroupsAllowInteraction_10; }
	inline bool* get_address_of_m_GroupsAllowInteraction_10() { return &___m_GroupsAllowInteraction_10; }
	inline void set_m_GroupsAllowInteraction_10(bool value)
	{
		___m_GroupsAllowInteraction_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_11)); }
	inline int32_t get_m_CurrentSelectionState_11() const { return ___m_CurrentSelectionState_11; }
	inline int32_t* get_address_of_m_CurrentSelectionState_11() { return &___m_CurrentSelectionState_11; }
	inline void set_m_CurrentSelectionState_11(int32_t value)
	{
		___m_CurrentSelectionState_11 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_12)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_12() const { return ___U3CisPointerInsideU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_12() { return &___U3CisPointerInsideU3Ek__BackingField_12; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_12(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_13)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_13() const { return ___U3CisPointerDownU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_13() { return &___U3CisPointerDownU3Ek__BackingField_13; }
	inline void set_U3CisPointerDownU3Ek__BackingField_13(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_14)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_14() const { return ___U3ChasSelectionU3Ek__BackingField_14; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_14() { return &___U3ChasSelectionU3Ek__BackingField_14; }
	inline void set_U3ChasSelectionU3Ek__BackingField_14(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_15)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_15() const { return ___m_CanvasGroupCache_15; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_15() { return &___m_CanvasGroupCache_15; }
	inline void set_m_CanvasGroupCache_15(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_15), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_2;

public:
	inline static int32_t get_offset_of_s_List_2() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_2)); }
	inline List_1_t427135887 * get_s_List_2() const { return ___s_List_2; }
	inline List_1_t427135887 ** get_address_of_s_List_2() { return &___s_List_2; }
	inline void set_s_List_2(List_1_t427135887 * value)
	{
		___s_List_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t2598313366 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef BUTTON_T4055032469_H
#define BUTTON_T4055032469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button
struct  Button_t4055032469  : public Selectable_t3250028441
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t48803504 * ___m_OnClick_16;

public:
	inline static int32_t get_offset_of_m_OnClick_16() { return static_cast<int32_t>(offsetof(Button_t4055032469, ___m_OnClick_16)); }
	inline ButtonClickedEvent_t48803504 * get_m_OnClick_16() const { return ___m_OnClick_16; }
	inline ButtonClickedEvent_t48803504 ** get_address_of_m_OnClick_16() { return &___m_OnClick_16; }
	inline void set_m_OnClick_16(ButtonClickedEvent_t48803504 * value)
	{
		___m_OnClick_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnClick_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTON_T4055032469_H
#ifndef INPUTFIELD_T3762917431_H
#define INPUTFIELD_T3762917431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField
struct  InputField_t3762917431  : public Selectable_t3250028441
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t731888065 * ___m_Keyboard_16;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t1901882714 * ___m_TextComponent_18;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_t1660335611 * ___m_Placeholder_19;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_20;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_21;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_22;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_23;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_24;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_25;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_26;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_27;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnEndEdit
	SubmitEvent_t648412432 * ___m_OnEndEdit_28;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t467195904 * ___m_OnValueChanged_29;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t2355412304 * ___m_OnValidateInput_30;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_t2555686324  ___m_CaretColor_31;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_32;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_t2555686324  ___m_SelectionColor_33;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_34;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_35;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_36;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_37;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_38;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_39;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t3704657025 * ___caretRectTrans_40;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_t1981460040* ___m_CursorVerts_41;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t3211863866 * ___m_InputTextCache_42;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_t2598313366 * ___m_CachedInputRenderer_43;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_44;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t3648964284 * ___m_Mesh_45;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_46;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_47;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_48;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_49;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_52;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t3829159415 * ___m_BlinkCoroutine_53;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_54;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_55;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_56;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t3829159415 * ___m_DragCoroutine_57;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_58;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_59;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_60;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_t2956885303 * ___m_ProcessingEvent_62;

public:
	inline static int32_t get_offset_of_m_Keyboard_16() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Keyboard_16)); }
	inline TouchScreenKeyboard_t731888065 * get_m_Keyboard_16() const { return ___m_Keyboard_16; }
	inline TouchScreenKeyboard_t731888065 ** get_address_of_m_Keyboard_16() { return &___m_Keyboard_16; }
	inline void set_m_Keyboard_16(TouchScreenKeyboard_t731888065 * value)
	{
		___m_Keyboard_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_Keyboard_16), value);
	}

	inline static int32_t get_offset_of_m_TextComponent_18() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_TextComponent_18)); }
	inline Text_t1901882714 * get_m_TextComponent_18() const { return ___m_TextComponent_18; }
	inline Text_t1901882714 ** get_address_of_m_TextComponent_18() { return &___m_TextComponent_18; }
	inline void set_m_TextComponent_18(Text_t1901882714 * value)
	{
		___m_TextComponent_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextComponent_18), value);
	}

	inline static int32_t get_offset_of_m_Placeholder_19() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Placeholder_19)); }
	inline Graphic_t1660335611 * get_m_Placeholder_19() const { return ___m_Placeholder_19; }
	inline Graphic_t1660335611 ** get_address_of_m_Placeholder_19() { return &___m_Placeholder_19; }
	inline void set_m_Placeholder_19(Graphic_t1660335611 * value)
	{
		___m_Placeholder_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_Placeholder_19), value);
	}

	inline static int32_t get_offset_of_m_ContentType_20() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ContentType_20)); }
	inline int32_t get_m_ContentType_20() const { return ___m_ContentType_20; }
	inline int32_t* get_address_of_m_ContentType_20() { return &___m_ContentType_20; }
	inline void set_m_ContentType_20(int32_t value)
	{
		___m_ContentType_20 = value;
	}

	inline static int32_t get_offset_of_m_InputType_21() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_InputType_21)); }
	inline int32_t get_m_InputType_21() const { return ___m_InputType_21; }
	inline int32_t* get_address_of_m_InputType_21() { return &___m_InputType_21; }
	inline void set_m_InputType_21(int32_t value)
	{
		___m_InputType_21 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_22() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_AsteriskChar_22)); }
	inline Il2CppChar get_m_AsteriskChar_22() const { return ___m_AsteriskChar_22; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_22() { return &___m_AsteriskChar_22; }
	inline void set_m_AsteriskChar_22(Il2CppChar value)
	{
		___m_AsteriskChar_22 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_23() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_KeyboardType_23)); }
	inline int32_t get_m_KeyboardType_23() const { return ___m_KeyboardType_23; }
	inline int32_t* get_address_of_m_KeyboardType_23() { return &___m_KeyboardType_23; }
	inline void set_m_KeyboardType_23(int32_t value)
	{
		___m_KeyboardType_23 = value;
	}

	inline static int32_t get_offset_of_m_LineType_24() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_LineType_24)); }
	inline int32_t get_m_LineType_24() const { return ___m_LineType_24; }
	inline int32_t* get_address_of_m_LineType_24() { return &___m_LineType_24; }
	inline void set_m_LineType_24(int32_t value)
	{
		___m_LineType_24 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_25() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_HideMobileInput_25)); }
	inline bool get_m_HideMobileInput_25() const { return ___m_HideMobileInput_25; }
	inline bool* get_address_of_m_HideMobileInput_25() { return &___m_HideMobileInput_25; }
	inline void set_m_HideMobileInput_25(bool value)
	{
		___m_HideMobileInput_25 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_26() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CharacterValidation_26)); }
	inline int32_t get_m_CharacterValidation_26() const { return ___m_CharacterValidation_26; }
	inline int32_t* get_address_of_m_CharacterValidation_26() { return &___m_CharacterValidation_26; }
	inline void set_m_CharacterValidation_26(int32_t value)
	{
		___m_CharacterValidation_26 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_27() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CharacterLimit_27)); }
	inline int32_t get_m_CharacterLimit_27() const { return ___m_CharacterLimit_27; }
	inline int32_t* get_address_of_m_CharacterLimit_27() { return &___m_CharacterLimit_27; }
	inline void set_m_CharacterLimit_27(int32_t value)
	{
		___m_CharacterLimit_27 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_28() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OnEndEdit_28)); }
	inline SubmitEvent_t648412432 * get_m_OnEndEdit_28() const { return ___m_OnEndEdit_28; }
	inline SubmitEvent_t648412432 ** get_address_of_m_OnEndEdit_28() { return &___m_OnEndEdit_28; }
	inline void set_m_OnEndEdit_28(SubmitEvent_t648412432 * value)
	{
		___m_OnEndEdit_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnEndEdit_28), value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_29() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OnValueChanged_29)); }
	inline OnChangeEvent_t467195904 * get_m_OnValueChanged_29() const { return ___m_OnValueChanged_29; }
	inline OnChangeEvent_t467195904 ** get_address_of_m_OnValueChanged_29() { return &___m_OnValueChanged_29; }
	inline void set_m_OnValueChanged_29(OnChangeEvent_t467195904 * value)
	{
		___m_OnValueChanged_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValueChanged_29), value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_30() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OnValidateInput_30)); }
	inline OnValidateInput_t2355412304 * get_m_OnValidateInput_30() const { return ___m_OnValidateInput_30; }
	inline OnValidateInput_t2355412304 ** get_address_of_m_OnValidateInput_30() { return &___m_OnValidateInput_30; }
	inline void set_m_OnValidateInput_30(OnValidateInput_t2355412304 * value)
	{
		___m_OnValidateInput_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValidateInput_30), value);
	}

	inline static int32_t get_offset_of_m_CaretColor_31() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretColor_31)); }
	inline Color_t2555686324  get_m_CaretColor_31() const { return ___m_CaretColor_31; }
	inline Color_t2555686324 * get_address_of_m_CaretColor_31() { return &___m_CaretColor_31; }
	inline void set_m_CaretColor_31(Color_t2555686324  value)
	{
		___m_CaretColor_31 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_32() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CustomCaretColor_32)); }
	inline bool get_m_CustomCaretColor_32() const { return ___m_CustomCaretColor_32; }
	inline bool* get_address_of_m_CustomCaretColor_32() { return &___m_CustomCaretColor_32; }
	inline void set_m_CustomCaretColor_32(bool value)
	{
		___m_CustomCaretColor_32 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_33() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_SelectionColor_33)); }
	inline Color_t2555686324  get_m_SelectionColor_33() const { return ___m_SelectionColor_33; }
	inline Color_t2555686324 * get_address_of_m_SelectionColor_33() { return &___m_SelectionColor_33; }
	inline void set_m_SelectionColor_33(Color_t2555686324  value)
	{
		___m_SelectionColor_33 = value;
	}

	inline static int32_t get_offset_of_m_Text_34() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Text_34)); }
	inline String_t* get_m_Text_34() const { return ___m_Text_34; }
	inline String_t** get_address_of_m_Text_34() { return &___m_Text_34; }
	inline void set_m_Text_34(String_t* value)
	{
		___m_Text_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_34), value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_35() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretBlinkRate_35)); }
	inline float get_m_CaretBlinkRate_35() const { return ___m_CaretBlinkRate_35; }
	inline float* get_address_of_m_CaretBlinkRate_35() { return &___m_CaretBlinkRate_35; }
	inline void set_m_CaretBlinkRate_35(float value)
	{
		___m_CaretBlinkRate_35 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_36() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretWidth_36)); }
	inline int32_t get_m_CaretWidth_36() const { return ___m_CaretWidth_36; }
	inline int32_t* get_address_of_m_CaretWidth_36() { return &___m_CaretWidth_36; }
	inline void set_m_CaretWidth_36(int32_t value)
	{
		___m_CaretWidth_36 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_37() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ReadOnly_37)); }
	inline bool get_m_ReadOnly_37() const { return ___m_ReadOnly_37; }
	inline bool* get_address_of_m_ReadOnly_37() { return &___m_ReadOnly_37; }
	inline void set_m_ReadOnly_37(bool value)
	{
		___m_ReadOnly_37 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_38() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretPosition_38)); }
	inline int32_t get_m_CaretPosition_38() const { return ___m_CaretPosition_38; }
	inline int32_t* get_address_of_m_CaretPosition_38() { return &___m_CaretPosition_38; }
	inline void set_m_CaretPosition_38(int32_t value)
	{
		___m_CaretPosition_38 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_39() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretSelectPosition_39)); }
	inline int32_t get_m_CaretSelectPosition_39() const { return ___m_CaretSelectPosition_39; }
	inline int32_t* get_address_of_m_CaretSelectPosition_39() { return &___m_CaretSelectPosition_39; }
	inline void set_m_CaretSelectPosition_39(int32_t value)
	{
		___m_CaretSelectPosition_39 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_40() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___caretRectTrans_40)); }
	inline RectTransform_t3704657025 * get_caretRectTrans_40() const { return ___caretRectTrans_40; }
	inline RectTransform_t3704657025 ** get_address_of_caretRectTrans_40() { return &___caretRectTrans_40; }
	inline void set_caretRectTrans_40(RectTransform_t3704657025 * value)
	{
		___caretRectTrans_40 = value;
		Il2CppCodeGenWriteBarrier((&___caretRectTrans_40), value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_41() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CursorVerts_41)); }
	inline UIVertexU5BU5D_t1981460040* get_m_CursorVerts_41() const { return ___m_CursorVerts_41; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_CursorVerts_41() { return &___m_CursorVerts_41; }
	inline void set_m_CursorVerts_41(UIVertexU5BU5D_t1981460040* value)
	{
		___m_CursorVerts_41 = value;
		Il2CppCodeGenWriteBarrier((&___m_CursorVerts_41), value);
	}

	inline static int32_t get_offset_of_m_InputTextCache_42() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_InputTextCache_42)); }
	inline TextGenerator_t3211863866 * get_m_InputTextCache_42() const { return ___m_InputTextCache_42; }
	inline TextGenerator_t3211863866 ** get_address_of_m_InputTextCache_42() { return &___m_InputTextCache_42; }
	inline void set_m_InputTextCache_42(TextGenerator_t3211863866 * value)
	{
		___m_InputTextCache_42 = value;
		Il2CppCodeGenWriteBarrier((&___m_InputTextCache_42), value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_43() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CachedInputRenderer_43)); }
	inline CanvasRenderer_t2598313366 * get_m_CachedInputRenderer_43() const { return ___m_CachedInputRenderer_43; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CachedInputRenderer_43() { return &___m_CachedInputRenderer_43; }
	inline void set_m_CachedInputRenderer_43(CanvasRenderer_t2598313366 * value)
	{
		___m_CachedInputRenderer_43 = value;
		Il2CppCodeGenWriteBarrier((&___m_CachedInputRenderer_43), value);
	}

	inline static int32_t get_offset_of_m_PreventFontCallback_44() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_PreventFontCallback_44)); }
	inline bool get_m_PreventFontCallback_44() const { return ___m_PreventFontCallback_44; }
	inline bool* get_address_of_m_PreventFontCallback_44() { return &___m_PreventFontCallback_44; }
	inline void set_m_PreventFontCallback_44(bool value)
	{
		___m_PreventFontCallback_44 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_45() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Mesh_45)); }
	inline Mesh_t3648964284 * get_m_Mesh_45() const { return ___m_Mesh_45; }
	inline Mesh_t3648964284 ** get_address_of_m_Mesh_45() { return &___m_Mesh_45; }
	inline void set_m_Mesh_45(Mesh_t3648964284 * value)
	{
		___m_Mesh_45 = value;
		Il2CppCodeGenWriteBarrier((&___m_Mesh_45), value);
	}

	inline static int32_t get_offset_of_m_AllowInput_46() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_AllowInput_46)); }
	inline bool get_m_AllowInput_46() const { return ___m_AllowInput_46; }
	inline bool* get_address_of_m_AllowInput_46() { return &___m_AllowInput_46; }
	inline void set_m_AllowInput_46(bool value)
	{
		___m_AllowInput_46 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_47() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ShouldActivateNextUpdate_47)); }
	inline bool get_m_ShouldActivateNextUpdate_47() const { return ___m_ShouldActivateNextUpdate_47; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_47() { return &___m_ShouldActivateNextUpdate_47; }
	inline void set_m_ShouldActivateNextUpdate_47(bool value)
	{
		___m_ShouldActivateNextUpdate_47 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_48() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_UpdateDrag_48)); }
	inline bool get_m_UpdateDrag_48() const { return ___m_UpdateDrag_48; }
	inline bool* get_address_of_m_UpdateDrag_48() { return &___m_UpdateDrag_48; }
	inline void set_m_UpdateDrag_48(bool value)
	{
		___m_UpdateDrag_48 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_49() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DragPositionOutOfBounds_49)); }
	inline bool get_m_DragPositionOutOfBounds_49() const { return ___m_DragPositionOutOfBounds_49; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_49() { return &___m_DragPositionOutOfBounds_49; }
	inline void set_m_DragPositionOutOfBounds_49(bool value)
	{
		___m_DragPositionOutOfBounds_49 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_52() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretVisible_52)); }
	inline bool get_m_CaretVisible_52() const { return ___m_CaretVisible_52; }
	inline bool* get_address_of_m_CaretVisible_52() { return &___m_CaretVisible_52; }
	inline void set_m_CaretVisible_52(bool value)
	{
		___m_CaretVisible_52 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_53() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_BlinkCoroutine_53)); }
	inline Coroutine_t3829159415 * get_m_BlinkCoroutine_53() const { return ___m_BlinkCoroutine_53; }
	inline Coroutine_t3829159415 ** get_address_of_m_BlinkCoroutine_53() { return &___m_BlinkCoroutine_53; }
	inline void set_m_BlinkCoroutine_53(Coroutine_t3829159415 * value)
	{
		___m_BlinkCoroutine_53 = value;
		Il2CppCodeGenWriteBarrier((&___m_BlinkCoroutine_53), value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_54() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_BlinkStartTime_54)); }
	inline float get_m_BlinkStartTime_54() const { return ___m_BlinkStartTime_54; }
	inline float* get_address_of_m_BlinkStartTime_54() { return &___m_BlinkStartTime_54; }
	inline void set_m_BlinkStartTime_54(float value)
	{
		___m_BlinkStartTime_54 = value;
	}

	inline static int32_t get_offset_of_m_DrawStart_55() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DrawStart_55)); }
	inline int32_t get_m_DrawStart_55() const { return ___m_DrawStart_55; }
	inline int32_t* get_address_of_m_DrawStart_55() { return &___m_DrawStart_55; }
	inline void set_m_DrawStart_55(int32_t value)
	{
		___m_DrawStart_55 = value;
	}

	inline static int32_t get_offset_of_m_DrawEnd_56() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DrawEnd_56)); }
	inline int32_t get_m_DrawEnd_56() const { return ___m_DrawEnd_56; }
	inline int32_t* get_address_of_m_DrawEnd_56() { return &___m_DrawEnd_56; }
	inline void set_m_DrawEnd_56(int32_t value)
	{
		___m_DrawEnd_56 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_57() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DragCoroutine_57)); }
	inline Coroutine_t3829159415 * get_m_DragCoroutine_57() const { return ___m_DragCoroutine_57; }
	inline Coroutine_t3829159415 ** get_address_of_m_DragCoroutine_57() { return &___m_DragCoroutine_57; }
	inline void set_m_DragCoroutine_57(Coroutine_t3829159415 * value)
	{
		___m_DragCoroutine_57 = value;
		Il2CppCodeGenWriteBarrier((&___m_DragCoroutine_57), value);
	}

	inline static int32_t get_offset_of_m_OriginalText_58() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OriginalText_58)); }
	inline String_t* get_m_OriginalText_58() const { return ___m_OriginalText_58; }
	inline String_t** get_address_of_m_OriginalText_58() { return &___m_OriginalText_58; }
	inline void set_m_OriginalText_58(String_t* value)
	{
		___m_OriginalText_58 = value;
		Il2CppCodeGenWriteBarrier((&___m_OriginalText_58), value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_59() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_WasCanceled_59)); }
	inline bool get_m_WasCanceled_59() const { return ___m_WasCanceled_59; }
	inline bool* get_address_of_m_WasCanceled_59() { return &___m_WasCanceled_59; }
	inline void set_m_WasCanceled_59(bool value)
	{
		___m_WasCanceled_59 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_60() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_HasDoneFocusTransition_60)); }
	inline bool get_m_HasDoneFocusTransition_60() const { return ___m_HasDoneFocusTransition_60; }
	inline bool* get_address_of_m_HasDoneFocusTransition_60() { return &___m_HasDoneFocusTransition_60; }
	inline void set_m_HasDoneFocusTransition_60(bool value)
	{
		___m_HasDoneFocusTransition_60 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_62() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ProcessingEvent_62)); }
	inline Event_t2956885303 * get_m_ProcessingEvent_62() const { return ___m_ProcessingEvent_62; }
	inline Event_t2956885303 ** get_address_of_m_ProcessingEvent_62() { return &___m_ProcessingEvent_62; }
	inline void set_m_ProcessingEvent_62(Event_t2956885303 * value)
	{
		___m_ProcessingEvent_62 = value;
		Il2CppCodeGenWriteBarrier((&___m_ProcessingEvent_62), value);
	}
};

struct InputField_t3762917431_StaticFields
{
public:
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t3528271667* ___kSeparators_17;

public:
	inline static int32_t get_offset_of_kSeparators_17() { return static_cast<int32_t>(offsetof(InputField_t3762917431_StaticFields, ___kSeparators_17)); }
	inline CharU5BU5D_t3528271667* get_kSeparators_17() const { return ___kSeparators_17; }
	inline CharU5BU5D_t3528271667** get_address_of_kSeparators_17() { return &___kSeparators_17; }
	inline void set_kSeparators_17(CharU5BU5D_t3528271667* value)
	{
		___kSeparators_17 = value;
		Il2CppCodeGenWriteBarrier((&___kSeparators_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTFIELD_T3762917431_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Concat<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  RuntimeObject* Enumerable_Concat_TisKeyValuePair_2_t2530217319_m4206796855_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m146726457_gshared (Func_2_t4016427559 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<!!1,!!2> System.Linq.Enumerable::ToDictionary<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>,System.Func`2<!!0,!!2>)
extern "C"  Dictionary_2_t132545152 * Enumerable_ToDictionary_TisKeyValuePair_2_t2530217319_TisRuntimeObject_TisRuntimeObject_m162184612_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t4016427559 * p1, Func_2_t4016427559 * p2, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m1328507389_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3464904234_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m1938428402_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
extern "C"  bool Dictionary_2_Remove_m1786738978_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void NCMB.NCMBQuery`1<System.Object>::.ctor(System.String)
extern "C"  void NCMBQuery_1__ctor_m1332802481_gshared (NCMBQuery_1_t2165745577 * __this, String_t* p0, const RuntimeMethod* method);
// NCMB.NCMBQuery`1<T> NCMB.NCMBQuery`1<System.Object>::WhereEqualTo(System.String,System.Object)
extern "C"  NCMBQuery_1_t2165745577 * NCMBQuery_1_WhereEqualTo_m520816999_gshared (NCMBQuery_1_t2165745577 * __this, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void NCMB.NCMBQueryCallback`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void NCMBQueryCallback_1__ctor_m3270182594_gshared (NCMBQueryCallback_1_t4268333548 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void NCMB.NCMBQuery`1<System.Object>::FindAsync(NCMB.NCMBQueryCallback`1<T>)
extern "C"  void NCMBQuery_1_FindAsync_m1409344537_gshared (NCMBQuery_1_t2165745577 * __this, NCMBQueryCallback_1_t4268333548 * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
extern "C"  void Action_1_Invoke_m2461023210_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
extern "C"  bool Nullable_1_get_HasValue_m589371754_gshared (Nullable_1_t378540539 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
extern "C"  void Nullable_1__ctor_m3940678751_gshared (Nullable_1_t378540539 * __this, int32_t p0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::get_Value()
extern "C"  int32_t Nullable_1_get_Value_m3000890071_gshared (Nullable_1_t378540539 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Concat<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_Concat_TisKeyValuePair_2_t968067334_m525342773(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Concat_TisKeyValuePair_2_t2530217319_m4206796855_gshared)(__this /* static, unused */, p0, p1, method)
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m3583875901(__this, p0, p1, method) ((  void (*) (Func_2_t268983481 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m146726457_gshared)(__this, p0, p1, method)
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m3414179261(__this, p0, p1, method) ((  void (*) (Func_2_t1501638956 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m146726457_gshared)(__this, p0, p1, method)
// System.Collections.Generic.Dictionary`2<!!1,!!2> System.Linq.Enumerable::ToDictionary<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>,System.Func`2<!!0,!!2>)
#define Enumerable_ToDictionary_TisKeyValuePair_2_t968067334_TisString_t_TisRuntimeObject_m162120612(__this /* static, unused */, p0, p1, p2, method) ((  Dictionary_2_t2865362463 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t268983481 *, Func_2_t1501638956 *, const RuntimeMethod*))Enumerable_ToDictionary_TisKeyValuePair_2_t2530217319_TisRuntimeObject_TisRuntimeObject_m162184612_gshared)(__this /* static, unused */, p0, p1, p2, method)
// System.Void NCMB.NCMBUser::set_AuthData(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void NCMBUser_set_AuthData_m1092800737 (NCMBUser_t3450556553 * __this, Dictionary_2_t2865362463 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NCMB.NCMBCallback::Invoke(NCMB.NCMBException)
extern "C"  void NCMBCallback_Invoke_m518754946 (NCMBCallback_t3196884667 * __this, NCMBException_t2865652588 * ___error0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m256823211(__this, method) ((  String_t* (*) (KeyValuePair_2_t968067334 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1328507389_gshared)(__this, method)
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m4108279609(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t968067334 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3464904234_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2<System.String,System.Object> NCMB.NCMBUser::get_AuthData()
extern "C"  Dictionary_2_t2865362463 * NCMBUser_get_AuthData_m2245944902 (NCMBUser_t3450556553 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear()
#define Dictionary_2_Clear_m3181358953(__this, method) ((  void (*) (Dictionary_2_t2865362463 *, const RuntimeMethod*))Dictionary_2_Clear_m1938428402_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(!0)
#define Dictionary_2_Remove_m1799044440(__this, p0, method) ((  bool (*) (Dictionary_2_t2865362463 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m1786738978_gshared)(__this, p0, method)
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_width()
extern "C"  int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_height()
extern "C"  int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C"  Vector3_t3722313464  Transform_get_localScale_m129152068 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
#define Component_GetComponent_TisButton_t4055032469_m1381873113(__this, method) ((  Button_t4055032469 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C"  ButtonClickedEvent_t48803504 * Button_get_onClick_m2332132945 (Button_t4055032469 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction__ctor_m772160306 (UnityAction_t3245792599 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
extern "C"  void UnityEvent_AddListener_m2276267359 (UnityEvent_t2581268647 * __this, UnityAction_t3245792599 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Input::get_touchCount()
extern "C"  int32_t Input_get_touchCount_m3403849067 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
extern "C"  Touch_t1921856868  Input_GetTouch_m2192712756 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C"  int32_t Touch_get_phase_m214549210 (Touch_t1921856868 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C"  Vector2_t2156229523  Touch_get_position_m3109777936 (Touch_t1921856868 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C"  Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
extern "C"  void Transform_Rotate_m1886816857 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float Vector2_Distance_m3048868881 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C"  void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C"  float Input_GetAxis_m4009438427 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
extern "C"  void Transform_Rotate_m3172098886 (Transform_t3600365921 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single)
extern "C"  void Transform_Translate_m3762500149 (Transform_t3600365921 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
extern "C"  void InputField_set_text_m1877260015 (InputField_t3762917431 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.InputField::get_text()
extern "C"  String_t* InputField_get_text_m3534748202 (InputField_t3762917431 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NCMB.NCMBQuery`1<NCMB.NCMBObject>::.ctor(System.String)
#define NCMBQuery_1__ctor_m175463168(__this, p0, method) ((  void (*) (NCMBQuery_1_t1736825847 *, String_t*, const RuntimeMethod*))NCMBQuery_1__ctor_m1332802481_gshared)(__this, p0, method)
// NCMB.NCMBQuery`1<T> NCMB.NCMBQuery`1<NCMB.NCMBObject>::WhereEqualTo(System.String,System.Object)
#define NCMBQuery_1_WhereEqualTo_m661601083(__this, p0, p1, method) ((  NCMBQuery_1_t1736825847 * (*) (NCMBQuery_1_t1736825847 *, String_t*, RuntimeObject *, const RuntimeMethod*))NCMBQuery_1_WhereEqualTo_m520816999_gshared)(__this, p0, p1, method)
// System.Void NCMB.NCMBQueryCallback`1<NCMB.NCMBObject>::.ctor(System.Object,System.IntPtr)
#define NCMBQueryCallback_1__ctor_m93443526(__this, p0, p1, method) ((  void (*) (NCMBQueryCallback_1_t3839413818 *, RuntimeObject *, intptr_t, const RuntimeMethod*))NCMBQueryCallback_1__ctor_m3270182594_gshared)(__this, p0, p1, method)
// System.Void NCMB.NCMBQuery`1<NCMB.NCMBObject>::FindAsync(NCMB.NCMBQueryCallback`1<T>)
#define NCMBQuery_1_FindAsync_m684836409(__this, p0, method) ((  void (*) (NCMBQuery_1_t1736825847 *, NCMBQueryCallback_1_t3839413818 *, const RuntimeMethod*))NCMBQuery_1_FindAsync_m1409344537_gshared)(__this, p0, method)
// !0 System.Collections.Generic.List`1<NCMB.NCMBObject>::get_Item(System.Int32)
#define List_1_get_Item_m2936930928(__this, p0, method) ((  NCMBObject_t2651186434 * (*) (List_1_t4123261176 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Void SlackApi.PostMessageData::.ctor()
extern "C"  void PostMessageData__ctor_m292042944 (PostMessageData_t1903475841 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SlackApi.SlackAPI::PostMessage(SlackApi.PostMessageData,System.Action,System.Action`1<System.String>)
extern "C"  RuntimeObject* SlackAPI_PostMessage_m3581228338 (RuntimeObject * __this /* static, unused */, PostMessageData_t1903475841 * ___data0, Action_t1264377477 * ___onSuccess1, Action_1_t2019918284 * ___onError2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C"  Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.Json/Serializer::Serialize(System.Object)
extern "C"  String_t* Serializer_Serialize_m460980285 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
extern "C"  void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.Json/Serializer::.ctor()
extern "C"  void Serializer__ctor_m4016915493 (Serializer_t1431492217 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.Json/Serializer::SerializeValue(System.Object)
extern "C"  void Serializer_SerializeValue_m485783884 (Serializer_t1431492217 * __this, RuntimeObject * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C"  StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.Json/Serializer::SerializeString(System.String)
extern "C"  void Serializer_SerializeString_m3358732709 (Serializer_t1431492217 * __this, String_t* ___str0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.Json/Serializer::SerializeArray(System.Collections.IList)
extern "C"  void Serializer_SerializeArray_m3163871500 (Serializer_t1431492217 * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
extern "C"  void Serializer_SerializeObject_m1961571130 (Serializer_t1431492217 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char,System.Int32)
extern "C"  String_t* String_CreateString_m1262864254 (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.Json/Serializer::SerializeOther(System.Object)
extern "C"  void Serializer_SerializeOther_m4218573050 (Serializer_t1431492217 * __this, RuntimeObject * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C"  StringBuilder_t * StringBuilder_Append_m2383614642 (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray()
extern "C"  CharU5BU5D_t3528271667* String_ToCharArray_m1492846834 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Single::ToString(System.String)
extern "C"  String_t* Single_ToString_m3489843083 (float* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
extern "C"  StringBuilder_t * StringBuilder_Append_m1640838743 (StringBuilder_t * __this, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Object)
extern "C"  double Convert_ToDouble_m4025515304 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Double::ToString(System.String)
extern "C"  String_t* Double_ToString_m896573572 (double* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SlackApi.SlackAPI/<PostMessage>c__Iterator0::.ctor()
extern "C"  void U3CPostMessageU3Ec__Iterator0__ctor_m3381477423 (U3CPostMessageU3Ec__Iterator0_t572351527 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SlackApi.SlackAPI/<UploadScreenShot>c__Iterator1::.ctor()
extern "C"  void U3CUploadScreenShotU3Ec__Iterator1__ctor_m867367463 (U3CUploadScreenShotU3Ec__Iterator1_t762007288 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::.ctor()
extern "C"  void WWWForm__ctor_m2465700452 (WWWForm_t4064702195 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
extern "C"  void WWWForm_AddField_m2357902982 (WWWForm_t4064702195 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.WWWForm)
extern "C"  void WWW__ctor_m1562165 (WWW_t3688466362 * __this, String_t* p0, WWWForm_t4064702195 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_error()
extern "C"  String_t* WWW_get_error_m3055313367 (WWW_t3688466362 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C"  bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<System.String>::Invoke(!0)
#define Action_1_Invoke_m3134296422(__this, p0, method) ((  void (*) (Action_1_t2019918284 *, String_t*, const RuntimeMethod*))Action_1_Invoke_m2461023210_gshared)(__this, p0, method)
// System.Void System.Action::Invoke()
extern "C"  void Action_Invoke_m937035532 (Action_t1264377477 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
extern "C"  void WaitForEndOfFrame__ctor_m1381314187 (WaitForEndOfFrame_t1314943911 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
#define Nullable_1_get_HasValue_m589371754(__this, method) ((  bool (*) (Nullable_1_t378540539 *, const RuntimeMethod*))Nullable_1_get_HasValue_m589371754_gshared)(__this, method)
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
#define Nullable_1__ctor_m3940678751(__this, p0, method) ((  void (*) (Nullable_1_t378540539 *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m3940678751_gshared)(__this, p0, method)
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C"  void Texture2D__ctor_m2862217990 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, int32_t p2, bool p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Nullable`1<System.Int32>::get_Value()
#define Nullable_1_get_Value_m3000890071(__this, method) ((  int32_t (*) (Nullable_1_t378540539 *, const RuntimeMethod*))Nullable_1_get_Value_m3000890071_gshared)(__this, method)
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32)
extern "C"  void Texture2D_ReadPixels_m3395504488 (Texture2D_t3840446185 * __this, Rect_t2360479859  p0, int32_t p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply()
extern "C"  void Texture2D_Apply_m2271746283 (Texture2D_t3840446185 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
extern "C"  ByteU5BU5D_t4116647657* ImageConversion_EncodeToPNG_m2292631531 (RuntimeObject * __this /* static, unused */, Texture2D_t3840446185 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddBinaryData(System.String,System.Byte[],System.String,System.String)
extern "C"  void WWWForm_AddBinaryData_m1593257607 (WWWForm_t4064702195 * __this, String_t* p0, ByteU5BU5D_t4116647657* p1, String_t* p2, String_t* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_Now()
extern "C"  DateTime_t3738529785  DateTime_get_Now_m1277138875 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString()
extern "C"  String_t* DateTime_ToString_m884486936 (DateTime_t3738529785 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString(System.String)
extern "C"  String_t* DateTime_ToString_m3718521780 (DateTime_t3738529785 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<NCMB.NCMBObject>::GetEnumerator()
#define List_1_GetEnumerator_m1317807062(__this, method) ((  Enumerator_t1717537757  (*) (List_1_t4123261176 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<NCMB.NCMBObject>::get_Current()
#define Enumerator_get_Current_m1595407294(__this, method) ((  NCMBObject_t2651186434 * (*) (Enumerator_t1717537757 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<NCMB.NCMBObject>::MoveNext()
#define Enumerator_MoveNext_m1905280063(__this, method) ((  bool (*) (Enumerator_t1717537757 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<NCMB.NCMBObject>::Dispose()
#define Enumerator_Dispose_m3687365338(__this, method) ((  void (*) (Enumerator_t1717537757 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NCMB.NCMBUser/<LinkWithAuthDataAsync>c__AnonStorey5::.ctor()
extern "C"  void U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5__ctor_m141629749 (U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_t2722274458 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NCMB.NCMBUser/<LinkWithAuthDataAsync>c__AnonStorey5::<>m__0(NCMB.NCMBException)
extern "C"  void U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_U3CU3Em__0_m3024477021 (U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_t2722274458 * __this, NCMBException_t2865652588 * ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_U3CU3Em__0_m3024477021_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t2865362463 * V_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	Func_2_t268983481 * G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	Func_2_t268983481 * G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	{
		NCMBException_t2865652588 * L_0 = ___error0;
		if (L_0)
		{
			goto IL_0068;
		}
	}
	{
		Dictionary_2_t2865362463 * L_1 = __this->get_linkParam_0();
		Dictionary_2_t2865362463 * L_2 = __this->get_currentParam_1();
		RuntimeObject* L_3 = Enumerable_Concat_TisKeyValuePair_2_t968067334_m525342773(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/Enumerable_Concat_TisKeyValuePair_2_t968067334_m525342773_RuntimeMethod_var);
		Func_2_t268983481 * L_4 = ((U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_t2722274458_StaticFields*)il2cpp_codegen_static_fields_for(U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_t2722274458_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_4();
		G_B2_0 = L_3;
		if (L_4)
		{
			G_B3_0 = L_3;
			goto IL_002f;
		}
	}
	{
		intptr_t L_5 = (intptr_t)U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_U3CU3Em__1_m3363970239_RuntimeMethod_var;
		Func_2_t268983481 * L_6 = (Func_2_t268983481 *)il2cpp_codegen_object_new(Func_2_t268983481_il2cpp_TypeInfo_var);
		Func_2__ctor_m3583875901(L_6, NULL, L_5, /*hidden argument*/Func_2__ctor_m3583875901_RuntimeMethod_var);
		((U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_t2722274458_StaticFields*)il2cpp_codegen_static_fields_for(U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_t2722274458_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_4(L_6);
		G_B3_0 = G_B2_0;
	}

IL_002f:
	{
		Func_2_t268983481 * L_7 = ((U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_t2722274458_StaticFields*)il2cpp_codegen_static_fields_for(U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_t2722274458_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_4();
		Func_2_t1501638956 * L_8 = ((U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_t2722274458_StaticFields*)il2cpp_codegen_static_fields_for(U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_t2722274458_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_5();
		G_B4_0 = L_7;
		G_B4_1 = G_B3_0;
		if (L_8)
		{
			G_B5_0 = L_7;
			G_B5_1 = G_B3_0;
			goto IL_004c;
		}
	}
	{
		intptr_t L_9 = (intptr_t)U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_U3CU3Em__2_m1398065494_RuntimeMethod_var;
		Func_2_t1501638956 * L_10 = (Func_2_t1501638956 *)il2cpp_codegen_object_new(Func_2_t1501638956_il2cpp_TypeInfo_var);
		Func_2__ctor_m3414179261(L_10, NULL, L_9, /*hidden argument*/Func_2__ctor_m3414179261_RuntimeMethod_var);
		((U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_t2722274458_StaticFields*)il2cpp_codegen_static_fields_for(U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_t2722274458_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1_5(L_10);
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
	}

IL_004c:
	{
		Func_2_t1501638956 * L_11 = ((U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_t2722274458_StaticFields*)il2cpp_codegen_static_fields_for(U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_t2722274458_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_5();
		Dictionary_2_t2865362463 * L_12 = Enumerable_ToDictionary_TisKeyValuePair_2_t968067334_TisString_t_TisRuntimeObject_m162120612(NULL /*static, unused*/, G_B5_1, G_B5_0, L_11, /*hidden argument*/Enumerable_ToDictionary_TisKeyValuePair_2_t968067334_TisString_t_TisRuntimeObject_m162120612_RuntimeMethod_var);
		V_0 = L_12;
		NCMBUser_t3450556553 * L_13 = __this->get_U24this_3();
		Dictionary_2_t2865362463 * L_14 = V_0;
		NullCheck(L_13);
		NCMBUser_set_AuthData_m1092800737(L_13, L_14, /*hidden argument*/NULL);
		goto IL_0079;
	}

IL_0068:
	{
		NCMBUser_t3450556553 * L_15 = __this->get_U24this_3();
		Dictionary_2_t2865362463 * L_16 = __this->get_currentParam_1();
		NullCheck(L_15);
		NCMBUser_set_AuthData_m1092800737(L_15, L_16, /*hidden argument*/NULL);
	}

IL_0079:
	{
		NCMBCallback_t3196884667 * L_17 = __this->get_callback_2();
		if (!L_17)
		{
			goto IL_0090;
		}
	}
	{
		NCMBCallback_t3196884667 * L_18 = __this->get_callback_2();
		NCMBException_t2865652588 * L_19 = ___error0;
		NullCheck(L_18);
		NCMBCallback_Invoke_m518754946(L_18, L_19, /*hidden argument*/NULL);
	}

IL_0090:
	{
		return;
	}
}
// System.String NCMB.NCMBUser/<LinkWithAuthDataAsync>c__AnonStorey5::<>m__1(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C"  String_t* U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_U3CU3Em__1_m3363970239 (RuntimeObject * __this /* static, unused */, KeyValuePair_2_t968067334  ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_U3CU3Em__1_m3363970239_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = KeyValuePair_2_get_Key_m256823211((KeyValuePair_2_t968067334 *)(&___x0), /*hidden argument*/KeyValuePair_2_get_Key_m256823211_RuntimeMethod_var);
		return L_0;
	}
}
// System.Object NCMB.NCMBUser/<LinkWithAuthDataAsync>c__AnonStorey5::<>m__2(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C"  RuntimeObject * U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_U3CU3Em__2_m1398065494 (RuntimeObject * __this /* static, unused */, KeyValuePair_2_t968067334  ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLinkWithAuthDataAsyncU3Ec__AnonStorey5_U3CU3Em__2_m1398065494_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = KeyValuePair_2_get_Value_m4108279609((KeyValuePair_2_t968067334 *)(&___x0), /*hidden argument*/KeyValuePair_2_get_Value_m4108279609_RuntimeMethod_var);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NCMB.NCMBUser/<LogInWithAuthDataAsync>c__AnonStorey4::.ctor()
extern "C"  void U3CLogInWithAuthDataAsyncU3Ec__AnonStorey4__ctor_m392785476 (U3CLogInWithAuthDataAsyncU3Ec__AnonStorey4_t835417452 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NCMB.NCMBUser/<LogInWithAuthDataAsync>c__AnonStorey4::<>m__0(NCMB.NCMBException)
extern "C"  void U3CLogInWithAuthDataAsyncU3Ec__AnonStorey4_U3CU3Em__0_m2910081602 (U3CLogInWithAuthDataAsyncU3Ec__AnonStorey4_t835417452 * __this, NCMBException_t2865652588 * ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLogInWithAuthDataAsyncU3Ec__AnonStorey4_U3CU3Em__0_m2910081602_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NCMBException_t2865652588 * L_0 = ___error0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		NCMBUser_t3450556553 * L_1 = __this->get_U24this_1();
		NullCheck(L_1);
		Dictionary_2_t2865362463 * L_2 = NCMBUser_get_AuthData_m2245944902(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Dictionary_2_Clear_m3181358953(L_2, /*hidden argument*/Dictionary_2_Clear_m3181358953_RuntimeMethod_var);
	}

IL_0016:
	{
		NCMBCallback_t3196884667 * L_3 = __this->get_callback_0();
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		NCMBCallback_t3196884667 * L_4 = __this->get_callback_0();
		NCMBException_t2865652588 * L_5 = ___error0;
		NullCheck(L_4);
		NCMBCallback_Invoke_m518754946(L_4, L_5, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NCMB.NCMBUser/<RequestAuthenticationMailAsync>c__AnonStorey2::.ctor()
extern "C"  void U3CRequestAuthenticationMailAsyncU3Ec__AnonStorey2__ctor_m415553432 (U3CRequestAuthenticationMailAsyncU3Ec__AnonStorey2_t3874618840 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NCMB.NCMBUser/<RequestAuthenticationMailAsync>c__AnonStorey2::<>m__0(System.Int32,System.String,NCMB.NCMBException)
extern "C"  void U3CRequestAuthenticationMailAsyncU3Ec__AnonStorey2_U3CU3Em__0_m1673362474 (U3CRequestAuthenticationMailAsyncU3Ec__AnonStorey2_t3874618840 * __this, int32_t ___statusCode0, String_t* ___responseData1, NCMBException_t2865652588 * ___error2, const RuntimeMethod* method)
{
	{
		NCMBCallback_t3196884667 * L_0 = __this->get_callback_0();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		NCMBCallback_t3196884667 * L_1 = __this->get_callback_0();
		NCMBException_t2865652588 * L_2 = ___error2;
		NullCheck(L_1);
		NCMBCallback_Invoke_m518754946(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NCMB.NCMBUser/<UnLinkWithAuthDataAsync>c__AnonStorey6::.ctor()
extern "C"  void U3CUnLinkWithAuthDataAsyncU3Ec__AnonStorey6__ctor_m2524079050 (U3CUnLinkWithAuthDataAsyncU3Ec__AnonStorey6_t2992002127 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NCMB.NCMBUser/<UnLinkWithAuthDataAsync>c__AnonStorey6::<>m__0(NCMB.NCMBException)
extern "C"  void U3CUnLinkWithAuthDataAsyncU3Ec__AnonStorey6_U3CU3Em__0_m1644182132 (U3CUnLinkWithAuthDataAsyncU3Ec__AnonStorey6_t2992002127 * __this, NCMBException_t2865652588 * ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CUnLinkWithAuthDataAsyncU3Ec__AnonStorey6_U3CU3Em__0_m1644182132_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NCMBException_t2865652588 * L_0 = ___error0;
		if (L_0)
		{
			goto IL_002e;
		}
	}
	{
		Dictionary_2_t2865362463 * L_1 = __this->get_currentParam_0();
		String_t* L_2 = __this->get_provider_1();
		NullCheck(L_1);
		Dictionary_2_Remove_m1799044440(L_1, L_2, /*hidden argument*/Dictionary_2_Remove_m1799044440_RuntimeMethod_var);
		NCMBUser_t3450556553 * L_3 = __this->get_U24this_3();
		Dictionary_2_t2865362463 * L_4 = __this->get_currentParam_0();
		NullCheck(L_3);
		NCMBUser_set_AuthData_m1092800737(L_3, L_4, /*hidden argument*/NULL);
		goto IL_003f;
	}

IL_002e:
	{
		NCMBUser_t3450556553 * L_5 = __this->get_U24this_3();
		Dictionary_2_t2865362463 * L_6 = __this->get_currentParam_0();
		NullCheck(L_5);
		NCMBUser_set_AuthData_m1092800737(L_5, L_6, /*hidden argument*/NULL);
	}

IL_003f:
	{
		NCMBCallback_t3196884667 * L_7 = __this->get_callback_2();
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		NCMBCallback_t3196884667 * L_8 = __this->get_callback_2();
		NCMBException_t2865652588 * L_9 = ___error0;
		NullCheck(L_8);
		NCMBCallback_Invoke_m518754946(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0056:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ObjCtrl::.ctor()
extern "C"  void ObjCtrl__ctor_m178940584 (ObjCtrl_t2048577503 * __this, const RuntimeMethod* method)
{
	{
		__this->set_vMin_11((0.5f));
		__this->set_vMax_12((2.0f));
		__this->set_v_16((1.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ObjCtrl::Start()
extern "C"  void ObjCtrl_Start_m2904966602 (ObjCtrl_t2048577503 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjCtrl_Start_m2904966602_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Button_t4055032469 * V_0 = NULL;
	{
		int32_t L_0 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_wid_6((((float)((float)L_0))));
		int32_t L_1 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_hei_7((((float)((float)L_1))));
		float L_2 = __this->get_wid_6();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_3 = powf(L_2, (2.0f));
		float L_4 = __this->get_hei_7();
		float L_5 = powf(L_4, (2.0f));
		float L_6 = sqrtf(((float)il2cpp_codegen_add((float)L_3, (float)L_5)));
		__this->set_diag_8(L_6);
		GameObject_t1113636619 * L_7 = __this->get_obj_2();
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = GameObject_get_transform_m1369836730(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t3722313464  L_9 = Transform_get_localScale_m129152068(L_8, /*hidden argument*/NULL);
		__this->set_initScale_15(L_9);
		Button_t4055032469 * L_10 = __this->get_reset_3();
		NullCheck(L_10);
		Button_t4055032469 * L_11 = Component_GetComponent_TisButton_t4055032469_m1381873113(L_10, /*hidden argument*/Component_GetComponent_TisButton_t4055032469_m1381873113_RuntimeMethod_var);
		V_0 = L_11;
		Button_t4055032469 * L_12 = V_0;
		NullCheck(L_12);
		ButtonClickedEvent_t48803504 * L_13 = Button_get_onClick_m2332132945(L_12, /*hidden argument*/NULL);
		intptr_t L_14 = (intptr_t)ObjCtrl_ResetOnClick_m1415861476_RuntimeMethod_var;
		UnityAction_t3245792599 * L_15 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_15, __this, L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		UnityEvent_AddListener_m2276267359(L_13, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ObjCtrl::Update()
extern "C"  void ObjCtrl_Update_m2655592593 (ObjCtrl_t2048577503 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjCtrl_Update_m2655592593_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t1921856868  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Touch_t1921856868  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Touch_t1921856868  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		int32_t L_0 = Input_get_touchCount_m3403849067(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_00fe;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Touch_t1921856868  L_1 = Input_GetTouch_m2192712756(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = Touch_get_phase_m214549210((Touch_t1921856868 *)(&V_0), /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0046;
		}
	}
	{
		Vector2_t2156229523  L_3 = Touch_get_position_m3109777936((Touch_t1921856868 *)(&V_0), /*hidden argument*/NULL);
		__this->set_sPos_4(L_3);
		GameObject_t1113636619 * L_4 = __this->get_obj_2();
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = GameObject_get_transform_m1369836730(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Quaternion_t2301928331  L_6 = Transform_get_rotation_m3502953881(L_5, /*hidden argument*/NULL);
		__this->set_sRot_5(L_6);
		goto IL_00f9;
	}

IL_0046:
	{
		int32_t L_7 = Touch_get_phase_m214549210((Touch_t1921856868 *)(&V_0), /*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_8 = Touch_get_phase_m214549210((Touch_t1921856868 *)(&V_0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_00f9;
		}
	}

IL_0060:
	{
		Vector2_t2156229523  L_9 = Touch_get_position_m3109777936((Touch_t1921856868 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_9;
		float L_10 = (&V_1)->get_x_0();
		Vector2_t2156229523 * L_11 = __this->get_address_of_sPos_4();
		float L_12 = L_11->get_x_0();
		float L_13 = __this->get_wid_6();
		__this->set_tx_9(((float)((float)((float)il2cpp_codegen_subtract((float)L_10, (float)L_12))/(float)L_13)));
		Vector2_t2156229523  L_14 = Touch_get_position_m3109777936((Touch_t1921856868 *)(&V_0), /*hidden argument*/NULL);
		V_2 = L_14;
		float L_15 = (&V_2)->get_y_1();
		Vector2_t2156229523 * L_16 = __this->get_address_of_sPos_4();
		float L_17 = L_16->get_y_1();
		float L_18 = __this->get_hei_7();
		__this->set_ty_10(((float)((float)((float)il2cpp_codegen_subtract((float)L_15, (float)L_17))/(float)L_18)));
		GameObject_t1113636619 * L_19 = __this->get_obj_2();
		NullCheck(L_19);
		Transform_t3600365921 * L_20 = GameObject_get_transform_m1369836730(L_19, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_21 = __this->get_sRot_5();
		NullCheck(L_20);
		Transform_set_rotation_m3524318132(L_20, L_21, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_22 = __this->get_obj_2();
		NullCheck(L_22);
		Transform_t3600365921 * L_23 = GameObject_get_transform_m1369836730(L_22, /*hidden argument*/NULL);
		float L_24 = __this->get_ty_10();
		float L_25 = __this->get_tx_9();
		Vector3_t3722313464  L_26;
		memset(&L_26, 0, sizeof(L_26));
		Vector3__ctor_m3353183577((&L_26), ((float)il2cpp_codegen_multiply((float)(90.0f), (float)L_24)), ((float)il2cpp_codegen_multiply((float)(-90.0f), (float)L_25)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_Rotate_m1886816857(L_23, L_26, 0, /*hidden argument*/NULL);
	}

IL_00f9:
	{
		goto IL_0217;
	}

IL_00fe:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		int32_t L_27 = Input_get_touchCount_m3403849067(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_27) < ((int32_t)2)))
		{
			goto IL_0217;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Touch_t1921856868  L_28 = Input_GetTouch_m2192712756(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_3 = L_28;
		Touch_t1921856868  L_29 = Input_GetTouch_m2192712756(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		V_4 = L_29;
		int32_t L_30 = Touch_get_phase_m214549210((Touch_t1921856868 *)(&V_4), /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0142;
		}
	}
	{
		Vector2_t2156229523  L_31 = Touch_get_position_m3109777936((Touch_t1921856868 *)(&V_3), /*hidden argument*/NULL);
		Vector2_t2156229523  L_32 = Touch_get_position_m3109777936((Touch_t1921856868 *)(&V_4), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		float L_33 = Vector2_Distance_m3048868881(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		__this->set_sDist_13(L_33);
		goto IL_0217;
	}

IL_0142:
	{
		int32_t L_34 = Touch_get_phase_m214549210((Touch_t1921856868 *)(&V_3), /*hidden argument*/NULL);
		if ((((int32_t)L_34) == ((int32_t)1)))
		{
			goto IL_015c;
		}
	}
	{
		int32_t L_35 = Touch_get_phase_m214549210((Touch_t1921856868 *)(&V_3), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_35) == ((uint32_t)2))))
		{
			goto IL_0217;
		}
	}

IL_015c:
	{
		int32_t L_36 = Touch_get_phase_m214549210((Touch_t1921856868 *)(&V_4), /*hidden argument*/NULL);
		if ((((int32_t)L_36) == ((int32_t)1)))
		{
			goto IL_0176;
		}
	}
	{
		int32_t L_37 = Touch_get_phase_m214549210((Touch_t1921856868 *)(&V_4), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_37) == ((uint32_t)2))))
		{
			goto IL_0217;
		}
	}

IL_0176:
	{
		Vector2_t2156229523  L_38 = Touch_get_position_m3109777936((Touch_t1921856868 *)(&V_3), /*hidden argument*/NULL);
		Vector2_t2156229523  L_39 = Touch_get_position_m3109777936((Touch_t1921856868 *)(&V_4), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		float L_40 = Vector2_Distance_m3048868881(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/NULL);
		__this->set_nDist_14(L_40);
		float L_41 = __this->get_v_16();
		float L_42 = __this->get_nDist_14();
		float L_43 = __this->get_sDist_13();
		float L_44 = __this->get_diag_8();
		__this->set_v_16(((float)il2cpp_codegen_add((float)L_41, (float)((float)((float)((float)il2cpp_codegen_subtract((float)L_42, (float)L_43))/(float)L_44)))));
		float L_45 = __this->get_nDist_14();
		__this->set_sDist_13(L_45);
		float L_46 = __this->get_v_16();
		float L_47 = __this->get_vMax_12();
		if ((!(((float)L_46) > ((float)L_47))))
		{
			goto IL_01d9;
		}
	}
	{
		float L_48 = __this->get_vMax_12();
		__this->set_v_16(L_48);
	}

IL_01d9:
	{
		float L_49 = __this->get_v_16();
		float L_50 = __this->get_vMin_11();
		if ((!(((float)L_49) < ((float)L_50))))
		{
			goto IL_01f6;
		}
	}
	{
		float L_51 = __this->get_vMin_11();
		__this->set_v_16(L_51);
	}

IL_01f6:
	{
		GameObject_t1113636619 * L_52 = __this->get_obj_2();
		NullCheck(L_52);
		Transform_t3600365921 * L_53 = GameObject_get_transform_m1369836730(L_52, /*hidden argument*/NULL);
		Vector3_t3722313464  L_54 = __this->get_initScale_15();
		float L_55 = __this->get_v_16();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_56 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_54, L_55, /*hidden argument*/NULL);
		NullCheck(L_53);
		Transform_set_localScale_m3053443106(L_53, L_56, /*hidden argument*/NULL);
	}

IL_0217:
	{
		return;
	}
}
// System.Void ObjCtrl::ResetOnClick()
extern "C"  void ObjCtrl_ResetOnClick_m1415861476 (ObjCtrl_t2048577503 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjCtrl_ResetOnClick_m1415861476_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_obj_2();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_2 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_rotation_m3524318132(L_1, L_2, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_3 = __this->get_obj_2();
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = GameObject_get_transform_m1369836730(L_3, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = __this->get_initScale_15();
		NullCheck(L_4);
		Transform_set_localScale_m3053443106(L_4, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3429492703, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerScript::.ctor()
extern "C"  void PlayerScript__ctor_m4029214145 (PlayerScript_t1783516946 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerScript::Start()
extern "C"  void PlayerScript_Start_m4236296901 (PlayerScript_t1783516946 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void PlayerScript::Update()
extern "C"  void PlayerScript_Update_m4164928735 (PlayerScript_t1783516946 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerScript_Update_m4164928735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral1828639942, /*hidden argument*/NULL);
		float L_1 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)(150.0f)));
		float L_2 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral2984908384, /*hidden argument*/NULL);
		float L_3 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)), (float)(3.0f)));
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_5 = V_0;
		NullCheck(L_4);
		Transform_Rotate_m3172098886(L_4, (0.0f), L_5, (0.0f), /*hidden argument*/NULL);
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_7 = V_1;
		NullCheck(L_6);
		Transform_Translate_m3762500149(L_6, (0.0f), (0.0f), L_7, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ProfileCloseScript::.ctor()
extern "C"  void ProfileCloseScript__ctor_m3439278543 (ProfileCloseScript_t727353722 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProfileCloseScript::CloseOnClick()
extern "C"  void ProfileCloseScript_CloseOnClick_m1821287866 (ProfileCloseScript_t727353722 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ProfileCloseScript_CloseOnClick_m1821287866_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t1901882714 * L_0 = __this->get_Name_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		Text_t1901882714 * L_2 = __this->get_Grade_3();
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		Text_t1901882714 * L_4 = __this->get_Profile_4();
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_5);
		GameObject_t1113636619 * L_6 = __this->get_ProfileInput_6();
		NullCheck(L_6);
		GameObject_SetActive_m796801857(L_6, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_7 = __this->get_Information_5();
		NullCheck(L_7);
		GameObject_SetActive_m796801857(L_7, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ProfileEditScript::.ctor()
extern "C"  void ProfileEditScript__ctor_m1589891303 (ProfileEditScript_t4034749066 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProfileEditScript::ProfileEditOpen()
extern "C"  void ProfileEditScript_ProfileEditOpen_m2978807080 (ProfileEditScript_t4034749066 * __this, const RuntimeMethod* method)
{
	{
		InputField_t3762917431 * L_0 = __this->get_ProfileEditInput_3();
		Text_t1901882714 * L_1 = __this->get_ProfileText_4();
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(71 /* System.String UnityEngine.UI.Text::get_text() */, L_1);
		NullCheck(L_0);
		InputField_set_text_m1877260015(L_0, L_2, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_3 = __this->get_ProfileEdit_2();
		NullCheck(L_3);
		GameObject_SetActive_m796801857(L_3, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProfileEditScript::ProfileEditClose()
extern "C"  void ProfileEditScript_ProfileEditClose_m177985267 (ProfileEditScript_t4034749066 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_ProfileEdit_2();
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ProfileSaveScript::.ctor()
extern "C"  void ProfileSaveScript__ctor_m3344253303 (ProfileSaveScript_t3099832256 * __this, const RuntimeMethod* method)
{
	{
		__this->set_lifeTime_7((1.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProfileSaveScript::Start()
extern "C"  void ProfileSaveScript_Start_m3726529565 (ProfileSaveScript_t3099832256 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void ProfileSaveScript::Update()
extern "C"  void ProfileSaveScript_Update_m1568002084 (ProfileSaveScript_t3099832256 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ProfileSaveScript_Update_m1568002084_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t1901882714 * L_0 = __this->get_Console_5();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(71 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, _stringLiteral2530674981, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0034;
		}
	}
	{
		Text_t1901882714 * L_3 = __this->get_Console_5();
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(71 /* System.String UnityEngine.UI.Text::get_text() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m920492651(NULL /*static, unused*/, L_4, _stringLiteral97506931, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0072;
		}
	}

IL_0034:
	{
		float L_6 = __this->get_time_8();
		float L_7 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_time_8(((float)il2cpp_codegen_add((float)L_6, (float)L_7)));
		float L_8 = __this->get_time_8();
		float L_9 = __this->get_lifeTime_7();
		if ((!(((float)L_8) > ((float)L_9))))
		{
			goto IL_0072;
		}
	}
	{
		Text_t1901882714 * L_10 = __this->get_Console_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_11);
		__this->set_time_8((0.0f));
	}

IL_0072:
	{
		return;
	}
}
// System.Void ProfileSaveScript::SaveText()
extern "C"  void ProfileSaveScript_SaveText_m2400277834 (ProfileSaveScript_t3099832256 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ProfileSaveScript_SaveText_m2400277834_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NCMBQuery_1_t1736825847 * V_0 = NULL;
	{
		InputField_t3762917431 * L_0 = __this->get_inputField_3();
		NullCheck(L_0);
		String_t* L_1 = InputField_get_text_m3534748202(L_0, /*hidden argument*/NULL);
		__this->set_str_2(L_1);
		NCMBQuery_1_t1736825847 * L_2 = (NCMBQuery_1_t1736825847 *)il2cpp_codegen_object_new(NCMBQuery_1_t1736825847_il2cpp_TypeInfo_var);
		NCMBQuery_1__ctor_m175463168(L_2, _stringLiteral2619321690, /*hidden argument*/NCMBQuery_1__ctor_m175463168_RuntimeMethod_var);
		V_0 = L_2;
		NCMBQuery_1_t1736825847 * L_3 = V_0;
		int32_t L_4 = __this->get_ProfileMemberNumber_6();
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		NCMBQuery_1_WhereEqualTo_m661601083(L_3, _stringLiteral318739541, L_6, /*hidden argument*/NCMBQuery_1_WhereEqualTo_m661601083_RuntimeMethod_var);
		NCMBQuery_1_t1736825847 * L_7 = V_0;
		intptr_t L_8 = (intptr_t)ProfileSaveScript_U3CSaveTextU3Em__0_m1798662368_RuntimeMethod_var;
		NCMBQueryCallback_1_t3839413818 * L_9 = (NCMBQueryCallback_1_t3839413818 *)il2cpp_codegen_object_new(NCMBQueryCallback_1_t3839413818_il2cpp_TypeInfo_var);
		NCMBQueryCallback_1__ctor_m93443526(L_9, __this, L_8, /*hidden argument*/NCMBQueryCallback_1__ctor_m93443526_RuntimeMethod_var);
		NullCheck(L_7);
		NCMBQuery_1_FindAsync_m684836409(L_7, L_9, /*hidden argument*/NCMBQuery_1_FindAsync_m684836409_RuntimeMethod_var);
		InputField_t3762917431 * L_10 = __this->get_inputField_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_10);
		InputField_set_text_m1877260015(L_10, L_11, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_12 = __this->get_ProfileEdit_9();
		NullCheck(L_12);
		GameObject_SetActive_m796801857(L_12, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProfileSaveScript::<SaveText>m__0(System.Collections.Generic.List`1<NCMB.NCMBObject>,NCMB.NCMBException)
extern "C"  void ProfileSaveScript_U3CSaveTextU3Em__0_m1798662368 (ProfileSaveScript_t3099832256 * __this, List_1_t4123261176 * ___objList0, NCMBException_t2865652588 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ProfileSaveScript_U3CSaveTextU3Em__0_m1798662368_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NCMBException_t2865652588 * L_0 = ___e1;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		Text_t1901882714 * L_1 = __this->get_Console_5();
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteral97506931);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral562053875, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_0025:
	{
		Text_t1901882714 * L_2 = __this->get_Console_5();
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteral2530674981);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3322332165, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_ProfileMemberNumber_6();
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_4);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4224860613, /*hidden argument*/NULL);
		List_1_t4123261176 * L_6 = ___objList0;
		NullCheck(L_6);
		NCMBObject_t2651186434 * L_7 = List_1_get_Item_m2936930928(L_6, 0, /*hidden argument*/List_1_get_Item_m2936930928_RuntimeMethod_var);
		String_t* L_8 = __this->get_str_2();
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, RuntimeObject * >::Invoke(5 /* System.Void NCMB.NCMBObject::set_Item(System.String,System.Object) */, L_7, _stringLiteral1650268683, L_8);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2769243058, /*hidden argument*/NULL);
		List_1_t4123261176 * L_9 = ___objList0;
		NullCheck(L_9);
		NCMBObject_t2651186434 * L_10 = List_1_get_Item_m2936930928(L_9, 0, /*hidden argument*/List_1_get_Item_m2936930928_RuntimeMethod_var);
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(13 /* System.Void NCMB.NCMBObject::SaveAsync() */, L_10);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1245227674, /*hidden argument*/NULL);
		Text_t1901882714 * L_11 = __this->get_ProfileText_4();
		String_t* L_12 = __this->get_str_2();
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_12);
	}

IL_00a1:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PushMicrobotPushScript::.ctor()
extern "C"  void PushMicrobotPushScript__ctor_m3841369088 (PushMicrobotPushScript_t2516234185 * __this, const RuntimeMethod* method)
{
	{
		__this->set_lifeTime_3((1.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PushMicrobotPushScript::PushOnClick()
extern "C"  void PushMicrobotPushScript_PushOnClick_m3317924500 (PushMicrobotPushScript_t2516234185 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PushMicrobotPushScript_PushOnClick_m3317924500_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	PostMessageData_t1903475841 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		V_0 = _stringLiteral2008436112;
		PostMessageData_t1903475841 * L_0 = (PostMessageData_t1903475841 *)il2cpp_codegen_object_new(PostMessageData_t1903475841_il2cpp_TypeInfo_var);
		PostMessageData__ctor_m292042944(L_0, /*hidden argument*/NULL);
		V_1 = L_0;
		PostMessageData_t1903475841 * L_1 = V_1;
		String_t* L_2 = V_0;
		NullCheck(L_1);
		L_1->set_text_3(L_2);
		PostMessageData_t1903475841 * L_3 = V_1;
		RuntimeObject* L_4 = SlackAPI_PostMessage_m3581228338(NULL /*static, unused*/, L_3, (Action_t1264377477 *)NULL, (Action_1_t2019918284 *)NULL, /*hidden argument*/NULL);
		V_2 = L_4;
		RuntimeObject* L_5 = V_2;
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_5, /*hidden argument*/NULL);
		Text_t1901882714 * L_6 = __this->get_Console_2();
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteral2530674981);
		return;
	}
}
// System.Void PushMicrobotPushScript::Start()
extern "C"  void PushMicrobotPushScript_Start_m109812786 (PushMicrobotPushScript_t2516234185 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PushMicrobotPushScript_Start_m109812786_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Button_t4055032469 * L_0 = __this->get_PushButton_5();
		NullCheck(L_0);
		ButtonClickedEvent_t48803504 * L_1 = Button_get_onClick_m2332132945(L_0, /*hidden argument*/NULL);
		intptr_t L_2 = (intptr_t)PushMicrobotPushScript_PushOnClick_m3317924500_RuntimeMethod_var;
		UnityAction_t3245792599 * L_3 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m2276267359(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PushMicrobotPushScript::Update()
extern "C"  void PushMicrobotPushScript_Update_m2675743356 (PushMicrobotPushScript_t2516234185 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PushMicrobotPushScript_Update_m2675743356_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t1901882714 * L_0 = __this->get_Console_2();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(71 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, _stringLiteral2530674981, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0034;
		}
	}
	{
		Text_t1901882714 * L_3 = __this->get_Console_2();
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(71 /* System.String UnityEngine.UI.Text::get_text() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m920492651(NULL /*static, unused*/, L_4, _stringLiteral97506931, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0072;
		}
	}

IL_0034:
	{
		float L_6 = __this->get_time_4();
		float L_7 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_time_4(((float)il2cpp_codegen_add((float)L_6, (float)L_7)));
		float L_8 = __this->get_time_4();
		float L_9 = __this->get_lifeTime_3();
		if ((!(((float)L_8) > ((float)L_9))))
		{
			goto IL_0072;
		}
	}
	{
		Text_t1901882714 * L_10 = __this->get_Console_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_11);
		__this->set_time_4((0.0f));
	}

IL_0072:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ResetButtonScript::.ctor()
extern "C"  void ResetButtonScript__ctor_m1555444056 (ResetButtonScript_t1499367335 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ResetButtonScript::Reset()
extern "C"  void ResetButtonScript_Reset_m734176124 (ResetButtonScript_t1499367335 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_LabObject_2();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_Rotate_m3172098886(L_1, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String SimpleJSON.Json::Serialize(System.Object)
extern "C"  String_t* Json_Serialize_m4211970313 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		String_t* L_1 = Serializer_Serialize_m460980285(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SimpleJSON.Json/Serializer::.ctor()
extern "C"  void Serializer__ctor_m4016915493 (Serializer_t1431492217 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer__ctor_m4016915493_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		__this->set_builder_0(L_0);
		return;
	}
}
// System.String SimpleJSON.Json/Serializer::Serialize(System.Object)
extern "C"  String_t* Serializer_Serialize_m460980285 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_Serialize_m460980285_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Serializer_t1431492217 * V_0 = NULL;
	{
		Serializer_t1431492217 * L_0 = (Serializer_t1431492217 *)il2cpp_codegen_object_new(Serializer_t1431492217_il2cpp_TypeInfo_var);
		Serializer__ctor_m4016915493(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Serializer_t1431492217 * L_1 = V_0;
		RuntimeObject * L_2 = ___obj0;
		NullCheck(L_1);
		Serializer_SerializeValue_m485783884(L_1, L_2, /*hidden argument*/NULL);
		Serializer_t1431492217 * L_3 = V_0;
		NullCheck(L_3);
		StringBuilder_t * L_4 = L_3->get_builder_0();
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		return L_5;
	}
}
// System.Void SimpleJSON.Json/Serializer::SerializeValue(System.Object)
extern "C"  void Serializer_SerializeValue_m485783884 (Serializer_t1431492217 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeValue_m485783884_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t * G_B7_0 = NULL;
	StringBuilder_t * G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	StringBuilder_t * G_B8_1 = NULL;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		StringBuilder_t * L_1 = __this->get_builder_0();
		NullCheck(L_1);
		StringBuilder_Append_m1965104174(L_1, _stringLiteral1202628576, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_001c:
	{
		RuntimeObject * L_2 = ___value0;
		String_t* L_3 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		V_2 = L_3;
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_4 = V_2;
		Serializer_SerializeString_m3358732709(__this, L_4, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_0035:
	{
		RuntimeObject * L_5 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, Boolean_t97287965_il2cpp_TypeInfo_var)))
		{
			goto IL_006b;
		}
	}
	{
		StringBuilder_t * L_6 = __this->get_builder_0();
		RuntimeObject * L_7 = ___value0;
		G_B6_0 = L_6;
		if (!((*(bool*)((bool*)UnBox(L_7, Boolean_t97287965_il2cpp_TypeInfo_var)))))
		{
			G_B7_0 = L_6;
			goto IL_005b;
		}
	}
	{
		G_B8_0 = _stringLiteral4002445229;
		G_B8_1 = G_B6_0;
		goto IL_0060;
	}

IL_005b:
	{
		G_B8_0 = _stringLiteral3875954633;
		G_B8_1 = G_B7_0;
	}

IL_0060:
	{
		NullCheck(G_B8_1);
		StringBuilder_Append_m1965104174(G_B8_1, G_B8_0, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_006b:
	{
		RuntimeObject * L_8 = ___value0;
		RuntimeObject* L_9 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IList_t2094931216_il2cpp_TypeInfo_var));
		V_0 = L_9;
		if (!L_9)
		{
			goto IL_0084;
		}
	}
	{
		RuntimeObject* L_10 = V_0;
		Serializer_SerializeArray_m3163871500(__this, L_10, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_0084:
	{
		RuntimeObject * L_11 = ___value0;
		RuntimeObject* L_12 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IDictionary_t1363984059_il2cpp_TypeInfo_var));
		V_1 = L_12;
		if (!L_12)
		{
			goto IL_009d;
		}
	}
	{
		RuntimeObject* L_13 = V_1;
		Serializer_SerializeObject_m1961571130(__this, L_13, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_009d:
	{
		RuntimeObject * L_14 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_14, Char_t3634460470_il2cpp_TypeInfo_var)))
		{
			goto IL_00bf;
		}
	}
	{
		RuntimeObject * L_15 = ___value0;
		String_t* L_16 = String_CreateString_m1262864254(NULL, ((*(Il2CppChar*)((Il2CppChar*)UnBox(L_15, Char_t3634460470_il2cpp_TypeInfo_var)))), 1, /*hidden argument*/NULL);
		Serializer_SerializeString_m3358732709(__this, L_16, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_00bf:
	{
		RuntimeObject * L_17 = ___value0;
		Serializer_SerializeOther_m4218573050(__this, L_17, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		return;
	}
}
// System.Void SimpleJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
extern "C"  void Serializer_SerializeObject_m1961571130 (Serializer_t1431492217 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeObject_m1961571130_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)1;
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m2383614642(L_0, ((int32_t)123), /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___obj0;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t1363984059_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0065;
		}

IL_0021:
		{
			RuntimeObject* L_4 = V_2;
			NullCheck(L_4);
			RuntimeObject * L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			bool L_6 = V_0;
			if (L_6)
			{
				goto IL_003c;
			}
		}

IL_002e:
		{
			StringBuilder_t * L_7 = __this->get_builder_0();
			NullCheck(L_7);
			StringBuilder_Append_m2383614642(L_7, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_003c:
		{
			RuntimeObject * L_8 = V_1;
			NullCheck(L_8);
			String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
			Serializer_SerializeString_m3358732709(__this, L_9, /*hidden argument*/NULL);
			StringBuilder_t * L_10 = __this->get_builder_0();
			NullCheck(L_10);
			StringBuilder_Append_m2383614642(L_10, ((int32_t)58), /*hidden argument*/NULL);
			RuntimeObject* L_11 = ___obj0;
			RuntimeObject * L_12 = V_1;
			NullCheck(L_11);
			RuntimeObject * L_13 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t1363984059_il2cpp_TypeInfo_var, L_11, L_12);
			Serializer_SerializeValue_m485783884(__this, L_13, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_0065:
		{
			RuntimeObject* L_14 = V_2;
			NullCheck(L_14);
			bool L_15 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0021;
			}
		}

IL_0070:
		{
			IL2CPP_LEAVE(0x89, FINALLY_0075);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0075;
	}

FINALLY_0075:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_16 = V_2;
			RuntimeObject* L_17 = ((RuntimeObject*)IsInst((RuntimeObject*)L_16, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_3 = L_17;
			if (!L_17)
			{
				goto IL_0088;
			}
		}

IL_0082:
		{
			RuntimeObject* L_18 = V_3;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_18);
		}

IL_0088:
		{
			IL2CPP_END_FINALLY(117)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(117)
	{
		IL2CPP_JUMP_TBL(0x89, IL_0089)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0089:
	{
		StringBuilder_t * L_19 = __this->get_builder_0();
		NullCheck(L_19);
		StringBuilder_Append_m2383614642(L_19, ((int32_t)125), /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimpleJSON.Json/Serializer::SerializeArray(System.Collections.IList)
extern "C"  void Serializer_SerializeArray_m3163871500 (Serializer_t1431492217 * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeArray_m3163871500_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m2383614642(L_0, ((int32_t)91), /*hidden argument*/NULL);
		V_0 = (bool)1;
		RuntimeObject* L_1 = ___anArray0;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_1);
		V_2 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0040;
		}

IL_001c:
		{
			RuntimeObject* L_3 = V_2;
			NullCheck(L_3);
			RuntimeObject * L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_3);
			V_1 = L_4;
			bool L_5 = V_0;
			if (L_5)
			{
				goto IL_0037;
			}
		}

IL_0029:
		{
			StringBuilder_t * L_6 = __this->get_builder_0();
			NullCheck(L_6);
			StringBuilder_Append_m2383614642(L_6, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0037:
		{
			RuntimeObject * L_7 = V_1;
			Serializer_SerializeValue_m485783884(__this, L_7, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_0040:
		{
			RuntimeObject* L_8 = V_2;
			NullCheck(L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_001c;
			}
		}

IL_004b:
		{
			IL2CPP_LEAVE(0x64, FINALLY_0050);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_2;
			RuntimeObject* L_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_3 = L_11;
			if (!L_11)
			{
				goto IL_0063;
			}
		}

IL_005d:
		{
			RuntimeObject* L_12 = V_3;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_12);
		}

IL_0063:
		{
			IL2CPP_END_FINALLY(80)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_JUMP_TBL(0x64, IL_0064)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0064:
	{
		StringBuilder_t * L_13 = __this->get_builder_0();
		NullCheck(L_13);
		StringBuilder_Append_m2383614642(L_13, ((int32_t)93), /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimpleJSON.Json/Serializer::SerializeString(System.String)
extern "C"  void Serializer_SerializeString_m3358732709 (Serializer_t1431492217 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeString_m3358732709_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t3528271667* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	CharU5BU5D_t3528271667* V_2 = NULL;
	int32_t V_3 = 0;
	{
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m2383614642(L_0, ((int32_t)34), /*hidden argument*/NULL);
		String_t* L_1 = ___str0;
		NullCheck(L_1);
		CharU5BU5D_t3528271667* L_2 = String_ToCharArray_m1492846834(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		CharU5BU5D_t3528271667* L_3 = V_0;
		V_2 = L_3;
		V_3 = 0;
		goto IL_0107;
	}

IL_001e:
	{
		CharU5BU5D_t3528271667* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		Il2CppChar L_8 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)8)))
		{
			case 0:
			{
				goto IL_0083;
			}
			case 1:
			{
				goto IL_00db;
			}
			case 2:
			{
				goto IL_00af;
			}
			case 3:
			{
				goto IL_0042;
			}
			case 4:
			{
				goto IL_0099;
			}
			case 5:
			{
				goto IL_00c5;
			}
		}
	}

IL_0042:
	{
		Il2CppChar L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)34))))
		{
			goto IL_0057;
		}
	}
	{
		Il2CppChar L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_006d;
		}
	}
	{
		goto IL_00f1;
	}

IL_0057:
	{
		StringBuilder_t * L_11 = __this->get_builder_0();
		NullCheck(L_11);
		StringBuilder_Append_m1965104174(L_11, _stringLiteral3450386420, /*hidden argument*/NULL);
		goto IL_0103;
	}

IL_006d:
	{
		StringBuilder_t * L_12 = __this->get_builder_0();
		NullCheck(L_12);
		StringBuilder_Append_m1965104174(L_12, _stringLiteral3458119668, /*hidden argument*/NULL);
		goto IL_0103;
	}

IL_0083:
	{
		StringBuilder_t * L_13 = __this->get_builder_0();
		NullCheck(L_13);
		StringBuilder_Append_m1965104174(L_13, _stringLiteral3454580724, /*hidden argument*/NULL);
		goto IL_0103;
	}

IL_0099:
	{
		StringBuilder_t * L_14 = __this->get_builder_0();
		NullCheck(L_14);
		StringBuilder_Append_m1965104174(L_14, _stringLiteral3454318580, /*hidden argument*/NULL);
		goto IL_0103;
	}

IL_00af:
	{
		StringBuilder_t * L_15 = __this->get_builder_0();
		NullCheck(L_15);
		StringBuilder_Append_m1965104174(L_15, _stringLiteral3454842868, /*hidden argument*/NULL);
		goto IL_0103;
	}

IL_00c5:
	{
		StringBuilder_t * L_16 = __this->get_builder_0();
		NullCheck(L_16);
		StringBuilder_Append_m1965104174(L_16, _stringLiteral3455629300, /*hidden argument*/NULL);
		goto IL_0103;
	}

IL_00db:
	{
		StringBuilder_t * L_17 = __this->get_builder_0();
		NullCheck(L_17);
		StringBuilder_Append_m1965104174(L_17, _stringLiteral3455498228, /*hidden argument*/NULL);
		goto IL_0103;
	}

IL_00f1:
	{
		StringBuilder_t * L_18 = __this->get_builder_0();
		Il2CppChar L_19 = V_1;
		NullCheck(L_18);
		StringBuilder_Append_m2383614642(L_18, L_19, /*hidden argument*/NULL);
		goto IL_0103;
	}

IL_0103:
	{
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0107:
	{
		int32_t L_21 = V_3;
		CharU5BU5D_t3528271667* L_22 = V_2;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		StringBuilder_t * L_23 = __this->get_builder_0();
		NullCheck(L_23);
		StringBuilder_Append_m2383614642(L_23, ((int32_t)34), /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimpleJSON.Json/Serializer::SerializeOther(System.Object)
extern "C"  void Serializer_SerializeOther_m4218573050 (Serializer_t1431492217 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeOther_m4218573050_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	double V_1 = 0.0;
	{
		RuntimeObject * L_0 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Single_t1397266774_il2cpp_TypeInfo_var)))
		{
			goto IL_002f;
		}
	}
	{
		StringBuilder_t * L_1 = __this->get_builder_0();
		RuntimeObject * L_2 = ___value0;
		V_0 = ((*(float*)((float*)UnBox(L_2, Single_t1397266774_il2cpp_TypeInfo_var))));
		String_t* L_3 = Single_ToString_m3489843083((float*)(&V_0), _stringLiteral3452614638, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_m1965104174(L_1, L_3, /*hidden argument*/NULL);
		goto IL_00df;
	}

IL_002f:
	{
		RuntimeObject * L_4 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_4, Int32_t2950945753_il2cpp_TypeInfo_var)))
		{
			goto IL_0087;
		}
	}
	{
		RuntimeObject * L_5 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, UInt32_t2560061978_il2cpp_TypeInfo_var)))
		{
			goto IL_0087;
		}
	}
	{
		RuntimeObject * L_6 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Int64_t3736567304_il2cpp_TypeInfo_var)))
		{
			goto IL_0087;
		}
	}
	{
		RuntimeObject * L_7 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_7, SByte_t1669577662_il2cpp_TypeInfo_var)))
		{
			goto IL_0087;
		}
	}
	{
		RuntimeObject * L_8 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_8, Byte_t1134296376_il2cpp_TypeInfo_var)))
		{
			goto IL_0087;
		}
	}
	{
		RuntimeObject * L_9 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_9, Int16_t2552820387_il2cpp_TypeInfo_var)))
		{
			goto IL_0087;
		}
	}
	{
		RuntimeObject * L_10 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_10, UInt16_t2177724958_il2cpp_TypeInfo_var)))
		{
			goto IL_0087;
		}
	}
	{
		RuntimeObject * L_11 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_11, UInt64_t4134040092_il2cpp_TypeInfo_var)))
		{
			goto IL_0099;
		}
	}

IL_0087:
	{
		StringBuilder_t * L_12 = __this->get_builder_0();
		RuntimeObject * L_13 = ___value0;
		NullCheck(L_12);
		StringBuilder_Append_m1640838743(L_12, L_13, /*hidden argument*/NULL);
		goto IL_00df;
	}

IL_0099:
	{
		RuntimeObject * L_14 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_14, Double_t594665363_il2cpp_TypeInfo_var)))
		{
			goto IL_00af;
		}
	}
	{
		RuntimeObject * L_15 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_15, Decimal_t2948259380_il2cpp_TypeInfo_var)))
		{
			goto IL_00d3;
		}
	}

IL_00af:
	{
		StringBuilder_t * L_16 = __this->get_builder_0();
		RuntimeObject * L_17 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		double L_18 = Convert_ToDouble_m4025515304(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		String_t* L_19 = Double_ToString_m896573572((double*)(&V_1), _stringLiteral3452614638, /*hidden argument*/NULL);
		NullCheck(L_16);
		StringBuilder_Append_m1965104174(L_16, L_19, /*hidden argument*/NULL);
		goto IL_00df;
	}

IL_00d3:
	{
		RuntimeObject * L_20 = ___value0;
		NullCheck(L_20);
		String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		Serializer_SerializeString_m3358732709(__this, L_21, /*hidden argument*/NULL);
	}

IL_00df:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SlackApi.PostMessageData::.ctor()
extern "C"  void PostMessageData__ctor_m292042944 (PostMessageData_t1903475841 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PostMessageData__ctor_m292042944_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_token_0(_stringLiteral3707726826);
		__this->set_channel_1(_stringLiteral2884425308);
		__this->set_icon_url_2(_stringLiteral149140440);
		__this->set_text_3(_stringLiteral489098567);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_parse_4(L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_link_names_5(L_1);
		__this->set_username_6(_stringLiteral1519004250);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_icon_emoji_7(L_2);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.IEnumerator SlackApi.SlackAPI::PostMessage(SlackApi.PostMessageData,System.Action,System.Action`1<System.String>)
extern "C"  RuntimeObject* SlackAPI_PostMessage_m3581228338 (RuntimeObject * __this /* static, unused */, PostMessageData_t1903475841 * ___data0, Action_t1264377477 * ___onSuccess1, Action_1_t2019918284 * ___onError2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SlackAPI_PostMessage_m3581228338_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CPostMessageU3Ec__Iterator0_t572351527 * V_0 = NULL;
	{
		U3CPostMessageU3Ec__Iterator0_t572351527 * L_0 = (U3CPostMessageU3Ec__Iterator0_t572351527 *)il2cpp_codegen_object_new(U3CPostMessageU3Ec__Iterator0_t572351527_il2cpp_TypeInfo_var);
		U3CPostMessageU3Ec__Iterator0__ctor_m3381477423(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CPostMessageU3Ec__Iterator0_t572351527 * L_1 = V_0;
		PostMessageData_t1903475841 * L_2 = ___data0;
		NullCheck(L_1);
		L_1->set_data_1(L_2);
		U3CPostMessageU3Ec__Iterator0_t572351527 * L_3 = V_0;
		Action_1_t2019918284 * L_4 = ___onError2;
		NullCheck(L_3);
		L_3->set_onError_5(L_4);
		U3CPostMessageU3Ec__Iterator0_t572351527 * L_5 = V_0;
		Action_t1264377477 * L_6 = ___onSuccess1;
		NullCheck(L_5);
		L_5->set_onSuccess_6(L_6);
		U3CPostMessageU3Ec__Iterator0_t572351527 * L_7 = V_0;
		return L_7;
	}
}
// System.Collections.IEnumerator SlackApi.SlackAPI::UploadScreenShot(SlackApi.UploadData,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Action,System.Action`1<System.String>)
extern "C"  RuntimeObject* SlackAPI_UploadScreenShot_m229945823 (RuntimeObject * __this /* static, unused */, UploadData_t2454610352 * ___data0, Nullable_1_t378540539  ___x1, Nullable_1_t378540539  ___y2, Action_t1264377477 * ___onSuccess3, Action_1_t2019918284 * ___onError4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SlackAPI_UploadScreenShot_m229945823_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CUploadScreenShotU3Ec__Iterator1_t762007288 * V_0 = NULL;
	{
		U3CUploadScreenShotU3Ec__Iterator1_t762007288 * L_0 = (U3CUploadScreenShotU3Ec__Iterator1_t762007288 *)il2cpp_codegen_object_new(U3CUploadScreenShotU3Ec__Iterator1_t762007288_il2cpp_TypeInfo_var);
		U3CUploadScreenShotU3Ec__Iterator1__ctor_m867367463(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CUploadScreenShotU3Ec__Iterator1_t762007288 * L_1 = V_0;
		Nullable_1_t378540539  L_2 = ___x1;
		NullCheck(L_1);
		L_1->set_x_0(L_2);
		U3CUploadScreenShotU3Ec__Iterator1_t762007288 * L_3 = V_0;
		Nullable_1_t378540539  L_4 = ___y2;
		NullCheck(L_3);
		L_3->set_y_1(L_4);
		U3CUploadScreenShotU3Ec__Iterator1_t762007288 * L_5 = V_0;
		UploadData_t2454610352 * L_6 = ___data0;
		NullCheck(L_5);
		L_5->set_data_8(L_6);
		U3CUploadScreenShotU3Ec__Iterator1_t762007288 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = ___onError4;
		NullCheck(L_7);
		L_7->set_onError_12(L_8);
		U3CUploadScreenShotU3Ec__Iterator1_t762007288 * L_9 = V_0;
		Action_t1264377477 * L_10 = ___onSuccess3;
		NullCheck(L_9);
		L_9->set_onSuccess_13(L_10);
		U3CUploadScreenShotU3Ec__Iterator1_t762007288 * L_11 = V_0;
		return L_11;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SlackApi.SlackAPI/<PostMessage>c__Iterator0::.ctor()
extern "C"  void U3CPostMessageU3Ec__Iterator0__ctor_m3381477423 (U3CPostMessageU3Ec__Iterator0_t572351527 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SlackApi.SlackAPI/<PostMessage>c__Iterator0::MoveNext()
extern "C"  bool U3CPostMessageU3Ec__Iterator0_MoveNext_m3199049117 (U3CPostMessageU3Ec__Iterator0_t572351527 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CPostMessageU3Ec__Iterator0_MoveNext_m3199049117_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_9();
		V_0 = L_0;
		__this->set_U24PC_9((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0146;
			}
		}
	}
	{
		goto IL_01a5;
	}

IL_0021:
	{
		WWWForm_t4064702195 * L_2 = (WWWForm_t4064702195 *)il2cpp_codegen_object_new(WWWForm_t4064702195_il2cpp_TypeInfo_var);
		WWWForm__ctor_m2465700452(L_2, /*hidden argument*/NULL);
		__this->set_U3CformU3E__0_0(L_2);
		WWWForm_t4064702195 * L_3 = __this->get_U3CformU3E__0_0();
		PostMessageData_t1903475841 * L_4 = __this->get_data_1();
		NullCheck(L_4);
		String_t* L_5 = L_4->get_text_3();
		NullCheck(L_3);
		WWWForm_AddField_m2357902982(L_3, _stringLiteral3987835854, L_5, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_6 = __this->get_U3CformU3E__0_0();
		PostMessageData_t1903475841 * L_7 = __this->get_data_1();
		NullCheck(L_7);
		String_t* L_8 = L_7->get_parse_4();
		NullCheck(L_6);
		WWWForm_AddField_m2357902982(L_6, _stringLiteral2356925649, L_8, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_9 = __this->get_U3CformU3E__0_0();
		PostMessageData_t1903475841 * L_10 = __this->get_data_1();
		NullCheck(L_10);
		String_t* L_11 = L_10->get_link_names_5();
		NullCheck(L_9);
		WWWForm_AddField_m2357902982(L_9, _stringLiteral661469732, L_11, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_12 = __this->get_U3CformU3E__0_0();
		PostMessageData_t1903475841 * L_13 = __this->get_data_1();
		NullCheck(L_13);
		String_t* L_14 = L_13->get_username_6();
		NullCheck(L_12);
		WWWForm_AddField_m2357902982(L_12, _stringLiteral2262471471, L_14, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_15 = __this->get_U3CformU3E__0_0();
		PostMessageData_t1903475841 * L_16 = __this->get_data_1();
		NullCheck(L_16);
		String_t* L_17 = L_16->get_icon_emoji_7();
		NullCheck(L_15);
		WWWForm_AddField_m2357902982(L_15, _stringLiteral1846588769, L_17, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_18 = __this->get_U3CformU3E__0_0();
		PostMessageData_t1903475841 * L_19 = __this->get_data_1();
		NullCheck(L_19);
		String_t* L_20 = L_19->get_token_0();
		NullCheck(L_18);
		WWWForm_AddField_m2357902982(L_18, _stringLiteral2005331395, L_20, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_21 = __this->get_U3CformU3E__0_0();
		PostMessageData_t1903475841 * L_22 = __this->get_data_1();
		NullCheck(L_22);
		String_t* L_23 = L_22->get_channel_1();
		NullCheck(L_21);
		WWWForm_AddField_m2357902982(L_21, _stringLiteral470911652, L_23, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_24 = __this->get_U3CformU3E__0_0();
		PostMessageData_t1903475841 * L_25 = __this->get_data_1();
		NullCheck(L_25);
		String_t* L_26 = L_25->get_icon_url_2();
		NullCheck(L_24);
		WWWForm_AddField_m2357902982(L_24, _stringLiteral1983834711, L_26, /*hidden argument*/NULL);
		__this->set_U3CurlU3E__0_2(_stringLiteral2513269523);
		String_t* L_27 = __this->get_U3CurlU3E__0_2();
		WWWForm_t4064702195 * L_28 = __this->get_U3CformU3E__0_0();
		WWW_t3688466362 * L_29 = (WWW_t3688466362 *)il2cpp_codegen_object_new(WWW_t3688466362_il2cpp_TypeInfo_var);
		WWW__ctor_m1562165(L_29, L_27, L_28, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E__0_3(L_29);
		WWW_t3688466362 * L_30 = __this->get_U3CwwwU3E__0_3();
		__this->set_U24current_7(L_30);
		bool L_31 = __this->get_U24disposing_8();
		if (L_31)
		{
			goto IL_0141;
		}
	}
	{
		__this->set_U24PC_9(1);
	}

IL_0141:
	{
		goto IL_01a7;
	}

IL_0146:
	{
		WWW_t3688466362 * L_32 = __this->get_U3CwwwU3E__0_3();
		NullCheck(L_32);
		String_t* L_33 = WWW_get_error_m3055313367(L_32, /*hidden argument*/NULL);
		__this->set_U3CerrorU3E__0_4(L_33);
		String_t* L_34 = __this->get_U3CerrorU3E__0_4();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_35 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_0188;
		}
	}
	{
		Action_1_t2019918284 * L_36 = __this->get_onError_5();
		if (!L_36)
		{
			goto IL_0183;
		}
	}
	{
		Action_1_t2019918284 * L_37 = __this->get_onError_5();
		String_t* L_38 = __this->get_U3CerrorU3E__0_4();
		NullCheck(L_37);
		Action_1_Invoke_m3134296422(L_37, L_38, /*hidden argument*/Action_1_Invoke_m3134296422_RuntimeMethod_var);
	}

IL_0183:
	{
		goto IL_01a5;
	}

IL_0188:
	{
		Action_t1264377477 * L_39 = __this->get_onSuccess_6();
		if (!L_39)
		{
			goto IL_019e;
		}
	}
	{
		Action_t1264377477 * L_40 = __this->get_onSuccess_6();
		NullCheck(L_40);
		Action_Invoke_m937035532(L_40, /*hidden argument*/NULL);
	}

IL_019e:
	{
		__this->set_U24PC_9((-1));
	}

IL_01a5:
	{
		return (bool)0;
	}

IL_01a7:
	{
		return (bool)1;
	}
}
// System.Object SlackApi.SlackAPI/<PostMessage>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CPostMessageU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2184865999 (U3CPostMessageU3Ec__Iterator0_t572351527 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_7();
		return L_0;
	}
}
// System.Object SlackApi.SlackAPI/<PostMessage>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CPostMessageU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m795365805 (U3CPostMessageU3Ec__Iterator0_t572351527 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_7();
		return L_0;
	}
}
// System.Void SlackApi.SlackAPI/<PostMessage>c__Iterator0::Dispose()
extern "C"  void U3CPostMessageU3Ec__Iterator0_Dispose_m4145745591 (U3CPostMessageU3Ec__Iterator0_t572351527 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_8((bool)1);
		__this->set_U24PC_9((-1));
		return;
	}
}
// System.Void SlackApi.SlackAPI/<PostMessage>c__Iterator0::Reset()
extern "C"  void U3CPostMessageU3Ec__Iterator0_Reset_m1843138627 (U3CPostMessageU3Ec__Iterator0_t572351527 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CPostMessageU3Ec__Iterator0_Reset_m1843138627_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CPostMessageU3Ec__Iterator0_Reset_m1843138627_RuntimeMethod_var);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SlackApi.SlackAPI/<UploadScreenShot>c__Iterator1::.ctor()
extern "C"  void U3CUploadScreenShotU3Ec__Iterator1__ctor_m867367463 (U3CUploadScreenShotU3Ec__Iterator1_t762007288 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SlackApi.SlackAPI/<UploadScreenShot>c__Iterator1::MoveNext()
extern "C"  bool U3CUploadScreenShotU3Ec__Iterator1_MoveNext_m4141145714 (U3CUploadScreenShotU3Ec__Iterator1_t762007288 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CUploadScreenShotU3Ec__Iterator1_MoveNext_m4141145714_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_16();
		V_0 = L_0;
		__this->set_U24PC_16((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_0044;
			}
			case 2:
			{
				goto IL_0241;
			}
		}
	}
	{
		goto IL_029f;
	}

IL_0025:
	{
		WaitForEndOfFrame_t1314943911 * L_2 = (WaitForEndOfFrame_t1314943911 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m1381314187(L_2, /*hidden argument*/NULL);
		__this->set_U24current_14(L_2);
		bool L_3 = __this->get_U24disposing_15();
		if (L_3)
		{
			goto IL_003f;
		}
	}
	{
		__this->set_U24PC_16(1);
	}

IL_003f:
	{
		goto IL_02a1;
	}

IL_0044:
	{
		Nullable_1_t378540539 * L_4 = __this->get_address_of_x_0();
		bool L_5 = Nullable_1_get_HasValue_m589371754((Nullable_1_t378540539 *)L_4, /*hidden argument*/Nullable_1_get_HasValue_m589371754_RuntimeMethod_var);
		if (!((((int32_t)L_5) == ((int32_t)0))? 1 : 0))
		{
			goto IL_0063;
		}
	}
	{
		Nullable_1_t378540539  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Nullable_1__ctor_m3940678751((&L_6), 0, /*hidden argument*/Nullable_1__ctor_m3940678751_RuntimeMethod_var);
		__this->set_x_0(L_6);
	}

IL_0063:
	{
		Nullable_1_t378540539 * L_7 = __this->get_address_of_y_1();
		bool L_8 = Nullable_1_get_HasValue_m589371754((Nullable_1_t378540539 *)L_7, /*hidden argument*/Nullable_1_get_HasValue_m589371754_RuntimeMethod_var);
		if (!((((int32_t)L_8) == ((int32_t)0))? 1 : 0))
		{
			goto IL_0082;
		}
	}
	{
		Nullable_1_t378540539  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Nullable_1__ctor_m3940678751((&L_9), 0, /*hidden argument*/Nullable_1__ctor_m3940678751_RuntimeMethod_var);
		__this->set_y_1(L_9);
	}

IL_0082:
	{
		int32_t L_10 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_U3CwidthU3E__0_2(L_10);
		int32_t L_11 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_U3CheightU3E__0_3(L_11);
		int32_t L_12 = __this->get_U3CwidthU3E__0_2();
		int32_t L_13 = __this->get_U3CheightU3E__0_3();
		Texture2D_t3840446185 * L_14 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m2862217990(L_14, L_12, L_13, 5, (bool)0, /*hidden argument*/NULL);
		__this->set_U3CtextureU3E__0_4(L_14);
		Nullable_1_t378540539 * L_15 = __this->get_address_of_x_0();
		int32_t L_16 = Nullable_1_get_Value_m3000890071((Nullable_1_t378540539 *)L_15, /*hidden argument*/Nullable_1_get_Value_m3000890071_RuntimeMethod_var);
		Nullable_1_t378540539 * L_17 = __this->get_address_of_y_1();
		int32_t L_18 = Nullable_1_get_Value_m3000890071((Nullable_1_t378540539 *)L_17, /*hidden argument*/Nullable_1_get_Value_m3000890071_RuntimeMethod_var);
		int32_t L_19 = __this->get_U3CwidthU3E__0_2();
		int32_t L_20 = __this->get_U3CheightU3E__0_3();
		Rect_t2360479859  L_21;
		memset(&L_21, 0, sizeof(L_21));
		Rect__ctor_m2614021312((&L_21), (((float)((float)L_16))), (((float)((float)L_18))), (((float)((float)L_19))), (((float)((float)L_20))), /*hidden argument*/NULL);
		__this->set_U3CsourceU3E__0_5(L_21);
		Texture2D_t3840446185 * L_22 = __this->get_U3CtextureU3E__0_4();
		Rect_t2360479859  L_23 = __this->get_U3CsourceU3E__0_5();
		NullCheck(L_22);
		Texture2D_ReadPixels_m3395504488(L_22, L_23, 0, 0, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_24 = __this->get_U3CtextureU3E__0_4();
		NullCheck(L_24);
		Texture2D_Apply_m2271746283(L_24, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_25 = (WWWForm_t4064702195 *)il2cpp_codegen_object_new(WWWForm_t4064702195_il2cpp_TypeInfo_var);
		WWWForm__ctor_m2465700452(L_25, /*hidden argument*/NULL);
		__this->set_U3CformU3E__0_6(L_25);
		Texture2D_t3840446185 * L_26 = __this->get_U3CtextureU3E__0_4();
		ByteU5BU5D_t4116647657* L_27 = ImageConversion_EncodeToPNG_m2292631531(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		__this->set_U3CcontentsU3E__0_7(L_27);
		WWWForm_t4064702195 * L_28 = __this->get_U3CformU3E__0_6();
		UploadData_t2454610352 * L_29 = __this->get_data_8();
		NullCheck(L_29);
		String_t* L_30 = L_29->get_text_3();
		NullCheck(L_28);
		WWWForm_AddField_m2357902982(L_28, _stringLiteral3987835854, L_30, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_31 = __this->get_U3CformU3E__0_6();
		UploadData_t2454610352 * L_32 = __this->get_data_8();
		NullCheck(L_32);
		String_t* L_33 = L_32->get_title_4();
		NullCheck(L_31);
		WWWForm_AddField_m2357902982(L_31, _stringLiteral3963993483, L_33, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_34 = __this->get_U3CformU3E__0_6();
		UploadData_t2454610352 * L_35 = __this->get_data_8();
		NullCheck(L_35);
		String_t* L_36 = L_35->get_initial_comment_5();
		NullCheck(L_34);
		WWWForm_AddField_m2357902982(L_34, _stringLiteral3634904466, L_36, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_37 = __this->get_U3CformU3E__0_6();
		UploadData_t2454610352 * L_38 = __this->get_data_8();
		NullCheck(L_38);
		String_t* L_39 = L_38->get_username_6();
		NullCheck(L_37);
		WWWForm_AddField_m2357902982(L_37, _stringLiteral2262471471, L_39, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_40 = __this->get_U3CformU3E__0_6();
		UploadData_t2454610352 * L_41 = __this->get_data_8();
		NullCheck(L_41);
		String_t* L_42 = L_41->get_icon_url_7();
		NullCheck(L_40);
		WWWForm_AddField_m2357902982(L_40, _stringLiteral1983834711, L_42, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_43 = __this->get_U3CformU3E__0_6();
		UploadData_t2454610352 * L_44 = __this->get_data_8();
		NullCheck(L_44);
		String_t* L_45 = L_44->get_token_0();
		NullCheck(L_43);
		WWWForm_AddField_m2357902982(L_43, _stringLiteral2005331395, L_45, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_46 = __this->get_U3CformU3E__0_6();
		UploadData_t2454610352 * L_47 = __this->get_data_8();
		NullCheck(L_47);
		String_t* L_48 = L_47->get_channel_1();
		NullCheck(L_46);
		WWWForm_AddField_m2357902982(L_46, _stringLiteral470911652, L_48, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_49 = __this->get_U3CformU3E__0_6();
		ByteU5BU5D_t4116647657* L_50 = __this->get_U3CcontentsU3E__0_7();
		UploadData_t2454610352 * L_51 = __this->get_data_8();
		NullCheck(L_51);
		String_t* L_52 = L_51->get_filename_2();
		NullCheck(L_49);
		WWWForm_AddBinaryData_m1593257607(L_49, _stringLiteral1629333464, L_50, L_52, _stringLiteral2045074213, /*hidden argument*/NULL);
		__this->set_U3CurlU3E__0_9(_stringLiteral498161068);
		String_t* L_53 = __this->get_U3CurlU3E__0_9();
		WWWForm_t4064702195 * L_54 = __this->get_U3CformU3E__0_6();
		WWW_t3688466362 * L_55 = (WWW_t3688466362 *)il2cpp_codegen_object_new(WWW_t3688466362_il2cpp_TypeInfo_var);
		WWW__ctor_m1562165(L_55, L_53, L_54, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E__0_10(L_55);
		WWW_t3688466362 * L_56 = __this->get_U3CwwwU3E__0_10();
		__this->set_U24current_14(L_56);
		bool L_57 = __this->get_U24disposing_15();
		if (L_57)
		{
			goto IL_023c;
		}
	}
	{
		__this->set_U24PC_16(2);
	}

IL_023c:
	{
		goto IL_02a1;
	}

IL_0241:
	{
		WWW_t3688466362 * L_58 = __this->get_U3CwwwU3E__0_10();
		NullCheck(L_58);
		String_t* L_59 = WWW_get_error_m3055313367(L_58, /*hidden argument*/NULL);
		__this->set_U3CerrorU3E__0_11(L_59);
		String_t* L_60 = __this->get_U3CerrorU3E__0_11();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_61 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_60, /*hidden argument*/NULL);
		if (L_61)
		{
			goto IL_0283;
		}
	}
	{
		Action_1_t2019918284 * L_62 = __this->get_onError_12();
		if (!L_62)
		{
			goto IL_027e;
		}
	}
	{
		Action_1_t2019918284 * L_63 = __this->get_onError_12();
		String_t* L_64 = __this->get_U3CerrorU3E__0_11();
		NullCheck(L_63);
		Action_1_Invoke_m3134296422(L_63, L_64, /*hidden argument*/Action_1_Invoke_m3134296422_RuntimeMethod_var);
	}

IL_027e:
	{
		goto IL_029f;
	}

IL_0283:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4191230889, /*hidden argument*/NULL);
		Action_t1264377477 * L_65 = __this->get_onSuccess_13();
		NullCheck(L_65);
		Action_Invoke_m937035532(L_65, /*hidden argument*/NULL);
		__this->set_U24PC_16((-1));
	}

IL_029f:
	{
		return (bool)0;
	}

IL_02a1:
	{
		return (bool)1;
	}
}
// System.Object SlackApi.SlackAPI/<UploadScreenShot>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CUploadScreenShotU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2550130877 (U3CUploadScreenShotU3Ec__Iterator1_t762007288 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_14();
		return L_0;
	}
}
// System.Object SlackApi.SlackAPI/<UploadScreenShot>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CUploadScreenShotU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m2648069032 (U3CUploadScreenShotU3Ec__Iterator1_t762007288 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_14();
		return L_0;
	}
}
// System.Void SlackApi.SlackAPI/<UploadScreenShot>c__Iterator1::Dispose()
extern "C"  void U3CUploadScreenShotU3Ec__Iterator1_Dispose_m1082367308 (U3CUploadScreenShotU3Ec__Iterator1_t762007288 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_15((bool)1);
		__this->set_U24PC_16((-1));
		return;
	}
}
// System.Void SlackApi.SlackAPI/<UploadScreenShot>c__Iterator1::Reset()
extern "C"  void U3CUploadScreenShotU3Ec__Iterator1_Reset_m1099178972 (U3CUploadScreenShotU3Ec__Iterator1_t762007288 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CUploadScreenShotU3Ec__Iterator1_Reset_m1099178972_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CUploadScreenShotU3Ec__Iterator1_Reset_m1099178972_RuntimeMethod_var);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SlackApi.UploadData::.ctor()
extern "C"  void UploadData__ctor_m1219879025 (UploadData_t2454610352 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UploadData__ctor_m1219879025_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t3738529785  V_0;
	memset(&V_0, 0, sizeof(V_0));
	DateTime_t3738529785  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		__this->set_token_0(_stringLiteral3707726826);
		__this->set_channel_1(_stringLiteral2884425308);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_0 = DateTime_get_Now_m1277138875(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = DateTime_ToString_m884486936((DateTime_t3738529785 *)(&V_0), /*hidden argument*/NULL);
		__this->set_filename_2(L_1);
		__this->set_text_3(_stringLiteral489098567);
		DateTime_t3738529785  L_2 = DateTime_get_Now_m1277138875(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_2;
		String_t* L_3 = DateTime_ToString_m3718521780((DateTime_t3738529785 *)(&V_1), _stringLiteral4078136661, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1158456214, L_3, /*hidden argument*/NULL);
		__this->set_title_4(L_4);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_initial_comment_5(L_5);
		__this->set_username_6(_stringLiteral1519004250);
		__this->set_icon_url_7(_stringLiteral149140440);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VariableManager::.ctor()
extern "C"  void VariableManager__ctor_m3018034482 (VariableManager_t3496271310 * __this, const RuntimeMethod* method)
{
	{
		__this->set_lifeTime_5((1.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VariableManager::UpdateOnClick()
extern "C"  void VariableManager_UpdateOnClick_m3866228440 (VariableManager_t3496271310 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableManager_UpdateOnClick_m3866228440_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NCMBQuery_1_t1736825847 * V_0 = NULL;
	{
		NCMBQuery_1_t1736825847 * L_0 = (NCMBQuery_1_t1736825847 *)il2cpp_codegen_object_new(NCMBQuery_1_t1736825847_il2cpp_TypeInfo_var);
		NCMBQuery_1__ctor_m175463168(L_0, _stringLiteral2765874167, /*hidden argument*/NCMBQuery_1__ctor_m175463168_RuntimeMethod_var);
		V_0 = L_0;
		NCMBQuery_1_t1736825847 * L_1 = V_0;
		intptr_t L_2 = (intptr_t)VariableManager_U3CUpdateOnClickU3Em__0_m3473470133_RuntimeMethod_var;
		NCMBQueryCallback_1_t3839413818 * L_3 = (NCMBQueryCallback_1_t3839413818 *)il2cpp_codegen_object_new(NCMBQueryCallback_1_t3839413818_il2cpp_TypeInfo_var);
		NCMBQueryCallback_1__ctor_m93443526(L_3, __this, L_2, /*hidden argument*/NCMBQueryCallback_1__ctor_m93443526_RuntimeMethod_var);
		NullCheck(L_1);
		NCMBQuery_1_FindAsync_m684836409(L_1, L_3, /*hidden argument*/NCMBQuery_1_FindAsync_m684836409_RuntimeMethod_var);
		return;
	}
}
// System.Void VariableManager::Start()
extern "C"  void VariableManager_Start_m1950950744 (VariableManager_t3496271310 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableManager_Start_m1950950744_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Button_t4055032469 * L_0 = __this->get_UpdateButton_7();
		NullCheck(L_0);
		ButtonClickedEvent_t48803504 * L_1 = Button_get_onClick_m2332132945(L_0, /*hidden argument*/NULL);
		intptr_t L_2 = (intptr_t)VariableManager_UpdateOnClick_m3866228440_RuntimeMethod_var;
		UnityAction_t3245792599 * L_3 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m2276267359(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VariableManager::Update()
extern "C"  void VariableManager_Update_m3948355130 (VariableManager_t3496271310 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableManager_Update_m3948355130_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t1901882714 * L_0 = __this->get_Console_4();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(71 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, _stringLiteral2530674981, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0034;
		}
	}
	{
		Text_t1901882714 * L_3 = __this->get_Console_4();
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(71 /* System.String UnityEngine.UI.Text::get_text() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m920492651(NULL /*static, unused*/, L_4, _stringLiteral97506931, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0072;
		}
	}

IL_0034:
	{
		float L_6 = __this->get_time_6();
		float L_7 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_time_6(((float)il2cpp_codegen_add((float)L_6, (float)L_7)));
		float L_8 = __this->get_time_6();
		float L_9 = __this->get_lifeTime_5();
		if ((!(((float)L_8) > ((float)L_9))))
		{
			goto IL_0072;
		}
	}
	{
		Text_t1901882714 * L_10 = __this->get_Console_4();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_11);
		__this->set_time_6((0.0f));
	}

IL_0072:
	{
		return;
	}
}
// System.Void VariableManager::<UpdateOnClick>m__0(System.Collections.Generic.List`1<NCMB.NCMBObject>,NCMB.NCMBException)
extern "C"  void VariableManager_U3CUpdateOnClickU3Em__0_m3473470133 (VariableManager_t3496271310 * __this, List_1_t4123261176 * ___objList0, NCMBException_t2865652588 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableManager_U3CUpdateOnClickU3Em__0_m3473470133_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NCMBObject_t2651186434 * V_0 = NULL;
	Enumerator_t1717537757  V_1;
	memset(&V_1, 0, sizeof(V_1));
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NCMBException_t2865652588 * L_0 = ___e1;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Text_t1901882714 * L_1 = __this->get_Console_4();
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteral97506931);
		goto IL_00d1;
	}

IL_001b:
	{
		Text_t1901882714 * L_2 = __this->get_Console_4();
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteral2530674981);
		List_1_t4123261176 * L_3 = ___objList0;
		NullCheck(L_3);
		Enumerator_t1717537757  L_4 = List_1_GetEnumerator_m1317807062(L_3, /*hidden argument*/List_1_GetEnumerator_m1317807062_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_0032:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b2;
		}

IL_0037:
		{
			NCMBObject_t2651186434 * L_5 = Enumerator_get_Current_m1595407294((Enumerator_t1717537757 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m1595407294_RuntimeMethod_var);
			V_0 = L_5;
			NCMBObject_t2651186434 * L_6 = V_0;
			NullCheck(L_6);
			RuntimeObject * L_7 = VirtFuncInvoker1< RuntimeObject *, String_t* >::Invoke(4 /* System.Object NCMB.NCMBObject::get_Item(System.String) */, L_6, _stringLiteral3243520198);
			NullCheck(L_7);
			String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
			V_2 = L_8;
			NCMBObject_t2651186434 * L_9 = V_0;
			NullCheck(L_9);
			RuntimeObject * L_10 = VirtFuncInvoker1< RuntimeObject *, String_t* >::Invoke(4 /* System.Object NCMB.NCMBObject::get_Item(System.String) */, L_9, _stringLiteral271021097);
			NullCheck(L_10);
			String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
			V_3 = L_11;
			String_t* L_12 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_13 = String_op_Equality_m920492651(NULL /*static, unused*/, L_12, _stringLiteral189811346, /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_008c;
			}
		}

IL_0071:
		{
			Text_t1901882714 * L_14 = __this->get_Temp_2();
			String_t* L_15 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_16 = String_Concat_m3937257545(NULL /*static, unused*/, L_15, _stringLiteral3452606109, /*hidden argument*/NULL);
			NullCheck(L_14);
			VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_16);
			goto IL_00b2;
		}

IL_008c:
		{
			String_t* L_17 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_18 = String_op_Equality_m920492651(NULL /*static, unused*/, L_17, _stringLiteral1188813395, /*hidden argument*/NULL);
			if (!L_18)
			{
				goto IL_00b2;
			}
		}

IL_009c:
		{
			Text_t1901882714 * L_19 = __this->get_Humid_3();
			String_t* L_20 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_21 = String_Concat_m3937257545(NULL /*static, unused*/, L_20, _stringLiteral3452614523, /*hidden argument*/NULL);
			NullCheck(L_19);
			VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, L_21);
		}

IL_00b2:
		{
			bool L_22 = Enumerator_MoveNext_m1905280063((Enumerator_t1717537757 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m1905280063_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_0037;
			}
		}

IL_00be:
		{
			IL2CPP_LEAVE(0xD1, FINALLY_00c3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c3;
	}

FINALLY_00c3:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3687365338((Enumerator_t1717537757 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m3687365338_RuntimeMethod_var);
		IL2CPP_END_FINALLY(195)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(195)
	{
		IL2CPP_JUMP_TBL(0xD1, IL_00d1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00d1:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
