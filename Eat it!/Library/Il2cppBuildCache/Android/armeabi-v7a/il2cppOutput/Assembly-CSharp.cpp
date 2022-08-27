#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t0A77D06CC67DE106BDD92C7A0F81C626A0DCE1EC;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_t57855A95D2E170D06F84C98A3279AD188AFAA11A;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t61F7735EA1A59112F101A454B3674866E358C9F8;
// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tDEA0C73C54C6F47E60F6B23947A437B2D3BCDD4D;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>,UnityEngine.Vector3>
struct Func_2_tC59AB1CCC7AC92484D8826D38DD0FF2302A1AD72;
// System.Func`3<UnityEngine.Vector3,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>
struct Func_3_t42C2490DD9CE7DA0CE4FB2C849431C03440FC25F;
// System.Collections.Generic.HashSet`1<UnityEngine.Mesh>
struct HashSet_1_t6DB0C7C5196A278593BA1C34741DE40A2A91111A;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<UnityEngine.Vector3,System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>>
struct IEnumerable_1_t08DCEDF5D79E08294F1139AA523B2FF02C75D2FF;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>
struct IEnumerable_1_t5AC172F527085E9C457BD73CA16ED53A51FC7F48;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Material>
struct IEnumerable_1_tC56A812DB62E3B254ED968BE9E6EE9AD8151B7BB;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_tDBC849B8248C833C53F1762E771EFC477EB8AF18;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Mesh>
struct IEqualityComparer_1_tFB6D6BFF7DADF28CD1556D49C8961EC811DF769B;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4;
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct List_1_t1044F6D8235EF4BA61F582080C5D8FEC3497BAF5;
// System.Collections.Generic.List`1<UnityEngine.Mesh>
struct List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<Outline/ListVector3>
struct List_1_t9F8EE4C8A3A346268256352008972115DBB309C4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.Mesh>[]
struct SlotU5BU5D_t49F41EAD2501B7FD10B4B2137282DF9E1459BAFD;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8;
// UnityEngine.MeshFilter[]
struct MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Renderer[]
struct RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// UnityEngine.SkinnedMeshRenderer[]
struct SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Outline/ListVector3[]
struct ListVector3U5BU5D_t4DCE7F94041BADB8FA34A412F9CD6824DF651CE6;
// AdInitialize
struct AdInitialize_t80F51A9D34A4D4163C94F91B8F3B9884B88BBAED;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_tCE1714026D97810808C3601F863ACBA404BE30E6;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// BackgroundMusic
struct BackgroundMusic_t49638A78B553108F8BB7BD3C6B8A49E2F284E626;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// ContinueGame
struct ContinueGame_t55A91B157DDC0530D05BE4C029A8ED869752BCEE;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DeleteObject
struct DeleteObject_t89D240D1F166FAE38CF42ADA3F431C3548054B43;
// EatObjects
struct EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// FullSlider
struct FullSlider_tCDC43C3BFD0463537A5A8DCEAFFCE1A760C54A72;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GoMain
struct GoMain_t0B63717C0640D5CC90F8D5DACB71B41B9C1C689E;
// GoSettings
struct GoSettings_t6209533B8C3A73CA66078C2CE8DCB2DEF955046B;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// GoogleMobileAds.Common.IInitializationStatusClient
struct IInitializationStatusClient_t3A4FD70173B1FB51BD44E973313BD917F424DB69;
// GoogleMobileAds.Common.IInterstitialClient
struct IInterstitialClient_tA448A4CAAA718A2FA2864DFAC8703B14224FEAAF;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t7093D8754C20FFF65DB1C809FCA56437C562722C;
// InterAd
struct InterAd_t5A773963518A93AAEA059120A9C89888FAA5FD88;
// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE;
// IsScoreTheBest
struct IsScoreTheBest_tFA0A67B3351B900A4B5B224B08E165D6B7D9FC2F;
// Lose
struct Lose_tA2735DCC5FAF5A3E41A4EA67943D385CBDB829A3;
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
// MoveObjects
struct MoveObjects_tB029315F8177388C53ADAAAB845FB42D212A3BAD;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Outline
struct Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C;
// PauseGame
struct PauseGame_t8BD53F5D21AABDB02D738988CF76A29EC230BA69;
// PlayButtonSound
struct PlayButtonSound_tEF391BE6C1A456BF914000D8E08B6A2B999B08F1;
// PlayerMovement
struct PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Score
struct Score_tE07CBD9780DFC212BE43719819F512E8861103C7;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// SoundOnOff
struct SoundOnOff_t491C399CECC1539C7BC5D027AC0D6069ABEB9D15;
// SpawnObjects
struct SpawnObjects_t9F0D85B3A0340F19ADD6E0C793111837E2A84D92;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// StartGame
struct StartGame_tF6E1D3C7ABDCE571787D7EA637AD9B9F25C4D742;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// AdInitialize/<>c
struct U3CU3Ec_t0C6FCE158CE02E8A0217EABA93CB69971C59AA10;
// GoogleMobileAds.Api.AdRequest/Builder
struct Builder_tE84777248A236774AD5A97FB4AE44E033401CF6F;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958;
// GoMain/<openMain>d__1
struct U3CopenMainU3Ed__1_t69AB38CA5795F00E94DF56DA6CF21A50E7DE5C93;
// GoSettings/<openSettings>d__1
struct U3CopenSettingsU3Ed__1_tBAD2D95ABD672BF8FD28BDB24632FEB74D60DC79;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// Outline/<>c
struct U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E;
// Outline/ListVector3
struct ListVector3_t54AB46ECA91F943A5FE7817CA662D0D5B78617B9;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;
// SpawnObjects/<spawnObjects>d__4
struct U3CspawnObjectsU3Ed__4_t945068FD287B56AC269BED9B37B6105E926E1FFF;
// StartGame/<openGame>d__1
struct U3CopenGameU3Ed__1_tA288DA1E7A707A635E041CE9EEF39A68687D4C6C;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t0A77D06CC67DE106BDD92C7A0F81C626A0DCE1EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Builder_tE84777248A236774AD5A97FB4AE44E033401CF6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tC59AB1CCC7AC92484D8826D38DD0FF2302A1AD72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_t42C2490DD9CE7DA0CE4FB2C849431C03440FC25F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t6DB0C7C5196A278593BA1C34741DE40A2A91111A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t08DCEDF5D79E08294F1139AA523B2FF02C75D2FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t5AC172F527085E9C457BD73CA16ED53A51FC7F48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t212393C5E219061CEE5E3CFC4539C808C21F78D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tA926F9FC877384B249FEE71CB4AB7315CE4D631D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ListVector3_t54AB46ECA91F943A5FE7817CA662D0D5B78617B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9F8EE4C8A3A346268256352008972115DBB309C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Score_tE07CBD9780DFC212BE43719819F512E8861103C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0C6FCE158CE02E8A0217EABA93CB69971C59AA10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CopenGameU3Ed__1_tA288DA1E7A707A635E041CE9EEF39A68687D4C6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CopenMainU3Ed__1_t69AB38CA5795F00E94DF56DA6CF21A50E7DE5C93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CopenSettingsU3Ed__1_tBAD2D95ABD672BF8FD28BDB24632FEB74D60DC79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CspawnObjectsU3Ed__4_t945068FD287B56AC269BED9B37B6105E926E1FFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0433F6570843C95AF47B32CFA3708E95BEAF8B86;
IL2CPP_EXTERN_C String_t* _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306;
IL2CPP_EXTERN_C String_t* _stringLiteral094489F0CC3F545E5371377333562A076A45838B;
IL2CPP_EXTERN_C String_t* _stringLiteral0B70D101AD4A949E170B30F45B34E4CB6DEFA094;
IL2CPP_EXTERN_C String_t* _stringLiteral0B80EC501660F58EEF712988576EF146A948FB9B;
IL2CPP_EXTERN_C String_t* _stringLiteral0E3E7A9A92462225FFAF23BB1259E1BCFCEDDD0F;
IL2CPP_EXTERN_C String_t* _stringLiteral16616D61D1F596C11D66025981D6CED3F79A8444;
IL2CPP_EXTERN_C String_t* _stringLiteral1DC2584792757C5ED1336B48E1592A637E15C574;
IL2CPP_EXTERN_C String_t* _stringLiteral271508EA05E62BBDBE53A237D9122FF3E010A315;
IL2CPP_EXTERN_C String_t* _stringLiteral2836C4BD096C15E3950A1067EE91089553AC1D38;
IL2CPP_EXTERN_C String_t* _stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3;
IL2CPP_EXTERN_C String_t* _stringLiteral3932DA3D302FFEF5EF82496DE74CC30F03E8C3BC;
IL2CPP_EXTERN_C String_t* _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5;
IL2CPP_EXTERN_C String_t* _stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D;
IL2CPP_EXTERN_C String_t* _stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257;
IL2CPP_EXTERN_C String_t* _stringLiteral54F48823060A5886D12558C4BBB0CDBB0E83F58A;
IL2CPP_EXTERN_C String_t* _stringLiteral616FA8FACA4BD63856D14D13CE36C30A22C4AE73;
IL2CPP_EXTERN_C String_t* _stringLiteral63D30199207595D4F227CD3E39E842CAA71183E0;
IL2CPP_EXTERN_C String_t* _stringLiteral74B83A50A58269C4EECA165C2ABB62B80AAFC9D0;
IL2CPP_EXTERN_C String_t* _stringLiteral7DB229E4B4513366157C0D536C533A2B6C5F7AA5;
IL2CPP_EXTERN_C String_t* _stringLiteral861A6F8EA2A41E5A089C8D74CE3D920CEEFCB378;
IL2CPP_EXTERN_C String_t* _stringLiteral90965A2B2C5B2319664CD8D1B8111F63279D7E9B;
IL2CPP_EXTERN_C String_t* _stringLiteral9A413535AF7521EBD97692F1A68AD7CFB59AD0C6;
IL2CPP_EXTERN_C String_t* _stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E;
IL2CPP_EXTERN_C String_t* _stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8;
IL2CPP_EXTERN_C String_t* _stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1;
IL2CPP_EXTERN_C String_t* _stringLiteralBA1735D7468D2238272D15660949A9C0ED4D3EC7;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2;
IL2CPP_EXTERN_C String_t* _stringLiteralD1418B66EFD4F2E84F8EE977170F5ACBF35CE35C;
IL2CPP_EXTERN_C String_t* _stringLiteralD61A403A62E3B406C2482F9CD3ABA7CF782E649C;
IL2CPP_EXTERN_C String_t* _stringLiteralE127DCEFA21E4A7641EB443FC55F10CC7ECA11F0;
IL2CPP_EXTERN_C String_t* _stringLiteralE136BED691D35E6ECC51710E6D39B3CF91E8FB05;
IL2CPP_EXTERN_C String_t* _stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mF8C1B5DF0B4E4F770CA3C23E29816E18CB42E65E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisInterAd_t5A773963518A93AAEA059120A9C89888FAA5FD88_m97727C238B4A1656CE47023857763F767A1BAF52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mD501A27463515FA99A5A93A10E37F913696D20C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mE1AE2168916584FF463210C7511EDA0D2E79497F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m107B791DBC1E809192456359DFF8B8F45A84EAA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_mDC1EE7E2332C6862976FA026EB6ED1B3EB4E142D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisKeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4_m2466243F42B476FCF4C613571E9DB923C5AA77D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_GroupBy_TisKeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m65B1EAC83A69CA3B1DB514F25CEB6C70A2D70109_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisKeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4_m1310466D36FFA01103046E3D99C5C9287DC8602A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m43C5340CC3374708E58E874490622CAC2E56F54D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m1794C2B037D8081101DD37DC9792DA24D711DD83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3__ctor_m89C202C7F6D238631471FA9C3A4809F2DDE97D54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59_m3828F1F8692F51BDD03DC033392E15CF1A6C9AEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m70C05555F552E07D505B7B835DCD469B3DC405B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m15CF49CEF95BC0AA1A735A1FE615E80708543FDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_m7612B49A0C4765AB069FF3F0754E7B61C1A1F7C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mFF8D9FEFDF56EC6F38DA016CFEB6BD045AB7424B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m8B07FA74932434901F7245DE06D66CBFDE9211E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m10D6F548D885F821392BA54048F8A98FE9E55A37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC8C3BDDA7361B15E8E1EDFF500B115B272FA0D73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mFAE27C6A844518FA4336625FCD287E488E2C589A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mFC84E776E2A8EA97A5ED6D5D98DCDCC296A20D12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_mC9BE962224B76210C52FE15DC35D75CFC71FE132_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m9323E388C78A56E957C70D7EB63DFA9A9B0034CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m186505F66F97198D8539D9673736392642EE45CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB47F013C62B967199614B3D07228B381C0562448_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC231E09D7F26F0B1F61263B105FCD625F94AFB98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF81DE81521D3C4E4B736476E833E1B0C06839F2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m906F937750ED10550FCE8131922C04E9CE31382C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF86A27C4FC0596167E330736ED4DED4A4D3D5240_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9B97CDF92B380DB3B36AF2DC0114349DDE073678_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_mC07ADBDB716BC6D4CF6F992C909CC51B6AE2EA84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m9408F72BD0D020C6C9E11C3D30F6236635CFA70F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAwakeU3Eb__0_0_m043C46CCB459E4FD264B3115F68742BDC04F1D0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSmoothNormalsU3Eb__30_0_m243CCB6355ABA744A3D4278CEE1E935DF7391AC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSmoothNormalsU3Eb__30_1_mE06EA252FE45A4AD9CDF96EC69961996798FAF75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CopenGameU3Ed__1_System_Collections_IEnumerator_Reset_m6C5BA4F7ADCCC03F74FDDFD56D32C4FD7DE22877_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CopenMainU3Ed__1_System_Collections_IEnumerator_Reset_m6C19C9503DBD6739C8D3B08E03C4299569E9F403_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CopenSettingsU3Ed__1_System_Collections_IEnumerator_Reset_mB5F6A31443EA049F88BA4EBAA6C3305C5D31ED82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CspawnObjectsU3Ed__4_System_Collections_IEnumerator_Reset_mFC57AE50EB697E9AC8BE14BBEF762718F8D041FD_RuntimeMethod_var;
struct ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
struct MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7;
struct SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.HashSet`1<UnityEngine.Mesh>
struct HashSet_1_t6DB0C7C5196A278593BA1C34741DE40A2A91111A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t49F41EAD2501B7FD10B4B2137282DF9E1459BAFD* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t6DB0C7C5196A278593BA1C34741DE40A2A91111A, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t6DB0C7C5196A278593BA1C34741DE40A2A91111A, ____slots_8)); }
	inline SlotU5BU5D_t49F41EAD2501B7FD10B4B2137282DF9E1459BAFD* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t49F41EAD2501B7FD10B4B2137282DF9E1459BAFD** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t49F41EAD2501B7FD10B4B2137282DF9E1459BAFD* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t6DB0C7C5196A278593BA1C34741DE40A2A91111A, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t6DB0C7C5196A278593BA1C34741DE40A2A91111A, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t6DB0C7C5196A278593BA1C34741DE40A2A91111A, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t6DB0C7C5196A278593BA1C34741DE40A2A91111A, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t6DB0C7C5196A278593BA1C34741DE40A2A91111A, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t6DB0C7C5196A278593BA1C34741DE40A2A91111A, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4, ____items_1)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get__items_1() const { return ____items_1; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_StaticFields, ____emptyArray_5)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Mesh>
struct List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B, ____items_1)); }
	inline MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* get__items_1() const { return ____items_1; }
	inline MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B_StaticFields, ____emptyArray_5)); }
	inline MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Outline/ListVector3>
struct List_1_t9F8EE4C8A3A346268256352008972115DBB309C4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ListVector3U5BU5D_t4DCE7F94041BADB8FA34A412F9CD6824DF651CE6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t9F8EE4C8A3A346268256352008972115DBB309C4, ____items_1)); }
	inline ListVector3U5BU5D_t4DCE7F94041BADB8FA34A412F9CD6824DF651CE6* get__items_1() const { return ____items_1; }
	inline ListVector3U5BU5D_t4DCE7F94041BADB8FA34A412F9CD6824DF651CE6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ListVector3U5BU5D_t4DCE7F94041BADB8FA34A412F9CD6824DF651CE6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t9F8EE4C8A3A346268256352008972115DBB309C4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t9F8EE4C8A3A346268256352008972115DBB309C4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t9F8EE4C8A3A346268256352008972115DBB309C4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t9F8EE4C8A3A346268256352008972115DBB309C4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ListVector3U5BU5D_t4DCE7F94041BADB8FA34A412F9CD6824DF651CE6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t9F8EE4C8A3A346268256352008972115DBB309C4_StaticFields, ____emptyArray_5)); }
	inline ListVector3U5BU5D_t4DCE7F94041BADB8FA34A412F9CD6824DF651CE6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ListVector3U5BU5D_t4DCE7F94041BADB8FA34A412F9CD6824DF651CE6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ListVector3U5BU5D_t4DCE7F94041BADB8FA34A412F9CD6824DF651CE6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// GoogleMobileAds.Api.AdRequest
struct AdRequest_tCE1714026D97810808C3601F863ACBA404BE30E6  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::<Keywords>k__BackingField
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___U3CKeywordsU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::<Extras>k__BackingField
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___U3CExtrasU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::<MediationExtras>k__BackingField
	List_1_t1044F6D8235EF4BA61F582080C5D8FEC3497BAF5 * ___U3CMediationExtrasU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdRequest_tCE1714026D97810808C3601F863ACBA404BE30E6, ___U3CKeywordsU3Ek__BackingField_1)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_U3CKeywordsU3Ek__BackingField_1() const { return ___U3CKeywordsU3Ek__BackingField_1; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_U3CKeywordsU3Ek__BackingField_1() { return &___U3CKeywordsU3Ek__BackingField_1; }
	inline void set_U3CKeywordsU3Ek__BackingField_1(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___U3CKeywordsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeywordsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExtrasU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AdRequest_tCE1714026D97810808C3601F863ACBA404BE30E6, ___U3CExtrasU3Ek__BackingField_2)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_U3CExtrasU3Ek__BackingField_2() const { return ___U3CExtrasU3Ek__BackingField_2; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_U3CExtrasU3Ek__BackingField_2() { return &___U3CExtrasU3Ek__BackingField_2; }
	inline void set_U3CExtrasU3Ek__BackingField_2(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___U3CExtrasU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExtrasU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMediationExtrasU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AdRequest_tCE1714026D97810808C3601F863ACBA404BE30E6, ___U3CMediationExtrasU3Ek__BackingField_3)); }
	inline List_1_t1044F6D8235EF4BA61F582080C5D8FEC3497BAF5 * get_U3CMediationExtrasU3Ek__BackingField_3() const { return ___U3CMediationExtrasU3Ek__BackingField_3; }
	inline List_1_t1044F6D8235EF4BA61F582080C5D8FEC3497BAF5 ** get_address_of_U3CMediationExtrasU3Ek__BackingField_3() { return &___U3CMediationExtrasU3Ek__BackingField_3; }
	inline void set_U3CMediationExtrasU3Ek__BackingField_3(List_1_t1044F6D8235EF4BA61F582080C5D8FEC3497BAF5 * value)
	{
		___U3CMediationExtrasU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMediationExtrasU3Ek__BackingField_3), (void*)value);
	}
};

struct AdRequest_tCE1714026D97810808C3601F863ACBA404BE30E6_StaticFields
{
public:
	// System.String GoogleMobileAds.Api.AdRequest::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CVersionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AdRequest_tCE1714026D97810808C3601F863ACBA404BE30E6_StaticFields, ___U3CVersionU3Ek__BackingField_0)); }
	inline String_t* get_U3CVersionU3Ek__BackingField_0() const { return ___U3CVersionU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CVersionU3Ek__BackingField_0() { return &___U3CVersionU3Ek__BackingField_0; }
	inline void set_U3CVersionU3Ek__BackingField_0(String_t* value)
	{
		___U3CVersionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVersionU3Ek__BackingField_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t7093D8754C20FFF65DB1C809FCA56437C562722C  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IInitializationStatusClient GoogleMobileAds.Api.InitializationStatus::client
	RuntimeObject* ___client_0;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(InitializationStatus_t7093D8754C20FFF65DB1C809FCA56437C562722C, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}
};


// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.Api.InterstitialAd::client
	RuntimeObject* ___client_0;
	// System.String GoogleMobileAds.Api.InterstitialAd::adUnitId
	String_t* ___adUnitId_1;
	// System.Boolean GoogleMobileAds.Api.InterstitialAd::isLoaded
	bool ___isLoaded_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdLoaded
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdLoaded_3;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToLoad
	EventHandler_1_t61F7735EA1A59112F101A454B3674866E358C9F8 * ___OnAdFailedToLoad_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdOpening
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdOpening_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdClosed
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdClosed_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToShow
	EventHandler_1_t57855A95D2E170D06F84C98A3279AD188AFAA11A * ___OnAdFailedToShow_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdDidRecordImpression
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdDidRecordImpression_8;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.InterstitialAd::OnPaidEvent
	EventHandler_1_tDEA0C73C54C6F47E60F6B23947A437B2D3BCDD4D * ___OnPaidEvent_9;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}

	inline static int32_t get_offset_of_adUnitId_1() { return static_cast<int32_t>(offsetof(InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE, ___adUnitId_1)); }
	inline String_t* get_adUnitId_1() const { return ___adUnitId_1; }
	inline String_t** get_address_of_adUnitId_1() { return &___adUnitId_1; }
	inline void set_adUnitId_1(String_t* value)
	{
		___adUnitId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adUnitId_1), (void*)value);
	}

	inline static int32_t get_offset_of_isLoaded_2() { return static_cast<int32_t>(offsetof(InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE, ___isLoaded_2)); }
	inline bool get_isLoaded_2() const { return ___isLoaded_2; }
	inline bool* get_address_of_isLoaded_2() { return &___isLoaded_2; }
	inline void set_isLoaded_2(bool value)
	{
		___isLoaded_2 = value;
	}

	inline static int32_t get_offset_of_OnAdLoaded_3() { return static_cast<int32_t>(offsetof(InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE, ___OnAdLoaded_3)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdLoaded_3() const { return ___OnAdLoaded_3; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdLoaded_3() { return &___OnAdLoaded_3; }
	inline void set_OnAdLoaded_3(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdLoaded_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdLoaded_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_4() { return static_cast<int32_t>(offsetof(InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE, ___OnAdFailedToLoad_4)); }
	inline EventHandler_1_t61F7735EA1A59112F101A454B3674866E358C9F8 * get_OnAdFailedToLoad_4() const { return ___OnAdFailedToLoad_4; }
	inline EventHandler_1_t61F7735EA1A59112F101A454B3674866E358C9F8 ** get_address_of_OnAdFailedToLoad_4() { return &___OnAdFailedToLoad_4; }
	inline void set_OnAdFailedToLoad_4(EventHandler_1_t61F7735EA1A59112F101A454B3674866E358C9F8 * value)
	{
		___OnAdFailedToLoad_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToLoad_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdOpening_5() { return static_cast<int32_t>(offsetof(InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE, ___OnAdOpening_5)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdOpening_5() const { return ___OnAdOpening_5; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdOpening_5() { return &___OnAdOpening_5; }
	inline void set_OnAdOpening_5(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdOpening_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdOpening_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdClosed_6() { return static_cast<int32_t>(offsetof(InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE, ___OnAdClosed_6)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdClosed_6() const { return ___OnAdClosed_6; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdClosed_6() { return &___OnAdClosed_6; }
	inline void set_OnAdClosed_6(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdClosed_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdClosed_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToShow_7() { return static_cast<int32_t>(offsetof(InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE, ___OnAdFailedToShow_7)); }
	inline EventHandler_1_t57855A95D2E170D06F84C98A3279AD188AFAA11A * get_OnAdFailedToShow_7() const { return ___OnAdFailedToShow_7; }
	inline EventHandler_1_t57855A95D2E170D06F84C98A3279AD188AFAA11A ** get_address_of_OnAdFailedToShow_7() { return &___OnAdFailedToShow_7; }
	inline void set_OnAdFailedToShow_7(EventHandler_1_t57855A95D2E170D06F84C98A3279AD188AFAA11A * value)
	{
		___OnAdFailedToShow_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToShow_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdDidRecordImpression_8() { return static_cast<int32_t>(offsetof(InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE, ___OnAdDidRecordImpression_8)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdDidRecordImpression_8() const { return ___OnAdDidRecordImpression_8; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdDidRecordImpression_8() { return &___OnAdDidRecordImpression_8; }
	inline void set_OnAdDidRecordImpression_8(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdDidRecordImpression_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdDidRecordImpression_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnPaidEvent_9() { return static_cast<int32_t>(offsetof(InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE, ___OnPaidEvent_9)); }
	inline EventHandler_1_tDEA0C73C54C6F47E60F6B23947A437B2D3BCDD4D * get_OnPaidEvent_9() const { return ___OnPaidEvent_9; }
	inline EventHandler_1_tDEA0C73C54C6F47E60F6B23947A437B2D3BCDD4D ** get_address_of_OnPaidEvent_9() { return &___OnPaidEvent_9; }
	inline void set_OnPaidEvent_9(EventHandler_1_tDEA0C73C54C6F47E60F6B23947A437B2D3BCDD4D * value)
	{
		___OnPaidEvent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPaidEvent_9), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
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


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
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

// AdInitialize/<>c
struct U3CU3Ec_t0C6FCE158CE02E8A0217EABA93CB69971C59AA10  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t0C6FCE158CE02E8A0217EABA93CB69971C59AA10_StaticFields
{
public:
	// AdInitialize/<>c AdInitialize/<>c::<>9
	U3CU3Ec_t0C6FCE158CE02E8A0217EABA93CB69971C59AA10 * ___U3CU3E9_0;
	// System.Action`1<GoogleMobileAds.Api.InitializationStatus> AdInitialize/<>c::<>9__0_0
	Action_1_t0A77D06CC67DE106BDD92C7A0F81C626A0DCE1EC * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0C6FCE158CE02E8A0217EABA93CB69971C59AA10_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t0C6FCE158CE02E8A0217EABA93CB69971C59AA10 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t0C6FCE158CE02E8A0217EABA93CB69971C59AA10 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t0C6FCE158CE02E8A0217EABA93CB69971C59AA10 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0C6FCE158CE02E8A0217EABA93CB69971C59AA10_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Action_1_t0A77D06CC67DE106BDD92C7A0F81C626A0DCE1EC * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Action_1_t0A77D06CC67DE106BDD92C7A0F81C626A0DCE1EC ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Action_1_t0A77D06CC67DE106BDD92C7A0F81C626A0DCE1EC * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// GoogleMobileAds.Api.AdRequest/Builder
struct Builder_tE84777248A236774AD5A97FB4AE44E033401CF6F  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest/Builder::<Keywords>k__BackingField
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___U3CKeywordsU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest/Builder::<Extras>k__BackingField
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___U3CExtrasU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest/Builder::<MediationExtras>k__BackingField
	List_1_t1044F6D8235EF4BA61F582080C5D8FEC3497BAF5 * ___U3CMediationExtrasU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Builder_tE84777248A236774AD5A97FB4AE44E033401CF6F, ___U3CKeywordsU3Ek__BackingField_0)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_U3CKeywordsU3Ek__BackingField_0() const { return ___U3CKeywordsU3Ek__BackingField_0; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_U3CKeywordsU3Ek__BackingField_0() { return &___U3CKeywordsU3Ek__BackingField_0; }
	inline void set_U3CKeywordsU3Ek__BackingField_0(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___U3CKeywordsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeywordsU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExtrasU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Builder_tE84777248A236774AD5A97FB4AE44E033401CF6F, ___U3CExtrasU3Ek__BackingField_1)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_U3CExtrasU3Ek__BackingField_1() const { return ___U3CExtrasU3Ek__BackingField_1; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_U3CExtrasU3Ek__BackingField_1() { return &___U3CExtrasU3Ek__BackingField_1; }
	inline void set_U3CExtrasU3Ek__BackingField_1(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___U3CExtrasU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExtrasU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMediationExtrasU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Builder_tE84777248A236774AD5A97FB4AE44E033401CF6F, ___U3CMediationExtrasU3Ek__BackingField_2)); }
	inline List_1_t1044F6D8235EF4BA61F582080C5D8FEC3497BAF5 * get_U3CMediationExtrasU3Ek__BackingField_2() const { return ___U3CMediationExtrasU3Ek__BackingField_2; }
	inline List_1_t1044F6D8235EF4BA61F582080C5D8FEC3497BAF5 ** get_address_of_U3CMediationExtrasU3Ek__BackingField_2() { return &___U3CMediationExtrasU3Ek__BackingField_2; }
	inline void set_U3CMediationExtrasU3Ek__BackingField_2(List_1_t1044F6D8235EF4BA61F582080C5D8FEC3497BAF5 * value)
	{
		___U3CMediationExtrasU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMediationExtrasU3Ek__BackingField_2), (void*)value);
	}
};


// GoMain/<openMain>d__1
struct U3CopenMainU3Ed__1_t69AB38CA5795F00E94DF56DA6CF21A50E7DE5C93  : public RuntimeObject
{
public:
	// System.Int32 GoMain/<openMain>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GoMain/<openMain>d__1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CopenMainU3Ed__1_t69AB38CA5795F00E94DF56DA6CF21A50E7DE5C93, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CopenMainU3Ed__1_t69AB38CA5795F00E94DF56DA6CF21A50E7DE5C93, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// GoSettings/<openSettings>d__1
struct U3CopenSettingsU3Ed__1_tBAD2D95ABD672BF8FD28BDB24632FEB74D60DC79  : public RuntimeObject
{
public:
	// System.Int32 GoSettings/<openSettings>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GoSettings/<openSettings>d__1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CopenSettingsU3Ed__1_tBAD2D95ABD672BF8FD28BDB24632FEB74D60DC79, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CopenSettingsU3Ed__1_tBAD2D95ABD672BF8FD28BDB24632FEB74D60DC79, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// Outline/<>c
struct U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_StaticFields
{
public:
	// Outline/<>c Outline/<>c::<>9
	U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E * ___U3CU3E9_0;
	// System.Func`3<UnityEngine.Vector3,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>> Outline/<>c::<>9__30_0
	Func_3_t42C2490DD9CE7DA0CE4FB2C849431C03440FC25F * ___U3CU3E9__30_0_1;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>,UnityEngine.Vector3> Outline/<>c::<>9__30_1
	Func_2_tC59AB1CCC7AC92484D8826D38DD0FF2302A1AD72 * ___U3CU3E9__30_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__30_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_StaticFields, ___U3CU3E9__30_0_1)); }
	inline Func_3_t42C2490DD9CE7DA0CE4FB2C849431C03440FC25F * get_U3CU3E9__30_0_1() const { return ___U3CU3E9__30_0_1; }
	inline Func_3_t42C2490DD9CE7DA0CE4FB2C849431C03440FC25F ** get_address_of_U3CU3E9__30_0_1() { return &___U3CU3E9__30_0_1; }
	inline void set_U3CU3E9__30_0_1(Func_3_t42C2490DD9CE7DA0CE4FB2C849431C03440FC25F * value)
	{
		___U3CU3E9__30_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__30_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__30_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_StaticFields, ___U3CU3E9__30_1_2)); }
	inline Func_2_tC59AB1CCC7AC92484D8826D38DD0FF2302A1AD72 * get_U3CU3E9__30_1_2() const { return ___U3CU3E9__30_1_2; }
	inline Func_2_tC59AB1CCC7AC92484D8826D38DD0FF2302A1AD72 ** get_address_of_U3CU3E9__30_1_2() { return &___U3CU3E9__30_1_2; }
	inline void set_U3CU3E9__30_1_2(Func_2_tC59AB1CCC7AC92484D8826D38DD0FF2302A1AD72 * value)
	{
		___U3CU3E9__30_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__30_1_2), (void*)value);
	}
};


// Outline/ListVector3
struct ListVector3_t54AB46ECA91F943A5FE7817CA662D0D5B78617B9  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Outline/ListVector3::data
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(ListVector3_t54AB46ECA91F943A5FE7817CA662D0D5B78617B9, ___data_0)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_data_0() const { return ___data_0; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_0), (void*)value);
	}
};


// SpawnObjects/<spawnObjects>d__4
struct U3CspawnObjectsU3Ed__4_t945068FD287B56AC269BED9B37B6105E926E1FFF  : public RuntimeObject
{
public:
	// System.Int32 SpawnObjects/<spawnObjects>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SpawnObjects/<spawnObjects>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// SpawnObjects SpawnObjects/<spawnObjects>d__4::<>4__this
	SpawnObjects_t9F0D85B3A0340F19ADD6E0C793111837E2A84D92 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CspawnObjectsU3Ed__4_t945068FD287B56AC269BED9B37B6105E926E1FFF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CspawnObjectsU3Ed__4_t945068FD287B56AC269BED9B37B6105E926E1FFF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CspawnObjectsU3Ed__4_t945068FD287B56AC269BED9B37B6105E926E1FFF, ___U3CU3E4__this_2)); }
	inline SpawnObjects_t9F0D85B3A0340F19ADD6E0C793111837E2A84D92 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SpawnObjects_t9F0D85B3A0340F19ADD6E0C793111837E2A84D92 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SpawnObjects_t9F0D85B3A0340F19ADD6E0C793111837E2A84D92 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// StartGame/<openGame>d__1
struct U3CopenGameU3Ed__1_tA288DA1E7A707A635E041CE9EEF39A68687D4C6C  : public RuntimeObject
{
public:
	// System.Int32 StartGame/<openGame>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object StartGame/<openGame>d__1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CopenGameU3Ed__1_tA288DA1E7A707A635E041CE9EEF39A68687D4C6C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CopenGameU3Ed__1_tA288DA1E7A707A635E041CE9EEF39A68687D4C6C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct IntPtr_t 
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


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
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
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
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
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
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

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>
struct KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4, ___key_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_key_0() const { return ___key_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};


// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_LegacyContacts_6;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Impulse_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_RelativeVelocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Body_2() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Body_2)); }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * get_m_Body_2() const { return ___m_Body_2; }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 ** get_address_of_m_Body_2() { return &___m_Body_2; }
	inline void set_m_Body_2(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * value)
	{
		___m_Body_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Body_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Collider_3)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collider_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContactCount_4() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ContactCount_4)); }
	inline int32_t get_m_ContactCount_4() const { return ___m_ContactCount_4; }
	inline int32_t* get_address_of_m_ContactCount_4() { return &___m_ContactCount_4; }
	inline void set_m_ContactCount_4(int32_t value)
	{
		___m_ContactCount_4 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_5() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ReusedContacts_5)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_ReusedContacts_5() const { return ___m_ReusedContacts_5; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_ReusedContacts_5() { return &___m_ReusedContacts_5; }
	inline void set_m_ReusedContacts_5(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_ReusedContacts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_6() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_LegacyContacts_6)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_LegacyContacts_6() const { return ___m_LegacyContacts_6; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_LegacyContacts_6() { return &___m_LegacyContacts_6; }
	inline void set_m_LegacyContacts_6(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_LegacyContacts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
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
struct Delegate_t  : public RuntimeObject
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
struct Exception_t  : public RuntimeObject
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

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.TouchPhase
struct TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Outline/Mode
struct Mode_tE6A33F0970CFB7CB31A9C324E3A5E57744A55E0C 
{
public:
	// System.Int32 Outline/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_tE6A33F0970CFB7CB31A9C324E3A5E57744A55E0C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
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

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Touch
struct Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
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
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t0A77D06CC67DE106BDD92C7A0F81C626A0DCE1EC  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>,UnityEngine.Vector3>
struct Func_2_tC59AB1CCC7AC92484D8826D38DD0FF2302A1AD72  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<UnityEngine.Vector3,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>
struct Func_3_t42C2490DD9CE7DA0CE4FB2C849431C03440FC25F  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___willRenderCanvases_5;

public:
	inline static int32_t get_offset_of_preWillRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___preWillRenderCanvases_4)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_preWillRenderCanvases_4() const { return ___preWillRenderCanvases_4; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_preWillRenderCanvases_4() { return &___preWillRenderCanvases_4; }
	inline void set_preWillRenderCanvases_4(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___preWillRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___preWillRenderCanvases_4), (void*)value);
	}

	inline static int32_t get_offset_of_willRenderCanvases_5() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___willRenderCanvases_5)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_willRenderCanvases_5() const { return ___willRenderCanvases_5; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_willRenderCanvases_5() { return &___willRenderCanvases_5; }
	inline void set_willRenderCanvases_5(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___willRenderCanvases_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_5), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// AdInitialize
struct AdInitialize_t80F51A9D34A4D4163C94F91B8F3B9884B88BBAED  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// BackgroundMusic
struct BackgroundMusic_t49638A78B553108F8BB7BD3C6B8A49E2F284E626  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject BackgroundMusic::backgroundMusic
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___backgroundMusic_4;
	// UnityEngine.GameObject[] BackgroundMusic::firstObject
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___firstObject_5;

public:
	inline static int32_t get_offset_of_backgroundMusic_4() { return static_cast<int32_t>(offsetof(BackgroundMusic_t49638A78B553108F8BB7BD3C6B8A49E2F284E626, ___backgroundMusic_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_backgroundMusic_4() const { return ___backgroundMusic_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_backgroundMusic_4() { return &___backgroundMusic_4; }
	inline void set_backgroundMusic_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___backgroundMusic_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backgroundMusic_4), (void*)value);
	}

	inline static int32_t get_offset_of_firstObject_5() { return static_cast<int32_t>(offsetof(BackgroundMusic_t49638A78B553108F8BB7BD3C6B8A49E2F284E626, ___firstObject_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_firstObject_5() const { return ___firstObject_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_firstObject_5() { return &___firstObject_5; }
	inline void set_firstObject_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___firstObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstObject_5), (void*)value);
	}
};


// ContinueGame
struct ContinueGame_t55A91B157DDC0530D05BE4C029A8ED869752BCEE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Canvas ContinueGame::gameCanvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___gameCanvas_4;
	// UnityEngine.Canvas ContinueGame::pauseCanvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___pauseCanvas_5;

public:
	inline static int32_t get_offset_of_gameCanvas_4() { return static_cast<int32_t>(offsetof(ContinueGame_t55A91B157DDC0530D05BE4C029A8ED869752BCEE, ___gameCanvas_4)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_gameCanvas_4() const { return ___gameCanvas_4; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_gameCanvas_4() { return &___gameCanvas_4; }
	inline void set_gameCanvas_4(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___gameCanvas_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameCanvas_4), (void*)value);
	}

	inline static int32_t get_offset_of_pauseCanvas_5() { return static_cast<int32_t>(offsetof(ContinueGame_t55A91B157DDC0530D05BE4C029A8ED869752BCEE, ___pauseCanvas_5)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_pauseCanvas_5() const { return ___pauseCanvas_5; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_pauseCanvas_5() { return &___pauseCanvas_5; }
	inline void set_pauseCanvas_5(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___pauseCanvas_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pauseCanvas_5), (void*)value);
	}
};


// DeleteObject
struct DeleteObject_t89D240D1F166FAE38CF42ADA3F431C3548054B43  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// EatObjects
struct EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Slider EatObjects::slider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___slider_5;
	// UnityEngine.AudioClip EatObjects::nomSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___nomSound_6;
	// UnityEngine.AudioClip EatObjects::biteAndChewingSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___biteAndChewingSound_7;
	// UnityEngine.AudioClip EatObjects::belchingSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___belchingSound_8;
	// UnityEngine.AudioClip EatObjects::vomitSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___vomitSound_9;
	// UnityEngine.GameObject EatObjects::destroyableGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___destroyableGameObject_10;
	// UnityEngine.AudioSource EatObjects::playerAudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___playerAudioSource_11;

public:
	inline static int32_t get_offset_of_slider_5() { return static_cast<int32_t>(offsetof(EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59, ___slider_5)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_slider_5() const { return ___slider_5; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_slider_5() { return &___slider_5; }
	inline void set_slider_5(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___slider_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slider_5), (void*)value);
	}

	inline static int32_t get_offset_of_nomSound_6() { return static_cast<int32_t>(offsetof(EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59, ___nomSound_6)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_nomSound_6() const { return ___nomSound_6; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_nomSound_6() { return &___nomSound_6; }
	inline void set_nomSound_6(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___nomSound_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nomSound_6), (void*)value);
	}

	inline static int32_t get_offset_of_biteAndChewingSound_7() { return static_cast<int32_t>(offsetof(EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59, ___biteAndChewingSound_7)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_biteAndChewingSound_7() const { return ___biteAndChewingSound_7; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_biteAndChewingSound_7() { return &___biteAndChewingSound_7; }
	inline void set_biteAndChewingSound_7(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___biteAndChewingSound_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___biteAndChewingSound_7), (void*)value);
	}

	inline static int32_t get_offset_of_belchingSound_8() { return static_cast<int32_t>(offsetof(EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59, ___belchingSound_8)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_belchingSound_8() const { return ___belchingSound_8; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_belchingSound_8() { return &___belchingSound_8; }
	inline void set_belchingSound_8(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___belchingSound_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___belchingSound_8), (void*)value);
	}

	inline static int32_t get_offset_of_vomitSound_9() { return static_cast<int32_t>(offsetof(EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59, ___vomitSound_9)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_vomitSound_9() const { return ___vomitSound_9; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_vomitSound_9() { return &___vomitSound_9; }
	inline void set_vomitSound_9(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___vomitSound_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vomitSound_9), (void*)value);
	}

	inline static int32_t get_offset_of_destroyableGameObject_10() { return static_cast<int32_t>(offsetof(EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59, ___destroyableGameObject_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_destroyableGameObject_10() const { return ___destroyableGameObject_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_destroyableGameObject_10() { return &___destroyableGameObject_10; }
	inline void set_destroyableGameObject_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___destroyableGameObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___destroyableGameObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_playerAudioSource_11() { return static_cast<int32_t>(offsetof(EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59, ___playerAudioSource_11)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_playerAudioSource_11() const { return ___playerAudioSource_11; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_playerAudioSource_11() { return &___playerAudioSource_11; }
	inline void set_playerAudioSource_11(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___playerAudioSource_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerAudioSource_11), (void*)value);
	}
};

struct EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59_StaticFields
{
public:
	// System.Single EatObjects::sliderScore
	float ___sliderScore_4;

public:
	inline static int32_t get_offset_of_sliderScore_4() { return static_cast<int32_t>(offsetof(EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59_StaticFields, ___sliderScore_4)); }
	inline float get_sliderScore_4() const { return ___sliderScore_4; }
	inline float* get_address_of_sliderScore_4() { return &___sliderScore_4; }
	inline void set_sliderScore_4(float value)
	{
		___sliderScore_4 = value;
	}
};


// FullSlider
struct FullSlider_tCDC43C3BFD0463537A5A8DCEAFFCE1A760C54A72  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Slider FullSlider::slider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___slider_4;

public:
	inline static int32_t get_offset_of_slider_4() { return static_cast<int32_t>(offsetof(FullSlider_tCDC43C3BFD0463537A5A8DCEAFFCE1A760C54A72, ___slider_4)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_slider_4() const { return ___slider_4; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_slider_4() { return &___slider_4; }
	inline void set_slider_4(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___slider_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slider_4), (void*)value);
	}
};


// GoMain
struct GoMain_t0B63717C0640D5CC90F8D5DACB71B41B9C1C689E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// GoSettings
struct GoSettings_t6209533B8C3A73CA66078C2CE8DCB2DEF955046B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// InterAd
struct InterAd_t5A773963518A93AAEA059120A9C89888FAA5FD88  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GoogleMobileAds.Api.InterstitialAd InterAd::interstitialAd
	InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE * ___interstitialAd_4;
	// System.String InterAd::interstitialUnitId
	String_t* ___interstitialUnitId_5;

public:
	inline static int32_t get_offset_of_interstitialAd_4() { return static_cast<int32_t>(offsetof(InterAd_t5A773963518A93AAEA059120A9C89888FAA5FD88, ___interstitialAd_4)); }
	inline InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE * get_interstitialAd_4() const { return ___interstitialAd_4; }
	inline InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE ** get_address_of_interstitialAd_4() { return &___interstitialAd_4; }
	inline void set_interstitialAd_4(InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE * value)
	{
		___interstitialAd_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interstitialAd_4), (void*)value);
	}

	inline static int32_t get_offset_of_interstitialUnitId_5() { return static_cast<int32_t>(offsetof(InterAd_t5A773963518A93AAEA059120A9C89888FAA5FD88, ___interstitialUnitId_5)); }
	inline String_t* get_interstitialUnitId_5() const { return ___interstitialUnitId_5; }
	inline String_t** get_address_of_interstitialUnitId_5() { return &___interstitialUnitId_5; }
	inline void set_interstitialUnitId_5(String_t* value)
	{
		___interstitialUnitId_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interstitialUnitId_5), (void*)value);
	}
};


// IsScoreTheBest
struct IsScoreTheBest_tFA0A67B3351B900A4B5B224B08E165D6B7D9FC2F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 IsScoreTheBest::nowScore
	int32_t ___nowScore_4;
	// System.Int32 IsScoreTheBest::theBestScore
	int32_t ___theBestScore_5;

public:
	inline static int32_t get_offset_of_nowScore_4() { return static_cast<int32_t>(offsetof(IsScoreTheBest_tFA0A67B3351B900A4B5B224B08E165D6B7D9FC2F, ___nowScore_4)); }
	inline int32_t get_nowScore_4() const { return ___nowScore_4; }
	inline int32_t* get_address_of_nowScore_4() { return &___nowScore_4; }
	inline void set_nowScore_4(int32_t value)
	{
		___nowScore_4 = value;
	}

	inline static int32_t get_offset_of_theBestScore_5() { return static_cast<int32_t>(offsetof(IsScoreTheBest_tFA0A67B3351B900A4B5B224B08E165D6B7D9FC2F, ___theBestScore_5)); }
	inline int32_t get_theBestScore_5() const { return ___theBestScore_5; }
	inline int32_t* get_address_of_theBestScore_5() { return &___theBestScore_5; }
	inline void set_theBestScore_5(int32_t value)
	{
		___theBestScore_5 = value;
	}
};


// Lose
struct Lose_tA2735DCC5FAF5A3E41A4EA67943D385CBDB829A3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Lose::gameCanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameCanvas_4;
	// UnityEngine.GameObject Lose::loseCanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___loseCanvas_5;
	// UnityEngine.GameObject Lose::spawnPosition
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___spawnPosition_6;
	// UnityEngine.GameObject Lose::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_7;
	// UnityEngine.UI.Text Lose::nowScore
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___nowScore_8;
	// UnityEngine.UI.Text Lose::theBestScore
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___theBestScore_9;
	// System.Boolean Lose::isLost
	bool ___isLost_10;
	// InterAd Lose::interAd
	InterAd_t5A773963518A93AAEA059120A9C89888FAA5FD88 * ___interAd_11;
	// System.Int32 Lose::countLoses
	int32_t ___countLoses_12;

public:
	inline static int32_t get_offset_of_gameCanvas_4() { return static_cast<int32_t>(offsetof(Lose_tA2735DCC5FAF5A3E41A4EA67943D385CBDB829A3, ___gameCanvas_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameCanvas_4() const { return ___gameCanvas_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameCanvas_4() { return &___gameCanvas_4; }
	inline void set_gameCanvas_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameCanvas_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameCanvas_4), (void*)value);
	}

	inline static int32_t get_offset_of_loseCanvas_5() { return static_cast<int32_t>(offsetof(Lose_tA2735DCC5FAF5A3E41A4EA67943D385CBDB829A3, ___loseCanvas_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_loseCanvas_5() const { return ___loseCanvas_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_loseCanvas_5() { return &___loseCanvas_5; }
	inline void set_loseCanvas_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___loseCanvas_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loseCanvas_5), (void*)value);
	}

	inline static int32_t get_offset_of_spawnPosition_6() { return static_cast<int32_t>(offsetof(Lose_tA2735DCC5FAF5A3E41A4EA67943D385CBDB829A3, ___spawnPosition_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_spawnPosition_6() const { return ___spawnPosition_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_spawnPosition_6() { return &___spawnPosition_6; }
	inline void set_spawnPosition_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___spawnPosition_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnPosition_6), (void*)value);
	}

	inline static int32_t get_offset_of_player_7() { return static_cast<int32_t>(offsetof(Lose_tA2735DCC5FAF5A3E41A4EA67943D385CBDB829A3, ___player_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_7() const { return ___player_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_7() { return &___player_7; }
	inline void set_player_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_7), (void*)value);
	}

	inline static int32_t get_offset_of_nowScore_8() { return static_cast<int32_t>(offsetof(Lose_tA2735DCC5FAF5A3E41A4EA67943D385CBDB829A3, ___nowScore_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_nowScore_8() const { return ___nowScore_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_nowScore_8() { return &___nowScore_8; }
	inline void set_nowScore_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___nowScore_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nowScore_8), (void*)value);
	}

	inline static int32_t get_offset_of_theBestScore_9() { return static_cast<int32_t>(offsetof(Lose_tA2735DCC5FAF5A3E41A4EA67943D385CBDB829A3, ___theBestScore_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_theBestScore_9() const { return ___theBestScore_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_theBestScore_9() { return &___theBestScore_9; }
	inline void set_theBestScore_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___theBestScore_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___theBestScore_9), (void*)value);
	}

	inline static int32_t get_offset_of_isLost_10() { return static_cast<int32_t>(offsetof(Lose_tA2735DCC5FAF5A3E41A4EA67943D385CBDB829A3, ___isLost_10)); }
	inline bool get_isLost_10() const { return ___isLost_10; }
	inline bool* get_address_of_isLost_10() { return &___isLost_10; }
	inline void set_isLost_10(bool value)
	{
		___isLost_10 = value;
	}

	inline static int32_t get_offset_of_interAd_11() { return static_cast<int32_t>(offsetof(Lose_tA2735DCC5FAF5A3E41A4EA67943D385CBDB829A3, ___interAd_11)); }
	inline InterAd_t5A773963518A93AAEA059120A9C89888FAA5FD88 * get_interAd_11() const { return ___interAd_11; }
	inline InterAd_t5A773963518A93AAEA059120A9C89888FAA5FD88 ** get_address_of_interAd_11() { return &___interAd_11; }
	inline void set_interAd_11(InterAd_t5A773963518A93AAEA059120A9C89888FAA5FD88 * value)
	{
		___interAd_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interAd_11), (void*)value);
	}

	inline static int32_t get_offset_of_countLoses_12() { return static_cast<int32_t>(offsetof(Lose_tA2735DCC5FAF5A3E41A4EA67943D385CBDB829A3, ___countLoses_12)); }
	inline int32_t get_countLoses_12() const { return ___countLoses_12; }
	inline int32_t* get_address_of_countLoses_12() { return &___countLoses_12; }
	inline void set_countLoses_12(int32_t value)
	{
		___countLoses_12 = value;
	}
};


// MoveObjects
struct MoveObjects_tB029315F8177388C53ADAAAB845FB42D212A3BAD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single MoveObjects::movementSpeed
	float ___movementSpeed_4;
	// UnityEngine.Rigidbody MoveObjects::objectRigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___objectRigidbody_5;

public:
	inline static int32_t get_offset_of_movementSpeed_4() { return static_cast<int32_t>(offsetof(MoveObjects_tB029315F8177388C53ADAAAB845FB42D212A3BAD, ___movementSpeed_4)); }
	inline float get_movementSpeed_4() const { return ___movementSpeed_4; }
	inline float* get_address_of_movementSpeed_4() { return &___movementSpeed_4; }
	inline void set_movementSpeed_4(float value)
	{
		___movementSpeed_4 = value;
	}

	inline static int32_t get_offset_of_objectRigidbody_5() { return static_cast<int32_t>(offsetof(MoveObjects_tB029315F8177388C53ADAAAB845FB42D212A3BAD, ___objectRigidbody_5)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_objectRigidbody_5() const { return ___objectRigidbody_5; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_objectRigidbody_5() { return &___objectRigidbody_5; }
	inline void set_objectRigidbody_5(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___objectRigidbody_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectRigidbody_5), (void*)value);
	}
};


// Outline
struct Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Outline/Mode Outline::outlineMode
	int32_t ___outlineMode_5;
	// UnityEngine.Color Outline::outlineColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___outlineColor_6;
	// System.Single Outline::outlineWidth
	float ___outlineWidth_7;
	// System.Boolean Outline::precomputeOutline
	bool ___precomputeOutline_8;
	// System.Collections.Generic.List`1<UnityEngine.Mesh> Outline::bakeKeys
	List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * ___bakeKeys_9;
	// System.Collections.Generic.List`1<Outline/ListVector3> Outline::bakeValues
	List_1_t9F8EE4C8A3A346268256352008972115DBB309C4 * ___bakeValues_10;
	// UnityEngine.Renderer[] Outline::renderers
	RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* ___renderers_11;
	// UnityEngine.Material Outline::outlineMaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___outlineMaskMaterial_12;
	// UnityEngine.Material Outline::outlineFillMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___outlineFillMaterial_13;
	// System.Boolean Outline::needsUpdate
	bool ___needsUpdate_14;

public:
	inline static int32_t get_offset_of_outlineMode_5() { return static_cast<int32_t>(offsetof(Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C, ___outlineMode_5)); }
	inline int32_t get_outlineMode_5() const { return ___outlineMode_5; }
	inline int32_t* get_address_of_outlineMode_5() { return &___outlineMode_5; }
	inline void set_outlineMode_5(int32_t value)
	{
		___outlineMode_5 = value;
	}

	inline static int32_t get_offset_of_outlineColor_6() { return static_cast<int32_t>(offsetof(Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C, ___outlineColor_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_outlineColor_6() const { return ___outlineColor_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_outlineColor_6() { return &___outlineColor_6; }
	inline void set_outlineColor_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___outlineColor_6 = value;
	}

	inline static int32_t get_offset_of_outlineWidth_7() { return static_cast<int32_t>(offsetof(Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C, ___outlineWidth_7)); }
	inline float get_outlineWidth_7() const { return ___outlineWidth_7; }
	inline float* get_address_of_outlineWidth_7() { return &___outlineWidth_7; }
	inline void set_outlineWidth_7(float value)
	{
		___outlineWidth_7 = value;
	}

	inline static int32_t get_offset_of_precomputeOutline_8() { return static_cast<int32_t>(offsetof(Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C, ___precomputeOutline_8)); }
	inline bool get_precomputeOutline_8() const { return ___precomputeOutline_8; }
	inline bool* get_address_of_precomputeOutline_8() { return &___precomputeOutline_8; }
	inline void set_precomputeOutline_8(bool value)
	{
		___precomputeOutline_8 = value;
	}

	inline static int32_t get_offset_of_bakeKeys_9() { return static_cast<int32_t>(offsetof(Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C, ___bakeKeys_9)); }
	inline List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * get_bakeKeys_9() const { return ___bakeKeys_9; }
	inline List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B ** get_address_of_bakeKeys_9() { return &___bakeKeys_9; }
	inline void set_bakeKeys_9(List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * value)
	{
		___bakeKeys_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bakeKeys_9), (void*)value);
	}

	inline static int32_t get_offset_of_bakeValues_10() { return static_cast<int32_t>(offsetof(Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C, ___bakeValues_10)); }
	inline List_1_t9F8EE4C8A3A346268256352008972115DBB309C4 * get_bakeValues_10() const { return ___bakeValues_10; }
	inline List_1_t9F8EE4C8A3A346268256352008972115DBB309C4 ** get_address_of_bakeValues_10() { return &___bakeValues_10; }
	inline void set_bakeValues_10(List_1_t9F8EE4C8A3A346268256352008972115DBB309C4 * value)
	{
		___bakeValues_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bakeValues_10), (void*)value);
	}

	inline static int32_t get_offset_of_renderers_11() { return static_cast<int32_t>(offsetof(Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C, ___renderers_11)); }
	inline RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* get_renderers_11() const { return ___renderers_11; }
	inline RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7** get_address_of_renderers_11() { return &___renderers_11; }
	inline void set_renderers_11(RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* value)
	{
		___renderers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderers_11), (void*)value);
	}

	inline static int32_t get_offset_of_outlineMaskMaterial_12() { return static_cast<int32_t>(offsetof(Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C, ___outlineMaskMaterial_12)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_outlineMaskMaterial_12() const { return ___outlineMaskMaterial_12; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_outlineMaskMaterial_12() { return &___outlineMaskMaterial_12; }
	inline void set_outlineMaskMaterial_12(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___outlineMaskMaterial_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outlineMaskMaterial_12), (void*)value);
	}

	inline static int32_t get_offset_of_outlineFillMaterial_13() { return static_cast<int32_t>(offsetof(Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C, ___outlineFillMaterial_13)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_outlineFillMaterial_13() const { return ___outlineFillMaterial_13; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_outlineFillMaterial_13() { return &___outlineFillMaterial_13; }
	inline void set_outlineFillMaterial_13(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___outlineFillMaterial_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outlineFillMaterial_13), (void*)value);
	}

	inline static int32_t get_offset_of_needsUpdate_14() { return static_cast<int32_t>(offsetof(Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C, ___needsUpdate_14)); }
	inline bool get_needsUpdate_14() const { return ___needsUpdate_14; }
	inline bool* get_address_of_needsUpdate_14() { return &___needsUpdate_14; }
	inline void set_needsUpdate_14(bool value)
	{
		___needsUpdate_14 = value;
	}
};

struct Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C_StaticFields
{
public:
	// System.Collections.Generic.HashSet`1<UnityEngine.Mesh> Outline::registeredMeshes
	HashSet_1_t6DB0C7C5196A278593BA1C34741DE40A2A91111A * ___registeredMeshes_4;

public:
	inline static int32_t get_offset_of_registeredMeshes_4() { return static_cast<int32_t>(offsetof(Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C_StaticFields, ___registeredMeshes_4)); }
	inline HashSet_1_t6DB0C7C5196A278593BA1C34741DE40A2A91111A * get_registeredMeshes_4() const { return ___registeredMeshes_4; }
	inline HashSet_1_t6DB0C7C5196A278593BA1C34741DE40A2A91111A ** get_address_of_registeredMeshes_4() { return &___registeredMeshes_4; }
	inline void set_registeredMeshes_4(HashSet_1_t6DB0C7C5196A278593BA1C34741DE40A2A91111A * value)
	{
		___registeredMeshes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___registeredMeshes_4), (void*)value);
	}
};


// PauseGame
struct PauseGame_t8BD53F5D21AABDB02D738988CF76A29EC230BA69  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Canvas PauseGame::gameCanvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___gameCanvas_4;
	// UnityEngine.Canvas PauseGame::pauseCanvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___pauseCanvas_5;

public:
	inline static int32_t get_offset_of_gameCanvas_4() { return static_cast<int32_t>(offsetof(PauseGame_t8BD53F5D21AABDB02D738988CF76A29EC230BA69, ___gameCanvas_4)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_gameCanvas_4() const { return ___gameCanvas_4; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_gameCanvas_4() { return &___gameCanvas_4; }
	inline void set_gameCanvas_4(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___gameCanvas_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameCanvas_4), (void*)value);
	}

	inline static int32_t get_offset_of_pauseCanvas_5() { return static_cast<int32_t>(offsetof(PauseGame_t8BD53F5D21AABDB02D738988CF76A29EC230BA69, ___pauseCanvas_5)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_pauseCanvas_5() const { return ___pauseCanvas_5; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_pauseCanvas_5() { return &___pauseCanvas_5; }
	inline void set_pauseCanvas_5(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___pauseCanvas_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pauseCanvas_5), (void*)value);
	}
};


// PlayButtonSound
struct PlayButtonSound_tEF391BE6C1A456BF914000D8E08B6A2B999B08F1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// PlayerMovement
struct PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single PlayerMovement::playerSpeed
	float ___playerSpeed_4;
	// UnityEngine.Transform PlayerMovement::target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_5;
	// UnityEngine.Rigidbody PlayerMovement::playerRb
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___playerRb_6;
	// UnityEngine.Vector3 PlayerMovement::newPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newPos_7;
	// UnityEngine.Camera PlayerMovement::mainCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___mainCamera_8;

public:
	inline static int32_t get_offset_of_playerSpeed_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___playerSpeed_4)); }
	inline float get_playerSpeed_4() const { return ___playerSpeed_4; }
	inline float* get_address_of_playerSpeed_4() { return &___playerSpeed_4; }
	inline void set_playerSpeed_4(float value)
	{
		___playerSpeed_4 = value;
	}

	inline static int32_t get_offset_of_target_5() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___target_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_5() const { return ___target_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_5() { return &___target_5; }
	inline void set_target_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_5), (void*)value);
	}

	inline static int32_t get_offset_of_playerRb_6() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___playerRb_6)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_playerRb_6() const { return ___playerRb_6; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_playerRb_6() { return &___playerRb_6; }
	inline void set_playerRb_6(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___playerRb_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerRb_6), (void*)value);
	}

	inline static int32_t get_offset_of_newPos_7() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___newPos_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_newPos_7() const { return ___newPos_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_newPos_7() { return &___newPos_7; }
	inline void set_newPos_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___newPos_7 = value;
	}

	inline static int32_t get_offset_of_mainCamera_8() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___mainCamera_8)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_mainCamera_8() const { return ___mainCamera_8; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_mainCamera_8() { return &___mainCamera_8; }
	inline void set_mainCamera_8(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___mainCamera_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainCamera_8), (void*)value);
	}
};


// Score
struct Score_tE07CBD9780DFC212BE43719819F512E8861103C7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text Score::scoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreText_5;

public:
	inline static int32_t get_offset_of_scoreText_5() { return static_cast<int32_t>(offsetof(Score_tE07CBD9780DFC212BE43719819F512E8861103C7, ___scoreText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreText_5() const { return ___scoreText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreText_5() { return &___scoreText_5; }
	inline void set_scoreText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreText_5), (void*)value);
	}
};

struct Score_tE07CBD9780DFC212BE43719819F512E8861103C7_StaticFields
{
public:
	// System.Int32 Score::nowScore
	int32_t ___nowScore_4;

public:
	inline static int32_t get_offset_of_nowScore_4() { return static_cast<int32_t>(offsetof(Score_tE07CBD9780DFC212BE43719819F512E8861103C7_StaticFields, ___nowScore_4)); }
	inline int32_t get_nowScore_4() const { return ___nowScore_4; }
	inline int32_t* get_address_of_nowScore_4() { return &___nowScore_4; }
	inline void set_nowScore_4(int32_t value)
	{
		___nowScore_4 = value;
	}
};


// SoundOnOff
struct SoundOnOff_t491C399CECC1539C7BC5D027AC0D6069ABEB9D15  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean SoundOnOff::isSoundOnOffButton
	bool ___isSoundOnOffButton_4;
	// System.Boolean SoundOnOff::isPlay
	bool ___isPlay_5;
	// UnityEngine.AudioSource SoundOnOff::musicAudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___musicAudioSource_6;
	// UnityEngine.UI.Text SoundOnOff::onOffText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___onOffText_7;
	// System.String SoundOnOff::playerPrefs
	String_t* ___playerPrefs_8;

public:
	inline static int32_t get_offset_of_isSoundOnOffButton_4() { return static_cast<int32_t>(offsetof(SoundOnOff_t491C399CECC1539C7BC5D027AC0D6069ABEB9D15, ___isSoundOnOffButton_4)); }
	inline bool get_isSoundOnOffButton_4() const { return ___isSoundOnOffButton_4; }
	inline bool* get_address_of_isSoundOnOffButton_4() { return &___isSoundOnOffButton_4; }
	inline void set_isSoundOnOffButton_4(bool value)
	{
		___isSoundOnOffButton_4 = value;
	}

	inline static int32_t get_offset_of_isPlay_5() { return static_cast<int32_t>(offsetof(SoundOnOff_t491C399CECC1539C7BC5D027AC0D6069ABEB9D15, ___isPlay_5)); }
	inline bool get_isPlay_5() const { return ___isPlay_5; }
	inline bool* get_address_of_isPlay_5() { return &___isPlay_5; }
	inline void set_isPlay_5(bool value)
	{
		___isPlay_5 = value;
	}

	inline static int32_t get_offset_of_musicAudioSource_6() { return static_cast<int32_t>(offsetof(SoundOnOff_t491C399CECC1539C7BC5D027AC0D6069ABEB9D15, ___musicAudioSource_6)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_musicAudioSource_6() const { return ___musicAudioSource_6; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_musicAudioSource_6() { return &___musicAudioSource_6; }
	inline void set_musicAudioSource_6(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___musicAudioSource_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___musicAudioSource_6), (void*)value);
	}

	inline static int32_t get_offset_of_onOffText_7() { return static_cast<int32_t>(offsetof(SoundOnOff_t491C399CECC1539C7BC5D027AC0D6069ABEB9D15, ___onOffText_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_onOffText_7() const { return ___onOffText_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_onOffText_7() { return &___onOffText_7; }
	inline void set_onOffText_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___onOffText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onOffText_7), (void*)value);
	}

	inline static int32_t get_offset_of_playerPrefs_8() { return static_cast<int32_t>(offsetof(SoundOnOff_t491C399CECC1539C7BC5D027AC0D6069ABEB9D15, ___playerPrefs_8)); }
	inline String_t* get_playerPrefs_8() const { return ___playerPrefs_8; }
	inline String_t** get_address_of_playerPrefs_8() { return &___playerPrefs_8; }
	inline void set_playerPrefs_8(String_t* value)
	{
		___playerPrefs_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerPrefs_8), (void*)value);
	}
};


// SpawnObjects
struct SpawnObjects_t9F0D85B3A0340F19ADD6E0C793111837E2A84D92  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] SpawnObjects::objectsToSpawn
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___objectsToSpawn_4;
	// System.Single SpawnObjects::timeToSpawn
	float ___timeToSpawn_5;
	// System.Single SpawnObjects::spawnPosition
	float ___spawnPosition_6;

public:
	inline static int32_t get_offset_of_objectsToSpawn_4() { return static_cast<int32_t>(offsetof(SpawnObjects_t9F0D85B3A0340F19ADD6E0C793111837E2A84D92, ___objectsToSpawn_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_objectsToSpawn_4() const { return ___objectsToSpawn_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_objectsToSpawn_4() { return &___objectsToSpawn_4; }
	inline void set_objectsToSpawn_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___objectsToSpawn_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectsToSpawn_4), (void*)value);
	}

	inline static int32_t get_offset_of_timeToSpawn_5() { return static_cast<int32_t>(offsetof(SpawnObjects_t9F0D85B3A0340F19ADD6E0C793111837E2A84D92, ___timeToSpawn_5)); }
	inline float get_timeToSpawn_5() const { return ___timeToSpawn_5; }
	inline float* get_address_of_timeToSpawn_5() { return &___timeToSpawn_5; }
	inline void set_timeToSpawn_5(float value)
	{
		___timeToSpawn_5 = value;
	}

	inline static int32_t get_offset_of_spawnPosition_6() { return static_cast<int32_t>(offsetof(SpawnObjects_t9F0D85B3A0340F19ADD6E0C793111837E2A84D92, ___spawnPosition_6)); }
	inline float get_spawnPosition_6() const { return ___spawnPosition_6; }
	inline float* get_address_of_spawnPosition_6() { return &___spawnPosition_6; }
	inline void set_spawnPosition_6(float value)
	{
		___spawnPosition_6 = value;
	}
};


// StartGame
struct StartGame_tF6E1D3C7ABDCE571787D7EA637AD9B9F25C4D742  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
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


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
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


// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * m_Items[1];

public:
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Material_t8927C00353A72755313F046D0CE85178AE8218EE * m_Items[1];

public:
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.MeshFilter[]
struct MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * m_Items[1];

public:
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SkinnedMeshRenderer[]
struct SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * m_Items[1];

public:
	inline SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared (String_t* ___path0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Func`3<UnityEngine.Vector3,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_m89C202C7F6D238631471FA9C3A4809F2DDE97D54_gshared (Func_3_t42C2490DD9CE7DA0CE4FB2C849431C03440FC25F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<UnityEngine.Vector3,System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`3<!!0,System.Int32,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisKeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4_m1310466D36FFA01103046E3D99C5C9287DC8602A_gshared (RuntimeObject* ___source0, Func_3_t42C2490DD9CE7DA0CE4FB2C849431C03440FC25F * ___selector1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>,UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m1794C2B037D8081101DD37DC9792DA24D711DD83_gshared (Func_2_tC59AB1CCC7AC92484D8826D38DD0FF2302A1AD72 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<!!1,!!0>> System.Linq.Enumerable::GroupBy<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>,UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_GroupBy_TisKeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m65B1EAC83A69CA3B1DB514F25CEB6C70A2D70109_gshared (RuntimeObject* ___source0, Func_2_tC59AB1CCC7AC92484D8826D38DD0FF2302A1AD72 * ___keySelector1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB47F013C62B967199614B3D07228B381C0562448_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Int32 System.Linq.Enumerable::Count<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisKeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4_m2466243F42B476FCF4C613571E9DB923C5AA77D6_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m8B07FA74932434901F7245DE06D66CBFDE9211E7_gshared_inline (KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m7612B49A0C4765AB069FF3F0754E7B61C1A1F7C9_gshared (KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___key0, int32_t ___value1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  KeyValuePair_2_get_Key_mFF8D9FEFDF56EC6F38DA016CFEB6BD045AB7424B_gshared_inline (KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);

// System.Void System.Action`1<GoogleMobileAds.Api.InitializationStatus>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mF8C1B5DF0B4E4F770CA3C23E29816E18CB42E65E (Action_1_t0A77D06CC67DE106BDD92C7A0F81C626A0DCE1EC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t0A77D06CC67DE106BDD92C7A0F81C626A0DCE1EC *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.MobileAds::Initialize(System.Action`1<GoogleMobileAds.Api.InitializationStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_Initialize_mC0143F68C2436E9E811B1B57C94F593D8D762A2C (Action_1_t0A77D06CC67DE106BDD92C7A0F81C626A0DCE1EC * ___initCompleteAction0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186 (String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159 (String_t* ___key0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Pause_mC4F9932A77B6AA2CC3FB720721B7837CF57B675D (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, String_t* ___tag0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D (Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.UI.Slider::get_maxValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Slider_get_maxValue_m369FF59A4AEC91348D79BF1906F4012A2A850959_inline (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Slider>()
inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * Component_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mD501A27463515FA99A5A93A10E37F913696D20C4 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Collections.IEnumerator GoMain::openMain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GoMain_openMain_m14775FD7249CA687CD47A57423CAED8EC98DECF4 (GoMain_t0B63717C0640D5CC90F8D5DACB71B41B9C1C689E * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void GoMain/<openMain>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopenMainU3Ed__1__ctor_mD2FB2AE9E38EA44F141741544E9A4147C970C254 (U3CopenMainU3Ed__1_t69AB38CA5795F00E94DF56DA6CF21A50E7DE5C93 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator GoSettings::openSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GoSettings_openSettings_m4CBBA96549293152C0991BC9B6EB6FF6B6744691 (GoSettings_t6209533B8C3A73CA66078C2CE8DCB2DEF955046B * __this, const RuntimeMethod* method);
// System.Void GoSettings/<openSettings>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopenSettingsU3Ed__1__ctor_mFADF477A98A50F9F07B6FB00DA8F6A4660ADBA35 (U3CopenSettingsU3Ed__1_tBAD2D95ABD672BF8FD28BDB24632FEB74D60DC79 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InterstitialAd::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd__ctor_mFDB49B3A2243F679CAD8A10DBBB4563E41898695 (InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE * __this, String_t* ___adUnitId0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdRequest/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m3E3982296FE845A353342F1AD2EA2AD55419BC44 (Builder_tE84777248A236774AD5A97FB4AE44E033401CF6F * __this, const RuntimeMethod* method);
// GoogleMobileAds.Api.AdRequest GoogleMobileAds.Api.AdRequest/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdRequest_tCE1714026D97810808C3601F863ACBA404BE30E6 * Builder_Build_m2AA9F527B636620BB2438D6356808995F2C4B81F (Builder_tE84777248A236774AD5A97FB4AE44E033401CF6F * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InterstitialAd::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_LoadAd_mE7250260A90743E5D020CFC52965251135498042 (InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE * __this, AdRequest_tCE1714026D97810808C3601F863ACBA404BE30E6 * ___request0, const RuntimeMethod* method);
// System.Boolean GoogleMobileAds.Api.InterstitialAd::IsLoaded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InterstitialAd_IsLoaded_m5581AE8F936420BAD497C363CC9850D8D1BFE537_inline (InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InterstitialAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Show_mB00763252D2D89E8340F644BE6DCC6EC84EAE34F (InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986 (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<InterAd>()
inline InterAd_t5A773963518A93AAEA059120A9C89888FAA5FD88 * Component_GetComponent_TisInterAd_t5A773963518A93AAEA059120A9C89888FAA5FD88_m97727C238B4A1656CE47023857763F767A1BAF52 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  InterAd_t5A773963518A93AAEA059120A9C89888FAA5FD88 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void InterAd::ShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterAd_ShowAd_mD80DCD4F74B9DC295E0E368422F12B8232772F16 (InterAd_t5A773963518A93AAEA059120A9C89888FAA5FD88 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1 (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<PlayerMovement>()
inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<EatObjects>()
inline EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59 * GameObject_GetComponent_TisEatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59_m3828F1F8692F51BDD03DC033392E15CF1A6C9AEA (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MovePosition_mB3CBBF21FD0ABB88BC6C004B993DED25673001C7 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>()
inline RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* Component_GetComponentsInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m107B791DBC1E809192456359DFF8B8F45A84EAA1 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared)(__this, method);
}
// !!0 UnityEngine.Resources::Load<UnityEngine.Material>(System.String)
inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * Resources_Load_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m9408F72BD0D020C6C9E11C3D30F6236635CFA70F (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Material_t8927C00353A72755313F046D0CE85178AE8218EE * (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared)(___path0, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.Material>(!!0)
inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * Object_Instantiate_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_mC07ADBDB716BC6D4CF6F992C909CC51B6AE2EA84 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___original0, const RuntimeMethod* method)
{
	return ((  Material_t8927C00353A72755313F046D0CE85178AE8218EE * (*) (Material_t8927C00353A72755313F046D0CE85178AE8218EE *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Outline::LoadSmoothNormals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_LoadSmoothNormals_mFB754E2A4C59FC38911E42710BBF3587BF883133 (Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C * __this, const RuntimeMethod* method);
// UnityEngine.Material[] UnityEngine.Renderer::get_sharedMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* Renderer_get_sharedMaterials_m9B2D432CA8AD8CEC4348E61789CC1BB0C3A00AFD (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<UnityEngine.Material>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * Enumerable_ToList_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m43C5340CC3374708E58E874490622CAC2E56F54D (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Add(!0)
inline void List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10 (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *, Material_t8927C00353A72755313F046D0CE85178AE8218EE *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !0[] System.Collections.Generic.List`1<UnityEngine.Material>::ToArray()
inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* List_1_ToArray_m186505F66F97198D8539D9673736392642EE45CC (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * __this, const RuntimeMethod* method)
{
	return ((  MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* (*) (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_materials(UnityEngine.Material[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_materials_mF25CCE14D0F008A45DC73043BFF69113C485A629 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Mesh>::get_Count()
inline int32_t List_1_get_Count_mF86A27C4FC0596167E330736ED4DED4A4D3D5240_inline (List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<Outline/ListVector3>::get_Count()
inline int32_t List_1_get_Count_m906F937750ED10550FCE8131922C04E9CE31382C_inline (List_1_t9F8EE4C8A3A346268256352008972115DBB309C4 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9F8EE4C8A3A346268256352008972115DBB309C4 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Mesh>::Clear()
inline void List_1_Clear_mFAE27C6A844518FA4336625FCD287E488E2C589A (List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Outline/ListVector3>::Clear()
inline void List_1_Clear_mFC84E776E2A8EA97A5ED6D5D98DCDCC296A20D12 (List_1_t9F8EE4C8A3A346268256352008972115DBB309C4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9F8EE4C8A3A346268256352008972115DBB309C4 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void Outline::Bake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_Bake_m019CD5064FADC73098806E852F9C90B79A525507 (Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C * __this, const RuntimeMethod* method);
// System.Void Outline::UpdateMaterialProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_UpdateMaterialProperties_mCF8EA9ED70ECA89FD2858C8B8A16C4B461E4B661 (Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::Remove(!0)
inline bool List_1_Remove_m9323E388C78A56E957C70D7EB63DFA9A9B0034CC (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *, Material_t8927C00353A72755313F046D0CE85178AE8218EE *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.Mesh>::.ctor()
inline void HashSet_1__ctor_m15CF49CEF95BC0AA1A735A1FE615E80708543FDD (HashSet_1_t6DB0C7C5196A278593BA1C34741DE40A2A91111A * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t6DB0C7C5196A278593BA1C34741DE40A2A91111A *, const RuntimeMethod*))HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared)(__this, method);
}
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.MeshFilter>()
inline MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* Component_GetComponentsInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mE1AE2168916584FF463210C7511EDA0D2E79497F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Mesh>::Add(!0)
inline bool HashSet_1_Add_m70C05555F552E07D505B7B835DCD469B3DC405B7 (HashSet_1_t6DB0C7C5196A278593BA1C34741DE40A2A91111A * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t6DB0C7C5196A278593BA1C34741DE40A2A91111A *, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, const RuntimeMethod*))HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1<UnityEngine.Vector3> Outline::SmoothNormals(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * Outline_SmoothNormals_mBA606DE4D131BC4EA0901281E8489647DC22D16B (Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Mesh>::Add(!0)
inline void List_1_Add_mC8C3BDDA7361B15E8E1EDFF500B115B272FA0D73 (List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B *, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void Outline/ListVector3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListVector3__ctor_mF76D832454EF12AE1EF141AFB6CD7957134806E7 (ListVector3_t54AB46ECA91F943A5FE7817CA662D0D5B78617B9 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Outline/ListVector3>::Add(!0)
inline void List_1_Add_m10D6F548D885F821392BA54048F8A98FE9E55A37 (List_1_t9F8EE4C8A3A346268256352008972115DBB309C4 * __this, ListVector3_t54AB46ECA91F943A5FE7817CA662D0D5B78617B9 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9F8EE4C8A3A346268256352008972115DBB309C4 *, ListVector3_t54AB46ECA91F943A5FE7817CA662D0D5B78617B9 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Mesh>::IndexOf(!0)
inline int32_t List_1_IndexOf_mC9BE962224B76210C52FE15DC35D75CFC71FE132 (List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B *, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, const RuntimeMethod*))List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<Outline/ListVector3>::get_Item(System.Int32)
inline ListVector3_t54AB46ECA91F943A5FE7817CA662D0D5B78617B9 * List_1_get_Item_m9B97CDF92B380DB3B36AF2DC0114349DDE073678_inline (List_1_t9F8EE4C8A3A346268256352008972115DBB309C4 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ListVector3_t54AB46ECA91F943A5FE7817CA662D0D5B78617B9 * (*) (List_1_t9F8EE4C8A3A346268256352008972115DBB309C4 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUVs_m930BBB168BC46A7D03C0B460E571F3CF1B3D102D (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___uvs1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void Outline::CombineSubmeshes(UnityEngine.Mesh,UnityEngine.Material[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_CombineSubmeshes_m9FC6E641CFB0983E8BF912AAE72C9707C0D9C050 (Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh0, MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___materials1, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.SkinnedMeshRenderer>()
inline SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* Component_GetComponentsInChildren_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_mDC1EE7E2332C6862976FA026EB6ED1B3EB4E142D (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.SkinnedMeshRenderer::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * SkinnedMeshRenderer_get_sharedMesh_mFD55E307943C1C4B2E2E8632F15B41CCBD8D91F2 (SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mesh::get_vertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_vertexCount_m1EF3DD16EE298B955311F53EA1CAF05007A7722F (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_uv4(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv4_mB55669150888EEB5C7A69B89B6A11DFC3B869126 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* Mesh_get_vertices_mB7A79698792B3CBA0E7E6EACDA6C031E496FB595 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void System.Func`3<UnityEngine.Vector3,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m89C202C7F6D238631471FA9C3A4809F2DDE97D54 (Func_3_t42C2490DD9CE7DA0CE4FB2C849431C03440FC25F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t42C2490DD9CE7DA0CE4FB2C849431C03440FC25F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_m89C202C7F6D238631471FA9C3A4809F2DDE97D54_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<UnityEngine.Vector3,System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`3<!!0,System.Int32,!!1>)
inline RuntimeObject* Enumerable_Select_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisKeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4_m1310466D36FFA01103046E3D99C5C9287DC8602A (RuntimeObject* ___source0, Func_3_t42C2490DD9CE7DA0CE4FB2C849431C03440FC25F * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_3_t42C2490DD9CE7DA0CE4FB2C849431C03440FC25F *, const RuntimeMethod*))Enumerable_Select_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisKeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4_m1310466D36FFA01103046E3D99C5C9287DC8602A_gshared)(___source0, ___selector1, method);
}
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>,UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m1794C2B037D8081101DD37DC9792DA24D711DD83 (Func_2_tC59AB1CCC7AC92484D8826D38DD0FF2302A1AD72 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tC59AB1CCC7AC92484D8826D38DD0FF2302A1AD72 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m1794C2B037D8081101DD37DC9792DA24D711DD83_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<!!1,!!0>> System.Linq.Enumerable::GroupBy<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>,UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_GroupBy_TisKeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m65B1EAC83A69CA3B1DB514F25CEB6C70A2D70109 (RuntimeObject* ___source0, Func_2_tC59AB1CCC7AC92484D8826D38DD0FF2302A1AD72 * ___keySelector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tC59AB1CCC7AC92484D8826D38DD0FF2302A1AD72 *, const RuntimeMethod*))Enumerable_GroupBy_TisKeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m65B1EAC83A69CA3B1DB514F25CEB6C70A2D70109_gshared)(___source0, ___keySelector1, method);
}
// UnityEngine.Vector3[] UnityEngine.Mesh::get_normals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* Mesh_get_normals_m5212279CEF7538618C8BA884C9A7B976B32352B0 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_mB47F013C62B967199614B3D07228B381C0562448 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mB47F013C62B967199614B3D07228B381C0562448_gshared)(__this, ___collection0, method);
}
// System.Int32 System.Linq.Enumerable::Count<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>(System.Collections.Generic.IEnumerable`1<!!0>)
inline int32_t Enumerable_Count_TisKeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4_m2466243F42B476FCF4C613571E9DB923C5AA77D6 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisKeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4_m2466243F42B476FCF4C613571E9DB923C5AA77D6_gshared)(___source0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>::get_Value()
inline int32_t KeyValuePair_2_get_Value_m8B07FA74932434901F7245DE06D66CBFDE9211E7_inline (KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m8B07FA74932434901F7245DE06D66CBFDE9211E7_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, int32_t, const RuntimeMethod*))List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406_gshared)(__this, ___index0, ___value1, method);
}
// System.Int32 UnityEngine.Mesh::get_subMeshCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_subMeshCount_m60E2BCBFEEF21260C70D06EAEC3A2A51D80796FF (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_subMeshCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_subMeshCount_mF6F2199AE4FA096C1AE0CAD02E13B6FEA38C6283 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32[] UnityEngine.Mesh::get_triangles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* Mesh_get_triangles_mC599119151146317136B1E4C40A9110373286D5A (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::SetTriangles(System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetTriangles_m63AC07691EC9F9AE0C85FB01A8DDD1A45FE9349F (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___triangles0, int32_t ___submesh1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Mesh>::.ctor()
inline void List_1__ctor_mC231E09D7F26F0B1F61263B105FCD625F94AFB98 (List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Outline/ListVector3>::.ctor()
inline void List_1__ctor_mF81DE81521D3C4E4B736476E833E1B0C06839F2E (List_1_t9F8EE4C8A3A346268256352008972115DBB309C4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9F8EE4C8A3A346268256352008972115DBB309C4 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1 (int32_t ___button0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6 (const RuntimeMethod* method);
// System.Void PlayerMovement::followTouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_followTouch_m25D2288F48B20AF9B1D943BC5F770B1C6BE342D6 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method);
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F (int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_m996FADE2327B0A4412FF4A5179B8BABD9EB849BA (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// System.Collections.IEnumerator SpawnObjects::spawnObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnObjects_spawnObjects_m8A6C9833B8B0CFE9557B7D092D9775779C5B5D42 (SpawnObjects_t9F0D85B3A0340F19ADD6E0C793111837E2A84D92 * __this, const RuntimeMethod* method);
// System.Void SpawnObjects/<spawnObjects>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspawnObjectsU3Ed__4__ctor_mC8D5AD1C1CB6EDB2E6388E8973F793FE77FAA641 (U3CspawnObjectsU3Ed__4_t945068FD287B56AC269BED9B37B6105E926E1FFF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator StartGame::openGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StartGame_openGame_m83918FDF440CF2A84332F782FC2B6B4B3A3B7D28 (StartGame_tF6E1D3C7ABDCE571787D7EA637AD9B9F25C4D742 * __this, const RuntimeMethod* method);
// System.Void StartGame/<openGame>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopenGameU3Ed__1__ctor_m7737F905410E8B7795C684C6DA27CB9812014950 (U3CopenGameU3Ed__1_tA288DA1E7A707A635E041CE9EEF39A68687D4C6C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void AdInitialize/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7C057BC3F6E25E0DFD8E8644B74DFA74BC12CD6A (U3CU3Ec_t0C6FCE158CE02E8A0217EABA93CB69971C59AA10 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Outline/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF9B89AF9C89EBA2E177F233D3742EC6B9E783D67 (U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_m7612B49A0C4765AB069FF3F0754E7B61C1A1F7C9 (KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m7612B49A0C4765AB069FF3F0754E7B61C1A1F7C9_gshared)(__this, ___key0, ___value1, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>::get_Key()
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  KeyValuePair_2_get_Key_mFF8D9FEFDF56EC6F38DA016CFEB6BD045AB7424B_inline (KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4 * __this, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mFF8D9FEFDF56EC6F38DA016CFEB6BD045AB7424B_gshared_inline)(__this, method);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
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
// System.Void AdInitialize::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdInitialize_Awake_mF05D9E3A14F87C593E4632B715C9A10059CD43EF (AdInitialize_t80F51A9D34A4D4163C94F91B8F3B9884B88BBAED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mF8C1B5DF0B4E4F770CA3C23E29816E18CB42E65E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t0A77D06CC67DE106BDD92C7A0F81C626A0DCE1EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAwakeU3Eb__0_0_m043C46CCB459E4FD264B3115F68742BDC04F1D0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0C6FCE158CE02E8A0217EABA93CB69971C59AA10_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t0A77D06CC67DE106BDD92C7A0F81C626A0DCE1EC * G_B2_0 = NULL;
	Action_1_t0A77D06CC67DE106BDD92C7A0F81C626A0DCE1EC * G_B1_0 = NULL;
	{
		// MobileAds.Initialize(initStatus => { });
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t0C6FCE158CE02E8A0217EABA93CB69971C59AA10_il2cpp_TypeInfo_var);
		Action_1_t0A77D06CC67DE106BDD92C7A0F81C626A0DCE1EC * L_0 = ((U3CU3Ec_t0C6FCE158CE02E8A0217EABA93CB69971C59AA10_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0C6FCE158CE02E8A0217EABA93CB69971C59AA10_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		Action_1_t0A77D06CC67DE106BDD92C7A0F81C626A0DCE1EC * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t0C6FCE158CE02E8A0217EABA93CB69971C59AA10_il2cpp_TypeInfo_var);
		U3CU3Ec_t0C6FCE158CE02E8A0217EABA93CB69971C59AA10 * L_2 = ((U3CU3Ec_t0C6FCE158CE02E8A0217EABA93CB69971C59AA10_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0C6FCE158CE02E8A0217EABA93CB69971C59AA10_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_t0A77D06CC67DE106BDD92C7A0F81C626A0DCE1EC * L_3 = (Action_1_t0A77D06CC67DE106BDD92C7A0F81C626A0DCE1EC *)il2cpp_codegen_object_new(Action_1_t0A77D06CC67DE106BDD92C7A0F81C626A0DCE1EC_il2cpp_TypeInfo_var);
		Action_1__ctor_mF8C1B5DF0B4E4F770CA3C23E29816E18CB42E65E(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3CAwakeU3Eb__0_0_m043C46CCB459E4FD264B3115F68742BDC04F1D0F_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mF8C1B5DF0B4E4F770CA3C23E29816E18CB42E65E_RuntimeMethod_var);
		Action_1_t0A77D06CC67DE106BDD92C7A0F81C626A0DCE1EC * L_4 = L_3;
		((U3CU3Ec_t0C6FCE158CE02E8A0217EABA93CB69971C59AA10_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0C6FCE158CE02E8A0217EABA93CB69971C59AA10_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_4);
		G_B2_0 = L_4;
	}

IL_001f:
	{
		MobileAds_Initialize_mC0143F68C2436E9E811B1B57C94F593D8D762A2C(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AdInitialize::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdInitialize__ctor_m7CC18CC367B920B7460E51F9EE637194DAB1D2EE (AdInitialize_t80F51A9D34A4D4163C94F91B8F3B9884B88BBAED * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void BackgroundMusic::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundMusic_Awake_m31BF75D5481F04E7E470C1FEE1E0DBB132541E4C (BackgroundMusic_t49638A78B553108F8BB7BD3C6B8A49E2F284E626 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// firstObject = GameObject.FindGameObjectsWithTag("Sound");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, /*hidden argument*/NULL);
		__this->set_firstObject_5(L_0);
		// if (firstObject.Length == 0)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get_firstObject_5();
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0076;
		}
	}
	{
		// backgroundMusic = Instantiate(backgroundMusic);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_backgroundMusic_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_2, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		__this->set_backgroundMusic_4(L_3);
		// DontDestroyOnLoad(backgroundMusic.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_backgroundMusic_4();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_4, /*hidden argument*/NULL);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_5, /*hidden argument*/NULL);
		// if(PlayerPrefs.GetString("Music") == "Pause" || PlayerPrefs.GetString("Sound") == "Pause")
		String_t* L_6;
		L_6 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E, /*hidden argument*/NULL);
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0066;
		}
	}
	{
		String_t* L_8;
		L_8 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, /*hidden argument*/NULL);
		bool L_9;
		L_9 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, _stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0076;
		}
	}

IL_0066:
	{
		// backgroundMusic.GetComponent<AudioSource>().Pause();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_backgroundMusic_4();
		NullCheck(L_10);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_11;
		L_11 = GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53(L_10, /*hidden argument*/GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		NullCheck(L_11);
		AudioSource_Pause_mC4F9932A77B6AA2CC3FB720721B7837CF57B675D(L_11, /*hidden argument*/NULL);
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Void BackgroundMusic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundMusic__ctor_mFAF73BB5306195FC55C0A395C6FA4102359391FD (BackgroundMusic_t49638A78B553108F8BB7BD3C6B8A49E2F284E626 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ContinueGame::continueGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContinueGame_continueGame_m0A5242B616AD67F92E4753F1FF587E193B1ECB4F (ContinueGame_t55A91B157DDC0530D05BE4C029A8ED869752BCEE * __this, const RuntimeMethod* method)
{
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// gameCanvas.enabled = true;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_0 = __this->get_gameCanvas_4();
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, (bool)1, /*hidden argument*/NULL);
		// pauseCanvas.enabled = false;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_1 = __this->get_pauseCanvas_5();
		NullCheck(L_1);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ContinueGame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContinueGame__ctor_m30E82AF719C84AB108AABB775FE099388BA317B9 (ContinueGame_t55A91B157DDC0530D05BE4C029A8ED869752BCEE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DeleteObject::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeleteObject_OnTriggerEnter_mB02D7774DDB0F0F61304610D4A47A9CE16656FDA (DeleteObject_t89D240D1F166FAE38CF42ADA3F431C3548054B43 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!other.CompareTag("Player"))
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Destroy(other.gameObject);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_2 = ___other0;
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void DeleteObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeleteObject__ctor_m7920C019FE96EEEAC9E7297310969D37E48FEDE7 (DeleteObject_t89D240D1F166FAE38CF42ADA3F431C3548054B43 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void EatObjects::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EatObjects_Start_m22BC002FCDF34A6181215D0BF9A250916F9D4AA4 (EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerAudioSource = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0;
		L_0 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_playerAudioSource_11(L_0);
		// }
		return;
	}
}
// System.Void EatObjects::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EatObjects_OnCollisionEnter_mD60729BCC4B09FA030359C527644B38580B92D6C (EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Score_tE07CBD9780DFC212BE43719819F512E8861103C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16616D61D1F596C11D66025981D6CED3F79A8444);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54F48823060A5886D12558C4BBB0CDBB0E83F58A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral861A6F8EA2A41E5A089C8D74CE3D920CEEFCB378);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90965A2B2C5B2319664CD8D1B8111F63279D7E9B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A413535AF7521EBD97692F1A68AD7CFB59AD0C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA1735D7468D2238272D15660949A9C0ED4D3EC7);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// destroyableGameObject = collision.gameObject;
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D(L_0, /*hidden argument*/NULL);
		__this->set_destroyableGameObject_10(L_1);
		// switch (destroyableGameObject.tag)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_destroyableGameObject_10();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0108;
		}
	}
	{
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteralBA1735D7468D2238272D15660949A9C0ED4D3EC7, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_7, _stringLiteral9A413535AF7521EBD97692F1A68AD7CFB59AD0C6, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_9 = V_0;
		bool L_10;
		L_10 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_9, _stringLiteral861A6F8EA2A41E5A089C8D74CE3D920CEEFCB378, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_00b8;
		}
	}
	{
		String_t* L_11 = V_0;
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, _stringLiteral90965A2B2C5B2319664CD8D1B8111F63279D7E9B, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_0108;
	}

IL_005a:
	{
		// sliderScore += 1;
		float L_13 = ((EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59_StaticFields*)il2cpp_codegen_static_fields_for(EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59_il2cpp_TypeInfo_var))->get_sliderScore_4();
		((EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59_StaticFields*)il2cpp_codegen_static_fields_for(EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59_il2cpp_TypeInfo_var))->set_sliderScore_4(((float)il2cpp_codegen_add((float)L_13, (float)(1.0f))));
		// Score.nowScore += 2;
		int32_t L_14 = ((Score_tE07CBD9780DFC212BE43719819F512E8861103C7_StaticFields*)il2cpp_codegen_static_fields_for(Score_tE07CBD9780DFC212BE43719819F512E8861103C7_il2cpp_TypeInfo_var))->get_nowScore_4();
		((Score_tE07CBD9780DFC212BE43719819F512E8861103C7_StaticFields*)il2cpp_codegen_static_fields_for(Score_tE07CBD9780DFC212BE43719819F512E8861103C7_il2cpp_TypeInfo_var))->set_nowScore_4(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)2)));
		// playerAudioSource.clip = nomSound;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_15 = __this->get_playerAudioSource_11();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_16 = __this->get_nomSound_6();
		NullCheck(L_15);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_15, L_16, /*hidden argument*/NULL);
		// break;
		goto IL_0108;
	}

IL_0089:
	{
		// sliderScore += 5;
		float L_17 = ((EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59_StaticFields*)il2cpp_codegen_static_fields_for(EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59_il2cpp_TypeInfo_var))->get_sliderScore_4();
		((EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59_StaticFields*)il2cpp_codegen_static_fields_for(EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59_il2cpp_TypeInfo_var))->set_sliderScore_4(((float)il2cpp_codegen_add((float)L_17, (float)(5.0f))));
		// Score.nowScore ++;
		int32_t L_18 = ((Score_tE07CBD9780DFC212BE43719819F512E8861103C7_StaticFields*)il2cpp_codegen_static_fields_for(Score_tE07CBD9780DFC212BE43719819F512E8861103C7_il2cpp_TypeInfo_var))->get_nowScore_4();
		((Score_tE07CBD9780DFC212BE43719819F512E8861103C7_StaticFields*)il2cpp_codegen_static_fields_for(Score_tE07CBD9780DFC212BE43719819F512E8861103C7_il2cpp_TypeInfo_var))->set_nowScore_4(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)));
		// playerAudioSource.clip = biteAndChewingSound;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_19 = __this->get_playerAudioSource_11();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_20 = __this->get_biteAndChewingSound_7();
		NullCheck(L_19);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_19, L_20, /*hidden argument*/NULL);
		// break;
		goto IL_0108;
	}

IL_00b8:
	{
		// if (sliderScore >= 5)
		float L_21 = ((EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59_StaticFields*)il2cpp_codegen_static_fields_for(EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59_il2cpp_TypeInfo_var))->get_sliderScore_4();
		if ((!(((float)L_21) >= ((float)(5.0f)))))
		{
			goto IL_0108;
		}
	}
	{
		// sliderScore -= 5;
		float L_22 = ((EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59_StaticFields*)il2cpp_codegen_static_fields_for(EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59_il2cpp_TypeInfo_var))->get_sliderScore_4();
		((EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59_StaticFields*)il2cpp_codegen_static_fields_for(EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59_il2cpp_TypeInfo_var))->set_sliderScore_4(((float)il2cpp_codegen_subtract((float)L_22, (float)(5.0f))));
		// playerAudioSource.clip = belchingSound;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_23 = __this->get_playerAudioSource_11();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_24 = __this->get_belchingSound_8();
		NullCheck(L_23);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_23, L_24, /*hidden argument*/NULL);
		// break;
		goto IL_0108;
	}

IL_00e7:
	{
		// sliderScore = slider.maxValue;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_25 = __this->get_slider_5();
		NullCheck(L_25);
		float L_26;
		L_26 = Slider_get_maxValue_m369FF59A4AEC91348D79BF1906F4012A2A850959_inline(L_25, /*hidden argument*/NULL);
		((EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59_StaticFields*)il2cpp_codegen_static_fields_for(EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59_il2cpp_TypeInfo_var))->set_sliderScore_4(L_26);
		// playerAudioSource.clip = vomitSound;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_27 = __this->get_playerAudioSource_11();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_28 = __this->get_vomitSound_9();
		NullCheck(L_27);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_27, L_28, /*hidden argument*/NULL);
	}

IL_0108:
	{
		// if(PlayerPrefs.GetString("Sound") == "Play")
		String_t* L_29;
		L_29 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, /*hidden argument*/NULL);
		bool L_30;
		L_30 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_29, _stringLiteral54F48823060A5886D12558C4BBB0CDBB0E83F58A, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0129;
		}
	}
	{
		// playerAudioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_31 = __this->get_playerAudioSource_11();
		NullCheck(L_31);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_31, /*hidden argument*/NULL);
	}

IL_0129:
	{
		// if(destroyableGameObject.tag != "Frame")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = __this->get_destroyableGameObject_10();
		NullCheck(L_32);
		String_t* L_33;
		L_33 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_32, /*hidden argument*/NULL);
		bool L_34;
		L_34 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_33, _stringLiteral16616D61D1F596C11D66025981D6CED3F79A8444, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_014b;
		}
	}
	{
		// Destroy(destroyableGameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = __this->get_destroyableGameObject_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_35, /*hidden argument*/NULL);
	}

IL_014b:
	{
		// slider.SetValueWithoutNotify(sliderScore);
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_36 = __this->get_slider_5();
		float L_37 = ((EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59_StaticFields*)il2cpp_codegen_static_fields_for(EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59_il2cpp_TypeInfo_var))->get_sliderScore_4();
		NullCheck(L_36);
		VirtActionInvoker1< float >::Invoke(48 /* System.Void UnityEngine.UI.Slider::SetValueWithoutNotify(System.Single) */, L_36, L_37);
		// }
		return;
	}
}
// System.Void EatObjects::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EatObjects__ctor_m17B3D6DEAEA609981CB1538A4C8576DC11630849 (EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void FullSlider::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FullSlider_Awake_m9B2E4B3197FF55C68E9109CBBECEB3A51972D9B9 (FullSlider_tCDC43C3BFD0463537A5A8DCEAFFCE1A760C54A72 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mD501A27463515FA99A5A93A10E37F913696D20C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// slider = GetComponent<Slider>();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0;
		L_0 = Component_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mD501A27463515FA99A5A93A10E37F913696D20C4(__this, /*hidden argument*/Component_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mD501A27463515FA99A5A93A10E37F913696D20C4_RuntimeMethod_var);
		__this->set_slider_4(L_0);
		// }
		return;
	}
}
// System.Void FullSlider::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FullSlider_Update_m80CCD4593B2952EF1C178EC72BEEE6086B7F0A5D (FullSlider_tCDC43C3BFD0463537A5A8DCEAFFCE1A760C54A72 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74B83A50A58269C4EECA165C2ABB62B80AAFC9D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD61A403A62E3B406C2482F9CD3ABA7CF782E649C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(slider.value == slider.maxValue)
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_slider_4();
		NullCheck(L_0);
		float L_1;
		L_1 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_2 = __this->get_slider_4();
		NullCheck(L_2);
		float L_3;
		L_3 = Slider_get_maxValue_m369FF59A4AEC91348D79BF1906F4012A2A850959_inline(L_2, /*hidden argument*/NULL);
		if ((!(((float)L_1) == ((float)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		// PlayerPrefs.SetString("Lose", "Yes");
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral74B83A50A58269C4EECA165C2ABB62B80AAFC9D0, _stringLiteralD61A403A62E3B406C2482F9CD3ABA7CF782E649C, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void FullSlider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FullSlider__ctor_m73E0FAF073632472F9EE413148F842F495724085 (FullSlider_tCDC43C3BFD0463537A5A8DCEAFFCE1A760C54A72 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GoMain::goMain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoMain_goMain_mEC144B88EE4448B3E88A00AA4E6457E866954999 (GoMain_t0B63717C0640D5CC90F8D5DACB71B41B9C1C689E * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(openMain());
		RuntimeObject* L_0;
		L_0 = GoMain_openMain_m14775FD7249CA687CD47A57423CAED8EC98DECF4(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GoMain::openMain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GoMain_openMain_m14775FD7249CA687CD47A57423CAED8EC98DECF4 (GoMain_t0B63717C0640D5CC90F8D5DACB71B41B9C1C689E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CopenMainU3Ed__1_t69AB38CA5795F00E94DF56DA6CF21A50E7DE5C93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CopenMainU3Ed__1_t69AB38CA5795F00E94DF56DA6CF21A50E7DE5C93 * L_0 = (U3CopenMainU3Ed__1_t69AB38CA5795F00E94DF56DA6CF21A50E7DE5C93 *)il2cpp_codegen_object_new(U3CopenMainU3Ed__1_t69AB38CA5795F00E94DF56DA6CF21A50E7DE5C93_il2cpp_TypeInfo_var);
		U3CopenMainU3Ed__1__ctor_mD2FB2AE9E38EA44F141741544E9A4147C970C254(L_0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void GoMain::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoMain__ctor_m0566CB0EE17C3AEEE42CAD9C685B2FA5B9F0AC2F (GoMain_t0B63717C0640D5CC90F8D5DACB71B41B9C1C689E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GoSettings::goSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoSettings_goSettings_m14EB443026E8211E33A4EA7950CEEB370FCEFDFE (GoSettings_t6209533B8C3A73CA66078C2CE8DCB2DEF955046B * __this, const RuntimeMethod* method)
{
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// StartCoroutine(openSettings());
		RuntimeObject* L_0;
		L_0 = GoSettings_openSettings_m4CBBA96549293152C0991BC9B6EB6FF6B6744691(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GoSettings::openSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GoSettings_openSettings_m4CBBA96549293152C0991BC9B6EB6FF6B6744691 (GoSettings_t6209533B8C3A73CA66078C2CE8DCB2DEF955046B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CopenSettingsU3Ed__1_tBAD2D95ABD672BF8FD28BDB24632FEB74D60DC79_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CopenSettingsU3Ed__1_tBAD2D95ABD672BF8FD28BDB24632FEB74D60DC79 * L_0 = (U3CopenSettingsU3Ed__1_tBAD2D95ABD672BF8FD28BDB24632FEB74D60DC79 *)il2cpp_codegen_object_new(U3CopenSettingsU3Ed__1_tBAD2D95ABD672BF8FD28BDB24632FEB74D60DC79_il2cpp_TypeInfo_var);
		U3CopenSettingsU3Ed__1__ctor_mFADF477A98A50F9F07B6FB00DA8F6A4660ADBA35(L_0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void GoSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoSettings__ctor_m0D68B2351C62410E8022BA02E8F4B68AA06A11C8 (GoSettings_t6209533B8C3A73CA66078C2CE8DCB2DEF955046B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void InterAd::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterAd_OnEnable_m257AAF58DACB7BC55300527467A5D5021BC704F3 (InterAd_t5A773963518A93AAEA059120A9C89888FAA5FD88 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_tE84777248A236774AD5A97FB4AE44E033401CF6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdRequest_tCE1714026D97810808C3601F863ACBA404BE30E6 * V_0 = NULL;
	{
		// interstitialAd = new InterstitialAd(interstitialUnitId);
		String_t* L_0 = __this->get_interstitialUnitId_5();
		InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE * L_1 = (InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE *)il2cpp_codegen_object_new(InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE_il2cpp_TypeInfo_var);
		InterstitialAd__ctor_mFDB49B3A2243F679CAD8A10DBBB4563E41898695(L_1, L_0, /*hidden argument*/NULL);
		__this->set_interstitialAd_4(L_1);
		// AdRequest adRequest = new AdRequest.Builder().Build();
		Builder_tE84777248A236774AD5A97FB4AE44E033401CF6F * L_2 = (Builder_tE84777248A236774AD5A97FB4AE44E033401CF6F *)il2cpp_codegen_object_new(Builder_tE84777248A236774AD5A97FB4AE44E033401CF6F_il2cpp_TypeInfo_var);
		Builder__ctor_m3E3982296FE845A353342F1AD2EA2AD55419BC44(L_2, /*hidden argument*/NULL);
		NullCheck(L_2);
		AdRequest_tCE1714026D97810808C3601F863ACBA404BE30E6 * L_3;
		L_3 = Builder_Build_m2AA9F527B636620BB2438D6356808995F2C4B81F(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// interstitialAd.LoadAd(adRequest);
		InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE * L_4 = __this->get_interstitialAd_4();
		AdRequest_tCE1714026D97810808C3601F863ACBA404BE30E6 * L_5 = V_0;
		NullCheck(L_4);
		InterstitialAd_LoadAd_mE7250260A90743E5D020CFC52965251135498042(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InterAd::ShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterAd_ShowAd_mD80DCD4F74B9DC295E0E368422F12B8232772F16 (InterAd_t5A773963518A93AAEA059120A9C89888FAA5FD88 * __this, const RuntimeMethod* method)
{
	{
		// if(interstitialAd.IsLoaded())
		InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE * L_0 = __this->get_interstitialAd_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterstitialAd_IsLoaded_m5581AE8F936420BAD497C363CC9850D8D1BFE537_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// interstitialAd.Show();
		InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE * L_2 = __this->get_interstitialAd_4();
		NullCheck(L_2);
		InterstitialAd_Show_mB00763252D2D89E8340F644BE6DCC6EC84EAE34F(L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void InterAd::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterAd__ctor_mA38A3DC7BE61BD7D140BB712B9C1020770DAD92E (InterAd_t5A773963518A93AAEA059120A9C89888FAA5FD88 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE127DCEFA21E4A7641EB443FC55F10CC7ECA11F0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string interstitialUnitId = "ca-app-pub-3294866485300695/1711760977";
		__this->set_interstitialUnitId_5(_stringLiteralE127DCEFA21E4A7641EB443FC55F10CC7ECA11F0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void IsScoreTheBest::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsScoreTheBest_Update_m5B927DAE7D904F3305E7EB692C0E7420B1C7F480 (IsScoreTheBest_tFA0A67B3351B900A4B5B224B08E165D6B7D9FC2F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2836C4BD096C15E3950A1067EE91089553AC1D38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// nowScore = PlayerPrefs.GetInt("Score");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3, /*hidden argument*/NULL);
		__this->set_nowScore_4(L_0);
		// theBestScore = PlayerPrefs.GetInt("TheBestScore");
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral2836C4BD096C15E3950A1067EE91089553AC1D38, /*hidden argument*/NULL);
		__this->set_theBestScore_5(L_1);
		// if ( theBestScore <= nowScore)
		int32_t L_2 = __this->get_theBestScore_5();
		int32_t L_3 = __this->get_nowScore_4();
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_003e;
		}
	}
	{
		// PlayerPrefs.SetInt("TheBestScore", nowScore);
		int32_t L_4 = __this->get_nowScore_4();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral2836C4BD096C15E3950A1067EE91089553AC1D38, L_4, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void IsScoreTheBest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsScoreTheBest__ctor_m21621DECA543E056B092F50A8731A6BB5BD19FDF (IsScoreTheBest_tFA0A67B3351B900A4B5B224B08E165D6B7D9FC2F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Lose::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lose_Start_mFBF6AF8AAECEDAF6A6ACC88CAED93C46448D8F7A (Lose_tA2735DCC5FAF5A3E41A4EA67943D385CBDB829A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisInterAd_t5A773963518A93AAEA059120A9C89888FAA5FD88_m97727C238B4A1656CE47023857763F767A1BAF52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DC2584792757C5ED1336B48E1592A637E15C574);
		s_Il2CppMethodInitialized = true;
	}
	{
		// countLoses = PlayerPrefs.GetInt("CountLoses");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral1DC2584792757C5ED1336B48E1592A637E15C574, /*hidden argument*/NULL);
		__this->set_countLoses_12(L_0);
		// interAd = GetComponent<InterAd>();
		InterAd_t5A773963518A93AAEA059120A9C89888FAA5FD88 * L_1;
		L_1 = Component_GetComponent_TisInterAd_t5A773963518A93AAEA059120A9C89888FAA5FD88_m97727C238B4A1656CE47023857763F767A1BAF52(__this, /*hidden argument*/Component_GetComponent_TisInterAd_t5A773963518A93AAEA059120A9C89888FAA5FD88_m97727C238B4A1656CE47023857763F767A1BAF52_RuntimeMethod_var);
		__this->set_interAd_11(L_1);
		// }
		return;
	}
}
// System.Void Lose::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lose_Update_mBBCB547BC3FAD59061845BE294DA2D195E02CE1A (Lose_tA2735DCC5FAF5A3E41A4EA67943D385CBDB829A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59_m3828F1F8692F51BDD03DC033392E15CF1A6C9AEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0433F6570843C95AF47B32CFA3708E95BEAF8B86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B70D101AD4A949E170B30F45B34E4CB6DEFA094);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DC2584792757C5ED1336B48E1592A637E15C574);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2836C4BD096C15E3950A1067EE91089553AC1D38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74B83A50A58269C4EECA165C2ABB62B80AAFC9D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD61A403A62E3B406C2482F9CD3ABA7CF782E649C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (PlayerPrefs.GetString("Lose") == "Yes" && !isLost)
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral74B83A50A58269C4EECA165C2ABB62B80AAFC9D0, /*hidden argument*/NULL);
		bool L_1;
		L_1 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, _stringLiteralD61A403A62E3B406C2482F9CD3ABA7CF782E649C, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0117;
		}
	}
	{
		bool L_2 = __this->get_isLost_10();
		if (L_2)
		{
			goto IL_0117;
		}
	}
	{
		// countLoses++;
		int32_t L_3 = __this->get_countLoses_12();
		__this->set_countLoses_12(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		// PlayerPrefs.SetInt("CountLoses",countLoses);
		int32_t L_4 = __this->get_countLoses_12();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral1DC2584792757C5ED1336B48E1592A637E15C574, L_4, /*hidden argument*/NULL);
		// if(countLoses % 5 == 0)
		int32_t L_5 = __this->get_countLoses_12();
		if (((int32_t)((int32_t)L_5%(int32_t)5)))
		{
			goto IL_0057;
		}
	}
	{
		// interAd.ShowAd();
		InterAd_t5A773963518A93AAEA059120A9C89888FAA5FD88 * L_6 = __this->get_interAd_11();
		NullCheck(L_6);
		InterAd_ShowAd_mD80DCD4F74B9DC295E0E368422F12B8232772F16(L_6, /*hidden argument*/NULL);
	}

IL_0057:
	{
		// gameCanvas.GetComponent<Canvas>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_gameCanvas_4();
		NullCheck(L_7);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_8;
		L_8 = GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027(L_7, /*hidden argument*/GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027_RuntimeMethod_var);
		NullCheck(L_8);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_8, (bool)0, /*hidden argument*/NULL);
		// spawnPosition.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_spawnPosition_6();
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)0, /*hidden argument*/NULL);
		// loseCanvas.GetComponent<Canvas>().enabled =true ;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_loseCanvas_5();
		NullCheck(L_10);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_11;
		L_11 = GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027(L_10, /*hidden argument*/GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027_RuntimeMethod_var);
		NullCheck(L_11);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_11, (bool)1, /*hidden argument*/NULL);
		// player.GetComponent<Collider>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_player_7();
		NullCheck(L_12);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_13;
		L_13 = GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08(L_12, /*hidden argument*/GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08_RuntimeMethod_var);
		NullCheck(L_13);
		Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1(L_13, (bool)0, /*hidden argument*/NULL);
		// player.GetComponent<PlayerMovement>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_player_7();
		NullCheck(L_14);
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_15;
		L_15 = GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372(L_14, /*hidden argument*/GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		NullCheck(L_15);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_15, (bool)0, /*hidden argument*/NULL);
		// player.GetComponent<EatObjects>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_player_7();
		NullCheck(L_16);
		EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59 * L_17;
		L_17 = GameObject_GetComponent_TisEatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59_m3828F1F8692F51BDD03DC033392E15CF1A6C9AEA(L_16, /*hidden argument*/GameObject_GetComponent_TisEatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59_m3828F1F8692F51BDD03DC033392E15CF1A6C9AEA_RuntimeMethod_var);
		NullCheck(L_17);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_17, (bool)0, /*hidden argument*/NULL);
		// nowScore.text = "Your score for now: \n <color=#FF0000>" + PlayerPrefs.GetInt("Score") +"</color>" ;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_18 = __this->get_nowScore_8();
		int32_t L_19;
		L_19 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3, /*hidden argument*/NULL);
		V_0 = L_19;
		String_t* L_20;
		L_20 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_21;
		L_21 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral0433F6570843C95AF47B32CFA3708E95BEAF8B86, L_20, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2, /*hidden argument*/NULL);
		NullCheck(L_18);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, L_21);
		// theBestScore.text = "The best score: \n<color=#FF0000>" + PlayerPrefs.GetInt("TheBestScore") +"</color>" ;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_22 = __this->get_theBestScore_9();
		int32_t L_23;
		L_23 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral2836C4BD096C15E3950A1067EE91089553AC1D38, /*hidden argument*/NULL);
		V_0 = L_23;
		String_t* L_24;
		L_24 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_25;
		L_25 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral0B70D101AD4A949E170B30F45B34E4CB6DEFA094, L_24, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2, /*hidden argument*/NULL);
		NullCheck(L_22);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_22, L_25);
		// isLost = true;
		__this->set_isLost_10((bool)1);
	}

IL_0117:
	{
		// }
		return;
	}
}
// System.Void Lose::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lose__ctor_mF6BCC9AD201B0172E6F1FC236EC7CD9D50F0588D (Lose_tA2735DCC5FAF5A3E41A4EA67943D385CBDB829A3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MoveObjects::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveObjects_Start_m76F9612A8B80ACC19F89D725F8CBCA22B287BE53 (MoveObjects_tB029315F8177388C53ADAAAB845FB42D212A3BAD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// objectRigidbody = GetComponent<Rigidbody>();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0;
		L_0 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		__this->set_objectRigidbody_5(L_0);
		// }
		return;
	}
}
// System.Void MoveObjects::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveObjects_FixedUpdate_m7C69217C2C3FA02A66CF9EAC93A13BD56BF00EC2 (MoveObjects_tB029315F8177388C53ADAAAB845FB42D212A3BAD * __this, const RuntimeMethod* method)
{
	{
		// objectRigidbody.MovePosition(transform.position + (-transform.forward * Time.deltaTime * movementSpeed));
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_objectRigidbody_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_4, /*hidden argument*/NULL);
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_5, L_6, /*hidden argument*/NULL);
		float L_8 = __this->get_movementSpeed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_7, L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_2, L_9, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody_MovePosition_mB3CBBF21FD0ABB88BC6C004B993DED25673001C7(L_0, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoveObjects::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveObjects__ctor_m0C5C53343F7E7635400AAC4FB86D62DBEB3231A1 (MoveObjects_tB029315F8177388C53ADAAAB845FB42D212A3BAD * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private float movementSpeed = 10f;
		__this->set_movementSpeed_4((10.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// Outline/Mode Outline::get_OutlineMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Outline_get_OutlineMode_m84128693B4F2615AAF63451D01FD28B97E947EB9 (Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C * __this, const RuntimeMethod* method)
{
	{
		// get { return outlineMode; }
		int32_t L_0 = __this->get_outlineMode_5();
		return L_0;
	}
}
// System.Void Outline::set_OutlineMode(Outline/Mode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_set_OutlineMode_mB7EAFF3D2A8E32809535C46CC80AB637A2902E4F (Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// outlineMode = value;
		int32_t L_0 = ___value0;
		__this->set_outlineMode_5(L_0);
		// needsUpdate = true;
		__this->set_needsUpdate_14((bool)1);
		// }
		return;
	}
}
// UnityEngine.Color Outline::get_OutlineColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Outline_get_OutlineColor_m008CA3063D8B25FDEB48143FB21237A44E247ED6 (Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C * __this, const RuntimeMethod* method)
{
	{
		// get { return outlineColor; }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_outlineColor_6();
		return L_0;
	}
}
// System.Void Outline::set_OutlineColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_set_OutlineColor_mF074F73E4A9AA1AD657E1A7F35B37716B1B8B33B (Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method)
{
	{
		// outlineColor = value;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___value0;
		__this->set_outlineColor_6(L_0);
		// needsUpdate = true;
		__this->set_needsUpdate_14((bool)1);
		// }
		return;
	}
}
// System.Single Outline::get_OutlineWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Outline_get_OutlineWidth_mAE5F75171EBC14FB5C8C9AE6326DC20C1AB18E45 (Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C * __this, const RuntimeMethod* method)
{
	{
		// get { return outlineWidth; }
		float L_0 = __this->get_outlineWidth_7();
		return L_0;
	}
}
// System.Void Outline::set_OutlineWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_set_OutlineWidth_mEB7FC638E991719260DF1886326E68C3430BBC38 (Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// outlineWidth = value;
		float L_0 = ___value0;
		__this->set_outlineWidth_7(L_0);
		// needsUpdate = true;
		__this->set_needsUpdate_14((bool)1);
		// }
		return;
	}
}
// System.Void Outline::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_Awake_mF9585AC420BAF42876EBF7046F81B4C5E79BC407 (Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m107B791DBC1E809192456359DFF8B8F45A84EAA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_mC07ADBDB716BC6D4CF6F992C909CC51B6AE2EA84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m9408F72BD0D020C6C9E11C3D30F6236635CFA70F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B80EC501660F58EEF712988576EF146A948FB9B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral271508EA05E62BBDBE53A237D9122FF3E010A315);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3932DA3D302FFEF5EF82496DE74CC30F03E8C3BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63D30199207595D4F227CD3E39E842CAA71183E0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// renderers = GetComponentsInChildren<Renderer>();
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_0;
		L_0 = Component_GetComponentsInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m107B791DBC1E809192456359DFF8B8F45A84EAA1(__this, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m107B791DBC1E809192456359DFF8B8F45A84EAA1_RuntimeMethod_var);
		__this->set_renderers_11(L_0);
		// outlineMaskMaterial = Instantiate(Resources.Load<Material>(@"Materials/OutlineMask"));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1;
		L_1 = Resources_Load_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m9408F72BD0D020C6C9E11C3D30F6236635CFA70F(_stringLiteral271508EA05E62BBDBE53A237D9122FF3E010A315, /*hidden argument*/Resources_Load_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m9408F72BD0D020C6C9E11C3D30F6236635CFA70F_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2;
		L_2 = Object_Instantiate_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_mC07ADBDB716BC6D4CF6F992C909CC51B6AE2EA84(L_1, /*hidden argument*/Object_Instantiate_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_mC07ADBDB716BC6D4CF6F992C909CC51B6AE2EA84_RuntimeMethod_var);
		__this->set_outlineMaskMaterial_12(L_2);
		// outlineFillMaterial = Instantiate(Resources.Load<Material>(@"Materials/OutlineFill"));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3;
		L_3 = Resources_Load_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m9408F72BD0D020C6C9E11C3D30F6236635CFA70F(_stringLiteral3932DA3D302FFEF5EF82496DE74CC30F03E8C3BC, /*hidden argument*/Resources_Load_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m9408F72BD0D020C6C9E11C3D30F6236635CFA70F_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4;
		L_4 = Object_Instantiate_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_mC07ADBDB716BC6D4CF6F992C909CC51B6AE2EA84(L_3, /*hidden argument*/Object_Instantiate_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_mC07ADBDB716BC6D4CF6F992C909CC51B6AE2EA84_RuntimeMethod_var);
		__this->set_outlineFillMaterial_13(L_4);
		// outlineMaskMaterial.name = "OutlineMask (Instance)";
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = __this->get_outlineMaskMaterial_12();
		NullCheck(L_5);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_5, _stringLiteral63D30199207595D4F227CD3E39E842CAA71183E0, /*hidden argument*/NULL);
		// outlineFillMaterial.name = "OutlineFill (Instance)";
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6 = __this->get_outlineFillMaterial_13();
		NullCheck(L_6);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_6, _stringLiteral0B80EC501660F58EEF712988576EF146A948FB9B, /*hidden argument*/NULL);
		// LoadSmoothNormals();
		Outline_LoadSmoothNormals_mFB754E2A4C59FC38911E42710BBF3587BF883133(__this, /*hidden argument*/NULL);
		// needsUpdate = true;
		__this->set_needsUpdate_14((bool)1);
		// }
		return;
	}
}
// System.Void Outline::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_OnEnable_m331032B6C72851F8C46A15A53A97D09ED5FA0C14 (Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m43C5340CC3374708E58E874490622CAC2E56F54D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m186505F66F97198D8539D9673736392642EE45CC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * V_2 = NULL;
	{
		// foreach (var renderer in renderers) {
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_0 = __this->get_renderers_11();
		V_0 = L_0;
		V_1 = 0;
		goto IL_0041;
	}

IL_000b:
	{
		// foreach (var renderer in renderers) {
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// var materials = renderer.sharedMaterials.ToList();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_5 = L_4;
		NullCheck(L_5);
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_6;
		L_6 = Renderer_get_sharedMaterials_m9B2D432CA8AD8CEC4348E61789CC1BB0C3A00AFD(L_5, /*hidden argument*/NULL);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_7;
		L_7 = Enumerable_ToList_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m43C5340CC3374708E58E874490622CAC2E56F54D((RuntimeObject*)(RuntimeObject*)L_6, /*hidden argument*/Enumerable_ToList_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m43C5340CC3374708E58E874490622CAC2E56F54D_RuntimeMethod_var);
		V_2 = L_7;
		// materials.Add(outlineMaskMaterial);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_8 = V_2;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = __this->get_outlineMaskMaterial_12();
		NullCheck(L_8);
		List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10(L_8, L_9, /*hidden argument*/List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10_RuntimeMethod_var);
		// materials.Add(outlineFillMaterial);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_10 = V_2;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = __this->get_outlineFillMaterial_13();
		NullCheck(L_10);
		List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10(L_10, L_11, /*hidden argument*/List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10_RuntimeMethod_var);
		// renderer.materials = materials.ToArray();
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_12 = V_2;
		NullCheck(L_12);
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_13;
		L_13 = List_1_ToArray_m186505F66F97198D8539D9673736392642EE45CC(L_12, /*hidden argument*/List_1_ToArray_m186505F66F97198D8539D9673736392642EE45CC_RuntimeMethod_var);
		NullCheck(L_5);
		Renderer_set_materials_mF25CCE14D0F008A45DC73043BFF69113C485A629(L_5, L_13, /*hidden argument*/NULL);
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0041:
	{
		// foreach (var renderer in renderers) {
		int32_t L_15 = V_1;
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Outline::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_OnValidate_m5225A6B523BE9405D59796796D11B44AF1053E78 (Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mFAE27C6A844518FA4336625FCD287E488E2C589A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mFC84E776E2A8EA97A5ED6D5D98DCDCC296A20D12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m906F937750ED10550FCE8131922C04E9CE31382C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF86A27C4FC0596167E330736ED4DED4A4D3D5240_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// needsUpdate = true;
		__this->set_needsUpdate_14((bool)1);
		// if (!precomputeOutline && bakeKeys.Count != 0 || bakeKeys.Count != bakeValues.Count) {
		bool L_0 = __this->get_precomputeOutline_8();
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * L_1 = __this->get_bakeKeys_9();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mF86A27C4FC0596167E330736ED4DED4A4D3D5240_inline(L_1, /*hidden argument*/List_1_get_Count_mF86A27C4FC0596167E330736ED4DED4A4D3D5240_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0034;
		}
	}

IL_001c:
	{
		List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * L_3 = __this->get_bakeKeys_9();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mF86A27C4FC0596167E330736ED4DED4A4D3D5240_inline(L_3, /*hidden argument*/List_1_get_Count_mF86A27C4FC0596167E330736ED4DED4A4D3D5240_RuntimeMethod_var);
		List_1_t9F8EE4C8A3A346268256352008972115DBB309C4 * L_5 = __this->get_bakeValues_10();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m906F937750ED10550FCE8131922C04E9CE31382C_inline(L_5, /*hidden argument*/List_1_get_Count_m906F937750ED10550FCE8131922C04E9CE31382C_RuntimeMethod_var);
		if ((((int32_t)L_4) == ((int32_t)L_6)))
		{
			goto IL_004a;
		}
	}

IL_0034:
	{
		// bakeKeys.Clear();
		List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * L_7 = __this->get_bakeKeys_9();
		NullCheck(L_7);
		List_1_Clear_mFAE27C6A844518FA4336625FCD287E488E2C589A(L_7, /*hidden argument*/List_1_Clear_mFAE27C6A844518FA4336625FCD287E488E2C589A_RuntimeMethod_var);
		// bakeValues.Clear();
		List_1_t9F8EE4C8A3A346268256352008972115DBB309C4 * L_8 = __this->get_bakeValues_10();
		NullCheck(L_8);
		List_1_Clear_mFC84E776E2A8EA97A5ED6D5D98DCDCC296A20D12(L_8, /*hidden argument*/List_1_Clear_mFC84E776E2A8EA97A5ED6D5D98DCDCC296A20D12_RuntimeMethod_var);
	}

IL_004a:
	{
		// if (precomputeOutline && bakeKeys.Count == 0) {
		bool L_9 = __this->get_precomputeOutline_8();
		if (!L_9)
		{
			goto IL_0065;
		}
	}
	{
		List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * L_10 = __this->get_bakeKeys_9();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_mF86A27C4FC0596167E330736ED4DED4A4D3D5240_inline(L_10, /*hidden argument*/List_1_get_Count_mF86A27C4FC0596167E330736ED4DED4A4D3D5240_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0065;
		}
	}
	{
		// Bake();
		Outline_Bake_m019CD5064FADC73098806E852F9C90B79A525507(__this, /*hidden argument*/NULL);
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void Outline::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_Update_mDA15E9149809C9EBDA3338FB680F4F185A478636 (Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C * __this, const RuntimeMethod* method)
{
	{
		// if (needsUpdate) {
		bool L_0 = __this->get_needsUpdate_14();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// needsUpdate = false;
		__this->set_needsUpdate_14((bool)0);
		// UpdateMaterialProperties();
		Outline_UpdateMaterialProperties_mCF8EA9ED70ECA89FD2858C8B8A16C4B461E4B661(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Outline::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_OnDisable_m204097689544023D8993862016D1ED123B4E1260 (Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m43C5340CC3374708E58E874490622CAC2E56F54D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m9323E388C78A56E957C70D7EB63DFA9A9B0034CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m186505F66F97198D8539D9673736392642EE45CC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * V_2 = NULL;
	{
		// foreach (var renderer in renderers) {
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_0 = __this->get_renderers_11();
		V_0 = L_0;
		V_1 = 0;
		goto IL_0043;
	}

IL_000b:
	{
		// foreach (var renderer in renderers) {
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// var materials = renderer.sharedMaterials.ToList();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_5 = L_4;
		NullCheck(L_5);
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_6;
		L_6 = Renderer_get_sharedMaterials_m9B2D432CA8AD8CEC4348E61789CC1BB0C3A00AFD(L_5, /*hidden argument*/NULL);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_7;
		L_7 = Enumerable_ToList_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m43C5340CC3374708E58E874490622CAC2E56F54D((RuntimeObject*)(RuntimeObject*)L_6, /*hidden argument*/Enumerable_ToList_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m43C5340CC3374708E58E874490622CAC2E56F54D_RuntimeMethod_var);
		V_2 = L_7;
		// materials.Remove(outlineMaskMaterial);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_8 = V_2;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = __this->get_outlineMaskMaterial_12();
		NullCheck(L_8);
		bool L_10;
		L_10 = List_1_Remove_m9323E388C78A56E957C70D7EB63DFA9A9B0034CC(L_8, L_9, /*hidden argument*/List_1_Remove_m9323E388C78A56E957C70D7EB63DFA9A9B0034CC_RuntimeMethod_var);
		// materials.Remove(outlineFillMaterial);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_11 = V_2;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = __this->get_outlineFillMaterial_13();
		NullCheck(L_11);
		bool L_13;
		L_13 = List_1_Remove_m9323E388C78A56E957C70D7EB63DFA9A9B0034CC(L_11, L_12, /*hidden argument*/List_1_Remove_m9323E388C78A56E957C70D7EB63DFA9A9B0034CC_RuntimeMethod_var);
		// renderer.materials = materials.ToArray();
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_14 = V_2;
		NullCheck(L_14);
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_15;
		L_15 = List_1_ToArray_m186505F66F97198D8539D9673736392642EE45CC(L_14, /*hidden argument*/List_1_ToArray_m186505F66F97198D8539D9673736392642EE45CC_RuntimeMethod_var);
		NullCheck(L_5);
		Renderer_set_materials_mF25CCE14D0F008A45DC73043BFF69113C485A629(L_5, L_15, /*hidden argument*/NULL);
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0043:
	{
		// foreach (var renderer in renderers) {
		int32_t L_17 = V_1;
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_18 = V_0;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Outline::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_OnDestroy_m1B605AFC8DDD67C155BB9612650991F9617B6FF6 (Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(outlineMaskMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_outlineMaskMaterial_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// Destroy(outlineFillMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = __this->get_outlineFillMaterial_13();
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Outline::Bake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_Bake_m019CD5064FADC73098806E852F9C90B79A525507 (Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mE1AE2168916584FF463210C7511EDA0D2E79497F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m70C05555F552E07D505B7B835DCD469B3DC405B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m15CF49CEF95BC0AA1A735A1FE615E80708543FDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t6DB0C7C5196A278593BA1C34741DE40A2A91111A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListVector3_t54AB46ECA91F943A5FE7817CA662D0D5B78617B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m10D6F548D885F821392BA54048F8A98FE9E55A37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC8C3BDDA7361B15E8E1EDFF500B115B272FA0D73_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t6DB0C7C5196A278593BA1C34741DE40A2A91111A * V_0 = NULL;
	MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* V_1 = NULL;
	int32_t V_2 = 0;
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * V_3 = NULL;
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * V_4 = NULL;
	{
		// var bakedMeshes = new HashSet<Mesh>();
		HashSet_1_t6DB0C7C5196A278593BA1C34741DE40A2A91111A * L_0 = (HashSet_1_t6DB0C7C5196A278593BA1C34741DE40A2A91111A *)il2cpp_codegen_object_new(HashSet_1_t6DB0C7C5196A278593BA1C34741DE40A2A91111A_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m15CF49CEF95BC0AA1A735A1FE615E80708543FDD(L_0, /*hidden argument*/HashSet_1__ctor_m15CF49CEF95BC0AA1A735A1FE615E80708543FDD_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (var meshFilter in GetComponentsInChildren<MeshFilter>()) {
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_1;
		L_1 = Component_GetComponentsInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mE1AE2168916584FF463210C7511EDA0D2E79497F(__this, /*hidden argument*/Component_GetComponentsInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mE1AE2168916584FF463210C7511EDA0D2E79497F_RuntimeMethod_var);
		V_1 = L_1;
		V_2 = 0;
		goto IL_005e;
	}

IL_0011:
	{
		// foreach (var meshFilter in GetComponentsInChildren<MeshFilter>()) {
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// if (!bakedMeshes.Add(meshFilter.sharedMesh)) {
		HashSet_1_t6DB0C7C5196A278593BA1C34741DE40A2A91111A * L_6 = V_0;
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_7 = V_3;
		NullCheck(L_7);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_8;
		L_8 = MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_9;
		L_9 = HashSet_1_Add_m70C05555F552E07D505B7B835DCD469B3DC405B7(L_6, L_8, /*hidden argument*/HashSet_1_Add_m70C05555F552E07D505B7B835DCD469B3DC405B7_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_005a;
		}
	}
	{
		// var smoothNormals = SmoothNormals(meshFilter.sharedMesh);
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_10 = V_3;
		NullCheck(L_10);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_11;
		L_11 = MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E(L_10, /*hidden argument*/NULL);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_12;
		L_12 = Outline_SmoothNormals_mBA606DE4D131BC4EA0901281E8489647DC22D16B(__this, L_11, /*hidden argument*/NULL);
		V_4 = L_12;
		// bakeKeys.Add(meshFilter.sharedMesh);
		List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * L_13 = __this->get_bakeKeys_9();
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_14 = V_3;
		NullCheck(L_14);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_15;
		L_15 = MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		List_1_Add_mC8C3BDDA7361B15E8E1EDFF500B115B272FA0D73(L_13, L_15, /*hidden argument*/List_1_Add_mC8C3BDDA7361B15E8E1EDFF500B115B272FA0D73_RuntimeMethod_var);
		// bakeValues.Add(new ListVector3() { data = smoothNormals });
		List_1_t9F8EE4C8A3A346268256352008972115DBB309C4 * L_16 = __this->get_bakeValues_10();
		ListVector3_t54AB46ECA91F943A5FE7817CA662D0D5B78617B9 * L_17 = (ListVector3_t54AB46ECA91F943A5FE7817CA662D0D5B78617B9 *)il2cpp_codegen_object_new(ListVector3_t54AB46ECA91F943A5FE7817CA662D0D5B78617B9_il2cpp_TypeInfo_var);
		ListVector3__ctor_mF76D832454EF12AE1EF141AFB6CD7957134806E7(L_17, /*hidden argument*/NULL);
		ListVector3_t54AB46ECA91F943A5FE7817CA662D0D5B78617B9 * L_18 = L_17;
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_19 = V_4;
		NullCheck(L_18);
		L_18->set_data_0(L_19);
		NullCheck(L_16);
		List_1_Add_m10D6F548D885F821392BA54048F8A98FE9E55A37(L_16, L_18, /*hidden argument*/List_1_Add_m10D6F548D885F821392BA54048F8A98FE9E55A37_RuntimeMethod_var);
	}

IL_005a:
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_005e:
	{
		// foreach (var meshFilter in GetComponentsInChildren<MeshFilter>()) {
		int32_t L_21 = V_2;
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Outline::LoadSmoothNormals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_LoadSmoothNormals_mFB754E2A4C59FC38911E42710BBF3587BF883133 (Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mE1AE2168916584FF463210C7511EDA0D2E79497F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_mDC1EE7E2332C6862976FA026EB6ED1B3EB4E142D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m70C05555F552E07D505B7B835DCD469B3DC405B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mC9BE962224B76210C52FE15DC35D75CFC71FE132_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9B97CDF92B380DB3B36AF2DC0114349DDE073678_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* V_0 = NULL;
	int32_t V_1 = 0;
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * V_2 = NULL;
	int32_t V_3 = 0;
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * V_4 = NULL;
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * V_5 = NULL;
	SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* V_6 = NULL;
	SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * V_7 = NULL;
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * G_B5_0 = NULL;
	{
		// foreach (var meshFilter in GetComponentsInChildren<MeshFilter>()) {
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_0;
		L_0 = Component_GetComponentsInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mE1AE2168916584FF463210C7511EDA0D2E79497F(__this, /*hidden argument*/Component_GetComponentsInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mE1AE2168916584FF463210C7511EDA0D2E79497F_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0092;
	}

IL_000e:
	{
		// foreach (var meshFilter in GetComponentsInChildren<MeshFilter>()) {
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (!registeredMeshes.Add(meshFilter.sharedMesh)) {
		IL2CPP_RUNTIME_CLASS_INIT(Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C_il2cpp_TypeInfo_var);
		HashSet_1_t6DB0C7C5196A278593BA1C34741DE40A2A91111A * L_5 = ((Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C_StaticFields*)il2cpp_codegen_static_fields_for(Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C_il2cpp_TypeInfo_var))->get_registeredMeshes_4();
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_6 = V_2;
		NullCheck(L_6);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_7;
		L_7 = MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_8;
		L_8 = HashSet_1_Add_m70C05555F552E07D505B7B835DCD469B3DC405B7(L_5, L_7, /*hidden argument*/HashSet_1_Add_m70C05555F552E07D505B7B835DCD469B3DC405B7_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_008e;
		}
	}
	{
		// var index = bakeKeys.IndexOf(meshFilter.sharedMesh);
		List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * L_9 = __this->get_bakeKeys_9();
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_10 = V_2;
		NullCheck(L_10);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_11;
		L_11 = MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_12;
		L_12 = List_1_IndexOf_mC9BE962224B76210C52FE15DC35D75CFC71FE132(L_9, L_11, /*hidden argument*/List_1_IndexOf_mC9BE962224B76210C52FE15DC35D75CFC71FE132_RuntimeMethod_var);
		V_3 = L_12;
		// var smoothNormals = (index >= 0) ? bakeValues[index].data : SmoothNormals(meshFilter.sharedMesh);
		int32_t L_13 = V_3;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_14 = V_2;
		NullCheck(L_14);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_15;
		L_15 = MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E(L_14, /*hidden argument*/NULL);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_16;
		L_16 = Outline_SmoothNormals_mBA606DE4D131BC4EA0901281E8489647DC22D16B(__this, L_15, /*hidden argument*/NULL);
		G_B5_0 = L_16;
		goto IL_0059;
	}

IL_0048:
	{
		List_1_t9F8EE4C8A3A346268256352008972115DBB309C4 * L_17 = __this->get_bakeValues_10();
		int32_t L_18 = V_3;
		NullCheck(L_17);
		ListVector3_t54AB46ECA91F943A5FE7817CA662D0D5B78617B9 * L_19;
		L_19 = List_1_get_Item_m9B97CDF92B380DB3B36AF2DC0114349DDE073678_inline(L_17, L_18, /*hidden argument*/List_1_get_Item_m9B97CDF92B380DB3B36AF2DC0114349DDE073678_RuntimeMethod_var);
		NullCheck(L_19);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_20 = L_19->get_data_0();
		G_B5_0 = L_20;
	}

IL_0059:
	{
		V_4 = G_B5_0;
		// meshFilter.sharedMesh.SetUVs(3, smoothNormals);
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_21 = V_2;
		NullCheck(L_21);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_22;
		L_22 = MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E(L_21, /*hidden argument*/NULL);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_23 = V_4;
		NullCheck(L_22);
		Mesh_SetUVs_m930BBB168BC46A7D03C0B460E571F3CF1B3D102D(L_22, 3, L_23, /*hidden argument*/NULL);
		// var renderer = meshFilter.GetComponent<Renderer>();
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_24 = V_2;
		NullCheck(L_24);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_25;
		L_25 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(L_24, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		V_5 = L_25;
		// if (renderer != null) {
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_26 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_26, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_008e;
		}
	}
	{
		// CombineSubmeshes(meshFilter.sharedMesh, renderer.sharedMaterials);
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_28 = V_2;
		NullCheck(L_28);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_29;
		L_29 = MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E(L_28, /*hidden argument*/NULL);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_30 = V_5;
		NullCheck(L_30);
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_31;
		L_31 = Renderer_get_sharedMaterials_m9B2D432CA8AD8CEC4348E61789CC1BB0C3A00AFD(L_30, /*hidden argument*/NULL);
		Outline_CombineSubmeshes_m9FC6E641CFB0983E8BF912AAE72C9707C0D9C050(__this, L_29, L_31, /*hidden argument*/NULL);
	}

IL_008e:
	{
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_0092:
	{
		// foreach (var meshFilter in GetComponentsInChildren<MeshFilter>()) {
		int32_t L_33 = V_1;
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_34 = V_0;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		// foreach (var skinnedMeshRenderer in GetComponentsInChildren<SkinnedMeshRenderer>()) {
		SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* L_35;
		L_35 = Component_GetComponentsInChildren_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_mDC1EE7E2332C6862976FA026EB6ED1B3EB4E142D(__this, /*hidden argument*/Component_GetComponentsInChildren_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_mDC1EE7E2332C6862976FA026EB6ED1B3EB4E142D_RuntimeMethod_var);
		V_6 = L_35;
		V_1 = 0;
		goto IL_00f5;
	}

IL_00a7:
	{
		// foreach (var skinnedMeshRenderer in GetComponentsInChildren<SkinnedMeshRenderer>()) {
		SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* L_36 = V_6;
		int32_t L_37 = V_1;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_7 = L_39;
		// if (!registeredMeshes.Add(skinnedMeshRenderer.sharedMesh)) {
		IL2CPP_RUNTIME_CLASS_INIT(Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C_il2cpp_TypeInfo_var);
		HashSet_1_t6DB0C7C5196A278593BA1C34741DE40A2A91111A * L_40 = ((Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C_StaticFields*)il2cpp_codegen_static_fields_for(Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C_il2cpp_TypeInfo_var))->get_registeredMeshes_4();
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_41 = V_7;
		NullCheck(L_41);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_42;
		L_42 = SkinnedMeshRenderer_get_sharedMesh_mFD55E307943C1C4B2E2E8632F15B41CCBD8D91F2(L_41, /*hidden argument*/NULL);
		NullCheck(L_40);
		bool L_43;
		L_43 = HashSet_1_Add_m70C05555F552E07D505B7B835DCD469B3DC405B7(L_40, L_42, /*hidden argument*/HashSet_1_Add_m70C05555F552E07D505B7B835DCD469B3DC405B7_RuntimeMethod_var);
		if (!L_43)
		{
			goto IL_00f1;
		}
	}
	{
		// skinnedMeshRenderer.sharedMesh.uv4 = new Vector2[skinnedMeshRenderer.sharedMesh.vertexCount];
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_44 = V_7;
		NullCheck(L_44);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_45;
		L_45 = SkinnedMeshRenderer_get_sharedMesh_mFD55E307943C1C4B2E2E8632F15B41CCBD8D91F2(L_44, /*hidden argument*/NULL);
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_46 = V_7;
		NullCheck(L_46);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_47;
		L_47 = SkinnedMeshRenderer_get_sharedMesh_mFD55E307943C1C4B2E2E8632F15B41CCBD8D91F2(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		int32_t L_48;
		L_48 = Mesh_get_vertexCount_m1EF3DD16EE298B955311F53EA1CAF05007A7722F(L_47, /*hidden argument*/NULL);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_49 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, (uint32_t)L_48);
		NullCheck(L_45);
		Mesh_set_uv4_mB55669150888EEB5C7A69B89B6A11DFC3B869126(L_45, L_49, /*hidden argument*/NULL);
		// CombineSubmeshes(skinnedMeshRenderer.sharedMesh, skinnedMeshRenderer.sharedMaterials);
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_50 = V_7;
		NullCheck(L_50);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_51;
		L_51 = SkinnedMeshRenderer_get_sharedMesh_mFD55E307943C1C4B2E2E8632F15B41CCBD8D91F2(L_50, /*hidden argument*/NULL);
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_52 = V_7;
		NullCheck(L_52);
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_53;
		L_53 = Renderer_get_sharedMaterials_m9B2D432CA8AD8CEC4348E61789CC1BB0C3A00AFD(L_52, /*hidden argument*/NULL);
		Outline_CombineSubmeshes_m9FC6E641CFB0983E8BF912AAE72C9707C0D9C050(__this, L_51, L_53, /*hidden argument*/NULL);
	}

IL_00f1:
	{
		int32_t L_54 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
	}

IL_00f5:
	{
		// foreach (var skinnedMeshRenderer in GetComponentsInChildren<SkinnedMeshRenderer>()) {
		int32_t L_55 = V_1;
		SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* L_56 = V_6;
		NullCheck(L_56);
		if ((((int32_t)L_55) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_56)->max_length))))))
		{
			goto IL_00a7;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Vector3> Outline::SmoothNormals(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * Outline_SmoothNormals_mBA606DE4D131BC4EA0901281E8489647DC22D16B (Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisKeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4_m2466243F42B476FCF4C613571E9DB923C5AA77D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_GroupBy_TisKeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m65B1EAC83A69CA3B1DB514F25CEB6C70A2D70109_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisKeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4_m1310466D36FFA01103046E3D99C5C9287DC8602A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m1794C2B037D8081101DD37DC9792DA24D711DD83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC59AB1CCC7AC92484D8826D38DD0FF2302A1AD72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3__ctor_m89C202C7F6D238631471FA9C3A4809F2DDE97D54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_t42C2490DD9CE7DA0CE4FB2C849431C03440FC25F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t08DCEDF5D79E08294F1139AA523B2FF02C75D2FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t5AC172F527085E9C457BD73CA16ED53A51FC7F48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t212393C5E219061CEE5E3CFC4539C808C21F78D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tA926F9FC877384B249FEE71CB4AB7315CE4D631D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m8B07FA74932434901F7245DE06D66CBFDE9211E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB47F013C62B967199614B3D07228B381C0562448_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSmoothNormalsU3Eb__30_0_m243CCB6355ABA744A3D4278CEE1E935DF7391AC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSmoothNormalsU3Eb__30_1_mE06EA252FE45A4AD9CDF96EC69961996798FAF75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4  V_5;
	memset((&V_5), 0, sizeof(V_5));
	KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	Func_3_t42C2490DD9CE7DA0CE4FB2C849431C03440FC25F * G_B2_0 = NULL;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* G_B2_1 = NULL;
	Func_3_t42C2490DD9CE7DA0CE4FB2C849431C03440FC25F * G_B1_0 = NULL;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* G_B1_1 = NULL;
	Func_2_tC59AB1CCC7AC92484D8826D38DD0FF2302A1AD72 * G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_tC59AB1CCC7AC92484D8826D38DD0FF2302A1AD72 * G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		// var groups = mesh.vertices.Select((vertex, index) => new KeyValuePair<Vector3, int>(vertex, index)).GroupBy(pair => pair.Key);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = ___mesh0;
		NullCheck(L_0);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1;
		L_1 = Mesh_get_vertices_mB7A79698792B3CBA0E7E6EACDA6C031E496FB595(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_il2cpp_TypeInfo_var);
		Func_3_t42C2490DD9CE7DA0CE4FB2C849431C03440FC25F * L_2 = ((U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_il2cpp_TypeInfo_var))->get_U3CU3E9__30_0_1();
		Func_3_t42C2490DD9CE7DA0CE4FB2C849431C03440FC25F * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_il2cpp_TypeInfo_var);
		U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E * L_4 = ((U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_3_t42C2490DD9CE7DA0CE4FB2C849431C03440FC25F * L_5 = (Func_3_t42C2490DD9CE7DA0CE4FB2C849431C03440FC25F *)il2cpp_codegen_object_new(Func_3_t42C2490DD9CE7DA0CE4FB2C849431C03440FC25F_il2cpp_TypeInfo_var);
		Func_3__ctor_m89C202C7F6D238631471FA9C3A4809F2DDE97D54(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CSmoothNormalsU3Eb__30_0_m243CCB6355ABA744A3D4278CEE1E935DF7391AC0_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m89C202C7F6D238631471FA9C3A4809F2DDE97D54_RuntimeMethod_var);
		Func_3_t42C2490DD9CE7DA0CE4FB2C849431C03440FC25F * L_6 = L_5;
		((U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_il2cpp_TypeInfo_var))->set_U3CU3E9__30_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		RuntimeObject* L_7;
		L_7 = Enumerable_Select_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisKeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4_m1310466D36FFA01103046E3D99C5C9287DC8602A((RuntimeObject*)(RuntimeObject*)G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Select_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisKeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4_m1310466D36FFA01103046E3D99C5C9287DC8602A_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_il2cpp_TypeInfo_var);
		Func_2_tC59AB1CCC7AC92484D8826D38DD0FF2302A1AD72 * L_8 = ((U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_il2cpp_TypeInfo_var))->get_U3CU3E9__30_1_2();
		Func_2_tC59AB1CCC7AC92484D8826D38DD0FF2302A1AD72 * L_9 = L_8;
		G_B3_0 = L_9;
		G_B3_1 = L_7;
		if (L_9)
		{
			G_B4_0 = L_9;
			G_B4_1 = L_7;
			goto IL_0049;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_il2cpp_TypeInfo_var);
		U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E * L_10 = ((U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tC59AB1CCC7AC92484D8826D38DD0FF2302A1AD72 * L_11 = (Func_2_tC59AB1CCC7AC92484D8826D38DD0FF2302A1AD72 *)il2cpp_codegen_object_new(Func_2_tC59AB1CCC7AC92484D8826D38DD0FF2302A1AD72_il2cpp_TypeInfo_var);
		Func_2__ctor_m1794C2B037D8081101DD37DC9792DA24D711DD83(L_11, L_10, (intptr_t)((intptr_t)U3CU3Ec_U3CSmoothNormalsU3Eb__30_1_mE06EA252FE45A4AD9CDF96EC69961996798FAF75_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m1794C2B037D8081101DD37DC9792DA24D711DD83_RuntimeMethod_var);
		Func_2_tC59AB1CCC7AC92484D8826D38DD0FF2302A1AD72 * L_12 = L_11;
		((U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_il2cpp_TypeInfo_var))->set_U3CU3E9__30_1_2(L_12);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
	}

IL_0049:
	{
		RuntimeObject* L_13;
		L_13 = Enumerable_GroupBy_TisKeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m65B1EAC83A69CA3B1DB514F25CEB6C70A2D70109(G_B4_1, G_B4_0, /*hidden argument*/Enumerable_GroupBy_TisKeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m65B1EAC83A69CA3B1DB514F25CEB6C70A2D70109_RuntimeMethod_var);
		// var smoothNormals = new List<Vector3>(mesh.normals);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_14 = ___mesh0;
		NullCheck(L_14);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_15;
		L_15 = Mesh_get_normals_m5212279CEF7538618C8BA884C9A7B976B32352B0(L_14, /*hidden argument*/NULL);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_16 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mB47F013C62B967199614B3D07228B381C0562448(L_16, (RuntimeObject*)(RuntimeObject*)L_15, /*hidden argument*/List_1__ctor_mB47F013C62B967199614B3D07228B381C0562448_RuntimeMethod_var);
		V_0 = L_16;
		// foreach (var group in groups) {
		NullCheck(L_13);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<UnityEngine.Vector3,System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>>::GetEnumerator() */, IEnumerable_1_t08DCEDF5D79E08294F1139AA523B2FF02C75D2FF_il2cpp_TypeInfo_var, L_13);
		V_1 = L_17;
	}

IL_0060:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00fb;
		}

IL_0065:
		{
			// foreach (var group in groups) {
			RuntimeObject* L_18 = V_1;
			NullCheck(L_18);
			RuntimeObject* L_19;
			L_19 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Linq.IGrouping`2<UnityEngine.Vector3,System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>>::get_Current() */, IEnumerator_1_tA926F9FC877384B249FEE71CB4AB7315CE4D631D_il2cpp_TypeInfo_var, L_18);
			V_2 = L_19;
			// if (group.Count() == 1) {
			RuntimeObject* L_20 = V_2;
			int32_t L_21;
			L_21 = Enumerable_Count_TisKeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4_m2466243F42B476FCF4C613571E9DB923C5AA77D6(L_20, /*hidden argument*/Enumerable_Count_TisKeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4_m2466243F42B476FCF4C613571E9DB923C5AA77D6_RuntimeMethod_var);
			if ((((int32_t)L_21) == ((int32_t)1)))
			{
				goto IL_00fb;
			}
		}

IL_0078:
		{
			// var smoothNormal = Vector3.zero;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
			L_22 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
			V_3 = L_22;
			// foreach (var pair in group) {
			RuntimeObject* L_23 = V_2;
			NullCheck(L_23);
			RuntimeObject* L_24;
			L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>::GetEnumerator() */, IEnumerable_1_t5AC172F527085E9C457BD73CA16ED53A51FC7F48_il2cpp_TypeInfo_var, L_23);
			V_4 = L_24;
		}

IL_0086:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00a5;
			}

IL_0088:
			{
				// foreach (var pair in group) {
				RuntimeObject* L_25 = V_4;
				NullCheck(L_25);
				KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4  L_26;
				L_26 = InterfaceFuncInvoker0< KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>::get_Current() */, IEnumerator_1_t212393C5E219061CEE5E3CFC4539C808C21F78D3_il2cpp_TypeInfo_var, L_25);
				V_5 = L_26;
				// smoothNormal += smoothNormals[pair.Value];
				Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_3;
				List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_28 = V_0;
				int32_t L_29;
				L_29 = KeyValuePair_2_get_Value_m8B07FA74932434901F7245DE06D66CBFDE9211E7_inline((KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4 *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_m8B07FA74932434901F7245DE06D66CBFDE9211E7_RuntimeMethod_var);
				NullCheck(L_28);
				Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
				L_30 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_28, L_29, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
				Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
				L_31 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_27, L_30, /*hidden argument*/NULL);
				V_3 = L_31;
			}

IL_00a5:
			{
				// foreach (var pair in group) {
				RuntimeObject* L_32 = V_4;
				NullCheck(L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_32);
				if (L_33)
				{
					goto IL_0088;
				}
			}

IL_00ae:
			{
				IL2CPP_LEAVE(0xBC, FINALLY_00b0);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00b0;
		}

FINALLY_00b0:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_34 = V_4;
				if (!L_34)
				{
					goto IL_00bb;
				}
			}

IL_00b4:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_35);
			}

IL_00bb:
			{
				IL2CPP_END_FINALLY(176)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(176)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xBC, IL_00bc)
		}

IL_00bc:
		{
			// smoothNormal.Normalize();
			Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), /*hidden argument*/NULL);
			// foreach (var pair in group) {
			RuntimeObject* L_36 = V_2;
			NullCheck(L_36);
			RuntimeObject* L_37;
			L_37 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>::GetEnumerator() */, IEnumerable_1_t5AC172F527085E9C457BD73CA16ED53A51FC7F48_il2cpp_TypeInfo_var, L_36);
			V_4 = L_37;
		}

IL_00cb:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00e4;
			}

IL_00cd:
			{
				// foreach (var pair in group) {
				RuntimeObject* L_38 = V_4;
				NullCheck(L_38);
				KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4  L_39;
				L_39 = InterfaceFuncInvoker0< KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>::get_Current() */, IEnumerator_1_t212393C5E219061CEE5E3CFC4539C808C21F78D3_il2cpp_TypeInfo_var, L_38);
				V_6 = L_39;
				// smoothNormals[pair.Value] = smoothNormal;
				List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_40 = V_0;
				int32_t L_41;
				L_41 = KeyValuePair_2_get_Value_m8B07FA74932434901F7245DE06D66CBFDE9211E7_inline((KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4 *)(&V_6), /*hidden argument*/KeyValuePair_2_get_Value_m8B07FA74932434901F7245DE06D66CBFDE9211E7_RuntimeMethod_var);
				Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42 = V_3;
				NullCheck(L_40);
				List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406(L_40, L_41, L_42, /*hidden argument*/List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406_RuntimeMethod_var);
			}

IL_00e4:
			{
				// foreach (var pair in group) {
				RuntimeObject* L_43 = V_4;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cd;
				}
			}

IL_00ed:
			{
				IL2CPP_LEAVE(0xFB, FINALLY_00ef);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00ef;
		}

FINALLY_00ef:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_45 = V_4;
				if (!L_45)
				{
					goto IL_00fa;
				}
			}

IL_00f3:
			{
				RuntimeObject* L_46 = V_4;
				NullCheck(L_46);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_46);
			}

IL_00fa:
			{
				IL2CPP_END_FINALLY(239)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(239)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xFB, IL_00fb)
		}

IL_00fb:
		{
			// foreach (var group in groups) {
			RuntimeObject* L_47 = V_1;
			NullCheck(L_47);
			bool L_48;
			L_48 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_47);
			if (L_48)
			{
				goto IL_0065;
			}
		}

IL_0106:
		{
			IL2CPP_LEAVE(0x112, FINALLY_0108);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0108;
	}

FINALLY_0108:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_49 = V_1;
			if (!L_49)
			{
				goto IL_0111;
			}
		}

IL_010b:
		{
			RuntimeObject* L_50 = V_1;
			NullCheck(L_50);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_50);
		}

IL_0111:
		{
			IL2CPP_END_FINALLY(264)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(264)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x112, IL_0112)
	}

IL_0112:
	{
		// return smoothNormals;
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_51 = V_0;
		return L_51;
	}
}
// System.Void Outline::CombineSubmeshes(UnityEngine.Mesh,UnityEngine.Material[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_CombineSubmeshes_m9FC6E641CFB0983E8BF912AAE72C9707C0D9C050 (Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh0, MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___materials1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (mesh.subMeshCount == 1) {
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = ___mesh0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Mesh_get_subMeshCount_m60E2BCBFEEF21260C70D06EAEC3A2A51D80796FF(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// if (mesh.subMeshCount > materials.Length) {
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_2 = ___mesh0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Mesh_get_subMeshCount_m60E2BCBFEEF21260C70D06EAEC3A2A51D80796FF(L_2, /*hidden argument*/NULL);
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_4 = ___materials1;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0016;
		}
	}
	{
		// return;
		return;
	}

IL_0016:
	{
		// mesh.subMeshCount++;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_5 = ___mesh0;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_6 = L_5;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Mesh_get_subMeshCount_m60E2BCBFEEF21260C70D06EAEC3A2A51D80796FF(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		NullCheck(L_6);
		Mesh_set_subMeshCount_mF6F2199AE4FA096C1AE0CAD02E13B6FEA38C6283(L_6, ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)), /*hidden argument*/NULL);
		// mesh.SetTriangles(mesh.triangles, mesh.subMeshCount - 1);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_9 = ___mesh0;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_10 = ___mesh0;
		NullCheck(L_10);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11;
		L_11 = Mesh_get_triangles_mC599119151146317136B1E4C40A9110373286D5A(L_10, /*hidden argument*/NULL);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_12 = ___mesh0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Mesh_get_subMeshCount_m60E2BCBFEEF21260C70D06EAEC3A2A51D80796FF(L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		Mesh_SetTriangles_m63AC07691EC9F9AE0C85FB01A8DDD1A45FE9349F(L_9, L_11, ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Outline::UpdateMaterialProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_UpdateMaterialProperties_mCF8EA9ED70ECA89FD2858C8B8A16C4B461E4B661 (Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1418B66EFD4F2E84F8EE977170F5ACBF35CE35C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// outlineFillMaterial.SetColor("_OutlineColor", outlineColor);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_outlineFillMaterial_13();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = __this->get_outlineColor_6();
		NullCheck(L_0);
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_0, _stringLiteralD1418B66EFD4F2E84F8EE977170F5ACBF35CE35C, L_1, /*hidden argument*/NULL);
		// switch (outlineMode) {
		int32_t L_2 = __this->get_outlineMode_5();
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0038;
			}
			case 1:
			{
				goto IL_0079;
			}
			case 2:
			{
				goto IL_00ba;
			}
			case 3:
			{
				goto IL_00fb;
			}
			case 4:
			{
				goto IL_013c;
			}
		}
	}
	{
		return;
	}

IL_0038:
	{
		// outlineMaskMaterial.SetFloat("_ZTest", (float)UnityEngine.Rendering.CompareFunction.Always);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = __this->get_outlineMaskMaterial_12();
		NullCheck(L_4);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_4, _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, (8.0f), /*hidden argument*/NULL);
		// outlineFillMaterial.SetFloat("_ZTest", (float)UnityEngine.Rendering.CompareFunction.Always);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = __this->get_outlineFillMaterial_13();
		NullCheck(L_5);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_5, _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, (8.0f), /*hidden argument*/NULL);
		// outlineFillMaterial.SetFloat("_OutlineWidth", outlineWidth);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6 = __this->get_outlineFillMaterial_13();
		float L_7 = __this->get_outlineWidth_7();
		NullCheck(L_6);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_6, _stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257, L_7, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0079:
	{
		// outlineMaskMaterial.SetFloat("_ZTest", (float)UnityEngine.Rendering.CompareFunction.Always);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_8 = __this->get_outlineMaskMaterial_12();
		NullCheck(L_8);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_8, _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, (8.0f), /*hidden argument*/NULL);
		// outlineFillMaterial.SetFloat("_ZTest", (float)UnityEngine.Rendering.CompareFunction.LessEqual);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = __this->get_outlineFillMaterial_13();
		NullCheck(L_9);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_9, _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, (4.0f), /*hidden argument*/NULL);
		// outlineFillMaterial.SetFloat("_OutlineWidth", outlineWidth);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10 = __this->get_outlineFillMaterial_13();
		float L_11 = __this->get_outlineWidth_7();
		NullCheck(L_10);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_10, _stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257, L_11, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00ba:
	{
		// outlineMaskMaterial.SetFloat("_ZTest", (float)UnityEngine.Rendering.CompareFunction.Always);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = __this->get_outlineMaskMaterial_12();
		NullCheck(L_12);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_12, _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, (8.0f), /*hidden argument*/NULL);
		// outlineFillMaterial.SetFloat("_ZTest", (float)UnityEngine.Rendering.CompareFunction.Greater);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = __this->get_outlineFillMaterial_13();
		NullCheck(L_13);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_13, _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, (5.0f), /*hidden argument*/NULL);
		// outlineFillMaterial.SetFloat("_OutlineWidth", outlineWidth);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14 = __this->get_outlineFillMaterial_13();
		float L_15 = __this->get_outlineWidth_7();
		NullCheck(L_14);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_14, _stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257, L_15, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00fb:
	{
		// outlineMaskMaterial.SetFloat("_ZTest", (float)UnityEngine.Rendering.CompareFunction.LessEqual);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_16 = __this->get_outlineMaskMaterial_12();
		NullCheck(L_16);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_16, _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, (4.0f), /*hidden argument*/NULL);
		// outlineFillMaterial.SetFloat("_ZTest", (float)UnityEngine.Rendering.CompareFunction.Always);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_17 = __this->get_outlineFillMaterial_13();
		NullCheck(L_17);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_17, _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, (8.0f), /*hidden argument*/NULL);
		// outlineFillMaterial.SetFloat("_OutlineWidth", outlineWidth);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_18 = __this->get_outlineFillMaterial_13();
		float L_19 = __this->get_outlineWidth_7();
		NullCheck(L_18);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_18, _stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257, L_19, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_013c:
	{
		// outlineMaskMaterial.SetFloat("_ZTest", (float)UnityEngine.Rendering.CompareFunction.LessEqual);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_20 = __this->get_outlineMaskMaterial_12();
		NullCheck(L_20);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_20, _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, (4.0f), /*hidden argument*/NULL);
		// outlineFillMaterial.SetFloat("_ZTest", (float)UnityEngine.Rendering.CompareFunction.Greater);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_21 = __this->get_outlineFillMaterial_13();
		NullCheck(L_21);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_21, _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, (5.0f), /*hidden argument*/NULL);
		// outlineFillMaterial.SetFloat("_OutlineWidth", 0f);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_22 = __this->get_outlineFillMaterial_13();
		NullCheck(L_22);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_22, _stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257, (0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Outline::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline__ctor_m462BBE537B212AD14E0E5075302776A459F5E270 (Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC231E09D7F26F0B1F61263B105FCD625F94AFB98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF81DE81521D3C4E4B736476E833E1B0C06839F2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9F8EE4C8A3A346268256352008972115DBB309C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Color outlineColor = Color.white;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		__this->set_outlineColor_6(L_0);
		// private float outlineWidth = 2f;
		__this->set_outlineWidth_7((2.0f));
		// private List<Mesh> bakeKeys = new List<Mesh>();
		List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * L_1 = (List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B *)il2cpp_codegen_object_new(List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B_il2cpp_TypeInfo_var);
		List_1__ctor_mC231E09D7F26F0B1F61263B105FCD625F94AFB98(L_1, /*hidden argument*/List_1__ctor_mC231E09D7F26F0B1F61263B105FCD625F94AFB98_RuntimeMethod_var);
		__this->set_bakeKeys_9(L_1);
		// private List<ListVector3> bakeValues = new List<ListVector3>();
		List_1_t9F8EE4C8A3A346268256352008972115DBB309C4 * L_2 = (List_1_t9F8EE4C8A3A346268256352008972115DBB309C4 *)il2cpp_codegen_object_new(List_1_t9F8EE4C8A3A346268256352008972115DBB309C4_il2cpp_TypeInfo_var);
		List_1__ctor_mF81DE81521D3C4E4B736476E833E1B0C06839F2E(L_2, /*hidden argument*/List_1__ctor_mF81DE81521D3C4E4B736476E833E1B0C06839F2E_RuntimeMethod_var);
		__this->set_bakeValues_10(L_2);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Outline::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline__cctor_mC3A2FF903EB7709AB0829363DE21E2949C3DF210 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m15CF49CEF95BC0AA1A735A1FE615E80708543FDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t6DB0C7C5196A278593BA1C34741DE40A2A91111A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static HashSet<Mesh> registeredMeshes = new HashSet<Mesh>();
		HashSet_1_t6DB0C7C5196A278593BA1C34741DE40A2A91111A * L_0 = (HashSet_1_t6DB0C7C5196A278593BA1C34741DE40A2A91111A *)il2cpp_codegen_object_new(HashSet_1_t6DB0C7C5196A278593BA1C34741DE40A2A91111A_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m15CF49CEF95BC0AA1A735A1FE615E80708543FDD(L_0, /*hidden argument*/HashSet_1__ctor_m15CF49CEF95BC0AA1A735A1FE615E80708543FDD_RuntimeMethod_var);
		((Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C_StaticFields*)il2cpp_codegen_static_fields_for(Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C_il2cpp_TypeInfo_var))->set_registeredMeshes_4(L_0);
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
// System.Void PauseGame::makePause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseGame_makePause_m039AB2ED2183020FF2E630F90828AAD2602BCA9D (PauseGame_t8BD53F5D21AABDB02D738988CF76A29EC230BA69 * __this, const RuntimeMethod* method)
{
	{
		// Time.timeScale = 0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// gameCanvas.enabled = false;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_0 = __this->get_gameCanvas_4();
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, (bool)0, /*hidden argument*/NULL);
		// pauseCanvas.enabled = true;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_1 = __this->get_pauseCanvas_5();
		NullCheck(L_1);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PauseGame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseGame__ctor_m30333EB46A97D90A48DA44AC44EF6AD752B62319 (PauseGame_t8BD53F5D21AABDB02D738988CF76A29EC230BA69 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PlayButtonSound::playButtonSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayButtonSound_playButtonSound_mBCAEA37AE94DDA3A2E67F34131315D77122B4674 (PlayButtonSound_tEF391BE6C1A456BF914000D8E08B6A2B999B08F1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54F48823060A5886D12558C4BBB0CDBB0E83F58A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.GetString("Sound") == "Play")
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, /*hidden argument*/NULL);
		bool L_1;
		L_1 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, _stringLiteral54F48823060A5886D12558C4BBB0CDBB0E83F58A, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// GetComponent<AudioSource>().Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2;
		L_2 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		NullCheck(L_2);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_2, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void PlayButtonSound::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayButtonSound__ctor_m79F687D1E9496898C8FF9FEB09E175B3E4A27B88 (PlayButtonSound_tEF391BE6C1A456BF914000D8E08B6A2B999B08F1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PlayerMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Start_mB585552228B1908E44D3A69496598FB485F608B6 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74B83A50A58269C4EECA165C2ABB62B80AAFC9D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetString("Lose","No");
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral74B83A50A58269C4EECA165C2ABB62B80AAFC9D0, _stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66, /*hidden argument*/NULL);
		// playerRb = GetComponent<Rigidbody>();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0;
		L_0 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		__this->set_playerRb_6(L_0);
		// mainCamera = Camera.main;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1;
		L_1 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		__this->set_mainCamera_8(L_1);
		// }
		return;
	}
}
// System.Void PlayerMovement::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_FixedUpdate_m774280268A537B6ED9D9171CEAE67E9A0C3A9499 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		// if(Input.GetMouseButton(0) || Input.touchCount > 0)
		bool L_0;
		L_0 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}

IL_0010:
	{
		// followTouch();
		PlayerMovement_followTouch_m25D2288F48B20AF9B1D943BC5F770B1C6BE342D6(__this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void PlayerMovement::followTouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_followTouch_m25D2288F48B20AF9B1D943BC5F770B1C6BE342D6 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (Input.touchCount == 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// Ray ray = mainCamera.ScreenPointToRay(Input.GetTouch(0).position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1 = __this->get_mainCamera_8();
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_2;
		L_2 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_3 = L_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_3), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_5;
		L_5 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB(L_1, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// newPos = ray.origin + ray.direction/2f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_7, (2.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_6, L_8, /*hidden argument*/NULL);
		__this->set_newPos_7(L_9);
		// Vector3 dir = new Vector3(newPos.x - transform.position.x, transform.position.y, transform.position.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_10 = __this->get_address_of_newPos_7();
		float L_11 = L_10->get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_z_4();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), ((float)il2cpp_codegen_subtract((float)L_11, (float)L_14)), L_17, L_20, /*hidden argument*/NULL);
		// playerRb.MovePosition(transform.position + (dir * playerSpeed * Time.deltaTime));
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_21 = __this->get_playerRb_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_1;
		float L_25 = __this->get_playerSpeed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_24, L_25, /*hidden argument*/NULL);
		float L_27;
		L_27 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_26, L_27, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_23, L_28, /*hidden argument*/NULL);
		NullCheck(L_21);
		Rigidbody_MovePosition_mB3CBBF21FD0ABB88BC6C004B993DED25673001C7(L_21, L_29, /*hidden argument*/NULL);
		// Vector3 targ = new Vector3(target.position.x, target.position.y, target.position.z - 15f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30 = __this->get_target_5();
		NullCheck(L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33 = __this->get_target_5();
		NullCheck(L_33);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_33, /*hidden argument*/NULL);
		float L_35 = L_34.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36 = __this->get_target_5();
		NullCheck(L_36);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_36, /*hidden argument*/NULL);
		float L_38 = L_37.get_z_4();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), L_32, L_35, ((float)il2cpp_codegen_subtract((float)L_38, (float)(15.0f))), /*hidden argument*/NULL);
		// transform.LookAt(targ);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
		L_39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40 = V_2;
		NullCheck(L_39);
		Transform_LookAt_m996FADE2327B0A4412FF4A5179B8BABD9EB849BA(L_39, L_40, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement__ctor_mBF9F632DD9929DD6FF092A968649A4406BFE397F (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Score::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_Update_mB696B161F91F1AE220BCD4F47028DE039D9697D2 (Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Score_tE07CBD9780DFC212BE43719819F512E8861103C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE136BED691D35E6ECC51710E6D39B3CF91E8FB05);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Score", nowScore);
		int32_t L_0 = ((Score_tE07CBD9780DFC212BE43719819F512E8861103C7_StaticFields*)il2cpp_codegen_static_fields_for(Score_tE07CBD9780DFC212BE43719819F512E8861103C7_il2cpp_TypeInfo_var))->get_nowScore_4();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3, L_0, /*hidden argument*/NULL);
		// scoreText.text = "Score: <color=#FF0000>" + nowScore + "</color>";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_scoreText_5();
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(((Score_tE07CBD9780DFC212BE43719819F512E8861103C7_StaticFields*)il2cpp_codegen_static_fields_for(Score_tE07CBD9780DFC212BE43719819F512E8861103C7_il2cpp_TypeInfo_var))->get_address_of_nowScore_4()), /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralE136BED691D35E6ECC51710E6D39B3CF91E8FB05, L_2, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		// }
		return;
	}
}
// System.Void Score::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_mEE9186D20D9B28A735262B29AB6E8D9FF1380FB6 (Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SoundOnOff::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundOnOff_Awake_m254A193F4694B67A6DEFA2304CBAA0EFF62C9B8B (SoundOnOff_t491C399CECC1539C7BC5D027AC0D6069ABEB9D15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isSoundOnOffButton)
		bool L_0 = __this->get_isSoundOnOffButton_4();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// playerPrefs = "Sound";
		__this->set_playerPrefs_8(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		return;
	}

IL_0014:
	{
		// playerPrefs = "Music";
		__this->set_playerPrefs_8(_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E);
		// }
		return;
	}
}
// System.Void SoundOnOff::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundOnOff_Start_m0AFCD8D0E031CBB21D29BD569FA75504DB109116 (SoundOnOff_t491C399CECC1539C7BC5D027AC0D6069ABEB9D15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral094489F0CC3F545E5371377333562A076A45838B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral616FA8FACA4BD63856D14D13CE36C30A22C4AE73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onOffText = GetComponentInChildren<Text>();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0;
		L_0 = Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3(__this, /*hidden argument*/Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var);
		__this->set_onOffText_7(L_0);
		// musicAudioSource = GameObject.Find("BackgroundMusic(Clone)").GetComponent<AudioSource>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral094489F0CC3F545E5371377333562A076A45838B, /*hidden argument*/NULL);
		NullCheck(L_1);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2;
		L_2 = GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53(L_1, /*hidden argument*/GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		__this->set_musicAudioSource_6(L_2);
		// if (PlayerPrefs.GetString(playerPrefs) == "Pause")
		String_t* L_3 = __this->get_playerPrefs_8();
		String_t* L_4;
		L_4 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, _stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		// isPlay = false;
		__this->set_isPlay_5((bool)0);
		// onOffText.text = "On";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get_onOffText_7();
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteral616FA8FACA4BD63856D14D13CE36C30A22C4AE73);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void SoundOnOff::soundOnOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundOnOff_soundOnOff_m29CA3FCBDFD0ED263499ADE13F99B64704905A60 (SoundOnOff_t491C399CECC1539C7BC5D027AC0D6069ABEB9D15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54F48823060A5886D12558C4BBB0CDBB0E83F58A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral616FA8FACA4BD63856D14D13CE36C30A22C4AE73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DB229E4B4513366157C0D536C533A2B6C5F7AA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isPlay)
		bool L_0 = __this->get_isPlay_5();
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		// PlayerPrefs.SetString(playerPrefs, "Pause");
		String_t* L_1 = __this->get_playerPrefs_8();
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(L_1, _stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8, /*hidden argument*/NULL);
		// musicAudioSource.Pause();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = __this->get_musicAudioSource_6();
		NullCheck(L_2);
		AudioSource_Pause_mC4F9932A77B6AA2CC3FB720721B7837CF57B675D(L_2, /*hidden argument*/NULL);
		// onOffText.text = "On";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_onOffText_7();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral616FA8FACA4BD63856D14D13CE36C30A22C4AE73);
		// }
		goto IL_008c;
	}

IL_0035:
	{
		// PlayerPrefs.SetString(playerPrefs, "Play");
		String_t* L_4 = __this->get_playerPrefs_8();
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(L_4, _stringLiteral54F48823060A5886D12558C4BBB0CDBB0E83F58A, /*hidden argument*/NULL);
		// if(PlayerPrefs.GetString("Music") == "Play" && PlayerPrefs.GetString("Sound") == "Play")
		String_t* L_5;
		L_5 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E, /*hidden argument*/NULL);
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteral54F48823060A5886D12558C4BBB0CDBB0E83F58A, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_007c;
		}
	}
	{
		String_t* L_7;
		L_7 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, /*hidden argument*/NULL);
		bool L_8;
		L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_7, _stringLiteral54F48823060A5886D12558C4BBB0CDBB0E83F58A, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_007c;
		}
	}
	{
		// musicAudioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_9 = __this->get_musicAudioSource_6();
		NullCheck(L_9);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_9, /*hidden argument*/NULL);
	}

IL_007c:
	{
		// onOffText.text = "Off";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = __this->get_onOffText_7();
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, _stringLiteral7DB229E4B4513366157C0D536C533A2B6C5F7AA5);
	}

IL_008c:
	{
		// isPlay = !isPlay;
		bool L_11 = __this->get_isPlay_5();
		__this->set_isPlay_5((bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0));
		// }
		return;
	}
}
// System.Void SoundOnOff::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundOnOff__ctor_mF5AAEE18ED4CE0FB9D90027131423B39B9B1D9A3 (SoundOnOff_t491C399CECC1539C7BC5D027AC0D6069ABEB9D15 * __this, const RuntimeMethod* method)
{
	{
		// private bool isPlay = true;
		__this->set_isPlay_5((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SpawnObjects::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnObjects_Start_m3ADE17C24E03DDD0520C73662AEE3261326ABFC9 (SpawnObjects_t9F0D85B3A0340F19ADD6E0C793111837E2A84D92 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(spawnObjects());
		RuntimeObject* L_0;
		L_0 = SpawnObjects_spawnObjects_m8A6C9833B8B0CFE9557B7D092D9775779C5B5D42(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator SpawnObjects::spawnObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnObjects_spawnObjects_m8A6C9833B8B0CFE9557B7D092D9775779C5B5D42 (SpawnObjects_t9F0D85B3A0340F19ADD6E0C793111837E2A84D92 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CspawnObjectsU3Ed__4_t945068FD287B56AC269BED9B37B6105E926E1FFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CspawnObjectsU3Ed__4_t945068FD287B56AC269BED9B37B6105E926E1FFF * L_0 = (U3CspawnObjectsU3Ed__4_t945068FD287B56AC269BED9B37B6105E926E1FFF *)il2cpp_codegen_object_new(U3CspawnObjectsU3Ed__4_t945068FD287B56AC269BED9B37B6105E926E1FFF_il2cpp_TypeInfo_var);
		U3CspawnObjectsU3Ed__4__ctor_mC8D5AD1C1CB6EDB2E6388E8973F793FE77FAA641(L_0, 0, /*hidden argument*/NULL);
		U3CspawnObjectsU3Ed__4_t945068FD287B56AC269BED9B37B6105E926E1FFF * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void SpawnObjects::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnObjects__ctor_mF37FE719D9A4F719752C7B6704E7A758C730C4E5 (SpawnObjects_t9F0D85B3A0340F19ADD6E0C793111837E2A84D92 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void StartGame::startGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartGame_startGame_mB6985D4096C75D3C94F1F797C05F9AC0B7601DDD (StartGame_tF6E1D3C7ABDCE571787D7EA637AD9B9F25C4D742 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Score_tE07CBD9780DFC212BE43719819F512E8861103C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74B83A50A58269C4EECA165C2ABB62B80AAFC9D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetString("Lose","No");
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral74B83A50A58269C4EECA165C2ABB62B80AAFC9D0, _stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66, /*hidden argument*/NULL);
		// StartCoroutine(openGame());
		RuntimeObject* L_0;
		L_0 = StartGame_openGame_m83918FDF440CF2A84332F782FC2B6B4B3A3B7D28(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// Score.nowScore = 0;
		((Score_tE07CBD9780DFC212BE43719819F512E8861103C7_StaticFields*)il2cpp_codegen_static_fields_for(Score_tE07CBD9780DFC212BE43719819F512E8861103C7_il2cpp_TypeInfo_var))->set_nowScore_4(0);
		// EatObjects.sliderScore = 0;
		((EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59_StaticFields*)il2cpp_codegen_static_fields_for(EatObjects_tDAD3A73FDEDBB8B8F22AF54BEB6590953628DF59_il2cpp_TypeInfo_var))->set_sliderScore_4((0.0f));
		// }
		return;
	}
}
// System.Collections.IEnumerator StartGame::openGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StartGame_openGame_m83918FDF440CF2A84332F782FC2B6B4B3A3B7D28 (StartGame_tF6E1D3C7ABDCE571787D7EA637AD9B9F25C4D742 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CopenGameU3Ed__1_tA288DA1E7A707A635E041CE9EEF39A68687D4C6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CopenGameU3Ed__1_tA288DA1E7A707A635E041CE9EEF39A68687D4C6C * L_0 = (U3CopenGameU3Ed__1_tA288DA1E7A707A635E041CE9EEF39A68687D4C6C *)il2cpp_codegen_object_new(U3CopenGameU3Ed__1_tA288DA1E7A707A635E041CE9EEF39A68687D4C6C_il2cpp_TypeInfo_var);
		U3CopenGameU3Ed__1__ctor_m7737F905410E8B7795C684C6DA27CB9812014950(L_0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void StartGame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartGame__ctor_mC19371724DFAF4D377A6344CC770DBF0F7F9767E (StartGame_tF6E1D3C7ABDCE571787D7EA637AD9B9F25C4D742 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void AdInitialize/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFB08D259F0541A36B56B8F8DCDE80947F62F4A6C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0C6FCE158CE02E8A0217EABA93CB69971C59AA10_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0C6FCE158CE02E8A0217EABA93CB69971C59AA10 * L_0 = (U3CU3Ec_t0C6FCE158CE02E8A0217EABA93CB69971C59AA10 *)il2cpp_codegen_object_new(U3CU3Ec_t0C6FCE158CE02E8A0217EABA93CB69971C59AA10_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m7C057BC3F6E25E0DFD8E8644B74DFA74BC12CD6A(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t0C6FCE158CE02E8A0217EABA93CB69971C59AA10_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0C6FCE158CE02E8A0217EABA93CB69971C59AA10_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void AdInitialize/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7C057BC3F6E25E0DFD8E8644B74DFA74BC12CD6A (U3CU3Ec_t0C6FCE158CE02E8A0217EABA93CB69971C59AA10 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AdInitialize/<>c::<Awake>b__0_0(GoogleMobileAds.Api.InitializationStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CAwakeU3Eb__0_0_m043C46CCB459E4FD264B3115F68742BDC04F1D0F (U3CU3Ec_t0C6FCE158CE02E8A0217EABA93CB69971C59AA10 * __this, InitializationStatus_t7093D8754C20FFF65DB1C809FCA56437C562722C * ___initStatus0, const RuntimeMethod* method)
{
	{
		// MobileAds.Initialize(initStatus => { });
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
// System.Void GoMain/<openMain>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopenMainU3Ed__1__ctor_mD2FB2AE9E38EA44F141741544E9A4147C970C254 (U3CopenMainU3Ed__1_t69AB38CA5795F00E94DF56DA6CF21A50E7DE5C93 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GoMain/<openMain>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopenMainU3Ed__1_System_IDisposable_Dispose_m5B1B06DDD095C085E85C062426736D991FDF92FE (U3CopenMainU3Ed__1_t69AB38CA5795F00E94DF56DA6CF21A50E7DE5C93 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GoMain/<openMain>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CopenMainU3Ed__1_MoveNext_m86FBFC500E0AB1994F63BFC6746DC3F84890E7D0 (U3CopenMainU3Ed__1_t69AB38CA5795F00E94DF56DA6CF21A50E7DE5C93 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(0.2f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (0.200000003f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0030:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SceneManager.LoadScene("Main");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object GoMain/<openMain>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CopenMainU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4E1F9783C67466DE46745EDD175641A8A199807D (U3CopenMainU3Ed__1_t69AB38CA5795F00E94DF56DA6CF21A50E7DE5C93 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GoMain/<openMain>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopenMainU3Ed__1_System_Collections_IEnumerator_Reset_m6C19C9503DBD6739C8D3B08E03C4299569E9F403 (U3CopenMainU3Ed__1_t69AB38CA5795F00E94DF56DA6CF21A50E7DE5C93 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CopenMainU3Ed__1_System_Collections_IEnumerator_Reset_m6C19C9503DBD6739C8D3B08E03C4299569E9F403_RuntimeMethod_var)));
	}
}
// System.Object GoMain/<openMain>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CopenMainU3Ed__1_System_Collections_IEnumerator_get_Current_m1E268FFFF379EC498A9CD3CC1EF802E7839D0326 (U3CopenMainU3Ed__1_t69AB38CA5795F00E94DF56DA6CF21A50E7DE5C93 * __this, const RuntimeMethod* method)
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
// System.Void GoSettings/<openSettings>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopenSettingsU3Ed__1__ctor_mFADF477A98A50F9F07B6FB00DA8F6A4660ADBA35 (U3CopenSettingsU3Ed__1_tBAD2D95ABD672BF8FD28BDB24632FEB74D60DC79 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GoSettings/<openSettings>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopenSettingsU3Ed__1_System_IDisposable_Dispose_mD9A078B54A47D6F388CA7567593D62A31AF855C9 (U3CopenSettingsU3Ed__1_tBAD2D95ABD672BF8FD28BDB24632FEB74D60DC79 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GoSettings/<openSettings>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CopenSettingsU3Ed__1_MoveNext_m3BD7E51FE27035F1D22D770A1AC85F92BF5C8329 (U3CopenSettingsU3Ed__1_tBAD2D95ABD672BF8FD28BDB24632FEB74D60DC79 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E3E7A9A92462225FFAF23BB1259E1BCFCEDDD0F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(0.2f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (0.200000003f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0030:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SceneManager.LoadScene("Settings");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral0E3E7A9A92462225FFAF23BB1259E1BCFCEDDD0F, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object GoSettings/<openSettings>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CopenSettingsU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEFC6C47673E035763F3DB11473E3198DF6F0635B (U3CopenSettingsU3Ed__1_tBAD2D95ABD672BF8FD28BDB24632FEB74D60DC79 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GoSettings/<openSettings>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopenSettingsU3Ed__1_System_Collections_IEnumerator_Reset_mB5F6A31443EA049F88BA4EBAA6C3305C5D31ED82 (U3CopenSettingsU3Ed__1_tBAD2D95ABD672BF8FD28BDB24632FEB74D60DC79 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CopenSettingsU3Ed__1_System_Collections_IEnumerator_Reset_mB5F6A31443EA049F88BA4EBAA6C3305C5D31ED82_RuntimeMethod_var)));
	}
}
// System.Object GoSettings/<openSettings>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CopenSettingsU3Ed__1_System_Collections_IEnumerator_get_Current_m28262C72E060976588AF7DDD730E568AC9178265 (U3CopenSettingsU3Ed__1_tBAD2D95ABD672BF8FD28BDB24632FEB74D60DC79 * __this, const RuntimeMethod* method)
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
// System.Void Outline/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1FF4A217292D37DA703B9C8AC1034AB976091256 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E * L_0 = (U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E *)il2cpp_codegen_object_new(U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF9B89AF9C89EBA2E177F233D3742EC6B9E783D67(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Outline/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF9B89AF9C89EBA2E177F233D3742EC6B9E783D67 (U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32> Outline/<>c::<SmoothNormals>b__30_0(UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4  U3CU3Ec_U3CSmoothNormalsU3Eb__30_0_m243CCB6355ABA744A3D4278CEE1E935DF7391AC0 (U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vertex0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m7612B49A0C4765AB069FF3F0754E7B61C1A1F7C9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var groups = mesh.vertices.Select((vertex, index) => new KeyValuePair<Vector3, int>(vertex, index)).GroupBy(pair => pair.Key);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___vertex0;
		int32_t L_1 = ___index1;
		KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4  L_2;
		memset((&L_2), 0, sizeof(L_2));
		KeyValuePair_2__ctor_m7612B49A0C4765AB069FF3F0754E7B61C1A1F7C9((&L_2), L_0, L_1, /*hidden argument*/KeyValuePair_2__ctor_m7612B49A0C4765AB069FF3F0754E7B61C1A1F7C9_RuntimeMethod_var);
		return L_2;
	}
}
// UnityEngine.Vector3 Outline/<>c::<SmoothNormals>b__30_1(System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  U3CU3Ec_U3CSmoothNormalsU3Eb__30_1_mE06EA252FE45A4AD9CDF96EC69961996798FAF75 (U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E * __this, KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4  ___pair0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mFF8D9FEFDF56EC6F38DA016CFEB6BD045AB7424B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var groups = mesh.vertices.Select((vertex, index) => new KeyValuePair<Vector3, int>(vertex, index)).GroupBy(pair => pair.Key);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = KeyValuePair_2_get_Key_mFF8D9FEFDF56EC6F38DA016CFEB6BD045AB7424B_inline((KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4 *)(&___pair0), /*hidden argument*/KeyValuePair_2_get_Key_mFF8D9FEFDF56EC6F38DA016CFEB6BD045AB7424B_RuntimeMethod_var);
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
// System.Void Outline/ListVector3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListVector3__ctor_mF76D832454EF12AE1EF141AFB6CD7957134806E7 (ListVector3_t54AB46ECA91F943A5FE7817CA662D0D5B78617B9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void SpawnObjects/<spawnObjects>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspawnObjectsU3Ed__4__ctor_mC8D5AD1C1CB6EDB2E6388E8973F793FE77FAA641 (U3CspawnObjectsU3Ed__4_t945068FD287B56AC269BED9B37B6105E926E1FFF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SpawnObjects/<spawnObjects>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspawnObjectsU3Ed__4_System_IDisposable_Dispose_m1D6D928CAA0C36FE930C61E1E2130495FA48E6EB (U3CspawnObjectsU3Ed__4_t945068FD287B56AC269BED9B37B6105E926E1FFF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean SpawnObjects/<spawnObjects>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CspawnObjectsU3Ed__4_MoveNext_m4B21BA7864CFE2352C6B4FEF20BE93E10B1F28D8 (U3CspawnObjectsU3Ed__4_t945068FD287B56AC269BED9B37B6105E926E1FFF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SpawnObjects_t9F0D85B3A0340F19ADD6E0C793111837E2A84D92 * V_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SpawnObjects_t9F0D85B3A0340F19ADD6E0C793111837E2A84D92 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00c4;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0021:
	{
		// timeToSpawn = Random.Range(1f, 5f);
		SpawnObjects_t9F0D85B3A0340F19ADD6E0C793111837E2A84D92 * L_4 = V_1;
		float L_5;
		L_5 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((1.0f), (5.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_timeToSpawn_5(L_5);
		// spawnPosition = Random.Range(-1f, 1f);
		SpawnObjects_t9F0D85B3A0340F19ADD6E0C793111837E2A84D92 * L_6 = V_1;
		float L_7;
		L_7 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_spawnPosition_6(L_7);
		// Vector3 spawnPos = new Vector3(transform.position.x + spawnPosition, transform.position.y, transform.position.z);
		SpawnObjects_t9F0D85B3A0340F19ADD6E0C793111837E2A84D92 * L_8 = V_1;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_x_2();
		SpawnObjects_t9F0D85B3A0340F19ADD6E0C793111837E2A84D92 * L_12 = V_1;
		NullCheck(L_12);
		float L_13 = L_12->get_spawnPosition_6();
		SpawnObjects_t9F0D85B3A0340F19ADD6E0C793111837E2A84D92 * L_14 = V_1;
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_y_3();
		SpawnObjects_t9F0D85B3A0340F19ADD6E0C793111837E2A84D92 * L_18 = V_1;
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_19, /*hidden argument*/NULL);
		float L_21 = L_20.get_z_4();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), ((float)il2cpp_codegen_add((float)L_11, (float)L_13)), L_17, L_21, /*hidden argument*/NULL);
		// GameObject spawningObject = Instantiate(objectsToSpawn[Random.Range(0, objectsToSpawn.Length)], spawnPos, Quaternion.identity);
		SpawnObjects_t9F0D85B3A0340F19ADD6E0C793111837E2A84D92 * L_22 = V_1;
		NullCheck(L_22);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_23 = L_22->get_objectsToSpawn_4();
		SpawnObjects_t9F0D85B3A0340F19ADD6E0C793111837E2A84D92 * L_24 = V_1;
		NullCheck(L_24);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_25 = L_24->get_objectsToSpawn_4();
		NullCheck(L_25);
		int32_t L_26;
		L_26 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_23);
		int32_t L_27 = L_26;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = V_2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_30;
		L_30 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31;
		L_31 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_28, L_29, L_30, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// yield return new WaitForSeconds(timeToSpawn);
		SpawnObjects_t9F0D85B3A0340F19ADD6E0C793111837E2A84D92 * L_32 = V_1;
		NullCheck(L_32);
		float L_33 = L_32->get_timeToSpawn_5();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_34 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_34, L_33, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_34);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00c4:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_0021;
	}
}
// System.Object SpawnObjects/<spawnObjects>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CspawnObjectsU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2D7091BF292F8990ABB0170D3C591CB090A64C48 (U3CspawnObjectsU3Ed__4_t945068FD287B56AC269BED9B37B6105E926E1FFF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SpawnObjects/<spawnObjects>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspawnObjectsU3Ed__4_System_Collections_IEnumerator_Reset_mFC57AE50EB697E9AC8BE14BBEF762718F8D041FD (U3CspawnObjectsU3Ed__4_t945068FD287B56AC269BED9B37B6105E926E1FFF * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CspawnObjectsU3Ed__4_System_Collections_IEnumerator_Reset_mFC57AE50EB697E9AC8BE14BBEF762718F8D041FD_RuntimeMethod_var)));
	}
}
// System.Object SpawnObjects/<spawnObjects>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CspawnObjectsU3Ed__4_System_Collections_IEnumerator_get_Current_m974C6FF08AADA5F7B7D1FECD003FD1A32B5D158C (U3CspawnObjectsU3Ed__4_t945068FD287B56AC269BED9B37B6105E926E1FFF * __this, const RuntimeMethod* method)
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
// System.Void StartGame/<openGame>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopenGameU3Ed__1__ctor_m7737F905410E8B7795C684C6DA27CB9812014950 (U3CopenGameU3Ed__1_tA288DA1E7A707A635E041CE9EEF39A68687D4C6C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void StartGame/<openGame>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopenGameU3Ed__1_System_IDisposable_Dispose_mA41A1C102B9E40B43C0BD12209C918EE8038B5DF (U3CopenGameU3Ed__1_tA288DA1E7A707A635E041CE9EEF39A68687D4C6C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean StartGame/<openGame>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CopenGameU3Ed__1_MoveNext_m16537DB0DEC7EE91292B219B42D1B2C6DA0BD751 (U3CopenGameU3Ed__1_tA288DA1E7A707A635E041CE9EEF39A68687D4C6C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(0.2f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (0.200000003f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0030:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SceneManager.LoadScene("Game");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object StartGame/<openGame>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CopenGameU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD58F8800E22A8E2C440E5FD291CBC7858C1E52C4 (U3CopenGameU3Ed__1_tA288DA1E7A707A635E041CE9EEF39A68687D4C6C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void StartGame/<openGame>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopenGameU3Ed__1_System_Collections_IEnumerator_Reset_m6C5BA4F7ADCCC03F74FDDFD56D32C4FD7DE22877 (U3CopenGameU3Ed__1_tA288DA1E7A707A635E041CE9EEF39A68687D4C6C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CopenGameU3Ed__1_System_Collections_IEnumerator_Reset_m6C5BA4F7ADCCC03F74FDDFD56D32C4FD7DE22877_RuntimeMethod_var)));
	}
}
// System.Object StartGame/<openGame>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CopenGameU3Ed__1_System_Collections_IEnumerator_get_Current_mA3DE2CC91EEA019125F1062A4B9820D0979DAEA6 (U3CopenGameU3Ed__1_tA288DA1E7A707A635E041CE9EEF39A68687D4C6C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Slider_get_maxValue_m369FF59A4AEC91348D79BF1906F4012A2A850959_inline (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * __this, const RuntimeMethod* method)
{
	{
		// public float maxValue { get { return m_MaxValue; } set { if (SetPropertyUtility.SetStruct(ref m_MaxValue, value)) { Set(m_Value); UpdateVisuals(); } } }
		float L_0 = __this->get_m_MaxValue_24();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InterstitialAd_IsLoaded_m5581AE8F936420BAD497C363CC9850D8D1BFE537_inline (InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isLoaded_2();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m8B07FA74932434901F7245DE06D66CBFDE9211E7_gshared_inline (KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_1();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_2 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_2, (int32_t)L_3);
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  KeyValuePair_2_get_Key_mFF8D9FEFDF56EC6F38DA016CFEB6BD045AB7424B_gshared_inline (KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4 * __this, const RuntimeMethod* method)
{
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )__this->get_key_0();
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0;
	}
}
