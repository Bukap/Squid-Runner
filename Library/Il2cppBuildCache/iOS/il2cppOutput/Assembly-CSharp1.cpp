﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42;
// System.Comparison`1<System.Int32>
struct Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t1C0FF9038440D4E3F8C4A2D43AF1062780CF179D;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>
struct UnityEvent_2_t5304A7BB9DB39BB3BA59CAF408F8EA7341658E2C;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>
struct UnityEvent_3_t148E7A33D4F13377D0B9BD5BF04B858C35574612;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Int32>
struct UnityEvent_3_tDD6AB2EAC19D9D5162F6AFCBBF016F0F9600E7E9;
// UnityEngine.Events.UnityEvent`3<System.String,System.Int32,System.Int32>
struct UnityEvent_3_tB2C1BFEE5A56978DECD9BA6756512E2CC49CB9FE;
// UnityEngine.Events.UnityEvent`3<System.String,System.String,System.Int32>
struct UnityEvent_3_t99EBCF5B18C77267336F36583A2B69BE0535E6E9;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37;
// UnityEngine.Vector3[][]
struct Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
// System.Decimal[]
struct DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A;
// TMPro.TMP_LineInfo[]
struct TMP_LineInfoU5BU5D_t2B188FB1B6C36641B7FEB177ACC798FAC9806C3D;
// TMPro.TMP_LinkInfo[]
struct TMP_LinkInfoU5BU5D_t27AF3A656CD9F504EFE1F29B69409819CBE7C6C6;
// TMPro.TMP_MeshInfo[]
struct TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119;
// TMPro.TMP_PageInfo[]
struct TMP_PageInfoU5BU5D_tD278FD80A76AC5A74DA87B7A5653423E41AC634F;
// TMPro.TMP_SubMesh[]
struct TMP_SubMeshU5BU5D_t2EF6E7C00AD0C05C7BD3E565CF716B62BED324A2;
// TMPro.TMP_WordInfo[]
struct TMP_WordInfoU5BU5D_t702DDE9D8C7BD02F4D744F914B94BAB83E0F9502;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7;
// TMPro.Examples.VertexJitter/VertexAnim[]
struct VertexAnimU5BU5D_t069E9FCD87DE8FF65BE288FDB2834711D933AAFF;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Font
struct Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_t4D7C2C115C9A65FB6B24304700B1E9167410EB54;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714;
// TMPro.TMP_Style
struct TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E;
// TMPro.TMP_Text
struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262;
// TMPro.TMP_TextElement
struct TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547;
// TMPro.Examples.TeleType
struct TeleType_t92B5ED4FE818F912A562F085CE035F6B42834934;
// TMPro.Examples.TextConsoleSimulator
struct TextConsoleSimulator_t82904A7668D46B20E576B30E4CE367C0B66C5289;
// UnityEngine.TextMesh
struct TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273;
// TMPro.TextMeshPro
struct TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4;
// TMPro.Examples.TextMeshProFloatingText
struct TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// TMPro.Examples.VertexColorCycler
struct VertexColorCycler_t37E80E87D8EAD0D7757CDA45BD5D3AA82FD28374;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// TMPro.Examples.VertexJitter
struct VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A;
// TMPro.Examples.VertexShakeA
struct VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A;
// TMPro.Examples.VertexShakeB
struct VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9;
// TMPro.Examples.VertexZoom
struct VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// TMPro.Examples.WarpTextExample
struct WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// TMPro.TMP_TextEventHandler/CharacterSelectionEvent
struct CharacterSelectionEvent_t3F24E19931D51E4616A11C4D690BC0B3D738D64F;
// TMPro.TMP_TextEventHandler/LineSelectionEvent
struct LineSelectionEvent_tBD0FAC01BF9DE63FE60817F0B760E24E951C4712;
// TMPro.TMP_TextEventHandler/LinkSelectionEvent
struct LinkSelectionEvent_tDDEFCE74540F682E52A3445C536D3F29A91F98AF;
// TMPro.TMP_TextEventHandler/SpriteSelectionEvent
struct SpriteSelectionEvent_tAF7524A6DF6D4849E206726E3AC085BCB91B4618;
// TMPro.TMP_TextEventHandler/WordSelectionEvent
struct WordSelectionEvent_t3FE09C7D7E726DC634003A28E2B3CB78B42AE6F8;
// TMPro.Examples.TeleType/<Start>d__4
struct U3CStartU3Ed__4_t70319341791F5D1BC6F878503A507E845E98C44E;
// TMPro.Examples.TextConsoleSimulator/<RevealCharacters>d__7
struct U3CRevealCharactersU3Ed__7_t9DC94DD1629B430917FDD9FD90D4EC000BB1B15E;
// TMPro.Examples.TextConsoleSimulator/<RevealWords>d__8
struct U3CRevealWordsU3Ed__8_tF7649A9A0F92FFA0D69DB3B69680480E1B50D408;
// TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>d__13
struct U3CDisplayTextMeshFloatingTextU3Ed__13_t4B6A65678514F8D3CD0E6F44F8AB9DDA1228C55C;
// TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>d__12
struct U3CDisplayTextMeshProFloatingTextU3Ed__12_t0F0EBDC5A3A2FF615C3205C8019AB8A81EDEF6FC;
// TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3
struct U3CAnimateVertexColorsU3Ed__3_tB3AD1CDAF88FD5FB6786CD89058781C6BDF67DAF;
// TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11
struct U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741;
// TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11
struct U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155;
// TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10
struct U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6;
// TMPro.Examples.VertexZoom/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6;
// TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10
struct U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40;
// TMPro.Examples.WarpTextExample/<WarpText>d__8
struct U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76;

IL2CPP_EXTERN_C RuntimeClass* Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexAnimU5BU5D_t069E9FCD87DE8FF65BE288FDB2834711D933AAFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Comparison_1__ctor_mAA110A3F5163760D63E663F9545B370983389F73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m30CC5EC96F262C98EE9BFCFC9CF8D09F67E0A23D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_mA28ABFC1E6C7A17EA71BC9C2DBED9CC3EE8DCDC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_m5F12D7C6F2523BEB6326FE49AE972116D6157CBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_mDED63FD52741D58D8D5A3E53415F91B6560F680C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_Reset_m6C045A6DD0B60F1512457448E615877EAB86D75D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_Reset_mB9444B5E58B4E97105C447F547C0F74C51BCFBFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateVertexColorsU3Ed__3_System_Collections_IEnumerator_Reset_m72ABAC50E9E4D972FB44CAFF387F3E23FEC5D932_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDisplayTextMeshFloatingTextU3Ed__13_System_Collections_IEnumerator_Reset_m5EF21CA1E0C64E67D18D9355B5E064C93452F5B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDisplayTextMeshProFloatingTextU3Ed__12_System_Collections_IEnumerator_Reset_mD2D32B94CA8D5A6D502BA38BDE1969C856368F73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRevealCharactersU3Ed__7_System_Collections_IEnumerator_Reset_mA9F4893381AB24E01EAEBFC38A88AF363A9A0691_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRevealWordsU3Ed__8_System_Collections_IEnumerator_Reset_mCDC8982948ED5F7743567569CA1D4A354218714F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__4_System_Collections_IEnumerator_Reset_mE854A2CECA0E01F3C2D90DA4F720CF0F387994F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CAnimateVertexColorsU3Eb__0_m959A7E1D6162B5AAF28B953AFB04D7943BCAB107_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWarpTextU3Ed__8_System_Collections_IEnumerator_Reset_m4F2FBBE7B375E6FC837736B4275A7B601A01F535_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_m5B554CF0C475AC7797000D04E2CB8751B27D4D71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3__ctor_m0CD9C7A9A556BDC525BE6B44F7EF5F51891E2390_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3__ctor_m80ACC059EBFB58F62BF5BD0458FE0178C5FB601B_RuntimeMethod_var;
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ;
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ;
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 ;

struct Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB;
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970;
struct TMP_LineInfoU5BU5D_t2B188FB1B6C36641B7FEB177ACC798FAC9806C3D;
struct TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119;
struct TMP_WordInfoU5BU5D_t702DDE9D8C7BD02F4D744F914B94BAB83E0F9502;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
struct VertexAnimU5BU5D_t069E9FCD87DE8FF65BE288FDB2834711D933AAFF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Single>
struct  List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____items_1)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get__items_1() const { return ____items_1; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_StaticFields, ____emptyArray_5)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// TMPro.Examples.TeleType/<Start>d__4
struct  U3CStartU3Ed__4_t70319341791F5D1BC6F878503A507E845E98C44E  : public RuntimeObject
{
public:
	// System.Int32 TMPro.Examples.TeleType/<Start>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.TeleType/<Start>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TMPro.Examples.TeleType TMPro.Examples.TeleType/<Start>d__4::<>4__this
	TeleType_t92B5ED4FE818F912A562F085CE035F6B42834934 * ___U3CU3E4__this_2;
	// System.Int32 TMPro.Examples.TeleType/<Start>d__4::<totalVisibleCharacters>5__2
	int32_t ___U3CtotalVisibleCharactersU3E5__2_3;
	// System.Int32 TMPro.Examples.TeleType/<Start>d__4::<counter>5__3
	int32_t ___U3CcounterU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__4_t70319341791F5D1BC6F878503A507E845E98C44E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__4_t70319341791F5D1BC6F878503A507E845E98C44E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__4_t70319341791F5D1BC6F878503A507E845E98C44E, ___U3CU3E4__this_2)); }
	inline TeleType_t92B5ED4FE818F912A562F085CE035F6B42834934 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TeleType_t92B5ED4FE818F912A562F085CE035F6B42834934 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TeleType_t92B5ED4FE818F912A562F085CE035F6B42834934 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtotalVisibleCharactersU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__4_t70319341791F5D1BC6F878503A507E845E98C44E, ___U3CtotalVisibleCharactersU3E5__2_3)); }
	inline int32_t get_U3CtotalVisibleCharactersU3E5__2_3() const { return ___U3CtotalVisibleCharactersU3E5__2_3; }
	inline int32_t* get_address_of_U3CtotalVisibleCharactersU3E5__2_3() { return &___U3CtotalVisibleCharactersU3E5__2_3; }
	inline void set_U3CtotalVisibleCharactersU3E5__2_3(int32_t value)
	{
		___U3CtotalVisibleCharactersU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CcounterU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__4_t70319341791F5D1BC6F878503A507E845E98C44E, ___U3CcounterU3E5__3_4)); }
	inline int32_t get_U3CcounterU3E5__3_4() const { return ___U3CcounterU3E5__3_4; }
	inline int32_t* get_address_of_U3CcounterU3E5__3_4() { return &___U3CcounterU3E5__3_4; }
	inline void set_U3CcounterU3E5__3_4(int32_t value)
	{
		___U3CcounterU3E5__3_4 = value;
	}
};


// TMPro.Examples.TextConsoleSimulator/<RevealCharacters>d__7
struct  U3CRevealCharactersU3Ed__7_t9DC94DD1629B430917FDD9FD90D4EC000BB1B15E  : public RuntimeObject
{
public:
	// System.Int32 TMPro.Examples.TextConsoleSimulator/<RevealCharacters>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.TextConsoleSimulator/<RevealCharacters>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TMPro.TMP_Text TMPro.Examples.TextConsoleSimulator/<RevealCharacters>d__7::textComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___textComponent_2;
	// TMPro.Examples.TextConsoleSimulator TMPro.Examples.TextConsoleSimulator/<RevealCharacters>d__7::<>4__this
	TextConsoleSimulator_t82904A7668D46B20E576B30E4CE367C0B66C5289 * ___U3CU3E4__this_3;
	// TMPro.TMP_TextInfo TMPro.Examples.TextConsoleSimulator/<RevealCharacters>d__7::<textInfo>5__2
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___U3CtextInfoU3E5__2_4;
	// System.Int32 TMPro.Examples.TextConsoleSimulator/<RevealCharacters>d__7::<totalVisibleCharacters>5__3
	int32_t ___U3CtotalVisibleCharactersU3E5__3_5;
	// System.Int32 TMPro.Examples.TextConsoleSimulator/<RevealCharacters>d__7::<visibleCount>5__4
	int32_t ___U3CvisibleCountU3E5__4_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRevealCharactersU3Ed__7_t9DC94DD1629B430917FDD9FD90D4EC000BB1B15E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRevealCharactersU3Ed__7_t9DC94DD1629B430917FDD9FD90D4EC000BB1B15E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_textComponent_2() { return static_cast<int32_t>(offsetof(U3CRevealCharactersU3Ed__7_t9DC94DD1629B430917FDD9FD90D4EC000BB1B15E, ___textComponent_2)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_textComponent_2() const { return ___textComponent_2; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_textComponent_2() { return &___textComponent_2; }
	inline void set_textComponent_2(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___textComponent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textComponent_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CRevealCharactersU3Ed__7_t9DC94DD1629B430917FDD9FD90D4EC000BB1B15E, ___U3CU3E4__this_3)); }
	inline TextConsoleSimulator_t82904A7668D46B20E576B30E4CE367C0B66C5289 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline TextConsoleSimulator_t82904A7668D46B20E576B30E4CE367C0B66C5289 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(TextConsoleSimulator_t82904A7668D46B20E576B30E4CE367C0B66C5289 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtextInfoU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CRevealCharactersU3Ed__7_t9DC94DD1629B430917FDD9FD90D4EC000BB1B15E, ___U3CtextInfoU3E5__2_4)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_U3CtextInfoU3E5__2_4() const { return ___U3CtextInfoU3E5__2_4; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_U3CtextInfoU3E5__2_4() { return &___U3CtextInfoU3E5__2_4; }
	inline void set_U3CtextInfoU3E5__2_4(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___U3CtextInfoU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtextInfoU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtotalVisibleCharactersU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CRevealCharactersU3Ed__7_t9DC94DD1629B430917FDD9FD90D4EC000BB1B15E, ___U3CtotalVisibleCharactersU3E5__3_5)); }
	inline int32_t get_U3CtotalVisibleCharactersU3E5__3_5() const { return ___U3CtotalVisibleCharactersU3E5__3_5; }
	inline int32_t* get_address_of_U3CtotalVisibleCharactersU3E5__3_5() { return &___U3CtotalVisibleCharactersU3E5__3_5; }
	inline void set_U3CtotalVisibleCharactersU3E5__3_5(int32_t value)
	{
		___U3CtotalVisibleCharactersU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CvisibleCountU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CRevealCharactersU3Ed__7_t9DC94DD1629B430917FDD9FD90D4EC000BB1B15E, ___U3CvisibleCountU3E5__4_6)); }
	inline int32_t get_U3CvisibleCountU3E5__4_6() const { return ___U3CvisibleCountU3E5__4_6; }
	inline int32_t* get_address_of_U3CvisibleCountU3E5__4_6() { return &___U3CvisibleCountU3E5__4_6; }
	inline void set_U3CvisibleCountU3E5__4_6(int32_t value)
	{
		___U3CvisibleCountU3E5__4_6 = value;
	}
};


// TMPro.Examples.TextConsoleSimulator/<RevealWords>d__8
struct  U3CRevealWordsU3Ed__8_tF7649A9A0F92FFA0D69DB3B69680480E1B50D408  : public RuntimeObject
{
public:
	// System.Int32 TMPro.Examples.TextConsoleSimulator/<RevealWords>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.TextConsoleSimulator/<RevealWords>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TMPro.TMP_Text TMPro.Examples.TextConsoleSimulator/<RevealWords>d__8::textComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___textComponent_2;
	// System.Int32 TMPro.Examples.TextConsoleSimulator/<RevealWords>d__8::<totalWordCount>5__2
	int32_t ___U3CtotalWordCountU3E5__2_3;
	// System.Int32 TMPro.Examples.TextConsoleSimulator/<RevealWords>d__8::<totalVisibleCharacters>5__3
	int32_t ___U3CtotalVisibleCharactersU3E5__3_4;
	// System.Int32 TMPro.Examples.TextConsoleSimulator/<RevealWords>d__8::<counter>5__4
	int32_t ___U3CcounterU3E5__4_5;
	// System.Int32 TMPro.Examples.TextConsoleSimulator/<RevealWords>d__8::<visibleCount>5__5
	int32_t ___U3CvisibleCountU3E5__5_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRevealWordsU3Ed__8_tF7649A9A0F92FFA0D69DB3B69680480E1B50D408, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRevealWordsU3Ed__8_tF7649A9A0F92FFA0D69DB3B69680480E1B50D408, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_textComponent_2() { return static_cast<int32_t>(offsetof(U3CRevealWordsU3Ed__8_tF7649A9A0F92FFA0D69DB3B69680480E1B50D408, ___textComponent_2)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_textComponent_2() const { return ___textComponent_2; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_textComponent_2() { return &___textComponent_2; }
	inline void set_textComponent_2(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___textComponent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textComponent_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtotalWordCountU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CRevealWordsU3Ed__8_tF7649A9A0F92FFA0D69DB3B69680480E1B50D408, ___U3CtotalWordCountU3E5__2_3)); }
	inline int32_t get_U3CtotalWordCountU3E5__2_3() const { return ___U3CtotalWordCountU3E5__2_3; }
	inline int32_t* get_address_of_U3CtotalWordCountU3E5__2_3() { return &___U3CtotalWordCountU3E5__2_3; }
	inline void set_U3CtotalWordCountU3E5__2_3(int32_t value)
	{
		___U3CtotalWordCountU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CtotalVisibleCharactersU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CRevealWordsU3Ed__8_tF7649A9A0F92FFA0D69DB3B69680480E1B50D408, ___U3CtotalVisibleCharactersU3E5__3_4)); }
	inline int32_t get_U3CtotalVisibleCharactersU3E5__3_4() const { return ___U3CtotalVisibleCharactersU3E5__3_4; }
	inline int32_t* get_address_of_U3CtotalVisibleCharactersU3E5__3_4() { return &___U3CtotalVisibleCharactersU3E5__3_4; }
	inline void set_U3CtotalVisibleCharactersU3E5__3_4(int32_t value)
	{
		___U3CtotalVisibleCharactersU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CcounterU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CRevealWordsU3Ed__8_tF7649A9A0F92FFA0D69DB3B69680480E1B50D408, ___U3CcounterU3E5__4_5)); }
	inline int32_t get_U3CcounterU3E5__4_5() const { return ___U3CcounterU3E5__4_5; }
	inline int32_t* get_address_of_U3CcounterU3E5__4_5() { return &___U3CcounterU3E5__4_5; }
	inline void set_U3CcounterU3E5__4_5(int32_t value)
	{
		___U3CcounterU3E5__4_5 = value;
	}

	inline static int32_t get_offset_of_U3CvisibleCountU3E5__5_6() { return static_cast<int32_t>(offsetof(U3CRevealWordsU3Ed__8_tF7649A9A0F92FFA0D69DB3B69680480E1B50D408, ___U3CvisibleCountU3E5__5_6)); }
	inline int32_t get_U3CvisibleCountU3E5__5_6() const { return ___U3CvisibleCountU3E5__5_6; }
	inline int32_t* get_address_of_U3CvisibleCountU3E5__5_6() { return &___U3CvisibleCountU3E5__5_6; }
	inline void set_U3CvisibleCountU3E5__5_6(int32_t value)
	{
		___U3CvisibleCountU3E5__5_6 = value;
	}
};


// TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3
struct  U3CAnimateVertexColorsU3Ed__3_tB3AD1CDAF88FD5FB6786CD89058781C6BDF67DAF  : public RuntimeObject
{
public:
	// System.Int32 TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TMPro.Examples.VertexColorCycler TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::<>4__this
	VertexColorCycler_t37E80E87D8EAD0D7757CDA45BD5D3AA82FD28374 * ___U3CU3E4__this_2;
	// TMPro.TMP_TextInfo TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::<textInfo>5__2
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___U3CtextInfoU3E5__2_3;
	// System.Int32 TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::<currentCharacter>5__3
	int32_t ___U3CcurrentCharacterU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__3_tB3AD1CDAF88FD5FB6786CD89058781C6BDF67DAF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__3_tB3AD1CDAF88FD5FB6786CD89058781C6BDF67DAF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__3_tB3AD1CDAF88FD5FB6786CD89058781C6BDF67DAF, ___U3CU3E4__this_2)); }
	inline VertexColorCycler_t37E80E87D8EAD0D7757CDA45BD5D3AA82FD28374 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline VertexColorCycler_t37E80E87D8EAD0D7757CDA45BD5D3AA82FD28374 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(VertexColorCycler_t37E80E87D8EAD0D7757CDA45BD5D3AA82FD28374 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtextInfoU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__3_tB3AD1CDAF88FD5FB6786CD89058781C6BDF67DAF, ___U3CtextInfoU3E5__2_3)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_U3CtextInfoU3E5__2_3() const { return ___U3CtextInfoU3E5__2_3; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_U3CtextInfoU3E5__2_3() { return &___U3CtextInfoU3E5__2_3; }
	inline void set_U3CtextInfoU3E5__2_3(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___U3CtextInfoU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtextInfoU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcurrentCharacterU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__3_tB3AD1CDAF88FD5FB6786CD89058781C6BDF67DAF, ___U3CcurrentCharacterU3E5__3_4)); }
	inline int32_t get_U3CcurrentCharacterU3E5__3_4() const { return ___U3CcurrentCharacterU3E5__3_4; }
	inline int32_t* get_address_of_U3CcurrentCharacterU3E5__3_4() { return &___U3CcurrentCharacterU3E5__3_4; }
	inline void set_U3CcurrentCharacterU3E5__3_4(int32_t value)
	{
		___U3CcurrentCharacterU3E5__3_4 = value;
	}
};


// TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11
struct  U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741  : public RuntimeObject
{
public:
	// System.Int32 TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TMPro.Examples.VertexJitter TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::<>4__this
	VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A * ___U3CU3E4__this_2;
	// TMPro.TMP_TextInfo TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::<textInfo>5__2
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___U3CtextInfoU3E5__2_3;
	// System.Int32 TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::<loopCount>5__3
	int32_t ___U3CloopCountU3E5__3_4;
	// TMPro.Examples.VertexJitter/VertexAnim[] TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::<vertexAnim>5__4
	VertexAnimU5BU5D_t069E9FCD87DE8FF65BE288FDB2834711D933AAFF* ___U3CvertexAnimU3E5__4_5;
	// TMPro.TMP_MeshInfo[] TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::<cachedMeshInfo>5__5
	TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* ___U3CcachedMeshInfoU3E5__5_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741, ___U3CU3E4__this_2)); }
	inline VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtextInfoU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741, ___U3CtextInfoU3E5__2_3)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_U3CtextInfoU3E5__2_3() const { return ___U3CtextInfoU3E5__2_3; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_U3CtextInfoU3E5__2_3() { return &___U3CtextInfoU3E5__2_3; }
	inline void set_U3CtextInfoU3E5__2_3(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___U3CtextInfoU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtextInfoU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CloopCountU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741, ___U3CloopCountU3E5__3_4)); }
	inline int32_t get_U3CloopCountU3E5__3_4() const { return ___U3CloopCountU3E5__3_4; }
	inline int32_t* get_address_of_U3CloopCountU3E5__3_4() { return &___U3CloopCountU3E5__3_4; }
	inline void set_U3CloopCountU3E5__3_4(int32_t value)
	{
		___U3CloopCountU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CvertexAnimU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741, ___U3CvertexAnimU3E5__4_5)); }
	inline VertexAnimU5BU5D_t069E9FCD87DE8FF65BE288FDB2834711D933AAFF* get_U3CvertexAnimU3E5__4_5() const { return ___U3CvertexAnimU3E5__4_5; }
	inline VertexAnimU5BU5D_t069E9FCD87DE8FF65BE288FDB2834711D933AAFF** get_address_of_U3CvertexAnimU3E5__4_5() { return &___U3CvertexAnimU3E5__4_5; }
	inline void set_U3CvertexAnimU3E5__4_5(VertexAnimU5BU5D_t069E9FCD87DE8FF65BE288FDB2834711D933AAFF* value)
	{
		___U3CvertexAnimU3E5__4_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CvertexAnimU3E5__4_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcachedMeshInfoU3E5__5_6() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741, ___U3CcachedMeshInfoU3E5__5_6)); }
	inline TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* get_U3CcachedMeshInfoU3E5__5_6() const { return ___U3CcachedMeshInfoU3E5__5_6; }
	inline TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119** get_address_of_U3CcachedMeshInfoU3E5__5_6() { return &___U3CcachedMeshInfoU3E5__5_6; }
	inline void set_U3CcachedMeshInfoU3E5__5_6(TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* value)
	{
		___U3CcachedMeshInfoU3E5__5_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcachedMeshInfoU3E5__5_6), (void*)value);
	}
};


// TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11
struct  U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155  : public RuntimeObject
{
public:
	// System.Int32 TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TMPro.Examples.VertexShakeA TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::<>4__this
	VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A * ___U3CU3E4__this_2;
	// TMPro.TMP_TextInfo TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::<textInfo>5__2
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___U3CtextInfoU3E5__2_3;
	// UnityEngine.Vector3[][] TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::<copyOfVertices>5__3
	Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* ___U3CcopyOfVerticesU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155, ___U3CU3E4__this_2)); }
	inline VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtextInfoU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155, ___U3CtextInfoU3E5__2_3)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_U3CtextInfoU3E5__2_3() const { return ___U3CtextInfoU3E5__2_3; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_U3CtextInfoU3E5__2_3() { return &___U3CtextInfoU3E5__2_3; }
	inline void set_U3CtextInfoU3E5__2_3(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___U3CtextInfoU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtextInfoU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcopyOfVerticesU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155, ___U3CcopyOfVerticesU3E5__3_4)); }
	inline Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* get_U3CcopyOfVerticesU3E5__3_4() const { return ___U3CcopyOfVerticesU3E5__3_4; }
	inline Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB** get_address_of_U3CcopyOfVerticesU3E5__3_4() { return &___U3CcopyOfVerticesU3E5__3_4; }
	inline void set_U3CcopyOfVerticesU3E5__3_4(Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* value)
	{
		___U3CcopyOfVerticesU3E5__3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcopyOfVerticesU3E5__3_4), (void*)value);
	}
};


// TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10
struct  U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6  : public RuntimeObject
{
public:
	// System.Int32 TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TMPro.Examples.VertexShakeB TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::<>4__this
	VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9 * ___U3CU3E4__this_2;
	// TMPro.TMP_TextInfo TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::<textInfo>5__2
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___U3CtextInfoU3E5__2_3;
	// UnityEngine.Vector3[][] TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::<copyOfVertices>5__3
	Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* ___U3CcopyOfVerticesU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6, ___U3CU3E4__this_2)); }
	inline VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtextInfoU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6, ___U3CtextInfoU3E5__2_3)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_U3CtextInfoU3E5__2_3() const { return ___U3CtextInfoU3E5__2_3; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_U3CtextInfoU3E5__2_3() { return &___U3CtextInfoU3E5__2_3; }
	inline void set_U3CtextInfoU3E5__2_3(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___U3CtextInfoU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtextInfoU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcopyOfVerticesU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6, ___U3CcopyOfVerticesU3E5__3_4)); }
	inline Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* get_U3CcopyOfVerticesU3E5__3_4() const { return ___U3CcopyOfVerticesU3E5__3_4; }
	inline Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB** get_address_of_U3CcopyOfVerticesU3E5__3_4() { return &___U3CcopyOfVerticesU3E5__3_4; }
	inline void set_U3CcopyOfVerticesU3E5__3_4(Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* value)
	{
		___U3CcopyOfVerticesU3E5__3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcopyOfVerticesU3E5__3_4), (void*)value);
	}
};


// TMPro.Examples.VertexZoom/<>c__DisplayClass10_0
struct  U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Single> TMPro.Examples.VertexZoom/<>c__DisplayClass10_0::modifiedCharScale
	List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * ___modifiedCharScale_0;
	// System.Comparison`1<System.Int32> TMPro.Examples.VertexZoom/<>c__DisplayClass10_0::<>9__0
	Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C * ___U3CU3E9__0_1;

public:
	inline static int32_t get_offset_of_modifiedCharScale_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6, ___modifiedCharScale_0)); }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * get_modifiedCharScale_0() const { return ___modifiedCharScale_0; }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA ** get_address_of_modifiedCharScale_0() { return &___modifiedCharScale_0; }
	inline void set_modifiedCharScale_0(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * value)
	{
		___modifiedCharScale_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___modifiedCharScale_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6, ___U3CU3E9__0_1)); }
	inline Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C * get_U3CU3E9__0_1() const { return ___U3CU3E9__0_1; }
	inline Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C ** get_address_of_U3CU3E9__0_1() { return &___U3CU3E9__0_1; }
	inline void set_U3CU3E9__0_1(Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C * value)
	{
		___U3CU3E9__0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_1), (void*)value);
	}
};


// TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10
struct  U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40  : public RuntimeObject
{
public:
	// System.Int32 TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TMPro.Examples.VertexZoom TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<>4__this
	VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163 * ___U3CU3E4__this_2;
	// TMPro.Examples.VertexZoom/<>c__DisplayClass10_0 TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<>8__1
	U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6 * ___U3CU3E8__1_3;
	// TMPro.TMP_TextInfo TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<textInfo>5__2
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___U3CtextInfoU3E5__2_4;
	// TMPro.TMP_MeshInfo[] TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<cachedMeshInfoVertexData>5__3
	TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* ___U3CcachedMeshInfoVertexDataU3E5__3_5;
	// System.Collections.Generic.List`1<System.Int32> TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<scaleSortingOrder>5__4
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___U3CscaleSortingOrderU3E5__4_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40, ___U3CU3E4__this_2)); }
	inline VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E8__1_3() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40, ___U3CU3E8__1_3)); }
	inline U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6 * get_U3CU3E8__1_3() const { return ___U3CU3E8__1_3; }
	inline U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6 ** get_address_of_U3CU3E8__1_3() { return &___U3CU3E8__1_3; }
	inline void set_U3CU3E8__1_3(U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6 * value)
	{
		___U3CU3E8__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E8__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtextInfoU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40, ___U3CtextInfoU3E5__2_4)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_U3CtextInfoU3E5__2_4() const { return ___U3CtextInfoU3E5__2_4; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_U3CtextInfoU3E5__2_4() { return &___U3CtextInfoU3E5__2_4; }
	inline void set_U3CtextInfoU3E5__2_4(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___U3CtextInfoU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtextInfoU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcachedMeshInfoVertexDataU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40, ___U3CcachedMeshInfoVertexDataU3E5__3_5)); }
	inline TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* get_U3CcachedMeshInfoVertexDataU3E5__3_5() const { return ___U3CcachedMeshInfoVertexDataU3E5__3_5; }
	inline TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119** get_address_of_U3CcachedMeshInfoVertexDataU3E5__3_5() { return &___U3CcachedMeshInfoVertexDataU3E5__3_5; }
	inline void set_U3CcachedMeshInfoVertexDataU3E5__3_5(TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* value)
	{
		___U3CcachedMeshInfoVertexDataU3E5__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcachedMeshInfoVertexDataU3E5__3_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CscaleSortingOrderU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40, ___U3CscaleSortingOrderU3E5__4_6)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_U3CscaleSortingOrderU3E5__4_6() const { return ___U3CscaleSortingOrderU3E5__4_6; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_U3CscaleSortingOrderU3E5__4_6() { return &___U3CscaleSortingOrderU3E5__4_6; }
	inline void set_U3CscaleSortingOrderU3E5__4_6(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___U3CscaleSortingOrderU3E5__4_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CscaleSortingOrderU3E5__4_6), (void*)value);
	}
};


// TMPro.Examples.WarpTextExample/<WarpText>d__8
struct  U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76  : public RuntimeObject
{
public:
	// System.Int32 TMPro.Examples.WarpTextExample/<WarpText>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.WarpTextExample/<WarpText>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TMPro.Examples.WarpTextExample TMPro.Examples.WarpTextExample/<WarpText>d__8::<>4__this
	WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * ___U3CU3E4__this_2;
	// System.Single TMPro.Examples.WarpTextExample/<WarpText>d__8::<old_CurveScale>5__2
	float ___U3Cold_CurveScaleU3E5__2_3;
	// UnityEngine.AnimationCurve TMPro.Examples.WarpTextExample/<WarpText>d__8::<old_curve>5__3
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___U3Cold_curveU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3CU3E4__this_2)); }
	inline WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3Cold_CurveScaleU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3Cold_CurveScaleU3E5__2_3)); }
	inline float get_U3Cold_CurveScaleU3E5__2_3() const { return ___U3Cold_CurveScaleU3E5__2_3; }
	inline float* get_address_of_U3Cold_CurveScaleU3E5__2_3() { return &___U3Cold_CurveScaleU3E5__2_3; }
	inline void set_U3Cold_CurveScaleU3E5__2_3(float value)
	{
		___U3Cold_CurveScaleU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3Cold_curveU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3Cold_curveU3E5__3_4)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_U3Cold_curveU3E5__3_4() const { return ___U3Cold_curveU3E5__3_4; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_U3Cold_curveU3E5__3_4() { return &___U3Cold_curveU3E5__3_4; }
	inline void set_U3Cold_curveU3E5__3_4(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___U3Cold_curveU3E5__3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Cold_curveU3E5__3_4), (void*)value);
	}
};


// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct  TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___itemStack_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_itemStack_0() const { return ___itemStack_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<System.Single>
struct  TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___itemStack_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_itemStack_0() const { return ___itemStack_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_DefaultItem_2)); }
	inline float get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline float* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(float value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct  TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___itemStack_0)); }
	inline TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* get_itemStack_0() const { return ___itemStack_0; }
	inline TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_DefaultItem_2)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultItem_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>
struct  UnityEvent_2_t5304A7BB9DB39BB3BA59CAF408F8EA7341658E2C  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_t5304A7BB9DB39BB3BA59CAF408F8EA7341658E2C, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`3<System.String,System.Int32,System.Int32>
struct  UnityEvent_3_tB2C1BFEE5A56978DECD9BA6756512E2CC49CB9FE  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_3_tB2C1BFEE5A56978DECD9BA6756512E2CC49CB9FE, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`3<System.String,System.String,System.Int32>
struct  UnityEvent_3_t99EBCF5B18C77267336F36583A2B69BE0535E6E9  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_3_t99EBCF5B18C77267336F36583A2B69BE0535E6E9, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct  Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


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


// UnityEngine.Keyframe
struct  Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}

	inline static int32_t get_offset_of_m_WeightedMode_4() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_WeightedMode_4)); }
	inline int32_t get_m_WeightedMode_4() const { return ___m_WeightedMode_4; }
	inline int32_t* get_address_of_m_WeightedMode_4() { return &___m_WeightedMode_4; }
	inline void set_m_WeightedMode_4(int32_t value)
	{
		___m_WeightedMode_4 = value;
	}

	inline static int32_t get_offset_of_m_InWeight_5() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_InWeight_5)); }
	inline float get_m_InWeight_5() const { return ___m_InWeight_5; }
	inline float* get_address_of_m_InWeight_5() { return &___m_InWeight_5; }
	inline void set_m_InWeight_5(float value)
	{
		___m_InWeight_5 = value;
	}

	inline static int32_t get_offset_of_m_OutWeight_6() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_OutWeight_6)); }
	inline float get_m_OutWeight_6() const { return ___m_OutWeight_6; }
	inline float* get_address_of_m_OutWeight_6() { return &___m_OutWeight_6; }
	inline void set_m_OutWeight_6(float value)
	{
		___m_OutWeight_6 = value;
	}
};


// TMPro.MaterialReference
struct  MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B 
{
public:
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___fontAsset_1)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAsset_2() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___spriteAsset_2)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_spriteAsset_2() const { return ___spriteAsset_2; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_spriteAsset_2() { return &___spriteAsset_2; }
	inline void set_spriteAsset_2(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___spriteAsset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_2), (void*)value);
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___material_3)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_3() const { return ___material_3; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_3), (void*)value);
	}

	inline static int32_t get_offset_of_isDefaultMaterial_4() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___isDefaultMaterial_4)); }
	inline bool get_isDefaultMaterial_4() const { return ___isDefaultMaterial_4; }
	inline bool* get_address_of_isDefaultMaterial_4() { return &___isDefaultMaterial_4; }
	inline void set_isDefaultMaterial_4(bool value)
	{
		___isDefaultMaterial_4 = value;
	}

	inline static int32_t get_offset_of_isFallbackMaterial_5() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___isFallbackMaterial_5)); }
	inline bool get_isFallbackMaterial_5() const { return ___isFallbackMaterial_5; }
	inline bool* get_address_of_isFallbackMaterial_5() { return &___isFallbackMaterial_5; }
	inline void set_isFallbackMaterial_5(bool value)
	{
		___isFallbackMaterial_5 = value;
	}

	inline static int32_t get_offset_of_fallbackMaterial_6() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___fallbackMaterial_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_fallbackMaterial_6() const { return ___fallbackMaterial_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_fallbackMaterial_6() { return &___fallbackMaterial_6; }
	inline void set_fallbackMaterial_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___fallbackMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackMaterial_6), (void*)value);
	}

	inline static int32_t get_offset_of_padding_7() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___padding_7)); }
	inline float get_padding_7() const { return ___padding_7; }
	inline float* get_address_of_padding_7() { return &___padding_7; }
	inline void set_padding_7(float value)
	{
		___padding_7 = value;
	}

	inline static int32_t get_offset_of_referenceCount_8() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___referenceCount_8)); }
	inline int32_t get_referenceCount_8() const { return ___referenceCount_8; }
	inline int32_t* get_address_of_referenceCount_8() { return &___referenceCount_8; }
	inline void set_referenceCount_8(int32_t value)
	{
		___referenceCount_8 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// TMPro.TMP_FontStyleStack
struct  TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 
{
public:
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;

public:
	inline static int32_t get_offset_of_bold_0() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___bold_0)); }
	inline uint8_t get_bold_0() const { return ___bold_0; }
	inline uint8_t* get_address_of_bold_0() { return &___bold_0; }
	inline void set_bold_0(uint8_t value)
	{
		___bold_0 = value;
	}

	inline static int32_t get_offset_of_italic_1() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___italic_1)); }
	inline uint8_t get_italic_1() const { return ___italic_1; }
	inline uint8_t* get_address_of_italic_1() { return &___italic_1; }
	inline void set_italic_1(uint8_t value)
	{
		___italic_1 = value;
	}

	inline static int32_t get_offset_of_underline_2() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___underline_2)); }
	inline uint8_t get_underline_2() const { return ___underline_2; }
	inline uint8_t* get_address_of_underline_2() { return &___underline_2; }
	inline void set_underline_2(uint8_t value)
	{
		___underline_2 = value;
	}

	inline static int32_t get_offset_of_strikethrough_3() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___strikethrough_3)); }
	inline uint8_t get_strikethrough_3() const { return ___strikethrough_3; }
	inline uint8_t* get_address_of_strikethrough_3() { return &___strikethrough_3; }
	inline void set_strikethrough_3(uint8_t value)
	{
		___strikethrough_3 = value;
	}

	inline static int32_t get_offset_of_highlight_4() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___highlight_4)); }
	inline uint8_t get_highlight_4() const { return ___highlight_4; }
	inline uint8_t* get_address_of_highlight_4() { return &___highlight_4; }
	inline void set_highlight_4(uint8_t value)
	{
		___highlight_4 = value;
	}

	inline static int32_t get_offset_of_superscript_5() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___superscript_5)); }
	inline uint8_t get_superscript_5() const { return ___superscript_5; }
	inline uint8_t* get_address_of_superscript_5() { return &___superscript_5; }
	inline void set_superscript_5(uint8_t value)
	{
		___superscript_5 = value;
	}

	inline static int32_t get_offset_of_subscript_6() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___subscript_6)); }
	inline uint8_t get_subscript_6() const { return ___subscript_6; }
	inline uint8_t* get_address_of_subscript_6() { return &___subscript_6; }
	inline void set_subscript_6(uint8_t value)
	{
		___subscript_6 = value;
	}

	inline static int32_t get_offset_of_uppercase_7() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___uppercase_7)); }
	inline uint8_t get_uppercase_7() const { return ___uppercase_7; }
	inline uint8_t* get_address_of_uppercase_7() { return &___uppercase_7; }
	inline void set_uppercase_7(uint8_t value)
	{
		___uppercase_7 = value;
	}

	inline static int32_t get_offset_of_lowercase_8() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___lowercase_8)); }
	inline uint8_t get_lowercase_8() const { return ___lowercase_8; }
	inline uint8_t* get_address_of_lowercase_8() { return &___lowercase_8; }
	inline void set_lowercase_8(uint8_t value)
	{
		___lowercase_8 = value;
	}

	inline static int32_t get_offset_of_smallcaps_9() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___smallcaps_9)); }
	inline uint8_t get_smallcaps_9() const { return ___smallcaps_9; }
	inline uint8_t* get_address_of_smallcaps_9() { return &___smallcaps_9; }
	inline void set_smallcaps_9(uint8_t value)
	{
		___smallcaps_9 = value;
	}
};


// TMPro.TMP_Offset
struct  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 
{
public:
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;

public:
	inline static int32_t get_offset_of_m_Left_0() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Left_0)); }
	inline float get_m_Left_0() const { return ___m_Left_0; }
	inline float* get_address_of_m_Left_0() { return &___m_Left_0; }
	inline void set_m_Left_0(float value)
	{
		___m_Left_0 = value;
	}

	inline static int32_t get_offset_of_m_Right_1() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Right_1)); }
	inline float get_m_Right_1() const { return ___m_Right_1; }
	inline float* get_address_of_m_Right_1() { return &___m_Right_1; }
	inline void set_m_Right_1(float value)
	{
		___m_Right_1 = value;
	}

	inline static int32_t get_offset_of_m_Top_2() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Top_2)); }
	inline float get_m_Top_2() const { return ___m_Top_2; }
	inline float* get_address_of_m_Top_2() { return &___m_Top_2; }
	inline void set_m_Top_2(float value)
	{
		___m_Top_2 = value;
	}

	inline static int32_t get_offset_of_m_Bottom_3() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Bottom_3)); }
	inline float get_m_Bottom_3() const { return ___m_Bottom_3; }
	inline float* get_address_of_m_Bottom_3() { return &___m_Bottom_3; }
	inline void set_m_Bottom_3(float value)
	{
		___m_Bottom_3 = value;
	}
};

struct TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117_StaticFields
{
public:
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  ___k_ZeroOffset_4;

public:
	inline static int32_t get_offset_of_k_ZeroOffset_4() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117_StaticFields, ___k_ZeroOffset_4)); }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  get_k_ZeroOffset_4() const { return ___k_ZeroOffset_4; }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 * get_address_of_k_ZeroOffset_4() { return &___k_ZeroOffset_4; }
	inline void set_k_ZeroOffset_4(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  value)
	{
		___k_ZeroOffset_4 = value;
	}
};


// TMPro.TMP_WordInfo
struct  TMP_WordInfo_t168F70FD30F4875E4C84D40F9F30FCB5D2EB895C 
{
public:
	// TMPro.TMP_Text TMPro.TMP_WordInfo::textComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___textComponent_0;
	// System.Int32 TMPro.TMP_WordInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_1;
	// System.Int32 TMPro.TMP_WordInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_2;
	// System.Int32 TMPro.TMP_WordInfo::characterCount
	int32_t ___characterCount_3;

public:
	inline static int32_t get_offset_of_textComponent_0() { return static_cast<int32_t>(offsetof(TMP_WordInfo_t168F70FD30F4875E4C84D40F9F30FCB5D2EB895C, ___textComponent_0)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_textComponent_0() const { return ___textComponent_0; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_textComponent_0() { return &___textComponent_0; }
	inline void set_textComponent_0(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___textComponent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textComponent_0), (void*)value);
	}

	inline static int32_t get_offset_of_firstCharacterIndex_1() { return static_cast<int32_t>(offsetof(TMP_WordInfo_t168F70FD30F4875E4C84D40F9F30FCB5D2EB895C, ___firstCharacterIndex_1)); }
	inline int32_t get_firstCharacterIndex_1() const { return ___firstCharacterIndex_1; }
	inline int32_t* get_address_of_firstCharacterIndex_1() { return &___firstCharacterIndex_1; }
	inline void set_firstCharacterIndex_1(int32_t value)
	{
		___firstCharacterIndex_1 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_2() { return static_cast<int32_t>(offsetof(TMP_WordInfo_t168F70FD30F4875E4C84D40F9F30FCB5D2EB895C, ___lastCharacterIndex_2)); }
	inline int32_t get_lastCharacterIndex_2() const { return ___lastCharacterIndex_2; }
	inline int32_t* get_address_of_lastCharacterIndex_2() { return &___lastCharacterIndex_2; }
	inline void set_lastCharacterIndex_2(int32_t value)
	{
		___lastCharacterIndex_2 = value;
	}

	inline static int32_t get_offset_of_characterCount_3() { return static_cast<int32_t>(offsetof(TMP_WordInfo_t168F70FD30F4875E4C84D40F9F30FCB5D2EB895C, ___characterCount_3)); }
	inline int32_t get_characterCount_3() const { return ___characterCount_3; }
	inline int32_t* get_address_of_characterCount_3() { return &___characterCount_3; }
	inline void set_characterCount_3(int32_t value)
	{
		___characterCount_3 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_WordInfo
struct TMP_WordInfo_t168F70FD30F4875E4C84D40F9F30FCB5D2EB895C_marshaled_pinvoke
{
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___textComponent_0;
	int32_t ___firstCharacterIndex_1;
	int32_t ___lastCharacterIndex_2;
	int32_t ___characterCount_3;
};
// Native definition for COM marshalling of TMPro.TMP_WordInfo
struct TMP_WordInfo_t168F70FD30F4875E4C84D40F9F30FCB5D2EB895C_marshaled_com
{
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___textComponent_0;
	int32_t ___firstCharacterIndex_1;
	int32_t ___lastCharacterIndex_2;
	int32_t ___characterCount_3;
};

// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct  SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F 
{
public:
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;

public:
	inline static int32_t get_offset_of_character_0() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___character_0)); }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * get_character_0() const { return ___character_0; }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C ** get_address_of_character_0() { return &___character_0; }
	inline void set_character_0(TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * value)
	{
		___character_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_0), (void*)value);
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___fontAsset_1)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_material_2() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___material_2)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_2() const { return ___material_2; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_2() { return &___material_2; }
	inline void set_material_2(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_2), (void*)value);
	}

	inline static int32_t get_offset_of_materialIndex_3() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___materialIndex_3)); }
	inline int32_t get_materialIndex_3() const { return ___materialIndex_3; }
	inline int32_t* get_address_of_materialIndex_3() { return &___materialIndex_3; }
	inline void set_materialIndex_3(int32_t value)
	{
		___materialIndex_3 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshaled_pinvoke
{
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshaled_com
{
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.Examples.VertexJitter/VertexAnim
struct  VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4 
{
public:
	// System.Single TMPro.Examples.VertexJitter/VertexAnim::angleRange
	float ___angleRange_0;
	// System.Single TMPro.Examples.VertexJitter/VertexAnim::angle
	float ___angle_1;
	// System.Single TMPro.Examples.VertexJitter/VertexAnim::speed
	float ___speed_2;

public:
	inline static int32_t get_offset_of_angleRange_0() { return static_cast<int32_t>(offsetof(VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4, ___angleRange_0)); }
	inline float get_angleRange_0() const { return ___angleRange_0; }
	inline float* get_address_of_angleRange_0() { return &___angleRange_0; }
	inline void set_angleRange_0(float value)
	{
		___angleRange_0 = value;
	}

	inline static int32_t get_offset_of_angle_1() { return static_cast<int32_t>(offsetof(VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4, ___angle_1)); }
	inline float get_angle_1() const { return ___angle_1; }
	inline float* get_address_of_angle_1() { return &___angle_1; }
	inline void set_angle_1(float value)
	{
		___angle_1 = value;
	}

	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct  TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___itemStack_0)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get_itemStack_0() const { return ___itemStack_0; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_DefaultItem_2)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct  TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___itemStack_0)); }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* get_itemStack_0() const { return ___itemStack_0; }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_DefaultItem_2)); }
	inline MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.AnimationCurve
struct  AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Bounds
struct  Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// TMPro.ColorMode
struct  ColorMode_t2C99ABBE35C08A863709500BFBBD6784D7114C09 
{
public:
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorMode_t2C99ABBE35C08A863709500BFBBD6784D7114C09, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// TMPro.Extents
struct  Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA 
{
public:
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___max_3;

public:
	inline static int32_t get_offset_of_min_2() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA, ___min_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_min_2() const { return ___min_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_min_2() { return &___min_2; }
	inline void set_min_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___min_2 = value;
	}

	inline static int32_t get_offset_of_max_3() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA, ___max_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_max_3() const { return ___max_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_max_3() { return &___max_3; }
	inline void set_max_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___max_3 = value;
	}
};

struct Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields
{
public:
	// TMPro.Extents TMPro.Extents::zero
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___uninitialized_1;

public:
	inline static int32_t get_offset_of_zero_0() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields, ___zero_0)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_zero_0() const { return ___zero_0; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_zero_0() { return &___zero_0; }
	inline void set_zero_0(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___zero_0 = value;
	}

	inline static int32_t get_offset_of_uninitialized_1() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields, ___uninitialized_1)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_uninitialized_1() const { return ___uninitialized_1; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_uninitialized_1() { return &___uninitialized_1; }
	inline void set_uninitialized_1(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___uninitialized_1 = value;
	}
};


// TMPro.FontStyles
struct  FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C 
{
public:
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.FontWeight
struct  FontWeight_tBF8B23C3A4F63D5602FEC93BE775C93CA4DDDC26 
{
public:
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontWeight_tBF8B23C3A4F63D5602FEC93BE775C93CA4DDDC26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.HighlightState
struct  HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 
{
public:
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  ___padding_1;

public:
	inline static int32_t get_offset_of_color_0() { return static_cast<int32_t>(offsetof(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759, ___color_0)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_0() const { return ___color_0; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_0() { return &___color_0; }
	inline void set_color_0(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_0 = value;
	}

	inline static int32_t get_offset_of_padding_1() { return static_cast<int32_t>(offsetof(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759, ___padding_1)); }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  get_padding_1() const { return ___padding_1; }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 * get_address_of_padding_1() { return &___padding_1; }
	inline void set_padding_1(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  value)
	{
		___padding_1 = value;
	}
};


// TMPro.HorizontalAlignmentOptions
struct  HorizontalAlignmentOptions_tCBBC74167BDEF6B5B510DDC43B5136F793A05193 
{
public:
	// System.Int32 TMPro.HorizontalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HorizontalAlignmentOptions_tCBBC74167BDEF6B5B510DDC43B5136F793A05193, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.MaskingTypes
struct  MaskingTypes_t0CDA999B819C7FDED898736492CA0E70E4163477 
{
public:
	// System.Int32 TMPro.MaskingTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MaskingTypes_t0CDA999B819C7FDED898736492CA0E70E4163477, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// TMPro.TMP_TextElementType
struct  TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3 
{
public:
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextInfo
struct  TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547  : public RuntimeObject
{
public:
	// TMPro.TMP_Text TMPro.TMP_TextInfo::textComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___textComponent_2;
	// System.Int32 TMPro.TMP_TextInfo::characterCount
	int32_t ___characterCount_3;
	// System.Int32 TMPro.TMP_TextInfo::spriteCount
	int32_t ___spriteCount_4;
	// System.Int32 TMPro.TMP_TextInfo::spaceCount
	int32_t ___spaceCount_5;
	// System.Int32 TMPro.TMP_TextInfo::wordCount
	int32_t ___wordCount_6;
	// System.Int32 TMPro.TMP_TextInfo::linkCount
	int32_t ___linkCount_7;
	// System.Int32 TMPro.TMP_TextInfo::lineCount
	int32_t ___lineCount_8;
	// System.Int32 TMPro.TMP_TextInfo::pageCount
	int32_t ___pageCount_9;
	// System.Int32 TMPro.TMP_TextInfo::materialCount
	int32_t ___materialCount_10;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_TextInfo::characterInfo
	TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* ___characterInfo_11;
	// TMPro.TMP_WordInfo[] TMPro.TMP_TextInfo::wordInfo
	TMP_WordInfoU5BU5D_t702DDE9D8C7BD02F4D744F914B94BAB83E0F9502* ___wordInfo_12;
	// TMPro.TMP_LinkInfo[] TMPro.TMP_TextInfo::linkInfo
	TMP_LinkInfoU5BU5D_t27AF3A656CD9F504EFE1F29B69409819CBE7C6C6* ___linkInfo_13;
	// TMPro.TMP_LineInfo[] TMPro.TMP_TextInfo::lineInfo
	TMP_LineInfoU5BU5D_t2B188FB1B6C36641B7FEB177ACC798FAC9806C3D* ___lineInfo_14;
	// TMPro.TMP_PageInfo[] TMPro.TMP_TextInfo::pageInfo
	TMP_PageInfoU5BU5D_tD278FD80A76AC5A74DA87B7A5653423E41AC634F* ___pageInfo_15;
	// TMPro.TMP_MeshInfo[] TMPro.TMP_TextInfo::meshInfo
	TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* ___meshInfo_16;
	// TMPro.TMP_MeshInfo[] TMPro.TMP_TextInfo::m_CachedMeshInfo
	TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* ___m_CachedMeshInfo_17;

public:
	inline static int32_t get_offset_of_textComponent_2() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___textComponent_2)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_textComponent_2() const { return ___textComponent_2; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_textComponent_2() { return &___textComponent_2; }
	inline void set_textComponent_2(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___textComponent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textComponent_2), (void*)value);
	}

	inline static int32_t get_offset_of_characterCount_3() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___characterCount_3)); }
	inline int32_t get_characterCount_3() const { return ___characterCount_3; }
	inline int32_t* get_address_of_characterCount_3() { return &___characterCount_3; }
	inline void set_characterCount_3(int32_t value)
	{
		___characterCount_3 = value;
	}

	inline static int32_t get_offset_of_spriteCount_4() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___spriteCount_4)); }
	inline int32_t get_spriteCount_4() const { return ___spriteCount_4; }
	inline int32_t* get_address_of_spriteCount_4() { return &___spriteCount_4; }
	inline void set_spriteCount_4(int32_t value)
	{
		___spriteCount_4 = value;
	}

	inline static int32_t get_offset_of_spaceCount_5() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___spaceCount_5)); }
	inline int32_t get_spaceCount_5() const { return ___spaceCount_5; }
	inline int32_t* get_address_of_spaceCount_5() { return &___spaceCount_5; }
	inline void set_spaceCount_5(int32_t value)
	{
		___spaceCount_5 = value;
	}

	inline static int32_t get_offset_of_wordCount_6() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___wordCount_6)); }
	inline int32_t get_wordCount_6() const { return ___wordCount_6; }
	inline int32_t* get_address_of_wordCount_6() { return &___wordCount_6; }
	inline void set_wordCount_6(int32_t value)
	{
		___wordCount_6 = value;
	}

	inline static int32_t get_offset_of_linkCount_7() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___linkCount_7)); }
	inline int32_t get_linkCount_7() const { return ___linkCount_7; }
	inline int32_t* get_address_of_linkCount_7() { return &___linkCount_7; }
	inline void set_linkCount_7(int32_t value)
	{
		___linkCount_7 = value;
	}

	inline static int32_t get_offset_of_lineCount_8() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___lineCount_8)); }
	inline int32_t get_lineCount_8() const { return ___lineCount_8; }
	inline int32_t* get_address_of_lineCount_8() { return &___lineCount_8; }
	inline void set_lineCount_8(int32_t value)
	{
		___lineCount_8 = value;
	}

	inline static int32_t get_offset_of_pageCount_9() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___pageCount_9)); }
	inline int32_t get_pageCount_9() const { return ___pageCount_9; }
	inline int32_t* get_address_of_pageCount_9() { return &___pageCount_9; }
	inline void set_pageCount_9(int32_t value)
	{
		___pageCount_9 = value;
	}

	inline static int32_t get_offset_of_materialCount_10() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___materialCount_10)); }
	inline int32_t get_materialCount_10() const { return ___materialCount_10; }
	inline int32_t* get_address_of_materialCount_10() { return &___materialCount_10; }
	inline void set_materialCount_10(int32_t value)
	{
		___materialCount_10 = value;
	}

	inline static int32_t get_offset_of_characterInfo_11() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___characterInfo_11)); }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* get_characterInfo_11() const { return ___characterInfo_11; }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970** get_address_of_characterInfo_11() { return &___characterInfo_11; }
	inline void set_characterInfo_11(TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* value)
	{
		___characterInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___characterInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_wordInfo_12() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___wordInfo_12)); }
	inline TMP_WordInfoU5BU5D_t702DDE9D8C7BD02F4D744F914B94BAB83E0F9502* get_wordInfo_12() const { return ___wordInfo_12; }
	inline TMP_WordInfoU5BU5D_t702DDE9D8C7BD02F4D744F914B94BAB83E0F9502** get_address_of_wordInfo_12() { return &___wordInfo_12; }
	inline void set_wordInfo_12(TMP_WordInfoU5BU5D_t702DDE9D8C7BD02F4D744F914B94BAB83E0F9502* value)
	{
		___wordInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wordInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_linkInfo_13() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___linkInfo_13)); }
	inline TMP_LinkInfoU5BU5D_t27AF3A656CD9F504EFE1F29B69409819CBE7C6C6* get_linkInfo_13() const { return ___linkInfo_13; }
	inline TMP_LinkInfoU5BU5D_t27AF3A656CD9F504EFE1F29B69409819CBE7C6C6** get_address_of_linkInfo_13() { return &___linkInfo_13; }
	inline void set_linkInfo_13(TMP_LinkInfoU5BU5D_t27AF3A656CD9F504EFE1F29B69409819CBE7C6C6* value)
	{
		___linkInfo_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linkInfo_13), (void*)value);
	}

	inline static int32_t get_offset_of_lineInfo_14() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___lineInfo_14)); }
	inline TMP_LineInfoU5BU5D_t2B188FB1B6C36641B7FEB177ACC798FAC9806C3D* get_lineInfo_14() const { return ___lineInfo_14; }
	inline TMP_LineInfoU5BU5D_t2B188FB1B6C36641B7FEB177ACC798FAC9806C3D** get_address_of_lineInfo_14() { return &___lineInfo_14; }
	inline void set_lineInfo_14(TMP_LineInfoU5BU5D_t2B188FB1B6C36641B7FEB177ACC798FAC9806C3D* value)
	{
		___lineInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineInfo_14), (void*)value);
	}

	inline static int32_t get_offset_of_pageInfo_15() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___pageInfo_15)); }
	inline TMP_PageInfoU5BU5D_tD278FD80A76AC5A74DA87B7A5653423E41AC634F* get_pageInfo_15() const { return ___pageInfo_15; }
	inline TMP_PageInfoU5BU5D_tD278FD80A76AC5A74DA87B7A5653423E41AC634F** get_address_of_pageInfo_15() { return &___pageInfo_15; }
	inline void set_pageInfo_15(TMP_PageInfoU5BU5D_tD278FD80A76AC5A74DA87B7A5653423E41AC634F* value)
	{
		___pageInfo_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pageInfo_15), (void*)value);
	}

	inline static int32_t get_offset_of_meshInfo_16() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___meshInfo_16)); }
	inline TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* get_meshInfo_16() const { return ___meshInfo_16; }
	inline TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119** get_address_of_meshInfo_16() { return &___meshInfo_16; }
	inline void set_meshInfo_16(TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* value)
	{
		___meshInfo_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshInfo_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMeshInfo_17() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___m_CachedMeshInfo_17)); }
	inline TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* get_m_CachedMeshInfo_17() const { return ___m_CachedMeshInfo_17; }
	inline TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119** get_address_of_m_CachedMeshInfo_17() { return &___m_CachedMeshInfo_17; }
	inline void set_m_CachedMeshInfo_17(TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* value)
	{
		___m_CachedMeshInfo_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMeshInfo_17), (void*)value);
	}
};

struct TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547_StaticFields
{
public:
	// UnityEngine.Vector2 TMPro.TMP_TextInfo::k_InfinityVectorPositive
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_InfinityVectorPositive_0;
	// UnityEngine.Vector2 TMPro.TMP_TextInfo::k_InfinityVectorNegative
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_InfinityVectorNegative_1;

public:
	inline static int32_t get_offset_of_k_InfinityVectorPositive_0() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547_StaticFields, ___k_InfinityVectorPositive_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_InfinityVectorPositive_0() const { return ___k_InfinityVectorPositive_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_InfinityVectorPositive_0() { return &___k_InfinityVectorPositive_0; }
	inline void set_k_InfinityVectorPositive_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_InfinityVectorPositive_0 = value;
	}

	inline static int32_t get_offset_of_k_InfinityVectorNegative_1() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547_StaticFields, ___k_InfinityVectorNegative_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_InfinityVectorNegative_1() const { return ___k_InfinityVectorNegative_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_InfinityVectorNegative_1() { return &___k_InfinityVectorNegative_1; }
	inline void set_k_InfinityVectorNegative_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_InfinityVectorNegative_1 = value;
	}
};


// TMPro.TMP_Vertex
struct  TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E 
{
public:
	// UnityEngine.Vector3 TMPro.TMP_Vertex::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___uv_1;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___uv2_2;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv4
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___uv4_3;
	// UnityEngine.Color32 TMPro.TMP_Vertex::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_4;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_uv_1() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___uv_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_uv_1() const { return ___uv_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_uv_1() { return &___uv_1; }
	inline void set_uv_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___uv_1 = value;
	}

	inline static int32_t get_offset_of_uv2_2() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___uv2_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_uv2_2() const { return ___uv2_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_uv2_2() { return &___uv2_2; }
	inline void set_uv2_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___uv2_2 = value;
	}

	inline static int32_t get_offset_of_uv4_3() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___uv4_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_uv4_3() const { return ___uv4_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_uv4_3() { return &___uv4_3; }
	inline void set_uv4_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___uv4_3 = value;
	}

	inline static int32_t get_offset_of_color_4() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___color_4)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_4() const { return ___color_4; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_4() { return &___color_4; }
	inline void set_color_4(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_4 = value;
	}
};

struct TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E_StaticFields
{
public:
	// TMPro.TMP_Vertex TMPro.TMP_Vertex::k_Zero
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___k_Zero_5;

public:
	inline static int32_t get_offset_of_k_Zero_5() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E_StaticFields, ___k_Zero_5)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_k_Zero_5() const { return ___k_Zero_5; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_k_Zero_5() { return &___k_Zero_5; }
	inline void set_k_Zero_5(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___k_Zero_5 = value;
	}
};


// TMPro.TMP_VertexDataUpdateFlags
struct  TMP_VertexDataUpdateFlags_tE7C38BDA9FC5B09848F4412694FFA8AEC56C4782 
{
public:
	// System.Int32 TMPro.TMP_VertexDataUpdateFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TMP_VertexDataUpdateFlags_tE7C38BDA9FC5B09848F4412694FFA8AEC56C4782, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextAlignmentOptions
struct  TextAlignmentOptions_t682AC2BC382B468C04A23B008505ACCBF826AD63 
{
public:
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAlignmentOptions_t682AC2BC382B468C04A23B008505ACCBF826AD63, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextOverflowModes
struct  TextOverflowModes_t3E5E40446E0C1088788010EE07323B45DB7549C6 
{
public:
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextOverflowModes_t3E5E40446E0C1088788010EE07323B45DB7549C6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextRenderFlags
struct  TextRenderFlags_tBA599FEF207E56A80860B6266E3C9F57B59CA9F4 
{
public:
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextRenderFlags_tBA599FEF207E56A80860B6266E3C9F57B59CA9F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextureMappingOptions
struct  TextureMappingOptions_t9FA25F9B2D01E6B7D8DA8761AAED241D285A285A 
{
public:
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureMappingOptions_t9FA25F9B2D01E6B7D8DA8761AAED241D285A285A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VertexGradient
struct  VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D 
{
public:
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bottomRight_3;

public:
	inline static int32_t get_offset_of_topLeft_0() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___topLeft_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_topLeft_0() const { return ___topLeft_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_topLeft_0() { return &___topLeft_0; }
	inline void set_topLeft_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___topLeft_0 = value;
	}

	inline static int32_t get_offset_of_topRight_1() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___topRight_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_topRight_1() const { return ___topRight_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_topRight_1() { return &___topRight_1; }
	inline void set_topRight_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___topRight_1 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_2() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___bottomLeft_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_bottomLeft_2() const { return ___bottomLeft_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_bottomLeft_2() { return &___bottomLeft_2; }
	inline void set_bottomLeft_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___bottomLeft_2 = value;
	}

	inline static int32_t get_offset_of_bottomRight_3() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___bottomRight_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_bottomRight_3() const { return ___bottomRight_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_bottomRight_3() { return &___bottomRight_3; }
	inline void set_bottomRight_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___bottomRight_3 = value;
	}
};


// TMPro.VertexSortingOrder
struct  VertexSortingOrder_t8D099B77634C901CB5D2497AEAC94127E9DE013B 
{
public:
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexSortingOrder_t8D099B77634C901CB5D2497AEAC94127E9DE013B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VerticalAlignmentOptions
struct  VerticalAlignmentOptions_t6F8B6FBA36D97C6CA534AE3956D9060E39C9D326 
{
public:
	// System.Int32 TMPro.VerticalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VerticalAlignmentOptions_t6F8B6FBA36D97C6CA534AE3956D9060E39C9D326, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.WrapMode
struct  WrapMode_t0DF566E32B136795606714DB9A11A3DC170F5468 
{
public:
	// System.Int32 UnityEngine.WrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WrapMode_t0DF566E32B136795606714DB9A11A3DC170F5468, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.Examples.TMP_ExampleScript_01/objectType
struct  objectType_t5159C717EF79DEA9C8F7CF5F830EE5D4C4560036 
{
public:
	// System.Int32 TMPro.Examples.TMP_ExampleScript_01/objectType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(objectType_t5159C717EF79DEA9C8F7CF5F830EE5D4C4560036, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.Examples.TMP_FrameRateCounter/FpsCounterAnchorPositions
struct  FpsCounterAnchorPositions_tD7297D86C9462F5BC670EC9B05049FA736903F03 
{
public:
	// System.Int32 TMPro.Examples.TMP_FrameRateCounter/FpsCounterAnchorPositions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FpsCounterAnchorPositions_tD7297D86C9462F5BC670EC9B05049FA736903F03, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_Text/TextInputSources
struct  TextInputSources_t8A0451130450FC08C5847209E7551F27F5CAF4D0 
{
public:
	// System.Int32 TMPro.TMP_Text/TextInputSources::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextInputSources_t8A0451130450FC08C5847209E7551F27F5CAF4D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextEventHandler/CharacterSelectionEvent
struct  CharacterSelectionEvent_t3F24E19931D51E4616A11C4D690BC0B3D738D64F  : public UnityEvent_2_t5304A7BB9DB39BB3BA59CAF408F8EA7341658E2C
{
public:

public:
};


// TMPro.TMP_TextEventHandler/LineSelectionEvent
struct  LineSelectionEvent_tBD0FAC01BF9DE63FE60817F0B760E24E951C4712  : public UnityEvent_3_tB2C1BFEE5A56978DECD9BA6756512E2CC49CB9FE
{
public:

public:
};


// TMPro.TMP_TextEventHandler/LinkSelectionEvent
struct  LinkSelectionEvent_tDDEFCE74540F682E52A3445C536D3F29A91F98AF  : public UnityEvent_3_t99EBCF5B18C77267336F36583A2B69BE0535E6E9
{
public:

public:
};


// TMPro.TMP_TextEventHandler/SpriteSelectionEvent
struct  SpriteSelectionEvent_tAF7524A6DF6D4849E206726E3AC085BCB91B4618  : public UnityEvent_2_t5304A7BB9DB39BB3BA59CAF408F8EA7341658E2C
{
public:

public:
};


// TMPro.TMP_TextEventHandler/WordSelectionEvent
struct  WordSelectionEvent_t3FE09C7D7E726DC634003A28E2B3CB78B42AE6F8  : public UnityEvent_3_tB2C1BFEE5A56978DECD9BA6756512E2CC49CB9FE
{
public:

public:
};


// TMPro.Examples.TMP_UiFrameRateCounter/FpsCounterAnchorPositions
struct  FpsCounterAnchorPositions_t1E46DD5A81E44E1D3F7140DD75ABBBCB9B52DDCC 
{
public:
	// System.Int32 TMPro.Examples.TMP_UiFrameRateCounter/FpsCounterAnchorPositions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FpsCounterAnchorPositions_t1E46DD5A81E44E1D3F7140DD75ABBBCB9B52DDCC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.Examples.TMPro_InstructionOverlay/FpsCounterAnchorPositions
struct  FpsCounterAnchorPositions_t8925F6C50F79F9AFA64E5BF6270769F3A3634927 
{
public:
	// System.Int32 TMPro.Examples.TMPro_InstructionOverlay/FpsCounterAnchorPositions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FpsCounterAnchorPositions_t8925F6C50F79F9AFA64E5BF6270769F3A3634927, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>d__13
struct  U3CDisplayTextMeshFloatingTextU3Ed__13_t4B6A65678514F8D3CD0E6F44F8AB9DDA1228C55C  : public RuntimeObject
{
public:
	// System.Int32 TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>d__13::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TMPro.Examples.TextMeshProFloatingText TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>d__13::<>4__this
	TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * ___U3CU3E4__this_2;
	// System.Single TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>d__13::<CountDuration>5__2
	float ___U3CCountDurationU3E5__2_3;
	// System.Single TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>d__13::<starting_Count>5__3
	float ___U3Cstarting_CountU3E5__3_4;
	// System.Single TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>d__13::<current_Count>5__4
	float ___U3Ccurrent_CountU3E5__4_5;
	// UnityEngine.Vector3 TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>d__13::<start_pos>5__5
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3Cstart_posU3E5__5_6;
	// UnityEngine.Color32 TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>d__13::<start_color>5__6
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___U3Cstart_colorU3E5__6_7;
	// System.Single TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>d__13::<alpha>5__7
	float ___U3CalphaU3E5__7_8;
	// System.Single TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>d__13::<fadeDuration>5__8
	float ___U3CfadeDurationU3E5__8_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshFloatingTextU3Ed__13_t4B6A65678514F8D3CD0E6F44F8AB9DDA1228C55C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshFloatingTextU3Ed__13_t4B6A65678514F8D3CD0E6F44F8AB9DDA1228C55C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshFloatingTextU3Ed__13_t4B6A65678514F8D3CD0E6F44F8AB9DDA1228C55C, ___U3CU3E4__this_2)); }
	inline TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCountDurationU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshFloatingTextU3Ed__13_t4B6A65678514F8D3CD0E6F44F8AB9DDA1228C55C, ___U3CCountDurationU3E5__2_3)); }
	inline float get_U3CCountDurationU3E5__2_3() const { return ___U3CCountDurationU3E5__2_3; }
	inline float* get_address_of_U3CCountDurationU3E5__2_3() { return &___U3CCountDurationU3E5__2_3; }
	inline void set_U3CCountDurationU3E5__2_3(float value)
	{
		___U3CCountDurationU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3Cstarting_CountU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshFloatingTextU3Ed__13_t4B6A65678514F8D3CD0E6F44F8AB9DDA1228C55C, ___U3Cstarting_CountU3E5__3_4)); }
	inline float get_U3Cstarting_CountU3E5__3_4() const { return ___U3Cstarting_CountU3E5__3_4; }
	inline float* get_address_of_U3Cstarting_CountU3E5__3_4() { return &___U3Cstarting_CountU3E5__3_4; }
	inline void set_U3Cstarting_CountU3E5__3_4(float value)
	{
		___U3Cstarting_CountU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3Ccurrent_CountU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshFloatingTextU3Ed__13_t4B6A65678514F8D3CD0E6F44F8AB9DDA1228C55C, ___U3Ccurrent_CountU3E5__4_5)); }
	inline float get_U3Ccurrent_CountU3E5__4_5() const { return ___U3Ccurrent_CountU3E5__4_5; }
	inline float* get_address_of_U3Ccurrent_CountU3E5__4_5() { return &___U3Ccurrent_CountU3E5__4_5; }
	inline void set_U3Ccurrent_CountU3E5__4_5(float value)
	{
		___U3Ccurrent_CountU3E5__4_5 = value;
	}

	inline static int32_t get_offset_of_U3Cstart_posU3E5__5_6() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshFloatingTextU3Ed__13_t4B6A65678514F8D3CD0E6F44F8AB9DDA1228C55C, ___U3Cstart_posU3E5__5_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3Cstart_posU3E5__5_6() const { return ___U3Cstart_posU3E5__5_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3Cstart_posU3E5__5_6() { return &___U3Cstart_posU3E5__5_6; }
	inline void set_U3Cstart_posU3E5__5_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3Cstart_posU3E5__5_6 = value;
	}

	inline static int32_t get_offset_of_U3Cstart_colorU3E5__6_7() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshFloatingTextU3Ed__13_t4B6A65678514F8D3CD0E6F44F8AB9DDA1228C55C, ___U3Cstart_colorU3E5__6_7)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_U3Cstart_colorU3E5__6_7() const { return ___U3Cstart_colorU3E5__6_7; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_U3Cstart_colorU3E5__6_7() { return &___U3Cstart_colorU3E5__6_7; }
	inline void set_U3Cstart_colorU3E5__6_7(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___U3Cstart_colorU3E5__6_7 = value;
	}

	inline static int32_t get_offset_of_U3CalphaU3E5__7_8() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshFloatingTextU3Ed__13_t4B6A65678514F8D3CD0E6F44F8AB9DDA1228C55C, ___U3CalphaU3E5__7_8)); }
	inline float get_U3CalphaU3E5__7_8() const { return ___U3CalphaU3E5__7_8; }
	inline float* get_address_of_U3CalphaU3E5__7_8() { return &___U3CalphaU3E5__7_8; }
	inline void set_U3CalphaU3E5__7_8(float value)
	{
		___U3CalphaU3E5__7_8 = value;
	}

	inline static int32_t get_offset_of_U3CfadeDurationU3E5__8_9() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshFloatingTextU3Ed__13_t4B6A65678514F8D3CD0E6F44F8AB9DDA1228C55C, ___U3CfadeDurationU3E5__8_9)); }
	inline float get_U3CfadeDurationU3E5__8_9() const { return ___U3CfadeDurationU3E5__8_9; }
	inline float* get_address_of_U3CfadeDurationU3E5__8_9() { return &___U3CfadeDurationU3E5__8_9; }
	inline void set_U3CfadeDurationU3E5__8_9(float value)
	{
		___U3CfadeDurationU3E5__8_9 = value;
	}
};


// TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>d__12
struct  U3CDisplayTextMeshProFloatingTextU3Ed__12_t0F0EBDC5A3A2FF615C3205C8019AB8A81EDEF6FC  : public RuntimeObject
{
public:
	// System.Int32 TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TMPro.Examples.TextMeshProFloatingText TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>d__12::<>4__this
	TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * ___U3CU3E4__this_2;
	// System.Single TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>d__12::<CountDuration>5__2
	float ___U3CCountDurationU3E5__2_3;
	// System.Single TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>d__12::<starting_Count>5__3
	float ___U3Cstarting_CountU3E5__3_4;
	// System.Single TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>d__12::<current_Count>5__4
	float ___U3Ccurrent_CountU3E5__4_5;
	// UnityEngine.Vector3 TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>d__12::<start_pos>5__5
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3Cstart_posU3E5__5_6;
	// UnityEngine.Color32 TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>d__12::<start_color>5__6
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___U3Cstart_colorU3E5__6_7;
	// System.Single TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>d__12::<alpha>5__7
	float ___U3CalphaU3E5__7_8;
	// System.Single TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>d__12::<fadeDuration>5__8
	float ___U3CfadeDurationU3E5__8_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshProFloatingTextU3Ed__12_t0F0EBDC5A3A2FF615C3205C8019AB8A81EDEF6FC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshProFloatingTextU3Ed__12_t0F0EBDC5A3A2FF615C3205C8019AB8A81EDEF6FC, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshProFloatingTextU3Ed__12_t0F0EBDC5A3A2FF615C3205C8019AB8A81EDEF6FC, ___U3CU3E4__this_2)); }
	inline TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCountDurationU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshProFloatingTextU3Ed__12_t0F0EBDC5A3A2FF615C3205C8019AB8A81EDEF6FC, ___U3CCountDurationU3E5__2_3)); }
	inline float get_U3CCountDurationU3E5__2_3() const { return ___U3CCountDurationU3E5__2_3; }
	inline float* get_address_of_U3CCountDurationU3E5__2_3() { return &___U3CCountDurationU3E5__2_3; }
	inline void set_U3CCountDurationU3E5__2_3(float value)
	{
		___U3CCountDurationU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3Cstarting_CountU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshProFloatingTextU3Ed__12_t0F0EBDC5A3A2FF615C3205C8019AB8A81EDEF6FC, ___U3Cstarting_CountU3E5__3_4)); }
	inline float get_U3Cstarting_CountU3E5__3_4() const { return ___U3Cstarting_CountU3E5__3_4; }
	inline float* get_address_of_U3Cstarting_CountU3E5__3_4() { return &___U3Cstarting_CountU3E5__3_4; }
	inline void set_U3Cstarting_CountU3E5__3_4(float value)
	{
		___U3Cstarting_CountU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3Ccurrent_CountU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshProFloatingTextU3Ed__12_t0F0EBDC5A3A2FF615C3205C8019AB8A81EDEF6FC, ___U3Ccurrent_CountU3E5__4_5)); }
	inline float get_U3Ccurrent_CountU3E5__4_5() const { return ___U3Ccurrent_CountU3E5__4_5; }
	inline float* get_address_of_U3Ccurrent_CountU3E5__4_5() { return &___U3Ccurrent_CountU3E5__4_5; }
	inline void set_U3Ccurrent_CountU3E5__4_5(float value)
	{
		___U3Ccurrent_CountU3E5__4_5 = value;
	}

	inline static int32_t get_offset_of_U3Cstart_posU3E5__5_6() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshProFloatingTextU3Ed__12_t0F0EBDC5A3A2FF615C3205C8019AB8A81EDEF6FC, ___U3Cstart_posU3E5__5_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3Cstart_posU3E5__5_6() const { return ___U3Cstart_posU3E5__5_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3Cstart_posU3E5__5_6() { return &___U3Cstart_posU3E5__5_6; }
	inline void set_U3Cstart_posU3E5__5_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3Cstart_posU3E5__5_6 = value;
	}

	inline static int32_t get_offset_of_U3Cstart_colorU3E5__6_7() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshProFloatingTextU3Ed__12_t0F0EBDC5A3A2FF615C3205C8019AB8A81EDEF6FC, ___U3Cstart_colorU3E5__6_7)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_U3Cstart_colorU3E5__6_7() const { return ___U3Cstart_colorU3E5__6_7; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_U3Cstart_colorU3E5__6_7() { return &___U3Cstart_colorU3E5__6_7; }
	inline void set_U3Cstart_colorU3E5__6_7(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___U3Cstart_colorU3E5__6_7 = value;
	}

	inline static int32_t get_offset_of_U3CalphaU3E5__7_8() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshProFloatingTextU3Ed__12_t0F0EBDC5A3A2FF615C3205C8019AB8A81EDEF6FC, ___U3CalphaU3E5__7_8)); }
	inline float get_U3CalphaU3E5__7_8() const { return ___U3CalphaU3E5__7_8; }
	inline float* get_address_of_U3CalphaU3E5__7_8() { return &___U3CalphaU3E5__7_8; }
	inline void set_U3CalphaU3E5__7_8(float value)
	{
		___U3CalphaU3E5__7_8 = value;
	}

	inline static int32_t get_offset_of_U3CfadeDurationU3E5__8_9() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshProFloatingTextU3Ed__12_t0F0EBDC5A3A2FF615C3205C8019AB8A81EDEF6FC, ___U3CfadeDurationU3E5__8_9)); }
	inline float get_U3CfadeDurationU3E5__8_9() const { return ___U3CfadeDurationU3E5__8_9; }
	inline float* get_address_of_U3CfadeDurationU3E5__8_9() { return &___U3CfadeDurationU3E5__8_9; }
	inline void set_U3CfadeDurationU3E5__8_9(float value)
	{
		___U3CfadeDurationU3E5__8_9 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct  TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___itemStack_0)); }
	inline FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* get_itemStack_0() const { return ___itemStack_0; }
	inline FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct  TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___itemStack_0)); }
	inline HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* get_itemStack_0() const { return ___itemStack_0; }
	inline HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_DefaultItem_2)); }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct  TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___itemStack_0)); }
	inline HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* get_itemStack_0() const { return ___itemStack_0; }
	inline HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Mesh
struct  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// TMPro.TMP_CharacterInfo
struct  TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B 
{
public:
	// System.Char TMPro.TMP_CharacterInfo::character
	Il2CppChar ___character_0;
	// System.Int32 TMPro.TMP_CharacterInfo::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_CharacterInfo::stringLength
	int32_t ___stringLength_2;
	// TMPro.TMP_TextElementType TMPro.TMP_CharacterInfo::elementType
	int32_t ___elementType_3;
	// TMPro.TMP_TextElement TMPro.TMP_CharacterInfo::textElement
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___textElement_4;
	// TMPro.TMP_FontAsset TMPro.TMP_CharacterInfo::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_5;
	// TMPro.TMP_SpriteAsset TMPro.TMP_CharacterInfo::spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_6;
	// System.Int32 TMPro.TMP_CharacterInfo::spriteIndex
	int32_t ___spriteIndex_7;
	// UnityEngine.Material TMPro.TMP_CharacterInfo::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_8;
	// System.Int32 TMPro.TMP_CharacterInfo::materialReferenceIndex
	int32_t ___materialReferenceIndex_9;
	// System.Boolean TMPro.TMP_CharacterInfo::isUsingAlternateTypeface
	bool ___isUsingAlternateTypeface_10;
	// System.Single TMPro.TMP_CharacterInfo::pointSize
	float ___pointSize_11;
	// System.Int32 TMPro.TMP_CharacterInfo::lineNumber
	int32_t ___lineNumber_12;
	// System.Int32 TMPro.TMP_CharacterInfo::pageNumber
	int32_t ___pageNumber_13;
	// System.Int32 TMPro.TMP_CharacterInfo::vertexIndex
	int32_t ___vertexIndex_14;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BL
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BL_15;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TL
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TL_16;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TR
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TR_17;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BR
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BR_18;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topLeft
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topLeft_19;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomLeft
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomLeft_20;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topRight
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topRight_21;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomRight
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomRight_22;
	// System.Single TMPro.TMP_CharacterInfo::origin
	float ___origin_23;
	// System.Single TMPro.TMP_CharacterInfo::xAdvance
	float ___xAdvance_24;
	// System.Single TMPro.TMP_CharacterInfo::ascender
	float ___ascender_25;
	// System.Single TMPro.TMP_CharacterInfo::baseLine
	float ___baseLine_26;
	// System.Single TMPro.TMP_CharacterInfo::descender
	float ___descender_27;
	// System.Single TMPro.TMP_CharacterInfo::adjustedAscender
	float ___adjustedAscender_28;
	// System.Single TMPro.TMP_CharacterInfo::adjustedDescender
	float ___adjustedDescender_29;
	// System.Single TMPro.TMP_CharacterInfo::aspectRatio
	float ___aspectRatio_30;
	// System.Single TMPro.TMP_CharacterInfo::scale
	float ___scale_31;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_32;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_33;
	// System.Int32 TMPro.TMP_CharacterInfo::underlineVertexIndex
	int32_t ___underlineVertexIndex_34;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_35;
	// System.Int32 TMPro.TMP_CharacterInfo::strikethroughVertexIndex
	int32_t ___strikethroughVertexIndex_36;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::highlightColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_37;
	// TMPro.HighlightState TMPro.TMP_CharacterInfo::highlightState
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___highlightState_38;
	// TMPro.FontStyles TMPro.TMP_CharacterInfo::style
	int32_t ___style_39;
	// System.Boolean TMPro.TMP_CharacterInfo::isVisible
	bool ___isVisible_40;

public:
	inline static int32_t get_offset_of_character_0() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___character_0)); }
	inline Il2CppChar get_character_0() const { return ___character_0; }
	inline Il2CppChar* get_address_of_character_0() { return &___character_0; }
	inline void set_character_0(Il2CppChar value)
	{
		___character_0 = value;
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_stringLength_2() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___stringLength_2)); }
	inline int32_t get_stringLength_2() const { return ___stringLength_2; }
	inline int32_t* get_address_of_stringLength_2() { return &___stringLength_2; }
	inline void set_stringLength_2(int32_t value)
	{
		___stringLength_2 = value;
	}

	inline static int32_t get_offset_of_elementType_3() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___elementType_3)); }
	inline int32_t get_elementType_3() const { return ___elementType_3; }
	inline int32_t* get_address_of_elementType_3() { return &___elementType_3; }
	inline void set_elementType_3(int32_t value)
	{
		___elementType_3 = value;
	}

	inline static int32_t get_offset_of_textElement_4() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___textElement_4)); }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * get_textElement_4() const { return ___textElement_4; }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 ** get_address_of_textElement_4() { return &___textElement_4; }
	inline void set_textElement_4(TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * value)
	{
		___textElement_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textElement_4), (void*)value);
	}

	inline static int32_t get_offset_of_fontAsset_5() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___fontAsset_5)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_5() const { return ___fontAsset_5; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_5() { return &___fontAsset_5; }
	inline void set_fontAsset_5(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_5), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAsset_6() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___spriteAsset_6)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_spriteAsset_6() const { return ___spriteAsset_6; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_spriteAsset_6() { return &___spriteAsset_6; }
	inline void set_spriteAsset_6(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___spriteAsset_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_6), (void*)value);
	}

	inline static int32_t get_offset_of_spriteIndex_7() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___spriteIndex_7)); }
	inline int32_t get_spriteIndex_7() const { return ___spriteIndex_7; }
	inline int32_t* get_address_of_spriteIndex_7() { return &___spriteIndex_7; }
	inline void set_spriteIndex_7(int32_t value)
	{
		___spriteIndex_7 = value;
	}

	inline static int32_t get_offset_of_material_8() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___material_8)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_8() const { return ___material_8; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_8() { return &___material_8; }
	inline void set_material_8(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_8), (void*)value);
	}

	inline static int32_t get_offset_of_materialReferenceIndex_9() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___materialReferenceIndex_9)); }
	inline int32_t get_materialReferenceIndex_9() const { return ___materialReferenceIndex_9; }
	inline int32_t* get_address_of_materialReferenceIndex_9() { return &___materialReferenceIndex_9; }
	inline void set_materialReferenceIndex_9(int32_t value)
	{
		___materialReferenceIndex_9 = value;
	}

	inline static int32_t get_offset_of_isUsingAlternateTypeface_10() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___isUsingAlternateTypeface_10)); }
	inline bool get_isUsingAlternateTypeface_10() const { return ___isUsingAlternateTypeface_10; }
	inline bool* get_address_of_isUsingAlternateTypeface_10() { return &___isUsingAlternateTypeface_10; }
	inline void set_isUsingAlternateTypeface_10(bool value)
	{
		___isUsingAlternateTypeface_10 = value;
	}

	inline static int32_t get_offset_of_pointSize_11() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___pointSize_11)); }
	inline float get_pointSize_11() const { return ___pointSize_11; }
	inline float* get_address_of_pointSize_11() { return &___pointSize_11; }
	inline void set_pointSize_11(float value)
	{
		___pointSize_11 = value;
	}

	inline static int32_t get_offset_of_lineNumber_12() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___lineNumber_12)); }
	inline int32_t get_lineNumber_12() const { return ___lineNumber_12; }
	inline int32_t* get_address_of_lineNumber_12() { return &___lineNumber_12; }
	inline void set_lineNumber_12(int32_t value)
	{
		___lineNumber_12 = value;
	}

	inline static int32_t get_offset_of_pageNumber_13() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___pageNumber_13)); }
	inline int32_t get_pageNumber_13() const { return ___pageNumber_13; }
	inline int32_t* get_address_of_pageNumber_13() { return &___pageNumber_13; }
	inline void set_pageNumber_13(int32_t value)
	{
		___pageNumber_13 = value;
	}

	inline static int32_t get_offset_of_vertexIndex_14() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertexIndex_14)); }
	inline int32_t get_vertexIndex_14() const { return ___vertexIndex_14; }
	inline int32_t* get_address_of_vertexIndex_14() { return &___vertexIndex_14; }
	inline void set_vertexIndex_14(int32_t value)
	{
		___vertexIndex_14 = value;
	}

	inline static int32_t get_offset_of_vertex_BL_15() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertex_BL_15)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_vertex_BL_15() const { return ___vertex_BL_15; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_vertex_BL_15() { return &___vertex_BL_15; }
	inline void set_vertex_BL_15(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___vertex_BL_15 = value;
	}

	inline static int32_t get_offset_of_vertex_TL_16() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertex_TL_16)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_vertex_TL_16() const { return ___vertex_TL_16; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_vertex_TL_16() { return &___vertex_TL_16; }
	inline void set_vertex_TL_16(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___vertex_TL_16 = value;
	}

	inline static int32_t get_offset_of_vertex_TR_17() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertex_TR_17)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_vertex_TR_17() const { return ___vertex_TR_17; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_vertex_TR_17() { return &___vertex_TR_17; }
	inline void set_vertex_TR_17(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___vertex_TR_17 = value;
	}

	inline static int32_t get_offset_of_vertex_BR_18() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertex_BR_18)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_vertex_BR_18() const { return ___vertex_BR_18; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_vertex_BR_18() { return &___vertex_BR_18; }
	inline void set_vertex_BR_18(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___vertex_BR_18 = value;
	}

	inline static int32_t get_offset_of_topLeft_19() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___topLeft_19)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_topLeft_19() const { return ___topLeft_19; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_topLeft_19() { return &___topLeft_19; }
	inline void set_topLeft_19(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___topLeft_19 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_20() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___bottomLeft_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_bottomLeft_20() const { return ___bottomLeft_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_bottomLeft_20() { return &___bottomLeft_20; }
	inline void set_bottomLeft_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___bottomLeft_20 = value;
	}

	inline static int32_t get_offset_of_topRight_21() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___topRight_21)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_topRight_21() const { return ___topRight_21; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_topRight_21() { return &___topRight_21; }
	inline void set_topRight_21(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___topRight_21 = value;
	}

	inline static int32_t get_offset_of_bottomRight_22() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___bottomRight_22)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_bottomRight_22() const { return ___bottomRight_22; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_bottomRight_22() { return &___bottomRight_22; }
	inline void set_bottomRight_22(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___bottomRight_22 = value;
	}

	inline static int32_t get_offset_of_origin_23() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___origin_23)); }
	inline float get_origin_23() const { return ___origin_23; }
	inline float* get_address_of_origin_23() { return &___origin_23; }
	inline void set_origin_23(float value)
	{
		___origin_23 = value;
	}

	inline static int32_t get_offset_of_xAdvance_24() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___xAdvance_24)); }
	inline float get_xAdvance_24() const { return ___xAdvance_24; }
	inline float* get_address_of_xAdvance_24() { return &___xAdvance_24; }
	inline void set_xAdvance_24(float value)
	{
		___xAdvance_24 = value;
	}

	inline static int32_t get_offset_of_ascender_25() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___ascender_25)); }
	inline float get_ascender_25() const { return ___ascender_25; }
	inline float* get_address_of_ascender_25() { return &___ascender_25; }
	inline void set_ascender_25(float value)
	{
		___ascender_25 = value;
	}

	inline static int32_t get_offset_of_baseLine_26() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___baseLine_26)); }
	inline float get_baseLine_26() const { return ___baseLine_26; }
	inline float* get_address_of_baseLine_26() { return &___baseLine_26; }
	inline void set_baseLine_26(float value)
	{
		___baseLine_26 = value;
	}

	inline static int32_t get_offset_of_descender_27() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___descender_27)); }
	inline float get_descender_27() const { return ___descender_27; }
	inline float* get_address_of_descender_27() { return &___descender_27; }
	inline void set_descender_27(float value)
	{
		___descender_27 = value;
	}

	inline static int32_t get_offset_of_adjustedAscender_28() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___adjustedAscender_28)); }
	inline float get_adjustedAscender_28() const { return ___adjustedAscender_28; }
	inline float* get_address_of_adjustedAscender_28() { return &___adjustedAscender_28; }
	inline void set_adjustedAscender_28(float value)
	{
		___adjustedAscender_28 = value;
	}

	inline static int32_t get_offset_of_adjustedDescender_29() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___adjustedDescender_29)); }
	inline float get_adjustedDescender_29() const { return ___adjustedDescender_29; }
	inline float* get_address_of_adjustedDescender_29() { return &___adjustedDescender_29; }
	inline void set_adjustedDescender_29(float value)
	{
		___adjustedDescender_29 = value;
	}

	inline static int32_t get_offset_of_aspectRatio_30() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___aspectRatio_30)); }
	inline float get_aspectRatio_30() const { return ___aspectRatio_30; }
	inline float* get_address_of_aspectRatio_30() { return &___aspectRatio_30; }
	inline void set_aspectRatio_30(float value)
	{
		___aspectRatio_30 = value;
	}

	inline static int32_t get_offset_of_scale_31() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___scale_31)); }
	inline float get_scale_31() const { return ___scale_31; }
	inline float* get_address_of_scale_31() { return &___scale_31; }
	inline void set_scale_31(float value)
	{
		___scale_31 = value;
	}

	inline static int32_t get_offset_of_color_32() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___color_32)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_32() const { return ___color_32; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_32() { return &___color_32; }
	inline void set_color_32(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_32 = value;
	}

	inline static int32_t get_offset_of_underlineColor_33() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___underlineColor_33)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_underlineColor_33() const { return ___underlineColor_33; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_underlineColor_33() { return &___underlineColor_33; }
	inline void set_underlineColor_33(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___underlineColor_33 = value;
	}

	inline static int32_t get_offset_of_underlineVertexIndex_34() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___underlineVertexIndex_34)); }
	inline int32_t get_underlineVertexIndex_34() const { return ___underlineVertexIndex_34; }
	inline int32_t* get_address_of_underlineVertexIndex_34() { return &___underlineVertexIndex_34; }
	inline void set_underlineVertexIndex_34(int32_t value)
	{
		___underlineVertexIndex_34 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_35() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___strikethroughColor_35)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_strikethroughColor_35() const { return ___strikethroughColor_35; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_strikethroughColor_35() { return &___strikethroughColor_35; }
	inline void set_strikethroughColor_35(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___strikethroughColor_35 = value;
	}

	inline static int32_t get_offset_of_strikethroughVertexIndex_36() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___strikethroughVertexIndex_36)); }
	inline int32_t get_strikethroughVertexIndex_36() const { return ___strikethroughVertexIndex_36; }
	inline int32_t* get_address_of_strikethroughVertexIndex_36() { return &___strikethroughVertexIndex_36; }
	inline void set_strikethroughVertexIndex_36(int32_t value)
	{
		___strikethroughVertexIndex_36 = value;
	}

	inline static int32_t get_offset_of_highlightColor_37() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___highlightColor_37)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_highlightColor_37() const { return ___highlightColor_37; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_highlightColor_37() { return &___highlightColor_37; }
	inline void set_highlightColor_37(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___highlightColor_37 = value;
	}

	inline static int32_t get_offset_of_highlightState_38() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___highlightState_38)); }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  get_highlightState_38() const { return ___highlightState_38; }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 * get_address_of_highlightState_38() { return &___highlightState_38; }
	inline void set_highlightState_38(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  value)
	{
		___highlightState_38 = value;
	}

	inline static int32_t get_offset_of_style_39() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___style_39)); }
	inline int32_t get_style_39() const { return ___style_39; }
	inline int32_t* get_address_of_style_39() { return &___style_39; }
	inline void set_style_39(int32_t value)
	{
		___style_39 = value;
	}

	inline static int32_t get_offset_of_isVisible_40() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___isVisible_40)); }
	inline bool get_isVisible_40() const { return ___isVisible_40; }
	inline bool* get_address_of_isVisible_40() { return &___isVisible_40; }
	inline void set_isVisible_40(bool value)
	{
		___isVisible_40 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B_marshaled_pinvoke
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___textElement_4;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_5;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BL_15;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TL_16;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TR_17;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BR_18;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topLeft_19;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomLeft_20;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topRight_21;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomRight_22;
	float ___origin_23;
	float ___xAdvance_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___aspectRatio_30;
	float ___scale_31;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_32;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_33;
	int32_t ___underlineVertexIndex_34;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_35;
	int32_t ___strikethroughVertexIndex_36;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_37;
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___highlightState_38;
	int32_t ___style_39;
	int32_t ___isVisible_40;
};
// Native definition for COM marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B_marshaled_com
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___textElement_4;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_5;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BL_15;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TL_16;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TR_17;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BR_18;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topLeft_19;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomLeft_20;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topRight_21;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomRight_22;
	float ___origin_23;
	float ___xAdvance_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___aspectRatio_30;
	float ___scale_31;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_32;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_33;
	int32_t ___underlineVertexIndex_34;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_35;
	int32_t ___strikethroughVertexIndex_36;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_37;
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___highlightState_38;
	int32_t ___style_39;
	int32_t ___isVisible_40;
};

// TMPro.TMP_LineInfo
struct  TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 
{
public:
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___lineExtents_19;

public:
	inline static int32_t get_offset_of_controlCharacterCount_0() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___controlCharacterCount_0)); }
	inline int32_t get_controlCharacterCount_0() const { return ___controlCharacterCount_0; }
	inline int32_t* get_address_of_controlCharacterCount_0() { return &___controlCharacterCount_0; }
	inline void set_controlCharacterCount_0(int32_t value)
	{
		___controlCharacterCount_0 = value;
	}

	inline static int32_t get_offset_of_characterCount_1() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___characterCount_1)); }
	inline int32_t get_characterCount_1() const { return ___characterCount_1; }
	inline int32_t* get_address_of_characterCount_1() { return &___characterCount_1; }
	inline void set_characterCount_1(int32_t value)
	{
		___characterCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCharacterCount_2() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___visibleCharacterCount_2)); }
	inline int32_t get_visibleCharacterCount_2() const { return ___visibleCharacterCount_2; }
	inline int32_t* get_address_of_visibleCharacterCount_2() { return &___visibleCharacterCount_2; }
	inline void set_visibleCharacterCount_2(int32_t value)
	{
		___visibleCharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_spaceCount_3() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___spaceCount_3)); }
	inline int32_t get_spaceCount_3() const { return ___spaceCount_3; }
	inline int32_t* get_address_of_spaceCount_3() { return &___spaceCount_3; }
	inline void set_spaceCount_3(int32_t value)
	{
		___spaceCount_3 = value;
	}

	inline static int32_t get_offset_of_wordCount_4() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___wordCount_4)); }
	inline int32_t get_wordCount_4() const { return ___wordCount_4; }
	inline int32_t* get_address_of_wordCount_4() { return &___wordCount_4; }
	inline void set_wordCount_4(int32_t value)
	{
		___wordCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharacterIndex_8() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lastVisibleCharacterIndex_8)); }
	inline int32_t get_lastVisibleCharacterIndex_8() const { return ___lastVisibleCharacterIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharacterIndex_8() { return &___lastVisibleCharacterIndex_8; }
	inline void set_lastVisibleCharacterIndex_8(int32_t value)
	{
		___lastVisibleCharacterIndex_8 = value;
	}

	inline static int32_t get_offset_of_length_9() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___length_9)); }
	inline float get_length_9() const { return ___length_9; }
	inline float* get_address_of_length_9() { return &___length_9; }
	inline void set_length_9(float value)
	{
		___length_9 = value;
	}

	inline static int32_t get_offset_of_lineHeight_10() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lineHeight_10)); }
	inline float get_lineHeight_10() const { return ___lineHeight_10; }
	inline float* get_address_of_lineHeight_10() { return &___lineHeight_10; }
	inline void set_lineHeight_10(float value)
	{
		___lineHeight_10 = value;
	}

	inline static int32_t get_offset_of_ascender_11() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___ascender_11)); }
	inline float get_ascender_11() const { return ___ascender_11; }
	inline float* get_address_of_ascender_11() { return &___ascender_11; }
	inline void set_ascender_11(float value)
	{
		___ascender_11 = value;
	}

	inline static int32_t get_offset_of_baseline_12() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___baseline_12)); }
	inline float get_baseline_12() const { return ___baseline_12; }
	inline float* get_address_of_baseline_12() { return &___baseline_12; }
	inline void set_baseline_12(float value)
	{
		___baseline_12 = value;
	}

	inline static int32_t get_offset_of_descender_13() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___descender_13)); }
	inline float get_descender_13() const { return ___descender_13; }
	inline float* get_address_of_descender_13() { return &___descender_13; }
	inline void set_descender_13(float value)
	{
		___descender_13 = value;
	}

	inline static int32_t get_offset_of_maxAdvance_14() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___maxAdvance_14)); }
	inline float get_maxAdvance_14() const { return ___maxAdvance_14; }
	inline float* get_address_of_maxAdvance_14() { return &___maxAdvance_14; }
	inline void set_maxAdvance_14(float value)
	{
		___maxAdvance_14 = value;
	}

	inline static int32_t get_offset_of_width_15() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___width_15)); }
	inline float get_width_15() const { return ___width_15; }
	inline float* get_address_of_width_15() { return &___width_15; }
	inline void set_width_15(float value)
	{
		___width_15 = value;
	}

	inline static int32_t get_offset_of_marginLeft_16() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___marginLeft_16)); }
	inline float get_marginLeft_16() const { return ___marginLeft_16; }
	inline float* get_address_of_marginLeft_16() { return &___marginLeft_16; }
	inline void set_marginLeft_16(float value)
	{
		___marginLeft_16 = value;
	}

	inline static int32_t get_offset_of_marginRight_17() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___marginRight_17)); }
	inline float get_marginRight_17() const { return ___marginRight_17; }
	inline float* get_address_of_marginRight_17() { return &___marginRight_17; }
	inline void set_marginRight_17(float value)
	{
		___marginRight_17 = value;
	}

	inline static int32_t get_offset_of_alignment_18() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___alignment_18)); }
	inline int32_t get_alignment_18() const { return ___alignment_18; }
	inline int32_t* get_address_of_alignment_18() { return &___alignment_18; }
	inline void set_alignment_18(int32_t value)
	{
		___alignment_18 = value;
	}

	inline static int32_t get_offset_of_lineExtents_19() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lineExtents_19)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_lineExtents_19() const { return ___lineExtents_19; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_lineExtents_19() { return &___lineExtents_19; }
	inline void set_lineExtents_19(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___lineExtents_19 = value;
	}
};


// TMPro.TMP_MeshInfo
struct  TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176 
{
public:
	// UnityEngine.Mesh TMPro.TMP_MeshInfo::mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh_4;
	// System.Int32 TMPro.TMP_MeshInfo::vertexCount
	int32_t ___vertexCount_5;
	// UnityEngine.Vector3[] TMPro.TMP_MeshInfo::vertices
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___vertices_6;
	// UnityEngine.Vector3[] TMPro.TMP_MeshInfo::normals
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___normals_7;
	// UnityEngine.Vector4[] TMPro.TMP_MeshInfo::tangents
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___tangents_8;
	// UnityEngine.Vector2[] TMPro.TMP_MeshInfo::uvs0
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___uvs0_9;
	// UnityEngine.Vector2[] TMPro.TMP_MeshInfo::uvs2
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___uvs2_10;
	// UnityEngine.Color32[] TMPro.TMP_MeshInfo::colors32
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___colors32_11;
	// System.Int32[] TMPro.TMP_MeshInfo::triangles
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___triangles_12;
	// UnityEngine.Material TMPro.TMP_MeshInfo::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_13;

public:
	inline static int32_t get_offset_of_mesh_4() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___mesh_4)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_mesh_4() const { return ___mesh_4; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_mesh_4() { return &___mesh_4; }
	inline void set_mesh_4(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___mesh_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_4), (void*)value);
	}

	inline static int32_t get_offset_of_vertexCount_5() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___vertexCount_5)); }
	inline int32_t get_vertexCount_5() const { return ___vertexCount_5; }
	inline int32_t* get_address_of_vertexCount_5() { return &___vertexCount_5; }
	inline void set_vertexCount_5(int32_t value)
	{
		___vertexCount_5 = value;
	}

	inline static int32_t get_offset_of_vertices_6() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___vertices_6)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_vertices_6() const { return ___vertices_6; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_vertices_6() { return &___vertices_6; }
	inline void set_vertices_6(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___vertices_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_6), (void*)value);
	}

	inline static int32_t get_offset_of_normals_7() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___normals_7)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_normals_7() const { return ___normals_7; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_normals_7() { return &___normals_7; }
	inline void set_normals_7(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___normals_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___normals_7), (void*)value);
	}

	inline static int32_t get_offset_of_tangents_8() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___tangents_8)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_tangents_8() const { return ___tangents_8; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_tangents_8() { return &___tangents_8; }
	inline void set_tangents_8(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___tangents_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tangents_8), (void*)value);
	}

	inline static int32_t get_offset_of_uvs0_9() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___uvs0_9)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_uvs0_9() const { return ___uvs0_9; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_uvs0_9() { return &___uvs0_9; }
	inline void set_uvs0_9(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___uvs0_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uvs0_9), (void*)value);
	}

	inline static int32_t get_offset_of_uvs2_10() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___uvs2_10)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_uvs2_10() const { return ___uvs2_10; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_uvs2_10() { return &___uvs2_10; }
	inline void set_uvs2_10(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___uvs2_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uvs2_10), (void*)value);
	}

	inline static int32_t get_offset_of_colors32_11() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___colors32_11)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get_colors32_11() const { return ___colors32_11; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of_colors32_11() { return &___colors32_11; }
	inline void set_colors32_11(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		___colors32_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colors32_11), (void*)value);
	}

	inline static int32_t get_offset_of_triangles_12() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___triangles_12)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_triangles_12() const { return ___triangles_12; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_triangles_12() { return &___triangles_12; }
	inline void set_triangles_12(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___triangles_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangles_12), (void*)value);
	}

	inline static int32_t get_offset_of_material_13() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___material_13)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_13() const { return ___material_13; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_13() { return &___material_13; }
	inline void set_material_13(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_13), (void*)value);
	}
};

struct TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_StaticFields
{
public:
	// UnityEngine.Color32 TMPro.TMP_MeshInfo::s_DefaultColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___s_DefaultColor_0;
	// UnityEngine.Vector3 TMPro.TMP_MeshInfo::s_DefaultNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s_DefaultNormal_1;
	// UnityEngine.Vector4 TMPro.TMP_MeshInfo::s_DefaultTangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___s_DefaultTangent_2;
	// UnityEngine.Bounds TMPro.TMP_MeshInfo::s_DefaultBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___s_DefaultBounds_3;

public:
	inline static int32_t get_offset_of_s_DefaultColor_0() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_StaticFields, ___s_DefaultColor_0)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_s_DefaultColor_0() const { return ___s_DefaultColor_0; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_s_DefaultColor_0() { return &___s_DefaultColor_0; }
	inline void set_s_DefaultColor_0(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___s_DefaultColor_0 = value;
	}

	inline static int32_t get_offset_of_s_DefaultNormal_1() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_StaticFields, ___s_DefaultNormal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_s_DefaultNormal_1() const { return ___s_DefaultNormal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_s_DefaultNormal_1() { return &___s_DefaultNormal_1; }
	inline void set_s_DefaultNormal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___s_DefaultNormal_1 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_2() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_StaticFields, ___s_DefaultTangent_2)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_s_DefaultTangent_2() const { return ___s_DefaultTangent_2; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_s_DefaultTangent_2() { return &___s_DefaultTangent_2; }
	inline void set_s_DefaultTangent_2(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___s_DefaultTangent_2 = value;
	}

	inline static int32_t get_offset_of_s_DefaultBounds_3() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_StaticFields, ___s_DefaultBounds_3)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_s_DefaultBounds_3() const { return ___s_DefaultBounds_3; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_s_DefaultBounds_3() { return &___s_DefaultBounds_3; }
	inline void set_s_DefaultBounds_3(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___s_DefaultBounds_3 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_marshaled_pinvoke
{
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh_4;
	int32_t ___vertexCount_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___vertices_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___normals_7;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * ___tangents_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___uvs0_9;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___uvs2_10;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * ___colors32_11;
	Il2CppSafeArray/*NONE*/* ___triangles_12;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_13;
};
// Native definition for COM marshalling of TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_marshaled_com
{
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh_4;
	int32_t ___vertexCount_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___vertices_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___normals_7;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * ___tangents_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___uvs0_9;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___uvs2_10;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * ___colors32_11;
	Il2CppSafeArray/*NONE*/* ___triangles_12;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_13;
};

// System.Comparison`1<System.Int32>
struct  Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.TextMesh
struct  TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// TMPro.WordWrapState
struct  WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 
{
public:
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScale
	float ___fontScale_27;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_28;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_29;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_30;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_31;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_32;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_33;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_34;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_35;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_36;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_37;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_40;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_41;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_42;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_48;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_50;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_51;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_54;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_56;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_57;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_58;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_59;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_60;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_61;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_62;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_63;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_64;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_65;

public:
	inline static int32_t get_offset_of_previous_WordBreak_0() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___previous_WordBreak_0)); }
	inline int32_t get_previous_WordBreak_0() const { return ___previous_WordBreak_0; }
	inline int32_t* get_address_of_previous_WordBreak_0() { return &___previous_WordBreak_0; }
	inline void set_previous_WordBreak_0(int32_t value)
	{
		___previous_WordBreak_0 = value;
	}

	inline static int32_t get_offset_of_total_CharacterCount_1() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___total_CharacterCount_1)); }
	inline int32_t get_total_CharacterCount_1() const { return ___total_CharacterCount_1; }
	inline int32_t* get_address_of_total_CharacterCount_1() { return &___total_CharacterCount_1; }
	inline void set_total_CharacterCount_1(int32_t value)
	{
		___total_CharacterCount_1 = value;
	}

	inline static int32_t get_offset_of_visible_CharacterCount_2() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_CharacterCount_2)); }
	inline int32_t get_visible_CharacterCount_2() const { return ___visible_CharacterCount_2; }
	inline int32_t* get_address_of_visible_CharacterCount_2() { return &___visible_CharacterCount_2; }
	inline void set_visible_CharacterCount_2(int32_t value)
	{
		___visible_CharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_visible_SpriteCount_3() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_SpriteCount_3)); }
	inline int32_t get_visible_SpriteCount_3() const { return ___visible_SpriteCount_3; }
	inline int32_t* get_address_of_visible_SpriteCount_3() { return &___visible_SpriteCount_3; }
	inline void set_visible_SpriteCount_3(int32_t value)
	{
		___visible_SpriteCount_3 = value;
	}

	inline static int32_t get_offset_of_visible_LinkCount_4() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_LinkCount_4)); }
	inline int32_t get_visible_LinkCount_4() const { return ___visible_LinkCount_4; }
	inline int32_t* get_address_of_visible_LinkCount_4() { return &___visible_LinkCount_4; }
	inline void set_visible_LinkCount_4(int32_t value)
	{
		___visible_LinkCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharIndex_8() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lastVisibleCharIndex_8)); }
	inline int32_t get_lastVisibleCharIndex_8() const { return ___lastVisibleCharIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharIndex_8() { return &___lastVisibleCharIndex_8; }
	inline void set_lastVisibleCharIndex_8(int32_t value)
	{
		___lastVisibleCharIndex_8 = value;
	}

	inline static int32_t get_offset_of_lineNumber_9() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineNumber_9)); }
	inline int32_t get_lineNumber_9() const { return ___lineNumber_9; }
	inline int32_t* get_address_of_lineNumber_9() { return &___lineNumber_9; }
	inline void set_lineNumber_9(int32_t value)
	{
		___lineNumber_9 = value;
	}

	inline static int32_t get_offset_of_maxCapHeight_10() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxCapHeight_10)); }
	inline float get_maxCapHeight_10() const { return ___maxCapHeight_10; }
	inline float* get_address_of_maxCapHeight_10() { return &___maxCapHeight_10; }
	inline void set_maxCapHeight_10(float value)
	{
		___maxCapHeight_10 = value;
	}

	inline static int32_t get_offset_of_maxAscender_11() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxAscender_11)); }
	inline float get_maxAscender_11() const { return ___maxAscender_11; }
	inline float* get_address_of_maxAscender_11() { return &___maxAscender_11; }
	inline void set_maxAscender_11(float value)
	{
		___maxAscender_11 = value;
	}

	inline static int32_t get_offset_of_maxDescender_12() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxDescender_12)); }
	inline float get_maxDescender_12() const { return ___maxDescender_12; }
	inline float* get_address_of_maxDescender_12() { return &___maxDescender_12; }
	inline void set_maxDescender_12(float value)
	{
		___maxDescender_12 = value;
	}

	inline static int32_t get_offset_of_startOfLineAscender_13() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___startOfLineAscender_13)); }
	inline float get_startOfLineAscender_13() const { return ___startOfLineAscender_13; }
	inline float* get_address_of_startOfLineAscender_13() { return &___startOfLineAscender_13; }
	inline void set_startOfLineAscender_13(float value)
	{
		___startOfLineAscender_13 = value;
	}

	inline static int32_t get_offset_of_maxLineAscender_14() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxLineAscender_14)); }
	inline float get_maxLineAscender_14() const { return ___maxLineAscender_14; }
	inline float* get_address_of_maxLineAscender_14() { return &___maxLineAscender_14; }
	inline void set_maxLineAscender_14(float value)
	{
		___maxLineAscender_14 = value;
	}

	inline static int32_t get_offset_of_maxLineDescender_15() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxLineDescender_15)); }
	inline float get_maxLineDescender_15() const { return ___maxLineDescender_15; }
	inline float* get_address_of_maxLineDescender_15() { return &___maxLineDescender_15; }
	inline void set_maxLineDescender_15(float value)
	{
		___maxLineDescender_15 = value;
	}

	inline static int32_t get_offset_of_pageAscender_16() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___pageAscender_16)); }
	inline float get_pageAscender_16() const { return ___pageAscender_16; }
	inline float* get_address_of_pageAscender_16() { return &___pageAscender_16; }
	inline void set_pageAscender_16(float value)
	{
		___pageAscender_16 = value;
	}

	inline static int32_t get_offset_of_horizontalAlignment_17() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___horizontalAlignment_17)); }
	inline int32_t get_horizontalAlignment_17() const { return ___horizontalAlignment_17; }
	inline int32_t* get_address_of_horizontalAlignment_17() { return &___horizontalAlignment_17; }
	inline void set_horizontalAlignment_17(int32_t value)
	{
		___horizontalAlignment_17 = value;
	}

	inline static int32_t get_offset_of_marginLeft_18() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___marginLeft_18)); }
	inline float get_marginLeft_18() const { return ___marginLeft_18; }
	inline float* get_address_of_marginLeft_18() { return &___marginLeft_18; }
	inline void set_marginLeft_18(float value)
	{
		___marginLeft_18 = value;
	}

	inline static int32_t get_offset_of_marginRight_19() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___marginRight_19)); }
	inline float get_marginRight_19() const { return ___marginRight_19; }
	inline float* get_address_of_marginRight_19() { return &___marginRight_19; }
	inline void set_marginRight_19(float value)
	{
		___marginRight_19 = value;
	}

	inline static int32_t get_offset_of_xAdvance_20() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___xAdvance_20)); }
	inline float get_xAdvance_20() const { return ___xAdvance_20; }
	inline float* get_address_of_xAdvance_20() { return &___xAdvance_20; }
	inline void set_xAdvance_20(float value)
	{
		___xAdvance_20 = value;
	}

	inline static int32_t get_offset_of_preferredWidth_21() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___preferredWidth_21)); }
	inline float get_preferredWidth_21() const { return ___preferredWidth_21; }
	inline float* get_address_of_preferredWidth_21() { return &___preferredWidth_21; }
	inline void set_preferredWidth_21(float value)
	{
		___preferredWidth_21 = value;
	}

	inline static int32_t get_offset_of_preferredHeight_22() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___preferredHeight_22)); }
	inline float get_preferredHeight_22() const { return ___preferredHeight_22; }
	inline float* get_address_of_preferredHeight_22() { return &___preferredHeight_22; }
	inline void set_preferredHeight_22(float value)
	{
		___preferredHeight_22 = value;
	}

	inline static int32_t get_offset_of_previousLineScale_23() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___previousLineScale_23)); }
	inline float get_previousLineScale_23() const { return ___previousLineScale_23; }
	inline float* get_address_of_previousLineScale_23() { return &___previousLineScale_23; }
	inline void set_previousLineScale_23(float value)
	{
		___previousLineScale_23 = value;
	}

	inline static int32_t get_offset_of_wordCount_24() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___wordCount_24)); }
	inline int32_t get_wordCount_24() const { return ___wordCount_24; }
	inline int32_t* get_address_of_wordCount_24() { return &___wordCount_24; }
	inline void set_wordCount_24(int32_t value)
	{
		___wordCount_24 = value;
	}

	inline static int32_t get_offset_of_fontStyle_25() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontStyle_25)); }
	inline int32_t get_fontStyle_25() const { return ___fontStyle_25; }
	inline int32_t* get_address_of_fontStyle_25() { return &___fontStyle_25; }
	inline void set_fontStyle_25(int32_t value)
	{
		___fontStyle_25 = value;
	}

	inline static int32_t get_offset_of_italicAngle_26() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___italicAngle_26)); }
	inline int32_t get_italicAngle_26() const { return ___italicAngle_26; }
	inline int32_t* get_address_of_italicAngle_26() { return &___italicAngle_26; }
	inline void set_italicAngle_26(int32_t value)
	{
		___italicAngle_26 = value;
	}

	inline static int32_t get_offset_of_fontScale_27() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontScale_27)); }
	inline float get_fontScale_27() const { return ___fontScale_27; }
	inline float* get_address_of_fontScale_27() { return &___fontScale_27; }
	inline void set_fontScale_27(float value)
	{
		___fontScale_27 = value;
	}

	inline static int32_t get_offset_of_fontScaleMultiplier_28() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontScaleMultiplier_28)); }
	inline float get_fontScaleMultiplier_28() const { return ___fontScaleMultiplier_28; }
	inline float* get_address_of_fontScaleMultiplier_28() { return &___fontScaleMultiplier_28; }
	inline void set_fontScaleMultiplier_28(float value)
	{
		___fontScaleMultiplier_28 = value;
	}

	inline static int32_t get_offset_of_currentFontSize_29() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentFontSize_29)); }
	inline float get_currentFontSize_29() const { return ___currentFontSize_29; }
	inline float* get_address_of_currentFontSize_29() { return &___currentFontSize_29; }
	inline void set_currentFontSize_29(float value)
	{
		___currentFontSize_29 = value;
	}

	inline static int32_t get_offset_of_baselineOffset_30() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___baselineOffset_30)); }
	inline float get_baselineOffset_30() const { return ___baselineOffset_30; }
	inline float* get_address_of_baselineOffset_30() { return &___baselineOffset_30; }
	inline void set_baselineOffset_30(float value)
	{
		___baselineOffset_30 = value;
	}

	inline static int32_t get_offset_of_lineOffset_31() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineOffset_31)); }
	inline float get_lineOffset_31() const { return ___lineOffset_31; }
	inline float* get_address_of_lineOffset_31() { return &___lineOffset_31; }
	inline void set_lineOffset_31(float value)
	{
		___lineOffset_31 = value;
	}

	inline static int32_t get_offset_of_isDrivenLineSpacing_32() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___isDrivenLineSpacing_32)); }
	inline bool get_isDrivenLineSpacing_32() const { return ___isDrivenLineSpacing_32; }
	inline bool* get_address_of_isDrivenLineSpacing_32() { return &___isDrivenLineSpacing_32; }
	inline void set_isDrivenLineSpacing_32(bool value)
	{
		___isDrivenLineSpacing_32 = value;
	}

	inline static int32_t get_offset_of_glyphHorizontalAdvanceAdjustment_33() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___glyphHorizontalAdvanceAdjustment_33)); }
	inline float get_glyphHorizontalAdvanceAdjustment_33() const { return ___glyphHorizontalAdvanceAdjustment_33; }
	inline float* get_address_of_glyphHorizontalAdvanceAdjustment_33() { return &___glyphHorizontalAdvanceAdjustment_33; }
	inline void set_glyphHorizontalAdvanceAdjustment_33(float value)
	{
		___glyphHorizontalAdvanceAdjustment_33 = value;
	}

	inline static int32_t get_offset_of_cSpace_34() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___cSpace_34)); }
	inline float get_cSpace_34() const { return ___cSpace_34; }
	inline float* get_address_of_cSpace_34() { return &___cSpace_34; }
	inline void set_cSpace_34(float value)
	{
		___cSpace_34 = value;
	}

	inline static int32_t get_offset_of_mSpace_35() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___mSpace_35)); }
	inline float get_mSpace_35() const { return ___mSpace_35; }
	inline float* get_address_of_mSpace_35() { return &___mSpace_35; }
	inline void set_mSpace_35(float value)
	{
		___mSpace_35 = value;
	}

	inline static int32_t get_offset_of_textInfo_36() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___textInfo_36)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_textInfo_36() const { return ___textInfo_36; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_textInfo_36() { return &___textInfo_36; }
	inline void set_textInfo_36(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___textInfo_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_36), (void*)value);
	}

	inline static int32_t get_offset_of_lineInfo_37() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineInfo_37)); }
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  get_lineInfo_37() const { return ___lineInfo_37; }
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 * get_address_of_lineInfo_37() { return &___lineInfo_37; }
	inline void set_lineInfo_37(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  value)
	{
		___lineInfo_37 = value;
	}

	inline static int32_t get_offset_of_vertexColor_38() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___vertexColor_38)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_vertexColor_38() const { return ___vertexColor_38; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_vertexColor_38() { return &___vertexColor_38; }
	inline void set_vertexColor_38(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___vertexColor_38 = value;
	}

	inline static int32_t get_offset_of_underlineColor_39() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___underlineColor_39)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_underlineColor_39() const { return ___underlineColor_39; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_underlineColor_39() { return &___underlineColor_39; }
	inline void set_underlineColor_39(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___underlineColor_39 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_40() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___strikethroughColor_40)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_strikethroughColor_40() const { return ___strikethroughColor_40; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_strikethroughColor_40() { return &___strikethroughColor_40; }
	inline void set_strikethroughColor_40(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___strikethroughColor_40 = value;
	}

	inline static int32_t get_offset_of_highlightColor_41() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightColor_41)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_highlightColor_41() const { return ___highlightColor_41; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_highlightColor_41() { return &___highlightColor_41; }
	inline void set_highlightColor_41(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___highlightColor_41 = value;
	}

	inline static int32_t get_offset_of_basicStyleStack_42() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___basicStyleStack_42)); }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  get_basicStyleStack_42() const { return ___basicStyleStack_42; }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 * get_address_of_basicStyleStack_42() { return &___basicStyleStack_42; }
	inline void set_basicStyleStack_42(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  value)
	{
		___basicStyleStack_42 = value;
	}

	inline static int32_t get_offset_of_italicAngleStack_43() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___italicAngleStack_43)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_italicAngleStack_43() const { return ___italicAngleStack_43; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_italicAngleStack_43() { return &___italicAngleStack_43; }
	inline void set_italicAngleStack_43(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___italicAngleStack_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___italicAngleStack_43))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorStack_44() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___colorStack_44)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_colorStack_44() const { return ___colorStack_44; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_colorStack_44() { return &___colorStack_44; }
	inline void set_colorStack_44(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___colorStack_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorStack_44))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_underlineColorStack_45() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___underlineColorStack_45)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_underlineColorStack_45() const { return ___underlineColorStack_45; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_underlineColorStack_45() { return &___underlineColorStack_45; }
	inline void set_underlineColorStack_45(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___underlineColorStack_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___underlineColorStack_45))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_strikethroughColorStack_46() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___strikethroughColorStack_46)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_strikethroughColorStack_46() const { return ___strikethroughColorStack_46; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_strikethroughColorStack_46() { return &___strikethroughColorStack_46; }
	inline void set_strikethroughColorStack_46(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___strikethroughColorStack_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightColorStack_47() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightColorStack_47)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_highlightColorStack_47() const { return ___highlightColorStack_47; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_highlightColorStack_47() { return &___highlightColorStack_47; }
	inline void set_highlightColorStack_47(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___highlightColorStack_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightColorStack_47))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightStateStack_48() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightStateStack_48)); }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  get_highlightStateStack_48() const { return ___highlightStateStack_48; }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E * get_address_of_highlightStateStack_48() { return &___highlightStateStack_48; }
	inline void set_highlightStateStack_48(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  value)
	{
		___highlightStateStack_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightStateStack_48))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorGradientStack_49() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___colorGradientStack_49)); }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  get_colorGradientStack_49() const { return ___colorGradientStack_49; }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 * get_address_of_colorGradientStack_49() { return &___colorGradientStack_49; }
	inline void set_colorGradientStack_49(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  value)
	{
		___colorGradientStack_49 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sizeStack_50() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___sizeStack_50)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_sizeStack_50() const { return ___sizeStack_50; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_sizeStack_50() { return &___sizeStack_50; }
	inline void set_sizeStack_50(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___sizeStack_50 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___sizeStack_50))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indentStack_51() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___indentStack_51)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_indentStack_51() const { return ___indentStack_51; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_indentStack_51() { return &___indentStack_51; }
	inline void set_indentStack_51(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___indentStack_51 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indentStack_51))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_fontWeightStack_52() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontWeightStack_52)); }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  get_fontWeightStack_52() const { return ___fontWeightStack_52; }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 * get_address_of_fontWeightStack_52() { return &___fontWeightStack_52; }
	inline void set_fontWeightStack_52(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  value)
	{
		___fontWeightStack_52 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___fontWeightStack_52))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_styleStack_53() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___styleStack_53)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_styleStack_53() const { return ___styleStack_53; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_styleStack_53() { return &___styleStack_53; }
	inline void set_styleStack_53(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___styleStack_53 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___styleStack_53))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_baselineStack_54() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___baselineStack_54)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_baselineStack_54() const { return ___baselineStack_54; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_baselineStack_54() { return &___baselineStack_54; }
	inline void set_baselineStack_54(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___baselineStack_54 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___baselineStack_54))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_actionStack_55() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___actionStack_55)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_actionStack_55() const { return ___actionStack_55; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_actionStack_55() { return &___actionStack_55; }
	inline void set_actionStack_55(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___actionStack_55 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___actionStack_55))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_materialReferenceStack_56() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___materialReferenceStack_56)); }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  get_materialReferenceStack_56() const { return ___materialReferenceStack_56; }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 * get_address_of_materialReferenceStack_56() { return &___materialReferenceStack_56; }
	inline void set_materialReferenceStack_56(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  value)
	{
		___materialReferenceStack_56 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_lineJustificationStack_57() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineJustificationStack_57)); }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  get_lineJustificationStack_57() const { return ___lineJustificationStack_57; }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B * get_address_of_lineJustificationStack_57() { return &___lineJustificationStack_57; }
	inline void set_lineJustificationStack_57(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  value)
	{
		___lineJustificationStack_57 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_spriteAnimationID_58() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___spriteAnimationID_58)); }
	inline int32_t get_spriteAnimationID_58() const { return ___spriteAnimationID_58; }
	inline int32_t* get_address_of_spriteAnimationID_58() { return &___spriteAnimationID_58; }
	inline void set_spriteAnimationID_58(int32_t value)
	{
		___spriteAnimationID_58 = value;
	}

	inline static int32_t get_offset_of_currentFontAsset_59() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentFontAsset_59)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_currentFontAsset_59() const { return ___currentFontAsset_59; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_currentFontAsset_59() { return &___currentFontAsset_59; }
	inline void set_currentFontAsset_59(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___currentFontAsset_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFontAsset_59), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpriteAsset_60() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentSpriteAsset_60)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_currentSpriteAsset_60() const { return ___currentSpriteAsset_60; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_currentSpriteAsset_60() { return &___currentSpriteAsset_60; }
	inline void set_currentSpriteAsset_60(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___currentSpriteAsset_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSpriteAsset_60), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterial_61() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentMaterial_61)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_currentMaterial_61() const { return ___currentMaterial_61; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_currentMaterial_61() { return &___currentMaterial_61; }
	inline void set_currentMaterial_61(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___currentMaterial_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentMaterial_61), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterialIndex_62() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentMaterialIndex_62)); }
	inline int32_t get_currentMaterialIndex_62() const { return ___currentMaterialIndex_62; }
	inline int32_t* get_address_of_currentMaterialIndex_62() { return &___currentMaterialIndex_62; }
	inline void set_currentMaterialIndex_62(int32_t value)
	{
		___currentMaterialIndex_62 = value;
	}

	inline static int32_t get_offset_of_meshExtents_63() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___meshExtents_63)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_meshExtents_63() const { return ___meshExtents_63; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_meshExtents_63() { return &___meshExtents_63; }
	inline void set_meshExtents_63(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___meshExtents_63 = value;
	}

	inline static int32_t get_offset_of_tagNoParsing_64() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___tagNoParsing_64)); }
	inline bool get_tagNoParsing_64() const { return ___tagNoParsing_64; }
	inline bool* get_address_of_tagNoParsing_64() { return &___tagNoParsing_64; }
	inline void set_tagNoParsing_64(bool value)
	{
		___tagNoParsing_64 = value;
	}

	inline static int32_t get_offset_of_isNonBreakingSpace_65() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___isNonBreakingSpace_65)); }
	inline bool get_isNonBreakingSpace_65() const { return ___isNonBreakingSpace_65; }
	inline bool* get_address_of_isNonBreakingSpace_65() { return &___isNonBreakingSpace_65; }
	inline void set_isNonBreakingSpace_65(bool value)
	{
		___isNonBreakingSpace_65 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScale_27;
	float ___fontScaleMultiplier_28;
	float ___currentFontSize_29;
	float ___baselineOffset_30;
	float ___lineOffset_31;
	int32_t ___isDrivenLineSpacing_32;
	float ___glyphHorizontalAdvanceAdjustment_33;
	float ___cSpace_34;
	float ___mSpace_35;
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_36;
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_37;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_38;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_39;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_40;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_41;
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_42;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_43;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_44;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_45;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_46;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_47;
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_48;
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_49;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_50;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_51;
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_52;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_53;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_54;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_55;
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_56;
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_57;
	int32_t ___spriteAnimationID_58;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_59;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_60;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_61;
	int32_t ___currentMaterialIndex_62;
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_63;
	int32_t ___tagNoParsing_64;
	int32_t ___isNonBreakingSpace_65;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScale_27;
	float ___fontScaleMultiplier_28;
	float ___currentFontSize_29;
	float ___baselineOffset_30;
	float ___lineOffset_31;
	int32_t ___isDrivenLineSpacing_32;
	float ___glyphHorizontalAdvanceAdjustment_33;
	float ___cSpace_34;
	float ___mSpace_35;
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_36;
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_37;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_38;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_39;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_40;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_41;
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_42;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_43;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_44;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_45;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_46;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_47;
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_48;
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_49;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_50;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_51;
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_52;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_53;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_54;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_55;
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_56;
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_57;
	int32_t ___spriteAnimationID_58;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_59;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_60;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_61;
	int32_t ___currentMaterialIndex_62;
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_63;
	int32_t ___tagNoParsing_64;
	int32_t ___isNonBreakingSpace_65;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct  TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___itemStack_0)); }
	inline WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* get_itemStack_0() const { return ___itemStack_0; }
	inline WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_DefaultItem_2)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// TMPro.Examples.TeleType
struct  TeleType_t92B5ED4FE818F912A562F085CE035F6B42834934  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String TMPro.Examples.TeleType::label01
	String_t* ___label01_4;
	// System.String TMPro.Examples.TeleType::label02
	String_t* ___label02_5;
	// TMPro.TMP_Text TMPro.Examples.TeleType::m_textMeshPro
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_textMeshPro_6;

public:
	inline static int32_t get_offset_of_label01_4() { return static_cast<int32_t>(offsetof(TeleType_t92B5ED4FE818F912A562F085CE035F6B42834934, ___label01_4)); }
	inline String_t* get_label01_4() const { return ___label01_4; }
	inline String_t** get_address_of_label01_4() { return &___label01_4; }
	inline void set_label01_4(String_t* value)
	{
		___label01_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___label01_4), (void*)value);
	}

	inline static int32_t get_offset_of_label02_5() { return static_cast<int32_t>(offsetof(TeleType_t92B5ED4FE818F912A562F085CE035F6B42834934, ___label02_5)); }
	inline String_t* get_label02_5() const { return ___label02_5; }
	inline String_t** get_address_of_label02_5() { return &___label02_5; }
	inline void set_label02_5(String_t* value)
	{
		___label02_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___label02_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_textMeshPro_6() { return static_cast<int32_t>(offsetof(TeleType_t92B5ED4FE818F912A562F085CE035F6B42834934, ___m_textMeshPro_6)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_textMeshPro_6() const { return ___m_textMeshPro_6; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_textMeshPro_6() { return &___m_textMeshPro_6; }
	inline void set_m_textMeshPro_6(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_textMeshPro_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textMeshPro_6), (void*)value);
	}
};


// TMPro.Examples.TextConsoleSimulator
struct  TextConsoleSimulator_t82904A7668D46B20E576B30E4CE367C0B66C5289  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TMPro.TMP_Text TMPro.Examples.TextConsoleSimulator::m_TextComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_TextComponent_4;
	// System.Boolean TMPro.Examples.TextConsoleSimulator::hasTextChanged
	bool ___hasTextChanged_5;

public:
	inline static int32_t get_offset_of_m_TextComponent_4() { return static_cast<int32_t>(offsetof(TextConsoleSimulator_t82904A7668D46B20E576B30E4CE367C0B66C5289, ___m_TextComponent_4)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_TextComponent_4() const { return ___m_TextComponent_4; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_TextComponent_4() { return &___m_TextComponent_4; }
	inline void set_m_TextComponent_4(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_TextComponent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasTextChanged_5() { return static_cast<int32_t>(offsetof(TextConsoleSimulator_t82904A7668D46B20E576B30E4CE367C0B66C5289, ___hasTextChanged_5)); }
	inline bool get_hasTextChanged_5() const { return ___hasTextChanged_5; }
	inline bool* get_address_of_hasTextChanged_5() { return &___hasTextChanged_5; }
	inline void set_hasTextChanged_5(bool value)
	{
		___hasTextChanged_5 = value;
	}
};


// TMPro.Examples.TextMeshProFloatingText
struct  TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Font TMPro.Examples.TextMeshProFloatingText::TheFont
	Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___TheFont_4;
	// UnityEngine.GameObject TMPro.Examples.TextMeshProFloatingText::m_floatingText
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_floatingText_5;
	// TMPro.TextMeshPro TMPro.Examples.TextMeshProFloatingText::m_textMeshPro
	TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * ___m_textMeshPro_6;
	// UnityEngine.TextMesh TMPro.Examples.TextMeshProFloatingText::m_textMesh
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___m_textMesh_7;
	// UnityEngine.Transform TMPro.Examples.TextMeshProFloatingText::m_transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_transform_8;
	// UnityEngine.Transform TMPro.Examples.TextMeshProFloatingText::m_floatingText_Transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_floatingText_Transform_9;
	// UnityEngine.Transform TMPro.Examples.TextMeshProFloatingText::m_cameraTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_cameraTransform_10;
	// UnityEngine.Vector3 TMPro.Examples.TextMeshProFloatingText::lastPOS
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lastPOS_11;
	// UnityEngine.Quaternion TMPro.Examples.TextMeshProFloatingText::lastRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lastRotation_12;
	// System.Int32 TMPro.Examples.TextMeshProFloatingText::SpawnType
	int32_t ___SpawnType_13;

public:
	inline static int32_t get_offset_of_TheFont_4() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200, ___TheFont_4)); }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * get_TheFont_4() const { return ___TheFont_4; }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 ** get_address_of_TheFont_4() { return &___TheFont_4; }
	inline void set_TheFont_4(Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * value)
	{
		___TheFont_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TheFont_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_floatingText_5() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200, ___m_floatingText_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_floatingText_5() const { return ___m_floatingText_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_floatingText_5() { return &___m_floatingText_5; }
	inline void set_m_floatingText_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_floatingText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_floatingText_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_textMeshPro_6() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200, ___m_textMeshPro_6)); }
	inline TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * get_m_textMeshPro_6() const { return ___m_textMeshPro_6; }
	inline TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 ** get_address_of_m_textMeshPro_6() { return &___m_textMeshPro_6; }
	inline void set_m_textMeshPro_6(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * value)
	{
		___m_textMeshPro_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textMeshPro_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_textMesh_7() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200, ___m_textMesh_7)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_m_textMesh_7() const { return ___m_textMesh_7; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_m_textMesh_7() { return &___m_textMesh_7; }
	inline void set_m_textMesh_7(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___m_textMesh_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textMesh_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_transform_8() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200, ___m_transform_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_transform_8() const { return ___m_transform_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_transform_8() { return &___m_transform_8; }
	inline void set_m_transform_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_transform_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_transform_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_floatingText_Transform_9() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200, ___m_floatingText_Transform_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_floatingText_Transform_9() const { return ___m_floatingText_Transform_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_floatingText_Transform_9() { return &___m_floatingText_Transform_9; }
	inline void set_m_floatingText_Transform_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_floatingText_Transform_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_floatingText_Transform_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_cameraTransform_10() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200, ___m_cameraTransform_10)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_cameraTransform_10() const { return ___m_cameraTransform_10; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_cameraTransform_10() { return &___m_cameraTransform_10; }
	inline void set_m_cameraTransform_10(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_cameraTransform_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cameraTransform_10), (void*)value);
	}

	inline static int32_t get_offset_of_lastPOS_11() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200, ___lastPOS_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_lastPOS_11() const { return ___lastPOS_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_lastPOS_11() { return &___lastPOS_11; }
	inline void set_lastPOS_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___lastPOS_11 = value;
	}

	inline static int32_t get_offset_of_lastRotation_12() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200, ___lastRotation_12)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_lastRotation_12() const { return ___lastRotation_12; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_lastRotation_12() { return &___lastRotation_12; }
	inline void set_lastRotation_12(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___lastRotation_12 = value;
	}

	inline static int32_t get_offset_of_SpawnType_13() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200, ___SpawnType_13)); }
	inline int32_t get_SpawnType_13() const { return ___SpawnType_13; }
	inline int32_t* get_address_of_SpawnType_13() { return &___SpawnType_13; }
	inline void set_SpawnType_13(int32_t value)
	{
		___SpawnType_13 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// TMPro.Examples.VertexColorCycler
struct  VertexColorCycler_t37E80E87D8EAD0D7757CDA45BD5D3AA82FD28374  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TMPro.TMP_Text TMPro.Examples.VertexColorCycler::m_TextComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_TextComponent_4;

public:
	inline static int32_t get_offset_of_m_TextComponent_4() { return static_cast<int32_t>(offsetof(VertexColorCycler_t37E80E87D8EAD0D7757CDA45BD5D3AA82FD28374, ___m_TextComponent_4)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_TextComponent_4() const { return ___m_TextComponent_4; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_TextComponent_4() { return &___m_TextComponent_4; }
	inline void set_m_TextComponent_4(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_TextComponent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_4), (void*)value);
	}
};


// TMPro.Examples.VertexJitter
struct  VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single TMPro.Examples.VertexJitter::AngleMultiplier
	float ___AngleMultiplier_4;
	// System.Single TMPro.Examples.VertexJitter::SpeedMultiplier
	float ___SpeedMultiplier_5;
	// System.Single TMPro.Examples.VertexJitter::CurveScale
	float ___CurveScale_6;
	// TMPro.TMP_Text TMPro.Examples.VertexJitter::m_TextComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_TextComponent_7;
	// System.Boolean TMPro.Examples.VertexJitter::hasTextChanged
	bool ___hasTextChanged_8;

public:
	inline static int32_t get_offset_of_AngleMultiplier_4() { return static_cast<int32_t>(offsetof(VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A, ___AngleMultiplier_4)); }
	inline float get_AngleMultiplier_4() const { return ___AngleMultiplier_4; }
	inline float* get_address_of_AngleMultiplier_4() { return &___AngleMultiplier_4; }
	inline void set_AngleMultiplier_4(float value)
	{
		___AngleMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_SpeedMultiplier_5() { return static_cast<int32_t>(offsetof(VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A, ___SpeedMultiplier_5)); }
	inline float get_SpeedMultiplier_5() const { return ___SpeedMultiplier_5; }
	inline float* get_address_of_SpeedMultiplier_5() { return &___SpeedMultiplier_5; }
	inline void set_SpeedMultiplier_5(float value)
	{
		___SpeedMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_CurveScale_6() { return static_cast<int32_t>(offsetof(VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A, ___CurveScale_6)); }
	inline float get_CurveScale_6() const { return ___CurveScale_6; }
	inline float* get_address_of_CurveScale_6() { return &___CurveScale_6; }
	inline void set_CurveScale_6(float value)
	{
		___CurveScale_6 = value;
	}

	inline static int32_t get_offset_of_m_TextComponent_7() { return static_cast<int32_t>(offsetof(VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A, ___m_TextComponent_7)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_TextComponent_7() const { return ___m_TextComponent_7; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_TextComponent_7() { return &___m_TextComponent_7; }
	inline void set_m_TextComponent_7(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_TextComponent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_7), (void*)value);
	}

	inline static int32_t get_offset_of_hasTextChanged_8() { return static_cast<int32_t>(offsetof(VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A, ___hasTextChanged_8)); }
	inline bool get_hasTextChanged_8() const { return ___hasTextChanged_8; }
	inline bool* get_address_of_hasTextChanged_8() { return &___hasTextChanged_8; }
	inline void set_hasTextChanged_8(bool value)
	{
		___hasTextChanged_8 = value;
	}
};


// TMPro.Examples.VertexShakeA
struct  VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single TMPro.Examples.VertexShakeA::AngleMultiplier
	float ___AngleMultiplier_4;
	// System.Single TMPro.Examples.VertexShakeA::SpeedMultiplier
	float ___SpeedMultiplier_5;
	// System.Single TMPro.Examples.VertexShakeA::ScaleMultiplier
	float ___ScaleMultiplier_6;
	// System.Single TMPro.Examples.VertexShakeA::RotationMultiplier
	float ___RotationMultiplier_7;
	// TMPro.TMP_Text TMPro.Examples.VertexShakeA::m_TextComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_TextComponent_8;
	// System.Boolean TMPro.Examples.VertexShakeA::hasTextChanged
	bool ___hasTextChanged_9;

public:
	inline static int32_t get_offset_of_AngleMultiplier_4() { return static_cast<int32_t>(offsetof(VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A, ___AngleMultiplier_4)); }
	inline float get_AngleMultiplier_4() const { return ___AngleMultiplier_4; }
	inline float* get_address_of_AngleMultiplier_4() { return &___AngleMultiplier_4; }
	inline void set_AngleMultiplier_4(float value)
	{
		___AngleMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_SpeedMultiplier_5() { return static_cast<int32_t>(offsetof(VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A, ___SpeedMultiplier_5)); }
	inline float get_SpeedMultiplier_5() const { return ___SpeedMultiplier_5; }
	inline float* get_address_of_SpeedMultiplier_5() { return &___SpeedMultiplier_5; }
	inline void set_SpeedMultiplier_5(float value)
	{
		___SpeedMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_ScaleMultiplier_6() { return static_cast<int32_t>(offsetof(VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A, ___ScaleMultiplier_6)); }
	inline float get_ScaleMultiplier_6() const { return ___ScaleMultiplier_6; }
	inline float* get_address_of_ScaleMultiplier_6() { return &___ScaleMultiplier_6; }
	inline void set_ScaleMultiplier_6(float value)
	{
		___ScaleMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_RotationMultiplier_7() { return static_cast<int32_t>(offsetof(VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A, ___RotationMultiplier_7)); }
	inline float get_RotationMultiplier_7() const { return ___RotationMultiplier_7; }
	inline float* get_address_of_RotationMultiplier_7() { return &___RotationMultiplier_7; }
	inline void set_RotationMultiplier_7(float value)
	{
		___RotationMultiplier_7 = value;
	}

	inline static int32_t get_offset_of_m_TextComponent_8() { return static_cast<int32_t>(offsetof(VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A, ___m_TextComponent_8)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_TextComponent_8() const { return ___m_TextComponent_8; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_TextComponent_8() { return &___m_TextComponent_8; }
	inline void set_m_TextComponent_8(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_TextComponent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_8), (void*)value);
	}

	inline static int32_t get_offset_of_hasTextChanged_9() { return static_cast<int32_t>(offsetof(VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A, ___hasTextChanged_9)); }
	inline bool get_hasTextChanged_9() const { return ___hasTextChanged_9; }
	inline bool* get_address_of_hasTextChanged_9() { return &___hasTextChanged_9; }
	inline void set_hasTextChanged_9(bool value)
	{
		___hasTextChanged_9 = value;
	}
};


// TMPro.Examples.VertexShakeB
struct  VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single TMPro.Examples.VertexShakeB::AngleMultiplier
	float ___AngleMultiplier_4;
	// System.Single TMPro.Examples.VertexShakeB::SpeedMultiplier
	float ___SpeedMultiplier_5;
	// System.Single TMPro.Examples.VertexShakeB::CurveScale
	float ___CurveScale_6;
	// TMPro.TMP_Text TMPro.Examples.VertexShakeB::m_TextComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_TextComponent_7;
	// System.Boolean TMPro.Examples.VertexShakeB::hasTextChanged
	bool ___hasTextChanged_8;

public:
	inline static int32_t get_offset_of_AngleMultiplier_4() { return static_cast<int32_t>(offsetof(VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9, ___AngleMultiplier_4)); }
	inline float get_AngleMultiplier_4() const { return ___AngleMultiplier_4; }
	inline float* get_address_of_AngleMultiplier_4() { return &___AngleMultiplier_4; }
	inline void set_AngleMultiplier_4(float value)
	{
		___AngleMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_SpeedMultiplier_5() { return static_cast<int32_t>(offsetof(VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9, ___SpeedMultiplier_5)); }
	inline float get_SpeedMultiplier_5() const { return ___SpeedMultiplier_5; }
	inline float* get_address_of_SpeedMultiplier_5() { return &___SpeedMultiplier_5; }
	inline void set_SpeedMultiplier_5(float value)
	{
		___SpeedMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_CurveScale_6() { return static_cast<int32_t>(offsetof(VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9, ___CurveScale_6)); }
	inline float get_CurveScale_6() const { return ___CurveScale_6; }
	inline float* get_address_of_CurveScale_6() { return &___CurveScale_6; }
	inline void set_CurveScale_6(float value)
	{
		___CurveScale_6 = value;
	}

	inline static int32_t get_offset_of_m_TextComponent_7() { return static_cast<int32_t>(offsetof(VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9, ___m_TextComponent_7)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_TextComponent_7() const { return ___m_TextComponent_7; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_TextComponent_7() { return &___m_TextComponent_7; }
	inline void set_m_TextComponent_7(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_TextComponent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_7), (void*)value);
	}

	inline static int32_t get_offset_of_hasTextChanged_8() { return static_cast<int32_t>(offsetof(VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9, ___hasTextChanged_8)); }
	inline bool get_hasTextChanged_8() const { return ___hasTextChanged_8; }
	inline bool* get_address_of_hasTextChanged_8() { return &___hasTextChanged_8; }
	inline void set_hasTextChanged_8(bool value)
	{
		___hasTextChanged_8 = value;
	}
};


// TMPro.Examples.VertexZoom
struct  VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single TMPro.Examples.VertexZoom::AngleMultiplier
	float ___AngleMultiplier_4;
	// System.Single TMPro.Examples.VertexZoom::SpeedMultiplier
	float ___SpeedMultiplier_5;
	// System.Single TMPro.Examples.VertexZoom::CurveScale
	float ___CurveScale_6;
	// TMPro.TMP_Text TMPro.Examples.VertexZoom::m_TextComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_TextComponent_7;
	// System.Boolean TMPro.Examples.VertexZoom::hasTextChanged
	bool ___hasTextChanged_8;

public:
	inline static int32_t get_offset_of_AngleMultiplier_4() { return static_cast<int32_t>(offsetof(VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163, ___AngleMultiplier_4)); }
	inline float get_AngleMultiplier_4() const { return ___AngleMultiplier_4; }
	inline float* get_address_of_AngleMultiplier_4() { return &___AngleMultiplier_4; }
	inline void set_AngleMultiplier_4(float value)
	{
		___AngleMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_SpeedMultiplier_5() { return static_cast<int32_t>(offsetof(VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163, ___SpeedMultiplier_5)); }
	inline float get_SpeedMultiplier_5() const { return ___SpeedMultiplier_5; }
	inline float* get_address_of_SpeedMultiplier_5() { return &___SpeedMultiplier_5; }
	inline void set_SpeedMultiplier_5(float value)
	{
		___SpeedMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_CurveScale_6() { return static_cast<int32_t>(offsetof(VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163, ___CurveScale_6)); }
	inline float get_CurveScale_6() const { return ___CurveScale_6; }
	inline float* get_address_of_CurveScale_6() { return &___CurveScale_6; }
	inline void set_CurveScale_6(float value)
	{
		___CurveScale_6 = value;
	}

	inline static int32_t get_offset_of_m_TextComponent_7() { return static_cast<int32_t>(offsetof(VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163, ___m_TextComponent_7)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_TextComponent_7() const { return ___m_TextComponent_7; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_TextComponent_7() { return &___m_TextComponent_7; }
	inline void set_m_TextComponent_7(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_TextComponent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_7), (void*)value);
	}

	inline static int32_t get_offset_of_hasTextChanged_8() { return static_cast<int32_t>(offsetof(VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163, ___hasTextChanged_8)); }
	inline bool get_hasTextChanged_8() const { return ___hasTextChanged_8; }
	inline bool* get_address_of_hasTextChanged_8() { return &___hasTextChanged_8; }
	inline void set_hasTextChanged_8(bool value)
	{
		___hasTextChanged_8 = value;
	}
};


// TMPro.Examples.WarpTextExample
struct  WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TMPro.TMP_Text TMPro.Examples.WarpTextExample::m_TextComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_TextComponent_4;
	// UnityEngine.AnimationCurve TMPro.Examples.WarpTextExample::VertexCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___VertexCurve_5;
	// System.Single TMPro.Examples.WarpTextExample::AngleMultiplier
	float ___AngleMultiplier_6;
	// System.Single TMPro.Examples.WarpTextExample::SpeedMultiplier
	float ___SpeedMultiplier_7;
	// System.Single TMPro.Examples.WarpTextExample::CurveScale
	float ___CurveScale_8;

public:
	inline static int32_t get_offset_of_m_TextComponent_4() { return static_cast<int32_t>(offsetof(WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96, ___m_TextComponent_4)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_TextComponent_4() const { return ___m_TextComponent_4; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_TextComponent_4() { return &___m_TextComponent_4; }
	inline void set_m_TextComponent_4(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_TextComponent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_4), (void*)value);
	}

	inline static int32_t get_offset_of_VertexCurve_5() { return static_cast<int32_t>(offsetof(WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96, ___VertexCurve_5)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_VertexCurve_5() const { return ___VertexCurve_5; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_VertexCurve_5() { return &___VertexCurve_5; }
	inline void set_VertexCurve_5(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___VertexCurve_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VertexCurve_5), (void*)value);
	}

	inline static int32_t get_offset_of_AngleMultiplier_6() { return static_cast<int32_t>(offsetof(WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96, ___AngleMultiplier_6)); }
	inline float get_AngleMultiplier_6() const { return ___AngleMultiplier_6; }
	inline float* get_address_of_AngleMultiplier_6() { return &___AngleMultiplier_6; }
	inline void set_AngleMultiplier_6(float value)
	{
		___AngleMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_SpeedMultiplier_7() { return static_cast<int32_t>(offsetof(WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96, ___SpeedMultiplier_7)); }
	inline float get_SpeedMultiplier_7() const { return ___SpeedMultiplier_7; }
	inline float* get_address_of_SpeedMultiplier_7() { return &___SpeedMultiplier_7; }
	inline void set_SpeedMultiplier_7(float value)
	{
		___SpeedMultiplier_7 = value;
	}

	inline static int32_t get_offset_of_CurveScale_8() { return static_cast<int32_t>(offsetof(WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96, ___CurveScale_8)); }
	inline float get_CurveScale_8() const { return ___CurveScale_8; }
	inline float* get_address_of_CurveScale_8() { return &___CurveScale_8; }
	inline void set_CurveScale_8(float value)
	{
		___CurveScale_8 = value;
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// TMPro.TMP_Text
struct  TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_37;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_38;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___m_fontAsset_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___m_currentFontAsset_40;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_41;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_sharedMaterial_42;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_currentMaterial_43;
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* ___m_materialReferences_44;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___m_materialReferenceIndexLookup_45;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___m_materialReferenceStack_46;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_47;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___m_fontSharedMaterials_48;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_fontMaterial_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___m_fontMaterials_50;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_51;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_fontColor32_52;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_fontColor_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_underlineColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_strikethroughColor_56;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_57;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_58;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  ___m_fontColorGradient_59;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_fontColorGradientPreset_60;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_spriteAsset_61;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_62;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_63;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_spriteColor_64;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * ___m_StyleSheet_65;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * ___m_TextStyle_66;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_67;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_68;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_faceColor_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_outlineColor_70;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_71;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_72;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_73;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_74;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_sizeStack_75;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_77;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___m_FontWeightStack_78;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_79;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_80;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_81;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_83;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_84;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_86;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_88;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___m_fontStyleStack_89;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_90;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_91;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_92;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_93;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_94;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___m_lineJustificationStack_95;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_textContainerLocalCorners_96;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_97;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_98;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_99;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_100;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_102;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_103;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_104;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_105;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_106;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_107;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_108;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_109;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_110;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_111;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_112;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_113;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_114;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_115;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_linkedTextComponent_116;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___parentLinkedComponent_117;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_118;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_119;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_120;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_121;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_122;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_123;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_124;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_125;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_126;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_127;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_128;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_129;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_130;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_132;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_133;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_134;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_135;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_136;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_137;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_138;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_141;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_142;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_143;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_144;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_margin_145;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_146;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_147;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_148;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_149;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_150;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___m_textInfo_151;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_152;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_153;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_transform_154;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_rectTransform_155;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PreviousRectTransformSize_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PreviousPivotPosition_157;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_158;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_159;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_mesh_160;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_161;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * ___OnPreRenderText_164;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * ___m_spriteAnimator_165;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_166;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_167;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_168;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_169;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_170;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_171;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * ___m_LayoutElement_172;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_173;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_174;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_175;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_176;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_177;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_178;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_179;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_180;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_181;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_182;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_183;
	// System.Boolean TMPro.TMP_Text::m_isInputParsingRequired
	bool ___m_isInputParsingRequired_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScale
	float ___m_fontScale_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_attributeParameterValues_190;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_InternalParsingBuffer
	UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* ___m_InternalParsingBuffer_198;
	// System.Int32 TMPro.TMP_Text::m_InternalParsingBufferSize
	int32_t ___m_InternalParsingBufferSize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* ___m_internalCharacterInfo_200;
	// System.Char[] TMPro.TMP_Text::m_input_CharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_input_CharArray_201;
	// System.Int32 TMPro.TMP_Text::m_charArray_Length
	int32_t ___m_charArray_Length_202;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedWordWrapState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedLineState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedEllipsisState_206;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedLastValidState_207;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedSoftLineBreakState_208;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  ___m_EllipsisInsertionCandidateStack_209;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_210;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_213;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_214;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_215;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_216;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_217;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_218;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_219;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_220;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_221;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_222;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_223;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_224;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_225;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_226;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_227;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___m_meshExtents_228;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_htmlColor_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_colorStack_230;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_underlineColorStack_231;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_strikethroughColorStack_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___m_HighlightStateStack_233;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_colorGradientPreset_234;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___m_colorGradientStack_235;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_236;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_237;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* ___m_TextStyleStacks_239;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___m_ItalicAngleStack_241;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_242;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___m_actionStack_243;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_244;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_245;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_baselineOffsetStack_246;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_247;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_248;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___m_cached_TextElement_249;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  ___m_Ellipsis_250;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  ___m_Underline_251;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_defaultSpriteAsset_252;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_currentSpriteAsset_253;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_254;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_255;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_256;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* ___k_Power_258;

public:
	inline static int32_t get_offset_of_m_text_36() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_text_36)); }
	inline String_t* get_m_text_36() const { return ___m_text_36; }
	inline String_t** get_address_of_m_text_36() { return &___m_text_36; }
	inline void set_m_text_36(String_t* value)
	{
		___m_text_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_text_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextPreprocessor_37() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextPreprocessor_37)); }
	inline RuntimeObject* get_m_TextPreprocessor_37() const { return ___m_TextPreprocessor_37; }
	inline RuntimeObject** get_address_of_m_TextPreprocessor_37() { return &___m_TextPreprocessor_37; }
	inline void set_m_TextPreprocessor_37(RuntimeObject* value)
	{
		___m_TextPreprocessor_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextPreprocessor_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_isRightToLeft_38() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isRightToLeft_38)); }
	inline bool get_m_isRightToLeft_38() const { return ___m_isRightToLeft_38; }
	inline bool* get_address_of_m_isRightToLeft_38() { return &___m_isRightToLeft_38; }
	inline void set_m_isRightToLeft_38(bool value)
	{
		___m_isRightToLeft_38 = value;
	}

	inline static int32_t get_offset_of_m_fontAsset_39() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontAsset_39)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_m_fontAsset_39() const { return ___m_fontAsset_39; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_m_fontAsset_39() { return &___m_fontAsset_39; }
	inline void set_m_fontAsset_39(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___m_fontAsset_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontAsset_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentFontAsset_40() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentFontAsset_40)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_m_currentFontAsset_40() const { return ___m_currentFontAsset_40; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_m_currentFontAsset_40() { return &___m_currentFontAsset_40; }
	inline void set_m_currentFontAsset_40(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___m_currentFontAsset_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentFontAsset_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_isSDFShader_41() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isSDFShader_41)); }
	inline bool get_m_isSDFShader_41() const { return ___m_isSDFShader_41; }
	inline bool* get_address_of_m_isSDFShader_41() { return &___m_isSDFShader_41; }
	inline void set_m_isSDFShader_41(bool value)
	{
		___m_isSDFShader_41 = value;
	}

	inline static int32_t get_offset_of_m_sharedMaterial_42() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_sharedMaterial_42)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_sharedMaterial_42() const { return ___m_sharedMaterial_42; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_sharedMaterial_42() { return &___m_sharedMaterial_42; }
	inline void set_m_sharedMaterial_42(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_sharedMaterial_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sharedMaterial_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterial_43() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentMaterial_43)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_currentMaterial_43() const { return ___m_currentMaterial_43; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_currentMaterial_43() { return &___m_currentMaterial_43; }
	inline void set_m_currentMaterial_43(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_currentMaterial_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentMaterial_43), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferences_44() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_materialReferences_44)); }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* get_m_materialReferences_44() const { return ___m_materialReferences_44; }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD** get_address_of_m_materialReferences_44() { return &___m_materialReferences_44; }
	inline void set_m_materialReferences_44(MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* value)
	{
		___m_materialReferences_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferences_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceIndexLookup_45() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_materialReferenceIndexLookup_45)); }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * get_m_materialReferenceIndexLookup_45() const { return ___m_materialReferenceIndexLookup_45; }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 ** get_address_of_m_materialReferenceIndexLookup_45() { return &___m_materialReferenceIndexLookup_45; }
	inline void set_m_materialReferenceIndexLookup_45(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * value)
	{
		___m_materialReferenceIndexLookup_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferenceIndexLookup_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceStack_46() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_materialReferenceStack_46)); }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  get_m_materialReferenceStack_46() const { return ___m_materialReferenceStack_46; }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 * get_address_of_m_materialReferenceStack_46() { return &___m_materialReferenceStack_46; }
	inline void set_m_materialReferenceStack_46(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  value)
	{
		___m_materialReferenceStack_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_materialReferenceStack_46))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_46))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_46))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_46))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_46))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_currentMaterialIndex_47() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentMaterialIndex_47)); }
	inline int32_t get_m_currentMaterialIndex_47() const { return ___m_currentMaterialIndex_47; }
	inline int32_t* get_address_of_m_currentMaterialIndex_47() { return &___m_currentMaterialIndex_47; }
	inline void set_m_currentMaterialIndex_47(int32_t value)
	{
		___m_currentMaterialIndex_47 = value;
	}

	inline static int32_t get_offset_of_m_fontSharedMaterials_48() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSharedMaterials_48)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_m_fontSharedMaterials_48() const { return ___m_fontSharedMaterials_48; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_m_fontSharedMaterials_48() { return &___m_fontSharedMaterials_48; }
	inline void set_m_fontSharedMaterials_48(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___m_fontSharedMaterials_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontSharedMaterials_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterial_49() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontMaterial_49)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_fontMaterial_49() const { return ___m_fontMaterial_49; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_fontMaterial_49() { return &___m_fontMaterial_49; }
	inline void set_m_fontMaterial_49(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_fontMaterial_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterial_49), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterials_50() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontMaterials_50)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_m_fontMaterials_50() const { return ___m_fontMaterials_50; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_m_fontMaterials_50() { return &___m_fontMaterials_50; }
	inline void set_m_fontMaterials_50(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___m_fontMaterials_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterials_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_isMaterialDirty_51() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isMaterialDirty_51)); }
	inline bool get_m_isMaterialDirty_51() const { return ___m_isMaterialDirty_51; }
	inline bool* get_address_of_m_isMaterialDirty_51() { return &___m_isMaterialDirty_51; }
	inline void set_m_isMaterialDirty_51(bool value)
	{
		___m_isMaterialDirty_51 = value;
	}

	inline static int32_t get_offset_of_m_fontColor32_52() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColor32_52)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_fontColor32_52() const { return ___m_fontColor32_52; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_fontColor32_52() { return &___m_fontColor32_52; }
	inline void set_m_fontColor32_52(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_fontColor32_52 = value;
	}

	inline static int32_t get_offset_of_m_fontColor_53() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColor_53)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_fontColor_53() const { return ___m_fontColor_53; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_fontColor_53() { return &___m_fontColor_53; }
	inline void set_m_fontColor_53(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_fontColor_53 = value;
	}

	inline static int32_t get_offset_of_m_underlineColor_55() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_underlineColor_55)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_underlineColor_55() const { return ___m_underlineColor_55; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_underlineColor_55() { return &___m_underlineColor_55; }
	inline void set_m_underlineColor_55(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_underlineColor_55 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColor_56() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_strikethroughColor_56)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_strikethroughColor_56() const { return ___m_strikethroughColor_56; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_strikethroughColor_56() { return &___m_strikethroughColor_56; }
	inline void set_m_strikethroughColor_56(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_strikethroughColor_56 = value;
	}

	inline static int32_t get_offset_of_m_enableVertexGradient_57() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableVertexGradient_57)); }
	inline bool get_m_enableVertexGradient_57() const { return ___m_enableVertexGradient_57; }
	inline bool* get_address_of_m_enableVertexGradient_57() { return &___m_enableVertexGradient_57; }
	inline void set_m_enableVertexGradient_57(bool value)
	{
		___m_enableVertexGradient_57 = value;
	}

	inline static int32_t get_offset_of_m_colorMode_58() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorMode_58)); }
	inline int32_t get_m_colorMode_58() const { return ___m_colorMode_58; }
	inline int32_t* get_address_of_m_colorMode_58() { return &___m_colorMode_58; }
	inline void set_m_colorMode_58(int32_t value)
	{
		___m_colorMode_58 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradient_59() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColorGradient_59)); }
	inline VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  get_m_fontColorGradient_59() const { return ___m_fontColorGradient_59; }
	inline VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D * get_address_of_m_fontColorGradient_59() { return &___m_fontColorGradient_59; }
	inline void set_m_fontColorGradient_59(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  value)
	{
		___m_fontColorGradient_59 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradientPreset_60() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColorGradientPreset_60)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_fontColorGradientPreset_60() const { return ___m_fontColorGradientPreset_60; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_fontColorGradientPreset_60() { return &___m_fontColorGradientPreset_60; }
	inline void set_m_fontColorGradientPreset_60(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_fontColorGradientPreset_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontColorGradientPreset_60), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAsset_61() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAsset_61)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_spriteAsset_61() const { return ___m_spriteAsset_61; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_spriteAsset_61() { return &___m_spriteAsset_61; }
	inline void set_m_spriteAsset_61(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_spriteAsset_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAsset_61), (void*)value);
	}

	inline static int32_t get_offset_of_m_tintAllSprites_62() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tintAllSprites_62)); }
	inline bool get_m_tintAllSprites_62() const { return ___m_tintAllSprites_62; }
	inline bool* get_address_of_m_tintAllSprites_62() { return &___m_tintAllSprites_62; }
	inline void set_m_tintAllSprites_62(bool value)
	{
		___m_tintAllSprites_62 = value;
	}

	inline static int32_t get_offset_of_m_tintSprite_63() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tintSprite_63)); }
	inline bool get_m_tintSprite_63() const { return ___m_tintSprite_63; }
	inline bool* get_address_of_m_tintSprite_63() { return &___m_tintSprite_63; }
	inline void set_m_tintSprite_63(bool value)
	{
		___m_tintSprite_63 = value;
	}

	inline static int32_t get_offset_of_m_spriteColor_64() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteColor_64)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_spriteColor_64() const { return ___m_spriteColor_64; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_spriteColor_64() { return &___m_spriteColor_64; }
	inline void set_m_spriteColor_64(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_spriteColor_64 = value;
	}

	inline static int32_t get_offset_of_m_StyleSheet_65() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_StyleSheet_65)); }
	inline TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * get_m_StyleSheet_65() const { return ___m_StyleSheet_65; }
	inline TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E ** get_address_of_m_StyleSheet_65() { return &___m_StyleSheet_65; }
	inline void set_m_StyleSheet_65(TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * value)
	{
		___m_StyleSheet_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StyleSheet_65), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyle_66() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyle_66)); }
	inline TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * get_m_TextStyle_66() const { return ___m_TextStyle_66; }
	inline TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB ** get_address_of_m_TextStyle_66() { return &___m_TextStyle_66; }
	inline void set_m_TextStyle_66(TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * value)
	{
		___m_TextStyle_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyle_66), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleHashCode_67() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleHashCode_67)); }
	inline int32_t get_m_TextStyleHashCode_67() const { return ___m_TextStyleHashCode_67; }
	inline int32_t* get_address_of_m_TextStyleHashCode_67() { return &___m_TextStyleHashCode_67; }
	inline void set_m_TextStyleHashCode_67(int32_t value)
	{
		___m_TextStyleHashCode_67 = value;
	}

	inline static int32_t get_offset_of_m_overrideHtmlColors_68() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_overrideHtmlColors_68)); }
	inline bool get_m_overrideHtmlColors_68() const { return ___m_overrideHtmlColors_68; }
	inline bool* get_address_of_m_overrideHtmlColors_68() { return &___m_overrideHtmlColors_68; }
	inline void set_m_overrideHtmlColors_68(bool value)
	{
		___m_overrideHtmlColors_68 = value;
	}

	inline static int32_t get_offset_of_m_faceColor_69() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_faceColor_69)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_faceColor_69() const { return ___m_faceColor_69; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_faceColor_69() { return &___m_faceColor_69; }
	inline void set_m_faceColor_69(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_faceColor_69 = value;
	}

	inline static int32_t get_offset_of_m_outlineColor_70() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_outlineColor_70)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_outlineColor_70() const { return ___m_outlineColor_70; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_outlineColor_70() { return &___m_outlineColor_70; }
	inline void set_m_outlineColor_70(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_outlineColor_70 = value;
	}

	inline static int32_t get_offset_of_m_outlineWidth_71() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_outlineWidth_71)); }
	inline float get_m_outlineWidth_71() const { return ___m_outlineWidth_71; }
	inline float* get_address_of_m_outlineWidth_71() { return &___m_outlineWidth_71; }
	inline void set_m_outlineWidth_71(float value)
	{
		___m_outlineWidth_71 = value;
	}

	inline static int32_t get_offset_of_m_fontSize_72() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSize_72)); }
	inline float get_m_fontSize_72() const { return ___m_fontSize_72; }
	inline float* get_address_of_m_fontSize_72() { return &___m_fontSize_72; }
	inline void set_m_fontSize_72(float value)
	{
		___m_fontSize_72 = value;
	}

	inline static int32_t get_offset_of_m_currentFontSize_73() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentFontSize_73)); }
	inline float get_m_currentFontSize_73() const { return ___m_currentFontSize_73; }
	inline float* get_address_of_m_currentFontSize_73() { return &___m_currentFontSize_73; }
	inline void set_m_currentFontSize_73(float value)
	{
		___m_currentFontSize_73 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeBase_74() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeBase_74)); }
	inline float get_m_fontSizeBase_74() const { return ___m_fontSizeBase_74; }
	inline float* get_address_of_m_fontSizeBase_74() { return &___m_fontSizeBase_74; }
	inline void set_m_fontSizeBase_74(float value)
	{
		___m_fontSizeBase_74 = value;
	}

	inline static int32_t get_offset_of_m_sizeStack_75() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_sizeStack_75)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_sizeStack_75() const { return ___m_sizeStack_75; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_sizeStack_75() { return &___m_sizeStack_75; }
	inline void set_m_sizeStack_75(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_sizeStack_75 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_sizeStack_75))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_fontWeight_76() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontWeight_76)); }
	inline int32_t get_m_fontWeight_76() const { return ___m_fontWeight_76; }
	inline int32_t* get_address_of_m_fontWeight_76() { return &___m_fontWeight_76; }
	inline void set_m_fontWeight_76(int32_t value)
	{
		___m_fontWeight_76 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightInternal_77() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontWeightInternal_77)); }
	inline int32_t get_m_FontWeightInternal_77() const { return ___m_FontWeightInternal_77; }
	inline int32_t* get_address_of_m_FontWeightInternal_77() { return &___m_FontWeightInternal_77; }
	inline void set_m_FontWeightInternal_77(int32_t value)
	{
		___m_FontWeightInternal_77 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightStack_78() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontWeightStack_78)); }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  get_m_FontWeightStack_78() const { return ___m_FontWeightStack_78; }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 * get_address_of_m_FontWeightStack_78() { return &___m_FontWeightStack_78; }
	inline void set_m_FontWeightStack_78(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  value)
	{
		___m_FontWeightStack_78 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_FontWeightStack_78))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_enableAutoSizing_79() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableAutoSizing_79)); }
	inline bool get_m_enableAutoSizing_79() const { return ___m_enableAutoSizing_79; }
	inline bool* get_address_of_m_enableAutoSizing_79() { return &___m_enableAutoSizing_79; }
	inline void set_m_enableAutoSizing_79(bool value)
	{
		___m_enableAutoSizing_79 = value;
	}

	inline static int32_t get_offset_of_m_maxFontSize_80() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxFontSize_80)); }
	inline float get_m_maxFontSize_80() const { return ___m_maxFontSize_80; }
	inline float* get_address_of_m_maxFontSize_80() { return &___m_maxFontSize_80; }
	inline void set_m_maxFontSize_80(float value)
	{
		___m_maxFontSize_80 = value;
	}

	inline static int32_t get_offset_of_m_minFontSize_81() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minFontSize_81)); }
	inline float get_m_minFontSize_81() const { return ___m_minFontSize_81; }
	inline float* get_address_of_m_minFontSize_81() { return &___m_minFontSize_81; }
	inline void set_m_minFontSize_81(float value)
	{
		___m_minFontSize_81 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeIterationCount_82() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_AutoSizeIterationCount_82)); }
	inline int32_t get_m_AutoSizeIterationCount_82() const { return ___m_AutoSizeIterationCount_82; }
	inline int32_t* get_address_of_m_AutoSizeIterationCount_82() { return &___m_AutoSizeIterationCount_82; }
	inline void set_m_AutoSizeIterationCount_82(int32_t value)
	{
		___m_AutoSizeIterationCount_82 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeMaxIterationCount_83() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_AutoSizeMaxIterationCount_83)); }
	inline int32_t get_m_AutoSizeMaxIterationCount_83() const { return ___m_AutoSizeMaxIterationCount_83; }
	inline int32_t* get_address_of_m_AutoSizeMaxIterationCount_83() { return &___m_AutoSizeMaxIterationCount_83; }
	inline void set_m_AutoSizeMaxIterationCount_83(int32_t value)
	{
		___m_AutoSizeMaxIterationCount_83 = value;
	}

	inline static int32_t get_offset_of_m_IsAutoSizePointSizeSet_84() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsAutoSizePointSizeSet_84)); }
	inline bool get_m_IsAutoSizePointSizeSet_84() const { return ___m_IsAutoSizePointSizeSet_84; }
	inline bool* get_address_of_m_IsAutoSizePointSizeSet_84() { return &___m_IsAutoSizePointSizeSet_84; }
	inline void set_m_IsAutoSizePointSizeSet_84(bool value)
	{
		___m_IsAutoSizePointSizeSet_84 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMin_85() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeMin_85)); }
	inline float get_m_fontSizeMin_85() const { return ___m_fontSizeMin_85; }
	inline float* get_address_of_m_fontSizeMin_85() { return &___m_fontSizeMin_85; }
	inline void set_m_fontSizeMin_85(float value)
	{
		___m_fontSizeMin_85 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMax_86() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeMax_86)); }
	inline float get_m_fontSizeMax_86() const { return ___m_fontSizeMax_86; }
	inline float* get_address_of_m_fontSizeMax_86() { return &___m_fontSizeMax_86; }
	inline void set_m_fontSizeMax_86(float value)
	{
		___m_fontSizeMax_86 = value;
	}

	inline static int32_t get_offset_of_m_fontStyle_87() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontStyle_87)); }
	inline int32_t get_m_fontStyle_87() const { return ___m_fontStyle_87; }
	inline int32_t* get_address_of_m_fontStyle_87() { return &___m_fontStyle_87; }
	inline void set_m_fontStyle_87(int32_t value)
	{
		___m_fontStyle_87 = value;
	}

	inline static int32_t get_offset_of_m_FontStyleInternal_88() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontStyleInternal_88)); }
	inline int32_t get_m_FontStyleInternal_88() const { return ___m_FontStyleInternal_88; }
	inline int32_t* get_address_of_m_FontStyleInternal_88() { return &___m_FontStyleInternal_88; }
	inline void set_m_FontStyleInternal_88(int32_t value)
	{
		___m_FontStyleInternal_88 = value;
	}

	inline static int32_t get_offset_of_m_fontStyleStack_89() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontStyleStack_89)); }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  get_m_fontStyleStack_89() const { return ___m_fontStyleStack_89; }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 * get_address_of_m_fontStyleStack_89() { return &___m_fontStyleStack_89; }
	inline void set_m_fontStyleStack_89(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  value)
	{
		___m_fontStyleStack_89 = value;
	}

	inline static int32_t get_offset_of_m_isUsingBold_90() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isUsingBold_90)); }
	inline bool get_m_isUsingBold_90() const { return ___m_isUsingBold_90; }
	inline bool* get_address_of_m_isUsingBold_90() { return &___m_isUsingBold_90; }
	inline void set_m_isUsingBold_90(bool value)
	{
		___m_isUsingBold_90 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalAlignment_91() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_HorizontalAlignment_91)); }
	inline int32_t get_m_HorizontalAlignment_91() const { return ___m_HorizontalAlignment_91; }
	inline int32_t* get_address_of_m_HorizontalAlignment_91() { return &___m_HorizontalAlignment_91; }
	inline void set_m_HorizontalAlignment_91(int32_t value)
	{
		___m_HorizontalAlignment_91 = value;
	}

	inline static int32_t get_offset_of_m_VerticalAlignment_92() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_VerticalAlignment_92)); }
	inline int32_t get_m_VerticalAlignment_92() const { return ___m_VerticalAlignment_92; }
	inline int32_t* get_address_of_m_VerticalAlignment_92() { return &___m_VerticalAlignment_92; }
	inline void set_m_VerticalAlignment_92(int32_t value)
	{
		___m_VerticalAlignment_92 = value;
	}

	inline static int32_t get_offset_of_m_textAlignment_93() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textAlignment_93)); }
	inline int32_t get_m_textAlignment_93() const { return ___m_textAlignment_93; }
	inline int32_t* get_address_of_m_textAlignment_93() { return &___m_textAlignment_93; }
	inline void set_m_textAlignment_93(int32_t value)
	{
		___m_textAlignment_93 = value;
	}

	inline static int32_t get_offset_of_m_lineJustification_94() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineJustification_94)); }
	inline int32_t get_m_lineJustification_94() const { return ___m_lineJustification_94; }
	inline int32_t* get_address_of_m_lineJustification_94() { return &___m_lineJustification_94; }
	inline void set_m_lineJustification_94(int32_t value)
	{
		___m_lineJustification_94 = value;
	}

	inline static int32_t get_offset_of_m_lineJustificationStack_95() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineJustificationStack_95)); }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  get_m_lineJustificationStack_95() const { return ___m_lineJustificationStack_95; }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B * get_address_of_m_lineJustificationStack_95() { return &___m_lineJustificationStack_95; }
	inline void set_m_lineJustificationStack_95(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  value)
	{
		___m_lineJustificationStack_95 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_lineJustificationStack_95))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_textContainerLocalCorners_96() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textContainerLocalCorners_96)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_textContainerLocalCorners_96() const { return ___m_textContainerLocalCorners_96; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_textContainerLocalCorners_96() { return &___m_textContainerLocalCorners_96; }
	inline void set_m_textContainerLocalCorners_96(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_textContainerLocalCorners_96 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textContainerLocalCorners_96), (void*)value);
	}

	inline static int32_t get_offset_of_m_characterSpacing_97() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_characterSpacing_97)); }
	inline float get_m_characterSpacing_97() const { return ___m_characterSpacing_97; }
	inline float* get_address_of_m_characterSpacing_97() { return &___m_characterSpacing_97; }
	inline void set_m_characterSpacing_97(float value)
	{
		___m_characterSpacing_97 = value;
	}

	inline static int32_t get_offset_of_m_cSpacing_98() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cSpacing_98)); }
	inline float get_m_cSpacing_98() const { return ___m_cSpacing_98; }
	inline float* get_address_of_m_cSpacing_98() { return &___m_cSpacing_98; }
	inline void set_m_cSpacing_98(float value)
	{
		___m_cSpacing_98 = value;
	}

	inline static int32_t get_offset_of_m_monoSpacing_99() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_monoSpacing_99)); }
	inline float get_m_monoSpacing_99() const { return ___m_monoSpacing_99; }
	inline float* get_address_of_m_monoSpacing_99() { return &___m_monoSpacing_99; }
	inline void set_m_monoSpacing_99(float value)
	{
		___m_monoSpacing_99 = value;
	}

	inline static int32_t get_offset_of_m_wordSpacing_100() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_wordSpacing_100)); }
	inline float get_m_wordSpacing_100() const { return ___m_wordSpacing_100; }
	inline float* get_address_of_m_wordSpacing_100() { return &___m_wordSpacing_100; }
	inline void set_m_wordSpacing_100(float value)
	{
		___m_wordSpacing_100 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacing_101() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacing_101)); }
	inline float get_m_lineSpacing_101() const { return ___m_lineSpacing_101; }
	inline float* get_address_of_m_lineSpacing_101() { return &___m_lineSpacing_101; }
	inline void set_m_lineSpacing_101(float value)
	{
		___m_lineSpacing_101 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingDelta_102() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacingDelta_102)); }
	inline float get_m_lineSpacingDelta_102() const { return ___m_lineSpacingDelta_102; }
	inline float* get_address_of_m_lineSpacingDelta_102() { return &___m_lineSpacingDelta_102; }
	inline void set_m_lineSpacingDelta_102(float value)
	{
		___m_lineSpacingDelta_102 = value;
	}

	inline static int32_t get_offset_of_m_lineHeight_103() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineHeight_103)); }
	inline float get_m_lineHeight_103() const { return ___m_lineHeight_103; }
	inline float* get_address_of_m_lineHeight_103() { return &___m_lineHeight_103; }
	inline void set_m_lineHeight_103(float value)
	{
		___m_lineHeight_103 = value;
	}

	inline static int32_t get_offset_of_m_IsDrivenLineSpacing_104() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsDrivenLineSpacing_104)); }
	inline bool get_m_IsDrivenLineSpacing_104() const { return ___m_IsDrivenLineSpacing_104; }
	inline bool* get_address_of_m_IsDrivenLineSpacing_104() { return &___m_IsDrivenLineSpacing_104; }
	inline void set_m_IsDrivenLineSpacing_104(bool value)
	{
		___m_IsDrivenLineSpacing_104 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingMax_105() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacingMax_105)); }
	inline float get_m_lineSpacingMax_105() const { return ___m_lineSpacingMax_105; }
	inline float* get_address_of_m_lineSpacingMax_105() { return &___m_lineSpacingMax_105; }
	inline void set_m_lineSpacingMax_105(float value)
	{
		___m_lineSpacingMax_105 = value;
	}

	inline static int32_t get_offset_of_m_paragraphSpacing_106() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_paragraphSpacing_106)); }
	inline float get_m_paragraphSpacing_106() const { return ___m_paragraphSpacing_106; }
	inline float* get_address_of_m_paragraphSpacing_106() { return &___m_paragraphSpacing_106; }
	inline void set_m_paragraphSpacing_106(float value)
	{
		___m_paragraphSpacing_106 = value;
	}

	inline static int32_t get_offset_of_m_charWidthMaxAdj_107() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charWidthMaxAdj_107)); }
	inline float get_m_charWidthMaxAdj_107() const { return ___m_charWidthMaxAdj_107; }
	inline float* get_address_of_m_charWidthMaxAdj_107() { return &___m_charWidthMaxAdj_107; }
	inline void set_m_charWidthMaxAdj_107(float value)
	{
		___m_charWidthMaxAdj_107 = value;
	}

	inline static int32_t get_offset_of_m_charWidthAdjDelta_108() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charWidthAdjDelta_108)); }
	inline float get_m_charWidthAdjDelta_108() const { return ___m_charWidthAdjDelta_108; }
	inline float* get_address_of_m_charWidthAdjDelta_108() { return &___m_charWidthAdjDelta_108; }
	inline void set_m_charWidthAdjDelta_108(float value)
	{
		___m_charWidthAdjDelta_108 = value;
	}

	inline static int32_t get_offset_of_m_enableWordWrapping_109() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableWordWrapping_109)); }
	inline bool get_m_enableWordWrapping_109() const { return ___m_enableWordWrapping_109; }
	inline bool* get_address_of_m_enableWordWrapping_109() { return &___m_enableWordWrapping_109; }
	inline void set_m_enableWordWrapping_109(bool value)
	{
		___m_enableWordWrapping_109 = value;
	}

	inline static int32_t get_offset_of_m_isCharacterWrappingEnabled_110() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCharacterWrappingEnabled_110)); }
	inline bool get_m_isCharacterWrappingEnabled_110() const { return ___m_isCharacterWrappingEnabled_110; }
	inline bool* get_address_of_m_isCharacterWrappingEnabled_110() { return &___m_isCharacterWrappingEnabled_110; }
	inline void set_m_isCharacterWrappingEnabled_110(bool value)
	{
		___m_isCharacterWrappingEnabled_110 = value;
	}

	inline static int32_t get_offset_of_m_isNonBreakingSpace_111() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isNonBreakingSpace_111)); }
	inline bool get_m_isNonBreakingSpace_111() const { return ___m_isNonBreakingSpace_111; }
	inline bool* get_address_of_m_isNonBreakingSpace_111() { return &___m_isNonBreakingSpace_111; }
	inline void set_m_isNonBreakingSpace_111(bool value)
	{
		___m_isNonBreakingSpace_111 = value;
	}

	inline static int32_t get_offset_of_m_isIgnoringAlignment_112() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isIgnoringAlignment_112)); }
	inline bool get_m_isIgnoringAlignment_112() const { return ___m_isIgnoringAlignment_112; }
	inline bool* get_address_of_m_isIgnoringAlignment_112() { return &___m_isIgnoringAlignment_112; }
	inline void set_m_isIgnoringAlignment_112(bool value)
	{
		___m_isIgnoringAlignment_112 = value;
	}

	inline static int32_t get_offset_of_m_wordWrappingRatios_113() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_wordWrappingRatios_113)); }
	inline float get_m_wordWrappingRatios_113() const { return ___m_wordWrappingRatios_113; }
	inline float* get_address_of_m_wordWrappingRatios_113() { return &___m_wordWrappingRatios_113; }
	inline void set_m_wordWrappingRatios_113(float value)
	{
		___m_wordWrappingRatios_113 = value;
	}

	inline static int32_t get_offset_of_m_overflowMode_114() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_overflowMode_114)); }
	inline int32_t get_m_overflowMode_114() const { return ___m_overflowMode_114; }
	inline int32_t* get_address_of_m_overflowMode_114() { return &___m_overflowMode_114; }
	inline void set_m_overflowMode_114(int32_t value)
	{
		___m_overflowMode_114 = value;
	}

	inline static int32_t get_offset_of_m_firstOverflowCharacterIndex_115() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstOverflowCharacterIndex_115)); }
	inline int32_t get_m_firstOverflowCharacterIndex_115() const { return ___m_firstOverflowCharacterIndex_115; }
	inline int32_t* get_address_of_m_firstOverflowCharacterIndex_115() { return &___m_firstOverflowCharacterIndex_115; }
	inline void set_m_firstOverflowCharacterIndex_115(int32_t value)
	{
		___m_firstOverflowCharacterIndex_115 = value;
	}

	inline static int32_t get_offset_of_m_linkedTextComponent_116() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_linkedTextComponent_116)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_linkedTextComponent_116() const { return ___m_linkedTextComponent_116; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_linkedTextComponent_116() { return &___m_linkedTextComponent_116; }
	inline void set_m_linkedTextComponent_116(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_linkedTextComponent_116 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkedTextComponent_116), (void*)value);
	}

	inline static int32_t get_offset_of_parentLinkedComponent_117() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___parentLinkedComponent_117)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_parentLinkedComponent_117() const { return ___parentLinkedComponent_117; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_parentLinkedComponent_117() { return &___parentLinkedComponent_117; }
	inline void set_parentLinkedComponent_117(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___parentLinkedComponent_117 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentLinkedComponent_117), (void*)value);
	}

	inline static int32_t get_offset_of_m_isTextTruncated_118() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isTextTruncated_118)); }
	inline bool get_m_isTextTruncated_118() const { return ___m_isTextTruncated_118; }
	inline bool* get_address_of_m_isTextTruncated_118() { return &___m_isTextTruncated_118; }
	inline void set_m_isTextTruncated_118(bool value)
	{
		___m_isTextTruncated_118 = value;
	}

	inline static int32_t get_offset_of_m_enableKerning_119() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableKerning_119)); }
	inline bool get_m_enableKerning_119() const { return ___m_enableKerning_119; }
	inline bool* get_address_of_m_enableKerning_119() { return &___m_enableKerning_119; }
	inline void set_m_enableKerning_119(bool value)
	{
		___m_enableKerning_119 = value;
	}

	inline static int32_t get_offset_of_m_GlyphHorizontalAdvanceAdjustment_120() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_GlyphHorizontalAdvanceAdjustment_120)); }
	inline float get_m_GlyphHorizontalAdvanceAdjustment_120() const { return ___m_GlyphHorizontalAdvanceAdjustment_120; }
	inline float* get_address_of_m_GlyphHorizontalAdvanceAdjustment_120() { return &___m_GlyphHorizontalAdvanceAdjustment_120; }
	inline void set_m_GlyphHorizontalAdvanceAdjustment_120(float value)
	{
		___m_GlyphHorizontalAdvanceAdjustment_120 = value;
	}

	inline static int32_t get_offset_of_m_enableExtraPadding_121() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableExtraPadding_121)); }
	inline bool get_m_enableExtraPadding_121() const { return ___m_enableExtraPadding_121; }
	inline bool* get_address_of_m_enableExtraPadding_121() { return &___m_enableExtraPadding_121; }
	inline void set_m_enableExtraPadding_121(bool value)
	{
		___m_enableExtraPadding_121 = value;
	}

	inline static int32_t get_offset_of_checkPaddingRequired_122() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___checkPaddingRequired_122)); }
	inline bool get_checkPaddingRequired_122() const { return ___checkPaddingRequired_122; }
	inline bool* get_address_of_checkPaddingRequired_122() { return &___checkPaddingRequired_122; }
	inline void set_checkPaddingRequired_122(bool value)
	{
		___checkPaddingRequired_122 = value;
	}

	inline static int32_t get_offset_of_m_isRichText_123() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isRichText_123)); }
	inline bool get_m_isRichText_123() const { return ___m_isRichText_123; }
	inline bool* get_address_of_m_isRichText_123() { return &___m_isRichText_123; }
	inline void set_m_isRichText_123(bool value)
	{
		___m_isRichText_123 = value;
	}

	inline static int32_t get_offset_of_m_parseCtrlCharacters_124() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_parseCtrlCharacters_124)); }
	inline bool get_m_parseCtrlCharacters_124() const { return ___m_parseCtrlCharacters_124; }
	inline bool* get_address_of_m_parseCtrlCharacters_124() { return &___m_parseCtrlCharacters_124; }
	inline void set_m_parseCtrlCharacters_124(bool value)
	{
		___m_parseCtrlCharacters_124 = value;
	}

	inline static int32_t get_offset_of_m_isOverlay_125() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isOverlay_125)); }
	inline bool get_m_isOverlay_125() const { return ___m_isOverlay_125; }
	inline bool* get_address_of_m_isOverlay_125() { return &___m_isOverlay_125; }
	inline void set_m_isOverlay_125(bool value)
	{
		___m_isOverlay_125 = value;
	}

	inline static int32_t get_offset_of_m_isOrthographic_126() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isOrthographic_126)); }
	inline bool get_m_isOrthographic_126() const { return ___m_isOrthographic_126; }
	inline bool* get_address_of_m_isOrthographic_126() { return &___m_isOrthographic_126; }
	inline void set_m_isOrthographic_126(bool value)
	{
		___m_isOrthographic_126 = value;
	}

	inline static int32_t get_offset_of_m_isCullingEnabled_127() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCullingEnabled_127)); }
	inline bool get_m_isCullingEnabled_127() const { return ___m_isCullingEnabled_127; }
	inline bool* get_address_of_m_isCullingEnabled_127() { return &___m_isCullingEnabled_127; }
	inline void set_m_isCullingEnabled_127(bool value)
	{
		___m_isCullingEnabled_127 = value;
	}

	inline static int32_t get_offset_of_m_isMaskingEnabled_128() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isMaskingEnabled_128)); }
	inline bool get_m_isMaskingEnabled_128() const { return ___m_isMaskingEnabled_128; }
	inline bool* get_address_of_m_isMaskingEnabled_128() { return &___m_isMaskingEnabled_128; }
	inline void set_m_isMaskingEnabled_128(bool value)
	{
		___m_isMaskingEnabled_128 = value;
	}

	inline static int32_t get_offset_of_isMaskUpdateRequired_129() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___isMaskUpdateRequired_129)); }
	inline bool get_isMaskUpdateRequired_129() const { return ___isMaskUpdateRequired_129; }
	inline bool* get_address_of_isMaskUpdateRequired_129() { return &___isMaskUpdateRequired_129; }
	inline void set_isMaskUpdateRequired_129(bool value)
	{
		___isMaskUpdateRequired_129 = value;
	}

	inline static int32_t get_offset_of_m_ignoreCulling_130() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ignoreCulling_130)); }
	inline bool get_m_ignoreCulling_130() const { return ___m_ignoreCulling_130; }
	inline bool* get_address_of_m_ignoreCulling_130() { return &___m_ignoreCulling_130; }
	inline void set_m_ignoreCulling_130(bool value)
	{
		___m_ignoreCulling_130 = value;
	}

	inline static int32_t get_offset_of_m_horizontalMapping_131() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_horizontalMapping_131)); }
	inline int32_t get_m_horizontalMapping_131() const { return ___m_horizontalMapping_131; }
	inline int32_t* get_address_of_m_horizontalMapping_131() { return &___m_horizontalMapping_131; }
	inline void set_m_horizontalMapping_131(int32_t value)
	{
		___m_horizontalMapping_131 = value;
	}

	inline static int32_t get_offset_of_m_verticalMapping_132() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_verticalMapping_132)); }
	inline int32_t get_m_verticalMapping_132() const { return ___m_verticalMapping_132; }
	inline int32_t* get_address_of_m_verticalMapping_132() { return &___m_verticalMapping_132; }
	inline void set_m_verticalMapping_132(int32_t value)
	{
		___m_verticalMapping_132 = value;
	}

	inline static int32_t get_offset_of_m_uvLineOffset_133() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_uvLineOffset_133)); }
	inline float get_m_uvLineOffset_133() const { return ___m_uvLineOffset_133; }
	inline float* get_address_of_m_uvLineOffset_133() { return &___m_uvLineOffset_133; }
	inline void set_m_uvLineOffset_133(float value)
	{
		___m_uvLineOffset_133 = value;
	}

	inline static int32_t get_offset_of_m_renderMode_134() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderMode_134)); }
	inline int32_t get_m_renderMode_134() const { return ___m_renderMode_134; }
	inline int32_t* get_address_of_m_renderMode_134() { return &___m_renderMode_134; }
	inline void set_m_renderMode_134(int32_t value)
	{
		___m_renderMode_134 = value;
	}

	inline static int32_t get_offset_of_m_geometrySortingOrder_135() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_geometrySortingOrder_135)); }
	inline int32_t get_m_geometrySortingOrder_135() const { return ___m_geometrySortingOrder_135; }
	inline int32_t* get_address_of_m_geometrySortingOrder_135() { return &___m_geometrySortingOrder_135; }
	inline void set_m_geometrySortingOrder_135(int32_t value)
	{
		___m_geometrySortingOrder_135 = value;
	}

	inline static int32_t get_offset_of_m_IsTextObjectScaleStatic_136() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsTextObjectScaleStatic_136)); }
	inline bool get_m_IsTextObjectScaleStatic_136() const { return ___m_IsTextObjectScaleStatic_136; }
	inline bool* get_address_of_m_IsTextObjectScaleStatic_136() { return &___m_IsTextObjectScaleStatic_136; }
	inline void set_m_IsTextObjectScaleStatic_136(bool value)
	{
		___m_IsTextObjectScaleStatic_136 = value;
	}

	inline static int32_t get_offset_of_m_VertexBufferAutoSizeReduction_137() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_VertexBufferAutoSizeReduction_137)); }
	inline bool get_m_VertexBufferAutoSizeReduction_137() const { return ___m_VertexBufferAutoSizeReduction_137; }
	inline bool* get_address_of_m_VertexBufferAutoSizeReduction_137() { return &___m_VertexBufferAutoSizeReduction_137; }
	inline void set_m_VertexBufferAutoSizeReduction_137(bool value)
	{
		___m_VertexBufferAutoSizeReduction_137 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacter_138() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstVisibleCharacter_138)); }
	inline int32_t get_m_firstVisibleCharacter_138() const { return ___m_firstVisibleCharacter_138; }
	inline int32_t* get_address_of_m_firstVisibleCharacter_138() { return &___m_firstVisibleCharacter_138; }
	inline void set_m_firstVisibleCharacter_138(int32_t value)
	{
		___m_firstVisibleCharacter_138 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleCharacters_139() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleCharacters_139)); }
	inline int32_t get_m_maxVisibleCharacters_139() const { return ___m_maxVisibleCharacters_139; }
	inline int32_t* get_address_of_m_maxVisibleCharacters_139() { return &___m_maxVisibleCharacters_139; }
	inline void set_m_maxVisibleCharacters_139(int32_t value)
	{
		___m_maxVisibleCharacters_139 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleWords_140() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleWords_140)); }
	inline int32_t get_m_maxVisibleWords_140() const { return ___m_maxVisibleWords_140; }
	inline int32_t* get_address_of_m_maxVisibleWords_140() { return &___m_maxVisibleWords_140; }
	inline void set_m_maxVisibleWords_140(int32_t value)
	{
		___m_maxVisibleWords_140 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleLines_141() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleLines_141)); }
	inline int32_t get_m_maxVisibleLines_141() const { return ___m_maxVisibleLines_141; }
	inline int32_t* get_address_of_m_maxVisibleLines_141() { return &___m_maxVisibleLines_141; }
	inline void set_m_maxVisibleLines_141(int32_t value)
	{
		___m_maxVisibleLines_141 = value;
	}

	inline static int32_t get_offset_of_m_useMaxVisibleDescender_142() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_useMaxVisibleDescender_142)); }
	inline bool get_m_useMaxVisibleDescender_142() const { return ___m_useMaxVisibleDescender_142; }
	inline bool* get_address_of_m_useMaxVisibleDescender_142() { return &___m_useMaxVisibleDescender_142; }
	inline void set_m_useMaxVisibleDescender_142(bool value)
	{
		___m_useMaxVisibleDescender_142 = value;
	}

	inline static int32_t get_offset_of_m_pageToDisplay_143() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_pageToDisplay_143)); }
	inline int32_t get_m_pageToDisplay_143() const { return ___m_pageToDisplay_143; }
	inline int32_t* get_address_of_m_pageToDisplay_143() { return &___m_pageToDisplay_143; }
	inline void set_m_pageToDisplay_143(int32_t value)
	{
		___m_pageToDisplay_143 = value;
	}

	inline static int32_t get_offset_of_m_isNewPage_144() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isNewPage_144)); }
	inline bool get_m_isNewPage_144() const { return ___m_isNewPage_144; }
	inline bool* get_address_of_m_isNewPage_144() { return &___m_isNewPage_144; }
	inline void set_m_isNewPage_144(bool value)
	{
		___m_isNewPage_144 = value;
	}

	inline static int32_t get_offset_of_m_margin_145() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_margin_145)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_margin_145() const { return ___m_margin_145; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_margin_145() { return &___m_margin_145; }
	inline void set_m_margin_145(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_margin_145 = value;
	}

	inline static int32_t get_offset_of_m_marginLeft_146() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginLeft_146)); }
	inline float get_m_marginLeft_146() const { return ___m_marginLeft_146; }
	inline float* get_address_of_m_marginLeft_146() { return &___m_marginLeft_146; }
	inline void set_m_marginLeft_146(float value)
	{
		___m_marginLeft_146 = value;
	}

	inline static int32_t get_offset_of_m_marginRight_147() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginRight_147)); }
	inline float get_m_marginRight_147() const { return ___m_marginRight_147; }
	inline float* get_address_of_m_marginRight_147() { return &___m_marginRight_147; }
	inline void set_m_marginRight_147(float value)
	{
		___m_marginRight_147 = value;
	}

	inline static int32_t get_offset_of_m_marginWidth_148() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginWidth_148)); }
	inline float get_m_marginWidth_148() const { return ___m_marginWidth_148; }
	inline float* get_address_of_m_marginWidth_148() { return &___m_marginWidth_148; }
	inline void set_m_marginWidth_148(float value)
	{
		___m_marginWidth_148 = value;
	}

	inline static int32_t get_offset_of_m_marginHeight_149() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginHeight_149)); }
	inline float get_m_marginHeight_149() const { return ___m_marginHeight_149; }
	inline float* get_address_of_m_marginHeight_149() { return &___m_marginHeight_149; }
	inline void set_m_marginHeight_149(float value)
	{
		___m_marginHeight_149 = value;
	}

	inline static int32_t get_offset_of_m_width_150() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_width_150)); }
	inline float get_m_width_150() const { return ___m_width_150; }
	inline float* get_address_of_m_width_150() { return &___m_width_150; }
	inline void set_m_width_150(float value)
	{
		___m_width_150 = value;
	}

	inline static int32_t get_offset_of_m_textInfo_151() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textInfo_151)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_m_textInfo_151() const { return ___m_textInfo_151; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_m_textInfo_151() { return &___m_textInfo_151; }
	inline void set_m_textInfo_151(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___m_textInfo_151 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textInfo_151), (void*)value);
	}

	inline static int32_t get_offset_of_m_havePropertiesChanged_152() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_havePropertiesChanged_152)); }
	inline bool get_m_havePropertiesChanged_152() const { return ___m_havePropertiesChanged_152; }
	inline bool* get_address_of_m_havePropertiesChanged_152() { return &___m_havePropertiesChanged_152; }
	inline void set_m_havePropertiesChanged_152(bool value)
	{
		___m_havePropertiesChanged_152 = value;
	}

	inline static int32_t get_offset_of_m_isUsingLegacyAnimationComponent_153() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isUsingLegacyAnimationComponent_153)); }
	inline bool get_m_isUsingLegacyAnimationComponent_153() const { return ___m_isUsingLegacyAnimationComponent_153; }
	inline bool* get_address_of_m_isUsingLegacyAnimationComponent_153() { return &___m_isUsingLegacyAnimationComponent_153; }
	inline void set_m_isUsingLegacyAnimationComponent_153(bool value)
	{
		___m_isUsingLegacyAnimationComponent_153 = value;
	}

	inline static int32_t get_offset_of_m_transform_154() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_transform_154)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_transform_154() const { return ___m_transform_154; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_transform_154() { return &___m_transform_154; }
	inline void set_m_transform_154(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_transform_154 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_transform_154), (void*)value);
	}

	inline static int32_t get_offset_of_m_rectTransform_155() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_rectTransform_155)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_rectTransform_155() const { return ___m_rectTransform_155; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_rectTransform_155() { return &___m_rectTransform_155; }
	inline void set_m_rectTransform_155(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_rectTransform_155 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_rectTransform_155), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviousRectTransformSize_156() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PreviousRectTransformSize_156)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PreviousRectTransformSize_156() const { return ___m_PreviousRectTransformSize_156; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PreviousRectTransformSize_156() { return &___m_PreviousRectTransformSize_156; }
	inline void set_m_PreviousRectTransformSize_156(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PreviousRectTransformSize_156 = value;
	}

	inline static int32_t get_offset_of_m_PreviousPivotPosition_157() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PreviousPivotPosition_157)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PreviousPivotPosition_157() const { return ___m_PreviousPivotPosition_157; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PreviousPivotPosition_157() { return &___m_PreviousPivotPosition_157; }
	inline void set_m_PreviousPivotPosition_157(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PreviousPivotPosition_157 = value;
	}

	inline static int32_t get_offset_of_U3CautoSizeTextContainerU3Ek__BackingField_158() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___U3CautoSizeTextContainerU3Ek__BackingField_158)); }
	inline bool get_U3CautoSizeTextContainerU3Ek__BackingField_158() const { return ___U3CautoSizeTextContainerU3Ek__BackingField_158; }
	inline bool* get_address_of_U3CautoSizeTextContainerU3Ek__BackingField_158() { return &___U3CautoSizeTextContainerU3Ek__BackingField_158; }
	inline void set_U3CautoSizeTextContainerU3Ek__BackingField_158(bool value)
	{
		___U3CautoSizeTextContainerU3Ek__BackingField_158 = value;
	}

	inline static int32_t get_offset_of_m_autoSizeTextContainer_159() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_autoSizeTextContainer_159)); }
	inline bool get_m_autoSizeTextContainer_159() const { return ___m_autoSizeTextContainer_159; }
	inline bool* get_address_of_m_autoSizeTextContainer_159() { return &___m_autoSizeTextContainer_159; }
	inline void set_m_autoSizeTextContainer_159(bool value)
	{
		___m_autoSizeTextContainer_159 = value;
	}

	inline static int32_t get_offset_of_m_mesh_160() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_mesh_160)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_mesh_160() const { return ___m_mesh_160; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_mesh_160() { return &___m_mesh_160; }
	inline void set_m_mesh_160(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_mesh_160 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_mesh_160), (void*)value);
	}

	inline static int32_t get_offset_of_m_isVolumetricText_161() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isVolumetricText_161)); }
	inline bool get_m_isVolumetricText_161() const { return ___m_isVolumetricText_161; }
	inline bool* get_address_of_m_isVolumetricText_161() { return &___m_isVolumetricText_161; }
	inline void set_m_isVolumetricText_161(bool value)
	{
		___m_isVolumetricText_161 = value;
	}

	inline static int32_t get_offset_of_OnPreRenderText_164() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___OnPreRenderText_164)); }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * get_OnPreRenderText_164() const { return ___OnPreRenderText_164; }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 ** get_address_of_OnPreRenderText_164() { return &___OnPreRenderText_164; }
	inline void set_OnPreRenderText_164(Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * value)
	{
		___OnPreRenderText_164 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreRenderText_164), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAnimator_165() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAnimator_165)); }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * get_m_spriteAnimator_165() const { return ___m_spriteAnimator_165; }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 ** get_address_of_m_spriteAnimator_165() { return &___m_spriteAnimator_165; }
	inline void set_m_spriteAnimator_165(TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * value)
	{
		___m_spriteAnimator_165 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAnimator_165), (void*)value);
	}

	inline static int32_t get_offset_of_m_flexibleHeight_166() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_flexibleHeight_166)); }
	inline float get_m_flexibleHeight_166() const { return ___m_flexibleHeight_166; }
	inline float* get_address_of_m_flexibleHeight_166() { return &___m_flexibleHeight_166; }
	inline void set_m_flexibleHeight_166(float value)
	{
		___m_flexibleHeight_166 = value;
	}

	inline static int32_t get_offset_of_m_flexibleWidth_167() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_flexibleWidth_167)); }
	inline float get_m_flexibleWidth_167() const { return ___m_flexibleWidth_167; }
	inline float* get_address_of_m_flexibleWidth_167() { return &___m_flexibleWidth_167; }
	inline void set_m_flexibleWidth_167(float value)
	{
		___m_flexibleWidth_167 = value;
	}

	inline static int32_t get_offset_of_m_minWidth_168() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minWidth_168)); }
	inline float get_m_minWidth_168() const { return ___m_minWidth_168; }
	inline float* get_address_of_m_minWidth_168() { return &___m_minWidth_168; }
	inline void set_m_minWidth_168(float value)
	{
		___m_minWidth_168 = value;
	}

	inline static int32_t get_offset_of_m_minHeight_169() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minHeight_169)); }
	inline float get_m_minHeight_169() const { return ___m_minHeight_169; }
	inline float* get_address_of_m_minHeight_169() { return &___m_minHeight_169; }
	inline void set_m_minHeight_169(float value)
	{
		___m_minHeight_169 = value;
	}

	inline static int32_t get_offset_of_m_maxWidth_170() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxWidth_170)); }
	inline float get_m_maxWidth_170() const { return ___m_maxWidth_170; }
	inline float* get_address_of_m_maxWidth_170() { return &___m_maxWidth_170; }
	inline void set_m_maxWidth_170(float value)
	{
		___m_maxWidth_170 = value;
	}

	inline static int32_t get_offset_of_m_maxHeight_171() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxHeight_171)); }
	inline float get_m_maxHeight_171() const { return ___m_maxHeight_171; }
	inline float* get_address_of_m_maxHeight_171() { return &___m_maxHeight_171; }
	inline void set_m_maxHeight_171(float value)
	{
		___m_maxHeight_171 = value;
	}

	inline static int32_t get_offset_of_m_LayoutElement_172() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_LayoutElement_172)); }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * get_m_LayoutElement_172() const { return ___m_LayoutElement_172; }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF ** get_address_of_m_LayoutElement_172() { return &___m_LayoutElement_172; }
	inline void set_m_LayoutElement_172(LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * value)
	{
		___m_LayoutElement_172 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LayoutElement_172), (void*)value);
	}

	inline static int32_t get_offset_of_m_preferredWidth_173() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_preferredWidth_173)); }
	inline float get_m_preferredWidth_173() const { return ___m_preferredWidth_173; }
	inline float* get_address_of_m_preferredWidth_173() { return &___m_preferredWidth_173; }
	inline void set_m_preferredWidth_173(float value)
	{
		___m_preferredWidth_173 = value;
	}

	inline static int32_t get_offset_of_m_renderedWidth_174() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderedWidth_174)); }
	inline float get_m_renderedWidth_174() const { return ___m_renderedWidth_174; }
	inline float* get_address_of_m_renderedWidth_174() { return &___m_renderedWidth_174; }
	inline void set_m_renderedWidth_174(float value)
	{
		___m_renderedWidth_174 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredWidthDirty_175() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isPreferredWidthDirty_175)); }
	inline bool get_m_isPreferredWidthDirty_175() const { return ___m_isPreferredWidthDirty_175; }
	inline bool* get_address_of_m_isPreferredWidthDirty_175() { return &___m_isPreferredWidthDirty_175; }
	inline void set_m_isPreferredWidthDirty_175(bool value)
	{
		___m_isPreferredWidthDirty_175 = value;
	}

	inline static int32_t get_offset_of_m_preferredHeight_176() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_preferredHeight_176)); }
	inline float get_m_preferredHeight_176() const { return ___m_preferredHeight_176; }
	inline float* get_address_of_m_preferredHeight_176() { return &___m_preferredHeight_176; }
	inline void set_m_preferredHeight_176(float value)
	{
		___m_preferredHeight_176 = value;
	}

	inline static int32_t get_offset_of_m_renderedHeight_177() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderedHeight_177)); }
	inline float get_m_renderedHeight_177() const { return ___m_renderedHeight_177; }
	inline float* get_address_of_m_renderedHeight_177() { return &___m_renderedHeight_177; }
	inline void set_m_renderedHeight_177(float value)
	{
		___m_renderedHeight_177 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredHeightDirty_178() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isPreferredHeightDirty_178)); }
	inline bool get_m_isPreferredHeightDirty_178() const { return ___m_isPreferredHeightDirty_178; }
	inline bool* get_address_of_m_isPreferredHeightDirty_178() { return &___m_isPreferredHeightDirty_178; }
	inline void set_m_isPreferredHeightDirty_178(bool value)
	{
		___m_isPreferredHeightDirty_178 = value;
	}

	inline static int32_t get_offset_of_m_isCalculatingPreferredValues_179() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCalculatingPreferredValues_179)); }
	inline bool get_m_isCalculatingPreferredValues_179() const { return ___m_isCalculatingPreferredValues_179; }
	inline bool* get_address_of_m_isCalculatingPreferredValues_179() { return &___m_isCalculatingPreferredValues_179; }
	inline void set_m_isCalculatingPreferredValues_179(bool value)
	{
		___m_isCalculatingPreferredValues_179 = value;
	}

	inline static int32_t get_offset_of_m_layoutPriority_180() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_layoutPriority_180)); }
	inline int32_t get_m_layoutPriority_180() const { return ___m_layoutPriority_180; }
	inline int32_t* get_address_of_m_layoutPriority_180() { return &___m_layoutPriority_180; }
	inline void set_m_layoutPriority_180(int32_t value)
	{
		___m_layoutPriority_180 = value;
	}

	inline static int32_t get_offset_of_m_isLayoutDirty_181() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isLayoutDirty_181)); }
	inline bool get_m_isLayoutDirty_181() const { return ___m_isLayoutDirty_181; }
	inline bool* get_address_of_m_isLayoutDirty_181() { return &___m_isLayoutDirty_181; }
	inline void set_m_isLayoutDirty_181(bool value)
	{
		___m_isLayoutDirty_181 = value;
	}

	inline static int32_t get_offset_of_m_isAwake_182() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isAwake_182)); }
	inline bool get_m_isAwake_182() const { return ___m_isAwake_182; }
	inline bool* get_address_of_m_isAwake_182() { return &___m_isAwake_182; }
	inline void set_m_isAwake_182(bool value)
	{
		___m_isAwake_182 = value;
	}

	inline static int32_t get_offset_of_m_isWaitingOnResourceLoad_183() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isWaitingOnResourceLoad_183)); }
	inline bool get_m_isWaitingOnResourceLoad_183() const { return ___m_isWaitingOnResourceLoad_183; }
	inline bool* get_address_of_m_isWaitingOnResourceLoad_183() { return &___m_isWaitingOnResourceLoad_183; }
	inline void set_m_isWaitingOnResourceLoad_183(bool value)
	{
		___m_isWaitingOnResourceLoad_183 = value;
	}

	inline static int32_t get_offset_of_m_isInputParsingRequired_184() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isInputParsingRequired_184)); }
	inline bool get_m_isInputParsingRequired_184() const { return ___m_isInputParsingRequired_184; }
	inline bool* get_address_of_m_isInputParsingRequired_184() { return &___m_isInputParsingRequired_184; }
	inline void set_m_isInputParsingRequired_184(bool value)
	{
		___m_isInputParsingRequired_184 = value;
	}

	inline static int32_t get_offset_of_m_inputSource_185() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_inputSource_185)); }
	inline int32_t get_m_inputSource_185() const { return ___m_inputSource_185; }
	inline int32_t* get_address_of_m_inputSource_185() { return &___m_inputSource_185; }
	inline void set_m_inputSource_185(int32_t value)
	{
		___m_inputSource_185 = value;
	}

	inline static int32_t get_offset_of_m_fontScale_186() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontScale_186)); }
	inline float get_m_fontScale_186() const { return ___m_fontScale_186; }
	inline float* get_address_of_m_fontScale_186() { return &___m_fontScale_186; }
	inline void set_m_fontScale_186(float value)
	{
		___m_fontScale_186 = value;
	}

	inline static int32_t get_offset_of_m_fontScaleMultiplier_187() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontScaleMultiplier_187)); }
	inline float get_m_fontScaleMultiplier_187() const { return ___m_fontScaleMultiplier_187; }
	inline float* get_address_of_m_fontScaleMultiplier_187() { return &___m_fontScaleMultiplier_187; }
	inline void set_m_fontScaleMultiplier_187(float value)
	{
		___m_fontScaleMultiplier_187 = value;
	}

	inline static int32_t get_offset_of_m_htmlTag_188() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_htmlTag_188)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_htmlTag_188() const { return ___m_htmlTag_188; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_htmlTag_188() { return &___m_htmlTag_188; }
	inline void set_m_htmlTag_188(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_htmlTag_188 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_htmlTag_188), (void*)value);
	}

	inline static int32_t get_offset_of_m_xmlAttribute_189() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_xmlAttribute_189)); }
	inline RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* get_m_xmlAttribute_189() const { return ___m_xmlAttribute_189; }
	inline RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615** get_address_of_m_xmlAttribute_189() { return &___m_xmlAttribute_189; }
	inline void set_m_xmlAttribute_189(RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* value)
	{
		___m_xmlAttribute_189 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_xmlAttribute_189), (void*)value);
	}

	inline static int32_t get_offset_of_m_attributeParameterValues_190() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_attributeParameterValues_190)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_attributeParameterValues_190() const { return ___m_attributeParameterValues_190; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_attributeParameterValues_190() { return &___m_attributeParameterValues_190; }
	inline void set_m_attributeParameterValues_190(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_attributeParameterValues_190 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_attributeParameterValues_190), (void*)value);
	}

	inline static int32_t get_offset_of_tag_LineIndent_191() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_LineIndent_191)); }
	inline float get_tag_LineIndent_191() const { return ___tag_LineIndent_191; }
	inline float* get_address_of_tag_LineIndent_191() { return &___tag_LineIndent_191; }
	inline void set_tag_LineIndent_191(float value)
	{
		___tag_LineIndent_191 = value;
	}

	inline static int32_t get_offset_of_tag_Indent_192() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_Indent_192)); }
	inline float get_tag_Indent_192() const { return ___tag_Indent_192; }
	inline float* get_address_of_tag_Indent_192() { return &___tag_Indent_192; }
	inline void set_tag_Indent_192(float value)
	{
		___tag_Indent_192 = value;
	}

	inline static int32_t get_offset_of_m_indentStack_193() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_indentStack_193)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_indentStack_193() const { return ___m_indentStack_193; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_indentStack_193() { return &___m_indentStack_193; }
	inline void set_m_indentStack_193(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_indentStack_193 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_indentStack_193))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_tag_NoParsing_194() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_NoParsing_194)); }
	inline bool get_tag_NoParsing_194() const { return ___tag_NoParsing_194; }
	inline bool* get_address_of_tag_NoParsing_194() { return &___tag_NoParsing_194; }
	inline void set_tag_NoParsing_194(bool value)
	{
		___tag_NoParsing_194 = value;
	}

	inline static int32_t get_offset_of_m_isParsingText_195() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isParsingText_195)); }
	inline bool get_m_isParsingText_195() const { return ___m_isParsingText_195; }
	inline bool* get_address_of_m_isParsingText_195() { return &___m_isParsingText_195; }
	inline void set_m_isParsingText_195(bool value)
	{
		___m_isParsingText_195 = value;
	}

	inline static int32_t get_offset_of_m_FXMatrix_196() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FXMatrix_196)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_FXMatrix_196() const { return ___m_FXMatrix_196; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_FXMatrix_196() { return &___m_FXMatrix_196; }
	inline void set_m_FXMatrix_196(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_FXMatrix_196 = value;
	}

	inline static int32_t get_offset_of_m_isFXMatrixSet_197() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isFXMatrixSet_197)); }
	inline bool get_m_isFXMatrixSet_197() const { return ___m_isFXMatrixSet_197; }
	inline bool* get_address_of_m_isFXMatrixSet_197() { return &___m_isFXMatrixSet_197; }
	inline void set_m_isFXMatrixSet_197(bool value)
	{
		___m_isFXMatrixSet_197 = value;
	}

	inline static int32_t get_offset_of_m_InternalParsingBuffer_198() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_InternalParsingBuffer_198)); }
	inline UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* get_m_InternalParsingBuffer_198() const { return ___m_InternalParsingBuffer_198; }
	inline UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7** get_address_of_m_InternalParsingBuffer_198() { return &___m_InternalParsingBuffer_198; }
	inline void set_m_InternalParsingBuffer_198(UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* value)
	{
		___m_InternalParsingBuffer_198 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InternalParsingBuffer_198), (void*)value);
	}

	inline static int32_t get_offset_of_m_InternalParsingBufferSize_199() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_InternalParsingBufferSize_199)); }
	inline int32_t get_m_InternalParsingBufferSize_199() const { return ___m_InternalParsingBufferSize_199; }
	inline int32_t* get_address_of_m_InternalParsingBufferSize_199() { return &___m_InternalParsingBufferSize_199; }
	inline void set_m_InternalParsingBufferSize_199(int32_t value)
	{
		___m_InternalParsingBufferSize_199 = value;
	}

	inline static int32_t get_offset_of_m_internalCharacterInfo_200() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_internalCharacterInfo_200)); }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* get_m_internalCharacterInfo_200() const { return ___m_internalCharacterInfo_200; }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970** get_address_of_m_internalCharacterInfo_200() { return &___m_internalCharacterInfo_200; }
	inline void set_m_internalCharacterInfo_200(TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* value)
	{
		___m_internalCharacterInfo_200 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_internalCharacterInfo_200), (void*)value);
	}

	inline static int32_t get_offset_of_m_input_CharArray_201() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_input_CharArray_201)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_input_CharArray_201() const { return ___m_input_CharArray_201; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_input_CharArray_201() { return &___m_input_CharArray_201; }
	inline void set_m_input_CharArray_201(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_input_CharArray_201 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_input_CharArray_201), (void*)value);
	}

	inline static int32_t get_offset_of_m_charArray_Length_202() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charArray_Length_202)); }
	inline int32_t get_m_charArray_Length_202() const { return ___m_charArray_Length_202; }
	inline int32_t* get_address_of_m_charArray_Length_202() { return &___m_charArray_Length_202; }
	inline void set_m_charArray_Length_202(int32_t value)
	{
		___m_charArray_Length_202 = value;
	}

	inline static int32_t get_offset_of_m_totalCharacterCount_203() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_totalCharacterCount_203)); }
	inline int32_t get_m_totalCharacterCount_203() const { return ___m_totalCharacterCount_203; }
	inline int32_t* get_address_of_m_totalCharacterCount_203() { return &___m_totalCharacterCount_203; }
	inline void set_m_totalCharacterCount_203(int32_t value)
	{
		___m_totalCharacterCount_203 = value;
	}

	inline static int32_t get_offset_of_m_SavedWordWrapState_204() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_SavedWordWrapState_204)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedWordWrapState_204() const { return ___m_SavedWordWrapState_204; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedWordWrapState_204() { return &___m_SavedWordWrapState_204; }
	inline void set_m_SavedWordWrapState_204(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedWordWrapState_204 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_204))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_204))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_204))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_204))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_204))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_204))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_204))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_204))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLineState_205() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_SavedLineState_205)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedLineState_205() const { return ___m_SavedLineState_205; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedLineState_205() { return &___m_SavedLineState_205; }
	inline void set_m_SavedLineState_205(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedLineState_205 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_205))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_205))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_205))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_205))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_205))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_205))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_205))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_205))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedEllipsisState_206() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_SavedEllipsisState_206)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedEllipsisState_206() const { return ___m_SavedEllipsisState_206; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedEllipsisState_206() { return &___m_SavedEllipsisState_206; }
	inline void set_m_SavedEllipsisState_206(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedEllipsisState_206 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_206))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_206))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_206))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_206))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_206))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_206))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_206))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_206))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLastValidState_207() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_SavedLastValidState_207)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedLastValidState_207() const { return ___m_SavedLastValidState_207; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedLastValidState_207() { return &___m_SavedLastValidState_207; }
	inline void set_m_SavedLastValidState_207(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedLastValidState_207 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_207))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_207))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_207))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_207))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_207))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_207))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_207))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_207))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedSoftLineBreakState_208() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_SavedSoftLineBreakState_208)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedSoftLineBreakState_208() const { return ___m_SavedSoftLineBreakState_208; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedSoftLineBreakState_208() { return &___m_SavedSoftLineBreakState_208; }
	inline void set_m_SavedSoftLineBreakState_208(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedSoftLineBreakState_208 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_208))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_208))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_208))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_208))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_208))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_208))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_208))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_208))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_EllipsisInsertionCandidateStack_209() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_EllipsisInsertionCandidateStack_209)); }
	inline TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  get_m_EllipsisInsertionCandidateStack_209() const { return ___m_EllipsisInsertionCandidateStack_209; }
	inline TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7 * get_address_of_m_EllipsisInsertionCandidateStack_209() { return &___m_EllipsisInsertionCandidateStack_209; }
	inline void set_m_EllipsisInsertionCandidateStack_209(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  value)
	{
		___m_EllipsisInsertionCandidateStack_209 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_EllipsisInsertionCandidateStack_209))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___textInfo_36), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_characterCount_210() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_characterCount_210)); }
	inline int32_t get_m_characterCount_210() const { return ___m_characterCount_210; }
	inline int32_t* get_address_of_m_characterCount_210() { return &___m_characterCount_210; }
	inline void set_m_characterCount_210(int32_t value)
	{
		___m_characterCount_210 = value;
	}

	inline static int32_t get_offset_of_m_firstCharacterOfLine_211() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstCharacterOfLine_211)); }
	inline int32_t get_m_firstCharacterOfLine_211() const { return ___m_firstCharacterOfLine_211; }
	inline int32_t* get_address_of_m_firstCharacterOfLine_211() { return &___m_firstCharacterOfLine_211; }
	inline void set_m_firstCharacterOfLine_211(int32_t value)
	{
		___m_firstCharacterOfLine_211 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacterOfLine_212() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstVisibleCharacterOfLine_212)); }
	inline int32_t get_m_firstVisibleCharacterOfLine_212() const { return ___m_firstVisibleCharacterOfLine_212; }
	inline int32_t* get_address_of_m_firstVisibleCharacterOfLine_212() { return &___m_firstVisibleCharacterOfLine_212; }
	inline void set_m_firstVisibleCharacterOfLine_212(int32_t value)
	{
		___m_firstVisibleCharacterOfLine_212 = value;
	}

	inline static int32_t get_offset_of_m_lastCharacterOfLine_213() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lastCharacterOfLine_213)); }
	inline int32_t get_m_lastCharacterOfLine_213() const { return ___m_lastCharacterOfLine_213; }
	inline int32_t* get_address_of_m_lastCharacterOfLine_213() { return &___m_lastCharacterOfLine_213; }
	inline void set_m_lastCharacterOfLine_213(int32_t value)
	{
		___m_lastCharacterOfLine_213 = value;
	}

	inline static int32_t get_offset_of_m_lastVisibleCharacterOfLine_214() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lastVisibleCharacterOfLine_214)); }
	inline int32_t get_m_lastVisibleCharacterOfLine_214() const { return ___m_lastVisibleCharacterOfLine_214; }
	inline int32_t* get_address_of_m_lastVisibleCharacterOfLine_214() { return &___m_lastVisibleCharacterOfLine_214; }
	inline void set_m_lastVisibleCharacterOfLine_214(int32_t value)
	{
		___m_lastVisibleCharacterOfLine_214 = value;
	}

	inline static int32_t get_offset_of_m_lineNumber_215() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineNumber_215)); }
	inline int32_t get_m_lineNumber_215() const { return ___m_lineNumber_215; }
	inline int32_t* get_address_of_m_lineNumber_215() { return &___m_lineNumber_215; }
	inline void set_m_lineNumber_215(int32_t value)
	{
		___m_lineNumber_215 = value;
	}

	inline static int32_t get_offset_of_m_lineVisibleCharacterCount_216() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineVisibleCharacterCount_216)); }
	inline int32_t get_m_lineVisibleCharacterCount_216() const { return ___m_lineVisibleCharacterCount_216; }
	inline int32_t* get_address_of_m_lineVisibleCharacterCount_216() { return &___m_lineVisibleCharacterCount_216; }
	inline void set_m_lineVisibleCharacterCount_216(int32_t value)
	{
		___m_lineVisibleCharacterCount_216 = value;
	}

	inline static int32_t get_offset_of_m_pageNumber_217() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_pageNumber_217)); }
	inline int32_t get_m_pageNumber_217() const { return ___m_pageNumber_217; }
	inline int32_t* get_address_of_m_pageNumber_217() { return &___m_pageNumber_217; }
	inline void set_m_pageNumber_217(int32_t value)
	{
		___m_pageNumber_217 = value;
	}

	inline static int32_t get_offset_of_m_PageAscender_218() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PageAscender_218)); }
	inline float get_m_PageAscender_218() const { return ___m_PageAscender_218; }
	inline float* get_address_of_m_PageAscender_218() { return &___m_PageAscender_218; }
	inline void set_m_PageAscender_218(float value)
	{
		___m_PageAscender_218 = value;
	}

	inline static int32_t get_offset_of_m_maxTextAscender_219() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxTextAscender_219)); }
	inline float get_m_maxTextAscender_219() const { return ___m_maxTextAscender_219; }
	inline float* get_address_of_m_maxTextAscender_219() { return &___m_maxTextAscender_219; }
	inline void set_m_maxTextAscender_219(float value)
	{
		___m_maxTextAscender_219 = value;
	}

	inline static int32_t get_offset_of_m_maxCapHeight_220() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxCapHeight_220)); }
	inline float get_m_maxCapHeight_220() const { return ___m_maxCapHeight_220; }
	inline float* get_address_of_m_maxCapHeight_220() { return &___m_maxCapHeight_220; }
	inline void set_m_maxCapHeight_220(float value)
	{
		___m_maxCapHeight_220 = value;
	}

	inline static int32_t get_offset_of_m_ElementAscender_221() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ElementAscender_221)); }
	inline float get_m_ElementAscender_221() const { return ___m_ElementAscender_221; }
	inline float* get_address_of_m_ElementAscender_221() { return &___m_ElementAscender_221; }
	inline void set_m_ElementAscender_221(float value)
	{
		___m_ElementAscender_221 = value;
	}

	inline static int32_t get_offset_of_m_ElementDescender_222() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ElementDescender_222)); }
	inline float get_m_ElementDescender_222() const { return ___m_ElementDescender_222; }
	inline float* get_address_of_m_ElementDescender_222() { return &___m_ElementDescender_222; }
	inline void set_m_ElementDescender_222(float value)
	{
		___m_ElementDescender_222 = value;
	}

	inline static int32_t get_offset_of_m_maxLineAscender_223() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxLineAscender_223)); }
	inline float get_m_maxLineAscender_223() const { return ___m_maxLineAscender_223; }
	inline float* get_address_of_m_maxLineAscender_223() { return &___m_maxLineAscender_223; }
	inline void set_m_maxLineAscender_223(float value)
	{
		___m_maxLineAscender_223 = value;
	}

	inline static int32_t get_offset_of_m_maxLineDescender_224() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxLineDescender_224)); }
	inline float get_m_maxLineDescender_224() const { return ___m_maxLineDescender_224; }
	inline float* get_address_of_m_maxLineDescender_224() { return &___m_maxLineDescender_224; }
	inline void set_m_maxLineDescender_224(float value)
	{
		___m_maxLineDescender_224 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineAscender_225() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_startOfLineAscender_225)); }
	inline float get_m_startOfLineAscender_225() const { return ___m_startOfLineAscender_225; }
	inline float* get_address_of_m_startOfLineAscender_225() { return &___m_startOfLineAscender_225; }
	inline void set_m_startOfLineAscender_225(float value)
	{
		___m_startOfLineAscender_225 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineDescender_226() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_startOfLineDescender_226)); }
	inline float get_m_startOfLineDescender_226() const { return ___m_startOfLineDescender_226; }
	inline float* get_address_of_m_startOfLineDescender_226() { return &___m_startOfLineDescender_226; }
	inline void set_m_startOfLineDescender_226(float value)
	{
		___m_startOfLineDescender_226 = value;
	}

	inline static int32_t get_offset_of_m_lineOffset_227() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineOffset_227)); }
	inline float get_m_lineOffset_227() const { return ___m_lineOffset_227; }
	inline float* get_address_of_m_lineOffset_227() { return &___m_lineOffset_227; }
	inline void set_m_lineOffset_227(float value)
	{
		___m_lineOffset_227 = value;
	}

	inline static int32_t get_offset_of_m_meshExtents_228() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_meshExtents_228)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_m_meshExtents_228() const { return ___m_meshExtents_228; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_m_meshExtents_228() { return &___m_meshExtents_228; }
	inline void set_m_meshExtents_228(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___m_meshExtents_228 = value;
	}

	inline static int32_t get_offset_of_m_htmlColor_229() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_htmlColor_229)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_htmlColor_229() const { return ___m_htmlColor_229; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_htmlColor_229() { return &___m_htmlColor_229; }
	inline void set_m_htmlColor_229(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_htmlColor_229 = value;
	}

	inline static int32_t get_offset_of_m_colorStack_230() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorStack_230)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_colorStack_230() const { return ___m_colorStack_230; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_colorStack_230() { return &___m_colorStack_230; }
	inline void set_m_colorStack_230(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_colorStack_230 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorStack_230))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_underlineColorStack_231() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_underlineColorStack_231)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_underlineColorStack_231() const { return ___m_underlineColorStack_231; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_underlineColorStack_231() { return &___m_underlineColorStack_231; }
	inline void set_m_underlineColorStack_231(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_underlineColorStack_231 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_underlineColorStack_231))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_strikethroughColorStack_232() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_strikethroughColorStack_232)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_strikethroughColorStack_232() const { return ___m_strikethroughColorStack_232; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_strikethroughColorStack_232() { return &___m_strikethroughColorStack_232; }
	inline void set_m_strikethroughColorStack_232(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_strikethroughColorStack_232 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_strikethroughColorStack_232))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_HighlightStateStack_233() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_HighlightStateStack_233)); }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  get_m_HighlightStateStack_233() const { return ___m_HighlightStateStack_233; }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E * get_address_of_m_HighlightStateStack_233() { return &___m_HighlightStateStack_233; }
	inline void set_m_HighlightStateStack_233(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  value)
	{
		___m_HighlightStateStack_233 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_HighlightStateStack_233))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_colorGradientPreset_234() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientPreset_234)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_colorGradientPreset_234() const { return ___m_colorGradientPreset_234; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_colorGradientPreset_234() { return &___m_colorGradientPreset_234; }
	inline void set_m_colorGradientPreset_234(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_colorGradientPreset_234 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_colorGradientPreset_234), (void*)value);
	}

	inline static int32_t get_offset_of_m_colorGradientStack_235() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientStack_235)); }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  get_m_colorGradientStack_235() const { return ___m_colorGradientStack_235; }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 * get_address_of_m_colorGradientStack_235() { return &___m_colorGradientStack_235; }
	inline void set_m_colorGradientStack_235(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  value)
	{
		___m_colorGradientStack_235 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_235))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_235))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_colorGradientPresetIsTinted_236() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientPresetIsTinted_236)); }
	inline bool get_m_colorGradientPresetIsTinted_236() const { return ___m_colorGradientPresetIsTinted_236; }
	inline bool* get_address_of_m_colorGradientPresetIsTinted_236() { return &___m_colorGradientPresetIsTinted_236; }
	inline void set_m_colorGradientPresetIsTinted_236(bool value)
	{
		___m_colorGradientPresetIsTinted_236 = value;
	}

	inline static int32_t get_offset_of_m_tabSpacing_237() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tabSpacing_237)); }
	inline float get_m_tabSpacing_237() const { return ___m_tabSpacing_237; }
	inline float* get_address_of_m_tabSpacing_237() { return &___m_tabSpacing_237; }
	inline void set_m_tabSpacing_237(float value)
	{
		___m_tabSpacing_237 = value;
	}

	inline static int32_t get_offset_of_m_spacing_238() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spacing_238)); }
	inline float get_m_spacing_238() const { return ___m_spacing_238; }
	inline float* get_address_of_m_spacing_238() { return &___m_spacing_238; }
	inline void set_m_spacing_238(float value)
	{
		___m_spacing_238 = value;
	}

	inline static int32_t get_offset_of_m_TextStyleStacks_239() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleStacks_239)); }
	inline TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* get_m_TextStyleStacks_239() const { return ___m_TextStyleStacks_239; }
	inline TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37** get_address_of_m_TextStyleStacks_239() { return &___m_TextStyleStacks_239; }
	inline void set_m_TextStyleStacks_239(TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* value)
	{
		___m_TextStyleStacks_239 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyleStacks_239), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleStackDepth_240() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleStackDepth_240)); }
	inline int32_t get_m_TextStyleStackDepth_240() const { return ___m_TextStyleStackDepth_240; }
	inline int32_t* get_address_of_m_TextStyleStackDepth_240() { return &___m_TextStyleStackDepth_240; }
	inline void set_m_TextStyleStackDepth_240(int32_t value)
	{
		___m_TextStyleStackDepth_240 = value;
	}

	inline static int32_t get_offset_of_m_ItalicAngleStack_241() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ItalicAngleStack_241)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_m_ItalicAngleStack_241() const { return ___m_ItalicAngleStack_241; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_m_ItalicAngleStack_241() { return &___m_ItalicAngleStack_241; }
	inline void set_m_ItalicAngleStack_241(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___m_ItalicAngleStack_241 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ItalicAngleStack_241))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_ItalicAngle_242() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ItalicAngle_242)); }
	inline int32_t get_m_ItalicAngle_242() const { return ___m_ItalicAngle_242; }
	inline int32_t* get_address_of_m_ItalicAngle_242() { return &___m_ItalicAngle_242; }
	inline void set_m_ItalicAngle_242(int32_t value)
	{
		___m_ItalicAngle_242 = value;
	}

	inline static int32_t get_offset_of_m_actionStack_243() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_actionStack_243)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_m_actionStack_243() const { return ___m_actionStack_243; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_m_actionStack_243() { return &___m_actionStack_243; }
	inline void set_m_actionStack_243(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___m_actionStack_243 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_actionStack_243))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_padding_244() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_padding_244)); }
	inline float get_m_padding_244() const { return ___m_padding_244; }
	inline float* get_address_of_m_padding_244() { return &___m_padding_244; }
	inline void set_m_padding_244(float value)
	{
		___m_padding_244 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffset_245() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_baselineOffset_245)); }
	inline float get_m_baselineOffset_245() const { return ___m_baselineOffset_245; }
	inline float* get_address_of_m_baselineOffset_245() { return &___m_baselineOffset_245; }
	inline void set_m_baselineOffset_245(float value)
	{
		___m_baselineOffset_245 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffsetStack_246() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_baselineOffsetStack_246)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_baselineOffsetStack_246() const { return ___m_baselineOffsetStack_246; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_baselineOffsetStack_246() { return &___m_baselineOffsetStack_246; }
	inline void set_m_baselineOffsetStack_246(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_baselineOffsetStack_246 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_baselineOffsetStack_246))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_xAdvance_247() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_xAdvance_247)); }
	inline float get_m_xAdvance_247() const { return ___m_xAdvance_247; }
	inline float* get_address_of_m_xAdvance_247() { return &___m_xAdvance_247; }
	inline void set_m_xAdvance_247(float value)
	{
		___m_xAdvance_247 = value;
	}

	inline static int32_t get_offset_of_m_textElementType_248() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textElementType_248)); }
	inline int32_t get_m_textElementType_248() const { return ___m_textElementType_248; }
	inline int32_t* get_address_of_m_textElementType_248() { return &___m_textElementType_248; }
	inline void set_m_textElementType_248(int32_t value)
	{
		___m_textElementType_248 = value;
	}

	inline static int32_t get_offset_of_m_cached_TextElement_249() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cached_TextElement_249)); }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * get_m_cached_TextElement_249() const { return ___m_cached_TextElement_249; }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 ** get_address_of_m_cached_TextElement_249() { return &___m_cached_TextElement_249; }
	inline void set_m_cached_TextElement_249(TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * value)
	{
		___m_cached_TextElement_249 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_TextElement_249), (void*)value);
	}

	inline static int32_t get_offset_of_m_Ellipsis_250() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_Ellipsis_250)); }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  get_m_Ellipsis_250() const { return ___m_Ellipsis_250; }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F * get_address_of_m_Ellipsis_250() { return &___m_Ellipsis_250; }
	inline void set_m_Ellipsis_250(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  value)
	{
		___m_Ellipsis_250 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_250))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_250))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_250))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Underline_251() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_Underline_251)); }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  get_m_Underline_251() const { return ___m_Underline_251; }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F * get_address_of_m_Underline_251() { return &___m_Underline_251; }
	inline void set_m_Underline_251(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  value)
	{
		___m_Underline_251 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_251))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_251))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_251))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_defaultSpriteAsset_252() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_defaultSpriteAsset_252)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_defaultSpriteAsset_252() const { return ___m_defaultSpriteAsset_252; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_defaultSpriteAsset_252() { return &___m_defaultSpriteAsset_252; }
	inline void set_m_defaultSpriteAsset_252(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_defaultSpriteAsset_252 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultSpriteAsset_252), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentSpriteAsset_253() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentSpriteAsset_253)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_currentSpriteAsset_253() const { return ___m_currentSpriteAsset_253; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_currentSpriteAsset_253() { return &___m_currentSpriteAsset_253; }
	inline void set_m_currentSpriteAsset_253(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_currentSpriteAsset_253 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentSpriteAsset_253), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteCount_254() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteCount_254)); }
	inline int32_t get_m_spriteCount_254() const { return ___m_spriteCount_254; }
	inline int32_t* get_address_of_m_spriteCount_254() { return &___m_spriteCount_254; }
	inline void set_m_spriteCount_254(int32_t value)
	{
		___m_spriteCount_254 = value;
	}

	inline static int32_t get_offset_of_m_spriteIndex_255() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteIndex_255)); }
	inline int32_t get_m_spriteIndex_255() const { return ___m_spriteIndex_255; }
	inline int32_t* get_address_of_m_spriteIndex_255() { return &___m_spriteIndex_255; }
	inline void set_m_spriteIndex_255(int32_t value)
	{
		___m_spriteIndex_255 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimationID_256() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAnimationID_256)); }
	inline int32_t get_m_spriteAnimationID_256() const { return ___m_spriteAnimationID_256; }
	inline int32_t* get_address_of_m_spriteAnimationID_256() { return &___m_spriteAnimationID_256; }
	inline void set_m_spriteAnimationID_256(int32_t value)
	{
		___m_spriteAnimationID_256 = value;
	}

	inline static int32_t get_offset_of_m_ignoreActiveState_257() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ignoreActiveState_257)); }
	inline bool get_m_ignoreActiveState_257() const { return ___m_ignoreActiveState_257; }
	inline bool* get_address_of_m_ignoreActiveState_257() { return &___m_ignoreActiveState_257; }
	inline void set_m_ignoreActiveState_257(bool value)
	{
		___m_ignoreActiveState_257 = value;
	}

	inline static int32_t get_offset_of_k_Power_258() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___k_Power_258)); }
	inline DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* get_k_Power_258() const { return ___k_Power_258; }
	inline DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA** get_address_of_k_Power_258() { return &___k_Power_258; }
	inline void set_k_Power_258(DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* value)
	{
		___k_Power_258 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Power_258), (void*)value);
	}
};

struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields
{
public:
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___s_colorWhite_54;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * ___OnFontAssetRequest_162;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * ___OnSpriteAssetRequest_163;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;

public:
	inline static int32_t get_offset_of_s_colorWhite_54() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___s_colorWhite_54)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_s_colorWhite_54() const { return ___s_colorWhite_54; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_s_colorWhite_54() { return &___s_colorWhite_54; }
	inline void set_s_colorWhite_54(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___s_colorWhite_54 = value;
	}

	inline static int32_t get_offset_of_OnFontAssetRequest_162() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___OnFontAssetRequest_162)); }
	inline Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * get_OnFontAssetRequest_162() const { return ___OnFontAssetRequest_162; }
	inline Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 ** get_address_of_OnFontAssetRequest_162() { return &___OnFontAssetRequest_162; }
	inline void set_OnFontAssetRequest_162(Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * value)
	{
		___OnFontAssetRequest_162 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFontAssetRequest_162), (void*)value);
	}

	inline static int32_t get_offset_of_OnSpriteAssetRequest_163() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___OnSpriteAssetRequest_163)); }
	inline Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * get_OnSpriteAssetRequest_163() const { return ___OnSpriteAssetRequest_163; }
	inline Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA ** get_address_of_OnSpriteAssetRequest_163() { return &___OnSpriteAssetRequest_163; }
	inline void set_OnSpriteAssetRequest_163(Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * value)
	{
		___OnSpriteAssetRequest_163 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpriteAssetRequest_163), (void*)value);
	}

	inline static int32_t get_offset_of_k_LargePositiveVector2_259() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveVector2_259)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_LargePositiveVector2_259() const { return ___k_LargePositiveVector2_259; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_LargePositiveVector2_259() { return &___k_LargePositiveVector2_259; }
	inline void set_k_LargePositiveVector2_259(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_LargePositiveVector2_259 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeVector2_260() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeVector2_260)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_LargeNegativeVector2_260() const { return ___k_LargeNegativeVector2_260; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_LargeNegativeVector2_260() { return &___k_LargeNegativeVector2_260; }
	inline void set_k_LargeNegativeVector2_260(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_LargeNegativeVector2_260 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveFloat_261() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveFloat_261)); }
	inline float get_k_LargePositiveFloat_261() const { return ___k_LargePositiveFloat_261; }
	inline float* get_address_of_k_LargePositiveFloat_261() { return &___k_LargePositiveFloat_261; }
	inline void set_k_LargePositiveFloat_261(float value)
	{
		___k_LargePositiveFloat_261 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeFloat_262() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeFloat_262)); }
	inline float get_k_LargeNegativeFloat_262() const { return ___k_LargeNegativeFloat_262; }
	inline float* get_address_of_k_LargeNegativeFloat_262() { return &___k_LargeNegativeFloat_262; }
	inline void set_k_LargeNegativeFloat_262(float value)
	{
		___k_LargeNegativeFloat_262 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveInt_263() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveInt_263)); }
	inline int32_t get_k_LargePositiveInt_263() const { return ___k_LargePositiveInt_263; }
	inline int32_t* get_address_of_k_LargePositiveInt_263() { return &___k_LargePositiveInt_263; }
	inline void set_k_LargePositiveInt_263(int32_t value)
	{
		___k_LargePositiveInt_263 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeInt_264() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeInt_264)); }
	inline int32_t get_k_LargeNegativeInt_264() const { return ___k_LargeNegativeInt_264; }
	inline int32_t* get_address_of_k_LargeNegativeInt_264() { return &___k_LargeNegativeInt_264; }
	inline void set_k_LargeNegativeInt_264(int32_t value)
	{
		___k_LargeNegativeInt_264 = value;
	}
};


// TMPro.TextMeshPro
struct  TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4  : public TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262
{
public:
	// System.Boolean TMPro.TextMeshPro::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_265;
	// System.Single TMPro.TextMeshPro::m_previousLossyScaleY
	float ___m_previousLossyScaleY_266;
	// UnityEngine.Renderer TMPro.TextMeshPro::m_renderer
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___m_renderer_267;
	// UnityEngine.MeshFilter TMPro.TextMeshPro::m_meshFilter
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___m_meshFilter_268;
	// System.Boolean TMPro.TextMeshPro::m_isFirstAllocation
	bool ___m_isFirstAllocation_269;
	// System.Int32 TMPro.TextMeshPro::m_max_characters
	int32_t ___m_max_characters_270;
	// System.Int32 TMPro.TextMeshPro::m_max_numberOfLines
	int32_t ___m_max_numberOfLines_271;
	// TMPro.TMP_SubMesh[] TMPro.TextMeshPro::m_subTextObjects
	TMP_SubMeshU5BU5D_t2EF6E7C00AD0C05C7BD3E565CF716B62BED324A2* ___m_subTextObjects_272;
	// TMPro.MaskingTypes TMPro.TextMeshPro::m_maskType
	int32_t ___m_maskType_273;
	// UnityEngine.Matrix4x4 TMPro.TextMeshPro::m_EnvMapMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_EnvMapMatrix_274;
	// UnityEngine.Vector3[] TMPro.TextMeshPro::m_RectTransformCorners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_RectTransformCorners_275;
	// System.Boolean TMPro.TextMeshPro::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_276;
	// System.Int32 TMPro.TextMeshPro::_SortingLayerID
	int32_t ____SortingLayerID_277;
	// System.Int32 TMPro.TextMeshPro::_SortingOrder
	int32_t ____SortingOrder_278;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshPro::OnPreRenderText
	Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * ___OnPreRenderText_279;
	// System.Boolean TMPro.TextMeshPro::m_currentAutoSizeMode
	bool ___m_currentAutoSizeMode_280;

public:
	inline static int32_t get_offset_of_m_hasFontAssetChanged_265() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_hasFontAssetChanged_265)); }
	inline bool get_m_hasFontAssetChanged_265() const { return ___m_hasFontAssetChanged_265; }
	inline bool* get_address_of_m_hasFontAssetChanged_265() { return &___m_hasFontAssetChanged_265; }
	inline void set_m_hasFontAssetChanged_265(bool value)
	{
		___m_hasFontAssetChanged_265 = value;
	}

	inline static int32_t get_offset_of_m_previousLossyScaleY_266() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_previousLossyScaleY_266)); }
	inline float get_m_previousLossyScaleY_266() const { return ___m_previousLossyScaleY_266; }
	inline float* get_address_of_m_previousLossyScaleY_266() { return &___m_previousLossyScaleY_266; }
	inline void set_m_previousLossyScaleY_266(float value)
	{
		___m_previousLossyScaleY_266 = value;
	}

	inline static int32_t get_offset_of_m_renderer_267() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_renderer_267)); }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * get_m_renderer_267() const { return ___m_renderer_267; }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** get_address_of_m_renderer_267() { return &___m_renderer_267; }
	inline void set_m_renderer_267(Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		___m_renderer_267 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_renderer_267), (void*)value);
	}

	inline static int32_t get_offset_of_m_meshFilter_268() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_meshFilter_268)); }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * get_m_meshFilter_268() const { return ___m_meshFilter_268; }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A ** get_address_of_m_meshFilter_268() { return &___m_meshFilter_268; }
	inline void set_m_meshFilter_268(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * value)
	{
		___m_meshFilter_268 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_meshFilter_268), (void*)value);
	}

	inline static int32_t get_offset_of_m_isFirstAllocation_269() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_isFirstAllocation_269)); }
	inline bool get_m_isFirstAllocation_269() const { return ___m_isFirstAllocation_269; }
	inline bool* get_address_of_m_isFirstAllocation_269() { return &___m_isFirstAllocation_269; }
	inline void set_m_isFirstAllocation_269(bool value)
	{
		___m_isFirstAllocation_269 = value;
	}

	inline static int32_t get_offset_of_m_max_characters_270() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_max_characters_270)); }
	inline int32_t get_m_max_characters_270() const { return ___m_max_characters_270; }
	inline int32_t* get_address_of_m_max_characters_270() { return &___m_max_characters_270; }
	inline void set_m_max_characters_270(int32_t value)
	{
		___m_max_characters_270 = value;
	}

	inline static int32_t get_offset_of_m_max_numberOfLines_271() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_max_numberOfLines_271)); }
	inline int32_t get_m_max_numberOfLines_271() const { return ___m_max_numberOfLines_271; }
	inline int32_t* get_address_of_m_max_numberOfLines_271() { return &___m_max_numberOfLines_271; }
	inline void set_m_max_numberOfLines_271(int32_t value)
	{
		___m_max_numberOfLines_271 = value;
	}

	inline static int32_t get_offset_of_m_subTextObjects_272() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_subTextObjects_272)); }
	inline TMP_SubMeshU5BU5D_t2EF6E7C00AD0C05C7BD3E565CF716B62BED324A2* get_m_subTextObjects_272() const { return ___m_subTextObjects_272; }
	inline TMP_SubMeshU5BU5D_t2EF6E7C00AD0C05C7BD3E565CF716B62BED324A2** get_address_of_m_subTextObjects_272() { return &___m_subTextObjects_272; }
	inline void set_m_subTextObjects_272(TMP_SubMeshU5BU5D_t2EF6E7C00AD0C05C7BD3E565CF716B62BED324A2* value)
	{
		___m_subTextObjects_272 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subTextObjects_272), (void*)value);
	}

	inline static int32_t get_offset_of_m_maskType_273() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_maskType_273)); }
	inline int32_t get_m_maskType_273() const { return ___m_maskType_273; }
	inline int32_t* get_address_of_m_maskType_273() { return &___m_maskType_273; }
	inline void set_m_maskType_273(int32_t value)
	{
		___m_maskType_273 = value;
	}

	inline static int32_t get_offset_of_m_EnvMapMatrix_274() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_EnvMapMatrix_274)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_EnvMapMatrix_274() const { return ___m_EnvMapMatrix_274; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_EnvMapMatrix_274() { return &___m_EnvMapMatrix_274; }
	inline void set_m_EnvMapMatrix_274(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_EnvMapMatrix_274 = value;
	}

	inline static int32_t get_offset_of_m_RectTransformCorners_275() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_RectTransformCorners_275)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_RectTransformCorners_275() const { return ___m_RectTransformCorners_275; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_RectTransformCorners_275() { return &___m_RectTransformCorners_275; }
	inline void set_m_RectTransformCorners_275(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_RectTransformCorners_275 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransformCorners_275), (void*)value);
	}

	inline static int32_t get_offset_of_m_isRegisteredForEvents_276() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_isRegisteredForEvents_276)); }
	inline bool get_m_isRegisteredForEvents_276() const { return ___m_isRegisteredForEvents_276; }
	inline bool* get_address_of_m_isRegisteredForEvents_276() { return &___m_isRegisteredForEvents_276; }
	inline void set_m_isRegisteredForEvents_276(bool value)
	{
		___m_isRegisteredForEvents_276 = value;
	}

	inline static int32_t get_offset_of__SortingLayerID_277() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ____SortingLayerID_277)); }
	inline int32_t get__SortingLayerID_277() const { return ____SortingLayerID_277; }
	inline int32_t* get_address_of__SortingLayerID_277() { return &____SortingLayerID_277; }
	inline void set__SortingLayerID_277(int32_t value)
	{
		____SortingLayerID_277 = value;
	}

	inline static int32_t get_offset_of__SortingOrder_278() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ____SortingOrder_278)); }
	inline int32_t get__SortingOrder_278() const { return ____SortingOrder_278; }
	inline int32_t* get_address_of__SortingOrder_278() { return &____SortingOrder_278; }
	inline void set__SortingOrder_278(int32_t value)
	{
		____SortingOrder_278 = value;
	}

	inline static int32_t get_offset_of_OnPreRenderText_279() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___OnPreRenderText_279)); }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * get_OnPreRenderText_279() const { return ___OnPreRenderText_279; }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 ** get_address_of_OnPreRenderText_279() { return &___OnPreRenderText_279; }
	inline void set_OnPreRenderText_279(Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * value)
	{
		___OnPreRenderText_279 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreRenderText_279), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentAutoSizeMode_280() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_currentAutoSizeMode_280)); }
	inline bool get_m_currentAutoSizeMode_280() const { return ___m_currentAutoSizeMode_280; }
	inline bool* get_address_of_m_currentAutoSizeMode_280() { return &___m_currentAutoSizeMode_280; }
	inline void set_m_currentAutoSizeMode_280(bool value)
	{
		___m_currentAutoSizeMode_280 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// TMPro.TMP_WordInfo[]
struct TMP_WordInfoU5BU5D_t702DDE9D8C7BD02F4D744F914B94BAB83E0F9502  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TMP_WordInfo_t168F70FD30F4875E4C84D40F9F30FCB5D2EB895C  m_Items[1];

public:
	inline TMP_WordInfo_t168F70FD30F4875E4C84D40F9F30FCB5D2EB895C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_WordInfo_t168F70FD30F4875E4C84D40F9F30FCB5D2EB895C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_WordInfo_t168F70FD30F4875E4C84D40F9F30FCB5D2EB895C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textComponent_0), (void*)NULL);
	}
	inline TMP_WordInfo_t168F70FD30F4875E4C84D40F9F30FCB5D2EB895C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_WordInfo_t168F70FD30F4875E4C84D40F9F30FCB5D2EB895C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_WordInfo_t168F70FD30F4875E4C84D40F9F30FCB5D2EB895C  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textComponent_0), (void*)NULL);
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  m_Items[1];

public:
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		m_Items[index] = value;
	}
};
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  m_Items[1];

public:
	inline TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElement_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spriteAsset_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_8), (void*)NULL);
		#endif
	}
	inline TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElement_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spriteAsset_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_8), (void*)NULL);
		#endif
	}
};
// TMPro.TMP_MeshInfo[]
struct TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176  m_Items[1];

public:
	inline TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___mesh_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___vertices_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___normals_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tangents_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs0_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs2_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___colors32_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___triangles_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_13), (void*)NULL);
		#endif
	}
	inline TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___mesh_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___vertices_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___normals_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tangents_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs0_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs2_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___colors32_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___triangles_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_13), (void*)NULL);
		#endif
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// TMPro.Examples.VertexJitter/VertexAnim[]
struct VertexAnimU5BU5D_t069E9FCD87DE8FF65BE288FDB2834711D933AAFF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4  m_Items[1];

public:
	inline VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[][]
struct Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* m_Items[1];

public:
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TMPro.TMP_LineInfo[]
struct TMP_LineInfoU5BU5D_t2B188FB1B6C36641B7FEB177ACC798FAC9806C3D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  m_Items[1];

public:
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  m_Items[1];

public:
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  m_Items[1];

public:
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};


// System.Void UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m5B554CF0C475AC7797000D04E2CB8751B27D4D71_gshared (UnityEvent_2_t5304A7BB9DB39BB3BA59CAF408F8EA7341658E2C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_m6FBC41AB3A4D2642700248D95261F0CFC35E5421_gshared (UnityEvent_3_t148E7A33D4F13377D0B9BD5BF04B858C35574612 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_m325ED98D17339E7E9741293F754CBA51F45047E2_gshared (UnityEvent_3_tDD6AB2EAC19D9D5162F6AFCBBF016F0F9600E7E9 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_gshared_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C_gshared (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m30CC5EC96F262C98EE9BFCFC9CF8D09F67E0A23D_gshared (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_gshared (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, float ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_gshared_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Comparison`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_mAA110A3F5163760D63E663F9545B370983389F73_gshared (Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mA28ABFC1E6C7A17EA71BC9C2DBED9CC3EE8DCDC3_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C * ___comparison0, const RuntimeMethod* method);

// System.Void UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>::.ctor()
inline void UnityEvent_2__ctor_m5B554CF0C475AC7797000D04E2CB8751B27D4D71 (UnityEvent_2_t5304A7BB9DB39BB3BA59CAF408F8EA7341658E2C * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t5304A7BB9DB39BB3BA59CAF408F8EA7341658E2C *, const RuntimeMethod*))UnityEvent_2__ctor_m5B554CF0C475AC7797000D04E2CB8751B27D4D71_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`3<System.String,System.Int32,System.Int32>::.ctor()
inline void UnityEvent_3__ctor_m0CD9C7A9A556BDC525BE6B44F7EF5F51891E2390 (UnityEvent_3_tB2C1BFEE5A56978DECD9BA6756512E2CC49CB9FE * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_tB2C1BFEE5A56978DECD9BA6756512E2CC49CB9FE *, const RuntimeMethod*))UnityEvent_3__ctor_m6FBC41AB3A4D2642700248D95261F0CFC35E5421_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`3<System.String,System.String,System.Int32>::.ctor()
inline void UnityEvent_3__ctor_m80ACC059EBFB58F62BF5BD0458FE0178C5FB601B (UnityEvent_3_t99EBCF5B18C77267336F36583A2B69BE0535E6E9 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_t99EBCF5B18C77267336F36583A2B69BE0535E6E9 *, const RuntimeMethod*))UnityEvent_3__ctor_m325ED98D17339E7E9741293F754CBA51F45047E2_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// TMPro.TMP_TextInfo TMPro.TMP_Text::get_textInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * TMP_Text_get_textInfo_mB006DF4283F14B0E49B9FCC0025D99C29FA534BF_inline (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * __this, const RuntimeMethod* method);
// System.Void TMPro.TMP_Text::set_maxVisibleCharacters(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_maxVisibleCharacters_mDD9A133BF38D58B225A8943F19AAC405AC1AAC94 (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.TextMesh::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  TextMesh_get_color_m81016B82BB08E4CBEDF00DBC2AEF0DBD5894EC4F (TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * __this, const RuntimeMethod* method);
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___c0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04 (TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94 (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623 (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___c0, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_color_m276CE9AB9F88B34C0A9C6DD5300FC1123102D3DE (TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean TMPro.TMPro_ExtensionMethods::Compare(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TMPro_ExtensionMethods_Compare_mE7F36F938B1C610943DFA2751E90B454C0215FDB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v10, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v21, int32_t ___accuracy2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean TMPro.TMPro_ExtensionMethods::Compare(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TMPro_ExtensionMethods_Compare_mEA4CA9AFF6F80E497233C9CC433A189C928DCBAD (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___q10, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___q21, int32_t ___accuracy2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_forward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_forward_mAE46B156F55F2F90AB495B17F7C20BF59A5D7D4D (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator TMPro.Examples.TextMeshProFloatingText::DisplayTextMeshFloatingText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProFloatingText_DisplayTextMeshFloatingText_m22691E6EA41B7FCF782B03954865D8E3B890E4DF (TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Collections.IEnumerator TMPro.Examples.TextMeshProFloatingText::DisplayTextMeshProFloatingText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProFloatingText_DisplayTextMeshProFloatingText_m3C381B8A53C58CF001D7A9212B8BDA6F368CC2C7 (TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// TMPro.TMP_MeshInfo[] TMPro.TMP_TextInfo::CopyMeshInfoVertexData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* TMP_TextInfo_CopyMeshInfoVertexData_m76E3357D987643644CE791EBEED4AB16A0ABFA58 (TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::PingPong(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PingPong_m60A376FCA7185AA90B41A22379058923565193D1 (float ___t0, float ___length1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::SmoothStep(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_SmoothStep_m42903D75966D0858460ACDF8CB825B874725FFF6 (float ___from0, float ___to1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___q1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
inline float List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  float (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, int32_t, const RuntimeMethod*))List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Single::CompareTo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4 (float* __this, float ___value0, const RuntimeMethod* method);
// System.Void TMPro.Examples.VertexZoom/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m4EC5F8042B5AC645EA7D0913E50FD22144DBD348 (U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
inline void List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, const RuntimeMethod*))List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
inline void List_1_Clear_m30CC5EC96F262C98EE9BFCFC9CF8D09F67E0A23D (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, const RuntimeMethod*))List_1_Clear_m30CC5EC96F262C98EE9BFCFC9CF8D09F67E0A23D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::Add(!0)
inline void List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, float ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, float, const RuntimeMethod*))List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
inline int32_t List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, const RuntimeMethod*))List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared)(__this, ___item0, method);
}
// System.Void System.Comparison`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_mAA110A3F5163760D63E663F9545B370983389F73 (Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C *, RuntimeObject *, intptr_t, const RuntimeMethod*))Comparison_1__ctor_mAA110A3F5163760D63E663F9545B370983389F73_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<!0>)
inline void List_1_Sort_mA28ABFC1E6C7A17EA71BC9C2DBED9CC3EE8DCDC3 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C * ___comparison0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C *, const RuntimeMethod*))List_1_Sort_mA28ABFC1E6C7A17EA71BC9C2DBED9CC3EE8DCDC3_gshared)(__this, ___comparison0, method);
}
// System.Void TMPro.TMP_MeshInfo::SortGeometry(System.Collections.Generic.IList`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_MeshInfo_SortGeometry_m2C2FF0664600CA70E7A920FFF64C1BBD9026FD4D (TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176 * __this, RuntimeObject* ___sortingOrder0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_mF6FED6DDACBAE3EAF28BFBF257A0D5356FCF3AAC (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_colors32(UnityEngine.Color32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_colors32_m0EA838C15BBD01710A4EE1A475DB585EB9B5BD91 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::set_preWrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_preWrapMode_m39008E29D7419438020138A0DE50999BB89266AF (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::set_postWrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_postWrapMode_mC7079F70E85156F73D8BA2E06840F7E2BEDF8568 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void TMPro.TMP_Text::set_havePropertiesChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_havePropertiesChanged_mF7E4FC98920C094FD42126A41DCC7601D5F95357 (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.AnimationCurve TMPro.Examples.WarpTextExample::CopyAnimationCurve(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * WarpTextExample_CopyAnimationCurve_m744026E638662DA48AC81ED21E0589E3E4E05FAB (WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * __this, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve0, const RuntimeMethod* method);
// System.Boolean TMPro.TMP_Text::get_havePropertiesChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TMP_Text_get_havePropertiesChanged_mF777F1F3A620EBF1DB95F83812597F13D49295B2_inline (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * __this, const RuntimeMethod* method);
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Keyframe::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, const RuntimeMethod* method);
// UnityEngine.Bounds TMPro.TMP_Text::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  TMP_Text_get_bounds_m61214849DFA057D70FDB3510D868B99641B0F1B8 (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TMPro.TMP_TextEventHandler/CharacterSelectionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterSelectionEvent__ctor_m06BC183AF31BA4A2055A44514BC3FF0539DD04C7 (CharacterSelectionEvent_t3F24E19931D51E4616A11C4D690BC0B3D738D64F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_m5B554CF0C475AC7797000D04E2CB8751B27D4D71_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m5B554CF0C475AC7797000D04E2CB8751B27D4D71(__this, /*hidden argument*/UnityEvent_2__ctor_m5B554CF0C475AC7797000D04E2CB8751B27D4D71_RuntimeMethod_var);
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
// System.Void TMPro.TMP_TextEventHandler/LineSelectionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineSelectionEvent__ctor_m5D735FDA9B71B9147C6F791B331498F145D75018 (LineSelectionEvent_tBD0FAC01BF9DE63FE60817F0B760E24E951C4712 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3__ctor_m0CD9C7A9A556BDC525BE6B44F7EF5F51891E2390_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_3__ctor_m0CD9C7A9A556BDC525BE6B44F7EF5F51891E2390(__this, /*hidden argument*/UnityEvent_3__ctor_m0CD9C7A9A556BDC525BE6B44F7EF5F51891E2390_RuntimeMethod_var);
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
// System.Void TMPro.TMP_TextEventHandler/LinkSelectionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkSelectionEvent__ctor_m7AB7977D0D0F8883C5A98DD6BB2D390BC3CAB8E0 (LinkSelectionEvent_tDDEFCE74540F682E52A3445C536D3F29A91F98AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3__ctor_m80ACC059EBFB58F62BF5BD0458FE0178C5FB601B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_3__ctor_m80ACC059EBFB58F62BF5BD0458FE0178C5FB601B(__this, /*hidden argument*/UnityEvent_3__ctor_m80ACC059EBFB58F62BF5BD0458FE0178C5FB601B_RuntimeMethod_var);
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
// System.Void TMPro.TMP_TextEventHandler/SpriteSelectionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteSelectionEvent__ctor_m0F760052E9A5AF44A7AF7AC006CB4B24809590F2 (SpriteSelectionEvent_tAF7524A6DF6D4849E206726E3AC085BCB91B4618 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_m5B554CF0C475AC7797000D04E2CB8751B27D4D71_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m5B554CF0C475AC7797000D04E2CB8751B27D4D71(__this, /*hidden argument*/UnityEvent_2__ctor_m5B554CF0C475AC7797000D04E2CB8751B27D4D71_RuntimeMethod_var);
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
// System.Void TMPro.TMP_TextEventHandler/WordSelectionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordSelectionEvent__ctor_m106CDEB17C520C9D20CE7120DE6BBBDEDB48886C (WordSelectionEvent_t3FE09C7D7E726DC634003A28E2B3CB78B42AE6F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3__ctor_m0CD9C7A9A556BDC525BE6B44F7EF5F51891E2390_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_3__ctor_m0CD9C7A9A556BDC525BE6B44F7EF5F51891E2390(__this, /*hidden argument*/UnityEvent_3__ctor_m0CD9C7A9A556BDC525BE6B44F7EF5F51891E2390_RuntimeMethod_var);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TMPro.Examples.TeleType/<Start>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__4__ctor_mF3575DBEBF4F153F6A899AF3362940298C11B629 (U3CStartU3Ed__4_t70319341791F5D1BC6F878503A507E845E98C44E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TMPro.Examples.TeleType/<Start>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__4_System_IDisposable_Dispose_m6DABFDBC2A313BF6DD90AA1C43B4EF9D6249CBE9 (U3CStartU3Ed__4_t70319341791F5D1BC6F878503A507E845E98C44E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TMPro.Examples.TeleType/<Start>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__4_MoveNext_mEF7A3215376BDFB52C3DA9D26FF0459074E89715 (U3CStartU3Ed__4_t70319341791F5D1BC6F878503A507E845E98C44E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TeleType_t92B5ED4FE818F912A562F085CE035F6B42834934 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TeleType_t92B5ED4FE818F912A562F085CE035F6B42834934 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_009e;
			}
			case 2:
			{
				goto IL_00cf;
			}
			case 3:
			{
				goto IL_0100;
			}
			case 4:
			{
				goto IL_012e;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// m_textMeshPro.ForceMeshUpdate();
		TeleType_t92B5ED4FE818F912A562F085CE035F6B42834934 * L_3 = V_1;
		NullCheck(L_3);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_4 = L_3->get_m_textMeshPro_6();
		NullCheck(L_4);
		VirtActionInvoker2< bool, bool >::Invoke(106 /* System.Void TMPro.TMP_Text::ForceMeshUpdate(System.Boolean,System.Boolean) */, L_4, (bool)0, (bool)0);
		// int totalVisibleCharacters = m_textMeshPro.textInfo.characterCount; // Get # of Visible Character in text object
		TeleType_t92B5ED4FE818F912A562F085CE035F6B42834934 * L_5 = V_1;
		NullCheck(L_5);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_6 = L_5->get_m_textMeshPro_6();
		NullCheck(L_6);
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_7;
		L_7 = TMP_Text_get_textInfo_mB006DF4283F14B0E49B9FCC0025D99C29FA534BF_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = L_7->get_characterCount_3();
		__this->set_U3CtotalVisibleCharactersU3E5__2_3(L_8);
		// int counter = 0;
		__this->set_U3CcounterU3E5__3_4(0);
		// int visibleCount = 0;
		V_2 = 0;
	}

IL_005d:
	{
		// visibleCount = counter % (totalVisibleCharacters + 1);
		int32_t L_9 = __this->get_U3CcounterU3E5__3_4();
		int32_t L_10 = __this->get_U3CtotalVisibleCharactersU3E5__2_3();
		V_2 = ((int32_t)((int32_t)L_9%(int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1))));
		// m_textMeshPro.maxVisibleCharacters = visibleCount; // How many characters should TextMeshPro display?
		TeleType_t92B5ED4FE818F912A562F085CE035F6B42834934 * L_11 = V_1;
		NullCheck(L_11);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_12 = L_11->get_m_textMeshPro_6();
		int32_t L_13 = V_2;
		NullCheck(L_12);
		TMP_Text_set_maxVisibleCharacters_mDD9A133BF38D58B225A8943F19AAC405AC1AAC94(L_12, L_13, /*hidden argument*/NULL);
		// if (visibleCount >= totalVisibleCharacters)
		int32_t L_14 = V_2;
		int32_t L_15 = __this->get_U3CtotalVisibleCharactersU3E5__2_3();
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0107;
		}
	}
	{
		// yield return new WaitForSeconds(1.0f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_16 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_16, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_16);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_009e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// m_textMeshPro.text = label02;
		TeleType_t92B5ED4FE818F912A562F085CE035F6B42834934 * L_17 = V_1;
		NullCheck(L_17);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_18 = L_17->get_m_textMeshPro_6();
		TeleType_t92B5ED4FE818F912A562F085CE035F6B42834934 * L_19 = V_1;
		NullCheck(L_19);
		String_t* L_20 = L_19->get_label02_5();
		NullCheck(L_18);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_18, L_20);
		// yield return new WaitForSeconds(1.0f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_21 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_21, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_21);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00cf:
	{
		__this->set_U3CU3E1__state_0((-1));
		// m_textMeshPro.text = label01;
		TeleType_t92B5ED4FE818F912A562F085CE035F6B42834934 * L_22 = V_1;
		NullCheck(L_22);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_23 = L_22->get_m_textMeshPro_6();
		TeleType_t92B5ED4FE818F912A562F085CE035F6B42834934 * L_24 = V_1;
		NullCheck(L_24);
		String_t* L_25 = L_24->get_label01_4();
		NullCheck(L_23);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_23, L_25);
		// yield return new WaitForSeconds(1.0f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_26 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_26, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_26);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_0100:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0107:
	{
		// counter += 1;
		int32_t L_27 = __this->get_U3CcounterU3E5__3_4();
		__this->set_U3CcounterU3E5__3_4(((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1)));
		// yield return new WaitForSeconds(0.05f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_28 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_28, (0.0500000007f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_28);
		__this->set_U3CU3E1__state_0(4);
		return (bool)1;
	}

IL_012e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_005d;
	}
}
// System.Object TMPro.Examples.TeleType/<Start>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m66DC06D52865D30DAA78DBD70B6554D13E2EA70B (U3CStartU3Ed__4_t70319341791F5D1BC6F878503A507E845E98C44E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TMPro.Examples.TeleType/<Start>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__4_System_Collections_IEnumerator_Reset_mE854A2CECA0E01F3C2D90DA4F720CF0F387994F8 (U3CStartU3Ed__4_t70319341791F5D1BC6F878503A507E845E98C44E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__4_System_Collections_IEnumerator_Reset_mE854A2CECA0E01F3C2D90DA4F720CF0F387994F8_RuntimeMethod_var)));
	}
}
// System.Object TMPro.Examples.TeleType/<Start>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__4_System_Collections_IEnumerator_get_Current_m77D3936B94684C817EE9F6D2C903238A457D5261 (U3CStartU3Ed__4_t70319341791F5D1BC6F878503A507E845E98C44E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void TMPro.Examples.TextConsoleSimulator/<RevealCharacters>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRevealCharactersU3Ed__7__ctor_mD45A85F5F50909F70C80AC8CE460F4FD261CDE9D (U3CRevealCharactersU3Ed__7_t9DC94DD1629B430917FDD9FD90D4EC000BB1B15E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TMPro.Examples.TextConsoleSimulator/<RevealCharacters>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRevealCharactersU3Ed__7_System_IDisposable_Dispose_m85F270FDC11A4D79E9CF47AADC9FA1FBF032F86C (U3CRevealCharactersU3Ed__7_t9DC94DD1629B430917FDD9FD90D4EC000BB1B15E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TMPro.Examples.TextConsoleSimulator/<RevealCharacters>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRevealCharactersU3Ed__7_MoveNext_mA9A6555E50889A7AA73F20749F25989165023DE3 (U3CRevealCharactersU3Ed__7_t9DC94DD1629B430917FDD9FD90D4EC000BB1B15E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TextConsoleSimulator_t82904A7668D46B20E576B30E4CE367C0B66C5289 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TextConsoleSimulator_t82904A7668D46B20E576B30E4CE367C0B66C5289 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00a6;
			}
			case 2:
			{
				goto IL_00e3;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// textComponent.ForceMeshUpdate();
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_3 = __this->get_textComponent_2();
		NullCheck(L_3);
		VirtActionInvoker2< bool, bool >::Invoke(106 /* System.Void TMPro.TMP_Text::ForceMeshUpdate(System.Boolean,System.Boolean) */, L_3, (bool)0, (bool)0);
		// TMP_TextInfo textInfo = textComponent.textInfo;
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_4 = __this->get_textComponent_2();
		NullCheck(L_4);
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_5;
		L_5 = TMP_Text_get_textInfo_mB006DF4283F14B0E49B9FCC0025D99C29FA534BF_inline(L_4, /*hidden argument*/NULL);
		__this->set_U3CtextInfoU3E5__2_4(L_5);
		// int totalVisibleCharacters = textInfo.characterCount; // Get # of Visible Character in text object
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_6 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_characterCount_3();
		__this->set_U3CtotalVisibleCharactersU3E5__3_5(L_7);
		// int visibleCount = 0;
		__this->set_U3CvisibleCountU3E5__4_6(0);
	}

IL_005f:
	{
		// if (hasTextChanged)
		TextConsoleSimulator_t82904A7668D46B20E576B30E4CE367C0B66C5289 * L_8 = V_1;
		NullCheck(L_8);
		bool L_9 = L_8->get_hasTextChanged_5();
		if (!L_9)
		{
			goto IL_007f;
		}
	}
	{
		// totalVisibleCharacters = textInfo.characterCount; // Update visible character count.
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_10 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_characterCount_3();
		__this->set_U3CtotalVisibleCharactersU3E5__3_5(L_11);
		// hasTextChanged = false;
		TextConsoleSimulator_t82904A7668D46B20E576B30E4CE367C0B66C5289 * L_12 = V_1;
		NullCheck(L_12);
		L_12->set_hasTextChanged_5((bool)0);
	}

IL_007f:
	{
		// if (visibleCount > totalVisibleCharacters)
		int32_t L_13 = __this->get_U3CvisibleCountU3E5__4_6();
		int32_t L_14 = __this->get_U3CtotalVisibleCharactersU3E5__3_5();
		if ((((int32_t)L_13) <= ((int32_t)L_14)))
		{
			goto IL_00b4;
		}
	}
	{
		// yield return new WaitForSeconds(1.0f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_15 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_15, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_15);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00a6:
	{
		__this->set_U3CU3E1__state_0((-1));
		// visibleCount = 0;
		__this->set_U3CvisibleCountU3E5__4_6(0);
	}

IL_00b4:
	{
		// textComponent.maxVisibleCharacters = visibleCount; // How many characters should TextMeshPro display?
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_16 = __this->get_textComponent_2();
		int32_t L_17 = __this->get_U3CvisibleCountU3E5__4_6();
		NullCheck(L_16);
		TMP_Text_set_maxVisibleCharacters_mDD9A133BF38D58B225A8943F19AAC405AC1AAC94(L_16, L_17, /*hidden argument*/NULL);
		// visibleCount += 1;
		int32_t L_18 = __this->get_U3CvisibleCountU3E5__4_6();
		__this->set_U3CvisibleCountU3E5__4_6(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00e3:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_005f;
	}
}
// System.Object TMPro.Examples.TextConsoleSimulator/<RevealCharacters>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRevealCharactersU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5BBAE6868EB7F1C11BE5DF001641E18C9D625F83 (U3CRevealCharactersU3Ed__7_t9DC94DD1629B430917FDD9FD90D4EC000BB1B15E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TMPro.Examples.TextConsoleSimulator/<RevealCharacters>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRevealCharactersU3Ed__7_System_Collections_IEnumerator_Reset_mA9F4893381AB24E01EAEBFC38A88AF363A9A0691 (U3CRevealCharactersU3Ed__7_t9DC94DD1629B430917FDD9FD90D4EC000BB1B15E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRevealCharactersU3Ed__7_System_Collections_IEnumerator_Reset_mA9F4893381AB24E01EAEBFC38A88AF363A9A0691_RuntimeMethod_var)));
	}
}
// System.Object TMPro.Examples.TextConsoleSimulator/<RevealCharacters>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRevealCharactersU3Ed__7_System_Collections_IEnumerator_get_Current_mFD0B7538B1A650FB389FFE9296B0E51AEA5B6B6F (U3CRevealCharactersU3Ed__7_t9DC94DD1629B430917FDD9FD90D4EC000BB1B15E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void TMPro.Examples.TextConsoleSimulator/<RevealWords>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRevealWordsU3Ed__8__ctor_m22FF9E770988107A928C5D1EA639F60239BFFEF0 (U3CRevealWordsU3Ed__8_tF7649A9A0F92FFA0D69DB3B69680480E1B50D408 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TMPro.Examples.TextConsoleSimulator/<RevealWords>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRevealWordsU3Ed__8_System_IDisposable_Dispose_m3EAF6EF4A8C99A71FEED251BF3F28A26BF6AD7F8 (U3CRevealWordsU3Ed__8_tF7649A9A0F92FFA0D69DB3B69680480E1B50D408 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TMPro.Examples.TextConsoleSimulator/<RevealWords>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRevealWordsU3Ed__8_MoveNext_m3811753E2384D4CBBAD6BD712EBA4FAF00D73210 (U3CRevealWordsU3Ed__8_tF7649A9A0F92FFA0D69DB3B69680480E1B50D408 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0104;
			}
			case 2:
			{
				goto IL_0132;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// textComponent.ForceMeshUpdate();
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_2 = __this->get_textComponent_2();
		NullCheck(L_2);
		VirtActionInvoker2< bool, bool >::Invoke(106 /* System.Void TMPro.TMP_Text::ForceMeshUpdate(System.Boolean,System.Boolean) */, L_2, (bool)0, (bool)0);
		// int totalWordCount = textComponent.textInfo.wordCount;
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_3 = __this->get_textComponent_2();
		NullCheck(L_3);
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_4;
		L_4 = TMP_Text_get_textInfo_mB006DF4283F14B0E49B9FCC0025D99C29FA534BF_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = L_4->get_wordCount_6();
		__this->set_U3CtotalWordCountU3E5__2_3(L_5);
		// int totalVisibleCharacters = textComponent.textInfo.characterCount; // Get # of Visible Character in text object
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_6 = __this->get_textComponent_2();
		NullCheck(L_6);
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_7;
		L_7 = TMP_Text_get_textInfo_mB006DF4283F14B0E49B9FCC0025D99C29FA534BF_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = L_7->get_characterCount_3();
		__this->set_U3CtotalVisibleCharactersU3E5__3_4(L_8);
		// int counter = 0;
		__this->set_U3CcounterU3E5__4_5(0);
		// int currentWord = 0;
		V_1 = 0;
		// int visibleCount = 0;
		__this->set_U3CvisibleCountU3E5__5_6(0);
	}

IL_006b:
	{
		// currentWord = counter % (totalWordCount + 1);
		int32_t L_9 = __this->get_U3CcounterU3E5__4_5();
		int32_t L_10 = __this->get_U3CtotalWordCountU3E5__2_3();
		V_1 = ((int32_t)((int32_t)L_9%(int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1))));
		// if (currentWord == 0) // Display no words.
		int32_t L_11 = V_1;
		if (L_11)
		{
			goto IL_0087;
		}
	}
	{
		// visibleCount = 0;
		__this->set_U3CvisibleCountU3E5__5_6(0);
		goto IL_00cc;
	}

IL_0087:
	{
		// else if (currentWord < totalWordCount) // Display all other words with the exception of the last one.
		int32_t L_12 = V_1;
		int32_t L_13 = __this->get_U3CtotalWordCountU3E5__2_3();
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_00b7;
		}
	}
	{
		// visibleCount = textComponent.textInfo.wordInfo[currentWord - 1].lastCharacterIndex + 1;
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_14 = __this->get_textComponent_2();
		NullCheck(L_14);
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_15;
		L_15 = TMP_Text_get_textInfo_mB006DF4283F14B0E49B9FCC0025D99C29FA534BF_inline(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		TMP_WordInfoU5BU5D_t702DDE9D8C7BD02F4D744F914B94BAB83E0F9502* L_16 = L_15->get_wordInfo_12();
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1)))))->get_lastCharacterIndex_2();
		__this->set_U3CvisibleCountU3E5__5_6(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)));
		goto IL_00cc;
	}

IL_00b7:
	{
		// else if (currentWord == totalWordCount) // Display last word and all remaining characters.
		int32_t L_19 = V_1;
		int32_t L_20 = __this->get_U3CtotalWordCountU3E5__2_3();
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_00cc;
		}
	}
	{
		// visibleCount = totalVisibleCharacters;
		int32_t L_21 = __this->get_U3CtotalVisibleCharactersU3E5__3_4();
		__this->set_U3CvisibleCountU3E5__5_6(L_21);
	}

IL_00cc:
	{
		// textComponent.maxVisibleCharacters = visibleCount; // How many characters should TextMeshPro display?
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_22 = __this->get_textComponent_2();
		int32_t L_23 = __this->get_U3CvisibleCountU3E5__5_6();
		NullCheck(L_22);
		TMP_Text_set_maxVisibleCharacters_mDD9A133BF38D58B225A8943F19AAC405AC1AAC94(L_22, L_23, /*hidden argument*/NULL);
		// if (visibleCount >= totalVisibleCharacters)
		int32_t L_24 = __this->get_U3CvisibleCountU3E5__5_6();
		int32_t L_25 = __this->get_U3CtotalVisibleCharactersU3E5__3_4();
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_010b;
		}
	}
	{
		// yield return new WaitForSeconds(1.0f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_26 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_26, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_26);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0104:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_010b:
	{
		// counter += 1;
		int32_t L_27 = __this->get_U3CcounterU3E5__4_5();
		__this->set_U3CcounterU3E5__4_5(((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1)));
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_28 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_28, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_28);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0132:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_006b;
	}
}
// System.Object TMPro.Examples.TextConsoleSimulator/<RevealWords>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRevealWordsU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA3F93E4AA532F15D52D68B7121805C014AB2D7FB (U3CRevealWordsU3Ed__8_tF7649A9A0F92FFA0D69DB3B69680480E1B50D408 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TMPro.Examples.TextConsoleSimulator/<RevealWords>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRevealWordsU3Ed__8_System_Collections_IEnumerator_Reset_mCDC8982948ED5F7743567569CA1D4A354218714F (U3CRevealWordsU3Ed__8_tF7649A9A0F92FFA0D69DB3B69680480E1B50D408 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRevealWordsU3Ed__8_System_Collections_IEnumerator_Reset_mCDC8982948ED5F7743567569CA1D4A354218714F_RuntimeMethod_var)));
	}
}
// System.Object TMPro.Examples.TextConsoleSimulator/<RevealWords>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRevealWordsU3Ed__8_System_Collections_IEnumerator_get_Current_mF39E492D576810F58DB9031556CFD6806FD32E27 (U3CRevealWordsU3Ed__8_tF7649A9A0F92FFA0D69DB3B69680480E1B50D408 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayTextMeshFloatingTextU3Ed__13__ctor_m359EAC129649F98C759B341846A6DC07F95230D2 (U3CDisplayTextMeshFloatingTextU3Ed__13_t4B6A65678514F8D3CD0E6F44F8AB9DDA1228C55C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayTextMeshFloatingTextU3Ed__13_System_IDisposable_Dispose_m36DE8722B670A7DDD9E70107024590B20A4E0B18 (U3CDisplayTextMeshFloatingTextU3Ed__13_t4B6A65678514F8D3CD0E6F44F8AB9DDA1228C55C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDisplayTextMeshFloatingTextU3Ed__13_MoveNext_mB7D320C272AAA835590B8460DA89DEBC0A243815 (U3CDisplayTextMeshFloatingTextU3Ed__13_t4B6A65678514F8D3CD0E6F44F8AB9DDA1228C55C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * V_1 = NULL;
	int32_t V_2 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0243;
			}
			case 2:
			{
				goto IL_027d;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float CountDuration = 2.0f; // How long is the countdown alive.
		__this->set_U3CCountDurationU3E5__2_3((2.0f));
		// float starting_Count = Random.Range(5f, 20f); // At what number is the counter starting at.
		float L_3;
		L_3 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((5.0f), (20.0f), /*hidden argument*/NULL);
		__this->set_U3Cstarting_CountU3E5__3_4(L_3);
		// float current_Count = starting_Count;
		float L_4 = __this->get_U3Cstarting_CountU3E5__3_4();
		__this->set_U3Ccurrent_CountU3E5__4_5(L_4);
		// Vector3 start_pos = m_floatingText_Transform.position;
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_5 = V_1;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = L_5->get_m_floatingText_Transform_9();
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		__this->set_U3Cstart_posU3E5__5_6(L_7);
		// Color32 start_color = m_textMesh.color;
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_8 = V_1;
		NullCheck(L_8);
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_9 = L_8->get_m_textMesh_7();
		NullCheck(L_9);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10;
		L_10 = TextMesh_get_color_m81016B82BB08E4CBEDF00DBC2AEF0DBD5894EC4F(L_9, /*hidden argument*/NULL);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_11;
		L_11 = Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(L_10, /*hidden argument*/NULL);
		__this->set_U3Cstart_colorU3E5__6_7(L_11);
		// float alpha = 255;
		__this->set_U3CalphaU3E5__7_8((255.0f));
		// int int_counter = 0;
		V_2 = 0;
		// float fadeDuration = 3 / starting_Count * CountDuration;
		float L_12 = __this->get_U3Cstarting_CountU3E5__3_4();
		float L_13 = __this->get_U3CCountDurationU3E5__2_3();
		__this->set_U3CfadeDurationU3E5__8_9(((float)il2cpp_codegen_multiply((float)((float)((float)(3.0f)/(float)L_12)), (float)L_13)));
		goto IL_024a;
	}

IL_00a7:
	{
		// current_Count -= (Time.deltaTime / CountDuration) * starting_Count;
		float L_14 = __this->get_U3Ccurrent_CountU3E5__4_5();
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_16 = __this->get_U3CCountDurationU3E5__2_3();
		float L_17 = __this->get_U3Cstarting_CountU3E5__3_4();
		__this->set_U3Ccurrent_CountU3E5__4_5(((float)il2cpp_codegen_subtract((float)L_14, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_15/(float)L_16)), (float)L_17)))));
		// if (current_Count <= 3)
		float L_18 = __this->get_U3Ccurrent_CountU3E5__4_5();
		if ((!(((float)L_18) <= ((float)(3.0f)))))
		{
			goto IL_0102;
		}
	}
	{
		// alpha = Mathf.Clamp(alpha - (Time.deltaTime / fadeDuration) * 255, 0, 255);
		float L_19 = __this->get_U3CalphaU3E5__7_8();
		float L_20;
		L_20 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_21 = __this->get_U3CfadeDurationU3E5__8_9();
		float L_22;
		L_22 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_subtract((float)L_19, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_20/(float)L_21)), (float)(255.0f))))), (0.0f), (255.0f), /*hidden argument*/NULL);
		__this->set_U3CalphaU3E5__7_8(L_22);
	}

IL_0102:
	{
		// int_counter = (int)current_Count;
		float L_23 = __this->get_U3Ccurrent_CountU3E5__4_5();
		V_2 = ((int32_t)((int32_t)L_23));
		// m_textMesh.text = int_counter.ToString();
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_24 = V_1;
		NullCheck(L_24);
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_25 = L_24->get_m_textMesh_7();
		String_t* L_26;
		L_26 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_25);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_25, L_26, /*hidden argument*/NULL);
		// m_textMesh.color = new Color32(start_color.r, start_color.g, start_color.b, (byte)alpha);
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_27 = V_1;
		NullCheck(L_27);
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_28 = L_27->get_m_textMesh_7();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * L_29 = __this->get_address_of_U3Cstart_colorU3E5__6_7();
		uint8_t L_30 = L_29->get_r_1();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * L_31 = __this->get_address_of_U3Cstart_colorU3E5__6_7();
		uint8_t L_32 = L_31->get_g_2();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * L_33 = __this->get_address_of_U3Cstart_colorU3E5__6_7();
		uint8_t L_34 = L_33->get_b_3();
		float L_35 = __this->get_U3CalphaU3E5__7_8();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_36;
		memset((&L_36), 0, sizeof(L_36));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_36), L_30, L_32, L_34, (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_35), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_37;
		L_37 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_36, /*hidden argument*/NULL);
		NullCheck(L_28);
		TextMesh_set_color_m276CE9AB9F88B34C0A9C6DD5300FC1123102D3DE(L_28, L_37, /*hidden argument*/NULL);
		// m_floatingText_Transform.position += new Vector3(0, starting_Count * Time.deltaTime, 0);
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_38 = V_1;
		NullCheck(L_38);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39 = L_38->get_m_floatingText_Transform_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40 = L_39;
		NullCheck(L_40);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_40, /*hidden argument*/NULL);
		float L_42 = __this->get_U3Cstarting_CountU3E5__3_4();
		float L_43;
		L_43 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_44), (0.0f), ((float)il2cpp_codegen_multiply((float)L_42, (float)L_43)), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_41, L_44, /*hidden argument*/NULL);
		NullCheck(L_40);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_40, L_45, /*hidden argument*/NULL);
		// if (!lastPOS.Compare(m_cameraTransform.position, 1000) || !lastRotation.Compare(m_cameraTransform.rotation, 1000))
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_46 = V_1;
		NullCheck(L_46);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47 = L_46->get_lastPOS_11();
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_48 = V_1;
		NullCheck(L_48);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49 = L_48->get_m_cameraTransform_10();
		NullCheck(L_49);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_49, /*hidden argument*/NULL);
		bool L_51;
		L_51 = TMPro_ExtensionMethods_Compare_mE7F36F938B1C610943DFA2751E90B454C0215FDB(L_47, L_50, ((int32_t)1000), /*hidden argument*/NULL);
		if (!L_51)
		{
			goto IL_01c4;
		}
	}
	{
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_52 = V_1;
		NullCheck(L_52);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_53 = L_52->get_lastRotation_12();
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_54 = V_1;
		NullCheck(L_54);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_55 = L_54->get_m_cameraTransform_10();
		NullCheck(L_55);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_56;
		L_56 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_55, /*hidden argument*/NULL);
		bool L_57;
		L_57 = TMPro_ExtensionMethods_Compare_mEA4CA9AFF6F80E497233C9CC433A189C928DCBAD(L_53, L_56, ((int32_t)1000), /*hidden argument*/NULL);
		if (L_57)
		{
			goto IL_022f;
		}
	}

IL_01c4:
	{
		// lastPOS = m_cameraTransform.position;
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_58 = V_1;
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_59 = V_1;
		NullCheck(L_59);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60 = L_59->get_m_cameraTransform_10();
		NullCheck(L_60);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_60, /*hidden argument*/NULL);
		NullCheck(L_58);
		L_58->set_lastPOS_11(L_61);
		// lastRotation = m_cameraTransform.rotation;
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_62 = V_1;
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_63 = V_1;
		NullCheck(L_63);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_64 = L_63->get_m_cameraTransform_10();
		NullCheck(L_64);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_65;
		L_65 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_64, /*hidden argument*/NULL);
		NullCheck(L_62);
		L_62->set_lastRotation_12(L_65);
		// m_floatingText_Transform.rotation = lastRotation;
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_66 = V_1;
		NullCheck(L_66);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_67 = L_66->get_m_floatingText_Transform_9();
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_68 = V_1;
		NullCheck(L_68);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_69 = L_68->get_lastRotation_12();
		NullCheck(L_67);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_67, L_69, /*hidden argument*/NULL);
		// Vector3 dir = m_transform.position - lastPOS;
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_70 = V_1;
		NullCheck(L_70);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_71 = L_70->get_m_transform_8();
		NullCheck(L_71);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72;
		L_72 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_71, /*hidden argument*/NULL);
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_73 = V_1;
		NullCheck(L_73);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74 = L_73->get_lastPOS_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75;
		L_75 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_72, L_74, /*hidden argument*/NULL);
		V_3 = L_75;
		// m_transform.forward = new Vector3(dir.x, 0, dir.z);
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_76 = V_1;
		NullCheck(L_76);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_77 = L_76->get_m_transform_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78 = V_3;
		float L_79 = L_78.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_80 = V_3;
		float L_81 = L_80.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82;
		memset((&L_82), 0, sizeof(L_82));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_82), L_79, (0.0f), L_81, /*hidden argument*/NULL);
		NullCheck(L_77);
		Transform_set_forward_mAE46B156F55F2F90AB495B17F7C20BF59A5D7D4D(L_77, L_82, /*hidden argument*/NULL);
	}

IL_022f:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_83 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_83, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_83);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0243:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_024a:
	{
		// while (current_Count > 0)
		float L_84 = __this->get_U3Ccurrent_CountU3E5__4_5();
		if ((((float)L_84) > ((float)(0.0f))))
		{
			goto IL_00a7;
		}
	}
	{
		// yield return new WaitForSeconds(Random.Range(0.1f, 1.0f));
		float L_85;
		L_85 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.100000001f), (1.0f), /*hidden argument*/NULL);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_86 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_86, L_85, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_86);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_027d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// m_floatingText_Transform.position = start_pos;
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_87 = V_1;
		NullCheck(L_87);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_88 = L_87->get_m_floatingText_Transform_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_89 = __this->get_U3Cstart_posU3E5__5_6();
		NullCheck(L_88);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_88, L_89, /*hidden argument*/NULL);
		// StartCoroutine(DisplayTextMeshFloatingText());
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_90 = V_1;
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_91 = V_1;
		NullCheck(L_91);
		RuntimeObject* L_92;
		L_92 = TextMeshProFloatingText_DisplayTextMeshFloatingText_m22691E6EA41B7FCF782B03954865D8E3B890E4DF(L_91, /*hidden argument*/NULL);
		NullCheck(L_90);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_93;
		L_93 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_90, L_92, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDisplayTextMeshFloatingTextU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m891591B80D28B1DF2CF9EB78C19DA672A81231A2 (U3CDisplayTextMeshFloatingTextU3Ed__13_t4B6A65678514F8D3CD0E6F44F8AB9DDA1228C55C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayTextMeshFloatingTextU3Ed__13_System_Collections_IEnumerator_Reset_m5EF21CA1E0C64E67D18D9355B5E064C93452F5B2 (U3CDisplayTextMeshFloatingTextU3Ed__13_t4B6A65678514F8D3CD0E6F44F8AB9DDA1228C55C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDisplayTextMeshFloatingTextU3Ed__13_System_Collections_IEnumerator_Reset_m5EF21CA1E0C64E67D18D9355B5E064C93452F5B2_RuntimeMethod_var)));
	}
}
// System.Object TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDisplayTextMeshFloatingTextU3Ed__13_System_Collections_IEnumerator_get_Current_m4850A72D887C4DA3F53CA1A1A2BEAD5C5C6605A1 (U3CDisplayTextMeshFloatingTextU3Ed__13_t4B6A65678514F8D3CD0E6F44F8AB9DDA1228C55C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayTextMeshProFloatingTextU3Ed__12__ctor_mA27BBC06A409A9D9FB03E0D2C74677486B80D168 (U3CDisplayTextMeshProFloatingTextU3Ed__12_t0F0EBDC5A3A2FF615C3205C8019AB8A81EDEF6FC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayTextMeshProFloatingTextU3Ed__12_System_IDisposable_Dispose_m510FB73335FCBCBEC6AC61A4F2A0217722BF27FC (U3CDisplayTextMeshProFloatingTextU3Ed__12_t0F0EBDC5A3A2FF615C3205C8019AB8A81EDEF6FC * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDisplayTextMeshProFloatingTextU3Ed__12_MoveNext_m8DFB6850F5F9B8DF05173D4CB9C76B997EC87B57 (U3CDisplayTextMeshProFloatingTextU3Ed__12_t0F0EBDC5A3A2FF615C3205C8019AB8A81EDEF6FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * V_1 = NULL;
	int32_t V_2 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0243;
			}
			case 2:
			{
				goto IL_027d;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float CountDuration = 2.0f; // How long is the countdown alive.
		__this->set_U3CCountDurationU3E5__2_3((2.0f));
		// float starting_Count = Random.Range(5f, 20f); // At what number is the counter starting at.
		float L_3;
		L_3 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((5.0f), (20.0f), /*hidden argument*/NULL);
		__this->set_U3Cstarting_CountU3E5__3_4(L_3);
		// float current_Count = starting_Count;
		float L_4 = __this->get_U3Cstarting_CountU3E5__3_4();
		__this->set_U3Ccurrent_CountU3E5__4_5(L_4);
		// Vector3 start_pos = m_floatingText_Transform.position;
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_5 = V_1;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = L_5->get_m_floatingText_Transform_9();
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		__this->set_U3Cstart_posU3E5__5_6(L_7);
		// Color32 start_color = m_textMeshPro.color;
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_8 = V_1;
		NullCheck(L_8);
		TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * L_9 = L_8->get_m_textMeshPro_6();
		NullCheck(L_9);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10;
		L_10 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_9);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_11;
		L_11 = Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(L_10, /*hidden argument*/NULL);
		__this->set_U3Cstart_colorU3E5__6_7(L_11);
		// float alpha = 255;
		__this->set_U3CalphaU3E5__7_8((255.0f));
		// int int_counter = 0;
		V_2 = 0;
		// float fadeDuration = 3 / starting_Count * CountDuration;
		float L_12 = __this->get_U3Cstarting_CountU3E5__3_4();
		float L_13 = __this->get_U3CCountDurationU3E5__2_3();
		__this->set_U3CfadeDurationU3E5__8_9(((float)il2cpp_codegen_multiply((float)((float)((float)(3.0f)/(float)L_12)), (float)L_13)));
		goto IL_024a;
	}

IL_00a7:
	{
		// current_Count -= (Time.deltaTime / CountDuration) * starting_Count;
		float L_14 = __this->get_U3Ccurrent_CountU3E5__4_5();
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_16 = __this->get_U3CCountDurationU3E5__2_3();
		float L_17 = __this->get_U3Cstarting_CountU3E5__3_4();
		__this->set_U3Ccurrent_CountU3E5__4_5(((float)il2cpp_codegen_subtract((float)L_14, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_15/(float)L_16)), (float)L_17)))));
		// if (current_Count <= 3)
		float L_18 = __this->get_U3Ccurrent_CountU3E5__4_5();
		if ((!(((float)L_18) <= ((float)(3.0f)))))
		{
			goto IL_0102;
		}
	}
	{
		// alpha = Mathf.Clamp(alpha - (Time.deltaTime / fadeDuration) * 255, 0, 255);
		float L_19 = __this->get_U3CalphaU3E5__7_8();
		float L_20;
		L_20 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_21 = __this->get_U3CfadeDurationU3E5__8_9();
		float L_22;
		L_22 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_subtract((float)L_19, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_20/(float)L_21)), (float)(255.0f))))), (0.0f), (255.0f), /*hidden argument*/NULL);
		__this->set_U3CalphaU3E5__7_8(L_22);
	}

IL_0102:
	{
		// int_counter = (int)current_Count;
		float L_23 = __this->get_U3Ccurrent_CountU3E5__4_5();
		V_2 = ((int32_t)((int32_t)L_23));
		// m_textMeshPro.text = int_counter.ToString();
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_24 = V_1;
		NullCheck(L_24);
		TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * L_25 = L_24->get_m_textMeshPro_6();
		String_t* L_26;
		L_26 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_25);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_25, L_26);
		// m_textMeshPro.color = new Color32(start_color.r, start_color.g, start_color.b, (byte)alpha);
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_27 = V_1;
		NullCheck(L_27);
		TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * L_28 = L_27->get_m_textMeshPro_6();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * L_29 = __this->get_address_of_U3Cstart_colorU3E5__6_7();
		uint8_t L_30 = L_29->get_r_1();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * L_31 = __this->get_address_of_U3Cstart_colorU3E5__6_7();
		uint8_t L_32 = L_31->get_g_2();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * L_33 = __this->get_address_of_U3Cstart_colorU3E5__6_7();
		uint8_t L_34 = L_33->get_b_3();
		float L_35 = __this->get_U3CalphaU3E5__7_8();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_36;
		memset((&L_36), 0, sizeof(L_36));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_36), L_30, L_32, L_34, (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_35), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_37;
		L_37 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_36, /*hidden argument*/NULL);
		NullCheck(L_28);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_28, L_37);
		// m_floatingText_Transform.position += new Vector3(0, starting_Count * Time.deltaTime, 0);
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_38 = V_1;
		NullCheck(L_38);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39 = L_38->get_m_floatingText_Transform_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40 = L_39;
		NullCheck(L_40);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_40, /*hidden argument*/NULL);
		float L_42 = __this->get_U3Cstarting_CountU3E5__3_4();
		float L_43;
		L_43 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_44), (0.0f), ((float)il2cpp_codegen_multiply((float)L_42, (float)L_43)), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_41, L_44, /*hidden argument*/NULL);
		NullCheck(L_40);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_40, L_45, /*hidden argument*/NULL);
		// if (!lastPOS.Compare(m_cameraTransform.position, 1000) || !lastRotation.Compare(m_cameraTransform.rotation, 1000))
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_46 = V_1;
		NullCheck(L_46);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47 = L_46->get_lastPOS_11();
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_48 = V_1;
		NullCheck(L_48);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49 = L_48->get_m_cameraTransform_10();
		NullCheck(L_49);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_49, /*hidden argument*/NULL);
		bool L_51;
		L_51 = TMPro_ExtensionMethods_Compare_mE7F36F938B1C610943DFA2751E90B454C0215FDB(L_47, L_50, ((int32_t)1000), /*hidden argument*/NULL);
		if (!L_51)
		{
			goto IL_01c4;
		}
	}
	{
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_52 = V_1;
		NullCheck(L_52);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_53 = L_52->get_lastRotation_12();
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_54 = V_1;
		NullCheck(L_54);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_55 = L_54->get_m_cameraTransform_10();
		NullCheck(L_55);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_56;
		L_56 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_55, /*hidden argument*/NULL);
		bool L_57;
		L_57 = TMPro_ExtensionMethods_Compare_mEA4CA9AFF6F80E497233C9CC433A189C928DCBAD(L_53, L_56, ((int32_t)1000), /*hidden argument*/NULL);
		if (L_57)
		{
			goto IL_022f;
		}
	}

IL_01c4:
	{
		// lastPOS = m_cameraTransform.position;
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_58 = V_1;
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_59 = V_1;
		NullCheck(L_59);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60 = L_59->get_m_cameraTransform_10();
		NullCheck(L_60);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_60, /*hidden argument*/NULL);
		NullCheck(L_58);
		L_58->set_lastPOS_11(L_61);
		// lastRotation = m_cameraTransform.rotation;
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_62 = V_1;
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_63 = V_1;
		NullCheck(L_63);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_64 = L_63->get_m_cameraTransform_10();
		NullCheck(L_64);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_65;
		L_65 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_64, /*hidden argument*/NULL);
		NullCheck(L_62);
		L_62->set_lastRotation_12(L_65);
		// m_floatingText_Transform.rotation = lastRotation;
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_66 = V_1;
		NullCheck(L_66);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_67 = L_66->get_m_floatingText_Transform_9();
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_68 = V_1;
		NullCheck(L_68);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_69 = L_68->get_lastRotation_12();
		NullCheck(L_67);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_67, L_69, /*hidden argument*/NULL);
		// Vector3 dir = m_transform.position - lastPOS;
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_70 = V_1;
		NullCheck(L_70);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_71 = L_70->get_m_transform_8();
		NullCheck(L_71);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72;
		L_72 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_71, /*hidden argument*/NULL);
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_73 = V_1;
		NullCheck(L_73);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74 = L_73->get_lastPOS_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75;
		L_75 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_72, L_74, /*hidden argument*/NULL);
		V_3 = L_75;
		// m_transform.forward = new Vector3(dir.x, 0, dir.z);
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_76 = V_1;
		NullCheck(L_76);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_77 = L_76->get_m_transform_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78 = V_3;
		float L_79 = L_78.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_80 = V_3;
		float L_81 = L_80.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82;
		memset((&L_82), 0, sizeof(L_82));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_82), L_79, (0.0f), L_81, /*hidden argument*/NULL);
		NullCheck(L_77);
		Transform_set_forward_mAE46B156F55F2F90AB495B17F7C20BF59A5D7D4D(L_77, L_82, /*hidden argument*/NULL);
	}

IL_022f:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_83 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_83, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_83);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0243:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_024a:
	{
		// while (current_Count > 0)
		float L_84 = __this->get_U3Ccurrent_CountU3E5__4_5();
		if ((((float)L_84) > ((float)(0.0f))))
		{
			goto IL_00a7;
		}
	}
	{
		// yield return new WaitForSeconds(Random.Range(0.1f, 1.0f));
		float L_85;
		L_85 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.100000001f), (1.0f), /*hidden argument*/NULL);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_86 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_86, L_85, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_86);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_027d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// m_floatingText_Transform.position = start_pos;
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_87 = V_1;
		NullCheck(L_87);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_88 = L_87->get_m_floatingText_Transform_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_89 = __this->get_U3Cstart_posU3E5__5_6();
		NullCheck(L_88);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_88, L_89, /*hidden argument*/NULL);
		// StartCoroutine(DisplayTextMeshProFloatingText());
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_90 = V_1;
		TextMeshProFloatingText_t55B28EA1D0CCDF61ABE6CF421C752EBED7B37200 * L_91 = V_1;
		NullCheck(L_91);
		RuntimeObject* L_92;
		L_92 = TextMeshProFloatingText_DisplayTextMeshProFloatingText_m3C381B8A53C58CF001D7A9212B8BDA6F368CC2C7(L_91, /*hidden argument*/NULL);
		NullCheck(L_90);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_93;
		L_93 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_90, L_92, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDisplayTextMeshProFloatingTextU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCD7B5218C81C0872AB501CD54626F1284A4F73BF (U3CDisplayTextMeshProFloatingTextU3Ed__12_t0F0EBDC5A3A2FF615C3205C8019AB8A81EDEF6FC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayTextMeshProFloatingTextU3Ed__12_System_Collections_IEnumerator_Reset_mD2D32B94CA8D5A6D502BA38BDE1969C856368F73 (U3CDisplayTextMeshProFloatingTextU3Ed__12_t0F0EBDC5A3A2FF615C3205C8019AB8A81EDEF6FC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDisplayTextMeshProFloatingTextU3Ed__12_System_Collections_IEnumerator_Reset_mD2D32B94CA8D5A6D502BA38BDE1969C856368F73_RuntimeMethod_var)));
	}
}
// System.Object TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDisplayTextMeshProFloatingTextU3Ed__12_System_Collections_IEnumerator_get_Current_m59B2488B0E3C72CE97659E8D19BB13C6E0A44E90 (U3CDisplayTextMeshProFloatingTextU3Ed__12_t0F0EBDC5A3A2FF615C3205C8019AB8A81EDEF6FC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__3__ctor_m0038B1054BCC928D35F8C0021ED7D2E1C533E35F (U3CAnimateVertexColorsU3Ed__3_tB3AD1CDAF88FD5FB6786CD89058781C6BDF67DAF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__3_System_IDisposable_Dispose_m5BAD394A0B09B3E0FF19E91521E02C2B3ADD6007 (U3CAnimateVertexColorsU3Ed__3_tB3AD1CDAF88FD5FB6786CD89058781C6BDF67DAF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateVertexColorsU3Ed__3_MoveNext_m2842AF5B12AFC17112D1AE75E46AB1B12776D2A6 (U3CAnimateVertexColorsU3Ed__3_tB3AD1CDAF88FD5FB6786CD89058781C6BDF67DAF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VertexColorCycler_t37E80E87D8EAD0D7757CDA45BD5D3AA82FD28374 * V_1 = NULL;
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* V_2 = NULL;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		VertexColorCycler_t37E80E87D8EAD0D7757CDA45BD5D3AA82FD28374 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0089;
			}
			case 2:
			{
				goto IL_0192;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// m_TextComponent.ForceMeshUpdate();
		VertexColorCycler_t37E80E87D8EAD0D7757CDA45BD5D3AA82FD28374 * L_3 = V_1;
		NullCheck(L_3);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_4 = L_3->get_m_TextComponent_4();
		NullCheck(L_4);
		VirtActionInvoker2< bool, bool >::Invoke(106 /* System.Void TMPro.TMP_Text::ForceMeshUpdate(System.Boolean,System.Boolean) */, L_4, (bool)0, (bool)0);
		// TMP_TextInfo textInfo = m_TextComponent.textInfo;
		VertexColorCycler_t37E80E87D8EAD0D7757CDA45BD5D3AA82FD28374 * L_5 = V_1;
		NullCheck(L_5);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_6 = L_5->get_m_TextComponent_4();
		NullCheck(L_6);
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_7;
		L_7 = TMP_Text_get_textInfo_mB006DF4283F14B0E49B9FCC0025D99C29FA534BF_inline(L_6, /*hidden argument*/NULL);
		__this->set_U3CtextInfoU3E5__2_3(L_7);
		// int currentCharacter = 0;
		__this->set_U3CcurrentCharacterU3E5__3_4(0);
		// Color32 c0 = m_TextComponent.color;
		VertexColorCycler_t37E80E87D8EAD0D7757CDA45BD5D3AA82FD28374 * L_8 = V_1;
		NullCheck(L_8);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_9 = L_8->get_m_TextComponent_4();
		NullCheck(L_9);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10;
		L_10 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_9);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_11;
		L_11 = Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(L_10, /*hidden argument*/NULL);
		V_3 = L_11;
	}

IL_005f:
	{
		// int characterCount = textInfo.characterCount;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_12 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_12);
		int32_t L_13 = L_12->get_characterCount_3();
		V_4 = L_13;
		// if (characterCount == 0)
		int32_t L_14 = V_4;
		if (L_14)
		{
			goto IL_0092;
		}
	}
	{
		// yield return new WaitForSeconds(0.25f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_15 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_15, (0.25f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_15);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0089:
	{
		__this->set_U3CU3E1__state_0((-1));
		// continue;
		goto IL_005f;
	}

IL_0092:
	{
		// int materialIndex = textInfo.characterInfo[currentCharacter].materialReferenceIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_16 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_16);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_17 = L_16->get_characterInfo_11();
		int32_t L_18 = __this->get_U3CcurrentCharacterU3E5__3_4();
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->get_materialReferenceIndex_9();
		V_5 = L_19;
		// newVertexColors = textInfo.meshInfo[materialIndex].colors32;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_20 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_20);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_21 = L_20->get_meshInfo_16();
		int32_t L_22 = V_5;
		NullCheck(L_21);
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->get_colors32_11();
		V_2 = L_23;
		// int vertexIndex = textInfo.characterInfo[currentCharacter].vertexIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_24 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_24);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_25 = L_24->get_characterInfo_11();
		int32_t L_26 = __this->get_U3CcurrentCharacterU3E5__3_4();
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->get_vertexIndex_14();
		V_6 = L_27;
		// if (textInfo.characterInfo[currentCharacter].isVisible)
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_28 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_28);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_29 = L_28->get_characterInfo_11();
		int32_t L_30 = __this->get_U3CcurrentCharacterU3E5__3_4();
		NullCheck(L_29);
		bool L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->get_isVisible_40();
		if (!L_31)
		{
			goto IL_0168;
		}
	}
	{
		// c0 = new Color32((byte)Random.Range(0, 255), (byte)Random.Range(0, 255), (byte)Random.Range(0, 255), 255);
		int32_t L_32;
		L_32 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)255), /*hidden argument*/NULL);
		int32_t L_33;
		L_33 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)255), /*hidden argument*/NULL);
		int32_t L_34;
		L_34 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)255), /*hidden argument*/NULL);
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D *)(&V_3), (uint8_t)((int32_t)((uint8_t)L_32)), (uint8_t)((int32_t)((uint8_t)L_33)), (uint8_t)((int32_t)((uint8_t)L_34)), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		// newVertexColors[vertexIndex + 0] = c0;
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_35 = V_2;
		int32_t L_36 = V_6;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_37 = V_3;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D )L_37);
		// newVertexColors[vertexIndex + 1] = c0;
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_38 = V_2;
		int32_t L_39 = V_6;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_40 = V_3;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1))), (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D )L_40);
		// newVertexColors[vertexIndex + 2] = c0;
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_41 = V_2;
		int32_t L_42 = V_6;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_43 = V_3;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)2))), (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D )L_43);
		// newVertexColors[vertexIndex + 3] = c0;
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_44 = V_2;
		int32_t L_45 = V_6;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_46 = V_3;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)3))), (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D )L_46);
		// m_TextComponent.UpdateVertexData(TMP_VertexDataUpdateFlags.Colors32);
		VertexColorCycler_t37E80E87D8EAD0D7757CDA45BD5D3AA82FD28374 * L_47 = V_1;
		NullCheck(L_47);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_48 = L_47->get_m_TextComponent_4();
		NullCheck(L_48);
		VirtActionInvoker1< int32_t >::Invoke(108 /* System.Void TMPro.TMP_Text::UpdateVertexData(TMPro.TMP_VertexDataUpdateFlags) */, L_48, ((int32_t)16));
	}

IL_0168:
	{
		// currentCharacter = (currentCharacter + 1) % characterCount;
		int32_t L_49 = __this->get_U3CcurrentCharacterU3E5__3_4();
		int32_t L_50 = V_4;
		__this->set_U3CcurrentCharacterU3E5__3_4(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1))%(int32_t)L_50)));
		// yield return new WaitForSeconds(0.05f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_51 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_51, (0.0500000007f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_51);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0192:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_005f;
	}
}
// System.Object TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateVertexColorsU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAE810D7968957A09C88E61C29DAAEC68E4AF1E51 (U3CAnimateVertexColorsU3Ed__3_tB3AD1CDAF88FD5FB6786CD89058781C6BDF67DAF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__3_System_Collections_IEnumerator_Reset_m72ABAC50E9E4D972FB44CAFF387F3E23FEC5D932 (U3CAnimateVertexColorsU3Ed__3_tB3AD1CDAF88FD5FB6786CD89058781C6BDF67DAF * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAnimateVertexColorsU3Ed__3_System_Collections_IEnumerator_Reset_m72ABAC50E9E4D972FB44CAFF387F3E23FEC5D932_RuntimeMethod_var)));
	}
}
// System.Object TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateVertexColorsU3Ed__3_System_Collections_IEnumerator_get_Current_m8DE595A1D01F3A507A356F8BCE020D0851412B52 (U3CAnimateVertexColorsU3Ed__3_tB3AD1CDAF88FD5FB6786CD89058781C6BDF67DAF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__11__ctor_m0222C3457F5ACA497FE3A8EC829DE4AD11A169F8 (U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__11_System_IDisposable_Dispose_m717E79A39A8161ADDA9E62F7CDFB67B8F2D65099 (U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateVertexColorsU3Ed__11_MoveNext_m169A75C7E2147372CB933520B670AF77907C1C6B (U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexAnimU5BU5D_t069E9FCD87DE8FF65BE288FDB2834711D933AAFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A * V_1 = NULL;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4  V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_9 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_11 = NULL;
	int32_t V_12 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0110;
			}
			case 2:
			{
				goto IL_0481;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// m_TextComponent.ForceMeshUpdate();
		VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A * L_3 = V_1;
		NullCheck(L_3);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_4 = L_3->get_m_TextComponent_7();
		NullCheck(L_4);
		VirtActionInvoker2< bool, bool >::Invoke(106 /* System.Void TMPro.TMP_Text::ForceMeshUpdate(System.Boolean,System.Boolean) */, L_4, (bool)0, (bool)0);
		// TMP_TextInfo textInfo = m_TextComponent.textInfo;
		VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A * L_5 = V_1;
		NullCheck(L_5);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_6 = L_5->get_m_TextComponent_7();
		NullCheck(L_6);
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_7;
		L_7 = TMP_Text_get_textInfo_mB006DF4283F14B0E49B9FCC0025D99C29FA534BF_inline(L_6, /*hidden argument*/NULL);
		__this->set_U3CtextInfoU3E5__2_3(L_7);
		// int loopCount = 0;
		__this->set_U3CloopCountU3E5__3_4(0);
		// hasTextChanged = true;
		VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A * L_8 = V_1;
		NullCheck(L_8);
		L_8->set_hasTextChanged_8((bool)1);
		// VertexAnim[] vertexAnim = new VertexAnim[1024];
		VertexAnimU5BU5D_t069E9FCD87DE8FF65BE288FDB2834711D933AAFF* L_9 = (VertexAnimU5BU5D_t069E9FCD87DE8FF65BE288FDB2834711D933AAFF*)(VertexAnimU5BU5D_t069E9FCD87DE8FF65BE288FDB2834711D933AAFF*)SZArrayNew(VertexAnimU5BU5D_t069E9FCD87DE8FF65BE288FDB2834711D933AAFF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->set_U3CvertexAnimU3E5__4_5(L_9);
		// for (int i = 0; i < 1024; i++)
		V_3 = 0;
		goto IL_00ad;
	}

IL_0069:
	{
		// vertexAnim[i].angleRange = Random.Range(10f, 25f);
		VertexAnimU5BU5D_t069E9FCD87DE8FF65BE288FDB2834711D933AAFF* L_10 = __this->get_U3CvertexAnimU3E5__4_5();
		int32_t L_11 = V_3;
		NullCheck(L_10);
		float L_12;
		L_12 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((10.0f), (25.0f), /*hidden argument*/NULL);
		((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->set_angleRange_0(L_12);
		// vertexAnim[i].speed = Random.Range(1f, 3f);
		VertexAnimU5BU5D_t069E9FCD87DE8FF65BE288FDB2834711D933AAFF* L_13 = __this->get_U3CvertexAnimU3E5__4_5();
		int32_t L_14 = V_3;
		NullCheck(L_13);
		float L_15;
		L_15 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((1.0f), (3.0f), /*hidden argument*/NULL);
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->set_speed_2(L_15);
		// for (int i = 0; i < 1024; i++)
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_00ad:
	{
		// for (int i = 0; i < 1024; i++)
		int32_t L_17 = V_3;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)1024))))
		{
			goto IL_0069;
		}
	}
	{
		// TMP_MeshInfo[] cachedMeshInfo = textInfo.CopyMeshInfoVertexData();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_18 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_18);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_19;
		L_19 = TMP_TextInfo_CopyMeshInfoVertexData_m76E3357D987643644CE791EBEED4AB16A0ABFA58(L_18, /*hidden argument*/NULL);
		__this->set_U3CcachedMeshInfoU3E5__5_6(L_19);
	}

IL_00c6:
	{
		// if (hasTextChanged)
		VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A * L_20 = V_1;
		NullCheck(L_20);
		bool L_21 = L_20->get_hasTextChanged_8();
		if (!L_21)
		{
			goto IL_00e6;
		}
	}
	{
		// cachedMeshInfo = textInfo.CopyMeshInfoVertexData();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_22 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_22);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_23;
		L_23 = TMP_TextInfo_CopyMeshInfoVertexData_m76E3357D987643644CE791EBEED4AB16A0ABFA58(L_22, /*hidden argument*/NULL);
		__this->set_U3CcachedMeshInfoU3E5__5_6(L_23);
		// hasTextChanged = false;
		VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A * L_24 = V_1;
		NullCheck(L_24);
		L_24->set_hasTextChanged_8((bool)0);
	}

IL_00e6:
	{
		// int characterCount = textInfo.characterCount;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_25 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_25);
		int32_t L_26 = L_25->get_characterCount_3();
		V_4 = L_26;
		// if (characterCount == 0)
		int32_t L_27 = V_4;
		if (L_27)
		{
			goto IL_0119;
		}
	}
	{
		// yield return new WaitForSeconds(0.25f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_28 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_28, (0.25f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_28);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0110:
	{
		__this->set_U3CU3E1__state_0((-1));
		// continue;
		goto IL_00c6;
	}

IL_0119:
	{
		// for (int i = 0; i < characterCount; i++)
		V_5 = 0;
		goto IL_03de;
	}

IL_0121:
	{
		// TMP_CharacterInfo charInfo = textInfo.characterInfo[i];
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_29 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_29);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_30 = L_29->get_characterInfo_11();
		int32_t L_31 = V_5;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		// if (!charInfo.isVisible)
		bool L_34 = L_33.get_isVisible_40();
		if (!L_34)
		{
			goto IL_03d8;
		}
	}
	{
		// VertexAnim vertAnim = vertexAnim[i];
		VertexAnimU5BU5D_t069E9FCD87DE8FF65BE288FDB2834711D933AAFF* L_35 = __this->get_U3CvertexAnimU3E5__4_5();
		int32_t L_36 = V_5;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4  L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_6 = L_38;
		// int materialIndex = textInfo.characterInfo[i].materialReferenceIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_39 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_39);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_40 = L_39->get_characterInfo_11();
		int32_t L_41 = V_5;
		NullCheck(L_40);
		int32_t L_42 = ((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->get_materialReferenceIndex_9();
		V_7 = L_42;
		// int vertexIndex = textInfo.characterInfo[i].vertexIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_43 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_43);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_44 = L_43->get_characterInfo_11();
		int32_t L_45 = V_5;
		NullCheck(L_44);
		int32_t L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->get_vertexIndex_14();
		V_8 = L_46;
		// Vector3[] sourceVertices = cachedMeshInfo[materialIndex].vertices;
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_47 = __this->get_U3CcachedMeshInfoU3E5__5_6();
		int32_t L_48 = V_7;
		NullCheck(L_47);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->get_vertices_6();
		V_9 = L_49;
		// Vector2 charMidBasline = (sourceVertices[vertexIndex + 0] + sourceVertices[vertexIndex + 2]) / 2;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_50 = V_9;
		int32_t L_51 = V_8;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_54 = V_9;
		int32_t L_55 = V_8;
		NullCheck(L_54);
		int32_t L_56 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)2));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
		L_58 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_53, L_57, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59;
		L_59 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_58, (2.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_60;
		L_60 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_59, /*hidden argument*/NULL);
		// Vector3 offset = charMidBasline;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_60, /*hidden argument*/NULL);
		V_10 = L_61;
		// Vector3[] destinationVertices = textInfo.meshInfo[materialIndex].vertices;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_62 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_62);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_63 = L_62->get_meshInfo_16();
		int32_t L_64 = V_7;
		NullCheck(L_63);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_65 = ((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_64)))->get_vertices_6();
		V_11 = L_65;
		// destinationVertices[vertexIndex + 0] = sourceVertices[vertexIndex + 0] - offset;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_66 = V_11;
		int32_t L_67 = V_8;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_68 = V_9;
		int32_t L_69 = V_8;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_73;
		L_73 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_71, L_72, /*hidden argument*/NULL);
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_73);
		// destinationVertices[vertexIndex + 1] = sourceVertices[vertexIndex + 1] - offset;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_74 = V_11;
		int32_t L_75 = V_8;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_76 = V_9;
		int32_t L_77 = V_8;
		NullCheck(L_76);
		int32_t L_78 = ((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_80 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_81;
		L_81 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_79, L_80, /*hidden argument*/NULL);
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_81);
		// destinationVertices[vertexIndex + 2] = sourceVertices[vertexIndex + 2] - offset;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_82 = V_11;
		int32_t L_83 = V_8;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_84 = V_9;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		int32_t L_86 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)2));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_87 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_88 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_89;
		L_89 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_87, L_88, /*hidden argument*/NULL);
		NullCheck(L_82);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)2))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_89);
		// destinationVertices[vertexIndex + 3] = sourceVertices[vertexIndex + 3] - offset;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_90 = V_11;
		int32_t L_91 = V_8;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_92 = V_9;
		int32_t L_93 = V_8;
		NullCheck(L_92);
		int32_t L_94 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)3));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_96 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_97;
		L_97 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_95, L_96, /*hidden argument*/NULL);
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)3))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_97);
		// vertAnim.angle = Mathf.SmoothStep(-vertAnim.angleRange, vertAnim.angleRange, Mathf.PingPong(loopCount / 25f * vertAnim.speed, 1f));
		VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4  L_98 = V_6;
		float L_99 = L_98.get_angleRange_0();
		VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4  L_100 = V_6;
		float L_101 = L_100.get_angleRange_0();
		int32_t L_102 = __this->get_U3CloopCountU3E5__3_4();
		VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4  L_103 = V_6;
		float L_104 = L_103.get_speed_2();
		float L_105;
		L_105 = Mathf_PingPong_m60A376FCA7185AA90B41A22379058923565193D1(((float)il2cpp_codegen_multiply((float)((float)((float)((float)((float)L_102))/(float)(25.0f))), (float)L_104)), (1.0f), /*hidden argument*/NULL);
		float L_106;
		L_106 = Mathf_SmoothStep_m42903D75966D0858460ACDF8CB825B874725FFF6(((-L_99)), L_101, L_105, /*hidden argument*/NULL);
		(&V_6)->set_angle_1(L_106);
		// Vector3 jitterOffset = new Vector3(Random.Range(-.25f, .25f), Random.Range(-.25f, .25f), 0);
		float L_107;
		L_107 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-0.25f), (0.25f), /*hidden argument*/NULL);
		float L_108;
		L_108 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-0.25f), (0.25f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_109;
		memset((&L_109), 0, sizeof(L_109));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_109), L_107, L_108, (0.0f), /*hidden argument*/NULL);
		// matrix = Matrix4x4.TRS(jitterOffset * CurveScale, Quaternion.Euler(0, 0, Random.Range(-5f, 5f) * AngleMultiplier), Vector3.one);
		VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A * L_110 = V_1;
		NullCheck(L_110);
		float L_111 = L_110->get_CurveScale_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_112;
		L_112 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_109, L_111, /*hidden argument*/NULL);
		float L_113;
		L_113 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-5.0f), (5.0f), /*hidden argument*/NULL);
		VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A * L_114 = V_1;
		NullCheck(L_114);
		float L_115 = L_114->get_AngleMultiplier_4();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_116;
		L_116 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)L_113, (float)L_115)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_117;
		L_117 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_118;
		L_118 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_112, L_116, L_117, /*hidden argument*/NULL);
		V_2 = L_118;
		// destinationVertices[vertexIndex + 0] = matrix.MultiplyPoint3x4(destinationVertices[vertexIndex + 0]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_119 = V_11;
		int32_t L_120 = V_8;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_121 = V_11;
		int32_t L_122 = V_8;
		NullCheck(L_121);
		int32_t L_123 = L_122;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_125;
		L_125 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_2), L_124, /*hidden argument*/NULL);
		NullCheck(L_119);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(L_120), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_125);
		// destinationVertices[vertexIndex + 1] = matrix.MultiplyPoint3x4(destinationVertices[vertexIndex + 1]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_126 = V_11;
		int32_t L_127 = V_8;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_128 = V_11;
		int32_t L_129 = V_8;
		NullCheck(L_128);
		int32_t L_130 = ((int32_t)il2cpp_codegen_add((int32_t)L_129, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_131 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_132;
		L_132 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_2), L_131, /*hidden argument*/NULL);
		NullCheck(L_126);
		(L_126)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_127, (int32_t)1))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_132);
		// destinationVertices[vertexIndex + 2] = matrix.MultiplyPoint3x4(destinationVertices[vertexIndex + 2]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_133 = V_11;
		int32_t L_134 = V_8;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_135 = V_11;
		int32_t L_136 = V_8;
		NullCheck(L_135);
		int32_t L_137 = ((int32_t)il2cpp_codegen_add((int32_t)L_136, (int32_t)2));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_138 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_139;
		L_139 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_2), L_138, /*hidden argument*/NULL);
		NullCheck(L_133);
		(L_133)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_134, (int32_t)2))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_139);
		// destinationVertices[vertexIndex + 3] = matrix.MultiplyPoint3x4(destinationVertices[vertexIndex + 3]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_140 = V_11;
		int32_t L_141 = V_8;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_142 = V_11;
		int32_t L_143 = V_8;
		NullCheck(L_142);
		int32_t L_144 = ((int32_t)il2cpp_codegen_add((int32_t)L_143, (int32_t)3));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_145 = (L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_146;
		L_146 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_2), L_145, /*hidden argument*/NULL);
		NullCheck(L_140);
		(L_140)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_141, (int32_t)3))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_146);
		// destinationVertices[vertexIndex + 0] += offset;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_147 = V_11;
		int32_t L_148 = V_8;
		NullCheck(L_147);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_149 = ((L_147)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_148)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_150 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_149);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_151 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_152;
		L_152 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_150, L_151, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_149 = L_152;
		// destinationVertices[vertexIndex + 1] += offset;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_153 = V_11;
		int32_t L_154 = V_8;
		NullCheck(L_153);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_155 = ((L_153)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_154, (int32_t)1)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_156 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_155);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_157 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_158;
		L_158 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_156, L_157, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_155 = L_158;
		// destinationVertices[vertexIndex + 2] += offset;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_159 = V_11;
		int32_t L_160 = V_8;
		NullCheck(L_159);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_161 = ((L_159)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_160, (int32_t)2)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_162 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_161);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_163 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_164;
		L_164 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_162, L_163, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_161 = L_164;
		// destinationVertices[vertexIndex + 3] += offset;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_165 = V_11;
		int32_t L_166 = V_8;
		NullCheck(L_165);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_167 = ((L_165)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_166, (int32_t)3)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_168 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_167);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_169 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_170;
		L_170 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_168, L_169, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_167 = L_170;
		// vertexAnim[i] = vertAnim;
		VertexAnimU5BU5D_t069E9FCD87DE8FF65BE288FDB2834711D933AAFF* L_171 = __this->get_U3CvertexAnimU3E5__4_5();
		int32_t L_172 = V_5;
		VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4  L_173 = V_6;
		NullCheck(L_171);
		(L_171)->SetAt(static_cast<il2cpp_array_size_t>(L_172), (VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4 )L_173);
	}

IL_03d8:
	{
		// for (int i = 0; i < characterCount; i++)
		int32_t L_174 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_174, (int32_t)1));
	}

IL_03de:
	{
		// for (int i = 0; i < characterCount; i++)
		int32_t L_175 = V_5;
		int32_t L_176 = V_4;
		if ((((int32_t)L_175) < ((int32_t)L_176)))
		{
			goto IL_0121;
		}
	}
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		V_12 = 0;
		goto IL_0449;
	}

IL_03ec:
	{
		// textInfo.meshInfo[i].mesh.vertices = textInfo.meshInfo[i].vertices;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_177 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_177);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_178 = L_177->get_meshInfo_16();
		int32_t L_179 = V_12;
		NullCheck(L_178);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_180 = ((L_178)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_179)))->get_mesh_4();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_181 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_181);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_182 = L_181->get_meshInfo_16();
		int32_t L_183 = V_12;
		NullCheck(L_182);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_184 = ((L_182)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_183)))->get_vertices_6();
		NullCheck(L_180);
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_180, L_184, /*hidden argument*/NULL);
		// m_TextComponent.UpdateGeometry(textInfo.meshInfo[i].mesh, i);
		VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A * L_185 = V_1;
		NullCheck(L_185);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_186 = L_185->get_m_TextComponent_7();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_187 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_187);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_188 = L_187->get_meshInfo_16();
		int32_t L_189 = V_12;
		NullCheck(L_188);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_190 = ((L_188)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_189)))->get_mesh_4();
		int32_t L_191 = V_12;
		NullCheck(L_186);
		VirtActionInvoker2< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, int32_t >::Invoke(107 /* System.Void TMPro.TMP_Text::UpdateGeometry(UnityEngine.Mesh,System.Int32) */, L_186, L_190, L_191);
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_192 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_192, (int32_t)1));
	}

IL_0449:
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_193 = V_12;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_194 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_194);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_195 = L_194->get_meshInfo_16();
		NullCheck(L_195);
		if ((((int32_t)L_193) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_195)->max_length))))))
		{
			goto IL_03ec;
		}
	}
	{
		// loopCount += 1;
		int32_t L_196 = __this->get_U3CloopCountU3E5__3_4();
		__this->set_U3CloopCountU3E5__3_4(((int32_t)il2cpp_codegen_add((int32_t)L_196, (int32_t)1)));
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_197 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_197, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_197);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0481:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_00c6;
	}
}
// System.Object TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateVertexColorsU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m920EBA43D59A1A88E27FED92CF0AC0DF90179479 (U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_Reset_m6C045A6DD0B60F1512457448E615877EAB86D75D (U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_Reset_m6C045A6DD0B60F1512457448E615877EAB86D75D_RuntimeMethod_var)));
	}
}
// System.Object TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_get_Current_m017345FE58B497EAFC9D0CB1FB733F76EB3449AF (U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__11__ctor_m92612416BEC0EBF5E9849FB603629C0F2F95FEF2 (U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__11_System_IDisposable_Dispose_m77D966994D4717EAFD8EFE169F3E8A4EE8B05B81 (U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateVertexColorsU3Ed__11_MoveNext_mCEEDE03667D329386BB4AE7B8252B7A9B54F443F (U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A * V_1 = NULL;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_14 = NULL;
	float V_15 = 0.0f;
	int32_t V_16 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0105;
			}
			case 2:
			{
				goto IL_04ce;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// m_TextComponent.ForceMeshUpdate();
		VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A * L_3 = V_1;
		NullCheck(L_3);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_4 = L_3->get_m_TextComponent_8();
		NullCheck(L_4);
		VirtActionInvoker2< bool, bool >::Invoke(106 /* System.Void TMPro.TMP_Text::ForceMeshUpdate(System.Boolean,System.Boolean) */, L_4, (bool)0, (bool)0);
		// TMP_TextInfo textInfo = m_TextComponent.textInfo;
		VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A * L_5 = V_1;
		NullCheck(L_5);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_6 = L_5->get_m_TextComponent_8();
		NullCheck(L_6);
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_7;
		L_7 = TMP_Text_get_textInfo_mB006DF4283F14B0E49B9FCC0025D99C29FA534BF_inline(L_6, /*hidden argument*/NULL);
		__this->set_U3CtextInfoU3E5__2_3(L_7);
		// Vector3[][] copyOfVertices = new Vector3[0][];
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_8 = (Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB*)(Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB*)SZArrayNew(Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_U3CcopyOfVerticesU3E5__3_4(L_8);
		// hasTextChanged = true;
		VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A * L_9 = V_1;
		NullCheck(L_9);
		L_9->set_hasTextChanged_9((bool)1);
	}

IL_005a:
	{
		// if (hasTextChanged)
		VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A * L_10 = V_1;
		NullCheck(L_10);
		bool L_11 = L_10->get_hasTextChanged_9();
		if (!L_11)
		{
			goto IL_00df;
		}
	}
	{
		// if (copyOfVertices.Length < textInfo.meshInfo.Length)
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_12 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		NullCheck(L_12);
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_13 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_13);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_14 = L_13->get_meshInfo_16();
		NullCheck(L_14);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0091;
		}
	}
	{
		// copyOfVertices = new Vector3[textInfo.meshInfo.Length][];
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_15 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_15);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_16 = L_15->get_meshInfo_16();
		NullCheck(L_16);
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_17 = (Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB*)(Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB*)SZArrayNew(Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))));
		__this->set_U3CcopyOfVerticesU3E5__3_4(L_17);
	}

IL_0091:
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		V_4 = 0;
		goto IL_00c7;
	}

IL_0096:
	{
		// int length = textInfo.meshInfo[i].vertices.Length;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_18 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_18);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_19 = L_18->get_meshInfo_16();
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->get_vertices_6();
		NullCheck(L_21);
		V_5 = ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)));
		// copyOfVertices[i] = new Vector3[length];
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_22 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_23 = V_4;
		int32_t L_24 = V_5;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_25 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)L_24);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_25);
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_26 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_00c7:
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_27 = V_4;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_28 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_28);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_29 = L_28->get_meshInfo_16();
		NullCheck(L_29);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))))))
		{
			goto IL_0096;
		}
	}
	{
		// hasTextChanged = false;
		VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A * L_30 = V_1;
		NullCheck(L_30);
		L_30->set_hasTextChanged_9((bool)0);
	}

IL_00df:
	{
		// int characterCount = textInfo.characterCount;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_31 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_31);
		int32_t L_32 = L_31->get_characterCount_3();
		// if (characterCount == 0)
		if (L_32)
		{
			goto IL_0111;
		}
	}
	{
		// yield return new WaitForSeconds(0.25f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_33 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_33, (0.25f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_33);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0105:
	{
		__this->set_U3CU3E1__state_0((-1));
		// continue;
		goto IL_005a;
	}

IL_0111:
	{
		// int lineCount = textInfo.lineCount;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_34 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_34);
		int32_t L_35 = L_34->get_lineCount_8();
		V_3 = L_35;
		// for (int i = 0; i < lineCount; i++)
		V_6 = 0;
		goto IL_0448;
	}

IL_0125:
	{
		// int first = textInfo.lineInfo[i].firstCharacterIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_36 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_36);
		TMP_LineInfoU5BU5D_t2B188FB1B6C36641B7FEB177ACC798FAC9806C3D* L_37 = L_36->get_lineInfo_14();
		int32_t L_38 = V_6;
		NullCheck(L_37);
		int32_t L_39 = ((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)))->get_firstCharacterIndex_5();
		V_7 = L_39;
		// int last = textInfo.lineInfo[i].lastCharacterIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_40 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_40);
		TMP_LineInfoU5BU5D_t2B188FB1B6C36641B7FEB177ACC798FAC9806C3D* L_41 = L_40->get_lineInfo_14();
		int32_t L_42 = V_6;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->get_lastCharacterIndex_7();
		V_8 = L_43;
		// Vector3 centerOfLine = (textInfo.characterInfo[first].bottomLeft + textInfo.characterInfo[last].topRight) / 2;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_44 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_44);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_45 = L_44->get_characterInfo_11();
		int32_t L_46 = V_7;
		NullCheck(L_45);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47 = ((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->get_bottomLeft_20();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_48 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_48);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_49 = L_48->get_characterInfo_11();
		int32_t L_50 = V_8;
		NullCheck(L_49);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->get_topRight_21();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_47, L_51, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_52, (2.0f), /*hidden argument*/NULL);
		V_9 = L_53;
		// Quaternion rotation = Quaternion.Euler(0, 0, Random.Range(-0.25f, 0.25f) * RotationMultiplier);
		float L_54;
		L_54 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-0.25f), (0.25f), /*hidden argument*/NULL);
		VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A * L_55 = V_1;
		NullCheck(L_55);
		float L_56 = L_55->get_RotationMultiplier_7();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_57;
		L_57 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)L_54, (float)L_56)), /*hidden argument*/NULL);
		V_10 = L_57;
		// for (int j = first; j <= last; j++)
		int32_t L_58 = V_7;
		V_11 = L_58;
		goto IL_0439;
	}

IL_01c6:
	{
		// if (!textInfo.characterInfo[j].isVisible)
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_59 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_59);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_60 = L_59->get_characterInfo_11();
		int32_t L_61 = V_11;
		NullCheck(L_60);
		bool L_62 = ((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->get_isVisible_40();
		if (!L_62)
		{
			goto IL_0433;
		}
	}
	{
		// int materialIndex = textInfo.characterInfo[j].materialReferenceIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_63 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_63);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_64 = L_63->get_characterInfo_11();
		int32_t L_65 = V_11;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->get_materialReferenceIndex_9();
		V_12 = L_66;
		// int vertexIndex = textInfo.characterInfo[j].vertexIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_67 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_67);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_68 = L_67->get_characterInfo_11();
		int32_t L_69 = V_11;
		NullCheck(L_68);
		int32_t L_70 = ((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)))->get_vertexIndex_14();
		V_13 = L_70;
		// Vector3[] sourceVertices = textInfo.meshInfo[materialIndex].vertices;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_71 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_71);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_72 = L_71->get_meshInfo_16();
		int32_t L_73 = V_12;
		NullCheck(L_72);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_74 = ((L_72)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_73)))->get_vertices_6();
		V_14 = L_74;
		// copyOfVertices[materialIndex][vertexIndex + 0] = sourceVertices[vertexIndex + 0] - centerOfLine;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_75 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_76 = V_12;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_78 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		int32_t L_79 = V_13;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_80 = V_14;
		int32_t L_81 = V_13;
		NullCheck(L_80);
		int32_t L_82 = L_81;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_84 = V_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_85;
		L_85 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_83, L_84, /*hidden argument*/NULL);
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(L_79), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_85);
		// copyOfVertices[materialIndex][vertexIndex + 1] = sourceVertices[vertexIndex + 1] - centerOfLine;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_86 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_87 = V_12;
		NullCheck(L_86);
		int32_t L_88 = L_87;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_89 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		int32_t L_90 = V_13;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_91 = V_14;
		int32_t L_92 = V_13;
		NullCheck(L_91);
		int32_t L_93 = ((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_95 = V_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_96;
		L_96 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_94, L_95, /*hidden argument*/NULL);
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)1))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_96);
		// copyOfVertices[materialIndex][vertexIndex + 2] = sourceVertices[vertexIndex + 2] - centerOfLine;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_97 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_98 = V_12;
		NullCheck(L_97);
		int32_t L_99 = L_98;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_100 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		int32_t L_101 = V_13;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_102 = V_14;
		int32_t L_103 = V_13;
		NullCheck(L_102);
		int32_t L_104 = ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)2));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_105 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_106 = V_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_107;
		L_107 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_105, L_106, /*hidden argument*/NULL);
		NullCheck(L_100);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)2))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_107);
		// copyOfVertices[materialIndex][vertexIndex + 3] = sourceVertices[vertexIndex + 3] - centerOfLine;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_108 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_109 = V_12;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_111 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		int32_t L_112 = V_13;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_113 = V_14;
		int32_t L_114 = V_13;
		NullCheck(L_113);
		int32_t L_115 = ((int32_t)il2cpp_codegen_add((int32_t)L_114, (int32_t)3));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_116 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_117 = V_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_118;
		L_118 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_116, L_117, /*hidden argument*/NULL);
		NullCheck(L_111);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_112, (int32_t)3))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_118);
		// float randomScale = Random.Range(0.995f - 0.001f * ScaleMultiplier, 1.005f + 0.001f * ScaleMultiplier);
		VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A * L_119 = V_1;
		NullCheck(L_119);
		float L_120 = L_119->get_ScaleMultiplier_6();
		VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A * L_121 = V_1;
		NullCheck(L_121);
		float L_122 = L_121->get_ScaleMultiplier_6();
		float L_123;
		L_123 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((float)il2cpp_codegen_subtract((float)(0.995000005f), (float)((float)il2cpp_codegen_multiply((float)(0.00100000005f), (float)L_120)))), ((float)il2cpp_codegen_add((float)(1.005f), (float)((float)il2cpp_codegen_multiply((float)(0.00100000005f), (float)L_122)))), /*hidden argument*/NULL);
		V_15 = L_123;
		// matrix = Matrix4x4.TRS(Vector3.one, rotation, Vector3.one * randomScale);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_124;
		L_124 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_125 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_126;
		L_126 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		float L_127 = V_15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_128;
		L_128 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_126, L_127, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_129;
		L_129 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_124, L_125, L_128, /*hidden argument*/NULL);
		V_2 = L_129;
		// copyOfVertices[materialIndex][vertexIndex + 0] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 0]);
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_130 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_131 = V_12;
		NullCheck(L_130);
		int32_t L_132 = L_131;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_133 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		int32_t L_134 = V_13;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_135 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_136 = V_12;
		NullCheck(L_135);
		int32_t L_137 = L_136;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_138 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		int32_t L_139 = V_13;
		NullCheck(L_138);
		int32_t L_140 = L_139;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_142;
		L_142 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_2), L_141, /*hidden argument*/NULL);
		NullCheck(L_133);
		(L_133)->SetAt(static_cast<il2cpp_array_size_t>(L_134), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_142);
		// copyOfVertices[materialIndex][vertexIndex + 1] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 1]);
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_143 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_144 = V_12;
		NullCheck(L_143);
		int32_t L_145 = L_144;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_146 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		int32_t L_147 = V_13;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_148 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_149 = V_12;
		NullCheck(L_148);
		int32_t L_150 = L_149;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_151 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		int32_t L_152 = V_13;
		NullCheck(L_151);
		int32_t L_153 = ((int32_t)il2cpp_codegen_add((int32_t)L_152, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_154 = (L_151)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_155;
		L_155 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_2), L_154, /*hidden argument*/NULL);
		NullCheck(L_146);
		(L_146)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_147, (int32_t)1))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_155);
		// copyOfVertices[materialIndex][vertexIndex + 2] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 2]);
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_156 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_157 = V_12;
		NullCheck(L_156);
		int32_t L_158 = L_157;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_159 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_158));
		int32_t L_160 = V_13;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_161 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_162 = V_12;
		NullCheck(L_161);
		int32_t L_163 = L_162;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_164 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_161)->GetAt(static_cast<il2cpp_array_size_t>(L_163));
		int32_t L_165 = V_13;
		NullCheck(L_164);
		int32_t L_166 = ((int32_t)il2cpp_codegen_add((int32_t)L_165, (int32_t)2));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_167 = (L_164)->GetAt(static_cast<il2cpp_array_size_t>(L_166));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_168;
		L_168 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_2), L_167, /*hidden argument*/NULL);
		NullCheck(L_159);
		(L_159)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_160, (int32_t)2))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_168);
		// copyOfVertices[materialIndex][vertexIndex + 3] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 3]);
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_169 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_170 = V_12;
		NullCheck(L_169);
		int32_t L_171 = L_170;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_172 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_171));
		int32_t L_173 = V_13;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_174 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_175 = V_12;
		NullCheck(L_174);
		int32_t L_176 = L_175;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_177 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		int32_t L_178 = V_13;
		NullCheck(L_177);
		int32_t L_179 = ((int32_t)il2cpp_codegen_add((int32_t)L_178, (int32_t)3));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_180 = (L_177)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_181;
		L_181 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_2), L_180, /*hidden argument*/NULL);
		NullCheck(L_172);
		(L_172)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_173, (int32_t)3))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_181);
		// copyOfVertices[materialIndex][vertexIndex + 0] += centerOfLine;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_182 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_183 = V_12;
		NullCheck(L_182);
		int32_t L_184 = L_183;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_185 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_182)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
		int32_t L_186 = V_13;
		NullCheck(L_185);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_187 = ((L_185)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_186)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_188 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_187);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_189 = V_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_190;
		L_190 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_188, L_189, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_187 = L_190;
		// copyOfVertices[materialIndex][vertexIndex + 1] += centerOfLine;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_191 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_192 = V_12;
		NullCheck(L_191);
		int32_t L_193 = L_192;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_194 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_191)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		int32_t L_195 = V_13;
		NullCheck(L_194);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_196 = ((L_194)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_195, (int32_t)1)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_197 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_196);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_198 = V_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_199;
		L_199 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_197, L_198, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_196 = L_199;
		// copyOfVertices[materialIndex][vertexIndex + 2] += centerOfLine;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_200 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_201 = V_12;
		NullCheck(L_200);
		int32_t L_202 = L_201;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_203 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_200)->GetAt(static_cast<il2cpp_array_size_t>(L_202));
		int32_t L_204 = V_13;
		NullCheck(L_203);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_205 = ((L_203)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_204, (int32_t)2)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_206 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_205);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_207 = V_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_208;
		L_208 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_206, L_207, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_205 = L_208;
		// copyOfVertices[materialIndex][vertexIndex + 3] += centerOfLine;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_209 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_210 = V_12;
		NullCheck(L_209);
		int32_t L_211 = L_210;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_212 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_209)->GetAt(static_cast<il2cpp_array_size_t>(L_211));
		int32_t L_213 = V_13;
		NullCheck(L_212);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_214 = ((L_212)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_213, (int32_t)3)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_215 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_214);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_216 = V_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_217;
		L_217 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_215, L_216, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_214 = L_217;
	}

IL_0433:
	{
		// for (int j = first; j <= last; j++)
		int32_t L_218 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_218, (int32_t)1));
	}

IL_0439:
	{
		// for (int j = first; j <= last; j++)
		int32_t L_219 = V_11;
		int32_t L_220 = V_8;
		if ((((int32_t)L_219) <= ((int32_t)L_220)))
		{
			goto IL_01c6;
		}
	}
	{
		// for (int i = 0; i < lineCount; i++)
		int32_t L_221 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_221, (int32_t)1));
	}

IL_0448:
	{
		// for (int i = 0; i < lineCount; i++)
		int32_t L_222 = V_6;
		int32_t L_223 = V_3;
		if ((((int32_t)L_222) < ((int32_t)L_223)))
		{
			goto IL_0125;
		}
	}
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		V_16 = 0;
		goto IL_04a4;
	}

IL_0455:
	{
		// textInfo.meshInfo[i].mesh.vertices = copyOfVertices[i];
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_224 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_224);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_225 = L_224->get_meshInfo_16();
		int32_t L_226 = V_16;
		NullCheck(L_225);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_227 = ((L_225)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_226)))->get_mesh_4();
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_228 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_229 = V_16;
		NullCheck(L_228);
		int32_t L_230 = L_229;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_231 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_228)->GetAt(static_cast<il2cpp_array_size_t>(L_230));
		NullCheck(L_227);
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_227, L_231, /*hidden argument*/NULL);
		// m_TextComponent.UpdateGeometry(textInfo.meshInfo[i].mesh, i);
		VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A * L_232 = V_1;
		NullCheck(L_232);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_233 = L_232->get_m_TextComponent_8();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_234 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_234);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_235 = L_234->get_meshInfo_16();
		int32_t L_236 = V_16;
		NullCheck(L_235);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_237 = ((L_235)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_236)))->get_mesh_4();
		int32_t L_238 = V_16;
		NullCheck(L_233);
		VirtActionInvoker2< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, int32_t >::Invoke(107 /* System.Void TMPro.TMP_Text::UpdateGeometry(UnityEngine.Mesh,System.Int32) */, L_233, L_237, L_238);
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_239 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_239, (int32_t)1));
	}

IL_04a4:
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_240 = V_16;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_241 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_241);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_242 = L_241->get_meshInfo_16();
		NullCheck(L_242);
		if ((((int32_t)L_240) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_242)->max_length))))))
		{
			goto IL_0455;
		}
	}
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_243 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_243, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_243);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_04ce:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_005a;
	}
}
// System.Object TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateVertexColorsU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDCCD3645ACF9B18D760B341C863F853996FA9BCE (U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_Reset_mB9444B5E58B4E97105C447F547C0F74C51BCFBFA (U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_Reset_mB9444B5E58B4E97105C447F547C0F74C51BCFBFA_RuntimeMethod_var)));
	}
}
// System.Object TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_get_Current_m5CC464185D5C0251C6206E20AFFA681BA0525A7E (U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__10__ctor_m3E3B1D286DEBED2BC028AD490308568B930C3760 (U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__10_System_IDisposable_Dispose_m0F9D4B2A6ED0500C2120DBA29932CC279E8908DC (U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateVertexColorsU3Ed__10_MoveNext_m0534E436514E663BF024364E524EE5716FF15C8E (U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9 * V_1 = NULL;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_14 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_15;
	memset((&V_15), 0, sizeof(V_15));
	float V_16 = 0.0f;
	int32_t V_17 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0105;
			}
			case 2:
			{
				goto IL_06ab;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// m_TextComponent.ForceMeshUpdate();
		VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9 * L_3 = V_1;
		NullCheck(L_3);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_4 = L_3->get_m_TextComponent_7();
		NullCheck(L_4);
		VirtActionInvoker2< bool, bool >::Invoke(106 /* System.Void TMPro.TMP_Text::ForceMeshUpdate(System.Boolean,System.Boolean) */, L_4, (bool)0, (bool)0);
		// TMP_TextInfo textInfo = m_TextComponent.textInfo;
		VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9 * L_5 = V_1;
		NullCheck(L_5);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_6 = L_5->get_m_TextComponent_7();
		NullCheck(L_6);
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_7;
		L_7 = TMP_Text_get_textInfo_mB006DF4283F14B0E49B9FCC0025D99C29FA534BF_inline(L_6, /*hidden argument*/NULL);
		__this->set_U3CtextInfoU3E5__2_3(L_7);
		// Vector3[][] copyOfVertices = new Vector3[0][];
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_8 = (Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB*)(Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB*)SZArrayNew(Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_U3CcopyOfVerticesU3E5__3_4(L_8);
		// hasTextChanged = true;
		VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9 * L_9 = V_1;
		NullCheck(L_9);
		L_9->set_hasTextChanged_8((bool)1);
	}

IL_005a:
	{
		// if (hasTextChanged)
		VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9 * L_10 = V_1;
		NullCheck(L_10);
		bool L_11 = L_10->get_hasTextChanged_8();
		if (!L_11)
		{
			goto IL_00df;
		}
	}
	{
		// if (copyOfVertices.Length < textInfo.meshInfo.Length)
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_12 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		NullCheck(L_12);
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_13 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_13);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_14 = L_13->get_meshInfo_16();
		NullCheck(L_14);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0091;
		}
	}
	{
		// copyOfVertices = new Vector3[textInfo.meshInfo.Length][];
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_15 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_15);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_16 = L_15->get_meshInfo_16();
		NullCheck(L_16);
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_17 = (Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB*)(Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB*)SZArrayNew(Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))));
		__this->set_U3CcopyOfVerticesU3E5__3_4(L_17);
	}

IL_0091:
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		V_4 = 0;
		goto IL_00c7;
	}

IL_0096:
	{
		// int length = textInfo.meshInfo[i].vertices.Length;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_18 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_18);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_19 = L_18->get_meshInfo_16();
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->get_vertices_6();
		NullCheck(L_21);
		V_5 = ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)));
		// copyOfVertices[i] = new Vector3[length];
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_22 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_23 = V_4;
		int32_t L_24 = V_5;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_25 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)L_24);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_25);
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_26 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_00c7:
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_27 = V_4;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_28 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_28);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_29 = L_28->get_meshInfo_16();
		NullCheck(L_29);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))))))
		{
			goto IL_0096;
		}
	}
	{
		// hasTextChanged = false;
		VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9 * L_30 = V_1;
		NullCheck(L_30);
		L_30->set_hasTextChanged_8((bool)0);
	}

IL_00df:
	{
		// int characterCount = textInfo.characterCount;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_31 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_31);
		int32_t L_32 = L_31->get_characterCount_3();
		// if (characterCount == 0)
		if (L_32)
		{
			goto IL_0111;
		}
	}
	{
		// yield return new WaitForSeconds(0.25f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_33 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_33, (0.25f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_33);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0105:
	{
		__this->set_U3CU3E1__state_0((-1));
		// continue;
		goto IL_005a;
	}

IL_0111:
	{
		// int lineCount = textInfo.lineCount;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_34 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_34);
		int32_t L_35 = L_34->get_lineCount_8();
		V_3 = L_35;
		// for (int i = 0; i < lineCount; i++)
		V_6 = 0;
		goto IL_0625;
	}

IL_0125:
	{
		// int first = textInfo.lineInfo[i].firstCharacterIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_36 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_36);
		TMP_LineInfoU5BU5D_t2B188FB1B6C36641B7FEB177ACC798FAC9806C3D* L_37 = L_36->get_lineInfo_14();
		int32_t L_38 = V_6;
		NullCheck(L_37);
		int32_t L_39 = ((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)))->get_firstCharacterIndex_5();
		V_7 = L_39;
		// int last = textInfo.lineInfo[i].lastCharacterIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_40 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_40);
		TMP_LineInfoU5BU5D_t2B188FB1B6C36641B7FEB177ACC798FAC9806C3D* L_41 = L_40->get_lineInfo_14();
		int32_t L_42 = V_6;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->get_lastCharacterIndex_7();
		V_8 = L_43;
		// Vector3 centerOfLine = (textInfo.characterInfo[first].bottomLeft + textInfo.characterInfo[last].topRight) / 2;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_44 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_44);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_45 = L_44->get_characterInfo_11();
		int32_t L_46 = V_7;
		NullCheck(L_45);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47 = ((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->get_bottomLeft_20();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_48 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_48);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_49 = L_48->get_characterInfo_11();
		int32_t L_50 = V_8;
		NullCheck(L_49);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->get_topRight_21();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_47, L_51, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_52, (2.0f), /*hidden argument*/NULL);
		V_9 = L_53;
		// Quaternion rotation = Quaternion.Euler(0, 0, Random.Range(-0.25f, 0.25f));
		float L_54;
		L_54 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-0.25f), (0.25f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_55;
		L_55 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), L_54, /*hidden argument*/NULL);
		V_10 = L_55;
		// for (int j = first; j <= last; j++)
		int32_t L_56 = V_7;
		V_11 = L_56;
		goto IL_0616;
	}

IL_01bf:
	{
		// if (!textInfo.characterInfo[j].isVisible)
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_57 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_57);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_58 = L_57->get_characterInfo_11();
		int32_t L_59 = V_11;
		NullCheck(L_58);
		bool L_60 = ((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->get_isVisible_40();
		if (!L_60)
		{
			goto IL_0610;
		}
	}
	{
		// int materialIndex = textInfo.characterInfo[j].materialReferenceIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_61 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_61);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_62 = L_61->get_characterInfo_11();
		int32_t L_63 = V_11;
		NullCheck(L_62);
		int32_t L_64 = ((L_62)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_63)))->get_materialReferenceIndex_9();
		V_12 = L_64;
		// int vertexIndex = textInfo.characterInfo[j].vertexIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_65 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_65);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_66 = L_65->get_characterInfo_11();
		int32_t L_67 = V_11;
		NullCheck(L_66);
		int32_t L_68 = ((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67)))->get_vertexIndex_14();
		V_13 = L_68;
		// Vector3[] sourceVertices = textInfo.meshInfo[materialIndex].vertices;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_69 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_69);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_70 = L_69->get_meshInfo_16();
		int32_t L_71 = V_12;
		NullCheck(L_70);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->get_vertices_6();
		V_14 = L_72;
		// Vector3 charCenter = (sourceVertices[vertexIndex + 0] + sourceVertices[vertexIndex + 2]) / 2;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_73 = V_14;
		int32_t L_74 = V_13;
		NullCheck(L_73);
		int32_t L_75 = L_74;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_77 = V_14;
		int32_t L_78 = V_13;
		NullCheck(L_77);
		int32_t L_79 = ((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)2));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_81;
		L_81 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_76, L_80, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82;
		L_82 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_81, (2.0f), /*hidden argument*/NULL);
		V_15 = L_82;
		// copyOfVertices[materialIndex][vertexIndex + 0] = sourceVertices[vertexIndex + 0] - charCenter;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_83 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_84 = V_12;
		NullCheck(L_83);
		int32_t L_85 = L_84;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_86 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		int32_t L_87 = V_13;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_88 = V_14;
		int32_t L_89 = V_13;
		NullCheck(L_88);
		int32_t L_90 = L_89;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_92 = V_15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_93;
		L_93 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_91, L_92, /*hidden argument*/NULL);
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(L_87), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_93);
		// copyOfVertices[materialIndex][vertexIndex + 1] = sourceVertices[vertexIndex + 1] - charCenter;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_94 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_95 = V_12;
		NullCheck(L_94);
		int32_t L_96 = L_95;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_97 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		int32_t L_98 = V_13;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_99 = V_14;
		int32_t L_100 = V_13;
		NullCheck(L_99);
		int32_t L_101 = ((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_102 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_103 = V_15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_104;
		L_104 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_102, L_103, /*hidden argument*/NULL);
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)1))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_104);
		// copyOfVertices[materialIndex][vertexIndex + 2] = sourceVertices[vertexIndex + 2] - charCenter;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_105 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_106 = V_12;
		NullCheck(L_105);
		int32_t L_107 = L_106;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_108 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		int32_t L_109 = V_13;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_110 = V_14;
		int32_t L_111 = V_13;
		NullCheck(L_110);
		int32_t L_112 = ((int32_t)il2cpp_codegen_add((int32_t)L_111, (int32_t)2));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_114 = V_15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_115;
		L_115 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_113, L_114, /*hidden argument*/NULL);
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)2))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_115);
		// copyOfVertices[materialIndex][vertexIndex + 3] = sourceVertices[vertexIndex + 3] - charCenter;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_116 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_117 = V_12;
		NullCheck(L_116);
		int32_t L_118 = L_117;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_119 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		int32_t L_120 = V_13;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_121 = V_14;
		int32_t L_122 = V_13;
		NullCheck(L_121);
		int32_t L_123 = ((int32_t)il2cpp_codegen_add((int32_t)L_122, (int32_t)3));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_125 = V_15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_126;
		L_126 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_124, L_125, /*hidden argument*/NULL);
		NullCheck(L_119);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_120, (int32_t)3))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_126);
		// float randomScale = Random.Range(0.95f, 1.05f);
		float L_127;
		L_127 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.949999988f), (1.04999995f), /*hidden argument*/NULL);
		V_16 = L_127;
		// matrix = Matrix4x4.TRS(Vector3.one, Quaternion.identity, Vector3.one * randomScale);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_128;
		L_128 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_129;
		L_129 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_130;
		L_130 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		float L_131 = V_16;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_132;
		L_132 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_130, L_131, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_133;
		L_133 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_128, L_129, L_132, /*hidden argument*/NULL);
		V_2 = L_133;
		// copyOfVertices[materialIndex][vertexIndex + 0] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 0]);
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_134 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_135 = V_12;
		NullCheck(L_134);
		int32_t L_136 = L_135;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_137 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		int32_t L_138 = V_13;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_139 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_140 = V_12;
		NullCheck(L_139);
		int32_t L_141 = L_140;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_142 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		int32_t L_143 = V_13;
		NullCheck(L_142);
		int32_t L_144 = L_143;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_145 = (L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_146;
		L_146 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_2), L_145, /*hidden argument*/NULL);
		NullCheck(L_137);
		(L_137)->SetAt(static_cast<il2cpp_array_size_t>(L_138), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_146);
		// copyOfVertices[materialIndex][vertexIndex + 1] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 1]);
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_147 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_148 = V_12;
		NullCheck(L_147);
		int32_t L_149 = L_148;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_150 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		int32_t L_151 = V_13;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_152 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_153 = V_12;
		NullCheck(L_152);
		int32_t L_154 = L_153;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_155 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		int32_t L_156 = V_13;
		NullCheck(L_155);
		int32_t L_157 = ((int32_t)il2cpp_codegen_add((int32_t)L_156, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_159;
		L_159 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_2), L_158, /*hidden argument*/NULL);
		NullCheck(L_150);
		(L_150)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_151, (int32_t)1))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_159);
		// copyOfVertices[materialIndex][vertexIndex + 2] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 2]);
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_160 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_161 = V_12;
		NullCheck(L_160);
		int32_t L_162 = L_161;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_163 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		int32_t L_164 = V_13;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_165 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_166 = V_12;
		NullCheck(L_165);
		int32_t L_167 = L_166;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_168 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_165)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		int32_t L_169 = V_13;
		NullCheck(L_168);
		int32_t L_170 = ((int32_t)il2cpp_codegen_add((int32_t)L_169, (int32_t)2));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_171 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_172;
		L_172 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_2), L_171, /*hidden argument*/NULL);
		NullCheck(L_163);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_164, (int32_t)2))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_172);
		// copyOfVertices[materialIndex][vertexIndex + 3] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 3]);
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_173 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_174 = V_12;
		NullCheck(L_173);
		int32_t L_175 = L_174;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_176 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		int32_t L_177 = V_13;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_178 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_179 = V_12;
		NullCheck(L_178);
		int32_t L_180 = L_179;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_181 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_180));
		int32_t L_182 = V_13;
		NullCheck(L_181);
		int32_t L_183 = ((int32_t)il2cpp_codegen_add((int32_t)L_182, (int32_t)3));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_184 = (L_181)->GetAt(static_cast<il2cpp_array_size_t>(L_183));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_185;
		L_185 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_2), L_184, /*hidden argument*/NULL);
		NullCheck(L_176);
		(L_176)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_177, (int32_t)3))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_185);
		// copyOfVertices[materialIndex][vertexIndex + 0] += charCenter;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_186 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_187 = V_12;
		NullCheck(L_186);
		int32_t L_188 = L_187;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_189 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_186)->GetAt(static_cast<il2cpp_array_size_t>(L_188));
		int32_t L_190 = V_13;
		NullCheck(L_189);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_191 = ((L_189)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_190)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_192 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_191);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_193 = V_15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_194;
		L_194 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_192, L_193, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_191 = L_194;
		// copyOfVertices[materialIndex][vertexIndex + 1] += charCenter;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_195 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_196 = V_12;
		NullCheck(L_195);
		int32_t L_197 = L_196;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_198 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_195)->GetAt(static_cast<il2cpp_array_size_t>(L_197));
		int32_t L_199 = V_13;
		NullCheck(L_198);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_200 = ((L_198)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_199, (int32_t)1)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_201 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_200);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_202 = V_15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_203;
		L_203 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_201, L_202, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_200 = L_203;
		// copyOfVertices[materialIndex][vertexIndex + 2] += charCenter;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_204 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_205 = V_12;
		NullCheck(L_204);
		int32_t L_206 = L_205;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_207 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_204)->GetAt(static_cast<il2cpp_array_size_t>(L_206));
		int32_t L_208 = V_13;
		NullCheck(L_207);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_209 = ((L_207)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_208, (int32_t)2)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_210 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_209);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_211 = V_15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_212;
		L_212 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_210, L_211, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_209 = L_212;
		// copyOfVertices[materialIndex][vertexIndex + 3] += charCenter;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_213 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_214 = V_12;
		NullCheck(L_213);
		int32_t L_215 = L_214;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_216 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_215));
		int32_t L_217 = V_13;
		NullCheck(L_216);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_218 = ((L_216)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_217, (int32_t)3)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_219 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_218);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_220 = V_15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_221;
		L_221 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_219, L_220, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_218 = L_221;
		// copyOfVertices[materialIndex][vertexIndex + 0] -= centerOfLine;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_222 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_223 = V_12;
		NullCheck(L_222);
		int32_t L_224 = L_223;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_225 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_222)->GetAt(static_cast<il2cpp_array_size_t>(L_224));
		int32_t L_226 = V_13;
		NullCheck(L_225);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_227 = ((L_225)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_226)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_228 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_227);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_229 = V_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_230;
		L_230 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_228, L_229, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_227 = L_230;
		// copyOfVertices[materialIndex][vertexIndex + 1] -= centerOfLine;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_231 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_232 = V_12;
		NullCheck(L_231);
		int32_t L_233 = L_232;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_234 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_231)->GetAt(static_cast<il2cpp_array_size_t>(L_233));
		int32_t L_235 = V_13;
		NullCheck(L_234);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_236 = ((L_234)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_235, (int32_t)1)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_237 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_236);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_238 = V_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_239;
		L_239 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_237, L_238, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_236 = L_239;
		// copyOfVertices[materialIndex][vertexIndex + 2] -= centerOfLine;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_240 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_241 = V_12;
		NullCheck(L_240);
		int32_t L_242 = L_241;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_243 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_240)->GetAt(static_cast<il2cpp_array_size_t>(L_242));
		int32_t L_244 = V_13;
		NullCheck(L_243);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_245 = ((L_243)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_244, (int32_t)2)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_246 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_245);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_247 = V_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_248;
		L_248 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_246, L_247, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_245 = L_248;
		// copyOfVertices[materialIndex][vertexIndex + 3] -= centerOfLine;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_249 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_250 = V_12;
		NullCheck(L_249);
		int32_t L_251 = L_250;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_252 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_249)->GetAt(static_cast<il2cpp_array_size_t>(L_251));
		int32_t L_253 = V_13;
		NullCheck(L_252);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_254 = ((L_252)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_253, (int32_t)3)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_255 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_254);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_256 = V_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_257;
		L_257 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_255, L_256, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_254 = L_257;
		// matrix = Matrix4x4.TRS(Vector3.one, rotation, Vector3.one);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_258;
		L_258 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_259 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_260;
		L_260 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_261;
		L_261 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_258, L_259, L_260, /*hidden argument*/NULL);
		V_2 = L_261;
		// copyOfVertices[materialIndex][vertexIndex + 0] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 0]);
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_262 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_263 = V_12;
		NullCheck(L_262);
		int32_t L_264 = L_263;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_265 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_262)->GetAt(static_cast<il2cpp_array_size_t>(L_264));
		int32_t L_266 = V_13;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_267 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_268 = V_12;
		NullCheck(L_267);
		int32_t L_269 = L_268;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_270 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_267)->GetAt(static_cast<il2cpp_array_size_t>(L_269));
		int32_t L_271 = V_13;
		NullCheck(L_270);
		int32_t L_272 = L_271;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_273 = (L_270)->GetAt(static_cast<il2cpp_array_size_t>(L_272));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_274;
		L_274 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_2), L_273, /*hidden argument*/NULL);
		NullCheck(L_265);
		(L_265)->SetAt(static_cast<il2cpp_array_size_t>(L_266), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_274);
		// copyOfVertices[materialIndex][vertexIndex + 1] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 1]);
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_275 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_276 = V_12;
		NullCheck(L_275);
		int32_t L_277 = L_276;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_278 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_275)->GetAt(static_cast<il2cpp_array_size_t>(L_277));
		int32_t L_279 = V_13;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_280 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_281 = V_12;
		NullCheck(L_280);
		int32_t L_282 = L_281;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_283 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_280)->GetAt(static_cast<il2cpp_array_size_t>(L_282));
		int32_t L_284 = V_13;
		NullCheck(L_283);
		int32_t L_285 = ((int32_t)il2cpp_codegen_add((int32_t)L_284, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_286 = (L_283)->GetAt(static_cast<il2cpp_array_size_t>(L_285));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_287;
		L_287 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_2), L_286, /*hidden argument*/NULL);
		NullCheck(L_278);
		(L_278)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_279, (int32_t)1))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_287);
		// copyOfVertices[materialIndex][vertexIndex + 2] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 2]);
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_288 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_289 = V_12;
		NullCheck(L_288);
		int32_t L_290 = L_289;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_291 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_288)->GetAt(static_cast<il2cpp_array_size_t>(L_290));
		int32_t L_292 = V_13;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_293 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_294 = V_12;
		NullCheck(L_293);
		int32_t L_295 = L_294;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_296 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_293)->GetAt(static_cast<il2cpp_array_size_t>(L_295));
		int32_t L_297 = V_13;
		NullCheck(L_296);
		int32_t L_298 = ((int32_t)il2cpp_codegen_add((int32_t)L_297, (int32_t)2));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_299 = (L_296)->GetAt(static_cast<il2cpp_array_size_t>(L_298));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_300;
		L_300 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_2), L_299, /*hidden argument*/NULL);
		NullCheck(L_291);
		(L_291)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_292, (int32_t)2))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_300);
		// copyOfVertices[materialIndex][vertexIndex + 3] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 3]);
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_301 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_302 = V_12;
		NullCheck(L_301);
		int32_t L_303 = L_302;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_304 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_301)->GetAt(static_cast<il2cpp_array_size_t>(L_303));
		int32_t L_305 = V_13;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_306 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_307 = V_12;
		NullCheck(L_306);
		int32_t L_308 = L_307;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_309 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_306)->GetAt(static_cast<il2cpp_array_size_t>(L_308));
		int32_t L_310 = V_13;
		NullCheck(L_309);
		int32_t L_311 = ((int32_t)il2cpp_codegen_add((int32_t)L_310, (int32_t)3));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_312 = (L_309)->GetAt(static_cast<il2cpp_array_size_t>(L_311));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_313;
		L_313 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_2), L_312, /*hidden argument*/NULL);
		NullCheck(L_304);
		(L_304)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_305, (int32_t)3))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_313);
		// copyOfVertices[materialIndex][vertexIndex + 0] += centerOfLine;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_314 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_315 = V_12;
		NullCheck(L_314);
		int32_t L_316 = L_315;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_317 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_314)->GetAt(static_cast<il2cpp_array_size_t>(L_316));
		int32_t L_318 = V_13;
		NullCheck(L_317);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_319 = ((L_317)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_318)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_320 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_319);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_321 = V_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_322;
		L_322 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_320, L_321, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_319 = L_322;
		// copyOfVertices[materialIndex][vertexIndex + 1] += centerOfLine;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_323 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_324 = V_12;
		NullCheck(L_323);
		int32_t L_325 = L_324;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_326 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_323)->GetAt(static_cast<il2cpp_array_size_t>(L_325));
		int32_t L_327 = V_13;
		NullCheck(L_326);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_328 = ((L_326)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_327, (int32_t)1)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_329 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_328);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_330 = V_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_331;
		L_331 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_329, L_330, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_328 = L_331;
		// copyOfVertices[materialIndex][vertexIndex + 2] += centerOfLine;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_332 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_333 = V_12;
		NullCheck(L_332);
		int32_t L_334 = L_333;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_335 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_332)->GetAt(static_cast<il2cpp_array_size_t>(L_334));
		int32_t L_336 = V_13;
		NullCheck(L_335);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_337 = ((L_335)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_336, (int32_t)2)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_338 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_337);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_339 = V_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_340;
		L_340 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_338, L_339, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_337 = L_340;
		// copyOfVertices[materialIndex][vertexIndex + 3] += centerOfLine;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_341 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_342 = V_12;
		NullCheck(L_341);
		int32_t L_343 = L_342;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_344 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_341)->GetAt(static_cast<il2cpp_array_size_t>(L_343));
		int32_t L_345 = V_13;
		NullCheck(L_344);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_346 = ((L_344)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_345, (int32_t)3)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_347 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_346);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_348 = V_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_349;
		L_349 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_347, L_348, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_346 = L_349;
	}

IL_0610:
	{
		// for (int j = first; j <= last; j++)
		int32_t L_350 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_350, (int32_t)1));
	}

IL_0616:
	{
		// for (int j = first; j <= last; j++)
		int32_t L_351 = V_11;
		int32_t L_352 = V_8;
		if ((((int32_t)L_351) <= ((int32_t)L_352)))
		{
			goto IL_01bf;
		}
	}
	{
		// for (int i = 0; i < lineCount; i++)
		int32_t L_353 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_353, (int32_t)1));
	}

IL_0625:
	{
		// for (int i = 0; i < lineCount; i++)
		int32_t L_354 = V_6;
		int32_t L_355 = V_3;
		if ((((int32_t)L_354) < ((int32_t)L_355)))
		{
			goto IL_0125;
		}
	}
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		V_17 = 0;
		goto IL_0681;
	}

IL_0632:
	{
		// textInfo.meshInfo[i].mesh.vertices = copyOfVertices[i];
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_356 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_356);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_357 = L_356->get_meshInfo_16();
		int32_t L_358 = V_17;
		NullCheck(L_357);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_359 = ((L_357)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_358)))->get_mesh_4();
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_360 = __this->get_U3CcopyOfVerticesU3E5__3_4();
		int32_t L_361 = V_17;
		NullCheck(L_360);
		int32_t L_362 = L_361;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_363 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_360)->GetAt(static_cast<il2cpp_array_size_t>(L_362));
		NullCheck(L_359);
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_359, L_363, /*hidden argument*/NULL);
		// m_TextComponent.UpdateGeometry(textInfo.meshInfo[i].mesh, i);
		VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9 * L_364 = V_1;
		NullCheck(L_364);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_365 = L_364->get_m_TextComponent_7();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_366 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_366);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_367 = L_366->get_meshInfo_16();
		int32_t L_368 = V_17;
		NullCheck(L_367);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_369 = ((L_367)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_368)))->get_mesh_4();
		int32_t L_370 = V_17;
		NullCheck(L_365);
		VirtActionInvoker2< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, int32_t >::Invoke(107 /* System.Void TMPro.TMP_Text::UpdateGeometry(UnityEngine.Mesh,System.Int32) */, L_365, L_369, L_370);
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_371 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_371, (int32_t)1));
	}

IL_0681:
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_372 = V_17;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_373 = __this->get_U3CtextInfoU3E5__2_3();
		NullCheck(L_373);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_374 = L_373->get_meshInfo_16();
		NullCheck(L_374);
		if ((((int32_t)L_372) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_374)->max_length))))))
		{
			goto IL_0632;
		}
	}
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_375 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_375, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_375);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_06ab:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_005a;
	}
}
// System.Object TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateVertexColorsU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF2A8BAFC0261ACBBE8EEA74DE4B498D30C68AE3D (U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_m5F12D7C6F2523BEB6326FE49AE972116D6157CBB (U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_m5F12D7C6F2523BEB6326FE49AE972116D6157CBB_RuntimeMethod_var)));
	}
}
// System.Object TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_get_Current_mB9C12786011A3B78517AEFAE8D5A78B95A4219AD (U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void TMPro.Examples.VertexZoom/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m4EC5F8042B5AC645EA7D0913E50FD22144DBD348 (U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 TMPro.Examples.VertexZoom/<>c__DisplayClass10_0::<AnimateVertexColors>b__0(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass10_0_U3CAnimateVertexColorsU3Eb__0_m959A7E1D6162B5AAF28B953AFB04D7943BCAB107 (U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6 * __this, int32_t ___a0, int32_t ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// scaleSortingOrder.Sort((a, b) => modifiedCharScale[a].CompareTo(modifiedCharScale[b]));
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_0 = __this->get_modifiedCharScale_0();
		int32_t L_1 = ___a0;
		NullCheck(L_0);
		float L_2;
		L_2 = List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_RuntimeMethod_var);
		V_0 = L_2;
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_3 = __this->get_modifiedCharScale_0();
		int32_t L_4 = ___b1;
		NullCheck(L_3);
		float L_5;
		L_5 = List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_RuntimeMethod_var);
		int32_t L_6;
		L_6 = Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4((float*)(&V_0), L_5, /*hidden argument*/NULL);
		return L_6;
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
// System.Void TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__10__ctor_m537CF0A5ADF5BBC2DF784BF526E3F32EB528E1B2 (U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__10_System_IDisposable_Dispose_mF0CD944C393771101D2718A660E1DFF22385819F (U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateVertexColorsU3Ed__10_MoveNext_m8340EFEB2B2CF6EA1545CFB6967968CA171FEE66 (U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1__ctor_mAA110A3F5163760D63E663F9545B370983389F73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m30CC5EC96F262C98EE9BFCFC9CF8D09F67E0A23D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_mA28ABFC1E6C7A17EA71BC9C2DBED9CC3EE8DCDC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_U3CAnimateVertexColorsU3Eb__0_m959A7E1D6162B5AAF28B953AFB04D7943BCAB107_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163 * V_1 = NULL;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_7 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_9 = NULL;
	float V_10 = 0.0f;
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* V_11 = NULL;
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* V_12 = NULL;
	int32_t V_13 = 0;
	Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C * V_14 = NULL;
	Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C * G_B16_0 = NULL;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * G_B16_1 = NULL;
	Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C * G_B15_0 = NULL;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * G_B15_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00cd;
			}
			case 2:
			{
				goto IL_05b2;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6 * L_3 = (U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass10_0__ctor_m4EC5F8042B5AC645EA7D0913E50FD22144DBD348(L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E8__1_3(L_3);
		// m_TextComponent.ForceMeshUpdate();
		VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163 * L_4 = V_1;
		NullCheck(L_4);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_5 = L_4->get_m_TextComponent_7();
		NullCheck(L_5);
		VirtActionInvoker2< bool, bool >::Invoke(106 /* System.Void TMPro.TMP_Text::ForceMeshUpdate(System.Boolean,System.Boolean) */, L_5, (bool)0, (bool)0);
		// TMP_TextInfo textInfo = m_TextComponent.textInfo;
		VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163 * L_6 = V_1;
		NullCheck(L_6);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_7 = L_6->get_m_TextComponent_7();
		NullCheck(L_7);
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_8;
		L_8 = TMP_Text_get_textInfo_mB006DF4283F14B0E49B9FCC0025D99C29FA534BF_inline(L_7, /*hidden argument*/NULL);
		__this->set_U3CtextInfoU3E5__2_4(L_8);
		// TMP_MeshInfo[] cachedMeshInfoVertexData = textInfo.CopyMeshInfoVertexData();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_9 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_9);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_10;
		L_10 = TMP_TextInfo_CopyMeshInfoVertexData_m76E3357D987643644CE791EBEED4AB16A0ABFA58(L_9, /*hidden argument*/NULL);
		__this->set_U3CcachedMeshInfoVertexDataU3E5__3_5(L_10);
		// List<float> modifiedCharScale = new List<float>();
		U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6 * L_11 = __this->get_U3CU3E8__1_3();
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_12 = (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)il2cpp_codegen_object_new(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_il2cpp_TypeInfo_var);
		List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C(L_12, /*hidden argument*/List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C_RuntimeMethod_var);
		NullCheck(L_11);
		L_11->set_modifiedCharScale_0(L_12);
		// List<int> scaleSortingOrder = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_13 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_13, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		__this->set_U3CscaleSortingOrderU3E5__4_6(L_13);
		// hasTextChanged = true;
		VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163 * L_14 = V_1;
		NullCheck(L_14);
		L_14->set_hasTextChanged_8((bool)1);
	}

IL_0085:
	{
		// if (hasTextChanged)
		VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163 * L_15 = V_1;
		NullCheck(L_15);
		bool L_16 = L_15->get_hasTextChanged_8();
		if (!L_16)
		{
			goto IL_00a5;
		}
	}
	{
		// cachedMeshInfoVertexData = textInfo.CopyMeshInfoVertexData();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_17 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_17);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_18;
		L_18 = TMP_TextInfo_CopyMeshInfoVertexData_m76E3357D987643644CE791EBEED4AB16A0ABFA58(L_17, /*hidden argument*/NULL);
		__this->set_U3CcachedMeshInfoVertexDataU3E5__3_5(L_18);
		// hasTextChanged = false;
		VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163 * L_19 = V_1;
		NullCheck(L_19);
		L_19->set_hasTextChanged_8((bool)0);
	}

IL_00a5:
	{
		// int characterCount = textInfo.characterCount;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_20 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_20);
		int32_t L_21 = L_20->get_characterCount_3();
		V_3 = L_21;
		// if (characterCount == 0)
		int32_t L_22 = V_3;
		if (L_22)
		{
			goto IL_00d6;
		}
	}
	{
		// yield return new WaitForSeconds(0.25f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_23 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_23, (0.25f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_23);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00cd:
	{
		__this->set_U3CU3E1__state_0((-1));
		// continue;
		goto IL_0085;
	}

IL_00d6:
	{
		// modifiedCharScale.Clear();
		U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6 * L_24 = __this->get_U3CU3E8__1_3();
		NullCheck(L_24);
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_25 = L_24->get_modifiedCharScale_0();
		NullCheck(L_25);
		List_1_Clear_m30CC5EC96F262C98EE9BFCFC9CF8D09F67E0A23D(L_25, /*hidden argument*/List_1_Clear_m30CC5EC96F262C98EE9BFCFC9CF8D09F67E0A23D_RuntimeMethod_var);
		// scaleSortingOrder.Clear();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_26 = __this->get_U3CscaleSortingOrderU3E5__4_6();
		NullCheck(L_26);
		List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A(L_26, /*hidden argument*/List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var);
		// for (int i = 0; i < characterCount; i++)
		V_4 = 0;
		goto IL_045a;
	}

IL_00f9:
	{
		// TMP_CharacterInfo charInfo = textInfo.characterInfo[i];
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_27 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_27);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_28 = L_27->get_characterInfo_11();
		int32_t L_29 = V_4;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		// if (!charInfo.isVisible)
		bool L_32 = L_31.get_isVisible_40();
		if (!L_32)
		{
			goto IL_0454;
		}
	}
	{
		// int materialIndex = textInfo.characterInfo[i].materialReferenceIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_33 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_33);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_34 = L_33->get_characterInfo_11();
		int32_t L_35 = V_4;
		NullCheck(L_34);
		int32_t L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->get_materialReferenceIndex_9();
		V_5 = L_36;
		// int vertexIndex = textInfo.characterInfo[i].vertexIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_37 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_37);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_38 = L_37->get_characterInfo_11();
		int32_t L_39 = V_4;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->get_vertexIndex_14();
		V_6 = L_40;
		// Vector3[] sourceVertices = cachedMeshInfoVertexData[materialIndex].vertices;
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_41 = __this->get_U3CcachedMeshInfoVertexDataU3E5__3_5();
		int32_t L_42 = V_5;
		NullCheck(L_41);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->get_vertices_6();
		V_7 = L_43;
		// Vector2 charMidBasline = (sourceVertices[vertexIndex + 0] + sourceVertices[vertexIndex + 2]) / 2;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_44 = V_7;
		int32_t L_45 = V_6;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_48 = V_7;
		int32_t L_49 = V_6;
		NullCheck(L_48);
		int32_t L_50 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)2));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_47, L_51, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_52, (2.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_54;
		L_54 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_53, /*hidden argument*/NULL);
		// Vector3 offset = charMidBasline;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_54, /*hidden argument*/NULL);
		V_8 = L_55;
		// Vector3[] destinationVertices = textInfo.meshInfo[materialIndex].vertices;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_56 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_56);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_57 = L_56->get_meshInfo_16();
		int32_t L_58 = V_5;
		NullCheck(L_57);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_59 = ((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->get_vertices_6();
		V_9 = L_59;
		// destinationVertices[vertexIndex + 0] = sourceVertices[vertexIndex + 0] - offset;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_60 = V_9;
		int32_t L_61 = V_6;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_62 = V_7;
		int32_t L_63 = V_6;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66 = V_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67;
		L_67 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_65, L_66, /*hidden argument*/NULL);
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_67);
		// destinationVertices[vertexIndex + 1] = sourceVertices[vertexIndex + 1] - offset;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_68 = V_9;
		int32_t L_69 = V_6;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_70 = V_7;
		int32_t L_71 = V_6;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74 = V_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75;
		L_75 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_73, L_74, /*hidden argument*/NULL);
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_75);
		// destinationVertices[vertexIndex + 2] = sourceVertices[vertexIndex + 2] - offset;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_76 = V_9;
		int32_t L_77 = V_6;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_78 = V_7;
		int32_t L_79 = V_6;
		NullCheck(L_78);
		int32_t L_80 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)2));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82 = V_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_83;
		L_83 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_81, L_82, /*hidden argument*/NULL);
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)2))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_83);
		// destinationVertices[vertexIndex + 3] = sourceVertices[vertexIndex + 3] - offset;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_84 = V_9;
		int32_t L_85 = V_6;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_86 = V_7;
		int32_t L_87 = V_6;
		NullCheck(L_86);
		int32_t L_88 = ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)3));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90 = V_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_91;
		L_91 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_89, L_90, /*hidden argument*/NULL);
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)3))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_91);
		// float randomScale = Random.Range(1f, 1.5f);
		float L_92;
		L_92 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((1.0f), (1.5f), /*hidden argument*/NULL);
		V_10 = L_92;
		// modifiedCharScale.Add(randomScale);
		U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6 * L_93 = __this->get_U3CU3E8__1_3();
		NullCheck(L_93);
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_94 = L_93->get_modifiedCharScale_0();
		float L_95 = V_10;
		NullCheck(L_94);
		List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A(L_94, L_95, /*hidden argument*/List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_RuntimeMethod_var);
		// scaleSortingOrder.Add(modifiedCharScale.Count - 1);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_96 = __this->get_U3CscaleSortingOrderU3E5__4_6();
		U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6 * L_97 = __this->get_U3CU3E8__1_3();
		NullCheck(L_97);
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_98 = L_97->get_modifiedCharScale_0();
		NullCheck(L_98);
		int32_t L_99;
		L_99 = List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_inline(L_98, /*hidden argument*/List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_RuntimeMethod_var);
		NullCheck(L_96);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_96, ((int32_t)il2cpp_codegen_subtract((int32_t)L_99, (int32_t)1)), /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// matrix = Matrix4x4.TRS(new Vector3(0, 0, 0), Quaternion.identity, Vector3.one * randomScale);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_100;
		memset((&L_100), 0, sizeof(L_100));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_100), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_101;
		L_101 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_102;
		L_102 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		float L_103 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_104;
		L_104 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_102, L_103, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_105;
		L_105 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_100, L_101, L_104, /*hidden argument*/NULL);
		V_2 = L_105;
		// destinationVertices[vertexIndex + 0] = matrix.MultiplyPoint3x4(destinationVertices[vertexIndex + 0]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_106 = V_9;
		int32_t L_107 = V_6;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_108 = V_9;
		int32_t L_109 = V_6;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_112;
		L_112 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_2), L_111, /*hidden argument*/NULL);
		NullCheck(L_106);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(L_107), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_112);
		// destinationVertices[vertexIndex + 1] = matrix.MultiplyPoint3x4(destinationVertices[vertexIndex + 1]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_113 = V_9;
		int32_t L_114 = V_6;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_115 = V_9;
		int32_t L_116 = V_6;
		NullCheck(L_115);
		int32_t L_117 = ((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_119;
		L_119 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_2), L_118, /*hidden argument*/NULL);
		NullCheck(L_113);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_114, (int32_t)1))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_119);
		// destinationVertices[vertexIndex + 2] = matrix.MultiplyPoint3x4(destinationVertices[vertexIndex + 2]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_120 = V_9;
		int32_t L_121 = V_6;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_122 = V_9;
		int32_t L_123 = V_6;
		NullCheck(L_122);
		int32_t L_124 = ((int32_t)il2cpp_codegen_add((int32_t)L_123, (int32_t)2));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_125 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_126;
		L_126 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_2), L_125, /*hidden argument*/NULL);
		NullCheck(L_120);
		(L_120)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_121, (int32_t)2))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_126);
		// destinationVertices[vertexIndex + 3] = matrix.MultiplyPoint3x4(destinationVertices[vertexIndex + 3]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_127 = V_9;
		int32_t L_128 = V_6;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_129 = V_9;
		int32_t L_130 = V_6;
		NullCheck(L_129);
		int32_t L_131 = ((int32_t)il2cpp_codegen_add((int32_t)L_130, (int32_t)3));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_133;
		L_133 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_2), L_132, /*hidden argument*/NULL);
		NullCheck(L_127);
		(L_127)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_128, (int32_t)3))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_133);
		// destinationVertices[vertexIndex + 0] += offset;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_134 = V_9;
		int32_t L_135 = V_6;
		NullCheck(L_134);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_136 = ((L_134)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_135)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_137 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_136);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_138 = V_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_139;
		L_139 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_137, L_138, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_136 = L_139;
		// destinationVertices[vertexIndex + 1] += offset;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_140 = V_9;
		int32_t L_141 = V_6;
		NullCheck(L_140);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_142 = ((L_140)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_141, (int32_t)1)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_143 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_142);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_144 = V_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_145;
		L_145 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_143, L_144, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_142 = L_145;
		// destinationVertices[vertexIndex + 2] += offset;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_146 = V_9;
		int32_t L_147 = V_6;
		NullCheck(L_146);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_148 = ((L_146)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_147, (int32_t)2)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_149 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_148);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_150 = V_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_151;
		L_151 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_149, L_150, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_148 = L_151;
		// destinationVertices[vertexIndex + 3] += offset;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_152 = V_9;
		int32_t L_153 = V_6;
		NullCheck(L_152);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_154 = ((L_152)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_153, (int32_t)3)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_155 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_154);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_156 = V_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_157;
		L_157 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_155, L_156, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_154 = L_157;
		// Vector2[] sourceUVs0 = cachedMeshInfoVertexData[materialIndex].uvs0;
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_158 = __this->get_U3CcachedMeshInfoVertexDataU3E5__3_5();
		int32_t L_159 = V_5;
		NullCheck(L_158);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_160 = ((L_158)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_159)))->get_uvs0_9();
		V_11 = L_160;
		// Vector2[] destinationUVs0 = textInfo.meshInfo[materialIndex].uvs0;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_161 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_161);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_162 = L_161->get_meshInfo_16();
		int32_t L_163 = V_5;
		NullCheck(L_162);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_164 = ((L_162)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_163)))->get_uvs0_9();
		// destinationUVs0[vertexIndex + 0] = sourceUVs0[vertexIndex + 0];
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_165 = L_164;
		int32_t L_166 = V_6;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_167 = V_11;
		int32_t L_168 = V_6;
		NullCheck(L_167);
		int32_t L_169 = L_168;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_170 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		NullCheck(L_165);
		(L_165)->SetAt(static_cast<il2cpp_array_size_t>(L_166), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_170);
		// destinationUVs0[vertexIndex + 1] = sourceUVs0[vertexIndex + 1];
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_171 = L_165;
		int32_t L_172 = V_6;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_173 = V_11;
		int32_t L_174 = V_6;
		NullCheck(L_173);
		int32_t L_175 = ((int32_t)il2cpp_codegen_add((int32_t)L_174, (int32_t)1));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_176 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		NullCheck(L_171);
		(L_171)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_172, (int32_t)1))), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_176);
		// destinationUVs0[vertexIndex + 2] = sourceUVs0[vertexIndex + 2];
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_177 = L_171;
		int32_t L_178 = V_6;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_179 = V_11;
		int32_t L_180 = V_6;
		NullCheck(L_179);
		int32_t L_181 = ((int32_t)il2cpp_codegen_add((int32_t)L_180, (int32_t)2));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_182 = (L_179)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		NullCheck(L_177);
		(L_177)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_178, (int32_t)2))), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_182);
		// destinationUVs0[vertexIndex + 3] = sourceUVs0[vertexIndex + 3];
		int32_t L_183 = V_6;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_184 = V_11;
		int32_t L_185 = V_6;
		NullCheck(L_184);
		int32_t L_186 = ((int32_t)il2cpp_codegen_add((int32_t)L_185, (int32_t)3));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_187 = (L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_186));
		NullCheck(L_177);
		(L_177)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_183, (int32_t)3))), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_187);
		// Color32[] sourceColors32 = cachedMeshInfoVertexData[materialIndex].colors32;
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_188 = __this->get_U3CcachedMeshInfoVertexDataU3E5__3_5();
		int32_t L_189 = V_5;
		NullCheck(L_188);
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_190 = ((L_188)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_189)))->get_colors32_11();
		V_12 = L_190;
		// Color32[] destinationColors32 = textInfo.meshInfo[materialIndex].colors32;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_191 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_191);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_192 = L_191->get_meshInfo_16();
		int32_t L_193 = V_5;
		NullCheck(L_192);
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_194 = ((L_192)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_193)))->get_colors32_11();
		// destinationColors32[vertexIndex + 0] = sourceColors32[vertexIndex + 0];
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_195 = L_194;
		int32_t L_196 = V_6;
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_197 = V_12;
		int32_t L_198 = V_6;
		NullCheck(L_197);
		int32_t L_199 = L_198;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_200 = (L_197)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		NullCheck(L_195);
		(L_195)->SetAt(static_cast<il2cpp_array_size_t>(L_196), (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D )L_200);
		// destinationColors32[vertexIndex + 1] = sourceColors32[vertexIndex + 1];
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_201 = L_195;
		int32_t L_202 = V_6;
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_203 = V_12;
		int32_t L_204 = V_6;
		NullCheck(L_203);
		int32_t L_205 = ((int32_t)il2cpp_codegen_add((int32_t)L_204, (int32_t)1));
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_206 = (L_203)->GetAt(static_cast<il2cpp_array_size_t>(L_205));
		NullCheck(L_201);
		(L_201)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_202, (int32_t)1))), (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D )L_206);
		// destinationColors32[vertexIndex + 2] = sourceColors32[vertexIndex + 2];
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_207 = L_201;
		int32_t L_208 = V_6;
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_209 = V_12;
		int32_t L_210 = V_6;
		NullCheck(L_209);
		int32_t L_211 = ((int32_t)il2cpp_codegen_add((int32_t)L_210, (int32_t)2));
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_212 = (L_209)->GetAt(static_cast<il2cpp_array_size_t>(L_211));
		NullCheck(L_207);
		(L_207)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_208, (int32_t)2))), (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D )L_212);
		// destinationColors32[vertexIndex + 3] = sourceColors32[vertexIndex + 3];
		int32_t L_213 = V_6;
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_214 = V_12;
		int32_t L_215 = V_6;
		NullCheck(L_214);
		int32_t L_216 = ((int32_t)il2cpp_codegen_add((int32_t)L_215, (int32_t)3));
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_217 = (L_214)->GetAt(static_cast<il2cpp_array_size_t>(L_216));
		NullCheck(L_207);
		(L_207)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_213, (int32_t)3))), (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D )L_217);
	}

IL_0454:
	{
		// for (int i = 0; i < characterCount; i++)
		int32_t L_218 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_218, (int32_t)1));
	}

IL_045a:
	{
		// for (int i = 0; i < characterCount; i++)
		int32_t L_219 = V_4;
		int32_t L_220 = V_3;
		if ((((int32_t)L_219) < ((int32_t)L_220)))
		{
			goto IL_00f9;
		}
	}
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		V_13 = 0;
		goto IL_0585;
	}

IL_046a:
	{
		// scaleSortingOrder.Sort((a, b) => modifiedCharScale[a].CompareTo(modifiedCharScale[b]));
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_221 = __this->get_U3CscaleSortingOrderU3E5__4_6();
		U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6 * L_222 = __this->get_U3CU3E8__1_3();
		NullCheck(L_222);
		Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C * L_223 = L_222->get_U3CU3E9__0_1();
		Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C * L_224 = L_223;
		G_B15_0 = L_224;
		G_B15_1 = L_221;
		if (L_224)
		{
			G_B16_0 = L_224;
			G_B16_1 = L_221;
			goto IL_04a0;
		}
	}
	{
		U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6 * L_225 = __this->get_U3CU3E8__1_3();
		U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6 * L_226 = __this->get_U3CU3E8__1_3();
		Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C * L_227 = (Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C *)il2cpp_codegen_object_new(Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C_il2cpp_TypeInfo_var);
		Comparison_1__ctor_mAA110A3F5163760D63E663F9545B370983389F73(L_227, L_226, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass10_0_U3CAnimateVertexColorsU3Eb__0_m959A7E1D6162B5AAF28B953AFB04D7943BCAB107_RuntimeMethod_var), /*hidden argument*/Comparison_1__ctor_mAA110A3F5163760D63E663F9545B370983389F73_RuntimeMethod_var);
		Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C * L_228 = L_227;
		V_14 = L_228;
		NullCheck(L_225);
		L_225->set_U3CU3E9__0_1(L_228);
		Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C * L_229 = V_14;
		G_B16_0 = L_229;
		G_B16_1 = G_B15_1;
	}

IL_04a0:
	{
		NullCheck(G_B16_1);
		List_1_Sort_mA28ABFC1E6C7A17EA71BC9C2DBED9CC3EE8DCDC3(G_B16_1, G_B16_0, /*hidden argument*/List_1_Sort_mA28ABFC1E6C7A17EA71BC9C2DBED9CC3EE8DCDC3_RuntimeMethod_var);
		// textInfo.meshInfo[i].SortGeometry(scaleSortingOrder);
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_230 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_230);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_231 = L_230->get_meshInfo_16();
		int32_t L_232 = V_13;
		NullCheck(L_231);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_233 = __this->get_U3CscaleSortingOrderU3E5__4_6();
		TMP_MeshInfo_SortGeometry_m2C2FF0664600CA70E7A920FFF64C1BBD9026FD4D((TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176 *)((L_231)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_232))), L_233, /*hidden argument*/NULL);
		// textInfo.meshInfo[i].mesh.vertices = textInfo.meshInfo[i].vertices;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_234 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_234);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_235 = L_234->get_meshInfo_16();
		int32_t L_236 = V_13;
		NullCheck(L_235);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_237 = ((L_235)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_236)))->get_mesh_4();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_238 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_238);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_239 = L_238->get_meshInfo_16();
		int32_t L_240 = V_13;
		NullCheck(L_239);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_241 = ((L_239)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_240)))->get_vertices_6();
		NullCheck(L_237);
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_237, L_241, /*hidden argument*/NULL);
		// textInfo.meshInfo[i].mesh.uv = textInfo.meshInfo[i].uvs0;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_242 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_242);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_243 = L_242->get_meshInfo_16();
		int32_t L_244 = V_13;
		NullCheck(L_243);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_245 = ((L_243)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_244)))->get_mesh_4();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_246 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_246);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_247 = L_246->get_meshInfo_16();
		int32_t L_248 = V_13;
		NullCheck(L_247);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_249 = ((L_247)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_248)))->get_uvs0_9();
		NullCheck(L_245);
		Mesh_set_uv_mF6FED6DDACBAE3EAF28BFBF257A0D5356FCF3AAC(L_245, L_249, /*hidden argument*/NULL);
		// textInfo.meshInfo[i].mesh.colors32 = textInfo.meshInfo[i].colors32;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_250 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_250);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_251 = L_250->get_meshInfo_16();
		int32_t L_252 = V_13;
		NullCheck(L_251);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_253 = ((L_251)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_252)))->get_mesh_4();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_254 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_254);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_255 = L_254->get_meshInfo_16();
		int32_t L_256 = V_13;
		NullCheck(L_255);
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_257 = ((L_255)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_256)))->get_colors32_11();
		NullCheck(L_253);
		Mesh_set_colors32_m0EA838C15BBD01710A4EE1A475DB585EB9B5BD91(L_253, L_257, /*hidden argument*/NULL);
		// m_TextComponent.UpdateGeometry(textInfo.meshInfo[i].mesh, i);
		VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163 * L_258 = V_1;
		NullCheck(L_258);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_259 = L_258->get_m_TextComponent_7();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_260 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_260);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_261 = L_260->get_meshInfo_16();
		int32_t L_262 = V_13;
		NullCheck(L_261);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_263 = ((L_261)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_262)))->get_mesh_4();
		int32_t L_264 = V_13;
		NullCheck(L_259);
		VirtActionInvoker2< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, int32_t >::Invoke(107 /* System.Void TMPro.TMP_Text::UpdateGeometry(UnityEngine.Mesh,System.Int32) */, L_259, L_263, L_264);
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_265 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_265, (int32_t)1));
	}

IL_0585:
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_266 = V_13;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_267 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_267);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_268 = L_267->get_meshInfo_16();
		NullCheck(L_268);
		if ((((int32_t)L_266) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_268)->max_length))))))
		{
			goto IL_046a;
		}
	}
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_269 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_269, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_269);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_05b2:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_0085;
	}
}
// System.Object TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateVertexColorsU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m093E922A5A046910B2A7EE826D804CA3064A7BD9 (U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_mDED63FD52741D58D8D5A3E53415F91B6560F680C (U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_mDED63FD52741D58D8D5A3E53415F91B6560F680C_RuntimeMethod_var)));
	}
}
// System.Object TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_get_Current_m933EBF7C4300C7C1E3EE60E4741110025877CA5F (U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void TMPro.Examples.WarpTextExample/<WarpText>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWarpTextU3Ed__8__ctor_m9FADE04C27A0034C5A276232FCA187AECDC6BF49 (U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TMPro.Examples.WarpTextExample/<WarpText>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWarpTextU3Ed__8_System_IDisposable_Dispose_m5AB0DCF4B3DE6C290487F3DBBC7BAE931130DE60 (U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TMPro.Examples.WarpTextExample/<WarpText>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWarpTextU3Ed__8_MoveNext_m9C83C8455FF8ADFBAA8D05958C3048612A96EB84 (U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * V_1 = NULL;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_2 = NULL;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_3;
	memset((&V_3), 0, sizeof(V_3));
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * V_4 = NULL;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_12;
	memset((&V_12), 0, sizeof(V_12));
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_17;
	memset((&V_17), 0, sizeof(V_17));
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	float G_B14_0 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00d6;
			}
			case 2:
			{
				goto IL_0473;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// VertexCurve.preWrapMode = WrapMode.Clamp;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_3 = V_1;
		NullCheck(L_3);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4 = L_3->get_VertexCurve_5();
		NullCheck(L_4);
		AnimationCurve_set_preWrapMode_m39008E29D7419438020138A0DE50999BB89266AF(L_4, 1, /*hidden argument*/NULL);
		// VertexCurve.postWrapMode = WrapMode.Clamp;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_5 = V_1;
		NullCheck(L_5);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_6 = L_5->get_VertexCurve_5();
		NullCheck(L_6);
		AnimationCurve_set_postWrapMode_mC7079F70E85156F73D8BA2E06840F7E2BEDF8568(L_6, 1, /*hidden argument*/NULL);
		// m_TextComponent.havePropertiesChanged = true; // Need to force the TextMeshPro Object to be updated.
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_7 = V_1;
		NullCheck(L_7);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_8 = L_7->get_m_TextComponent_4();
		NullCheck(L_8);
		TMP_Text_set_havePropertiesChanged_mF7E4FC98920C094FD42126A41DCC7601D5F95357(L_8, (bool)1, /*hidden argument*/NULL);
		// CurveScale *= 10;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_9 = V_1;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_10 = V_1;
		NullCheck(L_10);
		float L_11 = L_10->get_CurveScale_8();
		NullCheck(L_9);
		L_9->set_CurveScale_8(((float)il2cpp_codegen_multiply((float)L_11, (float)(10.0f))));
		// float old_CurveScale = CurveScale;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_12 = V_1;
		NullCheck(L_12);
		float L_13 = L_12->get_CurveScale_8();
		__this->set_U3Cold_CurveScaleU3E5__2_3(L_13);
		// AnimationCurve old_curve = CopyAnimationCurve(VertexCurve);
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_14 = V_1;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_15 = V_1;
		NullCheck(L_15);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_16 = L_15->get_VertexCurve_5();
		NullCheck(L_14);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_17;
		L_17 = WarpTextExample_CopyAnimationCurve_m744026E638662DA48AC81ED21E0589E3E4E05FAB(L_14, L_16, /*hidden argument*/NULL);
		__this->set_U3Cold_curveU3E5__3_4(L_17);
	}

IL_007d:
	{
		// if (!m_TextComponent.havePropertiesChanged && old_CurveScale == CurveScale && old_curve.keys[1].value == VertexCurve.keys[1].value)
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_18 = V_1;
		NullCheck(L_18);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_19 = L_18->get_m_TextComponent_4();
		NullCheck(L_19);
		bool L_20;
		L_20 = TMP_Text_get_havePropertiesChanged_mF777F1F3A620EBF1DB95F83812597F13D49295B2_inline(L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_00df;
		}
	}
	{
		float L_21 = __this->get_U3Cold_CurveScaleU3E5__2_3();
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_22 = V_1;
		NullCheck(L_22);
		float L_23 = L_22->get_CurveScale_8();
		if ((!(((float)L_21) == ((float)L_23))))
		{
			goto IL_00df;
		}
	}
	{
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_24 = __this->get_U3Cold_curveU3E5__3_4();
		NullCheck(L_24);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_25;
		L_25 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		float L_26;
		L_26 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), /*hidden argument*/NULL);
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_27 = V_1;
		NullCheck(L_27);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_28 = L_27->get_VertexCurve_5();
		NullCheck(L_28);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_29;
		L_29 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		float L_30;
		L_30 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), /*hidden argument*/NULL);
		if ((!(((float)L_26) == ((float)L_30))))
		{
			goto IL_00df;
		}
	}
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00d6:
	{
		__this->set_U3CU3E1__state_0((-1));
		// continue;
		goto IL_007d;
	}

IL_00df:
	{
		// old_CurveScale = CurveScale;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_31 = V_1;
		NullCheck(L_31);
		float L_32 = L_31->get_CurveScale_8();
		__this->set_U3Cold_CurveScaleU3E5__2_3(L_32);
		// old_curve = CopyAnimationCurve(VertexCurve);
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_33 = V_1;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_34 = V_1;
		NullCheck(L_34);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_35 = L_34->get_VertexCurve_5();
		NullCheck(L_33);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_36;
		L_36 = WarpTextExample_CopyAnimationCurve_m744026E638662DA48AC81ED21E0589E3E4E05FAB(L_33, L_35, /*hidden argument*/NULL);
		__this->set_U3Cold_curveU3E5__3_4(L_36);
		// m_TextComponent.ForceMeshUpdate(); // Generate the mesh and populate the textInfo with data we can use and manipulate.
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_37 = V_1;
		NullCheck(L_37);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_38 = L_37->get_m_TextComponent_4();
		NullCheck(L_38);
		VirtActionInvoker2< bool, bool >::Invoke(106 /* System.Void TMPro.TMP_Text::ForceMeshUpdate(System.Boolean,System.Boolean) */, L_38, (bool)0, (bool)0);
		// TMP_TextInfo textInfo = m_TextComponent.textInfo;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_39 = V_1;
		NullCheck(L_39);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_40 = L_39->get_m_TextComponent_4();
		NullCheck(L_40);
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_41;
		L_41 = TMP_Text_get_textInfo_mB006DF4283F14B0E49B9FCC0025D99C29FA534BF_inline(L_40, /*hidden argument*/NULL);
		V_4 = L_41;
		// int characterCount = textInfo.characterCount;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_42 = V_4;
		NullCheck(L_42);
		int32_t L_43 = L_42->get_characterCount_3();
		V_5 = L_43;
		// if (characterCount == 0) continue;
		int32_t L_44 = V_5;
		if (!L_44)
		{
			goto IL_007d;
		}
	}
	{
		// float boundsMinX = m_TextComponent.bounds.min.x;  //textInfo.meshInfo[0].mesh.bounds.min.x;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_45 = V_1;
		NullCheck(L_45);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_46 = L_45->get_m_TextComponent_4();
		NullCheck(L_46);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_47;
		L_47 = TMP_Text_get_bounds_m61214849DFA057D70FDB3510D868B99641B0F1B8(L_46, /*hidden argument*/NULL);
		V_8 = L_47;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_8), /*hidden argument*/NULL);
		float L_49 = L_48.get_x_2();
		V_6 = L_49;
		// float boundsMaxX = m_TextComponent.bounds.max.x;  //textInfo.meshInfo[0].mesh.bounds.max.x;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_50 = V_1;
		NullCheck(L_50);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_51 = L_50->get_m_TextComponent_4();
		NullCheck(L_51);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_52;
		L_52 = TMP_Text_get_bounds_m61214849DFA057D70FDB3510D868B99641B0F1B8(L_51, /*hidden argument*/NULL);
		V_8 = L_52;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_8), /*hidden argument*/NULL);
		float L_54 = L_53.get_x_2();
		V_7 = L_54;
		// for (int i = 0; i < characterCount; i++)
		V_9 = 0;
		goto IL_0446;
	}

IL_0165:
	{
		// if (!textInfo.characterInfo[i].isVisible)
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_55 = V_4;
		NullCheck(L_55);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_56 = L_55->get_characterInfo_11();
		int32_t L_57 = V_9;
		NullCheck(L_56);
		bool L_58 = ((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->get_isVisible_40();
		if (!L_58)
		{
			goto IL_0440;
		}
	}
	{
		// int vertexIndex = textInfo.characterInfo[i].vertexIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_59 = V_4;
		NullCheck(L_59);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_60 = L_59->get_characterInfo_11();
		int32_t L_61 = V_9;
		NullCheck(L_60);
		int32_t L_62 = ((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->get_vertexIndex_14();
		V_10 = L_62;
		// int materialIndex = textInfo.characterInfo[i].materialReferenceIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_63 = V_4;
		NullCheck(L_63);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_64 = L_63->get_characterInfo_11();
		int32_t L_65 = V_9;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->get_materialReferenceIndex_9();
		V_11 = L_66;
		// vertices = textInfo.meshInfo[materialIndex].vertices;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_67 = V_4;
		NullCheck(L_67);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_68 = L_67->get_meshInfo_16();
		int32_t L_69 = V_11;
		NullCheck(L_68);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_70 = ((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)))->get_vertices_6();
		V_2 = L_70;
		// Vector3 offsetToMidBaseline = new Vector2((vertices[vertexIndex + 0].x + vertices[vertexIndex + 2].x) / 2, textInfo.characterInfo[i].baseLine);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_71 = V_2;
		int32_t L_72 = V_10;
		NullCheck(L_71);
		float L_73 = ((L_71)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_72)))->get_x_2();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_74 = V_2;
		int32_t L_75 = V_10;
		NullCheck(L_74);
		float L_76 = ((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)2)))))->get_x_2();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_77 = V_4;
		NullCheck(L_77);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_78 = L_77->get_characterInfo_11();
		int32_t L_79 = V_9;
		NullCheck(L_78);
		float L_80 = ((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->get_baseLine_26();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_81;
		memset((&L_81), 0, sizeof(L_81));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_81), ((float)((float)((float)il2cpp_codegen_add((float)L_73, (float)L_76))/(float)(2.0f))), L_80, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82;
		L_82 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_81, /*hidden argument*/NULL);
		V_12 = L_82;
		// vertices[vertexIndex + 0] += -offsetToMidBaseline;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_83 = V_2;
		int32_t L_84 = V_10;
		NullCheck(L_83);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_85 = ((L_83)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_84)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_86 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_85);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_87 = V_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_88;
		L_88 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_87, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_89;
		L_89 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_86, L_88, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_85 = L_89;
		// vertices[vertexIndex + 1] += -offsetToMidBaseline;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_90 = V_2;
		int32_t L_91 = V_10;
		NullCheck(L_90);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_92 = ((L_90)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)1)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_93 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_92);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_94 = V_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_95;
		L_95 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_94, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_96;
		L_96 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_93, L_95, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_92 = L_96;
		// vertices[vertexIndex + 2] += -offsetToMidBaseline;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_97 = V_2;
		int32_t L_98 = V_10;
		NullCheck(L_97);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_99 = ((L_97)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)2)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_100 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_99);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_101 = V_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_102;
		L_102 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_101, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_103;
		L_103 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_100, L_102, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_99 = L_103;
		// vertices[vertexIndex + 3] += -offsetToMidBaseline;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_104 = V_2;
		int32_t L_105 = V_10;
		NullCheck(L_104);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_106 = ((L_104)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)3)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_107 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_106);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_108 = V_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_109;
		L_109 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_108, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_110;
		L_110 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_107, L_109, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_106 = L_110;
		// float x0 = (offsetToMidBaseline.x - boundsMinX) / (boundsMaxX - boundsMinX); // Character's position relative to the bounds of the mesh.
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_111 = V_12;
		float L_112 = L_111.get_x_2();
		float L_113 = V_6;
		float L_114 = V_7;
		float L_115 = V_6;
		V_13 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_112, (float)L_113))/(float)((float)il2cpp_codegen_subtract((float)L_114, (float)L_115))));
		// float x1 = x0 + 0.0001f;
		float L_116 = V_13;
		V_14 = ((float)il2cpp_codegen_add((float)L_116, (float)(9.99999975E-05f)));
		// float y0 = VertexCurve.Evaluate(x0) * CurveScale;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_117 = V_1;
		NullCheck(L_117);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_118 = L_117->get_VertexCurve_5();
		float L_119 = V_13;
		NullCheck(L_118);
		float L_120;
		L_120 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_118, L_119, /*hidden argument*/NULL);
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_121 = V_1;
		NullCheck(L_121);
		float L_122 = L_121->get_CurveScale_8();
		V_15 = ((float)il2cpp_codegen_multiply((float)L_120, (float)L_122));
		// float y1 = VertexCurve.Evaluate(x1) * CurveScale;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_123 = V_1;
		NullCheck(L_123);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_124 = L_123->get_VertexCurve_5();
		float L_125 = V_14;
		NullCheck(L_124);
		float L_126;
		L_126 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_124, L_125, /*hidden argument*/NULL);
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_127 = V_1;
		NullCheck(L_127);
		float L_128 = L_127->get_CurveScale_8();
		V_16 = ((float)il2cpp_codegen_multiply((float)L_126, (float)L_128));
		// Vector3 horizontal = new Vector3(1, 0, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_129;
		memset((&L_129), 0, sizeof(L_129));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_129), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// Vector3 tangent = new Vector3(x1 * (boundsMaxX - boundsMinX) + boundsMinX, y1) - new Vector3(offsetToMidBaseline.x, y0);
		float L_130 = V_14;
		float L_131 = V_7;
		float L_132 = V_6;
		float L_133 = V_6;
		float L_134 = V_16;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_135;
		memset((&L_135), 0, sizeof(L_135));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_135), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_130, (float)((float)il2cpp_codegen_subtract((float)L_131, (float)L_132)))), (float)L_133)), L_134, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_136 = V_12;
		float L_137 = L_136.get_x_2();
		float L_138 = V_15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_139;
		memset((&L_139), 0, sizeof(L_139));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_139), L_137, L_138, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_140;
		L_140 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_135, L_139, /*hidden argument*/NULL);
		V_17 = L_140;
		// float dot = Mathf.Acos(Vector3.Dot(horizontal, tangent.normalized)) * 57.2957795f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_141 = L_129;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_142;
		L_142 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_17), /*hidden argument*/NULL);
		float L_143;
		L_143 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_141, L_142, /*hidden argument*/NULL);
		float L_144;
		L_144 = acosf(L_143);
		V_18 = ((float)il2cpp_codegen_multiply((float)L_144, (float)(57.2957802f)));
		// Vector3 cross = Vector3.Cross(horizontal, tangent);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_145 = V_17;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_146;
		L_146 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4(L_141, L_145, /*hidden argument*/NULL);
		// float angle = cross.z > 0 ? dot : 360 - dot;
		float L_147 = L_146.get_z_4();
		if ((((float)L_147) > ((float)(0.0f))))
		{
			goto IL_0339;
		}
	}
	{
		float L_148 = V_18;
		G_B14_0 = ((float)il2cpp_codegen_subtract((float)(360.0f), (float)L_148));
		goto IL_033b;
	}

IL_0339:
	{
		float L_149 = V_18;
		G_B14_0 = L_149;
	}

IL_033b:
	{
		V_19 = G_B14_0;
		// matrix = Matrix4x4.TRS(new Vector3(0, y0, 0), Quaternion.Euler(0, 0, angle), Vector3.one);
		float L_150 = V_15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_151;
		memset((&L_151), 0, sizeof(L_151));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_151), (0.0f), L_150, (0.0f), /*hidden argument*/NULL);
		float L_152 = V_19;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_153;
		L_153 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), L_152, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_154;
		L_154 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_155;
		L_155 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_151, L_153, L_154, /*hidden argument*/NULL);
		V_3 = L_155;
		// vertices[vertexIndex + 0] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 0]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_156 = V_2;
		int32_t L_157 = V_10;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_158 = V_2;
		int32_t L_159 = V_10;
		NullCheck(L_158);
		int32_t L_160 = L_159;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_161 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_162;
		L_162 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_3), L_161, /*hidden argument*/NULL);
		NullCheck(L_156);
		(L_156)->SetAt(static_cast<il2cpp_array_size_t>(L_157), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_162);
		// vertices[vertexIndex + 1] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 1]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_163 = V_2;
		int32_t L_164 = V_10;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_165 = V_2;
		int32_t L_166 = V_10;
		NullCheck(L_165);
		int32_t L_167 = ((int32_t)il2cpp_codegen_add((int32_t)L_166, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_168 = (L_165)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_169;
		L_169 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_3), L_168, /*hidden argument*/NULL);
		NullCheck(L_163);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_164, (int32_t)1))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_169);
		// vertices[vertexIndex + 2] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 2]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_170 = V_2;
		int32_t L_171 = V_10;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_172 = V_2;
		int32_t L_173 = V_10;
		NullCheck(L_172);
		int32_t L_174 = ((int32_t)il2cpp_codegen_add((int32_t)L_173, (int32_t)2));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_175 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_176;
		L_176 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_3), L_175, /*hidden argument*/NULL);
		NullCheck(L_170);
		(L_170)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_171, (int32_t)2))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_176);
		// vertices[vertexIndex + 3] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 3]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_177 = V_2;
		int32_t L_178 = V_10;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_179 = V_2;
		int32_t L_180 = V_10;
		NullCheck(L_179);
		int32_t L_181 = ((int32_t)il2cpp_codegen_add((int32_t)L_180, (int32_t)3));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_182 = (L_179)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_183;
		L_183 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_3), L_182, /*hidden argument*/NULL);
		NullCheck(L_177);
		(L_177)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_178, (int32_t)3))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_183);
		// vertices[vertexIndex + 0] += offsetToMidBaseline;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_184 = V_2;
		int32_t L_185 = V_10;
		NullCheck(L_184);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_186 = ((L_184)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_185)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_187 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_186);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_188 = V_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_189;
		L_189 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_187, L_188, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_186 = L_189;
		// vertices[vertexIndex + 1] += offsetToMidBaseline;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_190 = V_2;
		int32_t L_191 = V_10;
		NullCheck(L_190);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_192 = ((L_190)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_191, (int32_t)1)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_193 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_192);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_194 = V_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_195;
		L_195 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_193, L_194, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_192 = L_195;
		// vertices[vertexIndex + 2] += offsetToMidBaseline;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_196 = V_2;
		int32_t L_197 = V_10;
		NullCheck(L_196);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_198 = ((L_196)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_197, (int32_t)2)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_199 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_198);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_200 = V_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_201;
		L_201 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_199, L_200, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_198 = L_201;
		// vertices[vertexIndex + 3] += offsetToMidBaseline;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_202 = V_2;
		int32_t L_203 = V_10;
		NullCheck(L_202);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_204 = ((L_202)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_203, (int32_t)3)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_205 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_204);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_206 = V_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_207;
		L_207 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_205, L_206, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_204 = L_207;
	}

IL_0440:
	{
		// for (int i = 0; i < characterCount; i++)
		int32_t L_208 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_208, (int32_t)1));
	}

IL_0446:
	{
		// for (int i = 0; i < characterCount; i++)
		int32_t L_209 = V_9;
		int32_t L_210 = V_5;
		if ((((int32_t)L_209) < ((int32_t)L_210)))
		{
			goto IL_0165;
		}
	}
	{
		// m_TextComponent.UpdateVertexData();
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_211 = V_1;
		NullCheck(L_211);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_212 = L_211->get_m_TextComponent_4();
		NullCheck(L_212);
		VirtActionInvoker0::Invoke(109 /* System.Void TMPro.TMP_Text::UpdateVertexData() */, L_212);
		// yield return new WaitForSeconds(0.025f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_213 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_213, (0.0250000004f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_213);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0473:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_007d;
	}
}
// System.Object TMPro.Examples.WarpTextExample/<WarpText>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWarpTextU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9D5776AF80C4227401ADD7E13D98F2530CB9E7A1 (U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TMPro.Examples.WarpTextExample/<WarpText>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWarpTextU3Ed__8_System_Collections_IEnumerator_Reset_m4F2FBBE7B375E6FC837736B4275A7B601A01F535 (U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWarpTextU3Ed__8_System_Collections_IEnumerator_Reset_m4F2FBBE7B375E6FC837736B4275A7B601A01F535_RuntimeMethod_var)));
	}
}
// System.Object TMPro.Examples.WarpTextExample/<WarpText>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWarpTextU3Ed__8_System_Collections_IEnumerator_get_Current_m01FA935D93D737C9DDD88A051F7DFC393DD7BD25 (U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * TMP_Text_get_textInfo_mB006DF4283F14B0E49B9FCC0025D99C29FA534BF_inline (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_textInfo; }
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_0 = __this->get_m_textInfo_151();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TMP_Text_get_havePropertiesChanged_mF777F1F3A620EBF1DB95F83812597F13D49295B2_inline (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_havePropertiesChanged; }
		bool L_0 = __this->get_m_havePropertiesChanged_152();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		__this->set_z_4((0.0f));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lhs0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___rhs1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___lhs0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___rhs1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___lhs0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___rhs1;
		float L_11 = L_10.get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_gshared_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get__items_1();
		int32_t L_3 = ___index0;
		float L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_2, (int32_t)L_3);
		return (float)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_gshared_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
