#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<ControlFreak2.Extra.PressureLevelBinding/RangeConfig>
struct IEnumerable_1_t9115866E8FCD874825B84E81FD63C61E364C6905;
// System.Collections.Generic.List`1<ControlFreak2.Demos.RPG.InteractiveObjectBase>
struct List_1_tA216AD71654DE34217F98DCAC244F8CF09DD2196;
// System.Collections.Generic.List`1<UnityEngine.KeyCode>
struct List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<ControlFreak2.TouchControl>
struct List_1_t21486FDA09A0905AB38133CBE09BE8518AFCD7DF;
// System.Collections.Generic.List`1<ControlFreak2.InputRig/AxisConfig>
struct List_1_tE6199EE8A638591EDFC001187ED0440D331D23B3;
// System.Collections.Generic.List`1<ControlFreak2.InputRig/EmulatedTouchState>
struct List_1_t92190B24B6E5E8A48205FF2C0A24870349ED1407;
// System.Collections.Generic.List`1<ControlFreak2.Extra.PressureLevelBinding/RangeConfig>
struct List_1_t9B36A7BB272180EA8C2B8AD01D706A400F2228BA;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC;
// ControlFreak2.Demos.Guns.Gun[]
struct GunU5BU5D_tB92F18F2BD56FA0845F764B85791129502E6A8DB;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// ControlFreak2.Demos.RPG.InteractiveObjectBase[]
struct InteractiveObjectBaseU5BU5D_t6E62F4F335203902D82EE1E1953DF84B5732EAC7;
// UnityEngine.KeyCode[]
struct KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// ControlFreak2.InputRig/AxisConfig[]
struct AxisConfigU5BU5D_t724343885E037BFCEE5B699EC5165506F8A9712E;
// ControlFreak2.InputRig/GamepadConfig[]
struct GamepadConfigU5BU5D_t57AB3D503118D89485B13A05D547862FEE72C3FD;
// ControlFreak2.InputRig/Touch[]
struct TouchU5BU5D_t0765CB993F65F7536633EC068DAC67FABB8856A2;
// ControlFreak2.Extra.PressureLevelBinding/RangeConfig[]
struct RangeConfigU5BU5D_t56211118954B5EB0E5E63519578FEB662D5C3E45;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// ControlFreak2.Internal.AnalogConfig
struct AnalogConfig_tBEE2CA47D4A71C9749F7DB1CEAFEBF4A6EB74508;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// ControlFreak2.DebugUtils.AxisDebugger
struct AxisDebugger_t2ACCA0645DAC9496F451EBD2611AB74782288088;
// ControlFreak2.Extra.AxisEvent
struct AxisEvent_tEB70EB24A962A9E44D4D9603F6A865F662753037;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Collections.BitArray
struct BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616;
// ControlFreak2.Demos.Guns.Bullet
struct Bullet_t225D01DE0E6CB0F6F53E4A877FB3C0F283F0681F;
// ControlFreak2.Extra.ButtonPressEvent
struct ButtonPressEvent_tFC3D8E806CDA535836498B3E407050724F433850;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// ControlFreak2.Demos.RPG.CharacterAction
struct CharacterAction_t3057F4DC5B16E52558F1FCAFEE87299FBB5F2EDB;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// ControlFreak2.Demos.Characters.DualStickShooterCharaAnimator
struct DualStickShooterCharaAnimator_t85D9CBD03D995E8279F2A28E4F5D15AE0976BD2D;
// ControlFreak2.Demos.Characters.DualStickShooterCharaMotor
struct DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// ControlFreak2.Internal.FixedTimeStepController
struct FixedTimeStepController_t4A0AFC7A8A93AD5F0D64D66C041169BA637ED3EF;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14;
// UnityEngine.GUISettings
struct GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847;
// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9;
// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// ControlFreak2.DebugUtils.GamepadHardwareTester
struct GamepadHardwareTester_t458719C4A6B74E1549C2B8408004517C72AEC3D5;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// ControlFreak2.Demos.Guns.Gun
struct Gun_tD0AB2E3133C17135370A6E3A46419C9A35958F19;
// ControlFreak2.Demos.Guns.GunActivator
struct GunActivator_t59CCEF329447324DB6D0FDDDF30DA709AA4466C5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// ControlFreak2.InputRig
struct InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC;
// ControlFreak2.Demos.RPG.InteractiveObjectBase
struct InteractiveObjectBase_t478C103D6AEA44F79CE7838E698714F56EB58B30;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// ControlFreak2.Internal.JoystickConfig
struct JoystickConfig_tAB3D8447D31893C32F655F3B864C3FF202714FD2;
// ControlFreak2.Extra.KeyPressEvent
struct KeyPressEvent_t001A96A38548C2F80BE6B1CD81EB91BC1791F949;
// ControlFreak2.Demos.RPG.LevelData
struct LevelData_tC6399F01040DB1B18E5D9F2CCC6FA6D864BA9791;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// ControlFreak2.Extra.PressureLevelBinding
struct PressureLevelBinding_t05C01264D8D6E99EF81B7E0E040F5C306D8590BF;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// ControlFreak2.Demos.Cameras.SimpleFollowCam
struct SimpleFollowCam_t7726ABE6ADB891E3C15F380906EFC02423762DB7;
// ControlFreak2.Demos.RPG.SimpleInteractiveObject
struct SimpleInteractiveObject_t090499005CA9596CF26D7F6E8FCBF102D8E05D59;
// System.String
struct String_t;
// ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara
struct SwipeSlasherChara_tA09072D8B2BCF3F5DA98004DF65E9057957DA804;
// ControlFreak2.Demos.SwipeSlasher.SwipeSlasherUserControl
struct SwipeSlasherUserControl_t3FB19BA8E21601F351F3BD3E5B2F288B1594B791;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98;
// ControlFreak2.InputRig/AutomaticInputConfigCollection
struct AutomaticInputConfigCollection_t0F1DBBF0B8D4B13A2A7500348C683061924F4B3E;
// ControlFreak2.InputRig/AxisConfig
struct AxisConfig_t8F9A50F190289F3CB2FBA928F5152C118BB047CF;
// ControlFreak2.InputRig/AxisConfigCollection
struct AxisConfigCollection_t902CA454AE9C6A3DF35B54ED5A0AD2AE40E27691;
// ControlFreak2.InputRig/GamepadConfig
struct GamepadConfig_tD39C3480BCA89C8BDE9690378482167CCA8CF062;
// ControlFreak2.InputRig/MouseConfig
struct MouseConfig_t22BACAABBBAAFEDBDFE04D3AC50FD309D21FB3EF;
// ControlFreak2.InputRig/RigSwitchCollection
struct RigSwitchCollection_tF910764A56DE514526A629CF29F8E855DC00D407;
// ControlFreak2.InputRig/ScrollWheelState
struct ScrollWheelState_t3AF5FD784DF44EFDD353AD48EC98A616553E67F8;
// ControlFreak2.InputRig/TiltConfig
struct TiltConfig_t010F5644048BA417F22B36BA9E80B82E5B28E859;
// ControlFreak2.InputRig/VirtualJoystickConfigCollection
struct VirtualJoystickConfigCollection_t53DD9FBAD315E75A6CDC42B68030CBF80F6FB02D;
// ControlFreak2.Extra.PressureLevelBinding/RangeConfig
struct RangeConfig_t19BDD10175D0B1625DD889875A96BC9FC1FEE2ED;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9B36A7BB272180EA8C2B8AD01D706A400F2228BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA216AD71654DE34217F98DCAC244F8CF09DD2196_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RangeConfigU5BU5D_t56211118954B5EB0E5E63519578FEB662D5C3E45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RangeConfig_t19BDD10175D0B1625DD889875A96BC9FC1FEE2ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral000F7A93128587B9BBBD546B895D2678C0DECAED;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral05E6D4CE827A54CF3CF59CF45B81C191DDF455DA;
IL2CPP_EXTERN_C String_t* _stringLiteral0BC7355B1AEAD8EBD81297EA6B11EC661643E168;
IL2CPP_EXTERN_C String_t* _stringLiteral10A105116F1400FFCE661E402C3C12DDCA0D688C;
IL2CPP_EXTERN_C String_t* _stringLiteral1237586C59E626EEA17908F667E8FB9F384FF75B;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral1841719E82DAE096F9165180E2824E38862F1DA0;
IL2CPP_EXTERN_C String_t* _stringLiteral19C42727AD0EDA6AA8AC1F475E4028769FA695FC;
IL2CPP_EXTERN_C String_t* _stringLiteral19C8EC7E4EA17B33C63D6F07A1A863D4B590972A;
IL2CPP_EXTERN_C String_t* _stringLiteral204F624A305ADBA5A4072B77088BF083D0C11CB7;
IL2CPP_EXTERN_C String_t* _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952;
IL2CPP_EXTERN_C String_t* _stringLiteral21AA24767E9AA8C488C0F87C701183508C0BE794;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral3AEBC3FE5056D1B945064BB8AC17061A3793A837;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral45584490341DA43A5ADF5C410EDCEDA26125301C;
IL2CPP_EXTERN_C String_t* _stringLiteral482A4C4330185F51A24A753ED387A6AA86879791;
IL2CPP_EXTERN_C String_t* _stringLiteral4EA2D1268A0C1B9888A89DD896654906E5F2223A;
IL2CPP_EXTERN_C String_t* _stringLiteral51A5C2976907608B329FD258084464A562E26572;
IL2CPP_EXTERN_C String_t* _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32;
IL2CPP_EXTERN_C String_t* _stringLiteral63A230CFE60A4B1F60140A9342618308FAF6EF62;
IL2CPP_EXTERN_C String_t* _stringLiteral66DAD23B2D9F87BF5E8B44FF0795EC5DEB669F59;
IL2CPP_EXTERN_C String_t* _stringLiteral68264C964D46F9CF8078E84BA733DCCB94C8E2A8;
IL2CPP_EXTERN_C String_t* _stringLiteral687D9BA523E32A2B8A4FEAD5E5EAE89D357E1420;
IL2CPP_EXTERN_C String_t* _stringLiteral6B770C7673EED9A98AD0E462CCD688F535ACAE7B;
IL2CPP_EXTERN_C String_t* _stringLiteral6C1E423C1E67151B12584C7EE43D2628AD968214;
IL2CPP_EXTERN_C String_t* _stringLiteral6E0D83EF9088AE8CC7BBD38084F8BA927AC35FCB;
IL2CPP_EXTERN_C String_t* _stringLiteral6FADC741FD58A21025209091F355127AF62AC90E;
IL2CPP_EXTERN_C String_t* _stringLiteral7584AF33CAC6106FD9FBD498FD1D7AC94CCC160F;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral827A064B843948937EC2A9C37A341512B7EE7E5D;
IL2CPP_EXTERN_C String_t* _stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral8A4B5B68E20745061C6F90EFAFA2A04F86E5A7EA;
IL2CPP_EXTERN_C String_t* _stringLiteral8E3324233FE7C113A9E4ECB37585211E8FEE544C;
IL2CPP_EXTERN_C String_t* _stringLiteral9236BE8B6DDDBB04FEA6E54A9C6A72C4C98CE6FE;
IL2CPP_EXTERN_C String_t* _stringLiteral996BFF8945A41E2527585950A7A1160F5745A49B;
IL2CPP_EXTERN_C String_t* _stringLiteralA05FF863B80DD22B042F81BC5D81F81C5C9FEC12;
IL2CPP_EXTERN_C String_t* _stringLiteralA12B5FF5DCE3DD6F0BB54FBE1A39D86B88E8E7C6;
IL2CPP_EXTERN_C String_t* _stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07;
IL2CPP_EXTERN_C String_t* _stringLiteralBAAD78212E3C3793E4F755787AED57DCEAA016D6;
IL2CPP_EXTERN_C String_t* _stringLiteralC7AE700EE77DD1EBC8AF920BEEB52FC5A5C1AE17;
IL2CPP_EXTERN_C String_t* _stringLiteralC7B62A8E1A104801FFCFE62759D187495ECE3F44;
IL2CPP_EXTERN_C String_t* _stringLiteralC8CCF6E6153356981C5D9B7080B1E3C9397F0100;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC3C33532BD41C20FDE975364F00E8C871861CF0;
IL2CPP_EXTERN_C String_t* _stringLiteralDD86881DBA7E6B755DFE2849A5B0579CC3D828CD;
IL2CPP_EXTERN_C String_t* _stringLiteralDEF7A982F3A7604917175ADBBC3B1DA576312F13;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE190AC91CB23B9439E0AAF84F5F1A4D6AD56B747;
IL2CPP_EXTERN_C String_t* _stringLiteralE1BFBB636B912C9CA317CB60CA07E2FF8A216F86;
IL2CPP_EXTERN_C String_t* _stringLiteralE5C4436D69A77C7370312B6F49B071210D4FB608;
IL2CPP_EXTERN_C String_t* _stringLiteralE91A196B9689361707CD830AD0A1F0128CF82F70;
IL2CPP_EXTERN_C String_t* _stringLiteralEE71910C7E19B0D89B96AF6011CDFDAF6EA1CF1C;
IL2CPP_EXTERN_C String_t* _stringLiteralF5D416C12BE515E3BBCC657F12A1BF186373E237;
IL2CPP_EXTERN_C String_t* _stringLiteralFAA6F40E032A321CAD554113DD758193D789B097;
IL2CPP_EXTERN_C String_t* _stringLiteralFAA805E2ED1AC5955830BCA60404EE9D093DDCD6;
IL2CPP_EXTERN_C String_t* _stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisInputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC_m29D508696F57D665A0E35DBF9760073035589503_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisDualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763_mA4374779F36BF3076C2542FB015F97B46CD7B485_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSwipeSlasherChara_tA09072D8B2BCF3F5DA98004DF65E9057957DA804_m91805AF4EE2DFDC4D44F36C89AA35A409B9D17BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m75464AC0B79BC9502652AAB3F47194CD36BAF6EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA016A42269A620BA6707C223C39BED0F6D9C2E5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m315CB53EA082E9AC52BE8AE2E32A01A923CEC239_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6420E7FBFE9F42C9CE66D9B0B256E2C40D2DDEE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE842D0A7B517AEA0AD5D48252B3F1E8D728D3782_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m36B15AA9978173067A04CFB21877C021D2257845_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m473D521DF80D9DF9B4450D2DF4A33E4EB881EDFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m910115A1D94CB909DF5B9CA4BB152E4601EEED93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisBullet_t225D01DE0E6CB0F6F53E4A877FB3C0F283F0681F_mFE8497B87EB104FCC622BF8DB6AAAC1FF45620B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PressureLevelBinding_UpdateRanges_mCE5AB3ECE12A9588A07EACA06266DF8C6F9277E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com;

struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
struct GunU5BU5D_tB92F18F2BD56FA0845F764B85791129502E6A8DB;
struct KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct RangeConfigU5BU5D_t56211118954B5EB0E5E63519578FEB662D5C3E45;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<ControlFreak2.Demos.RPG.InteractiveObjectBase>
struct List_1_tA216AD71654DE34217F98DCAC244F8CF09DD2196  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InteractiveObjectBaseU5BU5D_t6E62F4F335203902D82EE1E1953DF84B5732EAC7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA216AD71654DE34217F98DCAC244F8CF09DD2196_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InteractiveObjectBaseU5BU5D_t6E62F4F335203902D82EE1E1953DF84B5732EAC7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ControlFreak2.InputRig/AxisConfig>
struct List_1_tE6199EE8A638591EDFC001187ED0440D331D23B3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AxisConfigU5BU5D_t724343885E037BFCEE5B699EC5165506F8A9712E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE6199EE8A638591EDFC001187ED0440D331D23B3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AxisConfigU5BU5D_t724343885E037BFCEE5B699EC5165506F8A9712E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ControlFreak2.Extra.PressureLevelBinding/RangeConfig>
struct List_1_t9B36A7BB272180EA8C2B8AD01D706A400F2228BA  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RangeConfigU5BU5D_t56211118954B5EB0E5E63519578FEB662D5C3E45* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9B36A7BB272180EA8C2B8AD01D706A400F2228BA_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RangeConfigU5BU5D_t56211118954B5EB0E5E63519578FEB662D5C3E45* ___s_emptyArray_5;
};

// ControlFreak2.InputRig/NamedConfigCollection`1<ControlFreak2.InputRig/AxisConfig>
struct NamedConfigCollection_1_tFB031543260187BDA8DB94ECC74235EDB99A32ED  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> ControlFreak2.InputRig/NamedConfigCollection`1::list
	List_1_tE6199EE8A638591EDFC001187ED0440D331D23B3* ___list_0;
	// ControlFreak2.InputRig ControlFreak2.InputRig/NamedConfigCollection`1::rig
	InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC* ___rig_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14  : public RuntimeObject
{
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject* ___value_1;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// ControlFreak2.InputRig/NamedConfigElement
struct NamedConfigElement_t138BA961D6D0C1AD9AA7D79F79AB3F37A7AAB6E5  : public RuntimeObject
{
	// System.String ControlFreak2.InputRig/NamedConfigElement::name
	String_t* ___name_0;
};

// ControlFreak2.Extra.PressureLevelBinding/RangeConfig
struct RangeConfig_t19BDD10175D0B1625DD889875A96BC9FC1FEE2ED  : public RuntimeObject
{
	// System.Single ControlFreak2.Extra.PressureLevelBinding/RangeConfig::min
	float ___min_0;
	// System.Single ControlFreak2.Extra.PressureLevelBinding/RangeConfig::max
	float ___max_1;
	// UnityEngine.KeyCode ControlFreak2.Extra.PressureLevelBinding/RangeConfig::keyTarget
	int32_t ___keyTarget_2;
	// System.String ControlFreak2.Extra.PressureLevelBinding/RangeConfig::axisTarget
	String_t* ___axisTarget_3;
	// System.Boolean ControlFreak2.Extra.PressureLevelBinding/RangeConfig::positiveAxisSide
	bool ___positiveAxisSide_4;
	// System.Int32 ControlFreak2.Extra.PressureLevelBinding/RangeConfig::cachedAxisId
	int32_t ___cachedAxisId_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
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
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// ControlFreak2.InputRig/AxisConfig
struct AxisConfig_t8F9A50F190289F3CB2FBA928F5152C118BB047CF  : public NamedConfigElement_t138BA961D6D0C1AD9AA7D79F79AB3F37A7AAB6E5
{
	// ControlFreak2.InputRig/AxisType ControlFreak2.InputRig/AxisConfig::axisType
	int32_t ___axisType_1;
	// ControlFreak2.InputRig/DeltaTransformMode ControlFreak2.InputRig/AxisConfig::deltaMode
	int32_t ___deltaMode_2;
	// System.Boolean ControlFreak2.InputRig/AxisConfig::snap
	bool ___snap_3;
	// System.Single ControlFreak2.InputRig/AxisConfig::scale
	float ___scale_4;
	// System.Boolean ControlFreak2.InputRig/AxisConfig::affectSourceKeys
	bool ___affectSourceKeys_5;
	// UnityEngine.KeyCode ControlFreak2.InputRig/AxisConfig::affectedKeyPositive
	int32_t ___affectedKeyPositive_6;
	// UnityEngine.KeyCode ControlFreak2.InputRig/AxisConfig::affectedKeyNegative
	int32_t ___affectedKeyNegative_7;
	// UnityEngine.KeyCode ControlFreak2.InputRig/AxisConfig::keyboardPositive
	int32_t ___keyboardPositive_8;
	// UnityEngine.KeyCode ControlFreak2.InputRig/AxisConfig::keyboardPositiveAlt0
	int32_t ___keyboardPositiveAlt0_9;
	// UnityEngine.KeyCode ControlFreak2.InputRig/AxisConfig::keyboardPositiveAlt1
	int32_t ___keyboardPositiveAlt1_10;
	// UnityEngine.KeyCode ControlFreak2.InputRig/AxisConfig::keyboardPositiveAlt2
	int32_t ___keyboardPositiveAlt2_11;
	// UnityEngine.KeyCode ControlFreak2.InputRig/AxisConfig::keyboardNegative
	int32_t ___keyboardNegative_12;
	// UnityEngine.KeyCode ControlFreak2.InputRig/AxisConfig::keyboardNegativeAlt0
	int32_t ___keyboardNegativeAlt0_13;
	// UnityEngine.KeyCode ControlFreak2.InputRig/AxisConfig::keyboardNegativeAlt1
	int32_t ___keyboardNegativeAlt1_14;
	// UnityEngine.KeyCode ControlFreak2.InputRig/AxisConfig::keyboardNegativeAlt2
	int32_t ___keyboardNegativeAlt2_15;
	// System.Single ControlFreak2.InputRig/AxisConfig::analogToDigitalThresh
	float ___analogToDigitalThresh_16;
	// System.Single ControlFreak2.InputRig/AxisConfig::rawSmoothingTime
	float ___rawSmoothingTime_17;
	// System.Single ControlFreak2.InputRig/AxisConfig::smoothingTime
	float ___smoothingTime_18;
	// System.Single ControlFreak2.InputRig/AxisConfig::digitalToAnalogAccelTime
	float ___digitalToAnalogAccelTime_19;
	// System.Single ControlFreak2.InputRig/AxisConfig::digitalToAnalogDecelTime
	float ___digitalToAnalogDecelTime_20;
	// System.Boolean ControlFreak2.InputRig/AxisConfig::digitalToScrollAutoRepeat
	bool ___digitalToScrollAutoRepeat_21;
	// System.Single ControlFreak2.InputRig/AxisConfig::digitalToScrollRepeatInterval
	float ___digitalToScrollRepeatInterval_22;
	// System.Single ControlFreak2.InputRig/AxisConfig::digitalToScrollDelay
	float ___digitalToScrollDelay_23;
	// System.Single ControlFreak2.InputRig/AxisConfig::scrollToAnalogSmoothingTime
	float ___scrollToAnalogSmoothingTime_24;
	// System.Single ControlFreak2.InputRig/AxisConfig::scrollToAnalogStepDuration
	float ___scrollToAnalogStepDuration_25;
	// System.Single ControlFreak2.InputRig/AxisConfig::scrollToDeltaSmoothingTime
	float ___scrollToDeltaSmoothingTime_26;
	// System.Single ControlFreak2.InputRig/AxisConfig::valRaw
	float ___valRaw_27;
	// System.Single ControlFreak2.InputRig/AxisConfig::val
	float ___val_28;
	// System.Int32 ControlFreak2.InputRig/AxisConfig::scrollPrev
	int32_t ___scrollPrev_29;
	// System.Int32 ControlFreak2.InputRig/AxisConfig::scrollCur
	int32_t ___scrollCur_30;
	// System.Boolean ControlFreak2.InputRig/AxisConfig::digiCur
	bool ___digiCur_31;
	// System.Boolean ControlFreak2.InputRig/AxisConfig::digiPrev
	bool ___digiPrev_32;
	// System.Boolean ControlFreak2.InputRig/AxisConfig::muteUntilRelease
	bool ___muteUntilRelease_33;
	// System.Single ControlFreak2.InputRig/AxisConfig::digitalToAnalogVal
	float ___digitalToAnalogVal_34;
	// System.Boolean ControlFreak2.InputRig/AxisConfig::analogToDigitalNegCur
	bool ___analogToDigitalNegCur_35;
	// System.Boolean ControlFreak2.InputRig/AxisConfig::analogToDigitalPosCur
	bool ___analogToDigitalPosCur_36;
	// System.Single ControlFreak2.InputRig/AxisConfig::valSmoothVel
	float ___valSmoothVel_37;
	// System.Single ControlFreak2.InputRig/AxisConfig::valRawSmoothVel
	float ___valRawSmoothVel_38;
	// System.Single ControlFreak2.InputRig/AxisConfig::scrollToAnalogTimeRemaining
	float ___scrollToAnalogTimeRemaining_39;
	// System.Single ControlFreak2.InputRig/AxisConfig::scrollToAnalogValue
	float ___scrollToAnalogValue_40;
	// System.Int32 ControlFreak2.InputRig/AxisConfig::scrollToDigitalClicksRemaining
	int32_t ___scrollToDigitalClicksRemaining_41;
	// System.Boolean ControlFreak2.InputRig/AxisConfig::scrollToDigitalClickOn
	bool ___scrollToDigitalClickOn_42;
	// System.Single ControlFreak2.InputRig/AxisConfig::deltaAccumTarget
	float ___deltaAccumTarget_43;
	// System.Single ControlFreak2.InputRig/AxisConfig::deltaAccumSmoothCur
	float ___deltaAccumSmoothCur_44;
	// System.Single ControlFreak2.InputRig/AxisConfig::deltaAccumSmoothPrev
	float ___deltaAccumSmoothPrev_45;
	// System.Single ControlFreak2.InputRig/AxisConfig::deltaAccumRawCur
	float ___deltaAccumRawCur_46;
	// System.Single ControlFreak2.InputRig/AxisConfig::deltaAccumRawPrev
	float ___deltaAccumRawPrev_47;
	// System.Single ControlFreak2.InputRig/AxisConfig::scrollElapsedSinceChange
	float ___scrollElapsedSinceChange_48;
	// System.Boolean ControlFreak2.InputRig/AxisConfig::digiToScrollPositivePrev
	bool ___digiToScrollPositivePrev_49;
	// System.Boolean ControlFreak2.InputRig/AxisConfig::digiToScrollNegativePrev
	bool ___digiToScrollNegativePrev_50;
	// System.Boolean ControlFreak2.InputRig/AxisConfig::digiToScrollDelayPhase
	bool ___digiToScrollDelayPhase_51;
	// System.Boolean ControlFreak2.InputRig/AxisConfig::<frDigitalPos>k__BackingField
	bool ___U3CfrDigitalPosU3Ek__BackingField_52;
	// System.Boolean ControlFreak2.InputRig/AxisConfig::<frDigitalNeg>k__BackingField
	bool ___U3CfrDigitalNegU3Ek__BackingField_53;
	// System.Single ControlFreak2.InputRig/AxisConfig::<frAnalogPos>k__BackingField
	float ___U3CfrAnalogPosU3Ek__BackingField_54;
	// System.Single ControlFreak2.InputRig/AxisConfig::<frAnalogNeg>k__BackingField
	float ___U3CfrAnalogNegU3Ek__BackingField_55;
	// System.Single ControlFreak2.InputRig/AxisConfig::<frMouseDeltaPos>k__BackingField
	float ___U3CfrMouseDeltaPosU3Ek__BackingField_56;
	// System.Single ControlFreak2.InputRig/AxisConfig::<frMouseDeltaNeg>k__BackingField
	float ___U3CfrMouseDeltaNegU3Ek__BackingField_57;
	// System.Single ControlFreak2.InputRig/AxisConfig::<frTouchDeltaPos>k__BackingField
	float ___U3CfrTouchDeltaPosU3Ek__BackingField_58;
	// System.Single ControlFreak2.InputRig/AxisConfig::<frTouchDeltaNeg>k__BackingField
	float ___U3CfrTouchDeltaNegU3Ek__BackingField_59;
	// System.Single ControlFreak2.InputRig/AxisConfig::<frNormalizedDeltaPos>k__BackingField
	float ___U3CfrNormalizedDeltaPosU3Ek__BackingField_60;
	// System.Single ControlFreak2.InputRig/AxisConfig::<frNormalizedDeltaNeg>k__BackingField
	float ___U3CfrNormalizedDeltaNegU3Ek__BackingField_61;
	// System.Int32 ControlFreak2.InputRig/AxisConfig::<frScrollDelta>k__BackingField
	int32_t ___U3CfrScrollDeltaU3Ek__BackingField_62;
};

// ControlFreak2.InputRig/AxisConfigCollection
struct AxisConfigCollection_t902CA454AE9C6A3DF35B54ED5A0AD2AE40E27691  : public NamedConfigCollection_1_tFB031543260187BDA8DB94ECC74235EDB99A32ED
{
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.KeyCode
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5  : public RuntimeObject
{
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;
};

struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields
{
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___s_None_15;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_box_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_button_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_toggle_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_label_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textField_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textArea_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_window_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumbExtent_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSlider_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumb_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumbExtent_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_SliderMixed
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_SliderMixed_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbar_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarThumb_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarLeftButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarRightButton_22;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbar_23;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarThumb_24;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarUpButton_25;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarDownButton_26;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_ScrollView_27;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* ___m_CustomStyles_28;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847* ___m_Settings_29;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* ___m_Styles_31;
};

struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields
{
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___ms_Error_30;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* ___m_SkinChanged_32;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___current_33;
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// ControlFreak2.DebugUtils.AxisDebugger
struct AxisDebugger_t2ACCA0645DAC9496F451EBD2611AB74782288088  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean ControlFreak2.DebugUtils.AxisDebugger::drawGUI
	bool ___drawGUI_4;
	// System.Boolean ControlFreak2.DebugUtils.AxisDebugger::drawMouseStats
	bool ___drawMouseStats_5;
	// System.Boolean ControlFreak2.DebugUtils.AxisDebugger::drawUnityAxes
	bool ___drawUnityAxes_6;
	// System.Boolean ControlFreak2.DebugUtils.AxisDebugger::drawKeyCodes
	bool ___drawKeyCodes_7;
	// UnityEngine.KeyCode ControlFreak2.DebugUtils.AxisDebugger::deltaResetKey
	int32_t ___deltaResetKey_8;
	// UnityEngine.Vector2 ControlFreak2.DebugUtils.AxisDebugger::cfScroll
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___cfScroll_9;
	// UnityEngine.Vector2 ControlFreak2.DebugUtils.AxisDebugger::unScroll
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___unScroll_10;
	// UnityEngine.Vector2 ControlFreak2.DebugUtils.AxisDebugger::cfMouseDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___cfMouseDelta_11;
	// UnityEngine.Vector2 ControlFreak2.DebugUtils.AxisDebugger::unMouseDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___unMouseDelta_12;
	// UnityEngine.GUISkin ControlFreak2.DebugUtils.AxisDebugger::skin
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___skin_13;
	// UnityEngine.KeyCode[] ControlFreak2.DebugUtils.AxisDebugger::allKeyCodes
	KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* ___allKeyCodes_14;
};

// ControlFreak2.Extra.AxisEvent
struct AxisEvent_tEB70EB24A962A9E44D4D9603F6A865F662753037  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String ControlFreak2.Extra.AxisEvent::axisName
	String_t* ___axisName_4;
	// System.Single ControlFreak2.Extra.AxisEvent::axisDeadzone
	float ___axisDeadzone_5;
	// System.Int32 ControlFreak2.Extra.AxisEvent::axisId
	int32_t ___axisId_6;
	// System.Int32 ControlFreak2.Extra.AxisEvent::prevAxisDir
	int32_t ___prevAxisDir_7;
	// ControlFreak2.Extra.AxisEvent/EventType ControlFreak2.Extra.AxisEvent::eventType
	int32_t ___eventType_8;
	// UnityEngine.Events.UnityEvent ControlFreak2.Extra.AxisEvent::positiveEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___positiveEvent_9;
	// UnityEngine.Events.UnityEvent ControlFreak2.Extra.AxisEvent::negativeEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___negativeEvent_10;
};

// ControlFreak2.Demos.Guns.Bullet
struct Bullet_t225D01DE0E6CB0F6F53E4A877FB3C0F283F0681F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ControlFreak2.Demos.Guns.Gun ControlFreak2.Demos.Guns.Bullet::gun
	Gun_tD0AB2E3133C17135370A6E3A46419C9A35958F19* ___gun_4;
	// UnityEngine.Rigidbody ControlFreak2.Demos.Guns.Bullet::rigidBody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rigidBody_5;
	// System.Single ControlFreak2.Demos.Guns.Bullet::maxLifetime
	float ___maxLifetime_6;
	// System.Single ControlFreak2.Demos.Guns.Bullet::lifetime
	float ___lifetime_7;
	// System.Single ControlFreak2.Demos.Guns.Bullet::initialSpeed
	float ___initialSpeed_8;
	// System.Single ControlFreak2.Demos.Guns.Bullet::maxSpeed
	float ___maxSpeed_9;
	// System.Single ControlFreak2.Demos.Guns.Bullet::accel
	float ___accel_10;
	// System.Single ControlFreak2.Demos.Guns.Bullet::speed
	float ___speed_11;
};

// ControlFreak2.Extra.ButtonPressEvent
struct ButtonPressEvent_tFC3D8E806CDA535836498B3E407050724F433850  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String ControlFreak2.Extra.ButtonPressEvent::buttonName
	String_t* ___buttonName_4;
	// System.Int32 ControlFreak2.Extra.ButtonPressEvent::buttonId
	int32_t ___buttonId_5;
	// ControlFreak2.Extra.ButtonPressEvent/EventType ControlFreak2.Extra.ButtonPressEvent::eventType
	int32_t ___eventType_6;
	// UnityEngine.Events.UnityEvent ControlFreak2.Extra.ButtonPressEvent::buttonEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___buttonEvent_7;
};

// ControlFreak2.Demos.RPG.CharacterAction
struct CharacterAction_t3057F4DC5B16E52558F1FCAFEE87299FBB5F2EDB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ControlFreak2.Demos.RPG.LevelData ControlFreak2.Demos.RPG.CharacterAction::levelData
	LevelData_tC6399F01040DB1B18E5D9F2CCC6FA6D864BA9791* ___levelData_4;
	// System.String ControlFreak2.Demos.RPG.CharacterAction::actionButonName
	String_t* ___actionButonName_5;
	// System.String ControlFreak2.Demos.RPG.CharacterAction::actionAnimatorTrigger
	String_t* ___actionAnimatorTrigger_6;
	// UnityEngine.Animator ControlFreak2.Demos.RPG.CharacterAction::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_7;
};

// ControlFreak2.Internal.ComponentBase
struct ComponentBase_tB5DF9E108A8604F9A6496AD4766E3475F7F4311A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean ControlFreak2.Internal.ComponentBase::isReady
	bool ___isReady_4;
	// System.Boolean ControlFreak2.Internal.ComponentBase::isDestroyed
	bool ___isDestroyed_5;
};

// ControlFreak2.Demos.Characters.DualStickShooterCharaAnimator
struct DualStickShooterCharaAnimator_t85D9CBD03D995E8279F2A28E4F5D15AE0976BD2D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ControlFreak2.Demos.Characters.DualStickShooterCharaMotor ControlFreak2.Demos.Characters.DualStickShooterCharaAnimator::charaMotor
	DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* ___charaMotor_4;
	// UnityEngine.Animator ControlFreak2.Demos.Characters.DualStickShooterCharaAnimator::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_5;
	// System.String ControlFreak2.Demos.Characters.DualStickShooterCharaAnimator::forwardBackwardParamName
	String_t* ___forwardBackwardParamName_6;
	// System.String ControlFreak2.Demos.Characters.DualStickShooterCharaAnimator::strafeParamName
	String_t* ___strafeParamName_7;
	// System.String ControlFreak2.Demos.Characters.DualStickShooterCharaAnimator::speedParamName
	String_t* ___speedParamName_8;
};

// ControlFreak2.Demos.Characters.DualStickShooterCharaMotor
struct DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::cameraTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cameraTransform_4;
	// System.String ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::moveHorzAxis
	String_t* ___moveHorzAxis_5;
	// System.String ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::moveVertAxis
	String_t* ___moveVertAxis_6;
	// System.String ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::aimHorzAxis
	String_t* ___aimHorzAxis_7;
	// System.String ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::aimVertAxis
	String_t* ___aimVertAxis_8;
	// UnityEngine.Rigidbody ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_9;
	// System.Single ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::forwardSpeed
	float ___forwardSpeed_10;
	// System.Single ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::strafeSpeed
	float ___strafeSpeed_11;
	// System.Single ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::backwardSpeed
	float ___backwardSpeed_12;
	// System.Single ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::turnSpeed
	float ___turnSpeed_13;
	// System.Single ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::orientationOffset
	float ___orientationOffset_14;
	// UnityEngine.Vector3 ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::gravity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___gravity_15;
	// UnityEngine.Vector3 ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::worldVel
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldVel_16;
	// UnityEngine.Vector3 ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::localDir
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localDir_17;
	// System.Single ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::moveTilt
	float ___moveTilt_18;
	// System.Single ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::worldMoveAngle
	float ___worldMoveAngle_19;
	// System.Single ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::worldOrientAngle
	float ___worldOrientAngle_20;
	// System.Single ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::inputMoveAngle
	float ___inputMoveAngle_21;
	// System.Single ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::inputMoveTilt
	float ___inputMoveTilt_22;
	// System.Single ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::inputAimAngle
	float ___inputAimAngle_23;
	// System.Single ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::inputAimTilt
	float ___inputAimTilt_24;
};

// ControlFreak2.DebugUtils.GamepadHardwareTester
struct GamepadHardwareTester_t458719C4A6B74E1549C2B8408004517C72AEC3D5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GUISkin ControlFreak2.DebugUtils.GamepadHardwareTester::skin
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___skin_4;
};

// ControlFreak2.Demos.Guns.Gun
struct Gun_tD0AB2E3133C17135370A6E3A46419C9A35958F19  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.ParticleSystem ControlFreak2.Demos.Guns.Gun::shotParticles
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___shotParticles_4;
	// UnityEngine.AudioClip ControlFreak2.Demos.Guns.Gun::shotSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___shotSound_5;
	// UnityEngine.AudioClip ControlFreak2.Demos.Guns.Gun::emptySound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___emptySound_6;
	// UnityEngine.AudioClip ControlFreak2.Demos.Guns.Gun::reloadSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___reloadSound_7;
	// System.Boolean ControlFreak2.Demos.Guns.Gun::isFiring
	bool ___isFiring_8;
	// System.Single ControlFreak2.Demos.Guns.Gun::shotInterval
	float ___shotInterval_9;
	// System.Single ControlFreak2.Demos.Guns.Gun::lastShotTime
	float ___lastShotTime_10;
	// System.Boolean ControlFreak2.Demos.Guns.Gun::unlimitedAmmo
	bool ___unlimitedAmmo_11;
	// System.Int32 ControlFreak2.Demos.Guns.Gun::bulletCapacity
	int32_t ___bulletCapacity_12;
	// System.Int32 ControlFreak2.Demos.Guns.Gun::bulletCount
	int32_t ___bulletCount_13;
	// UnityEngine.Transform ControlFreak2.Demos.Guns.Gun::projectileOrigin
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___projectileOrigin_14;
	// ControlFreak2.Demos.Guns.Bullet ControlFreak2.Demos.Guns.Gun::bulletPrefab
	Bullet_t225D01DE0E6CB0F6F53E4A877FB3C0F283F0681F* ___bulletPrefab_15;
	// UnityEngine.AudioSource ControlFreak2.Demos.Guns.Gun::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_16;
};

// ControlFreak2.Demos.Guns.GunActivator
struct GunActivator_t59CCEF329447324DB6D0FDDDF30DA709AA4466C5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ControlFreak2.Demos.Guns.Gun[] ControlFreak2.Demos.Guns.GunActivator::gunList
	GunU5BU5D_tB92F18F2BD56FA0845F764B85791129502E6A8DB* ___gunList_4;
	// System.String ControlFreak2.Demos.Guns.GunActivator::buttonName
	String_t* ___buttonName_5;
	// UnityEngine.KeyCode ControlFreak2.Demos.Guns.GunActivator::key
	int32_t ___key_6;
};

// ControlFreak2.Demos.RPG.InteractiveObjectBase
struct InteractiveObjectBase_t478C103D6AEA44F79CE7838E698714F56EB58B30  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ControlFreak2.Demos.RPG.InteractiveObjectBase::radius
	float ___radius_4;
};

// ControlFreak2.Extra.KeyPressEvent
struct KeyPressEvent_t001A96A38548C2F80BE6B1CD81EB91BC1791F949  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.KeyCode ControlFreak2.Extra.KeyPressEvent::keyCode
	int32_t ___keyCode_4;
	// ControlFreak2.Extra.KeyPressEvent/EventType ControlFreak2.Extra.KeyPressEvent::eventType
	int32_t ___eventType_5;
	// UnityEngine.Events.UnityEvent ControlFreak2.Extra.KeyPressEvent::keyEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___keyEvent_6;
};

// ControlFreak2.Demos.RPG.LevelData
struct LevelData_tC6399F01040DB1B18E5D9F2CCC6FA6D864BA9791  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<ControlFreak2.Demos.RPG.InteractiveObjectBase> ControlFreak2.Demos.RPG.LevelData::interactiveObjectList
	List_1_tA216AD71654DE34217F98DCAC244F8CF09DD2196* ___interactiveObjectList_4;
};

// ControlFreak2.Extra.PressureLevelBinding
struct PressureLevelBinding_t05C01264D8D6E99EF81B7E0E040F5C306D8590BF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ControlFreak2.InputRig ControlFreak2.Extra.PressureLevelBinding::rig
	InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC* ___rig_4;
	// System.String ControlFreak2.Extra.PressureLevelBinding::sourceAxis
	String_t* ___sourceAxis_5;
	// System.Int32 ControlFreak2.Extra.PressureLevelBinding::sourceAxisId
	int32_t ___sourceAxisId_6;
	// System.Collections.Generic.List`1<ControlFreak2.Extra.PressureLevelBinding/RangeConfig> ControlFreak2.Extra.PressureLevelBinding::rangeConfigList
	List_1_t9B36A7BB272180EA8C2B8AD01D706A400F2228BA* ___rangeConfigList_7;
};

// ControlFreak2.Demos.Cameras.SimpleFollowCam
struct SimpleFollowCam_t7726ABE6ADB891E3C15F380906EFC02423762DB7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform ControlFreak2.Demos.Cameras.SimpleFollowCam::targetTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform_4;
	// System.Single ControlFreak2.Demos.Cameras.SimpleFollowCam::smoothingTime
	float ___smoothingTime_5;
	// UnityEngine.Vector3 ControlFreak2.Demos.Cameras.SimpleFollowCam::targetOfs
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetOfs_6;
	// UnityEngine.Vector3 ControlFreak2.Demos.Cameras.SimpleFollowCam::smoothPosVel
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___smoothPosVel_7;
	// System.Single ControlFreak2.Demos.Cameras.SimpleFollowCam::camZoomFactor
	float ___camZoomFactor_8;
	// System.Single ControlFreak2.Demos.Cameras.SimpleFollowCam::perspZoomOutOffset
	float ___perspZoomOutOffset_9;
	// System.Single ControlFreak2.Demos.Cameras.SimpleFollowCam::orthoZoomInSize
	float ___orthoZoomInSize_10;
	// System.Single ControlFreak2.Demos.Cameras.SimpleFollowCam::orthoZoomOutSize
	float ___orthoZoomOutSize_11;
	// System.String ControlFreak2.Demos.Cameras.SimpleFollowCam::camZoomDeltaAxis
	String_t* ___camZoomDeltaAxis_12;
	// UnityEngine.Camera ControlFreak2.Demos.Cameras.SimpleFollowCam::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_13;
};

// ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara
struct SwipeSlasherChara_tA09072D8B2BCF3F5DA98004DF65E9057957DA804  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioClip ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara::soundDodge
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___soundDodge_4;
	// UnityEngine.AudioClip ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara::soundSlash
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___soundSlash_5;
	// UnityEngine.AudioClip ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara::soundStab
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___soundStab_6;
	// UnityEngine.UI.Graphic ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara::graphicLeftStab
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphicLeftStab_7;
	// UnityEngine.UI.Graphic ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara::graphicLeftSlashU
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphicLeftSlashU_8;
	// UnityEngine.UI.Graphic ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara::graphicLeftSlashR
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphicLeftSlashR_9;
	// UnityEngine.UI.Graphic ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara::graphicLeftSlashD
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphicLeftSlashD_10;
	// UnityEngine.UI.Graphic ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara::graphicLeftSlashL
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphicLeftSlashL_11;
	// UnityEngine.UI.Graphic ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara::graphicRightStab
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphicRightStab_12;
	// UnityEngine.UI.Graphic ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara::graphicRightSlashU
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphicRightSlashU_13;
	// UnityEngine.UI.Graphic ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara::graphicRightSlashR
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphicRightSlashR_14;
	// UnityEngine.UI.Graphic ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara::graphicRightSlashD
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphicRightSlashD_15;
	// UnityEngine.UI.Graphic ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara::graphicRightSlashL
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphicRightSlashL_16;
	// UnityEngine.UI.Graphic ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara::graphicDodgeLeft
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphicDodgeLeft_17;
	// UnityEngine.UI.Graphic ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara::graphicDodgeRight
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphicDodgeRight_18;
	// System.Single ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara::fadeDur
	float ___fadeDur_19;
	// UnityEngine.Animator ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_20;
	// System.String ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara::animLeftStab
	String_t* ___animLeftStab_21;
	// System.String ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara::animLeftSlashU
	String_t* ___animLeftSlashU_22;
	// System.String ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara::animLeftSlashR
	String_t* ___animLeftSlashR_23;
	// System.String ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara::animLeftSlashD
	String_t* ___animLeftSlashD_24;
	// System.String ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara::animLeftSlashL
	String_t* ___animLeftSlashL_25;
	// System.String ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara::animRightStab
	String_t* ___animRightStab_26;
	// System.String ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara::animRightSlashU
	String_t* ___animRightSlashU_27;
	// System.String ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara::animRightSlashR
	String_t* ___animRightSlashR_28;
	// System.String ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara::animRightSlashD
	String_t* ___animRightSlashD_29;
	// System.String ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara::animRightSlashL
	String_t* ___animRightSlashL_30;
	// System.String ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara::animDodgeLeft
	String_t* ___animDodgeLeft_31;
	// System.String ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara::animDodgeRight
	String_t* ___animDodgeRight_32;
};

// ControlFreak2.Demos.SwipeSlasher.SwipeSlasherUserControl
struct SwipeSlasherUserControl_t3FB19BA8E21601F351F3BD3E5B2F288B1594B791  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara ControlFreak2.Demos.SwipeSlasher.SwipeSlasherUserControl::character
	SwipeSlasherChara_tA09072D8B2BCF3F5DA98004DF65E9057957DA804* ___character_4;
};

// ControlFreak2.InputRig
struct InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC  : public ComponentBase_tB5DF9E108A8604F9A6496AD4766E3475F7F4311A
{
	// System.Action ControlFreak2.InputRig::onSwitchesChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onSwitchesChanged_6;
	// System.Action ControlFreak2.InputRig::onAddExtraInput
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onAddExtraInput_7;
	// System.Boolean ControlFreak2.InputRig::autoActivate
	bool ___autoActivate_18;
	// System.Boolean ControlFreak2.InputRig::overrideActiveRig
	bool ___overrideActiveRig_19;
	// System.Boolean ControlFreak2.InputRig::hideWhenDisactivated
	bool ___hideWhenDisactivated_20;
	// System.Boolean ControlFreak2.InputRig::disableWhenDisactivated
	bool ___disableWhenDisactivated_21;
	// System.Boolean ControlFreak2.InputRig::hideWhenTouchScreenIsUnused
	bool ___hideWhenTouchScreenIsUnused_22;
	// System.Single ControlFreak2.InputRig::hideWhenTouchScreenIsUnusedDelay
	float ___hideWhenTouchScreenIsUnusedDelay_23;
	// System.Boolean ControlFreak2.InputRig::hideWhenGamepadIsActivated
	bool ___hideWhenGamepadIsActivated_24;
	// System.Single ControlFreak2.InputRig::hideWhenGamepadIsActivatedDelay
	float ___hideWhenGamepadIsActivatedDelay_25;
	// System.Single ControlFreak2.InputRig::fingerRadiusInCm
	float ___fingerRadiusInCm_26;
	// System.Boolean ControlFreak2.InputRig::swipeOverFromNothing
	bool ___swipeOverFromNothing_27;
	// System.Single ControlFreak2.InputRig::controlBaseAlphaAnimDuration
	float ___controlBaseAlphaAnimDuration_28;
	// System.Single ControlFreak2.InputRig::animatorMaxAnimDuration
	float ___animatorMaxAnimDuration_29;
	// System.Single ControlFreak2.InputRig::ninetyDegTurnMouseDelta
	float ___ninetyDegTurnMouseDelta_30;
	// System.Single ControlFreak2.InputRig::ninetyDegTurnTouchSwipeInCm
	float ___ninetyDegTurnTouchSwipeInCm_31;
	// System.Single ControlFreak2.InputRig::ninetyDegTurnAnalogDuration
	float ___ninetyDegTurnAnalogDuration_32;
	// System.Single ControlFreak2.InputRig::virtualScreenDiameterInches
	float ___virtualScreenDiameterInches_33;
	// System.Int32 ControlFreak2.InputRig::scrollStepsPerNinetyDegTurn
	int32_t ___scrollStepsPerNinetyDegTurn_34;
	// System.Single ControlFreak2.InputRig::elapsedSinceLastTouch
	float ___elapsedSinceLastTouch_36;
	// System.Boolean ControlFreak2.InputRig::touchControlsSleeping
	bool ___touchControlsSleeping_37;
	// ControlFreak2.InputRig/VirtualJoystickConfigCollection ControlFreak2.InputRig::joysticks
	VirtualJoystickConfigCollection_t53DD9FBAD315E75A6CDC42B68030CBF80F6FB02D* ___joysticks_38;
	// ControlFreak2.InputRig/AxisConfigCollection ControlFreak2.InputRig::axes
	AxisConfigCollection_t902CA454AE9C6A3DF35B54ED5A0AD2AE40E27691* ___axes_39;
	// System.Collections.Generic.List`1<UnityEngine.KeyCode> ControlFreak2.InputRig::keyboardBlockedCodes
	List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32* ___keyboardBlockedCodes_40;
	// System.Collections.BitArray ControlFreak2.InputRig::keysPrev
	BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___keysPrev_41;
	// System.Collections.BitArray ControlFreak2.InputRig::keysCur
	BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___keysCur_42;
	// System.Collections.BitArray ControlFreak2.InputRig::keysNext
	BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___keysNext_43;
	// System.Collections.BitArray ControlFreak2.InputRig::keysMuted
	BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___keysMuted_44;
	// System.Collections.BitArray ControlFreak2.InputRig::keysBlocked
	BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___keysBlocked_45;
	// System.Boolean ControlFreak2.InputRig::keysNextSomeDown
	bool ___keysNextSomeDown_46;
	// System.Boolean ControlFreak2.InputRig::keysNextSomeOn
	bool ___keysNextSomeOn_47;
	// System.Boolean ControlFreak2.InputRig::keysCurSomeOn
	bool ___keysCurSomeOn_48;
	// System.Boolean ControlFreak2.InputRig::keysCurSomeDown
	bool ___keysCurSomeDown_49;
	// ControlFreak2.Internal.JoystickConfig ControlFreak2.InputRig::dpadConfig
	JoystickConfig_tAB3D8447D31893C32F655F3B864C3FF202714FD2* ___dpadConfig_50;
	// ControlFreak2.Internal.JoystickConfig ControlFreak2.InputRig::leftStickConfig
	JoystickConfig_tAB3D8447D31893C32F655F3B864C3FF202714FD2* ___leftStickConfig_51;
	// ControlFreak2.Internal.JoystickConfig ControlFreak2.InputRig::rightStickConfig
	JoystickConfig_tAB3D8447D31893C32F655F3B864C3FF202714FD2* ___rightStickConfig_52;
	// ControlFreak2.Internal.AnalogConfig ControlFreak2.InputRig::leftTriggerAnalogConfig
	AnalogConfig_tBEE2CA47D4A71C9749F7DB1CEAFEBF4A6EB74508* ___leftTriggerAnalogConfig_53;
	// ControlFreak2.Internal.AnalogConfig ControlFreak2.InputRig::rightTriggerAnalogConfig
	AnalogConfig_tBEE2CA47D4A71C9749F7DB1CEAFEBF4A6EB74508* ___rightTriggerAnalogConfig_54;
	// ControlFreak2.InputRig/GamepadConfig[] ControlFreak2.InputRig::gamepads
	GamepadConfigU5BU5D_t57AB3D503118D89485B13A05D547862FEE72C3FD* ___gamepads_55;
	// ControlFreak2.InputRig/GamepadConfig ControlFreak2.InputRig::anyGamepad
	GamepadConfig_tD39C3480BCA89C8BDE9690378482167CCA8CF062* ___anyGamepad_56;
	// ControlFreak2.InputRig/RigSwitchCollection ControlFreak2.InputRig::rigSwitches
	RigSwitchCollection_tF910764A56DE514526A629CF29F8E855DC00D407* ___rigSwitches_57;
	// ControlFreak2.InputRig/AutomaticInputConfigCollection ControlFreak2.InputRig::autoInputList
	AutomaticInputConfigCollection_t0F1DBBF0B8D4B13A2A7500348C683061924F4B3E* ___autoInputList_58;
	// System.Collections.Generic.List`1<ControlFreak2.TouchControl> ControlFreak2.InputRig::touchControls
	List_1_t21486FDA09A0905AB38133CBE09BE8518AFCD7DF* ___touchControls_59;
	// ControlFreak2.InputRig/TiltConfig ControlFreak2.InputRig::tilt
	TiltConfig_t010F5644048BA417F22B36BA9E80B82E5B28E859* ___tilt_60;
	// ControlFreak2.InputRig/MouseConfig ControlFreak2.InputRig::mouseConfig
	MouseConfig_t22BACAABBBAAFEDBDFE04D3AC50FD309D21FB3EF* ___mouseConfig_61;
	// ControlFreak2.InputRig/ScrollWheelState ControlFreak2.InputRig::scrollWheel
	ScrollWheelState_t3AF5FD784DF44EFDD353AD48EC98A616553E67F8* ___scrollWheel_62;
	// ControlFreak2.Internal.FixedTimeStepController ControlFreak2.InputRig::fixedTimeStep
	FixedTimeStepController_t4A0AFC7A8A93AD5F0D64D66C041169BA637ED3EF* ___fixedTimeStep_63;
	// System.Boolean ControlFreak2.InputRig::touchControlsHidden
	bool ___touchControlsHidden_68;
	// System.Single ControlFreak2.InputRig::analogToEmuMouseScale
	float ___analogToEmuMouseScale_69;
	// System.Single ControlFreak2.InputRig::analogToUniversalScale
	float ___analogToUniversalScale_70;
	// System.Single ControlFreak2.InputRig::analogToRawDeltaScale
	float ___analogToRawDeltaScale_71;
	// System.Single ControlFreak2.InputRig::scrollToEmuMouseScale
	float ___scrollToEmuMouseScale_72;
	// System.Single ControlFreak2.InputRig::scrollToUniversalScale
	float ___scrollToUniversalScale_73;
	// System.Single ControlFreak2.InputRig::mousePointsToUniversalScale
	float ___mousePointsToUniversalScale_74;
	// System.Single ControlFreak2.InputRig::touchPixelsToEmuMouseScale
	float ___touchPixelsToEmuMouseScale_75;
	// System.Single ControlFreak2.InputRig::touchPixelsToUniversalScale
	float ___touchPixelsToUniversalScale_76;
	// System.Int32 ControlFreak2.InputRig::storedHorzRes
	int32_t ___storedHorzRes_77;
	// System.Int32 ControlFreak2.InputRig::storedVertRes
	int32_t ___storedVertRes_78;
	// System.Single ControlFreak2.InputRig::storedDPCM
	float ___storedDPCM_79;
	// System.Collections.Generic.List`1<ControlFreak2.InputRig/EmulatedTouchState> ControlFreak2.InputRig::emuTouches
	List_1_t92190B24B6E5E8A48205FF2C0A24870349ED1407* ___emuTouches_81;
	// System.Collections.Generic.List`1<ControlFreak2.InputRig/EmulatedTouchState> ControlFreak2.InputRig::emuTouchesOrdered
	List_1_t92190B24B6E5E8A48205FF2C0A24870349ED1407* ___emuTouchesOrdered_82;
	// ControlFreak2.InputRig/Touch[] ControlFreak2.InputRig::emuOutputTouches
	TouchU5BU5D_t0765CB993F65F7536633EC068DAC67FABB8856A2* ___emuOutputTouches_83;
	// System.Boolean ControlFreak2.InputRig::emuOutputTouchesDirty
	bool ___emuOutputTouchesDirty_84;
};

struct InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC_StaticFields
{
	// System.Action ControlFreak2.InputRig::onAddExtraInputToActiveRig
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onAddExtraInputToActiveRig_8;
};

// ControlFreak2.Demos.RPG.SimpleInteractiveObject
struct SimpleInteractiveObject_t090499005CA9596CF26D7F6E8FCBF102D8E05D59  : public InteractiveObjectBase_t478C103D6AEA44F79CE7838E698714F56EB58B30
{
	// UnityEngine.Color ControlFreak2.Demos.RPG.SimpleInteractiveObject::activatedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___activatedColor_5;
	// UnityEngine.Renderer ControlFreak2.Demos.RPG.SimpleInteractiveObject::targetRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___targetRenderer_6;
	// UnityEngine.AudioClip ControlFreak2.Demos.RPG.SimpleInteractiveObject::soundEffect
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___soundEffect_7;
	// System.Boolean ControlFreak2.Demos.RPG.SimpleInteractiveObject::isActivated
	bool ___isActivated_8;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// ControlFreak2.Demos.Guns.Gun[]
struct GunU5BU5D_tB92F18F2BD56FA0845F764B85791129502E6A8DB  : public RuntimeArray
{
	ALIGN_FIELD (8) Gun_tD0AB2E3133C17135370A6E3A46419C9A35958F19* m_Items[1];

	inline Gun_tD0AB2E3133C17135370A6E3A46419C9A35958F19* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Gun_tD0AB2E3133C17135370A6E3A46419C9A35958F19** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Gun_tD0AB2E3133C17135370A6E3A46419C9A35958F19* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Gun_tD0AB2E3133C17135370A6E3A46419C9A35958F19* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Gun_tD0AB2E3133C17135370A6E3A46419C9A35958F19** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Gun_tD0AB2E3133C17135370A6E3A46419C9A35958F19* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ControlFreak2.Extra.PressureLevelBinding/RangeConfig[]
struct RangeConfigU5BU5D_t56211118954B5EB0E5E63519578FEB662D5C3E45  : public RuntimeArray
{
	ALIGN_FIELD (8) RangeConfig_t19BDD10175D0B1625DD889875A96BC9FC1FEE2ED* m_Items[1];

	inline RangeConfig_t19BDD10175D0B1625DD889875A96BC9FC1FEE2ED* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RangeConfig_t19BDD10175D0B1625DD889875A96BC9FC1FEE2ED** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RangeConfig_t19BDD10175D0B1625DD889875A96BC9FC1FEE2ED* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RangeConfig_t19BDD10175D0B1625DD889875A96BC9FC1FEE2ED* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RangeConfig_t19BDD10175D0B1625DD889875A96BC9FC1FEE2ED** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RangeConfig_t19BDD10175D0B1625DD889875A96BC9FC1FEE2ED* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.KeyCode[]
struct KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2  : public RuntimeArray
{
	ALIGN_FIELD (8) GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* m_Items[1];

	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara>()
inline SwipeSlasherChara_tA09072D8B2BCF3F5DA98004DF65E9057957DA804* Component_GetComponent_TisSwipeSlasherChara_tA09072D8B2BCF3F5DA98004DF65E9057957DA804_m91805AF4EE2DFDC4D44F36C89AA35A409B9D17BA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SwipeSlasherChara_tA09072D8B2BCF3F5DA98004DF65E9057957DA804* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean ControlFreak2.CF2Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CF2Input_GetButtonDown_m6A444789BC13A3B50C0ADE13FA1169235C19C8D0 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Void ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara::ExecuteAction(ControlFreak2.Demos.SwipeSlasher.SwipeSlasherChara/ActionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeSlasherChara_ExecuteAction_mC6CF922664B14B49A02FC26A9D61FCC2D51D8628 (SwipeSlasherChara_tA09072D8B2BCF3F5DA98004DF65E9057957DA804* __this, int32_t ___action0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void ControlFreak2.Demos.RPG.CharacterAction::PerformAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAction_PerformAction_mC8BEBEE32AE3648091B0E3C7634B6C9BF4F30E30 (CharacterAction_t3057F4DC5B16E52558F1FCAFEE87299FBB5F2EDB* __this, const RuntimeMethod* method) ;
// ControlFreak2.Demos.RPG.InteractiveObjectBase ControlFreak2.Demos.RPG.LevelData::FindInteractiveObjectFor(ControlFreak2.Demos.RPG.CharacterAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractiveObjectBase_t478C103D6AEA44F79CE7838E698714F56EB58B30* LevelData_FindInteractiveObjectFor_m89DDB3BF25ACD556F885529958FF06826D7349C6 (LevelData_tC6399F01040DB1B18E5D9F2CCC6FA6D864BA9791* __this, CharacterAction_t3057F4DC5B16E52558F1FCAFEE87299FBB5F2EDB* ___chara0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void ControlFreak2.Demos.RPG.InteractiveObjectBase::DrawDefaultGizmo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractiveObjectBase_DrawDefaultGizmo_m104EF4110DB55EA644168B24B194798868469D2C (InteractiveObjectBase_t478C103D6AEA44F79CE7838E698714F56EB58B30* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_matrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_matrix_m916F9A7A8ACC51F304BB5BB4536854A045EF844B (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireSphere_m23F90E2FD50D825625414C0A0AA8B1557CB5DD61 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, float ___radius1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ControlFreak2.Demos.RPG.InteractiveObjectBase>::.ctor()
inline void List_1__ctor_mA016A42269A620BA6707C223C39BED0F6D9C2E5B (List_1_tA216AD71654DE34217F98DCAC244F8CF09DD2196* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA216AD71654DE34217F98DCAC244F8CF09DD2196*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<ControlFreak2.Demos.RPG.InteractiveObjectBase>::get_Item(System.Int32)
inline InteractiveObjectBase_t478C103D6AEA44F79CE7838E698714F56EB58B30* List_1_get_Item_m473D521DF80D9DF9B4450D2DF4A33E4EB881EDFB (List_1_tA216AD71654DE34217F98DCAC244F8CF09DD2196* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  InteractiveObjectBase_t478C103D6AEA44F79CE7838E698714F56EB58B30* (*) (List_1_tA216AD71654DE34217F98DCAC244F8CF09DD2196*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<ControlFreak2.Demos.RPG.InteractiveObjectBase>::get_Count()
inline int32_t List_1_get_Count_m6420E7FBFE9F42C9CE66D9B0B256E2C40D2DDEE2_inline (List_1_tA216AD71654DE34217F98DCAC244F8CF09DD2196* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA216AD71654DE34217F98DCAC244F8CF09DD2196*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayClipAtPoint_mDF9531618C28411888855FD6B4B58F315083B8AC (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline (const RuntimeMethod* method) ;
// System.Void ControlFreak2.Demos.RPG.InteractiveObjectBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractiveObjectBase__ctor_m702E86D9CCFDF2A9CAFF2A1F65693E599B9A9B39 (InteractiveObjectBase_t478C103D6AEA44F79CE7838E698714F56EB58B30* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Camera::get_orthographic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Camera_get_orthographic_m904DEFC76C54DA4E30C20A62A86D5D87B7D4DD8F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single ControlFreak2.CF2Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CF2Input_GetAxis_m2A4EEECCC7B2B7A310EC633F0C3615C60AE3DE00 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Single ControlFreak2.CFUtils::get_realDeltaTimeClamped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CFUtils_get_realDeltaTimeClamped_m1CB4AE6134EE84AD9141CCEAB0FAB861CA4AB18B (const RuntimeMethod* method) ;
// System.Single ControlFreak2.CFUtils::SmoothTowards(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CFUtils_SmoothTowards_mBD6C782C095D45265B7B96834125AC08F2E45635 (float ___a0, float ___b1, float ___smoothingTime2, float ___deltaTime3, float ___epsilon4, float ___maxLeftFactor5, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_m017722BD53BAE32893C2A1B674746E340D4A5B89_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<ControlFreak2.Demos.Characters.DualStickShooterCharaMotor>()
inline DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* Component_GetComponent_TisDualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763_mA4374779F36BF3076C2542FB015F97B46CD7B485 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::GetLocalDir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DualStickShooterCharaMotor_GetLocalDir_m975EFD4856B33FBCE3E66C7817280B9DEC25A173 (DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Single ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::GetAngleFromDir(UnityEngine.Vector3,ControlFreak2.Demos.Characters.DualStickShooterCharaMotor/WorldPlane,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DualStickShooterCharaMotor_GetAngleFromDir_m91D30CBF1ADA1853B921EE45F963BC31CAF24951 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir0, int32_t ___plane1, float ___fallbackAngle2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::MoveOrientation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DualStickShooterCharaMotor_MoveOrientation_m04E3A94C1FF0802F8CC5BC107127D1A19FA9B272 (DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* __this, float ___angle0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::MoveRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MoveRotation_m85825C7206E770E39DED9EE6D792702F577A891D (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rot0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::SetCameraRelativeInput(UnityEngine.Transform,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DualStickShooterCharaMotor_SetCameraRelativeInput_m8615794D149FBA54E41A0E7700D61F250985F205 (DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___camTr0, float ___moveX1, float ___moveY2, float ___aimX3, float ___aimY4, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::MoveTowardsAngle(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowardsAngle_m427D75FA50922E7948D8C1E4B71300158DCC46C6_inline (float ___current0, float ___target1, float ___maxDelta2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// System.Void ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::MovePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DualStickShooterCharaMotor_MovePosition_m3DCEB98B56792AB59B689307ACB8B8D80EC9044F (DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPos0, const RuntimeMethod* method) ;
// System.Single ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::GetJoyAngleAndTilt(UnityEngine.Transform,System.Single,System.Single,ControlFreak2.Demos.Characters.DualStickShooterCharaMotor/WorldPlane,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DualStickShooterCharaMotor_GetJoyAngleAndTilt_m1DA63DD8675CE2661ED25DDB04A076FB43EDF774 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___camTr0, float ___x1, float ___y2, int32_t ___plane3, float* ___tilt4, const RuntimeMethod* method) ;
// System.Void ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::SetWorldInput(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DualStickShooterCharaMotor_SetWorldInput_m6CE80BCFD67BC2C6BB9ED161A9F94689C4898D9C (DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* __this, float ___moveAngle0, float ___moveTilt1, float ___aimAngle2, float ___aimTilt3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::GetWorldVecFromCamera(UnityEngine.Transform,System.Single,System.Single,ControlFreak2.Demos.Characters.DualStickShooterCharaMotor/WorldPlane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DualStickShooterCharaMotor_GetWorldVecFromCamera_mA019E7DDDA2EE07953E01BA33C72C55661202CDC (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___camTr0, float ___x1, float ___y2, int32_t ___plane3, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void ControlFreak2.Demos.Guns.Gun::FireBullet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun_FireBullet_m8959BCEC91754BED297CDC53EC445F917F67ED31 (Gun_tD0AB2E3133C17135370A6E3A46419C9A35958F19* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<ControlFreak2.Demos.Guns.Bullet>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline Bullet_t225D01DE0E6CB0F6F53E4A877FB3C0F283F0681F* Object_Instantiate_TisBullet_t225D01DE0E6CB0F6F53E4A877FB3C0F283F0681F_mFE8497B87EB104FCC622BF8DB6AAAC1FF45620B1 (Bullet_t225D01DE0E6CB0F6F53E4A877FB3C0F283F0681F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  Bullet_t225D01DE0E6CB0F6F53E4A877FB3C0F283F0681F* (*) (Bullet_t225D01DE0E6CB0F6F53E4A877FB3C0F283F0681F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void ControlFreak2.Demos.Guns.Bullet::Init(ControlFreak2.Demos.Guns.Gun)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_Init_m5C66F88B4BB373504EB49855E3BD377135D0C0DA (Bullet_t225D01DE0E6CB0F6F53E4A877FB3C0F283F0681F* __this, Gun_tD0AB2E3133C17135370A6E3A46419C9A35958F19* ___gun0, const RuntimeMethod* method) ;
// System.Boolean ControlFreak2.CF2Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CF2Input_GetKey_m2E0B71244511A8E7E7F146A8E4F312D68C06D2A0 (int32_t ___keyCode0, const RuntimeMethod* method) ;
// System.Boolean ControlFreak2.CF2Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CF2Input_GetButton_m15712533F82EBCC6391EF2777CD6594AE008E34D (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Void ControlFreak2.Demos.Guns.Gun::SetTriggerState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun_SetTriggerState_m2F8AD5101A04CE504B9EFE22BB197B418380E4A1 (Gun_tD0AB2E3133C17135370A6E3A46419C9A35958F19* __this, bool ___fire0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Single ControlFreak2.CF2Input::GetAxisRaw(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CF2Input_GetAxisRaw_m887AD57659334F343359949570A17970CA78D4DD (String_t* ___axisName0, int32_t* ___cachedId1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Boolean ControlFreak2.CF2Input::GetButtonDown(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CF2Input_GetButtonDown_m4D925A0F5475F2B256B726BFC3241F90603823AA (String_t* ___axisName0, int32_t* ___cachedId1, const RuntimeMethod* method) ;
// System.Boolean ControlFreak2.CF2Input::GetButtonUp(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CF2Input_GetButtonUp_mC7E2ACC6003E2DA06AEAA9936B66033C9B7BA244 (String_t* ___axisName0, int32_t* ___cachedId1, const RuntimeMethod* method) ;
// System.Boolean ControlFreak2.CF2Input::GetButton(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CF2Input_GetButton_m8CD35826FFB600B5762BB7D12491799ACD23D65C (String_t* ___axisName0, int32_t* ___cachedId1, const RuntimeMethod* method) ;
// System.Boolean ControlFreak2.CF2Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CF2Input_GetKeyDown_m2E30C7C38BD098F3D50673D4B7794B87CA1FD444 (int32_t ___keyCode0, const RuntimeMethod* method) ;
// System.Boolean ControlFreak2.CF2Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CF2Input_GetKeyUp_m5D055395D4A4D2CC014F9C9C36BA8398DC5EECB5 (int32_t ___keyCode0, const RuntimeMethod* method) ;
// System.Void ControlFreak2.Extra.PressureLevelBinding/RangeConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RangeConfig__ctor_m89525FC660876874173267B14FB3031985C3D295 (RangeConfig_t19BDD10175D0B1625DD889875A96BC9FC1FEE2ED* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ControlFreak2.Extra.PressureLevelBinding/RangeConfig>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m75464AC0B79BC9502652AAB3F47194CD36BAF6EF (List_1_t9B36A7BB272180EA8C2B8AD01D706A400F2228BA* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9B36A7BB272180EA8C2B8AD01D706A400F2228BA*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// T UnityEngine.Component::GetComponentInParent<ControlFreak2.InputRig>()
inline InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC* Component_GetComponentInParent_TisInputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC_m29D508696F57D665A0E35DBF9760073035589503 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void ControlFreak2.InputRig::add_onAddExtraInput(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRig_add_onAddExtraInput_m872CD4692BF19E7F97E59A509B11BE55A9F2532A (InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void ControlFreak2.InputRig::remove_onAddExtraInput(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRig_remove_onAddExtraInput_m6933FA13C064917ED356E26A5119D25B47434B8D (InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Single ControlFreak2.InputRig::GetAxisRaw(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputRig_GetAxisRaw_mA390274ECAF949E2DFE7F59698C2DA6E6B9F3AF9 (InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC* __this, String_t* ___axisName0, int32_t* ___cachedId1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<ControlFreak2.Extra.PressureLevelBinding/RangeConfig>::get_Item(System.Int32)
inline RangeConfig_t19BDD10175D0B1625DD889875A96BC9FC1FEE2ED* List_1_get_Item_m910115A1D94CB909DF5B9CA4BB152E4601EEED93 (List_1_t9B36A7BB272180EA8C2B8AD01D706A400F2228BA* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RangeConfig_t19BDD10175D0B1625DD889875A96BC9FC1FEE2ED* (*) (List_1_t9B36A7BB272180EA8C2B8AD01D706A400F2228BA*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void ControlFreak2.Extra.PressureLevelBinding/RangeConfig::Update(ControlFreak2.InputRig,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RangeConfig_Update_mD82E81A6FCB2893E4709F2CDD7B2B8D9AABEE065 (RangeConfig_t19BDD10175D0B1625DD889875A96BC9FC1FEE2ED* __this, InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC* ___rig0, float ___val1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<ControlFreak2.Extra.PressureLevelBinding/RangeConfig>::get_Count()
inline int32_t List_1_get_Count_m315CB53EA082E9AC52BE8AE2E32A01A923CEC239_inline (List_1_t9B36A7BB272180EA8C2B8AD01D706A400F2228BA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9B36A7BB272180EA8C2B8AD01D706A400F2228BA*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void ControlFreak2.InputRig::SetKeyCode(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRig_SetKeyCode_mB0F4E789997962E57D91F7938A1E5C3B6AD8BACD (InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC* __this, int32_t ___keyCode0, const RuntimeMethod* method) ;
// System.Void ControlFreak2.InputRig::SetAxisDigital(System.String,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRig_SetAxisDigital_m39AF2E68C49BBD8474F3DEF47C42A86FAD7CD165 (InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC* __this, String_t* ___name0, int32_t* ___cachedId1, bool ___negSide2, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Enum_GetValues_mE24D2214E046914DA4CAFB6D1DA830B76C501293 (Type_t* ___enumType0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 ControlFreak2.CF2Input::get_mouseScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CF2Input_get_mouseScrollDelta_m85145F742AFF2FB2B188395DD00728ADBD39EF4A (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Input_get_mouseScrollDelta_m41C6379183734C5061C6E8C9B6DEFFC9C084A0CE (const RuntimeMethod* method) ;
// ControlFreak2.InputRig ControlFreak2.CF2Input::get_activeRig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC* CF2Input_get_activeRig_m9AC5AA62711224E1949CCC2B9883410A6FED3D48 (const RuntimeMethod* method) ;
// System.Single ControlFreak2.DebugUtils.AxisDebugger::GetUnityAxis(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AxisDebugger_GetUnityAxis_mBC45A0C77068DD4E71C436A6ABF51D17441E1623 (AxisDebugger_t2ACCA0645DAC9496F451EBD2611AB74782288088* __this, String_t* ___name0, float ___defaultVal1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_skin_mA5C192FA26B27648E37945E0DA7A679C09E88BAB (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___value0, const RuntimeMethod* method) ;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* GUI_get_skin_m65083FBB1A0F6F33052E2AED126DD43FA34653B1 (const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUIStyle_get_none_m802F085D5360B8A9D430441F1B5B83ED1496AF5C (const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_box()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_box_m21BE7FC56D903B95BAFAE8890425D330EA88D893 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<UnityEngine.GUILayoutOption>()
inline GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline (const RuntimeMethod* method)
{
	return ((  GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginVertical_m08B85FF568BBF4D188D0F10D686C211654246970 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___style0, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options1, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::Box(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Box_m655ED298646F19D9319EE60289DFA7AA5671F7BD (String_t* ___text0, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options1, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector2::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Boolean ControlFreak2.InputRig::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputRig_GetKey_mE79DA97B4313B07C7109BC54295AF6975E6EF5E3 (InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC* __this, int32_t ___keyCode0, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<ControlFreak2.InputRig/AxisConfig>::get_Item(System.Int32)
inline AxisConfig_t8F9A50F190289F3CB2FBA928F5152C118BB047CF* List_1_get_Item_m36B15AA9978173067A04CFB21877C021D2257845 (List_1_tE6199EE8A638591EDFC001187ED0440D331D23B3* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  AxisConfig_t8F9A50F190289F3CB2FBA928F5152C118BB047CF* (*) (List_1_tE6199EE8A638591EDFC001187ED0440D331D23B3*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Single ControlFreak2.InputRig/AxisConfig::GetAnalog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AxisConfig_GetAnalog_mA6E5D55E8A683A1E1BB120406B1CDD06BD4167FF (AxisConfig_t8F9A50F190289F3CB2FBA928F5152C118BB047CF* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginVertical_mEA80BF63631637EDAAD761D32BAFC49A404F0842 (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA (String_t* ___text0, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_gray()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_mC62F535A52768B992F144E443D201F749C5DE932_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_color_mBB4E17B3600770E2EEEA61AA956D2207EAF112C7 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___format0, const RuntimeMethod* method) ;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GUILayout_Width_m3CD0F9B520A1B7BF065D30844E2F9965277E1DAA (float ___width0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::EndVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndVertical_mF2C806265D9B04E715EC1656FA9392332C59EEBC (const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<ControlFreak2.InputRig/AxisConfig>::get_Count()
inline int32_t List_1_get_Count_mE842D0A7B517AEA0AD5D48252B3F1E8D728D3782_inline (List_1_tE6199EE8A638591EDFC001187ED0440D331D23B3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE6199EE8A638591EDFC001187ED0440D331D23B3*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A (int32_t ___key0, const RuntimeMethod* method) ;
// System.String[] UnityEngine.Input::GetJoystickNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Input_GetJoystickNames_m398DA6DE3281D480F35E06AA92F746D4C82C9DC5 (const RuntimeMethod* method) ;
// System.String ControlFreak2.DebugUtils.GamepadHardwareTester::GetJoyAxisName(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GamepadHardwareTester_GetJoyAxisName_m9B03F0091C8B95B1B9CE35D03BE37BA486ADB7F4 (int32_t ___joyId0, int32_t ___axisId1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.String ControlFreak2.DebugUtils.GamepadHardwareTester::GetAxisName(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GamepadHardwareTester_GetAxisName_mD03CD2E46BD6E7958531C51D357F1B7070288CC6 (GamepadHardwareTester_t458719C4A6B74E1549C2B8408004517C72AEC3D5* __this, int32_t ___axis0, bool ___positiveSide1, const RuntimeMethod* method) ;
// UnityEngine.KeyCode ControlFreak2.DebugUtils.GamepadHardwareTester::GetJoyKeyCode(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GamepadHardwareTester_GetJoyKeyCode_m0FFB574886A32AC674E8A75590011F3F2E13EF23 (int32_t ___joyId0, int32_t ___keyId1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Box_m1E4D5FE4B7911725059CE0A2674B88CFAD279365 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, String_t* ___text1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m92B7A836FB5463F20951B6BD9DB8F3B1BA56763C (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, String_t* ___text1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Input::ResetInputAxes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_ResetInputAxes_m4EBCC069814BBECE517C6A9F45AFFB35E310AEEE (const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D (const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m09F45DDCFA0A4414AA296A595FDB0B59B44F5387 (const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mA20AB2E3DFAE680D742E9A17D969AF8A3E849711 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::DeltaAngle(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_m4B87B84265A48389AC3F5E3E8164570C6AECE5C3_inline (float ___current0, float ___target1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::MoveTowards(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m28F18762A84FB55152D854EBC92604FABA0879D1_inline (float ___current0, float ___target1, float ___maxDelta2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline (float ___t0, float ___length1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline (float ___f0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ControlFreak2.Demos.SwipeSlasher.SwipeSlasherUserControl::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeSlasherUserControl_OnEnable_m37156479886C563D8EAA6237A2AD2B7769C0302D (SwipeSlasherUserControl_t3FB19BA8E21601F351F3BD3E5B2F288B1594B791* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSwipeSlasherChara_tA09072D8B2BCF3F5DA98004DF65E9057957DA804_m91805AF4EE2DFDC4D44F36C89AA35A409B9D17BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (this.character == null)
		SwipeSlasherChara_tA09072D8B2BCF3F5DA98004DF65E9057957DA804* L_0 = __this->___character_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// this.character = this.GetComponent<SwipeSlasherChara>();
		SwipeSlasherChara_tA09072D8B2BCF3F5DA98004DF65E9057957DA804* L_3;
		L_3 = Component_GetComponent_TisSwipeSlasherChara_tA09072D8B2BCF3F5DA98004DF65E9057957DA804_m91805AF4EE2DFDC4D44F36C89AA35A409B9D17BA(__this, Component_GetComponent_TisSwipeSlasherChara_tA09072D8B2BCF3F5DA98004DF65E9057957DA804_m91805AF4EE2DFDC4D44F36C89AA35A409B9D17BA_RuntimeMethod_var);
		__this->___character_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___character_4), (void*)L_3);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void ControlFreak2.Demos.SwipeSlasher.SwipeSlasherUserControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeSlasherUserControl_Update_mEA98FED285E3496D2162C7C66D5D8C3A582BCE06 (SwipeSlasherUserControl_t3FB19BA8E21601F351F3BD3E5B2F288B1594B791* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000F7A93128587B9BBBD546B895D2678C0DECAED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19C8EC7E4EA17B33C63D6F07A1A863D4B590972A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66DAD23B2D9F87BF5E8B44FF0795EC5DEB669F59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68264C964D46F9CF8078E84BA733DCCB94C8E2A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C1E423C1E67151B12584C7EE43D2628AD968214);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9236BE8B6DDDBB04FEA6E54A9C6A72C4C98CE6FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA05FF863B80DD22B042F81BC5D81F81C5C9FEC12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7AE700EE77DD1EBC8AF920BEEB52FC5A5C1AE17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7B62A8E1A104801FFCFE62759D187495ECE3F44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEF7A982F3A7604917175ADBBC3B1DA576312F13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5D416C12BE515E3BBCC657F12A1BF186373E237);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAA6F40E032A321CAD554113DD758193D789B097);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	{
		// if (this.character == null)
		SwipeSlasherChara_tA09072D8B2BCF3F5DA98004DF65E9057957DA804* L_0 = __this->___character_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// return;
		goto IL_019a;
	}

IL_0016:
	{
		// if       (CF2Input.GetButtonDown("Left-Stab"))            this.character.ExecuteAction(SwipeSlasherChara.ActionType.LEFT_STAB);
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = CF2Input_GetButtonDown_m6A444789BC13A3B50C0ADE13FA1169235C19C8D0(_stringLiteralFAA6F40E032A321CAD554113DD758193D789B097, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// if       (CF2Input.GetButtonDown("Left-Stab"))            this.character.ExecuteAction(SwipeSlasherChara.ActionType.LEFT_STAB);
		SwipeSlasherChara_tA09072D8B2BCF3F5DA98004DF65E9057957DA804* L_5 = __this->___character_4;
		NullCheck(L_5);
		SwipeSlasherChara_ExecuteAction_mC6CF922664B14B49A02FC26A9D61FCC2D51D8628(L_5, 0, NULL);
		goto IL_019a;
	}

IL_0036:
	{
		// else if (CF2Input.GetButtonDown("Left-Slash-U"))        this.character.ExecuteAction(SwipeSlasherChara.ActionType.LEFT_SLASH_U);
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = CF2Input_GetButtonDown_m6A444789BC13A3B50C0ADE13FA1169235C19C8D0(_stringLiteralC7AE700EE77DD1EBC8AF920BEEB52FC5A5C1AE17, NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		// else if (CF2Input.GetButtonDown("Left-Slash-U"))        this.character.ExecuteAction(SwipeSlasherChara.ActionType.LEFT_SLASH_U);
		SwipeSlasherChara_tA09072D8B2BCF3F5DA98004DF65E9057957DA804* L_8 = __this->___character_4;
		NullCheck(L_8);
		SwipeSlasherChara_ExecuteAction_mC6CF922664B14B49A02FC26A9D61FCC2D51D8628(L_8, 1, NULL);
		goto IL_019a;
	}

IL_0056:
	{
		// else if (CF2Input.GetButtonDown("Left-Slash-R"))        this.character.ExecuteAction(SwipeSlasherChara.ActionType.LEFT_SLASH_R);
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = CF2Input_GetButtonDown_m6A444789BC13A3B50C0ADE13FA1169235C19C8D0(_stringLiteral000F7A93128587B9BBBD546B895D2678C0DECAED, NULL);
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0076;
		}
	}
	{
		// else if (CF2Input.GetButtonDown("Left-Slash-R"))        this.character.ExecuteAction(SwipeSlasherChara.ActionType.LEFT_SLASH_R);
		SwipeSlasherChara_tA09072D8B2BCF3F5DA98004DF65E9057957DA804* L_11 = __this->___character_4;
		NullCheck(L_11);
		SwipeSlasherChara_ExecuteAction_mC6CF922664B14B49A02FC26A9D61FCC2D51D8628(L_11, 2, NULL);
		goto IL_019a;
	}

IL_0076:
	{
		// else if (CF2Input.GetButtonDown("Left-Slash-L"))        this.character.ExecuteAction(SwipeSlasherChara.ActionType.LEFT_SLASH_L);
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = CF2Input_GetButtonDown_m6A444789BC13A3B50C0ADE13FA1169235C19C8D0(_stringLiteral6C1E423C1E67151B12584C7EE43D2628AD968214, NULL);
		V_4 = L_12;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0098;
		}
	}
	{
		// else if (CF2Input.GetButtonDown("Left-Slash-L"))        this.character.ExecuteAction(SwipeSlasherChara.ActionType.LEFT_SLASH_L);
		SwipeSlasherChara_tA09072D8B2BCF3F5DA98004DF65E9057957DA804* L_14 = __this->___character_4;
		NullCheck(L_14);
		SwipeSlasherChara_ExecuteAction_mC6CF922664B14B49A02FC26A9D61FCC2D51D8628(L_14, 4, NULL);
		goto IL_019a;
	}

IL_0098:
	{
		// else if (CF2Input.GetButtonDown("Left-Slash-D"))        this.character.ExecuteAction(SwipeSlasherChara.ActionType.LEFT_SLASH_D);
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = CF2Input_GetButtonDown_m6A444789BC13A3B50C0ADE13FA1169235C19C8D0(_stringLiteralA05FF863B80DD22B042F81BC5D81F81C5C9FEC12, NULL);
		V_5 = L_15;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_00ba;
		}
	}
	{
		// else if (CF2Input.GetButtonDown("Left-Slash-D"))        this.character.ExecuteAction(SwipeSlasherChara.ActionType.LEFT_SLASH_D);
		SwipeSlasherChara_tA09072D8B2BCF3F5DA98004DF65E9057957DA804* L_17 = __this->___character_4;
		NullCheck(L_17);
		SwipeSlasherChara_ExecuteAction_mC6CF922664B14B49A02FC26A9D61FCC2D51D8628(L_17, 3, NULL);
		goto IL_019a;
	}

IL_00ba:
	{
		// else if (CF2Input.GetButtonDown("Right-Stab"))            this.character.ExecuteAction(SwipeSlasherChara.ActionType.RIGHT_STAB);
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = CF2Input_GetButtonDown_m6A444789BC13A3B50C0ADE13FA1169235C19C8D0(_stringLiteral19C8EC7E4EA17B33C63D6F07A1A863D4B590972A, NULL);
		V_6 = L_18;
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_00dc;
		}
	}
	{
		// else if (CF2Input.GetButtonDown("Right-Stab"))            this.character.ExecuteAction(SwipeSlasherChara.ActionType.RIGHT_STAB);
		SwipeSlasherChara_tA09072D8B2BCF3F5DA98004DF65E9057957DA804* L_20 = __this->___character_4;
		NullCheck(L_20);
		SwipeSlasherChara_ExecuteAction_mC6CF922664B14B49A02FC26A9D61FCC2D51D8628(L_20, 5, NULL);
		goto IL_019a;
	}

IL_00dc:
	{
		// else if (CF2Input.GetButtonDown("Right-Slash-U"))        this.character.ExecuteAction(SwipeSlasherChara.ActionType.RIGHT_SLASH_U);
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = CF2Input_GetButtonDown_m6A444789BC13A3B50C0ADE13FA1169235C19C8D0(_stringLiteral9236BE8B6DDDBB04FEA6E54A9C6A72C4C98CE6FE, NULL);
		V_7 = L_21;
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00fe;
		}
	}
	{
		// else if (CF2Input.GetButtonDown("Right-Slash-U"))        this.character.ExecuteAction(SwipeSlasherChara.ActionType.RIGHT_SLASH_U);
		SwipeSlasherChara_tA09072D8B2BCF3F5DA98004DF65E9057957DA804* L_23 = __this->___character_4;
		NullCheck(L_23);
		SwipeSlasherChara_ExecuteAction_mC6CF922664B14B49A02FC26A9D61FCC2D51D8628(L_23, 6, NULL);
		goto IL_019a;
	}

IL_00fe:
	{
		// else if (CF2Input.GetButtonDown("Right-Slash-R"))        this.character.ExecuteAction(SwipeSlasherChara.ActionType.RIGHT_SLASH_R);
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = CF2Input_GetButtonDown_m6A444789BC13A3B50C0ADE13FA1169235C19C8D0(_stringLiteralF5D416C12BE515E3BBCC657F12A1BF186373E237, NULL);
		V_8 = L_24;
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_011d;
		}
	}
	{
		// else if (CF2Input.GetButtonDown("Right-Slash-R"))        this.character.ExecuteAction(SwipeSlasherChara.ActionType.RIGHT_SLASH_R);
		SwipeSlasherChara_tA09072D8B2BCF3F5DA98004DF65E9057957DA804* L_26 = __this->___character_4;
		NullCheck(L_26);
		SwipeSlasherChara_ExecuteAction_mC6CF922664B14B49A02FC26A9D61FCC2D51D8628(L_26, 7, NULL);
		goto IL_019a;
	}

IL_011d:
	{
		// else if (CF2Input.GetButtonDown("Right-Slash-L"))        this.character.ExecuteAction(SwipeSlasherChara.ActionType.RIGHT_SLASH_L);
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = CF2Input_GetButtonDown_m6A444789BC13A3B50C0ADE13FA1169235C19C8D0(_stringLiteralC7B62A8E1A104801FFCFE62759D187495ECE3F44, NULL);
		V_9 = L_27;
		bool L_28 = V_9;
		if (!L_28)
		{
			goto IL_013d;
		}
	}
	{
		// else if (CF2Input.GetButtonDown("Right-Slash-L"))        this.character.ExecuteAction(SwipeSlasherChara.ActionType.RIGHT_SLASH_L);
		SwipeSlasherChara_tA09072D8B2BCF3F5DA98004DF65E9057957DA804* L_29 = __this->___character_4;
		NullCheck(L_29);
		SwipeSlasherChara_ExecuteAction_mC6CF922664B14B49A02FC26A9D61FCC2D51D8628(L_29, ((int32_t)9), NULL);
		goto IL_019a;
	}

IL_013d:
	{
		// else if (CF2Input.GetButtonDown("Right-Slash-D"))        this.character.ExecuteAction(SwipeSlasherChara.ActionType.RIGHT_SLASH_D);
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = CF2Input_GetButtonDown_m6A444789BC13A3B50C0ADE13FA1169235C19C8D0(_stringLiteral66DAD23B2D9F87BF5E8B44FF0795EC5DEB669F59, NULL);
		V_10 = L_30;
		bool L_31 = V_10;
		if (!L_31)
		{
			goto IL_015c;
		}
	}
	{
		// else if (CF2Input.GetButtonDown("Right-Slash-D"))        this.character.ExecuteAction(SwipeSlasherChara.ActionType.RIGHT_SLASH_D);
		SwipeSlasherChara_tA09072D8B2BCF3F5DA98004DF65E9057957DA804* L_32 = __this->___character_4;
		NullCheck(L_32);
		SwipeSlasherChara_ExecuteAction_mC6CF922664B14B49A02FC26A9D61FCC2D51D8628(L_32, 8, NULL);
		goto IL_019a;
	}

IL_015c:
	{
		// else if (CF2Input.GetButtonDown("Dodge-Right"))            this.character.ExecuteAction(SwipeSlasherChara.ActionType.DODGE_RIGHT);
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = CF2Input_GetButtonDown_m6A444789BC13A3B50C0ADE13FA1169235C19C8D0(_stringLiteral68264C964D46F9CF8078E84BA733DCCB94C8E2A8, NULL);
		V_11 = L_33;
		bool L_34 = V_11;
		if (!L_34)
		{
			goto IL_017c;
		}
	}
	{
		// else if (CF2Input.GetButtonDown("Dodge-Right"))            this.character.ExecuteAction(SwipeSlasherChara.ActionType.DODGE_RIGHT);
		SwipeSlasherChara_tA09072D8B2BCF3F5DA98004DF65E9057957DA804* L_35 = __this->___character_4;
		NullCheck(L_35);
		SwipeSlasherChara_ExecuteAction_mC6CF922664B14B49A02FC26A9D61FCC2D51D8628(L_35, ((int32_t)11), NULL);
		goto IL_019a;
	}

IL_017c:
	{
		// else if (CF2Input.GetButtonDown("Dodge-Left"))            this.character.ExecuteAction(SwipeSlasherChara.ActionType.DODGE_LEFT);
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = CF2Input_GetButtonDown_m6A444789BC13A3B50C0ADE13FA1169235C19C8D0(_stringLiteralDEF7A982F3A7604917175ADBBC3B1DA576312F13, NULL);
		V_12 = L_36;
		bool L_37 = V_12;
		if (!L_37)
		{
			goto IL_019a;
		}
	}
	{
		// else if (CF2Input.GetButtonDown("Dodge-Left"))            this.character.ExecuteAction(SwipeSlasherChara.ActionType.DODGE_LEFT);
		SwipeSlasherChara_tA09072D8B2BCF3F5DA98004DF65E9057957DA804* L_38 = __this->___character_4;
		NullCheck(L_38);
		SwipeSlasherChara_ExecuteAction_mC6CF922664B14B49A02FC26A9D61FCC2D51D8628(L_38, ((int32_t)10), NULL);
	}

IL_019a:
	{
		// }
		return;
	}
}
// System.Void ControlFreak2.Demos.SwipeSlasher.SwipeSlasherUserControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeSlasherUserControl__ctor_m35E5374E9FC366BF8CE92359CA079BCBB7248A51 (SwipeSlasherUserControl_t3FB19BA8E21601F351F3BD3E5B2F288B1594B791* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ControlFreak2.Demos.RPG.CharacterAction::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAction_OnEnable_mEA6825B52B7E38A1B648B86D009A86C44B27A8C5 (CharacterAction_t3057F4DC5B16E52558F1FCAFEE87299FBB5F2EDB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.animator = this.GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void ControlFreak2.Demos.RPG.CharacterAction::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAction_Update_m9834A1718F52FB6585585A7DFC9A6721093DEF22 (CharacterAction_t3057F4DC5B16E52558F1FCAFEE87299FBB5F2EDB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (!string.IsNullOrEmpty(this.actionButonName) && CF2Input.GetButtonDown(this.actionButonName))
		String_t* L_0 = __this->___actionButonName_5;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_2 = __this->___actionButonName_5;
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = CF2Input_GetButtonDown_m6A444789BC13A3B50C0ADE13FA1169235C19C8D0(L_2, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// this.PerformAction();
		CharacterAction_PerformAction_mC8BEBEE32AE3648091B0E3C7634B6C9BF4F30E30(__this, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void ControlFreak2.Demos.RPG.CharacterAction::PerformAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAction_PerformAction_mC8BEBEE32AE3648091B0E3C7634B6C9BF4F30E30 (CharacterAction_t3057F4DC5B16E52558F1FCAFEE87299FBB5F2EDB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InteractiveObjectBase_t478C103D6AEA44F79CE7838E698714F56EB58B30* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B6_0 = 0;
	{
		// if (this.levelData == null)
		LevelData_tC6399F01040DB1B18E5D9F2CCC6FA6D864BA9791* L_0 = __this->___levelData_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		goto IL_0067;
	}

IL_0013:
	{
		// InteractiveObjectBase
		//     obj = this.levelData.FindInteractiveObjectFor(this);
		LevelData_tC6399F01040DB1B18E5D9F2CCC6FA6D864BA9791* L_3 = __this->___levelData_4;
		NullCheck(L_3);
		InteractiveObjectBase_t478C103D6AEA44F79CE7838E698714F56EB58B30* L_4;
		L_4 = LevelData_FindInteractiveObjectFor_m89DDB3BF25ACD556F885529958FF06826D7349C6(L_3, __this, NULL);
		V_0 = L_4;
		// if (obj != null)
		InteractiveObjectBase_t478C103D6AEA44F79CE7838E698714F56EB58B30* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0067;
		}
	}
	{
		// if (!string.IsNullOrEmpty(this.actionAnimatorTrigger) && (this.animator != null))
		String_t* L_8 = __this->___actionAnimatorTrigger_6;
		bool L_9;
		L_9 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_8, NULL);
		if (L_9)
		{
			goto IL_0047;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = __this->___animator_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B6_0 = ((int32_t)(L_11));
		goto IL_0048;
	}

IL_0047:
	{
		G_B6_0 = 0;
	}

IL_0048:
	{
		V_3 = (bool)G_B6_0;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_005e;
		}
	}
	{
		// this.animator.SetTrigger(this.actionAnimatorTrigger);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_13 = __this->___animator_7;
		String_t* L_14 = __this->___actionAnimatorTrigger_6;
		NullCheck(L_13);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_13, L_14, NULL);
	}

IL_005e:
	{
		// obj.OnCharacterAction(this);
		InteractiveObjectBase_t478C103D6AEA44F79CE7838E698714F56EB58B30* L_15 = V_0;
		NullCheck(L_15);
		VirtualActionInvoker1< CharacterAction_t3057F4DC5B16E52558F1FCAFEE87299FBB5F2EDB* >::Invoke(4 /* System.Void ControlFreak2.Demos.RPG.InteractiveObjectBase::OnCharacterAction(ControlFreak2.Demos.RPG.CharacterAction) */, L_15, __this);
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Void ControlFreak2.Demos.RPG.CharacterAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAction__ctor_m3C125D569C81856CFD9FFDCDABC14CF0DD51729B (CharacterAction_t3057F4DC5B16E52558F1FCAFEE87299FBB5F2EDB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD86881DBA7E6B755DFE2849A5B0579CC3D828CD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string
		//     actionButonName = "Action";
		__this->___actionButonName_5 = _stringLiteralDD86881DBA7E6B755DFE2849A5B0579CC3D828CD;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___actionButonName_5), (void*)_stringLiteralDD86881DBA7E6B755DFE2849A5B0579CC3D828CD);
		// public string
		//     actionAnimatorTrigger = "Action";
		__this->___actionAnimatorTrigger_6 = _stringLiteralDD86881DBA7E6B755DFE2849A5B0579CC3D828CD;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___actionAnimatorTrigger_6), (void*)_stringLiteralDD86881DBA7E6B755DFE2849A5B0579CC3D828CD);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Boolean ControlFreak2.Demos.RPG.InteractiveObjectBase::IsNear(ControlFreak2.Demos.RPG.CharacterAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractiveObjectBase_IsNear_m5E7D1A1D39D3322272329501C9A3EE1118644392 (InteractiveObjectBase_t478C103D6AEA44F79CE7838E698714F56EB58B30* __this, CharacterAction_t3057F4DC5B16E52558F1FCAFEE87299FBB5F2EDB* ___chara0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// return ((chara.transform.position - this.transform.position).sqrMagnitude < (this.radius * this.radius));
		CharacterAction_t3057F4DC5B16E52558F1FCAFEE87299FBB5F2EDB* L_0 = ___chara0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_2, L_4, NULL);
		V_0 = L_5;
		float L_6;
		L_6 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_0), NULL);
		float L_7 = __this->___radius_4;
		float L_8 = __this->___radius_4;
		V_1 = (bool)((((float)L_6) < ((float)((float)il2cpp_codegen_multiply(L_7, L_8))))? 1 : 0);
		goto IL_0036;
	}

IL_0036:
	{
		// }
		bool L_9 = V_1;
		return L_9;
	}
}
// System.Void ControlFreak2.Demos.RPG.InteractiveObjectBase::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractiveObjectBase_OnDrawGizmos_m8AD253F6032A29A216BB9F20D2619C1708146693 (InteractiveObjectBase_t478C103D6AEA44F79CE7838E698714F56EB58B30* __this, const RuntimeMethod* method) 
{
	{
		// this.DrawDefaultGizmo();
		InteractiveObjectBase_DrawDefaultGizmo_m104EF4110DB55EA644168B24B194798868469D2C(__this, NULL);
		// }
		return;
	}
}
// System.Void ControlFreak2.Demos.RPG.InteractiveObjectBase::DrawDefaultGizmo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractiveObjectBase_DrawDefaultGizmo_m104EF4110DB55EA644168B24B194798868469D2C (InteractiveObjectBase_t478C103D6AEA44F79CE7838E698714F56EB58B30* __this, const RuntimeMethod* method) 
{
	{
		// Gizmos.matrix = Matrix4x4.identity;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0;
		L_0 = Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline(NULL);
		Gizmos_set_matrix_m916F9A7A8ACC51F304BB5BB4536854A045EF844B(L_0, NULL);
		// Gizmos.DrawWireSphere(this.transform.position, this.radius);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = __this->___radius_4;
		Gizmos_DrawWireSphere_m23F90E2FD50D825625414C0A0AA8B1557CB5DD61(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void ControlFreak2.Demos.RPG.InteractiveObjectBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractiveObjectBase__ctor_m702E86D9CCFDF2A9CAFF2A1F65693E599B9A9B39 (InteractiveObjectBase_t478C103D6AEA44F79CE7838E698714F56EB58B30* __this, const RuntimeMethod* method) 
{
	{
		// public float
		//     radius = 2;
		__this->___radius_4 = (2.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ControlFreak2.Demos.RPG.LevelData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelData__ctor_mFC075E97C05258D1D92132A1E1532F49E6D23E94 (LevelData_tC6399F01040DB1B18E5D9F2CCC6FA6D864BA9791* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA016A42269A620BA6707C223C39BED0F6D9C2E5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA216AD71654DE34217F98DCAC244F8CF09DD2196_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public LevelData() : base()
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		// this.interactiveObjectList = new List<InteractiveObjectBase>();
		List_1_tA216AD71654DE34217F98DCAC244F8CF09DD2196* L_0 = (List_1_tA216AD71654DE34217F98DCAC244F8CF09DD2196*)il2cpp_codegen_object_new(List_1_tA216AD71654DE34217F98DCAC244F8CF09DD2196_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mA016A42269A620BA6707C223C39BED0F6D9C2E5B(L_0, List_1__ctor_mA016A42269A620BA6707C223C39BED0F6D9C2E5B_RuntimeMethod_var);
		__this->___interactiveObjectList_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interactiveObjectList_4), (void*)L_0);
		// }
		return;
	}
}
// ControlFreak2.Demos.RPG.InteractiveObjectBase ControlFreak2.Demos.RPG.LevelData::FindInteractiveObjectFor(ControlFreak2.Demos.RPG.CharacterAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractiveObjectBase_t478C103D6AEA44F79CE7838E698714F56EB58B30* LevelData_FindInteractiveObjectFor_m89DDB3BF25ACD556F885529958FF06826D7349C6 (LevelData_tC6399F01040DB1B18E5D9F2CCC6FA6D864BA9791* __this, CharacterAction_t3057F4DC5B16E52558F1FCAFEE87299FBB5F2EDB* ___chara0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6420E7FBFE9F42C9CE66D9B0B256E2C40D2DDEE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m473D521DF80D9DF9B4450D2DF4A33E4EB881EDFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InteractiveObjectBase_t478C103D6AEA44F79CE7838E698714F56EB58B30* V_0 = NULL;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	InteractiveObjectBase_t478C103D6AEA44F79CE7838E698714F56EB58B30* V_3 = NULL;
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	bool V_8 = false;
	InteractiveObjectBase_t478C103D6AEA44F79CE7838E698714F56EB58B30* V_9 = NULL;
	int32_t G_B4_0 = 0;
	int32_t G_B9_0 = 0;
	{
		// InteractiveObjectBase
		//     nearestObj = null;
		V_0 = (InteractiveObjectBase_t478C103D6AEA44F79CE7838E698714F56EB58B30*)NULL;
		// float
		//     nearestObjDistSq = 0;
		V_1 = (0.0f);
		// for (int i = 0; i < this.interactiveObjectList.Count; ++i)
		V_2 = 0;
		goto IL_0082;
	}

IL_000d:
	{
		// InteractiveObjectBase o = this.interactiveObjectList[i];
		List_1_tA216AD71654DE34217F98DCAC244F8CF09DD2196* L_0 = __this->___interactiveObjectList_4;
		int32_t L_1 = V_2;
		NullCheck(L_0);
		InteractiveObjectBase_t478C103D6AEA44F79CE7838E698714F56EB58B30* L_2;
		L_2 = List_1_get_Item_m473D521DF80D9DF9B4450D2DF4A33E4EB881EDFB(L_0, L_1, List_1_get_Item_m473D521DF80D9DF9B4450D2DF4A33E4EB881EDFB_RuntimeMethod_var);
		V_3 = L_2;
		// if ((o == null) || !o.IsNear(chara))
		InteractiveObjectBase_t478C103D6AEA44F79CE7838E698714F56EB58B30* L_3 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		InteractiveObjectBase_t478C103D6AEA44F79CE7838E698714F56EB58B30* L_5 = V_3;
		CharacterAction_t3057F4DC5B16E52558F1FCAFEE87299FBB5F2EDB* L_6 = ___chara0;
		NullCheck(L_5);
		bool L_7;
		L_7 = VirtualFuncInvoker1< bool, CharacterAction_t3057F4DC5B16E52558F1FCAFEE87299FBB5F2EDB* >::Invoke(5 /* System.Boolean ControlFreak2.Demos.RPG.InteractiveObjectBase::IsNear(ControlFreak2.Demos.RPG.CharacterAction) */, L_5, L_6);
		G_B4_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B4_0 = 1;
	}

IL_0031:
	{
		V_5 = (bool)G_B4_0;
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		// continue;
		goto IL_007e;
	}

IL_0039:
	{
		// float distSq = (chara.transform.position - o.transform.position).sqrMagnitude;
		CharacterAction_t3057F4DC5B16E52558F1FCAFEE87299FBB5F2EDB* L_9 = ___chara0;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		InteractiveObjectBase_t478C103D6AEA44F79CE7838E698714F56EB58B30* L_12 = V_3;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_11, L_14, NULL);
		V_6 = L_15;
		float L_16;
		L_16 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_6), NULL);
		V_4 = L_16;
		// if ((nearestObj == null) || (distSq < nearestObjDistSq))
		InteractiveObjectBase_t478C103D6AEA44F79CE7838E698714F56EB58B30* L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_18)
		{
			goto IL_006f;
		}
	}
	{
		float L_19 = V_4;
		float L_20 = V_1;
		G_B9_0 = ((((float)L_19) < ((float)L_20))? 1 : 0);
		goto IL_0070;
	}

IL_006f:
	{
		G_B9_0 = 1;
	}

IL_0070:
	{
		V_7 = (bool)G_B9_0;
		bool L_21 = V_7;
		if (!L_21)
		{
			goto IL_007d;
		}
	}
	{
		// nearestObj = o;
		InteractiveObjectBase_t478C103D6AEA44F79CE7838E698714F56EB58B30* L_22 = V_3;
		V_0 = L_22;
		// nearestObjDistSq = distSq;
		float L_23 = V_4;
		V_1 = L_23;
	}

IL_007d:
	{
	}

IL_007e:
	{
		// for (int i = 0; i < this.interactiveObjectList.Count; ++i)
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0082:
	{
		// for (int i = 0; i < this.interactiveObjectList.Count; ++i)
		int32_t L_25 = V_2;
		List_1_tA216AD71654DE34217F98DCAC244F8CF09DD2196* L_26 = __this->___interactiveObjectList_4;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_m6420E7FBFE9F42C9CE66D9B0B256E2C40D2DDEE2_inline(L_26, List_1_get_Count_m6420E7FBFE9F42C9CE66D9B0B256E2C40D2DDEE2_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_25) < ((int32_t)L_27))? 1 : 0);
		bool L_28 = V_8;
		if (L_28)
		{
			goto IL_000d;
		}
	}
	{
		// return nearestObj;
		InteractiveObjectBase_t478C103D6AEA44F79CE7838E698714F56EB58B30* L_29 = V_0;
		V_9 = L_29;
		goto IL_009e;
	}

IL_009e:
	{
		// }
		InteractiveObjectBase_t478C103D6AEA44F79CE7838E698714F56EB58B30* L_30 = V_9;
		return L_30;
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
// System.Void ControlFreak2.Demos.RPG.SimpleInteractiveObject::OnCharacterAction(ControlFreak2.Demos.RPG.CharacterAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleInteractiveObject_OnCharacterAction_mBB08EBC347CA77AE14B5CC85E69DAA479164B602 (SimpleInteractiveObject_t090499005CA9596CF26D7F6E8FCBF102D8E05D59* __this, CharacterAction_t3057F4DC5B16E52558F1FCAFEE87299FBB5F2EDB* ___chara0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B3_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B2_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B4_1 = NULL;
	{
		// this.isActivated = !this.isActivated;
		bool L_0 = __this->___isActivated_8;
		__this->___isActivated_8 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// if (this.targetRenderer != null)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1 = __this->___targetRenderer_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0046;
		}
	}
	{
		// this.targetRenderer.material.color = (this.isActivated ? this.activatedColor : Color.white);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_4 = __this->___targetRenderer_6;
		NullCheck(L_4);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5;
		L_5 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_4, NULL);
		bool L_6 = __this->___isActivated_8;
		G_B2_0 = L_5;
		if (L_6)
		{
			G_B3_0 = L_5;
			goto IL_003a;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		G_B4_0 = L_7;
		G_B4_1 = G_B2_0;
		goto IL_0040;
	}

IL_003a:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = __this->___activatedColor_5;
		G_B4_0 = L_8;
		G_B4_1 = G_B3_0;
	}

IL_0040:
	{
		NullCheck(G_B4_1);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(G_B4_1, G_B4_0, NULL);
	}

IL_0046:
	{
		// if (this.soundEffect != null)
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_9 = __this->___soundEffect_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_006d;
		}
	}
	{
		// AudioSource.PlayClipAtPoint(this.soundEffect, this.transform.position);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_12 = __this->___soundEffect_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		AudioSource_PlayClipAtPoint_mDF9531618C28411888855FD6B4B58F315083B8AC(L_12, L_14, NULL);
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Void ControlFreak2.Demos.RPG.SimpleInteractiveObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleInteractiveObject__ctor_mEB8C79DF16CE66FE8CEBF19F10A47186180BC21D (SimpleInteractiveObject_t090499005CA9596CF26D7F6E8FCBF102D8E05D59* __this, const RuntimeMethod* method) 
{
	{
		// public Color
		//     activatedColor = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline(NULL);
		__this->___activatedColor_5 = L_0;
		// private bool
		//     isActivated = false;
		__this->___isActivated_8 = (bool)0;
		InteractiveObjectBase__ctor_m702E86D9CCFDF2A9CAFF2A1F65693E599B9A9B39(__this, NULL);
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
// System.Void ControlFreak2.Demos.Cameras.SimpleFollowCam::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleFollowCam_OnEnable_m5E73C7AB1C11E3A8E944A65636061BBBC8A3FB81 (SimpleFollowCam_t7726ABE6ADB891E3C15F380906EFC02423762DB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// this.cam = this.GetComponent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		__this->___cam_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_13), (void*)L_0);
		// if ((this.cam != null) && (this.cam.orthographic))
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___cam_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___cam_13;
		NullCheck(L_3);
		bool L_4;
		L_4 = Camera_get_orthographic_m904DEFC76C54DA4E30C20A62A86D5D87B7D4DD8F(L_3, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		// this.camZoomFactor = 0.5f;
		__this->___camZoomFactor_8 = (0.5f);
	}

IL_0038:
	{
		// if (this.targetTransform != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___targetTransform_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		// this.targetOfs = this.transform.position - this.targetTransform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___targetTransform_4;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_10, L_12, NULL);
		__this->___targetOfs_6 = L_13;
	}

IL_0069:
	{
		// }
		return;
	}
}
// System.Void ControlFreak2.Demos.Cameras.SimpleFollowCam::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleFollowCam_Update_m461596C8E361EFF46846B66DD0AB8BC78A01CAED (SimpleFollowCam_t7726ABE6ADB891E3C15F380906EFC02423762DB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!string.IsNullOrEmpty(this.camZoomDeltaAxis))
		String_t* L_0 = __this->___camZoomDeltaAxis_12;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// this.camZoomFactor += CF2Input.GetAxis(this.camZoomDeltaAxis);
		float L_3 = __this->___camZoomFactor_8;
		String_t* L_4 = __this->___camZoomDeltaAxis_12;
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		float L_5;
		L_5 = CF2Input_GetAxis_m2A4EEECCC7B2B7A310EC633F0C3615C60AE3DE00(L_4, NULL);
		__this->___camZoomFactor_8 = ((float)il2cpp_codegen_add(L_3, L_5));
	}

IL_002b:
	{
		// this.camZoomFactor = Mathf.Clamp01(this.camZoomFactor);
		float L_6 = __this->___camZoomFactor_8;
		float L_7;
		L_7 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_6, NULL);
		__this->___camZoomFactor_8 = L_7;
		// }
		return;
	}
}
// System.Void ControlFreak2.Demos.Cameras.SimpleFollowCam::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleFollowCam_FixedUpdate_m1AAC50DE043C085AA4FB48AAF0E2FF60D98CEBB6 (SimpleFollowCam_t7726ABE6ADB891E3C15F380906EFC02423762DB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	{
		// if (this.targetTransform == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___targetTransform_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// return;
		goto IL_00f9;
	}

IL_0016:
	{
		// Vector3 pos =
		//     this.targetTransform.position + this.targetOfs;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___targetTransform_4;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___targetOfs_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_4, L_5, NULL);
		V_0 = L_6;
		// if ((this.cam != null) && cam.orthographic)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = __this->___cam_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0048;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9 = __this->___cam_13;
		NullCheck(L_9);
		bool L_10;
		L_10 = Camera_get_orthographic_m904DEFC76C54DA4E30C20A62A86D5D87B7D4DD8F(L_9, NULL);
		G_B5_0 = ((int32_t)(L_10));
		goto IL_0049;
	}

IL_0048:
	{
		G_B5_0 = 0;
	}

IL_0049:
	{
		V_2 = (bool)G_B5_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0099;
		}
	}
	{
		// cam.orthographicSize = CFUtils.SmoothTowards(this.cam.orthographicSize,
		//     Mathf.Lerp(this.orthoZoomInSize, this.orthoZoomOutSize, this.camZoomFactor), this.smoothingTime, CFUtils.realDeltaTimeClamped, 0.0001f);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12 = __this->___cam_13;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13 = __this->___cam_13;
		NullCheck(L_13);
		float L_14;
		L_14 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_13, NULL);
		float L_15 = __this->___orthoZoomInSize_10;
		float L_16 = __this->___orthoZoomOutSize_11;
		float L_17 = __this->___camZoomFactor_8;
		float L_18;
		L_18 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_15, L_16, L_17, NULL);
		float L_19 = __this->___smoothingTime_5;
		float L_20;
		L_20 = CFUtils_get_realDeltaTimeClamped_m1CB4AE6134EE84AD9141CCEAB0FAB861CA4AB18B(NULL);
		float L_21;
		L_21 = CFUtils_SmoothTowards_mBD6C782C095D45265B7B96834125AC08F2E45635(L_14, L_18, L_19, L_20, (9.99999975E-05f), (0.75f), NULL);
		NullCheck(L_12);
		Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_12, L_21, NULL);
		goto IL_00bd;
	}

IL_0099:
	{
		// pos -= (this.transform.forward * (this.camZoomFactor * this.perspZoomOutOffset));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_23, NULL);
		float L_25 = __this->___camZoomFactor_8;
		float L_26 = __this->___perspZoomOutOffset_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_24, ((float)il2cpp_codegen_multiply(L_25, L_26)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_22, L_27, NULL);
		V_0 = L_28;
	}

IL_00bd:
	{
		// if (this.smoothingTime > 0.001f)
		float L_29 = __this->___smoothingTime_5;
		V_3 = (bool)((((float)L_29) > ((float)(0.00100000005f)))? 1 : 0);
		bool L_30 = V_3;
		if (!L_30)
		{
			goto IL_00ec;
		}
	}
	{
		// pos = Vector3.SmoothDamp(this.transform.position, pos, ref this.smoothPosVel, this.smoothingTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_34 = (&__this->___smoothPosVel_7);
		float L_35 = __this->___smoothingTime_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_SmoothDamp_m017722BD53BAE32893C2A1B674746E340D4A5B89_inline(L_32, L_33, L_34, L_35, NULL);
		V_0 = L_36;
	}

IL_00ec:
	{
		// this.transform.position = pos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_0;
		NullCheck(L_37);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_37, L_38, NULL);
	}

IL_00f9:
	{
		// }
		return;
	}
}
// System.Void ControlFreak2.Demos.Cameras.SimpleFollowCam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleFollowCam__ctor_mEDB5E8E42E5C742C2401F05B0443A0AE5BFD21B1 (SimpleFollowCam_t7726ABE6ADB891E3C15F380906EFC02423762DB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51A5C2976907608B329FD258084464A562E26572);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float
		//     smoothingTime = 0.1f;
		__this->___smoothingTime_5 = (0.100000001f);
		// public float
		//     perspZoomOutOffset = 10.0f,
		__this->___perspZoomOutOffset_9 = (10.0f);
		// orthoZoomInSize         = 2,
		__this->___orthoZoomInSize_10 = (2.0f);
		// orthoZoomOutSize    = 5;
		__this->___orthoZoomOutSize_11 = (5.0f);
		// public string
		//     camZoomDeltaAxis = "Cam-Zoom-Delta";
		__this->___camZoomDeltaAxis_12 = _stringLiteral51A5C2976907608B329FD258084464A562E26572;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___camZoomDeltaAxis_12), (void*)_stringLiteral51A5C2976907608B329FD258084464A562E26572);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ControlFreak2.Demos.Characters.DualStickShooterCharaAnimator::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DualStickShooterCharaAnimator_OnEnable_m2325D23365405CE090C7B35B74B94884936414EC (DualStickShooterCharaAnimator_t85D9CBD03D995E8279F2A28E4F5D15AE0976BD2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisDualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763_mA4374779F36BF3076C2542FB015F97B46CD7B485_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (this.animator == null)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// this.animator = this.GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3;
		L_3 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_5), (void*)L_3);
	}

IL_001d:
	{
		// if (this.charaMotor == null)
		DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* L_4 = __this->___charaMotor_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		// this.charaMotor = this.GetComponent<DualStickShooterCharaMotor>();
		DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* L_7;
		L_7 = Component_GetComponent_TisDualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763_mA4374779F36BF3076C2542FB015F97B46CD7B485(__this, Component_GetComponent_TisDualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763_mA4374779F36BF3076C2542FB015F97B46CD7B485_RuntimeMethod_var);
		__this->___charaMotor_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___charaMotor_4), (void*)L_7);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void ControlFreak2.Demos.Characters.DualStickShooterCharaAnimator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DualStickShooterCharaAnimator_Update_mFAC93CF7D3B2ABCE70ADABC867ED2E189347AAFB (DualStickShooterCharaAnimator_t85D9CBD03D995E8279F2A28E4F5D15AE0976BD2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	{
		// if ((this.animator == null) || (this.charaMotor == null))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* L_2 = __this->___charaMotor_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
	}

IL_001e:
	{
		V_1 = (bool)G_B3_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// return;
		goto IL_00cf;
	}

IL_0027:
	{
		// Vector2 v = new Vector2(this.charaMotor.GetLocalDir().x, this.charaMotor.GetLocalDir().z);
		DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* L_5 = __this->___charaMotor_4;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = DualStickShooterCharaMotor_GetLocalDir_m975EFD4856B33FBCE3E66C7817280B9DEC25A173(L_5, NULL);
		float L_7 = L_6.___x_2;
		DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* L_8 = __this->___charaMotor_4;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = DualStickShooterCharaMotor_GetLocalDir_m975EFD4856B33FBCE3E66C7817280B9DEC25A173(L_8, NULL);
		float L_10 = L_9.___z_4;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_7, L_10, NULL);
		// if (!string.IsNullOrEmpty(this.speedParamName))
		String_t* L_11 = __this->___speedParamName_8;
		bool L_12;
		L_12 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_11, NULL);
		V_2 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_0079;
		}
	}
	{
		// this.animator.SetFloat(this.speedParamName, v.magnitude);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_14 = __this->___animator_5;
		String_t* L_15 = __this->___speedParamName_8;
		float L_16;
		L_16 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_0), NULL);
		NullCheck(L_14);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_14, L_15, L_16, NULL);
	}

IL_0079:
	{
		// if (!string.IsNullOrEmpty(this.forwardBackwardParamName))
		String_t* L_17 = __this->___forwardBackwardParamName_6;
		bool L_18;
		L_18 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_17, NULL);
		V_3 = (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_00a3;
		}
	}
	{
		// this.animator.SetFloat(this.forwardBackwardParamName, v.y);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_20 = __this->___animator_5;
		String_t* L_21 = __this->___forwardBackwardParamName_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_0;
		float L_23 = L_22.___y_1;
		NullCheck(L_20);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_20, L_21, L_23, NULL);
	}

IL_00a3:
	{
		// if (!string.IsNullOrEmpty(this.strafeParamName))
		String_t* L_24 = __this->___strafeParamName_7;
		bool L_25;
		L_25 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_24, NULL);
		V_4 = (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_4;
		if (!L_26)
		{
			goto IL_00cf;
		}
	}
	{
		// this.animator.SetFloat(this.strafeParamName, v.x);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_27 = __this->___animator_5;
		String_t* L_28 = __this->___strafeParamName_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_0;
		float L_30 = L_29.___x_0;
		NullCheck(L_27);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_27, L_28, L_30, NULL);
	}

IL_00cf:
	{
		// }
		return;
	}
}
// System.Void ControlFreak2.Demos.Characters.DualStickShooterCharaAnimator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DualStickShooterCharaAnimator__ctor_m8EFA41B979A3E69E1ED18A8651B0203C4F4F6CED (DualStickShooterCharaAnimator_t85D9CBD03D995E8279F2A28E4F5D15AE0976BD2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string
		//     forwardBackwardParamName    = "Vertical",
		__this->___forwardBackwardParamName_6 = _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___forwardBackwardParamName_6), (void*)_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		// strafeParamName                = "Horizontal",
		__this->___strafeParamName_7 = _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___strafeParamName_7), (void*)_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		// speedParamName                    = "Speed";
		__this->___speedParamName_8 = _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___speedParamName_8), (void*)_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DualStickShooterCharaMotor_OnEnable_m4F51CC7D6FB2DB5FD85DEE4F8AF829F44022F975 (DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// this.worldOrientAngle = this.worldMoveAngle = GetAngleFromDir(this.transform.forward, WorldPlane.XZ, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_0, NULL);
		float L_2;
		L_2 = DualStickShooterCharaMotor_GetAngleFromDir_m91D30CBF1ADA1853B921EE45F963BC31CAF24951(L_1, 0, (0.0f), NULL);
		float L_3 = L_2;
		V_0 = L_3;
		__this->___worldMoveAngle_19 = L_3;
		float L_4 = V_0;
		__this->___worldOrientAngle_20 = L_4;
		// this.rb = this.GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5;
		L_5 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_9), (void*)L_5);
		// this.MoveOrientation(this.worldOrientAngle);
		float L_6 = __this->___worldOrientAngle_20;
		DualStickShooterCharaMotor_MoveOrientation_m04E3A94C1FF0802F8CC5BC107127D1A19FA9B272(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::MoveOrientation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DualStickShooterCharaMotor_MoveOrientation_m04E3A94C1FF0802F8CC5BC107127D1A19FA9B272 (DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* __this, float ___angle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// Quaternion q = Quaternion.AngleAxis(angle + this.orientationOffset, Vector3.up);
		float L_0 = ___angle0;
		float L_1 = __this->___orientationOffset_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8(((float)il2cpp_codegen_add(L_0, L_1)), L_2, NULL);
		V_0 = L_3;
		// if (this.rb != null)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = __this->___rb_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		// this.rb.MoveRotation(q);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = __this->___rb_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = V_0;
		NullCheck(L_7);
		Rigidbody_MoveRotation_m85825C7206E770E39DED9EE6D792702F577A891D(L_7, L_8, NULL);
		goto IL_0040;
	}

IL_0033:
	{
		// this.transform.rotation = q;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = V_0;
		NullCheck(L_9);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_9, L_10, NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::MovePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DualStickShooterCharaMotor_MovePosition_m3DCEB98B56792AB59B689307ACB8B8D80EC9044F (DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (this.rb != null)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// this.rb.MovePosition(worldPos);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = __this->___rb_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___worldPos0;
		NullCheck(L_3);
		Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9(L_3, L_4, NULL);
		goto IL_002d;
	}

IL_0020:
	{
		// this.transform.position = worldPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___worldPos0;
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_6, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DualStickShooterCharaMotor_Update_m60B86EB386A236A8F0486A9EA147E4B7A8AF670F (DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B2_0 = NULL;
	DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* G_B2_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B1_0 = NULL;
	DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* G_B1_1 = NULL;
	float G_B3_0 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_1 = NULL;
	DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* G_B3_2 = NULL;
	float G_B5_0 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B5_1 = NULL;
	DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* G_B5_2 = NULL;
	float G_B4_0 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B4_1 = NULL;
	DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* G_B4_2 = NULL;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B6_2 = NULL;
	DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* G_B6_3 = NULL;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B8_2 = NULL;
	DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* G_B8_3 = NULL;
	float G_B7_0 = 0.0f;
	float G_B7_1 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B7_2 = NULL;
	DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* G_B7_3 = NULL;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	float G_B9_2 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B9_3 = NULL;
	DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* G_B9_4 = NULL;
	float G_B11_0 = 0.0f;
	float G_B11_1 = 0.0f;
	float G_B11_2 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B11_3 = NULL;
	DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* G_B11_4 = NULL;
	float G_B10_0 = 0.0f;
	float G_B10_1 = 0.0f;
	float G_B10_2 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B10_3 = NULL;
	DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* G_B10_4 = NULL;
	float G_B12_0 = 0.0f;
	float G_B12_1 = 0.0f;
	float G_B12_2 = 0.0f;
	float G_B12_3 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B12_4 = NULL;
	DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* G_B12_5 = NULL;
	{
		// this.SetCameraRelativeInput(this.cameraTransform,
		//     (string.IsNullOrEmpty(this.moveHorzAxis) ? 0 : CF2Input.GetAxis(this.moveHorzAxis)),
		//     (string.IsNullOrEmpty(this.moveVertAxis) ? 0 : CF2Input.GetAxis(this.moveVertAxis)),
		//     (string.IsNullOrEmpty(this.aimHorzAxis) ? 0 : CF2Input.GetAxis(this.aimHorzAxis)),
		//     (string.IsNullOrEmpty(this.aimVertAxis) ? 0 : CF2Input.GetAxis(this.aimVertAxis)));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___cameraTransform_4;
		String_t* L_1 = __this->___moveHorzAxis_5;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		G_B1_0 = L_0;
		G_B1_1 = __this;
		if (L_2)
		{
			G_B2_0 = L_0;
			G_B2_1 = __this;
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = __this->___moveHorzAxis_5;
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		float L_4;
		L_4 = CF2Input_GetAxis_m2A4EEECCC7B2B7A310EC633F0C3615C60AE3DE00(L_3, NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0027;
	}

IL_0022:
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0027:
	{
		String_t* L_5 = __this->___moveVertAxis_6;
		bool L_6;
		L_6 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_5, NULL);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		if (L_6)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			G_B5_2 = G_B3_2;
			goto IL_0041;
		}
	}
	{
		String_t* L_7 = __this->___moveVertAxis_6;
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		float L_8;
		L_8 = CF2Input_GetAxis_m2A4EEECCC7B2B7A310EC633F0C3615C60AE3DE00(L_7, NULL);
		G_B6_0 = L_8;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0046;
	}

IL_0041:
	{
		G_B6_0 = (0.0f);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0046:
	{
		String_t* L_9 = __this->___aimHorzAxis_7;
		bool L_10;
		L_10 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_9, NULL);
		G_B7_0 = G_B6_0;
		G_B7_1 = G_B6_1;
		G_B7_2 = G_B6_2;
		G_B7_3 = G_B6_3;
		if (L_10)
		{
			G_B8_0 = G_B6_0;
			G_B8_1 = G_B6_1;
			G_B8_2 = G_B6_2;
			G_B8_3 = G_B6_3;
			goto IL_0060;
		}
	}
	{
		String_t* L_11 = __this->___aimHorzAxis_7;
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		float L_12;
		L_12 = CF2Input_GetAxis_m2A4EEECCC7B2B7A310EC633F0C3615C60AE3DE00(L_11, NULL);
		G_B9_0 = L_12;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		G_B9_4 = G_B7_3;
		goto IL_0065;
	}

IL_0060:
	{
		G_B9_0 = (0.0f);
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
		G_B9_4 = G_B8_3;
	}

IL_0065:
	{
		String_t* L_13 = __this->___aimVertAxis_8;
		bool L_14;
		L_14 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_13, NULL);
		G_B10_0 = G_B9_0;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
		if (L_14)
		{
			G_B11_0 = G_B9_0;
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			G_B11_3 = G_B9_3;
			G_B11_4 = G_B9_4;
			goto IL_007f;
		}
	}
	{
		String_t* L_15 = __this->___aimVertAxis_8;
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		float L_16;
		L_16 = CF2Input_GetAxis_m2A4EEECCC7B2B7A310EC633F0C3615C60AE3DE00(L_15, NULL);
		G_B12_0 = L_16;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		G_B12_4 = G_B10_3;
		G_B12_5 = G_B10_4;
		goto IL_0084;
	}

IL_007f:
	{
		G_B12_0 = (0.0f);
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
		G_B12_4 = G_B11_3;
		G_B12_5 = G_B11_4;
	}

IL_0084:
	{
		NullCheck(G_B12_5);
		DualStickShooterCharaMotor_SetCameraRelativeInput_m8615794D149FBA54E41A0E7700D61F250985F205(G_B12_5, G_B12_4, G_B12_3, G_B12_2, G_B12_1, G_B12_0, NULL);
		// }
		return;
	}
}
// System.Void ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DualStickShooterCharaMotor_FixedUpdate_mA6A7D5FBC296E4DBD7E925CB4C8F89E6F5DADF2E (DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	float G_B11_0 = 0.0f;
	float* G_B11_1 = NULL;
	float G_B10_0 = 0.0f;
	float* G_B10_1 = NULL;
	float G_B12_0 = 0.0f;
	float G_B12_1 = 0.0f;
	float* G_B12_2 = NULL;
	{
		// float deadzone = 0.01f;
		V_0 = (0.00999999978f);
		// float
		//     aimAngle = 0,
		V_1 = (0.0f);
		// aimTilt = 0;
		V_2 = (0.0f);
		// if (this.inputAimTilt > deadzone)
		float L_0 = __this->___inputAimTilt_24;
		float L_1 = V_0;
		V_6 = (bool)((((float)L_0) > ((float)L_1))? 1 : 0);
		bool L_2 = V_6;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		// aimAngle    = this.inputAimAngle;
		float L_3 = __this->___inputAimAngle_23;
		V_1 = L_3;
		// aimTilt        = this.inputAimTilt;
		float L_4 = __this->___inputAimTilt_24;
		V_2 = L_4;
		goto IL_0053;
	}

IL_0034:
	{
		// else if (this.inputMoveTilt > deadzone)
		float L_5 = __this->___inputMoveTilt_22;
		float L_6 = V_0;
		V_7 = (bool)((((float)L_5) > ((float)L_6))? 1 : 0);
		bool L_7 = V_7;
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		// aimAngle     = this.inputMoveAngle;
		float L_8 = __this->___inputMoveAngle_21;
		V_1 = L_8;
		// aimTilt        = this.inputMoveTilt;
		float L_9 = __this->___inputMoveTilt_22;
		V_2 = L_9;
	}

IL_0053:
	{
		// if (aimTilt > 0)
		float L_10 = V_2;
		V_8 = (bool)((((float)L_10) > ((float)(0.0f)))? 1 : 0);
		bool L_11 = V_8;
		if (!L_11)
		{
			goto IL_0083;
		}
	}
	{
		// this.worldOrientAngle = Mathf.MoveTowardsAngle(this.worldOrientAngle, aimAngle, aimTilt * this.turnSpeed * Time.deltaTime);
		float L_12 = __this->___worldOrientAngle_20;
		float L_13 = V_1;
		float L_14 = V_2;
		float L_15 = __this->___turnSpeed_13;
		float L_16;
		L_16 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_17;
		L_17 = Mathf_MoveTowardsAngle_m427D75FA50922E7948D8C1E4B71300158DCC46C6_inline(L_12, L_13, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_14, L_15)), L_16)), NULL);
		__this->___worldOrientAngle_20 = L_17;
	}

IL_0083:
	{
		// if (this.inputMoveTilt > deadzone)
		float L_18 = __this->___inputMoveTilt_22;
		float L_19 = V_0;
		V_9 = (bool)((((float)L_18) > ((float)L_19))? 1 : 0);
		bool L_20 = V_9;
		if (!L_20)
		{
			goto IL_00ae;
		}
	}
	{
		// this.worldMoveAngle = this.inputMoveAngle;
		float L_21 = __this->___inputMoveAngle_21;
		__this->___worldMoveAngle_19 = L_21;
		// this.moveTilt = this.inputMoveTilt;
		float L_22 = __this->___inputMoveTilt_22;
		__this->___moveTilt_18 = L_22;
		goto IL_00bb;
	}

IL_00ae:
	{
		// this.moveTilt = 0;
		__this->___moveTilt_18 = (0.0f);
	}

IL_00bb:
	{
		// float relativeAngle = this.worldMoveAngle - this.worldOrientAngle;
		float L_23 = __this->___worldMoveAngle_19;
		float L_24 = __this->___worldOrientAngle_20;
		V_3 = ((float)il2cpp_codegen_subtract(L_23, L_24));
		// this.localDir = Quaternion.AngleAxis(relativeAngle, Vector3.up) *  (new Vector3(0, 0, 1)) ;//RotateVecOnPlane(new Vector3(0, 0, 1), relativeAngle, WorldPlane.XZ);
		float L_25 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8(L_25, L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_28), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_27, L_28, NULL);
		__this->___localDir_17 = L_29;
		// this.localDir *= this.moveTilt;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = __this->___localDir_17;
		float L_31 = __this->___moveTilt_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_30, L_31, NULL);
		__this->___localDir_17 = L_32;
		// Vector3 localVel = this.localDir;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = __this->___localDir_17;
		V_4 = L_33;
		// localVel.x *= this.strafeSpeed;
		float* L_34 = (&(&V_4)->___x_2);
		float* L_35 = L_34;
		float L_36 = *((float*)L_35);
		float L_37 = __this->___strafeSpeed_11;
		*((float*)L_35) = (float)((float)il2cpp_codegen_multiply(L_36, L_37));
		// localVel.z *= (this.localDir.z >= 0) ? this.forwardSpeed : this.backwardSpeed;
		float* L_38 = (&(&V_4)->___z_4);
		float* L_39 = L_38;
		float L_40 = *((float*)L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_41 = (&__this->___localDir_17);
		float L_42 = L_41->___z_4;
		G_B10_0 = L_40;
		G_B10_1 = L_39;
		if ((((float)L_42) >= ((float)(0.0f))))
		{
			G_B11_0 = L_40;
			G_B11_1 = L_39;
			goto IL_0146;
		}
	}
	{
		float L_43 = __this->___backwardSpeed_12;
		G_B12_0 = L_43;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		goto IL_014c;
	}

IL_0146:
	{
		float L_44 = __this->___forwardSpeed_10;
		G_B12_0 = L_44;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
	}

IL_014c:
	{
		*((float*)G_B12_2) = (float)((float)il2cpp_codegen_multiply(G_B12_1, G_B12_0));
		// this.worldVel = Quaternion.AngleAxis(-relativeAngle + this.worldMoveAngle, Vector3.up) * localVel ; //RotateVecOnPlane(localVel, -relativeAngle + this.worldMoveAngle, WorldPlane.XZ);
		float L_45 = V_3;
		float L_46 = __this->___worldMoveAngle_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48;
		L_48 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8(((float)il2cpp_codegen_add(((-L_45)), L_46)), L_47, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_48, L_49, NULL);
		__this->___worldVel_16 = L_50;
		// Vector3 pos = this.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_51);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_51, NULL);
		V_5 = L_52;
		// pos += this.worldVel * Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = __this->___worldVel_16;
		float L_55;
		L_55 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_54, L_55, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_53, L_56, NULL);
		V_5 = L_57;
		// pos += this.gravity * Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = __this->___gravity_15;
		float L_60;
		L_60 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_59, L_60, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_58, L_61, NULL);
		V_5 = L_62;
		// this.MovePosition(pos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = V_5;
		DualStickShooterCharaMotor_MovePosition_m3DCEB98B56792AB59B689307ACB8B8D80EC9044F(__this, L_63, NULL);
		// this.MoveOrientation(this.worldOrientAngle);
		float L_64 = __this->___worldOrientAngle_20;
		DualStickShooterCharaMotor_MoveOrientation_m04E3A94C1FF0802F8CC5BC107127D1A19FA9B272(__this, L_64, NULL);
		// }
		return;
	}
}
// System.Single ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::GetOrientAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DualStickShooterCharaMotor_GetOrientAngle_mD7740D21695734E78B794894165E612722C9B00E (DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float GetOrientAngle()    { return this.worldOrientAngle; }
		float L_0 = __this->___worldOrientAngle_20;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float GetOrientAngle()    { return this.worldOrientAngle; }
		float L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector3 ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::GetLocalDir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DualStickShooterCharaMotor_GetLocalDir_m975EFD4856B33FBCE3E66C7817280B9DEC25A173 (DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public Vector3 GetLocalDir()    { return this.localDir; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___localDir_17;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public Vector3 GetLocalDir()    { return this.localDir; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
// System.Void ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::SetWorldInput(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DualStickShooterCharaMotor_SetWorldInput_m6CE80BCFD67BC2C6BB9ED161A9F94689C4898D9C (DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* __this, float ___moveAngle0, float ___moveTilt1, float ___aimAngle2, float ___aimTilt3, const RuntimeMethod* method) 
{
	{
		// this.inputMoveAngle    = moveAngle;
		float L_0 = ___moveAngle0;
		__this->___inputMoveAngle_21 = L_0;
		// this.inputMoveTilt    = moveTilt;
		float L_1 = ___moveTilt1;
		__this->___inputMoveTilt_22 = L_1;
		// this.inputAimAngle    = aimAngle;
		float L_2 = ___aimAngle2;
		__this->___inputAimAngle_23 = L_2;
		// this.inputAimTilt    = aimTilt;
		float L_3 = ___aimTilt3;
		__this->___inputAimTilt_24 = L_3;
		// }
		return;
	}
}
// System.Void ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::SetCameraRelativeInput(UnityEngine.Transform,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DualStickShooterCharaMotor_SetCameraRelativeInput_m8615794D149FBA54E41A0E7700D61F250985F205 (DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___camTr0, float ___moveX1, float ___moveY2, float ___aimX3, float ___aimY4, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// float
		//     moveAngle    = 0,
		V_0 = (0.0f);
		// moveTilt    = 0,
		V_1 = (0.0f);
		// aimAngle    = 0,
		V_2 = (0.0f);
		// aimTilt        = 0;
		V_3 = (0.0f);
		// moveAngle    = GetJoyAngleAndTilt(camTr, moveX, moveY, WorldPlane.XZ, out moveTilt);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___camTr0;
		float L_1 = ___moveX1;
		float L_2 = ___moveY2;
		float L_3;
		L_3 = DualStickShooterCharaMotor_GetJoyAngleAndTilt_m1DA63DD8675CE2661ED25DDB04A076FB43EDF774(L_0, L_1, L_2, 0, (&V_1), NULL);
		V_0 = L_3;
		// aimAngle    = GetJoyAngleAndTilt(camTr, aimX, aimY, WorldPlane.XZ, out aimTilt);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___camTr0;
		float L_5 = ___aimX3;
		float L_6 = ___aimY4;
		float L_7;
		L_7 = DualStickShooterCharaMotor_GetJoyAngleAndTilt_m1DA63DD8675CE2661ED25DDB04A076FB43EDF774(L_4, L_5, L_6, 0, (&V_3), NULL);
		V_2 = L_7;
		// this.SetWorldInput(moveAngle, moveTilt, aimAngle, aimTilt);
		float L_8 = V_0;
		float L_9 = V_1;
		float L_10 = V_2;
		float L_11 = V_3;
		DualStickShooterCharaMotor_SetWorldInput_m6CE80BCFD67BC2C6BB9ED161A9F94689C4898D9C(__this, L_8, L_9, L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Single ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::GetAngleFromDir(UnityEngine.Vector3,ControlFreak2.Demos.Characters.DualStickShooterCharaMotor/WorldPlane,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DualStickShooterCharaMotor_GetAngleFromDir_m91D30CBF1ADA1853B921EE45F963BC31CAF24951 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir0, int32_t ___plane1, float ___fallbackAngle2, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	float V_2 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	{
		// Vector2 v = ((plane == WorldPlane.XY) ? new Vector2(dir.x, dir.y) : (plane == WorldPlane.XZ) ? new Vector2(dir.x, dir.z) : new Vector2(dir.z, dir.y));
		int32_t L_0 = ___plane1;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_1 = ___plane1;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___dir0;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___dir0;
		float L_5 = L_4.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_3, L_5, /*hidden argument*/NULL);
		G_B4_0 = L_6;
		goto IL_002c;
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___dir0;
		float L_8 = L_7.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___dir0;
		float L_10 = L_9.___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), L_8, L_10, /*hidden argument*/NULL);
		G_B4_0 = L_11;
	}

IL_002c:
	{
		G_B6_0 = G_B4_0;
		goto IL_003f;
	}

IL_002e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___dir0;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___dir0;
		float L_15 = L_14.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), L_13, L_15, /*hidden argument*/NULL);
		G_B6_0 = L_16;
	}

IL_003f:
	{
		V_0 = G_B6_0;
		// if (v.sqrMagnitude < 0.000001f)
		float L_17;
		L_17 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&V_0), NULL);
		V_1 = (bool)((((float)L_17) < ((float)(9.99999997E-07f)))? 1 : 0);
		bool L_18 = V_1;
		if (!L_18)
		{
			goto IL_0057;
		}
	}
	{
		// return fallbackAngle;
		float L_19 = ___fallbackAngle2;
		V_2 = L_19;
		goto IL_0079;
	}

IL_0057:
	{
		// v.Normalize();
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		// return (Mathf.Rad2Deg * Mathf.Atan2(v.x, v.y));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = V_0;
		float L_21 = L_20.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_0;
		float L_23 = L_22.___y_1;
		float L_24;
		L_24 = atan2f(L_21, L_23);
		V_2 = ((float)il2cpp_codegen_multiply((57.2957802f), L_24));
		goto IL_0079;
	}

IL_0079:
	{
		// }
		float L_25 = V_2;
		return L_25;
	}
}
// UnityEngine.Vector3 ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::GetWorldVecFromCamera(UnityEngine.Transform,System.Single,System.Single,ControlFreak2.Demos.Characters.DualStickShooterCharaMotor/WorldPlane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DualStickShooterCharaMotor_GetWorldVecFromCamera_mA019E7DDDA2EE07953E01BA33C72C55661202CDC (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___camTr0, float ___x1, float ___y2, int32_t ___plane3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// switch (plane)
		int32_t L_0 = ___plane3;
		V_3 = L_0;
		int32_t L_1 = V_3;
		V_2 = L_1;
		int32_t L_2 = V_2;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_0043;
			}
			case 2:
			{
				goto IL_006b;
			}
		}
	}
	{
		goto IL_006b;
	}

IL_0019:
	{
		// xDir = camTr.right;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___camTr0;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_3, NULL);
		V_0 = L_4;
		// yDir = camTr.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___camTr0;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_5, NULL);
		V_1 = L_6;
		// xDir.y = xDir.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		float L_8 = L_7.___z_4;
		(&V_0)->___y_3 = L_8;
		// yDir.y = yDir.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_1;
		float L_10 = L_9.___z_4;
		(&V_1)->___y_3 = L_10;
		// break;
		goto IL_0095;
	}

IL_0043:
	{
		// xDir = camTr.right;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = ___camTr0;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_11, NULL);
		V_0 = L_12;
		// yDir = camTr.up;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = ___camTr0;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_13, NULL);
		V_1 = L_14;
		// xDir.z = 0;
		(&V_0)->___z_4 = (0.0f);
		// yDir.z = 0;
		(&V_1)->___z_4 = (0.0f);
		// break;
		goto IL_0095;
	}

IL_006b:
	{
		// xDir = camTr.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = ___camTr0;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_15, NULL);
		V_0 = L_16;
		// yDir = camTr.up;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = ___camTr0;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_17, NULL);
		V_1 = L_18;
		// xDir.x = xDir.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_0;
		float L_20 = L_19.___z_4;
		(&V_0)->___x_2 = L_20;
		// yDir.x = yDir.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_1;
		float L_22 = L_21.___z_4;
		(&V_1)->___x_2 = L_22;
		// break;
		goto IL_0095;
	}

IL_0095:
	{
		// xDir.z = 0;
		(&V_0)->___z_4 = (0.0f);
		// yDir.z = 0;
		(&V_1)->___z_4 = (0.0f);
		// xDir.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_0), NULL);
		// yDir.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_1), NULL);
		// return ((xDir * x) + (yDir * y));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_0;
		float L_24 = ___x1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_23, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_1;
		float L_27 = ___y2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_26, L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_25, L_28, NULL);
		V_4 = L_29;
		goto IL_00d4;
	}

IL_00d4:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_4;
		return L_30;
	}
}
// System.Single ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::GetJoyAngleAndTilt(UnityEngine.Transform,System.Single,System.Single,ControlFreak2.Demos.Characters.DualStickShooterCharaMotor/WorldPlane,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DualStickShooterCharaMotor_GetJoyAngleAndTilt_m1DA63DD8675CE2661ED25DDB04A076FB43EDF774 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___camTr0, float ___x1, float ___y2, int32_t ___plane3, float* ___tilt4, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	bool V_3 = false;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		// Vector2 inputv = new Vector2(x, y);
		float L_0 = ___x1;
		float L_1 = ___y2;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		// if (inputv.sqrMagnitude < 0.000001f)
		float L_2;
		L_2 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&V_0), NULL);
		V_3 = (bool)((((float)L_2) < ((float)(9.99999997E-07f)))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// tilt = 0;
		float* L_4 = ___tilt4;
		*((float*)L_4) = (float)(0.0f);
		// return 0;
		V_4 = (0.0f);
		goto IL_0096;
	}

IL_002e:
	{
		// Vector2 v = GetWorldVecFromCamera(camTr, x, y, plane);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___camTr0;
		float L_6 = ___x1;
		float L_7 = ___y2;
		int32_t L_8 = ___plane3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = DualStickShooterCharaMotor_GetWorldVecFromCamera_mA019E7DDDA2EE07953E01BA33C72C55661202CDC(L_5, L_6, L_7, L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_9, NULL);
		V_1 = L_10;
		// float d = v.magnitude;
		float L_11;
		L_11 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_1), NULL);
		V_2 = L_11;
		// if (d < 0.0001f)
		float L_12 = V_2;
		V_5 = (bool)((((float)L_12) < ((float)(9.99999975E-05f)))? 1 : 0);
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		// tilt = 0;
		float* L_14 = ___tilt4;
		*((float*)L_14) = (float)(0.0f);
		// return 0;
		V_4 = (0.0f);
		goto IL_0096;
	}

IL_0065:
	{
		// v /= d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_1;
		float L_16 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline(L_15, L_16, NULL);
		V_1 = L_17;
		// tilt = Mathf.Min(d, 1.0f);
		float* L_18 = ___tilt4;
		float L_19 = V_2;
		float L_20;
		L_20 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(L_19, (1.0f), NULL);
		*((float*)L_18) = (float)L_20;
		// return (Mathf.Rad2Deg * Mathf.Atan2(v.x, v.y));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_1;
		float L_22 = L_21.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_1;
		float L_24 = L_23.___y_1;
		float L_25;
		L_25 = atan2f(L_22, L_24);
		V_4 = ((float)il2cpp_codegen_multiply((57.2957802f), L_25));
		goto IL_0096;
	}

IL_0096:
	{
		// }
		float L_26 = V_4;
		return L_26;
	}
}
// UnityEngine.Vector3 ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::AngleToWorldVec(System.Single,ControlFreak2.Demos.Characters.DualStickShooterCharaMotor/WorldPlane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DualStickShooterCharaMotor_AngleToWorldVec_m5E832B5CFF8E3ED1D9E02E3CB14A7DFD031167E1 (float ___angle0, int32_t ___plane1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// angle *= Mathf.Deg2Rad;
		float L_0 = ___angle0;
		___angle0 = ((float)il2cpp_codegen_multiply(L_0, (0.0174532924f)));
		// float sinv = Mathf.Sin(angle);
		float L_1 = ___angle0;
		float L_2;
		L_2 = sinf(L_1);
		V_0 = L_2;
		// float cosv = Mathf.Cos(angle);
		float L_3 = ___angle0;
		float L_4;
		L_4 = cosf(L_3);
		V_1 = L_4;
		// switch (plane)
		int32_t L_5 = ___plane1;
		V_3 = L_5;
		int32_t L_6 = V_3;
		V_2 = L_6;
		int32_t L_7 = V_2;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0040;
			}
			case 1:
			{
				goto IL_0030;
			}
			case 2:
			{
				goto IL_0050;
			}
		}
	}
	{
		goto IL_0050;
	}

IL_0030:
	{
		// return new Vector3(sinv, cosv, 0);
		float L_8 = V_0;
		float L_9 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), L_8, L_9, (0.0f), /*hidden argument*/NULL);
		V_4 = L_10;
		goto IL_0060;
	}

IL_0040:
	{
		// return new Vector3(sinv, 0, cosv);
		float L_11 = V_0;
		float L_12 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), L_11, (0.0f), L_12, /*hidden argument*/NULL);
		V_4 = L_13;
		goto IL_0060;
	}

IL_0050:
	{
		// return new Vector3(0, cosv, sinv);
		float L_14 = V_1;
		float L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), (0.0f), L_14, L_15, /*hidden argument*/NULL);
		V_4 = L_16;
		goto IL_0060;
	}

IL_0060:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_4;
		return L_17;
	}
}
// UnityEngine.Vector3 ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::RotateVecOnPlane(UnityEngine.Vector3,System.Single,ControlFreak2.Demos.Characters.DualStickShooterCharaMotor/WorldPlane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DualStickShooterCharaMotor_RotateVecOnPlane_mF2DE7B9F3E6AC81EE6EFCDC74EA2FF8101F4DF65 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, float ___angle1, int32_t ___plane2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// angle *= Mathf.Deg2Rad;
		float L_0 = ___angle1;
		___angle1 = ((float)il2cpp_codegen_multiply(L_0, (0.0174532924f)));
		// float sinv = Mathf.Sin(angle);
		float L_1 = ___angle1;
		float L_2;
		L_2 = sinf(L_1);
		V_0 = L_2;
		// float cosv = Mathf.Cos(angle);
		float L_3 = ___angle1;
		float L_4;
		L_4 = cosf(L_3);
		V_1 = L_4;
		// switch (plane)
		int32_t L_5 = ___plane2;
		V_3 = L_5;
		int32_t L_6 = V_3;
		V_2 = L_6;
		int32_t L_7 = V_2;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0061;
			}
			case 1:
			{
				goto IL_0030;
			}
			case 2:
			{
				goto IL_0092;
			}
		}
	}
	{
		goto IL_0092;
	}

IL_0030:
	{
		// return new Vector3(
		//     (v.x * cosv) - (v.y * sinv),
		//     (v.x * sinv) + (v.y * cosv),
		//     v.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___v0;
		float L_9 = L_8.___x_2;
		float L_10 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___v0;
		float L_12 = L_11.___y_3;
		float L_13 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___v0;
		float L_15 = L_14.___x_2;
		float L_16 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___v0;
		float L_18 = L_17.___y_3;
		float L_19 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___v0;
		float L_21 = L_20.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_10)), ((float)il2cpp_codegen_multiply(L_12, L_13)))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_15, L_16)), ((float)il2cpp_codegen_multiply(L_18, L_19)))), L_21, /*hidden argument*/NULL);
		V_4 = L_22;
		goto IL_00c3;
	}

IL_0061:
	{
		// return new Vector3(
		//     (v.x * cosv) - (v.z * sinv),
		//     v.y,
		//     (v.x * sinv) + (v.z * cosv));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___v0;
		float L_24 = L_23.___x_2;
		float L_25 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = ___v0;
		float L_27 = L_26.___z_4;
		float L_28 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = ___v0;
		float L_30 = L_29.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = ___v0;
		float L_32 = L_31.___x_2;
		float L_33 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = ___v0;
		float L_35 = L_34.___z_4;
		float L_36 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_37), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_24, L_25)), ((float)il2cpp_codegen_multiply(L_27, L_28)))), L_30, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_32, L_33)), ((float)il2cpp_codegen_multiply(L_35, L_36)))), /*hidden argument*/NULL);
		V_4 = L_37;
		goto IL_00c3;
	}

IL_0092:
	{
		// return new Vector3(
		//     v.x,
		//     (v.z * sinv) + (v.y * cosv),
		//     (v.z * cosv) - (v.y * sinv));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = ___v0;
		float L_39 = L_38.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = ___v0;
		float L_41 = L_40.___z_4;
		float L_42 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = ___v0;
		float L_44 = L_43.___y_3;
		float L_45 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = ___v0;
		float L_47 = L_46.___z_4;
		float L_48 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = ___v0;
		float L_50 = L_49.___y_3;
		float L_51 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_52), L_39, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_41, L_42)), ((float)il2cpp_codegen_multiply(L_44, L_45)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_47, L_48)), ((float)il2cpp_codegen_multiply(L_50, L_51)))), /*hidden argument*/NULL);
		V_4 = L_52;
		goto IL_00c3;
	}

IL_00c3:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_4;
		return L_53;
	}
}
// System.Void ControlFreak2.Demos.Characters.DualStickShooterCharaMotor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DualStickShooterCharaMotor__ctor_m4B4FB089FD7C05DE3608279EEF60D209AA0262F5 (DualStickShooterCharaMotor_tE3F9BF379F3C451DF0670D3B7AB71D1AE24D8763* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1841719E82DAE096F9165180E2824E38862F1DA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B770C7673EED9A98AD0E462CCD688F535ACAE7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string
		//     moveHorzAxis    = "Horizontal",
		__this->___moveHorzAxis_5 = _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___moveHorzAxis_5), (void*)_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		// moveVertAxis    = "Vertical",
		__this->___moveVertAxis_6 = _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___moveVertAxis_6), (void*)_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		// aimHorzAxis        = "Horizontal2",
		__this->___aimHorzAxis_7 = _stringLiteral6B770C7673EED9A98AD0E462CCD688F535ACAE7B;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aimHorzAxis_7), (void*)_stringLiteral6B770C7673EED9A98AD0E462CCD688F535ACAE7B);
		// aimVertAxis        = "Vertical2";
		__this->___aimVertAxis_8 = _stringLiteral1841719E82DAE096F9165180E2824E38862F1DA0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aimVertAxis_8), (void*)_stringLiteral1841719E82DAE096F9165180E2824E38862F1DA0);
		// public float
		//     forwardSpeed    = 10,
		__this->___forwardSpeed_10 = (10.0f);
		// strafeSpeed        = 6,
		__this->___strafeSpeed_11 = (6.0f);
		// backwardSpeed    = 4;
		__this->___backwardSpeed_12 = (4.0f);
		// public float
		//     turnSpeed    = 720.0f;
		__this->___turnSpeed_13 = (720.0f);
		// public float
		//     orientationOffset = 0;
		__this->___orientationOffset_14 = (0.0f);
		// public Vector3
		//     gravity = new Vector3(0, -2.0f, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (-2.0f), (0.0f), /*hidden argument*/NULL);
		__this->___gravity_15 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ControlFreak2.Demos.Guns.Bullet::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_OnEnable_m079918F9F6788BCD8951681D6DD2A06912B2F15B (Bullet_t225D01DE0E6CB0F6F53E4A877FB3C0F283F0681F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.rigidBody = this.GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rigidBody_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigidBody_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void ControlFreak2.Demos.Guns.Bullet::Init(ControlFreak2.Demos.Guns.Gun)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_Init_m5C66F88B4BB373504EB49855E3BD377135D0C0DA (Bullet_t225D01DE0E6CB0F6F53E4A877FB3C0F283F0681F* __this, Gun_tD0AB2E3133C17135370A6E3A46419C9A35958F19* ___gun0, const RuntimeMethod* method) 
{
	{
		// this.gun = gun;
		Gun_tD0AB2E3133C17135370A6E3A46419C9A35958F19* L_0 = ___gun0;
		__this->___gun_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gun_4), (void*)L_0);
		// this.lifetime = 0;
		__this->___lifetime_7 = (0.0f);
		// this.speed = Mathf.Max(0, this.initialSpeed);
		float L_1 = __this->___initialSpeed_8;
		float L_2;
		L_2 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline((0.0f), L_1, NULL);
		__this->___speed_11 = L_2;
		// }
		return;
	}
}
// ControlFreak2.Demos.Guns.Gun ControlFreak2.Demos.Guns.Bullet::GetGun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Gun_tD0AB2E3133C17135370A6E3A46419C9A35958F19* Bullet_GetGun_m18F6128C0CE11ED549355DE4CA814A18D32DCEAA (Bullet_t225D01DE0E6CB0F6F53E4A877FB3C0F283F0681F* __this, const RuntimeMethod* method) 
{
	Gun_tD0AB2E3133C17135370A6E3A46419C9A35958F19* V_0 = NULL;
	{
		// { return this.gun; }
		Gun_tD0AB2E3133C17135370A6E3A46419C9A35958F19* L_0 = __this->___gun_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// { return this.gun; }
		Gun_tD0AB2E3133C17135370A6E3A46419C9A35958F19* L_1 = V_0;
		return L_1;
	}
}
// System.Void ControlFreak2.Demos.Guns.Bullet::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_FixedUpdate_mE69594C62FEA18874B6C191DD1BCB7DDB0390175 (Bullet_t225D01DE0E6CB0F6F53E4A877FB3C0F283F0681F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	float V_5 = 0.0f;
	{
		// this.speed += Time.deltaTime * this.accel;
		float L_0 = __this->___speed_11;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_2 = __this->___accel_10;
		__this->___speed_11 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(L_1, L_2))));
		// if (this.speed > this.maxSpeed)
		float L_3 = __this->___speed_11;
		float L_4 = __this->___maxSpeed_9;
		V_2 = (bool)((((float)L_3) > ((float)L_4))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		// this.speed = this.maxSpeed;
		float L_6 = __this->___maxSpeed_9;
		__this->___speed_11 = L_6;
	}

IL_0038:
	{
		// Transform tr = this.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		V_0 = L_7;
		// Vector3 newPos = (tr.position + ((tr.forward * this.speed) * Time.deltaTime));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_0;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = V_0;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_10, NULL);
		float L_12 = __this->___speed_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_11, L_12, NULL);
		float L_14;
		L_14 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_13, L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_9, L_15, NULL);
		V_1 = L_16;
		// if (this.rigidBody != null)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_17 = __this->___rigidBody_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_18;
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_0085;
		}
	}
	{
		// this.rigidBody.MovePosition(newPos);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_20 = __this->___rigidBody_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_1;
		NullCheck(L_20);
		Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9(L_20, L_21, NULL);
		goto IL_008d;
	}

IL_0085:
	{
		// tr.position = newPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_1;
		NullCheck(L_22);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_22, L_23, NULL);
	}

IL_008d:
	{
		// if ((this.lifetime += Time.deltaTime) > this.maxLifetime)
		float L_24 = __this->___lifetime_7;
		float L_25;
		L_25 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_26 = ((float)il2cpp_codegen_add(L_24, L_25));
		V_5 = L_26;
		__this->___lifetime_7 = L_26;
		float L_27 = V_5;
		float L_28 = __this->___maxLifetime_6;
		V_4 = (bool)((((float)L_27) > ((float)L_28))? 1 : 0);
		bool L_29 = V_4;
		if (!L_29)
		{
			goto IL_00be;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_30, NULL);
	}

IL_00be:
	{
		// }
		return;
	}
}
// System.Void ControlFreak2.Demos.Guns.Bullet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet__ctor_m78D4BD6386451FCF723B7D3F494CE3EEDD38D80C (Bullet_t225D01DE0E6CB0F6F53E4A877FB3C0F283F0681F* __this, const RuntimeMethod* method) 
{
	{
		// public float
		//     maxLifetime = 5.0f;
		__this->___maxLifetime_6 = (5.0f);
		// public float
		//     initialSpeed = 20,
		__this->___initialSpeed_8 = (20.0f);
		// maxSpeed        = 30,
		__this->___maxSpeed_9 = (30.0f);
		// accel            = 20;
		__this->___accel_10 = (20.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ControlFreak2.Demos.Guns.Gun::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun_OnEnable_m501F7383441AD81610E4CD26C99D0C742F562E55 (Gun_tD0AB2E3133C17135370A6E3A46419C9A35958F19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.audioSource = this.GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioSource_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSource_16), (void*)L_0);
		// this.isFiring = false;
		__this->___isFiring_8 = (bool)0;
		// }
		return;
	}
}
// System.Void ControlFreak2.Demos.Guns.Gun::SetTriggerState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun_SetTriggerState_m2F8AD5101A04CE504B9EFE22BB197B418380E4A1 (Gun_tD0AB2E3133C17135370A6E3A46419C9A35958F19* __this, bool ___fire0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (fire != this.isFiring)
		bool L_0 = ___fire0;
		bool L_1 = __this->___isFiring_8;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// this.isFiring = fire;
		bool L_3 = ___fire0;
		__this->___isFiring_8 = L_3;
		// if (fire)
		bool L_4 = ___fire0;
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		// this.FireBullet();
		Gun_FireBullet_m8959BCEC91754BED297CDC53EC445F917F67ED31(__this, NULL);
		goto IL_002b;
	}

IL_0029:
	{
	}

IL_002b:
	{
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void ControlFreak2.Demos.Guns.Gun::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun_FixedUpdate_m11FFBCB90CB03EA160F9E12EE640FCC6A6A5BB06 (Gun_tD0AB2E3133C17135370A6E3A46419C9A35958F19* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (this.isFiring)
		bool L_0 = __this->___isFiring_8;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// this.FireBullet();
		Gun_FireBullet_m8959BCEC91754BED297CDC53EC445F917F67ED31(__this, NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void ControlFreak2.Demos.Guns.Gun::Reload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun_Reload_m9ED0F7EDD459EFE37A059DA5E1BB843AFB560515 (Gun_tD0AB2E3133C17135370A6E3A46419C9A35958F19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// this.bulletCount = this.bulletCapacity;
		int32_t L_0 = __this->___bulletCapacity_12;
		__this->___bulletCount_13 = L_0;
		// if ((this.audioSource != null) && (this.reloadSound != null))
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___audioSource_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = __this->___reloadSound_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 0;
	}

IL_002a:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		// this.audioSource.loop = false;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___audioSource_16;
		NullCheck(L_6);
		AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56(L_6, (bool)0, NULL);
		// this.audioSource.PlayOneShot(this.reloadSound);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = __this->___audioSource_16;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8 = __this->___reloadSound_7;
		NullCheck(L_7);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_7, L_8, NULL);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void ControlFreak2.Demos.Guns.Gun::FireBullet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun_FireBullet_m8959BCEC91754BED297CDC53EC445F917F67ED31 (Gun_tD0AB2E3133C17135370A6E3A46419C9A35958F19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisBullet_t225D01DE0E6CB0F6F53E4A877FB3C0F283F0681F_mFE8497B87EB104FCC622BF8DB6AAAC1FF45620B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Bullet_t225D01DE0E6CB0F6F53E4A877FB3C0F283F0681F* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B25_0 = 0;
	{
		// if ((Time.time - this.lastShotTime) >= this.shotInterval)
		float L_0;
		L_0 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_1 = __this->___lastShotTime_10;
		float L_2 = __this->___shotInterval_9;
		V_0 = (bool)((((int32_t)((!(((float)((float)il2cpp_codegen_subtract(L_0, L_1))) >= ((float)L_2)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_016d;
		}
	}
	{
		// this.lastShotTime = Time.time;
		float L_4;
		L_4 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->___lastShotTime_10 = L_4;
		// if (this.unlimitedAmmo || (this.bulletCount > 0))
		bool L_5 = __this->___unlimitedAmmo_11;
		if (L_5)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_6 = __this->___bulletCount_13;
		G_B4_0 = ((((int32_t)L_6) > ((int32_t)0))? 1 : 0);
		goto IL_003f;
	}

IL_003e:
	{
		G_B4_0 = 1;
	}

IL_003f:
	{
		V_1 = (bool)G_B4_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0126;
		}
	}
	{
		// if (!this.unlimitedAmmo)
		bool L_8 = __this->___unlimitedAmmo_11;
		V_2 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		// --this.bulletCount;
		int32_t L_10 = __this->___bulletCount_13;
		__this->___bulletCount_13 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
	}

IL_0062:
	{
		// if ((this.shotParticles != null) )
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_11 = __this->___shotParticles_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_12;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0080;
		}
	}
	{
		// this.shotParticles.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_14 = __this->___shotParticles_4;
		NullCheck(L_14);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_14, NULL);
	}

IL_0080:
	{
		// if ((this.projectileOrigin != null) && (this.bulletPrefab != null))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___projectileOrigin_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_009c;
		}
	}
	{
		Bullet_t225D01DE0E6CB0F6F53E4A877FB3C0F283F0681F* L_17 = __this->___bulletPrefab_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B12_0 = ((int32_t)(L_18));
		goto IL_009d;
	}

IL_009c:
	{
		G_B12_0 = 0;
	}

IL_009d:
	{
		V_4 = (bool)G_B12_0;
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_00df;
		}
	}
	{
		// Bullet bullet = Instantiate(this.bulletPrefab,
		//     this.projectileOrigin.position, this.projectileOrigin.rotation) as Bullet;
		Bullet_t225D01DE0E6CB0F6F53E4A877FB3C0F283F0681F* L_20 = __this->___bulletPrefab_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___projectileOrigin_14;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___projectileOrigin_14;
		NullCheck(L_23);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_23, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Bullet_t225D01DE0E6CB0F6F53E4A877FB3C0F283F0681F* L_25;
		L_25 = Object_Instantiate_TisBullet_t225D01DE0E6CB0F6F53E4A877FB3C0F283F0681F_mFE8497B87EB104FCC622BF8DB6AAAC1FF45620B1(L_20, L_22, L_24, Object_Instantiate_TisBullet_t225D01DE0E6CB0F6F53E4A877FB3C0F283F0681F_mFE8497B87EB104FCC622BF8DB6AAAC1FF45620B1_RuntimeMethod_var);
		V_5 = L_25;
		// if (bullet != null)
		Bullet_t225D01DE0E6CB0F6F53E4A877FB3C0F283F0681F* L_26 = V_5;
		bool L_27;
		L_27 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_6 = L_27;
		bool L_28 = V_6;
		if (!L_28)
		{
			goto IL_00de;
		}
	}
	{
		// bullet.Init(this);
		Bullet_t225D01DE0E6CB0F6F53E4A877FB3C0F283F0681F* L_29 = V_5;
		NullCheck(L_29);
		Bullet_Init_m5C66F88B4BB373504EB49855E3BD377135D0C0DA(L_29, __this, NULL);
	}

IL_00de:
	{
	}

IL_00df:
	{
		// if ((this.audioSource != null) && (this.shotSound != null)) // && (!this.shotSoundLooped))
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_30 = __this->___audioSource_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_30, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_31)
		{
			goto IL_00fb;
		}
	}
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_32 = __this->___shotSound_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_32, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B19_0 = ((int32_t)(L_33));
		goto IL_00fc;
	}

IL_00fb:
	{
		G_B19_0 = 0;
	}

IL_00fc:
	{
		V_7 = (bool)G_B19_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_0123;
		}
	}
	{
		// this.audioSource.loop = false;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_35 = __this->___audioSource_16;
		NullCheck(L_35);
		AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56(L_35, (bool)0, NULL);
		// this.audioSource.PlayOneShot(this.shotSound);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_36 = __this->___audioSource_16;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_37 = __this->___shotSound_5;
		NullCheck(L_36);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_36, L_37, NULL);
	}

IL_0123:
	{
		goto IL_016c;
	}

IL_0126:
	{
		// if ((this.audioSource != null) && (this.emptySound != null)) // && (!this.emptySoundLooped))
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_38 = __this->___audioSource_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_38, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_39)
		{
			goto IL_0143;
		}
	}
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_40 = __this->___emptySound_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_41;
		L_41 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_40, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B25_0 = ((int32_t)(L_41));
		goto IL_0144;
	}

IL_0143:
	{
		G_B25_0 = 0;
	}

IL_0144:
	{
		V_8 = (bool)G_B25_0;
		bool L_42 = V_8;
		if (!L_42)
		{
			goto IL_016b;
		}
	}
	{
		// this.audioSource.loop = false;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_43 = __this->___audioSource_16;
		NullCheck(L_43);
		AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56(L_43, (bool)0, NULL);
		// this.audioSource.PlayOneShot(this.emptySound);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_44 = __this->___audioSource_16;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_45 = __this->___emptySound_6;
		NullCheck(L_44);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_44, L_45, NULL);
	}

IL_016b:
	{
	}

IL_016c:
	{
	}

IL_016d:
	{
		// }
		return;
	}
}
// System.Void ControlFreak2.Demos.Guns.Gun::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun__ctor_m388BFC1BC0D0C641B56B0A5F5CDE62C42171C961 (Gun_tD0AB2E3133C17135370A6E3A46419C9A35958F19* __this, const RuntimeMethod* method) 
{
	{
		// public float
		//     shotInterval = 0.175f;
		__this->___shotInterval_9 = (0.174999997f);
		// public bool
		//     unlimitedAmmo    = false;
		__this->___unlimitedAmmo_11 = (bool)0;
		// public int
		//     bulletCapacity     = 40,
		__this->___bulletCapacity_12 = ((int32_t)40);
		// bulletCount        = 40;
		__this->___bulletCount_13 = ((int32_t)40);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ControlFreak2.Demos.Guns.GunActivator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunActivator_Update_mFB6820743248701E0810E57C75006C64B72B80E1 (GunActivator_t59CCEF329447324DB6D0FDDDF30DA709AA4466C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Gun_tD0AB2E3133C17135370A6E3A46419C9A35958F19* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	{
		// bool triggerState =
		//     ((this.key != KeyCode.None) ? CF2Input.GetKey(this.key) : false) ||
		//     (!string.IsNullOrEmpty(this.buttonName) ? CF2Input.GetButton(this.buttonName) : false);
		int32_t L_0 = __this->___key_6;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0017;
	}

IL_000c:
	{
		int32_t L_1 = __this->___key_6;
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = CF2Input_GetKey_m2E0B71244511A8E7E7F146A8E4F312D68C06D2A0(L_1, NULL);
		G_B3_0 = ((int32_t)(L_2));
	}

IL_0017:
	{
		if (G_B3_0)
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_3 = __this->___buttonName_5;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		G_B7_0 = 0;
		goto IL_0034;
	}

IL_0029:
	{
		String_t* L_5 = __this->___buttonName_5;
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = CF2Input_GetButton_m15712533F82EBCC6391EF2777CD6594AE008E34D(L_5, NULL);
		G_B7_0 = ((int32_t)(L_6));
	}

IL_0034:
	{
		G_B9_0 = G_B7_0;
		goto IL_0037;
	}

IL_0036:
	{
		G_B9_0 = 1;
	}

IL_0037:
	{
		V_0 = (bool)G_B9_0;
		// for (int i = 0; i < this.gunList.Length; ++i)
		V_1 = 0;
		goto IL_005e;
	}

IL_003c:
	{
		// Gun g = this.gunList[i];
		GunU5BU5D_tB92F18F2BD56FA0845F764B85791129502E6A8DB* L_7 = __this->___gunList_4;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Gun_tD0AB2E3133C17135370A6E3A46419C9A35958F19* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_2 = L_10;
		// if (g != null)
		Gun_tD0AB2E3133C17135370A6E3A46419C9A35958F19* L_11 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_12;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0059;
		}
	}
	{
		// g.SetTriggerState(triggerState);
		Gun_tD0AB2E3133C17135370A6E3A46419C9A35958F19* L_14 = V_2;
		bool L_15 = V_0;
		NullCheck(L_14);
		Gun_SetTriggerState_m2F8AD5101A04CE504B9EFE22BB197B418380E4A1(L_14, L_15, NULL);
	}

IL_0059:
	{
		// for (int i = 0; i < this.gunList.Length; ++i)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_005e:
	{
		// for (int i = 0; i < this.gunList.Length; ++i)
		int32_t L_17 = V_1;
		GunU5BU5D_tB92F18F2BD56FA0845F764B85791129502E6A8DB* L_18 = __this->___gunList_4;
		NullCheck(L_18);
		V_4 = (bool)((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))? 1 : 0);
		bool L_19 = V_4;
		if (L_19)
		{
			goto IL_003c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ControlFreak2.Demos.Guns.GunActivator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunActivator__ctor_mFB726D0F252622DF7F77FA772404CE11F4E09F4C (GunActivator_t59CCEF329447324DB6D0FDDDF30DA709AA4466C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string
		//     buttonName = "Fire1";
		__this->___buttonName_5 = _stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buttonName_5), (void*)_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2);
		// public KeyCode
		//     key            = KeyCode.None;
		__this->___key_6 = 0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ControlFreak2.Extra.AxisEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisEvent__ctor_m6C5429D9B71848D51024B7DAF332AC1449D0131C (AxisEvent_tEB70EB24A962A9E44D4D9603F6A865F662753037* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string
		//     axisName = "Horizontal";
		__this->___axisName_4 = _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___axisName_4), (void*)_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		// public float
		//     axisDeadzone = 0.5f;
		__this->___axisDeadzone_5 = (0.5f);
		// public AxisEvent() : base()
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		// this.positiveEvent = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___positiveEvent_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___positiveEvent_9), (void*)L_0);
		// this.negativeEvent = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_1, NULL);
		__this->___negativeEvent_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___negativeEvent_10), (void*)L_1);
		// }
		return;
	}
}
// System.Void ControlFreak2.Extra.AxisEvent::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisEvent_OnEnable_m3A353BB5024AF61DC7CD15CB9948B0C2DB4C1C0F (AxisEvent_tEB70EB24A962A9E44D4D9603F6A865F662753037* __this, const RuntimeMethod* method) 
{
	{
		// this.prevAxisDir = 0;
		__this->___prevAxisDir_7 = 0;
		// }
		return;
	}
}
// System.Void ControlFreak2.Extra.AxisEvent::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisEvent_Update_m24E1295F22AFE0C9C13C5E72C385BF9D26926DAC (AxisEvent_tEB70EB24A962A9E44D4D9603F6A865F662753037* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B14_0 = NULL;
	int32_t G_B19_0 = 0;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B23_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B29_0 = NULL;
	{
		// float axisVal = CF2Input.GetAxisRaw(this.axisName, ref this.axisId);
		String_t* L_0 = __this->___axisName_4;
		int32_t* L_1 = (&__this->___axisId_6);
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = CF2Input_GetAxisRaw_m887AD57659334F343359949570A17970CA78D4DD(L_0, L_1, NULL);
		V_0 = L_2;
		// int axisDir = (Mathf.Abs(axisVal) > this.axisDeadzone) ? ((axisVal > 0) ? 1 : -1) : 0;
		float L_3 = V_0;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = __this->___axisDeadzone_5;
		if ((((float)L_4) > ((float)L_5)))
		{
			goto IL_0024;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_0030;
	}

IL_0024:
	{
		float L_6 = V_0;
		if ((((float)L_6) > ((float)(0.0f))))
		{
			goto IL_002f;
		}
	}
	{
		G_B5_0 = (-1);
		goto IL_0030;
	}

IL_002f:
	{
		G_B5_0 = 1;
	}

IL_0030:
	{
		V_1 = G_B5_0;
		// switch (this.eventType)
		int32_t L_7 = __this->___eventType_8;
		V_3 = L_7;
		int32_t L_8 = V_3;
		V_2 = L_8;
		int32_t L_9 = V_2;
		switch (L_9)
		{
			case 0:
			{
				goto IL_0051;
			}
			case 1:
			{
				goto IL_0085;
			}
			case 2:
			{
				goto IL_00c3;
			}
		}
	}
	{
		goto IL_00e9;
	}

IL_0051:
	{
		// if ((axisDir != 0) && (this.prevAxisDir != axisDir))
		int32_t L_10 = V_1;
		if (!L_10)
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_11 = __this->___prevAxisDir_7;
		int32_t L_12 = V_1;
		G_B10_0 = ((((int32_t)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0063;
	}

IL_0062:
	{
		G_B10_0 = 0;
	}

IL_0063:
	{
		V_4 = (bool)G_B10_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0083;
		}
	}
	{
		// ((axisDir > 0) ? this.positiveEvent : this.negativeEvent).Invoke();
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_15 = __this->___negativeEvent_10;
		G_B14_0 = L_15;
		goto IL_007c;
	}

IL_0076:
	{
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_16 = __this->___positiveEvent_9;
		G_B14_0 = L_16;
	}

IL_007c:
	{
		NullCheck(G_B14_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B14_0, NULL);
	}

IL_0083:
	{
		// break;
		goto IL_00e9;
	}

IL_0085:
	{
		// if ((this.prevAxisDir != 0) && (axisDir != this.prevAxisDir))
		int32_t L_17 = __this->___prevAxisDir_7;
		if (!L_17)
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = __this->___prevAxisDir_7;
		G_B19_0 = ((((int32_t)((((int32_t)L_18) == ((int32_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_009c;
	}

IL_009b:
	{
		G_B19_0 = 0;
	}

IL_009c:
	{
		V_5 = (bool)G_B19_0;
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_00c1;
		}
	}
	{
		// ((this.prevAxisDir > 0) ? this.positiveEvent : this.negativeEvent).Invoke();
		int32_t L_21 = __this->___prevAxisDir_7;
		if ((((int32_t)L_21) > ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_22 = __this->___negativeEvent_10;
		G_B23_0 = L_22;
		goto IL_00ba;
	}

IL_00b4:
	{
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_23 = __this->___positiveEvent_9;
		G_B23_0 = L_23;
	}

IL_00ba:
	{
		NullCheck(G_B23_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B23_0, NULL);
	}

IL_00c1:
	{
		// break;
		goto IL_00e9;
	}

IL_00c3:
	{
		// if ((axisDir != 0))
		int32_t L_24 = V_1;
		V_6 = (bool)((!(((uint32_t)L_24) <= ((uint32_t)0)))? 1 : 0);
		bool L_25 = V_6;
		if (!L_25)
		{
			goto IL_00e7;
		}
	}
	{
		// ((axisDir > 0) ? this.positiveEvent : this.negativeEvent).Invoke();
		int32_t L_26 = V_1;
		if ((((int32_t)L_26) > ((int32_t)0)))
		{
			goto IL_00da;
		}
	}
	{
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_27 = __this->___negativeEvent_10;
		G_B29_0 = L_27;
		goto IL_00e0;
	}

IL_00da:
	{
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_28 = __this->___positiveEvent_9;
		G_B29_0 = L_28;
	}

IL_00e0:
	{
		NullCheck(G_B29_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B29_0, NULL);
	}

IL_00e7:
	{
		// break;
		goto IL_00e9;
	}

IL_00e9:
	{
		// this.prevAxisDir = axisDir;
		int32_t L_29 = V_1;
		__this->___prevAxisDir_7 = L_29;
		// }
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
// System.Void ControlFreak2.Extra.ButtonPressEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonPressEvent__ctor_m60D17F9E810CDDD9633942F9CA94BC08BF7D841C (ButtonPressEvent_tFC3D8E806CDA535836498B3E407050724F433850* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string
		//     buttonName = "Fire1";
		__this->___buttonName_4 = _stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buttonName_4), (void*)_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2);
		// public ButtonPressEvent() : base()
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		// this.buttonEvent = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___buttonEvent_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buttonEvent_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void ControlFreak2.Extra.ButtonPressEvent::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonPressEvent_Update_m28DCA5672C824295615702592E0737A7CD449F15 (ButtonPressEvent_tFC3D8E806CDA535836498B3E407050724F433850* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// bool
		//     invokeNow = false;
		V_0 = (bool)0;
		// switch (this.eventType)
		int32_t L_0 = __this->___eventType_6;
		V_2 = L_0;
		int32_t L_1 = V_2;
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0020;
			}
			case 1:
			{
				goto IL_0034;
			}
			case 2:
			{
				goto IL_0048;
			}
		}
	}
	{
		goto IL_005c;
	}

IL_0020:
	{
		// invokeNow = CF2Input.GetButtonDown(this.buttonName, ref this.buttonId); break;
		String_t* L_3 = __this->___buttonName_4;
		int32_t* L_4 = (&__this->___buttonId_5);
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = CF2Input_GetButtonDown_m4D925A0F5475F2B256B726BFC3241F90603823AA(L_3, L_4, NULL);
		V_0 = L_5;
		// invokeNow = CF2Input.GetButtonDown(this.buttonName, ref this.buttonId); break;
		goto IL_005c;
	}

IL_0034:
	{
		// invokeNow = CF2Input.GetButtonUp(this.buttonName, ref this.buttonId); break;
		String_t* L_6 = __this->___buttonName_4;
		int32_t* L_7 = (&__this->___buttonId_5);
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = CF2Input_GetButtonUp_mC7E2ACC6003E2DA06AEAA9936B66033C9B7BA244(L_6, L_7, NULL);
		V_0 = L_8;
		// invokeNow = CF2Input.GetButtonUp(this.buttonName, ref this.buttonId); break;
		goto IL_005c;
	}

IL_0048:
	{
		// invokeNow = CF2Input.GetButton(this.buttonName, ref this.buttonId); break;
		String_t* L_9 = __this->___buttonName_4;
		int32_t* L_10 = (&__this->___buttonId_5);
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = CF2Input_GetButton_m8CD35826FFB600B5762BB7D12491799ACD23D65C(L_9, L_10, NULL);
		V_0 = L_11;
		// invokeNow = CF2Input.GetButton(this.buttonName, ref this.buttonId); break;
		goto IL_005c;
	}

IL_005c:
	{
		// if (invokeNow)
		bool L_12 = V_0;
		V_3 = L_12;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_006d;
		}
	}
	{
		// this.buttonEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_14 = __this->___buttonEvent_7;
		NullCheck(L_14);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_14, NULL);
	}

IL_006d:
	{
		// }
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
// System.Void ControlFreak2.Extra.KeyPressEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyPressEvent__ctor_mA40086C8336D6081ADED48EC4B13ED158504CB4A (KeyPressEvent_t001A96A38548C2F80BE6B1CD81EB91BC1791F949* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public KeyCode
		//     keyCode = KeyCode.None;
		__this->___keyCode_4 = 0;
		// public KeyPressEvent() : base()
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		// this.keyEvent = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___keyEvent_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keyEvent_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void ControlFreak2.Extra.KeyPressEvent::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyPressEvent_Update_m3FFFAFFF5952FBF6A000C4981F43A97C7616935B (KeyPressEvent_t001A96A38548C2F80BE6B1CD81EB91BC1791F949* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// bool
		//     invokeNow = false;
		V_0 = (bool)0;
		// switch (this.eventType)
		int32_t L_0 = __this->___eventType_5;
		V_2 = L_0;
		int32_t L_1 = V_2;
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0020;
			}
			case 1:
			{
				goto IL_002e;
			}
			case 2:
			{
				goto IL_003c;
			}
		}
	}
	{
		goto IL_004a;
	}

IL_0020:
	{
		// invokeNow = CF2Input.GetKeyDown(this.keyCode); break;
		int32_t L_3 = __this->___keyCode_4;
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = CF2Input_GetKeyDown_m2E30C7C38BD098F3D50673D4B7794B87CA1FD444(L_3, NULL);
		V_0 = L_4;
		// invokeNow = CF2Input.GetKeyDown(this.keyCode); break;
		goto IL_004a;
	}

IL_002e:
	{
		// invokeNow = CF2Input.GetKeyUp(this.keyCode); break;
		int32_t L_5 = __this->___keyCode_4;
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = CF2Input_GetKeyUp_m5D055395D4A4D2CC014F9C9C36BA8398DC5EECB5(L_5, NULL);
		V_0 = L_6;
		// invokeNow = CF2Input.GetKeyUp(this.keyCode); break;
		goto IL_004a;
	}

IL_003c:
	{
		// invokeNow = CF2Input.GetKey(this.keyCode); break;
		int32_t L_7 = __this->___keyCode_4;
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = CF2Input_GetKey_m2E0B71244511A8E7E7F146A8E4F312D68C06D2A0(L_7, NULL);
		V_0 = L_8;
		// invokeNow = CF2Input.GetKey(this.keyCode); break;
		goto IL_004a;
	}

IL_004a:
	{
		// if (invokeNow)
		bool L_9 = V_0;
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_005b;
		}
	}
	{
		// this.keyEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_11 = __this->___keyEvent_6;
		NullCheck(L_11);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_11, NULL);
	}

IL_005b:
	{
		// }
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
// System.Void ControlFreak2.Extra.PressureLevelBinding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressureLevelBinding__ctor_m476A87BEF588738C07BBF0A644D78B2FF1BBB47D (PressureLevelBinding_t05C01264D8D6E99EF81B7E0E040F5C306D8590BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m75464AC0B79BC9502652AAB3F47194CD36BAF6EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9B36A7BB272180EA8C2B8AD01D706A400F2228BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RangeConfigU5BU5D_t56211118954B5EB0E5E63519578FEB662D5C3E45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RangeConfig_t19BDD10175D0B1625DD889875A96BC9FC1FEE2ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PressureLevelBinding() : base()
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		// this.rangeConfigList = new List<RangeConfig>(new RangeConfig[] { new RangeConfig() });
		RangeConfigU5BU5D_t56211118954B5EB0E5E63519578FEB662D5C3E45* L_0 = (RangeConfigU5BU5D_t56211118954B5EB0E5E63519578FEB662D5C3E45*)(RangeConfigU5BU5D_t56211118954B5EB0E5E63519578FEB662D5C3E45*)SZArrayNew(RangeConfigU5BU5D_t56211118954B5EB0E5E63519578FEB662D5C3E45_il2cpp_TypeInfo_var, (uint32_t)1);
		RangeConfigU5BU5D_t56211118954B5EB0E5E63519578FEB662D5C3E45* L_1 = L_0;
		RangeConfig_t19BDD10175D0B1625DD889875A96BC9FC1FEE2ED* L_2 = (RangeConfig_t19BDD10175D0B1625DD889875A96BC9FC1FEE2ED*)il2cpp_codegen_object_new(RangeConfig_t19BDD10175D0B1625DD889875A96BC9FC1FEE2ED_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		RangeConfig__ctor_m89525FC660876874173267B14FB3031985C3D295(L_2, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RangeConfig_t19BDD10175D0B1625DD889875A96BC9FC1FEE2ED*)L_2);
		List_1_t9B36A7BB272180EA8C2B8AD01D706A400F2228BA* L_3 = (List_1_t9B36A7BB272180EA8C2B8AD01D706A400F2228BA*)il2cpp_codegen_object_new(List_1_t9B36A7BB272180EA8C2B8AD01D706A400F2228BA_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m75464AC0B79BC9502652AAB3F47194CD36BAF6EF(L_3, (RuntimeObject*)L_1, List_1__ctor_m75464AC0B79BC9502652AAB3F47194CD36BAF6EF_RuntimeMethod_var);
		__this->___rangeConfigList_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rangeConfigList_7), (void*)L_3);
		// }
		return;
	}
}
// System.Void ControlFreak2.Extra.PressureLevelBinding::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressureLevelBinding_OnEnable_m50153F624FFF567BB1B5CF82DB617DB068E8CA0D (PressureLevelBinding_t05C01264D8D6E99EF81B7E0E040F5C306D8590BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisInputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC_m29D508696F57D665A0E35DBF9760073035589503_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PressureLevelBinding_UpdateRanges_mCE5AB3ECE12A9588A07EACA06266DF8C6F9277E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (this.rig == null)
		InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC* L_0 = __this->___rig_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// this.rig = this.GetComponentInParent<InputRig>();
		InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC* L_3;
		L_3 = Component_GetComponentInParent_TisInputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC_m29D508696F57D665A0E35DBF9760073035589503(__this, Component_GetComponentInParent_TisInputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC_m29D508696F57D665A0E35DBF9760073035589503_RuntimeMethod_var);
		__this->___rig_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rig_4), (void*)L_3);
	}

IL_001d:
	{
		// if (this.rig != null)
		InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC* L_4 = __this->___rig_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		// this.rig.onAddExtraInput += this.UpdateRanges;
		InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC* L_7 = __this->___rig_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_8, __this, (intptr_t)((void*)PressureLevelBinding_UpdateRanges_mCE5AB3ECE12A9588A07EACA06266DF8C6F9277E4_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		InputRig_add_onAddExtraInput_m872CD4692BF19E7F97E59A509B11BE55A9F2532A(L_7, L_8, NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void ControlFreak2.Extra.PressureLevelBinding::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressureLevelBinding_OnDisable_m32AB7DAB776E62850B4CA2BDAE29076CA9CE3809 (PressureLevelBinding_t05C01264D8D6E99EF81B7E0E040F5C306D8590BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PressureLevelBinding_UpdateRanges_mCE5AB3ECE12A9588A07EACA06266DF8C6F9277E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (this.rig != null)
		InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC* L_0 = __this->___rig_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// this.rig.onAddExtraInput -= this.UpdateRanges;
		InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC* L_3 = __this->___rig_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_4, __this, (intptr_t)((void*)PressureLevelBinding_UpdateRanges_mCE5AB3ECE12A9588A07EACA06266DF8C6F9277E4_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		InputRig_remove_onAddExtraInput_m6933FA13C064917ED356E26A5119D25B47434B8D(L_3, L_4, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void ControlFreak2.Extra.PressureLevelBinding::UpdateRanges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressureLevelBinding_UpdateRanges_mCE5AB3ECE12A9588A07EACA06266DF8C6F9277E4 (PressureLevelBinding_t05C01264D8D6E99EF81B7E0E040F5C306D8590BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m315CB53EA082E9AC52BE8AE2E32A01A923CEC239_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m910115A1D94CB909DF5B9CA4BB152E4601EEED93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	{
		// if ((this.rig == null) || string.IsNullOrEmpty(this.sourceAxis))
		InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC* L_0 = __this->___rig_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = __this->___sourceAxis_5;
		bool L_3;
		L_3 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_2, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_1 = (bool)G_B3_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		// return;
		goto IL_006e;
	}

IL_0023:
	{
		// float sourceVal = this.rig.GetAxisRaw(this.sourceAxis, ref this.sourceAxisId);
		InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC* L_5 = __this->___rig_4;
		String_t* L_6 = __this->___sourceAxis_5;
		int32_t* L_7 = (&__this->___sourceAxisId_6);
		NullCheck(L_5);
		float L_8;
		L_8 = InputRig_GetAxisRaw_mA390274ECAF949E2DFE7F59698C2DA6E6B9F3AF9(L_5, L_6, L_7, NULL);
		V_0 = L_8;
		// for (int i = 0; i < this.rangeConfigList.Count; ++i)
		V_2 = 0;
		goto IL_005c;
	}

IL_003f:
	{
		// this.rangeConfigList[i].Update(this.rig, sourceVal);
		List_1_t9B36A7BB272180EA8C2B8AD01D706A400F2228BA* L_9 = __this->___rangeConfigList_7;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		RangeConfig_t19BDD10175D0B1625DD889875A96BC9FC1FEE2ED* L_11;
		L_11 = List_1_get_Item_m910115A1D94CB909DF5B9CA4BB152E4601EEED93(L_9, L_10, List_1_get_Item_m910115A1D94CB909DF5B9CA4BB152E4601EEED93_RuntimeMethod_var);
		InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC* L_12 = __this->___rig_4;
		float L_13 = V_0;
		NullCheck(L_11);
		RangeConfig_Update_mD82E81A6FCB2893E4709F2CDD7B2B8D9AABEE065(L_11, L_12, L_13, NULL);
		// for (int i = 0; i < this.rangeConfigList.Count; ++i)
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_005c:
	{
		// for (int i = 0; i < this.rangeConfigList.Count; ++i)
		int32_t L_15 = V_2;
		List_1_t9B36A7BB272180EA8C2B8AD01D706A400F2228BA* L_16 = __this->___rangeConfigList_7;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_m315CB53EA082E9AC52BE8AE2E32A01A923CEC239_inline(L_16, List_1_get_Count_m315CB53EA082E9AC52BE8AE2E32A01A923CEC239_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_15) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_3;
		if (L_18)
		{
			goto IL_003f;
		}
	}

IL_006e:
	{
		// }
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
// System.Void ControlFreak2.Extra.PressureLevelBinding/RangeConfig::Update(ControlFreak2.InputRig,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RangeConfig_Update_mD82E81A6FCB2893E4709F2CDD7B2B8D9AABEE065 (RangeConfig_t19BDD10175D0B1625DD889875A96BC9FC1FEE2ED* __this, InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC* ___rig0, float ___val1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// if ((val < this.min) || (val > this.max))
		float L_0 = ___val1;
		float L_1 = __this->___min_0;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0015;
		}
	}
	{
		float L_2 = ___val1;
		float L_3 = __this->___max_1;
		G_B3_0 = ((((float)L_2) > ((float)L_3))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		// return;
		goto IL_0064;
	}

IL_001c:
	{
		// if (this.keyTarget != KeyCode.None)
		int32_t L_5 = __this->___keyTarget_2;
		V_1 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		// rig.SetKeyCode(this.keyTarget);
		InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC* L_7 = ___rig0;
		int32_t L_8 = __this->___keyTarget_2;
		NullCheck(L_7);
		InputRig_SetKeyCode_mB0F4E789997962E57D91F7938A1E5C3B6AD8BACD(L_7, L_8, NULL);
	}

IL_0036:
	{
		// if (!string.IsNullOrEmpty(this.axisTarget))
		String_t* L_9 = __this->___axisTarget_3;
		bool L_10;
		L_10 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_9, NULL);
		V_2 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// rig.SetAxisDigital(this.axisTarget, ref this.cachedAxisId, !this.positiveAxisSide);
		InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC* L_12 = ___rig0;
		String_t* L_13 = __this->___axisTarget_3;
		int32_t* L_14 = (&__this->___cachedAxisId_5);
		bool L_15 = __this->___positiveAxisSide_4;
		NullCheck(L_12);
		InputRig_SetAxisDigital_m39AF2E68C49BBD8474F3DEF47C42A86FAD7CD165(L_12, L_13, L_14, (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void ControlFreak2.Extra.PressureLevelBinding/RangeConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RangeConfig__ctor_m89525FC660876874173267B14FB3031985C3D295 (RangeConfig_t19BDD10175D0B1625DD889875A96BC9FC1FEE2ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float
		//     min = 0.5f,
		__this->___min_0 = (0.5f);
		// max = 1.0f;
		__this->___max_1 = (1.0f);
		// public KeyCode
		//     keyTarget = KeyCode.None;
		__this->___keyTarget_2 = 0;
		// public string
		//     axisTarget = "";
		__this->___axisTarget_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___axisTarget_3), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public bool
		//     positiveAxisSide = true;
		__this->___positiveAxisSide_4 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void ControlFreak2.DebugUtils.AxisDebugger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisDebugger__ctor_m9EA8CC4200CC9B4C9A1541E67425D58AFE0B2497 (AxisDebugger_t2ACCA0645DAC9496F451EBD2611AB74782288088* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool
		//     drawGUI            = true,
		__this->___drawGUI_4 = (bool)1;
		// drawMouseStats = false,
		__this->___drawMouseStats_5 = (bool)0;
		// drawUnityAxes    = false,
		__this->___drawUnityAxes_6 = (bool)0;
		// drawKeyCodes    = true;
		__this->___drawKeyCodes_7 = (bool)1;
		// public KeyCode
		//     deltaResetKey = KeyCode.F5;
		__this->___deltaResetKey_8 = ((int32_t)286);
		// public AxisDebugger() : base()
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		// this.allKeyCodes = (KeyCode[])System.Enum.GetValues(typeof(KeyCode));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeArray* L_2;
		L_2 = Enum_GetValues_mE24D2214E046914DA4CAFB6D1DA830B76C501293(L_1, NULL);
		__this->___allKeyCodes_14 = ((KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85*)Castclass((RuntimeObject*)L_2, KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___allKeyCodes_14), (void*)((KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85*)Castclass((RuntimeObject*)L_2, KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void ControlFreak2.DebugUtils.AxisDebugger::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisDebugger_Update_m3A95BF7C57C8FC06E49061BE219ED515DF734A43 (AxisDebugger_t2ACCA0645DAC9496F451EBD2611AB74782288088* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (Input.GetKeyDown(this.deltaResetKey))
		int32_t L_0 = __this->___deltaResetKey_8;
		bool L_1;
		L_1 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		// this.unScroll = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___unScroll_10 = L_3;
		// this.cfScroll = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___cfScroll_9 = L_4;
		// this.cfMouseDelta = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___cfMouseDelta_11 = L_5;
		// this.unMouseDelta = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___unMouseDelta_12 = L_6;
	}

IL_003e:
	{
		// this.cfScroll += CF2Input.mouseScrollDelta;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = __this->___cfScroll_9;
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = CF2Input_get_mouseScrollDelta_m85145F742AFF2FB2B188395DD00728ADBD39EF4A(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_7, L_8, NULL);
		__this->___cfScroll_9 = L_9;
		// this.unScroll.x += Input.mouseScrollDelta.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_10 = (&__this->___unScroll_10);
		float* L_11 = (&L_10->___x_0);
		float* L_12 = L_11;
		float L_13 = *((float*)L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Input_get_mouseScrollDelta_m41C6379183734C5061C6E8C9B6DEFFC9C084A0CE(NULL);
		float L_15 = L_14.___x_0;
		*((float*)L_12) = (float)((float)il2cpp_codegen_add(L_13, L_15));
		// this.unScroll.y += Input.mouseScrollDelta.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_16 = (&__this->___unScroll_10);
		float* L_17 = (&L_16->___y_1);
		float* L_18 = L_17;
		float L_19 = *((float*)L_18);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Input_get_mouseScrollDelta_m41C6379183734C5061C6E8C9B6DEFFC9C084A0CE(NULL);
		float L_21 = L_20.___y_1;
		*((float*)L_18) = (float)((float)il2cpp_codegen_add(L_19, L_21));
		// if (CF2Input.activeRig != null)
		InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC* L_22;
		L_22 = CF2Input_get_activeRig_m9AC5AA62711224E1949CCC2B9883410A6FED3D48(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_23;
		bool L_24 = V_1;
		if (!L_24)
		{
			goto IL_00c9;
		}
	}
	{
		// this.cfMouseDelta.x += CF2Input.GetAxis("Mouse X");
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_25 = (&__this->___cfMouseDelta_11);
		float* L_26 = (&L_25->___x_0);
		float* L_27 = L_26;
		float L_28 = *((float*)L_27);
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		float L_29;
		L_29 = CF2Input_GetAxis_m2A4EEECCC7B2B7A310EC633F0C3615C60AE3DE00(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		*((float*)L_27) = (float)((float)il2cpp_codegen_add(L_28, L_29));
		// this.cfMouseDelta.y += CF2Input.GetAxis("Mouse Y");
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_30 = (&__this->___cfMouseDelta_11);
		float* L_31 = (&L_30->___y_1);
		float* L_32 = L_31;
		float L_33 = *((float*)L_32);
		float L_34;
		L_34 = CF2Input_GetAxis_m2A4EEECCC7B2B7A310EC633F0C3615C60AE3DE00(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		*((float*)L_32) = (float)((float)il2cpp_codegen_add(L_33, L_34));
	}

IL_00c9:
	{
		// this.unMouseDelta.x += GetUnityAxis("Mouse X");
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_35 = (&__this->___unMouseDelta_12);
		float* L_36 = (&L_35->___x_0);
		float* L_37 = L_36;
		float L_38 = *((float*)L_37);
		float L_39;
		L_39 = AxisDebugger_GetUnityAxis_mBC45A0C77068DD4E71C436A6ABF51D17441E1623(__this, _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, (0.0f), NULL);
		*((float*)L_37) = (float)((float)il2cpp_codegen_add(L_38, L_39));
		// this.unMouseDelta.y += GetUnityAxis("Mouse Y");
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_40 = (&__this->___unMouseDelta_12);
		float* L_41 = (&L_40->___y_1);
		float* L_42 = L_41;
		float L_43 = *((float*)L_42);
		float L_44;
		L_44 = AxisDebugger_GetUnityAxis_mBC45A0C77068DD4E71C436A6ABF51D17441E1623(__this, _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, (0.0f), NULL);
		*((float*)L_42) = (float)((float)il2cpp_codegen_add(L_43, L_44));
		// }
		return;
	}
}
// System.Void ControlFreak2.DebugUtils.AxisDebugger::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisDebugger_OnGUI_mE1050788070D1AC4FD6CDE90EAFE52C926230678 (AxisDebugger_t2ACCA0645DAC9496F451EBD2611AB74782288088* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE842D0A7B517AEA0AD5D48252B3F1E8D728D3782_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m36B15AA9978173067A04CFB21877C021D2257845_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05E6D4CE827A54CF3CF59CF45B81C191DDF455DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BC7355B1AEAD8EBD81297EA6B11EC661643E168);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19C42727AD0EDA6AA8AC1F475E4028769FA695FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EA2D1268A0C1B9888A89DD896654906E5F2223A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAAD78212E3C3793E4F755787AED57DCEAA016D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE190AC91CB23B9439E0AAF84F5F1A4D6AD56B747);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1BFBB636B912C9CA317CB60CA07E2FF8A216F86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5C4436D69A77C7370312B6F49B071210D4FB608);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE6199EE8A638591EDFC001187ED0440D331D23B3* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC* V_5 = NULL;
	bool V_6 = false;
	String_t* V_7 = NULL;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	AxisConfig_t8F9A50F190289F3CB2FBA928F5152C118BB047CF* V_13 = NULL;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* G_B5_0 = NULL;
	int32_t G_B11_0 = 0;
	String_t* G_B16_0 = NULL;
	String_t* G_B15_0 = NULL;
	String_t* G_B17_0 = NULL;
	String_t* G_B17_1 = NULL;
	int32_t G_B32_0 = 0;
	int32_t G_B34_0 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B41_0;
	memset((&G_B41_0), 0, sizeof(G_B41_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B47_0;
	memset((&G_B47_0), 0, sizeof(G_B47_0));
	String_t* G_B49_0 = NULL;
	String_t* G_B48_0 = NULL;
	String_t* G_B50_0 = NULL;
	String_t* G_B50_1 = NULL;
	{
		// if (CF2Input.activeRig == null)
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC* L_0;
		L_0 = CF2Input_get_activeRig_m9AC5AA62711224E1949CCC2B9883410A6FED3D48(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return;
		goto IL_03b7;
	}

IL_0015:
	{
		// GUI.skin = this.skin;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_3 = __this->___skin_13;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_skin_mA5C192FA26B27648E37945E0DA7A679C09E88BAB(L_3, NULL);
		// GUILayout.BeginVertical((GUI.skin != null) ? GUI.skin.box : GUIStyle.none);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_4;
		L_4 = GUI_get_skin_m65083FBB1A0F6F33052E2AED126DD43FA34653B1(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_5)
		{
			goto IL_0035;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_6;
		L_6 = GUIStyle_get_none_m802F085D5360B8A9D430441F1B5B83ED1496AF5C(NULL);
		G_B5_0 = L_6;
		goto IL_003f;
	}

IL_0035:
	{
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_7;
		L_7 = GUI_get_skin_m65083FBB1A0F6F33052E2AED126DD43FA34653B1(NULL);
		NullCheck(L_7);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_8;
		L_8 = GUISkin_get_box_m21BE7FC56D903B95BAFAE8890425D330EA88D893(L_7, NULL);
		G_B5_0 = L_8;
	}

IL_003f:
	{
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_9;
		L_9 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_BeginVertical_m08B85FF568BBF4D188D0F10D686C211654246970(G_B5_0, L_9, NULL);
		// GUILayout.Box("Active RIG: " + CF2Input.activeRig.name);
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC* L_10;
		L_10 = CF2Input_get_activeRig_m9AC5AA62711224E1949CCC2B9883410A6FED3D48(NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		String_t* L_12;
		L_12 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral05E6D4CE827A54CF3CF59CF45B81C191DDF455DA, L_11, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_13;
		L_13 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Box_m655ED298646F19D9319EE60289DFA7AA5671F7BD(L_12, L_13, NULL);
		// if (this.drawMouseStats)
		bool L_14 = __this->___drawMouseStats_5;
		V_2 = L_14;
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_010a;
		}
	}
	{
		// GUILayout.Box("Scroll: cf:" + this.cfScroll + " un:" + this.unScroll + "\n" +
		//     "Mouse Delta: cf: " + this.cfMouseDelta + " un:" + this.unMouseDelta);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteralBAAD78212E3C3793E4F755787AED57DCEAA016D6);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralBAAD78212E3C3793E4F755787AED57DCEAA016D6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = __this->___cfScroll_9;
		V_3 = L_19;
		String_t* L_20;
		L_20 = Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27((&V_3), NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_18;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralE5C4436D69A77C7370312B6F49B071210D4FB608);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralE5C4436D69A77C7370312B6F49B071210D4FB608);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = __this->___unScroll_10;
		V_3 = L_23;
		String_t* L_24;
		L_24 = Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27((&V_3), NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_24);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_24);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_22;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral4EA2D1268A0C1B9888A89DD896654906E5F2223A);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral4EA2D1268A0C1B9888A89DD896654906E5F2223A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = __this->___cfMouseDelta_11;
		V_3 = L_27;
		String_t* L_28;
		L_28 = Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27((&V_3), NULL);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_28);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_26;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteralE5C4436D69A77C7370312B6F49B071210D4FB608);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralE5C4436D69A77C7370312B6F49B071210D4FB608);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_29;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = __this->___unMouseDelta_12;
		V_3 = L_31;
		String_t* L_32;
		L_32 = Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27((&V_3), NULL);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_32);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_32);
		String_t* L_33;
		L_33 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_30, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_34;
		L_34 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Box_m655ED298646F19D9319EE60289DFA7AA5671F7BD(L_33, L_34, NULL);
	}

IL_010a:
	{
		// if (this.drawKeyCodes)
		bool L_35 = __this->___drawKeyCodes_7;
		V_4 = L_35;
		bool L_36 = V_4;
		if (!L_36)
		{
			goto IL_01d1;
		}
	}
	{
		// InputRig rig = CF2Input.activeRig;
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC* L_37;
		L_37 = CF2Input_get_activeRig_m9AC5AA62711224E1949CCC2B9883410A6FED3D48(NULL);
		V_5 = L_37;
		// if (rig && (this.allKeyCodes != null))
		InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC* L_38 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_38, NULL);
		if (!L_39)
		{
			goto IL_0135;
		}
	}
	{
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_40 = __this->___allKeyCodes_14;
		G_B11_0 = ((!(((RuntimeObject*)(KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85*)L_40) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0136;
	}

IL_0135:
	{
		G_B11_0 = 0;
	}

IL_0136:
	{
		V_6 = (bool)G_B11_0;
		bool L_41 = V_6;
		if (!L_41)
		{
			goto IL_01d0;
		}
	}
	{
		// string s = "";
		V_7 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int i = 0; i < this.allKeyCodes.Length; ++i)
		V_8 = 0;
		goto IL_01a0;
	}

IL_014c:
	{
		// if (rig.GetKey(this.allKeyCodes[i]))
		InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC* L_42 = V_5;
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_43 = __this->___allKeyCodes_14;
		int32_t L_44 = V_8;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		int32_t L_46 = (int32_t)(L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_42);
		bool L_47;
		L_47 = InputRig_GetKey_mE79DA97B4313B07C7109BC54295AF6975E6EF5E3(L_42, L_46, NULL);
		V_9 = L_47;
		bool L_48 = V_9;
		if (!L_48)
		{
			goto IL_0199;
		}
	}
	{
		// s += (string.IsNullOrEmpty(s) ? "" : ", ") + (this.allKeyCodes[i].ToString());
		String_t* L_49 = V_7;
		String_t* L_50 = V_7;
		bool L_51;
		L_51 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_50, NULL);
		G_B15_0 = L_49;
		if (L_51)
		{
			G_B16_0 = L_49;
			goto IL_0175;
		}
	}
	{
		G_B17_0 = _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
		G_B17_1 = G_B15_0;
		goto IL_017a;
	}

IL_0175:
	{
		G_B17_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B17_1 = G_B16_0;
	}

IL_017a:
	{
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_52 = __this->___allKeyCodes_14;
		int32_t L_53 = V_8;
		NullCheck(L_52);
		Il2CppFakeBox<int32_t> L_54(KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_il2cpp_TypeInfo_var, ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53))));
		String_t* L_55;
		L_55 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_54), NULL);
		String_t* L_56;
		L_56 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(G_B17_1, G_B17_0, L_55, NULL);
		V_7 = L_56;
	}

IL_0199:
	{
		// for (int i = 0; i < this.allKeyCodes.Length; ++i)
		int32_t L_57 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_01a0:
	{
		// for (int i = 0; i < this.allKeyCodes.Length; ++i)
		int32_t L_58 = V_8;
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_59 = __this->___allKeyCodes_14;
		NullCheck(L_59);
		V_10 = (bool)((((int32_t)L_58) < ((int32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))? 1 : 0);
		bool L_60 = V_10;
		if (L_60)
		{
			goto IL_014c;
		}
	}
	{
		// if (!string.IsNullOrEmpty(s))
		String_t* L_61 = V_7;
		bool L_62;
		L_62 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_61, NULL);
		V_11 = (bool)((((int32_t)L_62) == ((int32_t)0))? 1 : 0);
		bool L_63 = V_11;
		if (!L_63)
		{
			goto IL_01cf;
		}
	}
	{
		// GUILayout.Box(s);
		String_t* L_64 = V_7;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_65;
		L_65 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Box_m655ED298646F19D9319EE60289DFA7AA5671F7BD(L_64, L_65, NULL);
	}

IL_01cf:
	{
	}

IL_01d0:
	{
	}

IL_01d1:
	{
		// List<InputRig.AxisConfig> axes = CF2Input.activeRig.axes.list;
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		InputRig_tB061428518D8A325692CC6B98F1CA3D9807EE6EC* L_66;
		L_66 = CF2Input_get_activeRig_m9AC5AA62711224E1949CCC2B9883410A6FED3D48(NULL);
		NullCheck(L_66);
		AxisConfigCollection_t902CA454AE9C6A3DF35B54ED5A0AD2AE40E27691* L_67 = L_66->___axes_39;
		NullCheck(L_67);
		List_1_tE6199EE8A638591EDFC001187ED0440D331D23B3* L_68 = ((NamedConfigCollection_1_tFB031543260187BDA8DB94ECC74235EDB99A32ED*)L_67)->___list_0;
		V_0 = L_68;
		// for (int i = 0; i < axes.Count; ++i)
		V_12 = 0;
		goto IL_039e;
	}

IL_01e9:
	{
		// InputRig.AxisConfig axis = axes[i];
		List_1_tE6199EE8A638591EDFC001187ED0440D331D23B3* L_69 = V_0;
		int32_t L_70 = V_12;
		NullCheck(L_69);
		AxisConfig_t8F9A50F190289F3CB2FBA928F5152C118BB047CF* L_71;
		L_71 = List_1_get_Item_m36B15AA9978173067A04CFB21877C021D2257845(L_69, L_70, List_1_get_Item_m36B15AA9978173067A04CFB21877C021D2257845_RuntimeMethod_var);
		V_13 = L_71;
		// float
		//     cfAxisVal        = 0,
		V_14 = (0.0f);
		// unityAxisVal    = 0;
		V_15 = (0.0f);
		// bool
		//     unityAxisAvailable = false;
		V_16 = (bool)0;
		// cfAxisVal = axis.GetAnalog();
		AxisConfig_t8F9A50F190289F3CB2FBA928F5152C118BB047CF* L_72 = V_13;
		NullCheck(L_72);
		float L_73;
		L_73 = AxisConfig_GetAnalog_mA6E5D55E8A683A1E1BB120406B1CDD06BD4167FF(L_72, NULL);
		V_14 = L_73;
	}
	try
	{// begin try (depth: 1)
		// try { unityAxisVal = Input.GetAxis(axis.name); unityAxisAvailable = true; } catch (System.Exception ) {}
		AxisConfig_t8F9A50F190289F3CB2FBA928F5152C118BB047CF* L_74 = V_13;
		NullCheck(L_74);
		String_t* L_75 = ((NamedConfigElement_t138BA961D6D0C1AD9AA7D79F79AB3F37A7AAB6E5*)L_74)->___name_0;
		float L_76;
		L_76 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(L_75, NULL);
		V_15 = L_76;
		// try { unityAxisVal = Input.GetAxis(axis.name); unityAxisAvailable = true; } catch (System.Exception ) {}
		V_16 = (bool)1;
		goto IL_0228;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0223;
		}
		throw e;
	}

CATCH_0223:
	{// begin catch(System.Exception)
		// try { unityAxisVal = Input.GetAxis(axis.name); unityAxisAvailable = true; } catch (System.Exception ) {}
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0228;
	}// end catch (depth: 1)

IL_0228:
	{
		// if ((cfAxisVal == 0) && (!this.drawUnityAxes || (unityAxisVal == 0)))
		float L_77 = V_14;
		if ((!(((float)L_77) == ((float)(0.0f)))))
		{
			goto IL_0247;
		}
	}
	{
		bool L_78 = __this->___drawUnityAxes_6;
		if (!L_78)
		{
			goto IL_0244;
		}
	}
	{
		float L_79 = V_15;
		G_B32_0 = ((((float)L_79) == ((float)(0.0f)))? 1 : 0);
		goto IL_0245;
	}

IL_0244:
	{
		G_B32_0 = 1;
	}

IL_0245:
	{
		G_B34_0 = G_B32_0;
		goto IL_0248;
	}

IL_0247:
	{
		G_B34_0 = 0;
	}

IL_0248:
	{
		V_17 = (bool)G_B34_0;
		bool L_80 = V_17;
		if (!L_80)
		{
			goto IL_0253;
		}
	}
	{
		// continue;
		goto IL_0398;
	}

IL_0253:
	{
		// GUILayout.BeginVertical();
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_81;
		L_81 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_BeginVertical_mEA80BF63631637EDAAD761D32BAFC49A404F0842(L_81, NULL);
		// GUILayout.Label(axis.name);
		AxisConfig_t8F9A50F190289F3CB2FBA928F5152C118BB047CF* L_82 = V_13;
		NullCheck(L_82);
		String_t* L_83 = ((NamedConfigElement_t138BA961D6D0C1AD9AA7D79F79AB3F37A7AAB6E5*)L_82)->___name_0;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_84;
		L_84 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_83, L_84, NULL);
		// GUI.color = ((cfAxisVal == 0) || (cfAxisVal == 1) || (cfAxisVal == -1)) ? Color.green : Color.gray;
		float L_85 = V_14;
		if ((((float)L_85) == ((float)(0.0f))))
		{
			goto IL_0292;
		}
	}
	{
		float L_86 = V_14;
		if ((((float)L_86) == ((float)(1.0f))))
		{
			goto IL_0292;
		}
	}
	{
		float L_87 = V_14;
		if ((((float)L_87) == ((float)(-1.0f))))
		{
			goto IL_0292;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_88;
		L_88 = Color_get_gray_mC62F535A52768B992F144E443D201F749C5DE932_inline(NULL);
		G_B41_0 = L_88;
		goto IL_0297;
	}

IL_0292:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_89;
		L_89 = Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline(NULL);
		G_B41_0 = L_89;
	}

IL_0297:
	{
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_color_mBB4E17B3600770E2EEEA61AA956D2207EAF112C7(G_B41_0, NULL);
		// GUILayout.Label("CF : " + cfAxisVal.ToString("0.00000"));
		String_t* L_90;
		L_90 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_14), _stringLiteralE190AC91CB23B9439E0AAF84F5F1A4D6AD56B747, NULL);
		String_t* L_91;
		L_91 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralE1BFBB636B912C9CA317CB60CA07E2FF8A216F86, L_90, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_92;
		L_92 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_91, L_92, NULL);
		// GUILayout.Box("", GUILayout.Width(Mathf.Abs(cfAxisVal) * BAR_WIDTH));
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_93 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_94 = L_93;
		float L_95 = V_14;
		float L_96;
		L_96 = fabsf(L_95);
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_97;
		L_97 = GUILayout_Width_m3CD0F9B520A1B7BF065D30844E2F9965277E1DAA(((float)il2cpp_codegen_multiply(L_96, (100.0f))), NULL);
		NullCheck(L_94);
		ArrayElementTypeCheck (L_94, L_97);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_97);
		GUILayout_Box_m655ED298646F19D9319EE60289DFA7AA5671F7BD(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_94, NULL);
		// if (this.drawUnityAxes)
		bool L_98 = __this->___drawUnityAxes_6;
		V_18 = L_98;
		bool L_99 = V_18;
		if (!L_99)
		{
			goto IL_0374;
		}
	}
	{
		// GUI.color = ((unityAxisVal == 0) || (unityAxisVal == 1) || (unityAxisVal == -1)) ? Color.green : Color.gray;
		float L_100 = V_15;
		if ((((float)L_100) == ((float)(0.0f))))
		{
			goto IL_0316;
		}
	}
	{
		float L_101 = V_15;
		if ((((float)L_101) == ((float)(1.0f))))
		{
			goto IL_0316;
		}
	}
	{
		float L_102 = V_15;
		if ((((float)L_102) == ((float)(-1.0f))))
		{
			goto IL_0316;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_103;
		L_103 = Color_get_gray_mC62F535A52768B992F144E443D201F749C5DE932_inline(NULL);
		G_B47_0 = L_103;
		goto IL_031b;
	}

IL_0316:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_104;
		L_104 = Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline(NULL);
		G_B47_0 = L_104;
	}

IL_031b:
	{
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_color_mBB4E17B3600770E2EEEA61AA956D2207EAF112C7(G_B47_0, NULL);
		// GUILayout.Label("UN : " + (unityAxisAvailable ? unityAxisVal.ToString("0.00000") : "UNAVAILABLE!"));
		bool L_105 = V_16;
		G_B48_0 = _stringLiteral0BC7355B1AEAD8EBD81297EA6B11EC661643E168;
		if (L_105)
		{
			G_B49_0 = _stringLiteral0BC7355B1AEAD8EBD81297EA6B11EC661643E168;
			goto IL_0331;
		}
	}
	{
		G_B50_0 = _stringLiteral19C42727AD0EDA6AA8AC1F475E4028769FA695FC;
		G_B50_1 = G_B48_0;
		goto IL_033d;
	}

IL_0331:
	{
		String_t* L_106;
		L_106 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_15), _stringLiteralE190AC91CB23B9439E0AAF84F5F1A4D6AD56B747, NULL);
		G_B50_0 = L_106;
		G_B50_1 = G_B49_0;
	}

IL_033d:
	{
		String_t* L_107;
		L_107 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B50_1, G_B50_0, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_108;
		L_108 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_107, L_108, NULL);
		// GUILayout.Box("", GUILayout.Width(Mathf.Abs(unityAxisVal) * BAR_WIDTH));
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_109 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_110 = L_109;
		float L_111 = V_15;
		float L_112;
		L_112 = fabsf(L_111);
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_113;
		L_113 = GUILayout_Width_m3CD0F9B520A1B7BF065D30844E2F9965277E1DAA(((float)il2cpp_codegen_multiply(L_112, (100.0f))), NULL);
		NullCheck(L_110);
		ArrayElementTypeCheck (L_110, L_113);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_113);
		GUILayout_Box_m655ED298646F19D9319EE60289DFA7AA5671F7BD(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_110, NULL);
	}

IL_0374:
	{
		// GUILayout.EndVertical();
		GUILayout_EndVertical_mF2C806265D9B04E715EC1656FA9392332C59EEBC(NULL);
		// GUI.color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_114;
		L_114 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_color_mBB4E17B3600770E2EEEA61AA956D2207EAF112C7(L_114, NULL);
		// if (axis.axisType == InputRig.AxisType.UnsignedAnalog)
		AxisConfig_t8F9A50F190289F3CB2FBA928F5152C118BB047CF* L_115 = V_13;
		NullCheck(L_115);
		int32_t L_116 = L_115->___axisType_1;
		V_19 = (bool)((((int32_t)L_116) == ((int32_t)0))? 1 : 0);
		bool L_117 = V_19;
		if (!L_117)
		{
			goto IL_0397;
		}
	}
	{
	}

IL_0397:
	{
	}

IL_0398:
	{
		// for (int i = 0; i < axes.Count; ++i)
		int32_t L_118 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_118, 1));
	}

IL_039e:
	{
		// for (int i = 0; i < axes.Count; ++i)
		int32_t L_119 = V_12;
		List_1_tE6199EE8A638591EDFC001187ED0440D331D23B3* L_120 = V_0;
		NullCheck(L_120);
		int32_t L_121;
		L_121 = List_1_get_Count_mE842D0A7B517AEA0AD5D48252B3F1E8D728D3782_inline(L_120, List_1_get_Count_mE842D0A7B517AEA0AD5D48252B3F1E8D728D3782_RuntimeMethod_var);
		V_20 = (bool)((((int32_t)L_119) < ((int32_t)L_121))? 1 : 0);
		bool L_122 = V_20;
		if (L_122)
		{
			goto IL_01e9;
		}
	}
	{
		// GUILayout.EndVertical();
		GUILayout_EndVertical_mF2C806265D9B04E715EC1656FA9392332C59EEBC(NULL);
	}

IL_03b7:
	{
		// }
		return;
	}
}
// System.Single ControlFreak2.DebugUtils.AxisDebugger::GetUnityAxis(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AxisDebugger_GetUnityAxis_mBC45A0C77068DD4E71C436A6ABF51D17441E1623 (AxisDebugger_t2ACCA0645DAC9496F451EBD2611AB74782288088* __this, String_t* ___name0, float ___defaultVal1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// float v = defaultVal;
		float L_0 = ___defaultVal1;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		// try { v = Input.GetAxis(name); } catch (System.Exception ) {}
		String_t* L_1 = ___name0;
		float L_2;
		L_2 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(L_1, NULL);
		V_0 = L_2;
		goto IL_0013;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000e;
		}
		throw e;
	}

CATCH_000e:
	{// begin catch(System.Exception)
		// try { v = Input.GetAxis(name); } catch (System.Exception ) {}
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0013;
	}// end catch (depth: 1)

IL_0013:
	{
		// return v;
		float L_3 = V_0;
		V_1 = L_3;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		float L_4 = V_1;
		return L_4;
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
// System.String ControlFreak2.DebugUtils.GamepadHardwareTester::GetJoyAxisName(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GamepadHardwareTester_GetJoyAxisName_m9B03F0091C8B95B1B9CE35D03BE37BA486ADB7F4 (int32_t ___joyId0, int32_t ___axisId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996BFF8945A41E2527585950A7A1160F5745A49B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return ("cfJ" + joyId + "" + axisId);
		String_t* L_0;
		L_0 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___joyId0), NULL);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___axisId1), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral996BFF8945A41E2527585950A7A1160F5745A49B, L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_001c;
	}

IL_001c:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.KeyCode ControlFreak2.DebugUtils.GamepadHardwareTester::GetJoyKeyCode(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GamepadHardwareTester_GetJoyKeyCode_m0FFB574886A32AC674E8A75590011F3F2E13EF23 (int32_t ___joyId0, int32_t ___keyId1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t G_B10_0 = 0;
	{
		// KeyCode keyCode = KeyCode.Joystick1Button0;
		V_0 = ((int32_t)350);
		// switch (joyId)
		int32_t L_0 = ___joyId0;
		V_2 = L_0;
		int32_t L_1 = V_2;
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_002b;
			}
			case 2:
			{
				goto IL_0033;
			}
			case 3:
			{
				goto IL_003b;
			}
		}
	}
	{
		goto IL_0043;
	}

IL_0023:
	{
		// case 0 : keyCode = KeyCode.Joystick1Button0; break;
		V_0 = ((int32_t)350);
		// case 0 : keyCode = KeyCode.Joystick1Button0; break;
		goto IL_0047;
	}

IL_002b:
	{
		// case 1 : keyCode = KeyCode.Joystick2Button0; break;
		V_0 = ((int32_t)370);
		// case 1 : keyCode = KeyCode.Joystick2Button0; break;
		goto IL_0047;
	}

IL_0033:
	{
		// case 2 : keyCode = KeyCode.Joystick3Button0; break;
		V_0 = ((int32_t)390);
		// case 2 : keyCode = KeyCode.Joystick3Button0; break;
		goto IL_0047;
	}

IL_003b:
	{
		// case 3 : keyCode = KeyCode.Joystick4Button0; break;
		V_0 = ((int32_t)410);
		// case 3 : keyCode = KeyCode.Joystick4Button0; break;
		goto IL_0047;
	}

IL_0043:
	{
		// return KeyCode.None;
		V_3 = 0;
		goto IL_0066;
	}

IL_0047:
	{
		// if ((keyId < 0) || (keyId >= MAX_JOYSTICK_KEYS))
		int32_t L_3 = ___keyId1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_4 = ___keyId1;
		G_B10_0 = ((((int32_t)((((int32_t)L_4) < ((int32_t)((int32_t)20)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0056;
	}

IL_0055:
	{
		G_B10_0 = 1;
	}

IL_0056:
	{
		V_4 = (bool)G_B10_0;
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0060;
		}
	}
	{
		// return KeyCode.None;
		V_3 = 0;
		goto IL_0066;
	}

IL_0060:
	{
		// return keyCode + keyId;
		int32_t L_6 = V_0;
		int32_t L_7 = ___keyId1;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, L_7));
		goto IL_0066;
	}

IL_0066:
	{
		// }
		int32_t L_8 = V_3;
		return L_8;
	}
}
// System.String ControlFreak2.DebugUtils.GamepadHardwareTester::GetAxisCode(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GamepadHardwareTester_GetAxisCode_m24953D69B86D2C536AEE7E28E2CF0788B30B0EBF (GamepadHardwareTester_t458719C4A6B74E1549C2B8408004517C72AEC3D5* __this, int32_t ___axis0, bool ___positiveSide1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE71910C7E19B0D89B96AF6011CDFDAF6EA1CF1C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	{
		// return ("Axis" + axis + (positiveSide ? "+":"-"));
		String_t* L_0;
		L_0 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___axis0), NULL);
		bool L_1 = ___positiveSide1;
		G_B1_0 = L_0;
		G_B1_1 = _stringLiteralEE71910C7E19B0D89B96AF6011CDFDAF6EA1CF1C;
		if (L_1)
		{
			G_B2_0 = L_0;
			G_B2_1 = _stringLiteralEE71910C7E19B0D89B96AF6011CDFDAF6EA1CF1C;
			goto IL_0017;
		}
	}
	{
		G_B3_0 = _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001c;
	}

IL_0017:
	{
		G_B3_0 = _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001c:
	{
		String_t* L_2;
		L_2 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(G_B3_2, G_B3_1, G_B3_0, NULL);
		V_0 = L_2;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String ControlFreak2.DebugUtils.GamepadHardwareTester::GetAxisName(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GamepadHardwareTester_GetAxisName_mD03CD2E46BD6E7958531C51D357F1B7070288CC6 (GamepadHardwareTester_t458719C4A6B74E1549C2B8408004517C72AEC3D5* __this, int32_t ___axis0, bool ___positiveSide1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10A105116F1400FFCE661E402C3C12DDCA0D688C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AEBC3FE5056D1B945064BB8AC17061A3793A837);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	String_t* G_B3_3 = NULL;
	{
		// return ("Axis[" + axis + "] " + (positiveSide ? "+" : "-"));
		String_t* L_0;
		L_0 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___axis0), NULL);
		bool L_1 = ___positiveSide1;
		G_B1_0 = _stringLiteral10A105116F1400FFCE661E402C3C12DDCA0D688C;
		G_B1_1 = L_0;
		G_B1_2 = _stringLiteral3AEBC3FE5056D1B945064BB8AC17061A3793A837;
		if (L_1)
		{
			G_B2_0 = _stringLiteral10A105116F1400FFCE661E402C3C12DDCA0D688C;
			G_B2_1 = L_0;
			G_B2_2 = _stringLiteral3AEBC3FE5056D1B945064BB8AC17061A3793A837;
			goto IL_001c;
		}
	}
	{
		G_B3_0 = _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0021;
	}

IL_001c:
	{
		G_B3_0 = _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0021:
	{
		String_t* L_2;
		L_2 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		V_0 = L_2;
		goto IL_0029;
	}

IL_0029:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Single ControlFreak2.DebugUtils.GamepadHardwareTester::GetAxisState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GamepadHardwareTester_GetAxisState_mFB44D38A8001201A355EF6E81CC83FFE1A9FF36D (GamepadHardwareTester_t458719C4A6B74E1549C2B8408004517C72AEC3D5* __this, int32_t ___axis0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FADC741FD58A21025209091F355127AF62AC90E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// return Input.GetAxis("JoyAxis" + axis);
		String_t* L_0;
		L_0 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___axis0), NULL);
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral6FADC741FD58A21025209091F355127AF62AC90E, L_0, NULL);
		float L_2;
		L_2 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(L_1, NULL);
		V_0 = L_2;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		float L_3 = V_0;
		return L_3;
	}
}
// System.String ControlFreak2.DebugUtils.GamepadHardwareTester::GetKeyCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GamepadHardwareTester_GetKeyCode_m77A106E656E96FF9660CFB2970A5A1D8BA6A7D27 (GamepadHardwareTester_t458719C4A6B74E1549C2B8408004517C72AEC3D5* __this, int32_t ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return ("Key"+key);
		String_t* L_0;
		L_0 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___key0), NULL);
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07, L_0, NULL);
		V_0 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Boolean ControlFreak2.DebugUtils.GamepadHardwareTester::GetKeyState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GamepadHardwareTester_GetKeyState_m8C34F848D574065B7437A8E2801B929A9C77C97F (GamepadHardwareTester_t458719C4A6B74E1549C2B8408004517C72AEC3D5* __this, int32_t ___key0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return Input.GetKey(KeyCode.Joystick1Button0 + key);
		int32_t L_0 = ___key0;
		bool L_1;
		L_1 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)il2cpp_codegen_add(((int32_t)350), L_0)), NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void ControlFreak2.DebugUtils.GamepadHardwareTester::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadHardwareTester_OnGUI_mA45247977196161A0F44ADDFC3495006153C61CC (GamepadHardwareTester_t458719C4A6B74E1549C2B8408004517C72AEC3D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1237586C59E626EEA17908F667E8FB9F384FF75B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral204F624A305ADBA5A4072B77088BF083D0C11CB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21AA24767E9AA8C488C0F87C701183508C0BE794);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45584490341DA43A5ADF5C410EDCEDA26125301C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral482A4C4330185F51A24A753ED387A6AA86879791);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63A230CFE60A4B1F60140A9342618308FAF6EF62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral687D9BA523E32A2B8A4FEAD5E5EAE89D357E1420);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E0D83EF9088AE8CC7BBD38084F8BA927AC35FCB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7584AF33CAC6106FD9FBD498FD1D7AC94CCC160F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral827A064B843948937EC2A9C37A341512B7EE7E5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A4B5B68E20745061C6F90EFAFA2A04F86E5A7EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E3324233FE7C113A9E4ECB37585211E8FEE544C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA12B5FF5DCE3DD6F0BB54FBE1A39D86B88E8E7C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8CCF6E6153356981C5D9B7080B1E3C9397F0100);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC3C33532BD41C20FDE975364F00E8C871861CF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91A196B9689361707CD830AD0A1F0128CF82F70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAA805E2ED1AC5955830BCA60404EE9D093DDCD6);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	float V_4 = 0.0f;
	bool V_5 = false;
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	int32_t V_24 = 0;
	int32_t G_B4_0 = 0;
	{
		// GUI.skin = this.skin;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_0 = __this->___skin_4;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_skin_mA5C192FA26B27648E37945E0DA7A679C09E88BAB(L_0, NULL);
		// string[] joyNames = Input.GetJoystickNames();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = Input_GetJoystickNames_m398DA6DE3281D480F35E06AA92F746D4C82C9DC5(NULL);
		V_0 = L_1;
		// for (int joy = 0; joy < 4; ++joy)
		V_2 = 0;
		goto IL_01a1;
	}

IL_001a:
	{
		// string msg = "";
		V_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// if ((joyNames == null) || (joyNames.Length <= joy))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = V_2;
		G_B4_0 = ((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))) > ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0030;
	}

IL_002f:
	{
		G_B4_0 = 1;
	}

IL_0030:
	{
		V_5 = (bool)G_B4_0;
		bool L_5 = V_5;
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		// msg = "No joystick connected!";
		V_3 = _stringLiteralA12B5FF5DCE3DD6F0BB54FBE1A39D86B88E8E7C6;
		goto IL_0159;
	}

IL_0043:
	{
		// for (int i = 0; i < MAX_JOYSTICK_AXES; ++i)
		V_6 = 0;
		goto IL_00bc;
	}

IL_0049:
	{
		// float v = Input.GetAxisRaw(GetJoyAxisName(joy, i));
		int32_t L_6 = V_2;
		int32_t L_7 = V_6;
		String_t* L_8;
		L_8 = GamepadHardwareTester_GetJoyAxisName_m9B03F0091C8B95B1B9CE35D03BE37BA486ADB7F4(L_6, L_7, NULL);
		float L_9;
		L_9 = Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA(L_8, NULL);
		V_7 = L_9;
		// if (Mathf.Abs(v) <= AXIS_DEADZONE)
		float L_10 = V_7;
		float L_11;
		L_11 = fabsf(L_10);
		V_8 = (bool)((((int32_t)((!(((float)L_11) <= ((float)(0.0500000007f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_8;
		if (!L_12)
		{
			goto IL_0072;
		}
	}
	{
		// continue;
		goto IL_00b6;
	}

IL_0072:
	{
		// msg += GetAxisName(i, v>0) + "   [ "  + v.ToString("0.00") + "]\n";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		String_t* L_15 = V_3;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_14;
		int32_t L_17 = V_6;
		float L_18 = V_7;
		String_t* L_19;
		L_19 = GamepadHardwareTester_GetAxisName_mD03CD2E46BD6E7958531C51D357F1B7070288CC6(__this, L_17, (bool)((((float)L_18) > ((float)(0.0f)))? 1 : 0), NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_16;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteralE91A196B9689361707CD830AD0A1F0128CF82F70);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralE91A196B9689361707CD830AD0A1F0128CF82F70);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		String_t* L_22;
		L_22 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_7), _stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D, NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_22);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_21;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral482A4C4330185F51A24A753ED387A6AA86879791);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral482A4C4330185F51A24A753ED387A6AA86879791);
		String_t* L_24;
		L_24 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_23, NULL);
		V_3 = L_24;
	}

IL_00b6:
	{
		// for (int i = 0; i < MAX_JOYSTICK_AXES; ++i)
		int32_t L_25 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_00bc:
	{
		// for (int i = 0; i < MAX_JOYSTICK_AXES; ++i)
		int32_t L_26 = V_6;
		V_9 = (bool)((((int32_t)L_26) < ((int32_t)((int32_t)10)))? 1 : 0);
		bool L_27 = V_9;
		if (L_27)
		{
			goto IL_0049;
		}
	}
	{
		// for (int i = 0; i < MAX_JOYSTICK_KEYS; ++i)
		V_10 = 0;
		goto IL_0105;
	}

IL_00cd:
	{
		// if (!Input.GetKey(GetJoyKeyCode(joy, i)))
		int32_t L_28 = V_2;
		int32_t L_29 = V_10;
		int32_t L_30;
		L_30 = GamepadHardwareTester_GetJoyKeyCode_m0FFB574886A32AC674E8A75590011F3F2E13EF23(L_28, L_29, NULL);
		bool L_31;
		L_31 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(L_30, NULL);
		V_11 = (bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_11;
		if (!L_32)
		{
			goto IL_00e6;
		}
	}
	{
		// continue;
		goto IL_00ff;
	}

IL_00e6:
	{
		// msg += "Key" + i + "\n";
		String_t* L_33 = V_3;
		String_t* L_34;
		L_34 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_10), NULL);
		String_t* L_35;
		L_35 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(L_33, _stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07, L_34, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		V_3 = L_35;
	}

IL_00ff:
	{
		// for (int i = 0; i < MAX_JOYSTICK_KEYS; ++i)
		int32_t L_36 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_0105:
	{
		// for (int i = 0; i < MAX_JOYSTICK_KEYS; ++i)
		int32_t L_37 = V_10;
		V_12 = (bool)((((int32_t)L_37) < ((int32_t)((int32_t)20)))? 1 : 0);
		bool L_38 = V_12;
		if (L_38)
		{
			goto IL_00cd;
		}
	}
	{
		// if (msg == "")
		String_t* L_39 = V_3;
		bool L_40;
		L_40 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_39, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_13 = L_40;
		bool L_41 = V_13;
		if (!L_41)
		{
			goto IL_0128;
		}
	}
	{
		// msg = "Nothing pressed";
		V_3 = _stringLiteral6E0D83EF9088AE8CC7BBD38084F8BA927AC35FCB;
	}

IL_0128:
	{
		// msg = joy.ToString() + ":[" + joyNames[joy] + "]\n\n" + msg;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = L_42;
		String_t* L_44;
		L_44 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_44);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45 = L_43;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, _stringLiteral8E3324233FE7C113A9E4ECB37585211E8FEE544C);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral8E3324233FE7C113A9E4ECB37585211E8FEE544C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = L_45;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = V_0;
		int32_t L_48 = V_2;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		String_t* L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_50);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_50);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = L_46;
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, _stringLiteral21AA24767E9AA8C488C0F87C701183508C0BE794);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral21AA24767E9AA8C488C0F87C701183508C0BE794);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = L_51;
		String_t* L_53 = V_3;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_53);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_53);
		String_t* L_54;
		L_54 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_52, NULL);
		V_3 = L_54;
	}

IL_0159:
	{
		// float boxWidth = ((Screen.width - 20) / 4);
		int32_t L_55;
		L_55 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		V_4 = ((float)((int32_t)(((int32_t)il2cpp_codegen_subtract(L_55, ((int32_t)20)))/4)));
		// GUI.Box(new Rect(10 + (joy * boxWidth) + 5, 10, boxWidth - 5, Screen.height-130), msg);
		int32_t L_56 = V_2;
		float L_57 = V_4;
		float L_58 = V_4;
		int32_t L_59;
		L_59 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_60;
		memset((&L_60), 0, sizeof(L_60));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_60), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add((10.0f), ((float)il2cpp_codegen_multiply(((float)L_56), L_57)))), (5.0f))), (10.0f), ((float)il2cpp_codegen_subtract(L_58, (5.0f))), ((float)((int32_t)il2cpp_codegen_subtract(L_59, ((int32_t)130)))), /*hidden argument*/NULL);
		String_t* L_61 = V_3;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_Box_m1E4D5FE4B7911725059CE0A2674B88CFAD279365(L_60, L_61, NULL);
		// for (int joy = 0; joy < 4; ++joy)
		int32_t L_62 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_01a1:
	{
		// for (int joy = 0; joy < 4; ++joy)
		int32_t L_63 = V_2;
		V_14 = (bool)((((int32_t)L_63) < ((int32_t)4))? 1 : 0);
		bool L_64 = V_14;
		if (L_64)
		{
			goto IL_001a;
		}
	}
	{
		// string keyMsg = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// if (Input.GetKey(KeyCode.Escape)) keyMsg += "Escape ";
		bool L_65;
		L_65 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)27), NULL);
		V_15 = L_65;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01cd;
		}
	}
	{
		// if (Input.GetKey(KeyCode.Escape)) keyMsg += "Escape ";
		String_t* L_67 = V_1;
		String_t* L_68;
		L_68 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_67, _stringLiteral8A4B5B68E20745061C6F90EFAFA2A04F86E5A7EA, NULL);
		V_1 = L_68;
	}

IL_01cd:
	{
		// if (Input.GetKey(KeyCode.Return)) keyMsg += "Enter ";
		bool L_69;
		L_69 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)13), NULL);
		V_16 = L_69;
		bool L_70 = V_16;
		if (!L_70)
		{
			goto IL_01e6;
		}
	}
	{
		// if (Input.GetKey(KeyCode.Return)) keyMsg += "Enter ";
		String_t* L_71 = V_1;
		String_t* L_72;
		L_72 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_71, _stringLiteral204F624A305ADBA5A4072B77088BF083D0C11CB7, NULL);
		V_1 = L_72;
	}

IL_01e6:
	{
		// if (Input.GetKey(KeyCode.LeftShift)) keyMsg += "LShift ";
		bool L_73;
		L_73 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)304), NULL);
		V_17 = L_73;
		bool L_74 = V_17;
		if (!L_74)
		{
			goto IL_0202;
		}
	}
	{
		// if (Input.GetKey(KeyCode.LeftShift)) keyMsg += "LShift ";
		String_t* L_75 = V_1;
		String_t* L_76;
		L_76 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_75, _stringLiteral63A230CFE60A4B1F60140A9342618308FAF6EF62, NULL);
		V_1 = L_76;
	}

IL_0202:
	{
		// if (Input.GetKey(KeyCode.RightShift)) keyMsg += "RShift ";
		bool L_77;
		L_77 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)303), NULL);
		V_18 = L_77;
		bool L_78 = V_18;
		if (!L_78)
		{
			goto IL_021e;
		}
	}
	{
		// if (Input.GetKey(KeyCode.RightShift)) keyMsg += "RShift ";
		String_t* L_79 = V_1;
		String_t* L_80;
		L_80 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_79, _stringLiteral7584AF33CAC6106FD9FBD498FD1D7AC94CCC160F, NULL);
		V_1 = L_80;
	}

IL_021e:
	{
		// if (Input.GetKey(KeyCode.LeftControl)) keyMsg += "LCtrl ";
		bool L_81;
		L_81 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)306), NULL);
		V_19 = L_81;
		bool L_82 = V_19;
		if (!L_82)
		{
			goto IL_023a;
		}
	}
	{
		// if (Input.GetKey(KeyCode.LeftControl)) keyMsg += "LCtrl ";
		String_t* L_83 = V_1;
		String_t* L_84;
		L_84 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_83, _stringLiteralFAA805E2ED1AC5955830BCA60404EE9D093DDCD6, NULL);
		V_1 = L_84;
	}

IL_023a:
	{
		// if (Input.GetKey(KeyCode.RightControl)) keyMsg += "RCtrl ";
		bool L_85;
		L_85 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)305), NULL);
		V_20 = L_85;
		bool L_86 = V_20;
		if (!L_86)
		{
			goto IL_0256;
		}
	}
	{
		// if (Input.GetKey(KeyCode.RightControl)) keyMsg += "RCtrl ";
		String_t* L_87 = V_1;
		String_t* L_88;
		L_88 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_87, _stringLiteral827A064B843948937EC2A9C37A341512B7EE7E5D, NULL);
		V_1 = L_88;
	}

IL_0256:
	{
		// if (Input.GetKey(KeyCode.Space)) keyMsg += "Space ";
		bool L_89;
		L_89 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)32), NULL);
		V_21 = L_89;
		bool L_90 = V_21;
		if (!L_90)
		{
			goto IL_026f;
		}
	}
	{
		// if (Input.GetKey(KeyCode.Space)) keyMsg += "Space ";
		String_t* L_91 = V_1;
		String_t* L_92;
		L_92 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_91, _stringLiteral45584490341DA43A5ADF5C410EDCEDA26125301C, NULL);
		V_1 = L_92;
	}

IL_026f:
	{
		// GUI.Box(new Rect(10, Screen.height - 100, Screen.width - 20, 50), keyMsg);
		int32_t L_93;
		L_93 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		int32_t L_94;
		L_94 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_95;
		memset((&L_95), 0, sizeof(L_95));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_95), (10.0f), ((float)((int32_t)il2cpp_codegen_subtract(L_93, ((int32_t)100)))), ((float)((int32_t)il2cpp_codegen_subtract(L_94, ((int32_t)20)))), (50.0f), /*hidden argument*/NULL);
		String_t* L_96 = V_1;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_Box_m1E4D5FE4B7911725059CE0A2674B88CFAD279365(L_95, L_96, NULL);
		// if (GUI.Button (new Rect(10, Screen.height-40, 100, 30), "Reset Axes"))
		int32_t L_97;
		L_97 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_98;
		memset((&L_98), 0, sizeof(L_98));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_98), (10.0f), ((float)((int32_t)il2cpp_codegen_subtract(L_97, ((int32_t)40)))), (100.0f), (30.0f), /*hidden argument*/NULL);
		bool L_99;
		L_99 = GUI_Button_m92B7A836FB5463F20951B6BD9DB8F3B1BA56763C(L_98, _stringLiteralC8CCF6E6153356981C5D9B7080B1E3C9397F0100, NULL);
		V_22 = L_99;
		bool L_100 = V_22;
		if (!L_100)
		{
			goto IL_02ca;
		}
	}
	{
		// Input.ResetInputAxes();
		Input_ResetInputAxes_m4EBCC069814BBECE517C6A9F45AFFB35E310AEEE(NULL);
	}

IL_02ca:
	{
		// if (GUI.Button (new Rect(10+100+5, Screen.height-40, 100, 30), "Exit"))
		int32_t L_101;
		L_101 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_102;
		memset((&L_102), 0, sizeof(L_102));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_102), (115.0f), ((float)((int32_t)il2cpp_codegen_subtract(L_101, ((int32_t)40)))), (100.0f), (30.0f), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		bool L_103;
		L_103 = GUI_Button_m92B7A836FB5463F20951B6BD9DB8F3B1BA56763C(L_102, _stringLiteral687D9BA523E32A2B8A4FEAD5E5EAE89D357E1420, NULL);
		V_23 = L_103;
		bool L_104 = V_23;
		if (!L_104)
		{
			goto IL_02fd;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
	}

IL_02fd:
	{
		// GUI.Box(new Rect(220, Screen.height-40,  Screen.width-230, 30), "Platform: " + Application.platform.ToString() + "  Unity Ver [" + Application.unityVersion + "]");
		int32_t L_105;
		L_105 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		int32_t L_106;
		L_106 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_107;
		memset((&L_107), 0, sizeof(L_107));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_107), (220.0f), ((float)((int32_t)il2cpp_codegen_subtract(L_105, ((int32_t)40)))), ((float)((int32_t)il2cpp_codegen_subtract(L_106, ((int32_t)230)))), (30.0f), /*hidden argument*/NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_108 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_109 = L_108;
		NullCheck(L_109);
		ArrayElementTypeCheck (L_109, _stringLiteral1237586C59E626EEA17908F667E8FB9F384FF75B);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1237586C59E626EEA17908F667E8FB9F384FF75B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_110 = L_109;
		int32_t L_111;
		L_111 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		V_24 = L_111;
		Il2CppFakeBox<int32_t> L_112(RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var, (&V_24));
		String_t* L_113;
		L_113 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_112), NULL);
		NullCheck(L_110);
		ArrayElementTypeCheck (L_110, L_113);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_113);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_114 = L_110;
		NullCheck(L_114);
		ArrayElementTypeCheck (L_114, _stringLiteralDC3C33532BD41C20FDE975364F00E8C871861CF0);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDC3C33532BD41C20FDE975364F00E8C871861CF0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_115 = L_114;
		String_t* L_116;
		L_116 = Application_get_unityVersion_m09F45DDCFA0A4414AA296A595FDB0B59B44F5387(NULL);
		NullCheck(L_115);
		ArrayElementTypeCheck (L_115, L_116);
		(L_115)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_116);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_117 = L_115;
		NullCheck(L_117);
		ArrayElementTypeCheck (L_117, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		String_t* L_118;
		L_118 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_117, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_Box_m1E4D5FE4B7911725059CE0A2674B88CFAD279365(L_107, L_118, NULL);
		// }
		return;
	}
}
// System.Void ControlFreak2.DebugUtils.GamepadHardwareTester::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadHardwareTester__ctor_mC8E6AE5515670E2A4C0BFD1A42FEF287B92DF6A8 (GamepadHardwareTester_t458719C4A6B74E1549C2B8408004517C72AEC3D5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1 (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) >= ((int32_t)L_8)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_000d;
	}

IL_002c:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))->___identityMatrix_17;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_m017722BD53BAE32893C2A1B674746E340D4A5B89_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		float L_0;
		L_0 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___current0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___target1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___currentVelocity2;
		float L_4 = ___smoothTime3;
		float L_5 = V_1;
		float L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_SmoothDamp_mA20AB2E3DFAE680D742E9A17D969AF8A3E849711(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowardsAngle_m427D75FA50922E7948D8C1E4B71300158DCC46C6_inline (float ___current0, float ___target1, float ___maxDelta2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	int32_t G_B3_0 = 0;
	{
		float L_0 = ___current0;
		float L_1 = ___target1;
		float L_2;
		L_2 = Mathf_DeltaAngle_m4B87B84265A48389AC3F5E3E8164570C6AECE5C3_inline(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3 = ___maxDelta2;
		float L_4 = V_0;
		if ((!(((float)((-L_3))) < ((float)L_4))))
		{
			goto IL_0014;
		}
	}
	{
		float L_5 = V_0;
		float L_6 = ___maxDelta2;
		G_B3_0 = ((((float)L_5) < ((float)L_6))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_1 = (bool)G_B3_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_001d;
		}
	}
	{
		float L_8 = ___target1;
		V_2 = L_8;
		goto IL_002d;
	}

IL_001d:
	{
		float L_9 = ___current0;
		float L_10 = V_0;
		___target1 = ((float)il2cpp_codegen_add(L_9, L_10));
		float L_11 = ___current0;
		float L_12 = ___target1;
		float L_13 = ___maxDelta2;
		float L_14;
		L_14 = Mathf_MoveTowards_m28F18762A84FB55152D854EBC92604FABA0879D1_inline(L_11, L_12, L_13, NULL);
		V_2 = L_14;
		goto IL_002d;
	}

IL_002d:
	{
		float L_15 = V_2;
		return L_15;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_6;
		goto IL_0038;
	}

IL_002d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_7;
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_mC62F535A52768B992F144E443D201F749C5DE932_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.5f), (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_m4B87B84265A48389AC3F5E3E8164570C6AECE5C3_inline (float ___current0, float ___target1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___target1;
		float L_1 = ___current0;
		float L_2;
		L_2 = Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline(((float)il2cpp_codegen_subtract(L_0, L_1)), (360.0f), NULL);
		V_0 = L_2;
		float L_3 = V_0;
		V_1 = (bool)((((float)L_3) > ((float)(180.0f)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		float L_5 = V_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_5, (360.0f)));
	}

IL_0023:
	{
		float L_6 = V_0;
		V_2 = L_6;
		goto IL_0027;
	}

IL_0027:
	{
		float L_7 = V_2;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m28F18762A84FB55152D854EBC92604FABA0879D1_inline (float ___current0, float ___target1, float ___maxDelta2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___target1;
		float L_1 = ___current0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___maxDelta2;
		V_0 = (bool)((((int32_t)((!(((float)L_2) <= ((float)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0017;
		}
	}
	{
		float L_5 = ___target1;
		V_1 = L_5;
		goto IL_0026;
	}

IL_0017:
	{
		float L_6 = ___current0;
		float L_7 = ___target1;
		float L_8 = ___current0;
		float L_9;
		L_9 = Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline(((float)il2cpp_codegen_subtract(L_7, L_8)), NULL);
		float L_10 = ___maxDelta2;
		V_1 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_9, L_10))));
		goto IL_0026;
	}

IL_0026:
	{
		float L_11 = V_1;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline (float ___t0, float ___length1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___length1;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___length1;
		float L_5 = ___length1;
		float L_6;
		L_6 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline (float ___f0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f0;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
