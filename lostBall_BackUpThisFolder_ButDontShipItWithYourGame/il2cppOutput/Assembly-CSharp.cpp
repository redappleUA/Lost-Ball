#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<UnityEngine.UIElements.MeshGenerationContext>
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry>
struct BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue>
struct Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData>
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBinding>
struct IEnumerable_1_tB0371F6D0932F0C778CAEED128603B65772AC357;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction>
struct IEnumerator_1_t5197EB77176C670D4AAF5E0D1B4F1AB9940EFE41;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>>
struct List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260;
// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry>
struct List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet>
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
// System.Collections.Generic.List`1<UnityEngine.UIElements.UIDocument>
struct List_1_t74EC90C5F42E1A99F29BC6A7FF27FD27FCF98344;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.InheritedData>
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.LayoutData>
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.RareData>
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransformData>
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransitionData>
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.VisualData>
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// UnityEngine.UIElements.ComputedTransitionProperty[]
struct ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.InputSystem.InputAction[]
struct InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810;
// UnityEngine.InputSystem.InputActionMap[]
struct InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
// UnityEngine.InputSystem.InputControlScheme[]
struct InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride[]
struct ParameterOverrideU5BU5D_tC408277D7E98D32E4B0AEFA1E2EDDB74790897EE;
// AN_Button
struct AN_Button_t0BED92A0FB6814A10E5BC26EB1782674F22BDC59;
// AN_DoorKey
struct AN_DoorKey_tBBB8D9F1AA07AED814F105F6C37654B56E9247B4;
// AN_DoorScript
struct AN_DoorScript_t9C44CFCAF508293A346E40E7A6034A66131293AD;
// AN_HeroController
struct AN_HeroController_tDB7EFDBEF61E59C8B7E73AD70746A80CC1E37689;
// AN_HeroInteractive
struct AN_HeroInteractive_tD848319968C7A7C15BB8EB066BE6FF9E5A9B24FB;
// AN_PlugScript
struct AN_PlugScript_t8D8A1D3C001915E36C7A555E00D78119BF8A85A0;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
// UnityEngine.UIElements.Button
struct Button_t8EC3B431665F84C0B637C11B0EA29236828646C2;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraWalker
struct CameraWalker_t04284262D4EF568956C5F39D01E9A206703620BC;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// UnityEngine.UIElements.Clickable
struct Clickable_tED3E313565F64BDF5DA9D3FE0FEFFD0E17E53834;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DestroyWithChance
struct DestroyWithChance_t635D2605C78F0993387EA0E2BD3A67934C1F57B3;
// DoorController
struct DoorController_tF2F99340EB03FDC2F2F1CDC7C67770C13D62849A;
// DoorRamp
struct DoorRamp_t69CB6A72DCFD3F080BF78F327C54BA7F6EF37BC4;
// EndGame
struct EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06;
// UnityEngine.UIElements.EventCallbackRegistry
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.TextCore.Text.FontAsset
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.HingeJoint
struct HingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.UIElements.IBinding
struct IBinding_t02FD99E9C9F2072B28E110F16C157666F5B2DBC7;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UIElements.IPanel
struct IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5;
// UnityEngine.UIElements.ITextHandle
struct ITextHandle_tE073838D8ECC8553222F256E181F96527EC273E4;
// UnityEngine.UIElements.InlineStyleAccess
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// InputManager
struct InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677;
// UnityEngine.UIElements.Label
struct Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.UIElements.UIR.MeshHandle
struct MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// OpenScreenOnFinish
struct OpenScreenOnFinish_tC67193BCB26A36188FF2367A6F203304495DDF68;
// UnityEngine.UIElements.PanelSettings
struct PanelSettings_t0621207D5DD3BB89DB587440E8F9E07234283DEC;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// PlayerMove
struct PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.UIElements.UIR.RenderChainCommand
struct RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// Road
struct Road_t361F14BED654C37F9762713439B45E48FAF8778F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// ShootBall
struct ShootBall_t692CDFD1501143404C9BEF465255407E6ADC78B0;
// ShootControl
struct ShootControl_t31618C05DC02BC9743209AA5AA14248C2EB354CD;
// System.String
struct String_t;
// UnityEngine.UIElements.StyleVariableContext
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
// Touch
struct Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Tree
struct Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F;
// UnityEngine.UIElements.UIDocument
struct UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77;
// UnityEngine.UIElements.UIDocumentList
struct UIDocumentList_tA2A8305DE916298E4C586EC8235085560914E7C3;
// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
// UnityEngine.UIElements.VisualTreeAsset
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD;
// UnityEngine.Yoga.YogaNode
struct YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// DoorController/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tA1FDE93D31E3582D86EAE8A82D2EBB5C4DB0A07F;
// DoorController/<Open>d__5
struct U3COpenU3Ed__5_t31F1DBA7BBF1313EC6E3EA810D86E021DE670145;
// InputManager/EndTouchEvent
struct EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE;
// InputManager/StartTouchEvent
struct StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47;
// ShootBall/<DestroyBall>d__8
struct U3CDestroyBallU3Ed__8_tFFD2607F8773023EC2B7F4A31ABB26113445CC0E;
// Touch/ITouchControlActions
struct ITouchControlActions_t12D7DD601475071D7008E4A22B66735DB1E23853;
// Tree/<DestroyAfterHit>d__11
struct U3CDestroyAfterHitU3Ed__11_t0519306A8AAD55D87E3E1123D69CBCD1B0D990A0;
// Tree/<DestroyTree>d__13
struct U3CDestroyTreeU3Ed__13_t3F1756E246E0F84CA97EECA5DAEC9FBE78C141EE;
// UnityEngine.UIElements.VisualElement/CustomStyleAccess
struct CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1;
// UnityEngine.UIElements.VisualElement/TypeData
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITouchControlActions_t12D7DD601475071D7008E4A22B66735DB1E23853_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDestroyAfterHitU3Ed__11_t0519306A8AAD55D87E3E1123D69CBCD1B0D990A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDestroyBallU3Ed__8_tFFD2607F8773023EC2B7F4A31ABB26113445CC0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDestroyTreeU3Ed__13_t3F1756E246E0F84CA97EECA5DAEC9FBE78C141EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COpenU3Ed__5_t31F1DBA7BBF1313EC6E3EA810D86E021DE670145_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_tA1FDE93D31E3582D86EAE8A82D2EBB5C4DB0A07F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306;
IL2CPP_EXTERN_C String_t* _stringLiteral0F5B6C350FECF631C92BC63DC7F9029B75F6E0B7;
IL2CPP_EXTERN_C String_t* _stringLiteral106320719F2ABDB0A61EF80E817C1769A6D2921A;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral21C54BF860BF41F6CB5FA90618AD96345DB385CD;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral2F94F4742528BDF9EB11E79D6B1AA693BB9912DF;
IL2CPP_EXTERN_C String_t* _stringLiteral3871EAB332B72BCDB2A54199A4D11FB130C8872B;
IL2CPP_EXTERN_C String_t* _stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B;
IL2CPP_EXTERN_C String_t* _stringLiteral497D04A9F12484A2B579045305317D824B392B5E;
IL2CPP_EXTERN_C String_t* _stringLiteral586ED90E8A5989C330E8E38E2139B5E3DFD533D3;
IL2CPP_EXTERN_C String_t* _stringLiteral58E1105F60162B9A65B9D212EE0EFFEAF3DFB2EA;
IL2CPP_EXTERN_C String_t* _stringLiteral6DCFED261E2880A0BAC97F17340F3E0B85FF123C;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral76E112635C3C501D74AF9A4D3B515FF840FF84EF;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral85364350D2A2EDA973AEF68CD6755D362AC6E24C;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral98E7D179EA2E8773D1C579142703763CE3DA7653;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m7FE20EC51F5F0CD242B94967CCF5B8E32BA9FC62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7_mD226E906030A0E16CE9EEDAAA902B0CD7CA4B45F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTree_t523ABF112CF15FC9FECDF55ED678B31919BF162F_m91E2DB2750104A2DB4336B2861FF74DFF33CF34A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisUIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_m50669A283DE0DEFD0FFB1F42B965E6FCD460901F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EndGame_ExitButtonPressed_mB615B698D755212EFC16DA1C88C9FDC66708080C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EndGame_RestartButtonPressed_m3BEEBF9D7065E7AE04D7393E2B81C2C3645A5961_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDoorRamp_t69CB6A72DCFD3F080BF78F327C54BA7F6EF37BC4_m26C39A7970F0E3C42DB1F43469734DE7ACCAAABA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06_m1A0765C079AA01F0281C0BE6994AE2BD57AF92EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputManager_U3CStartU3Eb__12_0_m43759EFB0CCF512F3ABD0F86BDFF6665D8E0924B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputManager_U3CStartU3Eb__12_1_m928629600C6F1D4C365A2AE7968CECE90CF65FF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisAN_HeroInteractive_tD848319968C7A7C15BB8EB066BE6FF9E5A9B24FB_mE9EE66E8EC4E18549D9F0DA22DEF2503E1BC406F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisInputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677_mD89593A49808DCACB240D17149BA7ED1E15E3247_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ShootBall_U3CDestroyBallU3Eb__8_0_m0FC410B43460F7259004D41F1F3A8C474C3B0E48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ShootControl_Shoot_mBC98B39CAE8A8D0571BCC423A520AF9F7B2DDDED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tree_U3CDestroyTreeU3Eb__13_0_m33973CF6E76D6DF353A24447B26F7A29D8A53790_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDestroyAfterHitU3Ed__11_System_Collections_IEnumerator_Reset_mFB057EFA2EBB64E96BABDBC6BD12AF58F9D57E7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDestroyBallU3Ed__8_System_Collections_IEnumerator_Reset_mD55F60D47EDB60FEE4D40C87EC27CAB3CEB26FB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDestroyTreeU3Ed__13_System_Collections_IEnumerator_Reset_mBDCEA3AA09CD6722ADFED3F22A540F62A2F820D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COpenU3Ed__5_System_Collections_IEnumerator_Reset_mEF927BB2AF49BA5B93F8F888272A3C728DDA96B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3COpenU3Eb__0_m9826714E4209E2C85A827C1E5B5D9B1BE5110C77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3COpenU3Eb__1_m69C2ACB9E935BF6E9A9116D29B4FEB49FF3706D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F_RuntimeMethod_var;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};
struct Il2CppArrayBounds;

// UnityEngine.UIElements.CallbackEventHandler
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	// UnityEngine.UIElements.EventCallbackRegistry UnityEngine.UIElements.CallbackEventHandler::m_CallbackRegistry
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry_0;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
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

// Touch
struct Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5  : public RuntimeObject
{
	// UnityEngine.InputSystem.InputActionAsset Touch::<asset>k__BackingField
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___U3CassetU3Ek__BackingField_0;
	// UnityEngine.InputSystem.InputActionMap Touch::m_TouchControl
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_TouchControl_1;
	// Touch/ITouchControlActions Touch::m_TouchControlActionsCallbackInterface
	RuntimeObject* ___m_TouchControlActionsCallbackInterface_2;
	// UnityEngine.InputSystem.InputAction Touch::m_TouchControl_TouchInput
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_TouchControl_TouchInput_3;
	// UnityEngine.InputSystem.InputAction Touch::m_TouchControl_TouchPress
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_TouchControl_TouchPress_4;
	// UnityEngine.InputSystem.InputAction Touch::m_TouchControl_TouchPosition
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_TouchControl_TouchPosition_5;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// DoorController/<Open>d__5
struct U3COpenU3Ed__5_t31F1DBA7BBF1313EC6E3EA810D86E021DE670145  : public RuntimeObject
{
	// System.Int32 DoorController/<Open>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DoorController/<Open>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// DoorController DoorController/<Open>d__5::<>4__this
	DoorController_tF2F99340EB03FDC2F2F1CDC7C67770C13D62849A* ___U3CU3E4__this_2;
	// DoorController/<>c__DisplayClass5_0 DoorController/<Open>d__5::<>8__1
	U3CU3Ec__DisplayClass5_0_tA1FDE93D31E3582D86EAE8A82D2EBB5C4DB0A07F* ___U3CU3E8__1_3;
};

// ShootBall/<DestroyBall>d__8
struct U3CDestroyBallU3Ed__8_tFFD2607F8773023EC2B7F4A31ABB26113445CC0E  : public RuntimeObject
{
	// System.Int32 ShootBall/<DestroyBall>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ShootBall/<DestroyBall>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ShootBall ShootBall/<DestroyBall>d__8::<>4__this
	ShootBall_t692CDFD1501143404C9BEF465255407E6ADC78B0* ___U3CU3E4__this_2;
};

// Tree/<DestroyAfterHit>d__11
struct U3CDestroyAfterHitU3Ed__11_t0519306A8AAD55D87E3E1123D69CBCD1B0D990A0  : public RuntimeObject
{
	// System.Int32 Tree/<DestroyAfterHit>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Tree/<DestroyAfterHit>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Tree Tree/<DestroyAfterHit>d__11::<>4__this
	Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F* ___U3CU3E4__this_2;
};

// Tree/<DestroyTree>d__13
struct U3CDestroyTreeU3Ed__13_t3F1756E246E0F84CA97EECA5DAEC9FBE78C141EE  : public RuntimeObject
{
	// System.Int32 Tree/<DestroyTree>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Tree/<DestroyTree>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Tree Tree/<DestroyTree>d__13::<>4__this
	Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F* ___U3CU3E4__this_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme>
struct ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>
struct ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData>
struct StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData>
struct StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData>
struct StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData>
struct StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData>
struct StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData>
struct StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___m_Ref_0;
};

// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 
{
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;
};

// UnityEngine.UIElements.UIR.BMPAlloc
struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 
{
	// System.Int32 UnityEngine.UIElements.UIR.BMPAlloc::page
	int32_t ___page_1;
	// System.UInt16 UnityEngine.UIElements.UIR.BMPAlloc::pageLine
	uint16_t ___pageLine_2;
	// System.Byte UnityEngine.UIElements.UIR.BMPAlloc::bitIndex
	uint8_t ___bitIndex_3;
	// UnityEngine.UIElements.UIR.OwnedState UnityEngine.UIElements.UIR.BMPAlloc::ownedState
	uint8_t ___ownedState_4;
};

struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30_StaticFields
{
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.BMPAlloc::Invalid
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___Invalid_0;
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

// UnityEngine.UIElements.Focusable
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0  : public CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4
{
	// System.Boolean UnityEngine.UIElements.Focusable::<focusable>k__BackingField
	bool ___U3CfocusableU3Ek__BackingField_1;
	// System.Int32 UnityEngine.UIElements.Focusable::<tabIndex>k__BackingField
	int32_t ___U3CtabIndexU3Ek__BackingField_2;
	// System.Boolean UnityEngine.UIElements.Focusable::m_DelegatesFocus
	bool ___m_DelegatesFocus_3;
	// System.Boolean UnityEngine.UIElements.Focusable::m_ExcludeFromFocusRing
	bool ___m_ExcludeFromFocusRing_4;
	// System.Boolean UnityEngine.UIElements.Focusable::isIMGUIContainer
	bool ___isIMGUIContainer_5;
};

// UnityEngine.UIElements.FontDefinition
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C 
{
	// UnityEngine.Font UnityEngine.UIElements.FontDefinition::m_Font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font_0;
	// UnityEngine.TextCore.Text.FontAsset UnityEngine.UIElements.FontDefinition::m_FontAsset
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.FontDefinition
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font_0;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.FontDefinition
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font_0;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset_1;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
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

// UnityEngine.JointLimits
struct JointLimits_tB79BCEF381B77F069150A1A961C05DD9838B998A 
{
	// System.Single UnityEngine.JointLimits::m_Min
	float ___m_Min_0;
	// System.Single UnityEngine.JointLimits::m_Max
	float ___m_Max_1;
	// System.Single UnityEngine.JointLimits::m_Bounciness
	float ___m_Bounciness_2;
	// System.Single UnityEngine.JointLimits::m_BounceMinVelocity
	float ___m_BounceMinVelocity_3;
	// System.Single UnityEngine.JointLimits::m_ContactDistance
	float ___m_ContactDistance_4;
	// System.Single UnityEngine.JointLimits::minBounce
	float ___minBounce_5;
	// System.Single UnityEngine.JointLimits::maxBounce
	float ___maxBounce_6;
};

// UnityEngine.UIElements.Length
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	// System.Single UnityEngine.UIElements.Length::m_Value
	float ___m_Value_1;
	// UnityEngine.UIElements.Length/Unit UnityEngine.UIElements.Length::m_Unit
	int32_t ___m_Unit_2;
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

// UnityEngine.PropertyName
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_Predicate_0;
};

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E 
{
	// System.Boolean UnityEngine.InputSystem.InputActionMap/DeviceArray::m_HaveValue
	bool ___m_HaveValue_0;
	// System.Int32 UnityEngine.InputSystem.InputActionMap/DeviceArray::m_DeviceCount
	int32_t ___m_DeviceCount_1;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.InputActionMap/DeviceArray::m_DeviceArray
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E_marshaled_pinvoke
{
	int32_t ___m_HaveValue_0;
	int32_t ___m_DeviceCount_1;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E_marshaled_com
{
	int32_t ___m_HaveValue_0;
	int32_t ___m_DeviceCount_1;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};

// Touch/TouchControlActions
struct TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82 
{
	// Touch Touch/TouchControlActions::m_Wrapper
	Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* ___m_Wrapper_0;
};
// Native definition for P/Invoke marshalling of Touch/TouchControlActions
struct TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82_marshaled_pinvoke
{
	Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* ___m_Wrapper_0;
};
// Native definition for COM marshalling of Touch/TouchControlActions
struct TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82_marshaled_com
{
	Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* ___m_Wrapper_0;
};

// UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/Hierarchy::m_Owner
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>
struct Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA ___value_1;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C 
{
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData> UnityEngine.UIElements.ComputedStyle::inheritedData
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData> UnityEngine.UIElements.ComputedStyle::layoutData
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData> UnityEngine.UIElements.ComputedStyle::rareData
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData> UnityEngine.UIElements.ComputedStyle::transformData
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData> UnityEngine.UIElements.ComputedStyle::transitionData
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData> UnityEngine.UIElements.ComputedStyle::visualData
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.ComputedStyle::yogaNode
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue> UnityEngine.UIElements.ComputedStyle::customProperties
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	// System.Int64 UnityEngine.UIElements.ComputedStyle::matchingRulesHash
	int64_t ___matchingRulesHash_8;
	// System.Single UnityEngine.UIElements.ComputedStyle::dpiScaling
	float ___dpiScaling_9;
	// UnityEngine.UIElements.ComputedTransitionProperty[] UnityEngine.UIElements.ComputedStyle::computedTransitions
	ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82* ___computedTransitions_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_pinvoke
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke* ___computedTransitions_10;
};
// Native definition for COM marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_com
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com* ___computedTransitions_10;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prev
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::next
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::groupTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::boneTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::hierarchyDepth
	int32_t ___hierarchyDepth_6;
	// UnityEngine.UIElements.UIR.RenderDataDirtyTypes UnityEngine.UIElements.UIR.RenderChainVEData::dirtiedValues
	int32_t ___dirtiedValues_7;
	// System.UInt32 UnityEngine.UIElements.UIR.RenderChainVEData::dirtyID
	uint32_t ___dirtyID_8;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isInChain
	bool ___isInChain_13;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isHierarchyHidden
	bool ___isHierarchyHidden_14;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::localFlipsWinding
	bool ___localFlipsWinding_15;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::worldFlipsWinding
	bool ___worldFlipsWinding_16;
	// UnityEngine.UIElements.UIR.Implementation.ClipMethod UnityEngine.UIElements.UIR.RenderChainVEData::clipMethod
	int32_t ___clipMethod_17;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenStencilRef
	int32_t ___childrenStencilRef_18;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenMaskDepth
	int32_t ___childrenMaskDepth_19;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::disableNudging
	bool ___disableNudging_20;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::usesLegacyText
	bool ___usesLegacyText_21;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::data
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_22;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::closingData
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_23;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.UIR.RenderChainVEData::verticesSpace
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_24;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVStart
	int32_t ___displacementUVStart_25;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVEnd
	int32_t ___displacementUVEnd_26;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::transformID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_27;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::clipRectID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_28;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::opacityID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_29;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::textCoreSettingsID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_30;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_31;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderLeftColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_32;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderTopColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_33;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderRightColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_34;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderBottomColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_35;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::tintColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_36;
	// System.Single UnityEngine.UIElements.UIR.RenderChainVEData::compositeOpacity
	float ___compositeOpacity_37;
	// UnityEngine.Color UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_38;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevText
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_39;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextText
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_40;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textEntries
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_41;
	// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textures
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_42;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___worldFlipsWinding_16;
	int32_t ___clipMethod_17;
	int32_t ___childrenStencilRef_18;
	int32_t ___childrenMaskDepth_19;
	int32_t ___disableNudging_20;
	int32_t ___usesLegacyText_21;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_22;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_23;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_24;
	int32_t ___displacementUVStart_25;
	int32_t ___displacementUVEnd_26;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_36;
	float ___compositeOpacity_37;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_38;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_39;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_40;
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_41;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_42;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___worldFlipsWinding_16;
	int32_t ___clipMethod_17;
	int32_t ___childrenStencilRef_18;
	int32_t ___childrenMaskDepth_19;
	int32_t ___disableNudging_20;
	int32_t ___usesLegacyText_21;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_22;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_23;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_24;
	int32_t ___displacementUVStart_25;
	int32_t ___displacementUVEnd_26;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_36;
	float ___compositeOpacity_37;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_38;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_39;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_40;
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_41;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_42;
};

// DoorController/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tA1FDE93D31E3582D86EAE8A82D2EBB5C4DB0A07F  : public RuntimeObject
{
	// UnityEngine.AnimatorStateInfo DoorController/<>c__DisplayClass5_0::stateInfo
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___stateInfo_0;
};

// UnityEngine.UIElements.MeshGenerationContextUtils/TextParams
struct TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F 
{
	// UnityEngine.Rect UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::rect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect_0;
	// System.String UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::text
	String_t* ___text_1;
	// UnityEngine.Font UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font_2;
	// UnityEngine.UIElements.FontDefinition UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::fontDefinition
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C ___fontDefinition_3;
	// System.Int32 UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::fontSize
	int32_t ___fontSize_4;
	// UnityEngine.UIElements.Length UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::letterSpacing
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___letterSpacing_5;
	// UnityEngine.UIElements.Length UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::wordSpacing
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___wordSpacing_6;
	// UnityEngine.UIElements.Length UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::paragraphSpacing
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___paragraphSpacing_7;
	// UnityEngine.FontStyle UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::fontStyle
	int32_t ___fontStyle_8;
	// UnityEngine.Color UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___fontColor_9;
	// UnityEngine.TextAnchor UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::anchor
	int32_t ___anchor_10;
	// System.Boolean UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::wordWrap
	bool ___wordWrap_11;
	// System.Single UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::wordWrapWidth
	float ___wordWrapWidth_12;
	// System.Boolean UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::richText
	bool ___richText_13;
	// UnityEngine.Color UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::playmodeTintColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor_14;
	// UnityEngine.UIElements.TextOverflow UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::textOverflow
	int32_t ___textOverflow_15;
	// UnityEngine.UIElements.TextOverflowPosition UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::textOverflowPosition
	int32_t ___textOverflowPosition_16;
	// UnityEngine.UIElements.OverflowInternal UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::overflow
	int32_t ___overflow_17;
	// UnityEngine.UIElements.IPanel UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::panel
	RuntimeObject* ___panel_18;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.MeshGenerationContextUtils/TextParams
struct TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F_marshaled_pinvoke
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect_0;
	char* ___text_1;
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font_2;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke ___fontDefinition_3;
	int32_t ___fontSize_4;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___letterSpacing_5;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___wordSpacing_6;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___paragraphSpacing_7;
	int32_t ___fontStyle_8;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___fontColor_9;
	int32_t ___anchor_10;
	int32_t ___wordWrap_11;
	float ___wordWrapWidth_12;
	int32_t ___richText_13;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor_14;
	int32_t ___textOverflow_15;
	int32_t ___textOverflowPosition_16;
	int32_t ___overflow_17;
	RuntimeObject* ___panel_18;
};
// Native definition for COM marshalling of UnityEngine.UIElements.MeshGenerationContextUtils/TextParams
struct TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F_marshaled_com
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect_0;
	Il2CppChar* ___text_1;
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font_2;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com ___fontDefinition_3;
	int32_t ___fontSize_4;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___letterSpacing_5;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___wordSpacing_6;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___paragraphSpacing_7;
	int32_t ___fontStyle_8;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___fontColor_9;
	int32_t ___anchor_10;
	int32_t ___wordWrap_11;
	float ___wordWrapWidth_12;
	int32_t ___richText_13;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor_14;
	int32_t ___textOverflow_15;
	int32_t ___textOverflowPosition_16;
	int32_t ___overflow_17;
	RuntimeObject* ___panel_18;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputActionMap::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.InputSystem.InputActionMap::m_Id
	String_t* ___m_Id_1;
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionMap::m_Asset
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_2;
	// UnityEngine.InputSystem.InputAction[] UnityEngine.InputSystem.InputActionMap::m_Actions
	InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810* ___m_Actions_3;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_Bindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_Bindings_4;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_BindingsForEachAction
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_BindingsForEachAction_5;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputActionMap::m_ControlsForEachAction
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ControlsForEachAction_6;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_EnabledActionsCount
	int32_t ___m_EnabledActionsCount_7;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::m_SingletonAction
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_SingletonAction_8;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_MapIndexInState
	int32_t ___m_MapIndexInState_9;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionMap::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_10;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionMap::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_11;
	// UnityEngine.InputSystem.InputActionMap/Flags UnityEngine.InputSystem.InputActionMap::m_Flags
	int32_t ___m_Flags_12;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_ParameterOverridesCount
	int32_t ___m_ParameterOverridesCount_13;
	// UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride[] UnityEngine.InputSystem.InputActionMap::m_ParameterOverrides
	ParameterOverrideU5BU5D_tC408277D7E98D32E4B0AEFA1E2EDDB74790897EE* ___m_ParameterOverrides_14;
	// UnityEngine.InputSystem.InputActionMap/DeviceArray UnityEngine.InputSystem.InputActionMap::m_Devices
	DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E ___m_Devices_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputActionMap::m_ActionCallbacks
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_ActionCallbacks_16;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.InputSystem.InputActionMap::m_ActionIndexByNameOrId
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_ActionIndexByNameOrId_17;
};

struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09_StaticFields
{
	// System.Int32 UnityEngine.InputSystem.InputActionMap::s_DeferBindingResolution
	int32_t ___s_DeferBindingResolution_18;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115  : public Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0
{
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.runningAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCountU3Ek__BackingField_6;
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.completedAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCountU3Ek__BackingField_7;
	// System.String UnityEngine.UIElements.VisualElement::m_Name
	String_t* ___m_Name_12;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::m_ClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_ClassList_13;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>> UnityEngine.UIElements.VisualElement::m_PropertyBag
	List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260* ___m_PropertyBag_14;
	// UnityEngine.UIElements.VisualElementFlags UnityEngine.UIElements.VisualElement::m_Flags
	int32_t ___m_Flags_15;
	// System.String UnityEngine.UIElements.VisualElement::m_ViewDataKey
	String_t* ___m_ViewDataKey_16;
	// UnityEngine.UIElements.RenderHints UnityEngine.UIElements.VisualElement::m_RenderHints
	int32_t ___m_RenderHints_17;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastLayout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastLayout_18;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastPseudoPadding
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastPseudoPadding_19;
	// UnityEngine.UIElements.UIR.RenderChainVEData UnityEngine.UIElements.VisualElement::renderChainData
	RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 ___renderChainData_20;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_Layout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_Layout_21;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_BoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_BoundingBox_22;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldBoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldBoundingBox_23;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformCache_24;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformInverseCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformInverseCache_25;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClip
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClip_26;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClipMinusGroup
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClipMinusGroup_27;
	// System.Boolean UnityEngine.UIElements.VisualElement::m_WorldClipIsInfinite
	bool ___m_WorldClipIsInfinite_28;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::triggerPseudoMask
	int32_t ___triggerPseudoMask_30;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::dependencyPseudoMask
	int32_t ___dependencyPseudoMask_31;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::m_PseudoStates
	int32_t ___m_PseudoStates_32;
	// System.Int32 UnityEngine.UIElements.VisualElement::<containedPointerIds>k__BackingField
	int32_t ___U3CcontainedPointerIdsU3Ek__BackingField_33;
	// UnityEngine.UIElements.PickingMode UnityEngine.UIElements.VisualElement::<pickingMode>k__BackingField
	int32_t ___U3CpickingModeU3Ek__BackingField_34;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.VisualElement::<yogaNode>k__BackingField
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___U3CyogaNodeU3Ek__BackingField_35;
	// UnityEngine.UIElements.ComputedStyle UnityEngine.UIElements.VisualElement::m_Style
	ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C ___m_Style_36;
	// UnityEngine.UIElements.StyleVariableContext UnityEngine.UIElements.VisualElement::variableContext
	StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527* ___variableContext_37;
	// System.Int32 UnityEngine.UIElements.VisualElement::inheritedStylesHash
	int32_t ___inheritedStylesHash_38;
	// System.UInt32 UnityEngine.UIElements.VisualElement::controlid
	uint32_t ___controlid_39;
	// System.Int32 UnityEngine.UIElements.VisualElement::imguiContainerDescendantCount
	int32_t ___imguiContainerDescendantCount_40;
	// System.Boolean UnityEngine.UIElements.VisualElement::<enabledSelf>k__BackingField
	bool ___U3CenabledSelfU3Ek__BackingField_41;
	// System.Action`1<UnityEngine.UIElements.MeshGenerationContext> UnityEngine.UIElements.VisualElement::<generateVisualContent>k__BackingField
	Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B* ___U3CgenerateVisualContentU3Ek__BackingField_42;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.VisualElement::k_GenerateVisualContentMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateVisualContentMarker_43;
	// UnityEngine.UIElements.VisualElement/RenderTargetMode UnityEngine.UIElements.VisualElement::m_SubRenderTargetMode
	int32_t ___m_SubRenderTargetMode_44;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::m_defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_defaultMaterial_46;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate> UnityEngine.UIElements.VisualElement::m_RunningAnimations
	List_1_t96E9133B70FB6765E6B138E810D33E18901715DA* ___m_RunningAnimations_47;
	// UnityEngine.UIElements.VisualElement/Hierarchy UnityEngine.UIElements.VisualElement::<hierarchy>k__BackingField
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 ___U3ChierarchyU3Ek__BackingField_49;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isRootVisualContainer>k__BackingField
	bool ___U3CisRootVisualContainerU3Ek__BackingField_50;
	// System.Boolean UnityEngine.UIElements.VisualElement::<cacheAsBitmap>k__BackingField
	bool ___U3CcacheAsBitmapU3Ek__BackingField_51;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_PhysicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_PhysicalParent_52;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_LogicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_LogicalParent_53;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::m_Children
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___m_Children_55;
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualElement::<elementPanel>k__BackingField
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___U3CelementPanelU3Ek__BackingField_56;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.VisualElement::m_VisualTreeAssetSource
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___m_VisualTreeAssetSource_57;
	// UnityEngine.UIElements.InlineStyleAccess UnityEngine.UIElements.VisualElement::inlineStyleAccess
	InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165* ___inlineStyleAccess_59;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet> UnityEngine.UIElements.VisualElement::styleSheetList
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___styleSheetList_60;
	// UnityEngine.UIElements.VisualElement/TypeData UnityEngine.UIElements.VisualElement::m_TypeData
	TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A* ___m_TypeData_64;
};

struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_StaticFields
{
	// System.UInt32 UnityEngine.UIElements.VisualElement::s_NextId
	uint32_t ___s_NextId_8;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::s_EmptyClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___s_EmptyClassList_9;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::userDataPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___userDataPropertyKey_10;
	// System.String UnityEngine.UIElements.VisualElement::disabledUssClassName
	String_t* ___disabledUssClassName_11;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::s_InfiniteRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___s_InfiniteRect_29;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::s_runtimeMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_runtimeMaterial_45;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::s_EmptyList
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___s_EmptyList_54;
	// UnityEngine.UIElements.VisualElement/CustomStyleAccess UnityEngine.UIElements.VisualElement::s_CustomStyleAccess
	CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1* ___s_CustomStyleAccess_58;
	// System.Text.RegularExpressions.Regex UnityEngine.UIElements.VisualElement::s_InternalStyleSheetPath
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_InternalStyleSheetPath_61;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::tooltipPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___tooltipPropertyKey_62;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData> UnityEngine.UIElements.VisualElement::s_TypeData
	Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8* ___s_TypeData_63;
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E  : public MulticastDelegate_t
{
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.UIElements.BindableElement
struct BindableElement_t873EFF65032D21AB3B7BFBA21675D1693967435C  : public VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115
{
	// UnityEngine.UIElements.IBinding UnityEngine.UIElements.BindableElement::<binding>k__BackingField
	RuntimeObject* ___U3CbindingU3Ek__BackingField_65;
	// System.String UnityEngine.UIElements.BindableElement::<bindingPath>k__BackingField
	String_t* ___U3CbindingPathU3Ek__BackingField_66;
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.InputSystem.InputActionMap[] UnityEngine.InputSystem.InputActionAsset::m_ActionMaps
	InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045* ___m_ActionMaps_5;
	// UnityEngine.InputSystem.InputControlScheme[] UnityEngine.InputSystem.InputActionAsset::m_ControlSchemes
	InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* ___m_ControlSchemes_6;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionAsset::m_SharedStateForAllMaps
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_SharedStateForAllMaps_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset::m_ParameterOverridesCount
	int32_t ___m_ParameterOverridesCount_9;
	// UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride[] UnityEngine.InputSystem.InputActionAsset::m_ParameterOverrides
	ParameterOverrideU5BU5D_tC408277D7E98D32E4B0AEFA1E2EDDB74790897EE* ___m_ParameterOverrides_10;
	// UnityEngine.InputSystem.InputActionMap/DeviceArray UnityEngine.InputSystem.InputActionAsset::m_Devices
	DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E ___m_Devices_11;
};

// UnityEngine.Joint
struct Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
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

// InputManager/EndTouchEvent
struct EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE  : public MulticastDelegate_t
{
};

// InputManager/StartTouchEvent
struct StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
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

// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.HingeJoint
struct HingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7  : public Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.UIElements.TextElement
struct TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0  : public BindableElement_t873EFF65032D21AB3B7BFBA21675D1693967435C
{
	// UnityEngine.UIElements.ITextHandle UnityEngine.UIElements.TextElement::m_TextHandle
	RuntimeObject* ___m_TextHandle_68;
	// System.String UnityEngine.UIElements.TextElement::m_Text
	String_t* ___m_Text_70;
	// System.Boolean UnityEngine.UIElements.TextElement::m_EnableRichText
	bool ___m_EnableRichText_71;
	// System.Boolean UnityEngine.UIElements.TextElement::m_DisplayTooltipWhenElided
	bool ___m_DisplayTooltipWhenElided_72;
	// System.Boolean UnityEngine.UIElements.TextElement::<isElided>k__BackingField
	bool ___U3CisElidedU3Ek__BackingField_73;
	// System.Boolean UnityEngine.UIElements.TextElement::m_WasElided
	bool ___m_WasElided_75;
	// System.Boolean UnityEngine.UIElements.TextElement::m_UpdateTextParams
	bool ___m_UpdateTextParams_76;
	// UnityEngine.UIElements.MeshGenerationContextUtils/TextParams UnityEngine.UIElements.TextElement::m_TextParams
	TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F ___m_TextParams_77;
	// System.Int32 UnityEngine.UIElements.TextElement::m_PreviousTextParamsHashCode
	int32_t ___m_PreviousTextParamsHashCode_78;
};

struct TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0_StaticFields
{
	// System.String UnityEngine.UIElements.TextElement::ussClassName
	String_t* ___ussClassName_67;
	// System.Int32 UnityEngine.UIElements.TextElement::maxTextVertices
	int32_t ___maxTextVertices_69;
	// System.String UnityEngine.UIElements.TextElement::k_EllipsisText
	String_t* ___k_EllipsisText_74;
};

// AN_Button
struct AN_Button_t0BED92A0FB6814A10E5BC26EB1782674F22BDC59  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean AN_Button::isValve
	bool ___isValve_4;
	// System.Single AN_Button::ValveSpeed
	float ___ValveSpeed_5;
	// System.Boolean AN_Button::isLever
	bool ___isLever_6;
	// System.Boolean AN_Button::Locked
	bool ___Locked_7;
	// AN_DoorScript AN_Button::DoorObject
	AN_DoorScript_t9C44CFCAF508293A346E40E7A6034A66131293AD* ___DoorObject_8;
	// UnityEngine.Transform AN_Button::RampObject
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___RampObject_9;
	// System.Boolean AN_Button::CanOpen
	bool ___CanOpen_10;
	// System.Boolean AN_Button::CanClose
	bool ___CanClose_11;
	// System.Boolean AN_Button::isOpened
	bool ___isOpened_12;
	// System.Boolean AN_Button::xRotation
	bool ___xRotation_13;
	// System.Boolean AN_Button::yPosition
	bool ___yPosition_14;
	// System.Single AN_Button::max
	float ___max_15;
	// System.Single AN_Button::min
	float ___min_16;
	// System.Single AN_Button::speed
	float ___speed_17;
	// System.Boolean AN_Button::valveBool
	bool ___valveBool_18;
	// System.Single AN_Button::current
	float ___current_19;
	// System.Single AN_Button::startYPosition
	float ___startYPosition_20;
	// UnityEngine.Quaternion AN_Button::startQuat
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___startQuat_21;
	// UnityEngine.Quaternion AN_Button::rampQuat
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rampQuat_22;
	// UnityEngine.Animator AN_Button::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_23;
	// System.Single AN_Button::distance
	float ___distance_24;
	// System.Single AN_Button::angleView
	float ___angleView_25;
	// UnityEngine.Vector3 AN_Button::direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_26;
};

// AN_DoorKey
struct AN_DoorKey_tBBB8D9F1AA07AED814F105F6C37654B56E9247B4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean AN_DoorKey::isRedKey
	bool ___isRedKey_4;
	// AN_HeroInteractive AN_DoorKey::hero
	AN_HeroInteractive_tD848319968C7A7C15BB8EB066BE6FF9E5A9B24FB* ___hero_5;
	// System.Single AN_DoorKey::distance
	float ___distance_6;
	// System.Single AN_DoorKey::angleView
	float ___angleView_7;
	// UnityEngine.Vector3 AN_DoorKey::direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_8;
};

// AN_DoorScript
struct AN_DoorScript_t9C44CFCAF508293A346E40E7A6034A66131293AD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean AN_DoorScript::Locked
	bool ___Locked_4;
	// System.Boolean AN_DoorScript::Remote
	bool ___Remote_5;
	// System.Boolean AN_DoorScript::CanOpen
	bool ___CanOpen_6;
	// System.Boolean AN_DoorScript::CanClose
	bool ___CanClose_7;
	// System.Boolean AN_DoorScript::RedLocked
	bool ___RedLocked_8;
	// System.Boolean AN_DoorScript::BlueLocked
	bool ___BlueLocked_9;
	// AN_HeroInteractive AN_DoorScript::HeroInteractive
	AN_HeroInteractive_tD848319968C7A7C15BB8EB066BE6FF9E5A9B24FB* ___HeroInteractive_10;
	// System.Boolean AN_DoorScript::isOpened
	bool ___isOpened_11;
	// System.Single AN_DoorScript::OpenSpeed
	float ___OpenSpeed_12;
	// System.Single AN_DoorScript::distance
	float ___distance_13;
	// System.Single AN_DoorScript::angleView
	float ___angleView_14;
	// UnityEngine.Vector3 AN_DoorScript::direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_15;
	// UnityEngine.Rigidbody AN_DoorScript::rbDoor
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rbDoor_16;
	// UnityEngine.HingeJoint AN_DoorScript::hinge
	HingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7* ___hinge_17;
	// UnityEngine.JointLimits AN_DoorScript::hingeLim
	JointLimits_tB79BCEF381B77F069150A1A961C05DD9838B998A ___hingeLim_18;
	// System.Single AN_DoorScript::currentLim
	float ___currentLim_19;
};

// AN_HeroController
struct AN_HeroController_tDB7EFDBEF61E59C8B7E73AD70746A80CC1E37689  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single AN_HeroController::MoveSpeed
	float ___MoveSpeed_4;
	// System.Single AN_HeroController::JumpForce
	float ___JumpForce_5;
	// System.Single AN_HeroController::Sensitivity
	float ___Sensitivity_6;
	// System.Boolean AN_HeroController::jumpFlag
	bool ___jumpFlag_7;
	// UnityEngine.CharacterController AN_HeroController::character
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___character_8;
	// UnityEngine.Rigidbody AN_HeroController::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_9;
	// UnityEngine.Vector3 AN_HeroController::moveVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___moveVector_10;
	// UnityEngine.Transform AN_HeroController::Cam
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Cam_11;
	// System.Single AN_HeroController::yRotation
	float ___yRotation_12;
};

// AN_HeroInteractive
struct AN_HeroInteractive_tD848319968C7A7C15BB8EB066BE6FF9E5A9B24FB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean AN_HeroInteractive::RedKey
	bool ___RedKey_4;
	// System.Boolean AN_HeroInteractive::BlueKey
	bool ___BlueKey_5;
	// UnityEngine.Transform AN_HeroInteractive::GoalPosition
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___GoalPosition_6;
};

// AN_PlugScript
struct AN_PlugScript_t8D8A1D3C001915E36C7A555E00D78119BF8A85A0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean AN_PlugScript::OneTime
	bool ___OneTime_4;
	// UnityEngine.Transform AN_PlugScript::HeroHandsPosition
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___HeroHandsPosition_5;
	// UnityEngine.Collider AN_PlugScript::Socket
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___Socket_6;
	// AN_DoorScript AN_PlugScript::DoorObject
	AN_DoorScript_t9C44CFCAF508293A346E40E7A6034A66131293AD* ___DoorObject_7;
	// System.Single AN_PlugScript::distance
	float ___distance_8;
	// System.Single AN_PlugScript::angleView
	float ___angleView_9;
	// UnityEngine.Vector3 AN_PlugScript::direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_10;
	// System.Boolean AN_PlugScript::follow
	bool ___follow_11;
	// System.Boolean AN_PlugScript::isConnected
	bool ___isConnected_12;
	// System.Boolean AN_PlugScript::followFlag
	bool ___followFlag_13;
	// System.Boolean AN_PlugScript::youCan
	bool ___youCan_14;
	// UnityEngine.Rigidbody AN_PlugScript::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_15;
};

// UnityEngine.UIElements.Button
struct Button_t8EC3B431665F84C0B637C11B0EA29236828646C2  : public TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0
{
	// UnityEngine.UIElements.Clickable UnityEngine.UIElements.Button::m_Clickable
	Clickable_tED3E313565F64BDF5DA9D3FE0FEFFD0E17E53834* ___m_Clickable_80;
};

struct Button_t8EC3B431665F84C0B637C11B0EA29236828646C2_StaticFields
{
	// System.String UnityEngine.UIElements.Button::ussClassName
	String_t* ___ussClassName_79;
	// System.String UnityEngine.UIElements.Button::NonEmptyString
	String_t* ___NonEmptyString_81;
};

// CameraWalker
struct CameraWalker_t04284262D4EF568956C5F39D01E9A206703620BC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject CameraWalker::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_4;
	// UnityEngine.Vector3 CameraWalker::offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset_5;
};

// DestroyWithChance
struct DestroyWithChance_t635D2605C78F0993387EA0E2BD3A67934C1F57B3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single DestroyWithChance::ChanceOfStaying
	float ___ChanceOfStaying_4;
};

// DoorController
struct DoorController_tF2F99340EB03FDC2F2F1CDC7C67770C13D62849A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject DoorController::rump
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rump_4;
	// UnityEngine.GameObject DoorController::gate
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gate_5;
	// System.Boolean DoorController::isOpened
	bool ___isOpened_6;
	// System.Int32 DoorController::i
	int32_t ___i_7;
};

// DoorRamp
struct DoorRamp_t69CB6A72DCFD3F080BF78F327C54BA7F6EF37BC4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator DoorRamp::<animator>k__BackingField
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___U3CanimatorU3Ek__BackingField_4;
};

// EndGame
struct EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UIElements.Label EndGame::label
	Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* ___label_4;
	// UnityEngine.UIElements.Button EndGame::restartButton
	Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* ___restartButton_5;
	// UnityEngine.UIElements.Button EndGame::exitButton
	Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* ___exitButton_6;
};

// InputManager
struct InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// InputManager/StartTouchEvent InputManager::OnStartTouch
	StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* ___OnStartTouch_4;
	// InputManager/EndTouchEvent InputManager::OnEndTouch
	EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* ___OnEndTouch_5;
	// Touch InputManager::touchContorls
	Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* ___touchContorls_6;
};

// UnityEngine.UIElements.Label
struct Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70  : public TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0
{
};

struct Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70_StaticFields
{
	// System.String UnityEngine.UIElements.Label::ussClassName
	String_t* ___ussClassName_79;
};

// OpenScreenOnFinish
struct OpenScreenOnFinish_tC67193BCB26A36188FF2367A6F203304495DDF68  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject OpenScreenOnFinish::screen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___screen_4;
	// EndGame OpenScreenOnFinish::endGame
	EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* ___endGame_5;
};

// PlayerMove
struct PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PlayerMove::moveSpeed
	float ___moveSpeed_4;
	// UnityEngine.GameObject PlayerMove::screen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___screen_5;
	// EndGame PlayerMove::endGame
	EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* ___endGame_6;
	// UnityEngine.Rigidbody PlayerMove::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_7;
};

// Road
struct Road_t361F14BED654C37F9762713439B45E48FAF8778F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Road::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_4;
};

// ShootBall
struct ShootBall_t692CDFD1501143404C9BEF465255407E6ADC78B0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ShootBall::moveSpeed
	float ___moveSpeed_4;
	// UnityEngine.MeshRenderer ShootBall::meshRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___meshRenderer_5;
	// UnityEngine.ParticleSystem ShootBall::explosion
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___explosion_6;
	// System.Boolean ShootBall::isStopped
	bool ___isStopped_7;
};

// ShootControl
struct ShootControl_t31618C05DC02BC9743209AA5AA14248C2EB354CD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ShootControl::shootPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shootPrefab_4;
	// System.Single ShootControl::minScale
	float ___minScale_5;
	// UnityEngine.GameObject ShootControl::screen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___screen_6;
	// EndGame ShootControl::endGame
	EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* ___endGame_7;
	// System.Single ShootControl::multiplyScale
	float ___multiplyScale_8;
	// InputManager ShootControl::inputManager
	InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* ___inputManager_9;
};

// Tree
struct Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material Tree::hitMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___hitMaterial_4;
	// UnityEngine.ParticleSystem Tree::explosionPrefab
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___explosionPrefab_5;
	// UnityEngine.MeshRenderer Tree::meshRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___meshRenderer_6;
	// UnityEngine.ParticleSystem Tree::explosion
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___explosion_7;
	// System.Boolean Tree::<isInTriggerArea>k__BackingField
	bool ___U3CisInTriggerAreaU3Ek__BackingField_8;
	// System.Boolean Tree::isEntered
	bool ___isEntered_9;
};

// UnityEngine.UIElements.UIDocument
struct UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 UnityEngine.UIElements.UIDocument::m_UIDocumentCreationIndex
	int32_t ___m_UIDocumentCreationIndex_8;
	// UnityEngine.UIElements.PanelSettings UnityEngine.UIElements.UIDocument::m_PanelSettings
	PanelSettings_t0621207D5DD3BB89DB587440E8F9E07234283DEC* ___m_PanelSettings_9;
	// UnityEngine.UIElements.PanelSettings UnityEngine.UIElements.UIDocument::m_PreviousPanelSettings
	PanelSettings_t0621207D5DD3BB89DB587440E8F9E07234283DEC* ___m_PreviousPanelSettings_10;
	// UnityEngine.UIElements.UIDocument UnityEngine.UIElements.UIDocument::m_ParentUI
	UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77* ___m_ParentUI_11;
	// UnityEngine.UIElements.UIDocumentList UnityEngine.UIElements.UIDocument::m_ChildrenContent
	UIDocumentList_tA2A8305DE916298E4C586EC8235085560914E7C3* ___m_ChildrenContent_12;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.UIDocument> UnityEngine.UIElements.UIDocument::m_ChildrenContentCopy
	List_1_t74EC90C5F42E1A99F29BC6A7FF27FD27FCF98344* ___m_ChildrenContentCopy_13;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.UIDocument::sourceAsset
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___sourceAsset_14;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIDocument::m_RootVisualElement
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_RootVisualElement_15;
	// System.Int32 UnityEngine.UIElements.UIDocument::m_FirstChildInsertIndex
	int32_t ___m_FirstChildInsertIndex_16;
	// System.Single UnityEngine.UIElements.UIDocument::m_SortingOrder
	float ___m_SortingOrder_17;
};

struct UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_StaticFields
{
	// System.Int32 UnityEngine.UIElements.UIDocument::s_CurrentUIDocumentCounter
	int32_t ___s_CurrentUIDocumentCounter_7;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.UIElements.UQueryExtensions::Q<System.Object>(UnityEngine.UIElements.VisualElement,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UQueryExtensions_Q_TisRuntimeObject_mE41C425481646FE357E4650A7CB20F7C3F2CCA40_gshared (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___e0, String_t* ___name1, String_t* ___className2, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean AN_Button::NearView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AN_Button_NearView_mC18290C4FD948BF8BB88F9E8D836D89B7F3690D8 (AN_Button_t0BED92A0FB6814A10E5BC26EB1782674F22BDC59* __this, const RuntimeMethod* method) ;
// System.Void AN_DoorScript::Action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AN_DoorScript_Action_m448059D1F45466AF94698B6EEC09CDC57A84421A (AN_DoorScript_t9C44CFCAF508293A346E40E7A6034A66131293AD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<AN_HeroInteractive>()
inline AN_HeroInteractive_tD848319968C7A7C15BB8EB066BE6FF9E5A9B24FB* Object_FindObjectOfType_TisAN_HeroInteractive_tD848319968C7A7C15BB8EB066BE6FF9E5A9B24FB_mE9EE66E8EC4E18549D9F0DA22DEF2503E1BC406F (const RuntimeMethod* method)
{
	return ((  AN_HeroInteractive_tD848319968C7A7C15BB8EB066BE6FF9E5A9B24FB* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Boolean AN_DoorKey::NearView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AN_DoorKey_NearView_mAF1A5A839427D0034D219CBF6394DDFB777C250B (AN_DoorKey_tBBB8D9F1AA07AED814F105F6C37654B56E9247B4* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.HingeJoint>()
inline HingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7* Component_GetComponent_TisHingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7_mD226E906030A0E16CE9EEDAAA902B0CD7CA4B45F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  HingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean AN_DoorScript::NearView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AN_DoorScript_NearView_m4E1466D0987580111327318FA954DF185D859076 (AN_DoorScript_t9C44CFCAF508293A346E40E7A6034A66131293AD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddRelativeTorque(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddRelativeTorque_m8A4883737B7F8BDC0B25144986F74C4B9F789311 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___torque0, const RuntimeMethod* method) ;
// System.Void UnityEngine.JointLimits::set_max(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointLimits_set_max_m192F8B77417D548BF0162E651049DB1C4C1D81A0 (JointLimits_tB79BCEF381B77F069150A1A961C05DD9838B998A* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.JointLimits::set_min(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointLimits_set_min_m6DCC6F92E715577794E36CD524989509D2A001AF (JointLimits_tB79BCEF381B77F069150A1A961C05DD9838B998A* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.HingeJoint::set_limits(UnityEngine.JointLimits)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HingeJoint_set_limits_m5B9B968EF88FFC9ABA1777FFEFA13433F9BE08D8 (HingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7* __this, JointLimits_tB79BCEF381B77F069150A1A961C05DD9838B998A ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
inline CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Transform>()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7 (bool ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void AN_PlugScript::Interaction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AN_PlugScript_Interaction_m29502A6F989E33F8471BF724F3BF056F2AB4CA70 (AN_PlugScript_t8D8A1D3C001915E36C7A555E00D78119BF8A85A0* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean AN_PlugScript::NearView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AN_PlugScript_NearView_mA3877625C17E7C76486F0082D9DE803D582AF369 (AN_PlugScript_t8D8A1D3C001915E36C7A555E00D78119BF8A85A0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_drag(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_angularDrag(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularDrag_m4193B04EEFCA831DB99E29E98F778957557F130C (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddExplosionForce(System.Single,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddExplosionForce_mD36F7D864F32F22DA1783D20F6E9563A9C51DFA1 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___explosionForce0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___explosionPosition1, float ___explosionRadius2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator DoorController::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DoorController_Open_mCE3D1DE4BDC1DA40ECE48C75AD6F1E72FE2F325D (DoorController_tF2F99340EB03FDC2F2F1CDC7C67770C13D62849A* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void DoorController/<Open>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenU3Ed__5__ctor_m95C93172DC5C8560CAD99A7D4FD3294D1A6072EA (U3COpenU3Ed__5_t31F1DBA7BBF1313EC6E3EA810D86E021DE670145* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) ;
// System.Void DoorController/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m732B4EB24EE65400183E72A97792B27D46E41125 (U3CU3Ec__DisplayClass5_0_tA1FDE93D31E3582D86EAE8A82D2EBB5C4DB0A07F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<DoorRamp>()
inline DoorRamp_t69CB6A72DCFD3F080BF78F327C54BA7F6EF37BC4* GameObject_GetComponent_TisDoorRamp_t69CB6A72DCFD3F080BF78F327C54BA7F6EF37BC4_m26C39A7970F0E3C42DB1F43469734DE7ACCAAABA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  DoorRamp_t69CB6A72DCFD3F080BF78F327C54BA7F6EF37BC4* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void DoorRamp::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorRamp_Open_mB359D537C30004D931040489D6ADBF987C09293D (DoorRamp_t69CB6A72DCFD3F080BF78F327C54BA7F6EF37BC4* __this, const RuntimeMethod* method) ;
// UnityEngine.Animator DoorRamp::get_animator()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* DoorRamp_get_animator_m70F202589753A0BD86B811E93BD95DD07009EA7F_inline (DoorRamp_t69CB6A72DCFD3F080BF78F327C54BA7F6EF37BC4* __this, const RuntimeMethod* method) ;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___predicate0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void DoorRamp::set_animator(UnityEngine.Animator)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DoorRamp_set_animator_m665DFA957ABF35FB7B63560439B01426D0D8DD53_inline (DoorRamp_t69CB6A72DCFD3F080BF78F327C54BA7F6EF37BC4* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<EndGame>()
inline EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* GameObject_GetComponent_TisEndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06_m1A0765C079AA01F0281C0BE6994AE2BD57AF92EC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void EndGame::OpenEndScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndGame_OpenEndScreen_m61163D812C0BD53645BE897095D6E2C7B134A8AA (EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UIElements.UIDocument>()
inline UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77* Component_GetComponent_TisUIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_m50669A283DE0DEFD0FFB1F42B965E6FCD460901F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIDocument::get_rootVisualElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* UIDocument_get_rootVisualElement_mA6214AAAA8DE0A4DE36AA35F9A98CF8065ED51E1 (UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77* __this, const RuntimeMethod* method) ;
// T UnityEngine.UIElements.UQueryExtensions::Q<UnityEngine.UIElements.Button>(UnityEngine.UIElements.VisualElement,System.String,System.String)
inline Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___e0, String_t* ___name1, String_t* ___className2, const RuntimeMethod* method)
{
	return ((  Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* (*) (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, String_t*, String_t*, const RuntimeMethod*))UQueryExtensions_Q_TisRuntimeObject_mE41C425481646FE357E4650A7CB20F7C3F2CCA40_gshared)(___e0, ___name1, ___className2, method);
}
// T UnityEngine.UIElements.UQueryExtensions::Q<UnityEngine.UIElements.Label>(UnityEngine.UIElements.VisualElement,System.String,System.String)
inline Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___e0, String_t* ___name1, String_t* ___className2, const RuntimeMethod* method)
{
	return ((  Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* (*) (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, String_t*, String_t*, const RuntimeMethod*))UQueryExtensions_Q_TisRuntimeObject_mE41C425481646FE357E4650A7CB20F7C3F2CCA40_gshared)(___e0, ___name1, ___className2, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Button::add_clicked(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button_add_clicked_m8F3895E73CAC223492F25142874FFF38A1830C81 (Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void Touch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Touch__ctor_mF116F191559A62D3742652AB8482AF28825D95DD (Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* __this, const RuntimeMethod* method) ;
// System.Void Touch::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Touch_Enable_m304005E62C39EB4DF1ABB8EA5DFCE37F3AAA4853 (Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* __this, const RuntimeMethod* method) ;
// System.Void Touch::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Touch_Disable_m21C4D663CDC4528B21E57B0CF158A00A3A9690C1 (Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* __this, const RuntimeMethod* method) ;
// Touch/TouchControlActions Touch::get_TouchControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82 Touch_get_TouchControl_m802385639A284923FF58B200E94957C6E67ED94A (Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction Touch/TouchControlActions::get_TouchPress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* TouchControlActions_get_TouchPress_m8403F741C84E27FA873FAD6ECE66FFD226CCFC53 (TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57 (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputAction::add_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Double UnityEngine.InputSystem.InputAction/CallbackContext::get_startTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CallbackContext_get_startTime_m6F0F9C2CF03CDEFFE81F2E54636A465221AFD39B (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
// System.Void InputManager/StartTouchEvent::Invoke(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StartTouchEvent_Invoke_mCE9B4C4042C9AC89B196AC03E7CE3699280033FD_inline (StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* __this, float ___time0, const RuntimeMethod* method) ;
// System.Double UnityEngine.InputSystem.InputAction/CallbackContext::get_duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CallbackContext_get_duration_m1E925BA2636AD5558E1DE54167742BB8D2BB4042 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
// System.Void InputManager/EndTouchEvent::Invoke(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EndTouchEvent_Invoke_m53977F30D5F8C9DEE49BED57417AB0C6C565501C_inline (EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* __this, float ___time0, const RuntimeMethod* method) ;
// System.Void InputManager::StartTouch(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_StartTouch_m6853A6F8AC0A86B520596DCCA033F3234CE24D43 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) ;
// System.Void InputManager::EndTouch(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_EndTouch_mA458D101A33D96B22274145ED36A10A1D0865458 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionAsset::FromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* InputActionAsset_FromJson_m8F7212EB013EF4D853836228D393C0D15BD0433C (String_t* ___json0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionAsset Touch::get_asset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* Touch_get_asset_m48CA30CF84C0D216EF013AD3D23A6089481F0B7F_inline (Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputActionAsset::FindActionMap(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, String_t* ___nameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3 (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, String_t* ___actionNameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) ;
// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::get_bindingMask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 InputActionAsset_get_bindingMask_mD5D2FAC455D221E7BC657DA5E7E4F5402E0B4F6C_inline (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::set_bindingMask(System.Nullable`1<UnityEngine.InputSystem.InputBinding>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_set_bindingMask_mD621370B859495F593CBE28019D84F44922C94A5 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___value0, const RuntimeMethod* method) ;
// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>> UnityEngine.InputSystem.InputActionAsset::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D InputActionAsset_get_devices_m8FF856B2C61E23B7360A9279C10F8A6498C72B9C (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::set_devices(System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_set_devices_m5A513BB841DB76966CD2B39E0E6FA8AFB3EBE38D (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D ___value0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme> UnityEngine.InputSystem.InputActionAsset::get_controlSchemes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 InputActionAsset_get_controlSchemes_m257644C546BD6221DD62251F6C7C2A2CC11BD099 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputActionAsset::Contains(UnityEngine.InputSystem.InputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputActionAsset_Contains_mB3B9FBCE562FB5229F9387F14AEC22083FC6CDDE (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___action0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> UnityEngine.InputSystem.InputActionAsset::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputActionAsset_GetEnumerator_m39998F5B21D08AAE328E63B3FDCC0F414620A8A9 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> Touch::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Touch_GetEnumerator_m53D9DE21E439D3FCD82E7BDF3DCB5721695C4B17 (Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_Enable_m5102429EE832C7891F73B6979612702CECA8F431 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_Disable_m62FD8B11BB4EDF6AADAB2BDDC699242D09BAF99C (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::get_bindings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputActionAsset_get_bindings_mB045318575B5D7B13A92B973CABB40E0FEC70FB9 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionAsset::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionAsset_FindAction_m50D07EAFAA8628B9793E7BBEEB2E89C2A9C45C00 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, String_t* ___actionNameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.InputActionAsset::FindBinding(UnityEngine.InputSystem.InputBinding,UnityEngine.InputSystem.InputAction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputActionAsset_FindBinding_mB5B36B9DDFAABFD4B528B891653B1B5B895DBDC5 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___mask0, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD** ___action1, const RuntimeMethod* method) ;
// System.Void Touch/TouchControlActions::.ctor(Touch)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TouchControlActions__ctor_m3DBBF4BEB5A6F1BDB8BDAC54B92F21B9D515C21E_inline (TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82* __this, Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* ___wrapper0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction Touch/TouchControlActions::get_TouchInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* TouchControlActions_get_TouchInput_mD438A943C8D04F3342516907BF77D671C935A700 (TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction Touch/TouchControlActions::get_TouchPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* TouchControlActions_get_TouchPosition_m3DC10D48CBF82D8BBEFD0CB8AD62CFC031248B3A (TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionMap Touch/TouchControlActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* TouchControlActions_Get_mD0A68A8E78323EC8705B8981A8170A68868AA5C6 (TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionMap::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Enable_mAB23F0C4179D27C375F9FA335898B02E336CA4F6 (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Void Touch/TouchControlActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchControlActions_Enable_mB1D719E37B984A481CF4CDEF6186F05C4B35D820 (TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionMap::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Disable_m987468348648610F8B84D4F481592FF37AF5445C (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Void Touch/TouchControlActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchControlActions_Disable_m50A9ADE4A72A29B44926F4DA8D40E8CBDF46178B (TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputActionMap::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputActionMap_get_enabled_mB89FAA20F1EA1884A28829B3E350822D7456E888 (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Boolean Touch/TouchControlActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TouchControlActions_get_enabled_m19FF65DB0669D8523EA4E7DEED768593ECC75DAC (TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void Touch/TouchControlActions::SetCallbacks(Touch/ITouchControlActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchControlActions_SetCallbacks_m5203A41D5DCF937089EE7E9E4D8E1368A14C163D (TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* Component_GetComponentInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m7FE20EC51F5F0CD242B94967CCF5B8E32BA9FC62 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ShootBall::DestroyBall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShootBall_DestroyBall_mF591ACC6365ACD8193DC892B721620C6FDEBC842 (ShootBall_t692CDFD1501143404C9BEF465255407E6ADC78B0* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Tree>()
inline Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F* Component_GetComponent_TisTree_t523ABF112CF15FC9FECDF55ED678B31919BF162F_m91E2DB2750104A2DB4336B2861FF74DFF33CF34A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Tree::set_isInTriggerArea(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Tree_set_isInTriggerArea_mD2DB1B29A90F3BA45CCC611619397157CB0118FA_inline (Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void ShootBall/<DestroyBall>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyBallU3Ed__8__ctor_m64519C0CF97056289752DFB12437D11DB325D0F9 (U3CDestroyBallU3Ed__8_tFFD2607F8773023EC2B7F4A31ABB26113445CC0E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParticleSystem_get_isPlaying_mC5170DA3C904670B88200C8DA1E0F8FC1BC7C42B (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<InputManager>()
inline InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* Object_FindObjectOfType_TisInputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677_mD89593A49808DCACB240D17149BA7ED1E15E3247 (const RuntimeMethod* method)
{
	return ((  InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void InputManager/EndTouchEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndTouchEvent__ctor_m1DE02D701B772BB6E35643680391BF5200DDFAD5 (EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void InputManager::add_OnEndTouch(InputManager/EndTouchEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_add_OnEndTouch_m3B9DF6BBCE4F060F29783F125C76B50460F43C5B (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* ___value0, const RuntimeMethod* method) ;
// System.Void InputManager::remove_OnEndTouch(InputManager/EndTouchEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_remove_OnEndTouch_m4DE9834CC8E50C1FCA27C63C9C4D05B74A5F3CBE (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void Tree::AddExplosionPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree_AddExplosionPrefab_m40BC2C26C6B8F643B5D2EDAEDE87BEAC669894BE (Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F* __this, const RuntimeMethod* method) ;
// System.Boolean Tree::get_isInTriggerArea()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tree_get_isInTriggerArea_m0093DA459A5E9D28FBB1003AB95B6FB2029B57FA_inline (Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Tree::DestroyAfterHit(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Tree_DestroyAfterHit_m8DA3EE08124F6CE1CD3AC530FFF2FF5D436FBC33 (Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, const RuntimeMethod* method) ;
// System.Void Tree/<DestroyAfterHit>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyAfterHitU3Ed__11__ctor_m0E9FEBB875F14741873A733644AE25CD50A81279 (U3CDestroyAfterHitU3Ed__11_t0519306A8AAD55D87E3E1123D69CBCD1B0D990A0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.ParticleSystem>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// System.Void Tree/<DestroyTree>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyTreeU3Ed__13__ctor_m6DFB4958A7F0A9C584E0FA7749FE10591F1024CD (U3CDestroyTreeU3Ed__13_t3F1756E246E0F84CA97EECA5DAEC9FBE78C141EE* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Tree::DestroyTree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Tree_DestroyTree_mFA81F3AB33A483421A7CDF04595C66A9B666CC14 (Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
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
// System.Void AN_Button::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AN_Button_Start_mC8D2C9C1153CEE49CDD731FD1BAE95FB562F5740 (AN_Button_t0BED92A0FB6814A10E5BC26EB1782674F22BDC59* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___anim_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_23), (void*)L_0);
		// startYPosition = RampObject.position.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___RampObject_9;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___y_3;
		__this->___startYPosition_20 = L_3;
		// startQuat = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_4, NULL);
		__this->___startQuat_21 = L_5;
		// rampQuat = RampObject.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___RampObject_9;
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_6, NULL);
		__this->___rampQuat_22 = L_7;
		// }
		return;
	}
}
// System.Void AN_Button::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AN_Button_Update_mC7CEF44399EB7DB09AB0E905422CAA23B7DF0A8C (AN_Button_t0BED92A0FB6814A10E5BC26EB1782674F22BDC59* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral106320719F2ABDB0A61EF80E817C1769A6D2921A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58E1105F60162B9A65B9D212EE0EFFEAF3DFB2EA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Locked)
		bool L_0 = __this->___Locked_7;
		if (L_0)
		{
			goto IL_0292;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.E) && !isValve && DoorObject != null && DoorObject.Remote && NearView()) // 1.lever and 2.button
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)101), NULL);
		if (!L_1)
		{
			goto IL_0097;
		}
	}
	{
		bool L_2 = __this->___isValve_4;
		if (L_2)
		{
			goto IL_0097;
		}
	}
	{
		AN_DoorScript_t9C44CFCAF508293A346E40E7A6034A66131293AD* L_3 = __this->___DoorObject_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0097;
		}
	}
	{
		AN_DoorScript_t9C44CFCAF508293A346E40E7A6034A66131293AD* L_5 = __this->___DoorObject_8;
		NullCheck(L_5);
		bool L_6 = L_5->___Remote_5;
		if (!L_6)
		{
			goto IL_0097;
		}
	}
	{
		bool L_7;
		L_7 = AN_Button_NearView_mC18290C4FD948BF8BB88F9E8D836D89B7F3690D8(__this, NULL);
		if (!L_7)
		{
			goto IL_0097;
		}
	}
	{
		// DoorObject.Action(); // void in door script to open/close
		AN_DoorScript_t9C44CFCAF508293A346E40E7A6034A66131293AD* L_8 = __this->___DoorObject_8;
		NullCheck(L_8);
		AN_DoorScript_Action_m448059D1F45466AF94698B6EEC09CDC57A84421A(L_8, NULL);
		// if (isLever) // animations
		bool L_9 = __this->___isLever_6;
		if (!L_9)
		{
			goto IL_0086;
		}
	}
	{
		// if (DoorObject.isOpened) anim.SetBool("LeverUp", true);
		AN_DoorScript_t9C44CFCAF508293A346E40E7A6034A66131293AD* L_10 = __this->___DoorObject_8;
		NullCheck(L_10);
		bool L_11 = L_10->___isOpened_11;
		if (!L_11)
		{
			goto IL_0074;
		}
	}
	{
		// if (DoorObject.isOpened) anim.SetBool("LeverUp", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_12 = __this->___anim_23;
		NullCheck(L_12);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_12, _stringLiteral106320719F2ABDB0A61EF80E817C1769A6D2921A, (bool)1, NULL);
		return;
	}

IL_0074:
	{
		// else anim.SetBool("LeverUp", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_13 = __this->___anim_23;
		NullCheck(L_13);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_13, _stringLiteral106320719F2ABDB0A61EF80E817C1769A6D2921A, (bool)0, NULL);
		return;
	}

IL_0086:
	{
		// else anim.SetTrigger("ButtonPress");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_14 = __this->___anim_23;
		NullCheck(L_14);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_14, _stringLiteral58E1105F60162B9A65B9D212EE0EFFEAF3DFB2EA, NULL);
		return;
	}

IL_0097:
	{
		// else if (isValve && RampObject != null) // 3.valve
		bool L_15 = __this->___isValve_4;
		if (!L_15)
		{
			goto IL_0292;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___RampObject_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_16, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_17)
		{
			goto IL_0292;
		}
	}
	{
		// if (Input.GetKey(KeyCode.E) && NearView())
		bool L_18;
		L_18 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)101), NULL);
		if (!L_18)
		{
			goto IL_0182;
		}
	}
	{
		bool L_19;
		L_19 = AN_Button_NearView_mC18290C4FD948BF8BB88F9E8D836D89B7F3690D8(__this, NULL);
		if (!L_19)
		{
			goto IL_0182;
		}
	}
	{
		// if (valveBool)
		bool L_20 = __this->___valveBool_18;
		if (!L_20)
		{
			goto IL_01e7;
		}
	}
	{
		// if (!isOpened && CanOpen && current < max) current += speed * Time.deltaTime;
		bool L_21 = __this->___isOpened_12;
		if (L_21)
		{
			goto IL_010c;
		}
	}
	{
		bool L_22 = __this->___CanOpen_10;
		if (!L_22)
		{
			goto IL_010c;
		}
	}
	{
		float L_23 = __this->___current_19;
		float L_24 = __this->___max_15;
		if ((!(((float)L_23) < ((float)L_24))))
		{
			goto IL_010c;
		}
	}
	{
		// if (!isOpened && CanOpen && current < max) current += speed * Time.deltaTime;
		float L_25 = __this->___current_19;
		float L_26 = __this->___speed_17;
		float L_27;
		L_27 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___current_19 = ((float)il2cpp_codegen_add(L_25, ((float)il2cpp_codegen_multiply(L_26, L_27))));
	}

IL_010c:
	{
		// if (isOpened && CanClose && current > min) current -= speed * Time.deltaTime;
		bool L_28 = __this->___isOpened_12;
		if (!L_28)
		{
			goto IL_0143;
		}
	}
	{
		bool L_29 = __this->___CanClose_11;
		if (!L_29)
		{
			goto IL_0143;
		}
	}
	{
		float L_30 = __this->___current_19;
		float L_31 = __this->___min_16;
		if ((!(((float)L_30) > ((float)L_31))))
		{
			goto IL_0143;
		}
	}
	{
		// if (isOpened && CanClose && current > min) current -= speed * Time.deltaTime;
		float L_32 = __this->___current_19;
		float L_33 = __this->___speed_17;
		float L_34;
		L_34 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___current_19 = ((float)il2cpp_codegen_subtract(L_32, ((float)il2cpp_codegen_multiply(L_33, L_34))));
	}

IL_0143:
	{
		// if (current >= max)
		float L_35 = __this->___current_19;
		float L_36 = __this->___max_15;
		if ((!(((float)L_35) >= ((float)L_36))))
		{
			goto IL_0164;
		}
	}
	{
		// isOpened = true;
		__this->___isOpened_12 = (bool)1;
		// valveBool = false;
		__this->___valveBool_18 = (bool)0;
		goto IL_01e7;
	}

IL_0164:
	{
		// else if (current <= min)
		float L_37 = __this->___current_19;
		float L_38 = __this->___min_16;
		if ((!(((float)L_37) <= ((float)L_38))))
		{
			goto IL_01e7;
		}
	}
	{
		// isOpened = false;
		__this->___isOpened_12 = (bool)0;
		// valveBool = false;
		__this->___valveBool_18 = (bool)0;
		goto IL_01e7;
	}

IL_0182:
	{
		// if (!isOpened && current > min) current -= speed * Time.deltaTime;
		bool L_39 = __this->___isOpened_12;
		if (L_39)
		{
			goto IL_01b1;
		}
	}
	{
		float L_40 = __this->___current_19;
		float L_41 = __this->___min_16;
		if ((!(((float)L_40) > ((float)L_41))))
		{
			goto IL_01b1;
		}
	}
	{
		// if (!isOpened && current > min) current -= speed * Time.deltaTime;
		float L_42 = __this->___current_19;
		float L_43 = __this->___speed_17;
		float L_44;
		L_44 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___current_19 = ((float)il2cpp_codegen_subtract(L_42, ((float)il2cpp_codegen_multiply(L_43, L_44))));
	}

IL_01b1:
	{
		// if (isOpened && current < max) current += speed * Time.deltaTime;
		bool L_45 = __this->___isOpened_12;
		if (!L_45)
		{
			goto IL_01e0;
		}
	}
	{
		float L_46 = __this->___current_19;
		float L_47 = __this->___max_15;
		if ((!(((float)L_46) < ((float)L_47))))
		{
			goto IL_01e0;
		}
	}
	{
		// if (isOpened && current < max) current += speed * Time.deltaTime;
		float L_48 = __this->___current_19;
		float L_49 = __this->___speed_17;
		float L_50;
		L_50 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___current_19 = ((float)il2cpp_codegen_add(L_48, ((float)il2cpp_codegen_multiply(L_49, L_50))));
	}

IL_01e0:
	{
		// valveBool = true;
		__this->___valveBool_18 = (bool)1;
	}

IL_01e7:
	{
		// transform.rotation = startQuat * Quaternion.Euler(0f, 0f, current * ValveSpeed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = __this->___startQuat_21;
		float L_53 = __this->___current_19;
		float L_54 = __this->___ValveSpeed_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_55;
		L_55 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), ((float)il2cpp_codegen_multiply(L_53, L_54)), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56;
		L_56 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_52, L_55, NULL);
		NullCheck(L_51);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_51, L_56, NULL);
		// if (xRotation) RampObject.rotation = rampQuat * Quaternion.Euler(current, 0f, 0f); // I have a doubt in working correctly
		bool L_57 = __this->___xRotation_13;
		if (!L_57)
		{
			goto IL_024d;
		}
	}
	{
		// if (xRotation) RampObject.rotation = rampQuat * Quaternion.Euler(current, 0f, 0f); // I have a doubt in working correctly
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58 = __this->___RampObject_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_59 = __this->___rampQuat_22;
		float L_60 = __this->___current_19;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_61;
		L_61 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_60, (0.0f), (0.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62;
		L_62 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_59, L_61, NULL);
		NullCheck(L_58);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_58, L_62, NULL);
		return;
	}

IL_024d:
	{
		// else if (yPosition) RampObject.position = new Vector3(RampObject.position.x, startYPosition + current, RampObject.position.z);
		bool L_63 = __this->___yPosition_14;
		if (!L_63)
		{
			goto IL_0292;
		}
	}
	{
		// else if (yPosition) RampObject.position = new Vector3(RampObject.position.x, startYPosition + current, RampObject.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64 = __this->___RampObject_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65 = __this->___RampObject_9;
		NullCheck(L_65);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_65, NULL);
		float L_67 = L_66.___x_2;
		float L_68 = __this->___startYPosition_20;
		float L_69 = __this->___current_19;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70 = __this->___RampObject_9;
		NullCheck(L_70);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_70, NULL);
		float L_72 = L_71.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		memset((&L_73), 0, sizeof(L_73));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_73), L_67, ((float)il2cpp_codegen_add(L_68, L_69)), L_72, /*hidden argument*/NULL);
		NullCheck(L_64);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_64, L_73, NULL);
	}

IL_0292:
	{
		// }
		return;
	}
}
// System.Boolean AN_Button::NearView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AN_Button_NearView_mC18290C4FD948BF8BB88F9E8D836D89B7F3690D8 (AN_Button_t0BED92A0FB6814A10E5BC26EB1782674F22BDC59* __this, const RuntimeMethod* method) 
{
	{
		// distance = Vector3.Distance(transform.position, Camera.main.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5;
		L_5 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_1, L_4, NULL);
		__this->___distance_24 = L_5;
		// direction = transform.position - Camera.main.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
		L_8 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_7, L_10, NULL);
		__this->___direction_26 = L_11;
		// angleView = Vector3.Angle(Camera.main.transform.forward, direction);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12;
		L_12 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___direction_26;
		float L_16;
		L_16 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_14, L_15, NULL);
		__this->___angleView_25 = L_16;
		// if (angleView < 45f && distance < 2f) return true;
		float L_17 = __this->___angleView_25;
		if ((!(((float)L_17) < ((float)(45.0f)))))
		{
			goto IL_0086;
		}
	}
	{
		float L_18 = __this->___distance_24;
		if ((!(((float)L_18) < ((float)(2.0f)))))
		{
			goto IL_0086;
		}
	}
	{
		// if (angleView < 45f && distance < 2f) return true;
		return (bool)1;
	}

IL_0086:
	{
		// else return false;
		return (bool)0;
	}
}
// System.Void AN_Button::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AN_Button__ctor_m0CB63EAA98A0F26AD92BB52BC122F302BDDFC34D (AN_Button_t0BED92A0FB6814A10E5BC26EB1782674F22BDC59* __this, const RuntimeMethod* method) 
{
	{
		// public float ValveSpeed = 10f;
		__this->___ValveSpeed_5 = (10.0f);
		// public bool CanOpen = true;
		__this->___CanOpen_10 = (bool)1;
		// public bool CanClose = true;
		__this->___CanClose_11 = (bool)1;
		// public bool xRotation = true;
		__this->___xRotation_13 = (bool)1;
		// public float max = 90f, min = 0f, speed = 5f;
		__this->___max_15 = (90.0f);
		// public float max = 90f, min = 0f, speed = 5f;
		__this->___speed_17 = (5.0f);
		// bool valveBool = true;
		__this->___valveBool_18 = (bool)1;
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
// System.Void AN_DoorKey::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AN_DoorKey_Start_mF52A400E9621BBF03594DB537B2C69E853A97C59 (AN_DoorKey_tBBB8D9F1AA07AED814F105F6C37654B56E9247B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisAN_HeroInteractive_tD848319968C7A7C15BB8EB066BE6FF9E5A9B24FB_mE9EE66E8EC4E18549D9F0DA22DEF2503E1BC406F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hero = FindObjectOfType<AN_HeroInteractive>(); // key will get up and it will saved in "inventary"
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		AN_HeroInteractive_tD848319968C7A7C15BB8EB066BE6FF9E5A9B24FB* L_0;
		L_0 = Object_FindObjectOfType_TisAN_HeroInteractive_tD848319968C7A7C15BB8EB066BE6FF9E5A9B24FB_mE9EE66E8EC4E18549D9F0DA22DEF2503E1BC406F(Object_FindObjectOfType_TisAN_HeroInteractive_tD848319968C7A7C15BB8EB066BE6FF9E5A9B24FB_mE9EE66E8EC4E18549D9F0DA22DEF2503E1BC406F_RuntimeMethod_var);
		__this->___hero_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hero_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void AN_DoorKey::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AN_DoorKey_Update_m6D7B3715BD317A441661E91EB1675AA9D8C2E15F (AN_DoorKey_tBBB8D9F1AA07AED814F105F6C37654B56E9247B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( NearView() && Input.GetKeyDown(KeyCode.E) )
		bool L_0;
		L_0 = AN_DoorKey_NearView_mAF1A5A839427D0034D219CBF6394DDFB777C250B(__this, NULL);
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)101), NULL);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		// if (isRedKey) hero.RedKey = true;
		bool L_2 = __this->___isRedKey_4;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// if (isRedKey) hero.RedKey = true;
		AN_HeroInteractive_tD848319968C7A7C15BB8EB066BE6FF9E5A9B24FB* L_3 = __this->___hero_5;
		NullCheck(L_3);
		L_3->___RedKey_4 = (bool)1;
		goto IL_0033;
	}

IL_0027:
	{
		// else hero.BlueKey = true;
		AN_HeroInteractive_tD848319968C7A7C15BB8EB066BE6FF9E5A9B24FB* L_4 = __this->___hero_5;
		NullCheck(L_4);
		L_4->___BlueKey_5 = (bool)1;
	}

IL_0033:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Boolean AN_DoorKey::NearView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AN_DoorKey_NearView_mAF1A5A839427D0034D219CBF6394DDFB777C250B (AN_DoorKey_tBBB8D9F1AA07AED814F105F6C37654B56E9247B4* __this, const RuntimeMethod* method) 
{
	{
		// distance = Vector3.Distance(transform.position, Camera.main.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5;
		L_5 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_1, L_4, NULL);
		__this->___distance_6 = L_5;
		// direction = transform.position - Camera.main.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
		L_8 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_7, L_10, NULL);
		__this->___direction_8 = L_11;
		// angleView = Vector3.Angle(Camera.main.transform.forward, direction);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12;
		L_12 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___direction_8;
		float L_16;
		L_16 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_14, L_15, NULL);
		__this->___angleView_7 = L_16;
		// if (distance < 2f) return true; // angleView < 35f &&
		float L_17 = __this->___distance_6;
		if ((!(((float)L_17) < ((float)(2.0f)))))
		{
			goto IL_0079;
		}
	}
	{
		// if (distance < 2f) return true; // angleView < 35f &&
		return (bool)1;
	}

IL_0079:
	{
		// else return false;
		return (bool)0;
	}
}
// System.Void AN_DoorKey::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AN_DoorKey__ctor_mA13CC803180A7BAF4476B747F4BE375BBA996EF9 (AN_DoorKey_tBBB8D9F1AA07AED814F105F6C37654B56E9247B4* __this, const RuntimeMethod* method) 
{
	{
		// public bool isRedKey = true;
		__this->___isRedKey_4 = (bool)1;
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
// System.Void AN_DoorScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AN_DoorScript_Start_mFC964B82514C78B8401F1229B1000A03CBB0211B (AN_DoorScript_t9C44CFCAF508293A346E40E7A6034A66131293AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7_mD226E906030A0E16CE9EEDAAA902B0CD7CA4B45F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisAN_HeroInteractive_tD848319968C7A7C15BB8EB066BE6FF9E5A9B24FB_mE9EE66E8EC4E18549D9F0DA22DEF2503E1BC406F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rbDoor = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rbDoor_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rbDoor_16), (void*)L_0);
		// hinge = GetComponent<HingeJoint>();
		HingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7* L_1;
		L_1 = Component_GetComponent_TisHingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7_mD226E906030A0E16CE9EEDAAA902B0CD7CA4B45F(__this, Component_GetComponent_TisHingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7_mD226E906030A0E16CE9EEDAAA902B0CD7CA4B45F_RuntimeMethod_var);
		__this->___hinge_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hinge_17), (void*)L_1);
		// HeroInteractive = FindObjectOfType<AN_HeroInteractive>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		AN_HeroInteractive_tD848319968C7A7C15BB8EB066BE6FF9E5A9B24FB* L_2;
		L_2 = Object_FindObjectOfType_TisAN_HeroInteractive_tD848319968C7A7C15BB8EB066BE6FF9E5A9B24FB_mE9EE66E8EC4E18549D9F0DA22DEF2503E1BC406F(Object_FindObjectOfType_TisAN_HeroInteractive_tD848319968C7A7C15BB8EB066BE6FF9E5A9B24FB_mE9EE66E8EC4E18549D9F0DA22DEF2503E1BC406F_RuntimeMethod_var);
		__this->___HeroInteractive_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HeroInteractive_10), (void*)L_2);
		// }
		return;
	}
}
// System.Void AN_DoorScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AN_DoorScript_Update_m3B152C8889EF23B47F000C392D3E24FE30684C96 (AN_DoorScript_t9C44CFCAF508293A346E40E7A6034A66131293AD* __this, const RuntimeMethod* method) 
{
	{
		// if ( !Remote && Input.GetKeyDown(KeyCode.E) && NearView() )
		bool L_0 = __this->___Remote_5;
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)101), NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		bool L_2;
		L_2 = AN_DoorScript_NearView_m4E1466D0987580111327318FA954DF185D859076(__this, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// Action();
		AN_DoorScript_Action_m448059D1F45466AF94698B6EEC09CDC57A84421A(__this, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void AN_DoorScript::Action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AN_DoorScript_Action_m448059D1F45466AF94698B6EEC09CDC57A84421A (AN_DoorScript_t9C44CFCAF508293A346E40E7A6034A66131293AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Locked)
		bool L_0 = __this->___Locked_4;
		if (L_0)
		{
			goto IL_00e7;
		}
	}
	{
		// if (HeroInteractive != null && RedLocked && HeroInteractive.RedKey)
		AN_HeroInteractive_tD848319968C7A7C15BB8EB066BE6FF9E5A9B24FB* L_1 = __this->___HeroInteractive_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		bool L_3 = __this->___RedLocked_8;
		if (!L_3)
		{
			goto IL_0043;
		}
	}
	{
		AN_HeroInteractive_tD848319968C7A7C15BB8EB066BE6FF9E5A9B24FB* L_4 = __this->___HeroInteractive_10;
		NullCheck(L_4);
		bool L_5 = L_4->___RedKey_4;
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		// RedLocked = false;
		__this->___RedLocked_8 = (bool)0;
		// HeroInteractive.RedKey = false;
		AN_HeroInteractive_tD848319968C7A7C15BB8EB066BE6FF9E5A9B24FB* L_6 = __this->___HeroInteractive_10;
		NullCheck(L_6);
		L_6->___RedKey_4 = (bool)0;
		goto IL_0079;
	}

IL_0043:
	{
		// else if (HeroInteractive != null && BlueLocked && HeroInteractive.BlueKey)
		AN_HeroInteractive_tD848319968C7A7C15BB8EB066BE6FF9E5A9B24FB* L_7 = __this->___HeroInteractive_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0079;
		}
	}
	{
		bool L_9 = __this->___BlueLocked_9;
		if (!L_9)
		{
			goto IL_0079;
		}
	}
	{
		AN_HeroInteractive_tD848319968C7A7C15BB8EB066BE6FF9E5A9B24FB* L_10 = __this->___HeroInteractive_10;
		NullCheck(L_10);
		bool L_11 = L_10->___BlueKey_5;
		if (!L_11)
		{
			goto IL_0079;
		}
	}
	{
		// BlueLocked = false;
		__this->___BlueLocked_9 = (bool)0;
		// HeroInteractive.BlueKey = false;
		AN_HeroInteractive_tD848319968C7A7C15BB8EB066BE6FF9E5A9B24FB* L_12 = __this->___HeroInteractive_10;
		NullCheck(L_12);
		L_12->___BlueKey_5 = (bool)0;
	}

IL_0079:
	{
		// if (isOpened && CanClose && !RedLocked && !BlueLocked)
		bool L_13 = __this->___isOpened_11;
		if (!L_13)
		{
			goto IL_00a1;
		}
	}
	{
		bool L_14 = __this->___CanClose_7;
		if (!L_14)
		{
			goto IL_00a1;
		}
	}
	{
		bool L_15 = __this->___RedLocked_8;
		if (L_15)
		{
			goto IL_00a1;
		}
	}
	{
		bool L_16 = __this->___BlueLocked_9;
		if (L_16)
		{
			goto IL_00a1;
		}
	}
	{
		// isOpened = false;
		__this->___isOpened_11 = (bool)0;
		return;
	}

IL_00a1:
	{
		// else if (!isOpened && CanOpen && !RedLocked && !BlueLocked)
		bool L_17 = __this->___isOpened_11;
		if (L_17)
		{
			goto IL_00e7;
		}
	}
	{
		bool L_18 = __this->___CanOpen_6;
		if (!L_18)
		{
			goto IL_00e7;
		}
	}
	{
		bool L_19 = __this->___RedLocked_8;
		if (L_19)
		{
			goto IL_00e7;
		}
	}
	{
		bool L_20 = __this->___BlueLocked_9;
		if (L_20)
		{
			goto IL_00e7;
		}
	}
	{
		// isOpened = true;
		__this->___isOpened_11 = (bool)1;
		// rbDoor.AddRelativeTorque(new Vector3(0, 0, 20f));
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_21 = __this->___rbDoor_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), (0.0f), (0.0f), (20.0f), /*hidden argument*/NULL);
		NullCheck(L_21);
		Rigidbody_AddRelativeTorque_m8A4883737B7F8BDC0B25144986F74C4B9F789311(L_21, L_22, NULL);
	}

IL_00e7:
	{
		// }
		return;
	}
}
// System.Boolean AN_DoorScript::NearView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AN_DoorScript_NearView_m4E1466D0987580111327318FA954DF185D859076 (AN_DoorScript_t9C44CFCAF508293A346E40E7A6034A66131293AD* __this, const RuntimeMethod* method) 
{
	{
		// distance = Vector3.Distance(transform.position, Camera.main.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5;
		L_5 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_1, L_4, NULL);
		__this->___distance_13 = L_5;
		// direction = transform.position - Camera.main.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
		L_8 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_7, L_10, NULL);
		__this->___direction_15 = L_11;
		// angleView = Vector3.Angle(Camera.main.transform.forward, direction);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12;
		L_12 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___direction_15;
		float L_16;
		L_16 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_14, L_15, NULL);
		__this->___angleView_14 = L_16;
		// if (distance < 3f) return true; // angleView < 35f &&
		float L_17 = __this->___distance_13;
		if ((!(((float)L_17) < ((float)(3.0f)))))
		{
			goto IL_0079;
		}
	}
	{
		// if (distance < 3f) return true; // angleView < 35f &&
		return (bool)1;
	}

IL_0079:
	{
		// else return false;
		return (bool)0;
	}
}
// System.Void AN_DoorScript::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AN_DoorScript_FixedUpdate_mDAE57E8A8A9637BCFB549868836DC5EB9C222F52 (AN_DoorScript_t9C44CFCAF508293A346E40E7A6034A66131293AD* __this, const RuntimeMethod* method) 
{
	{
		// if (isOpened)
		bool L_0 = __this->___isOpened_11;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// currentLim = 85f;
		__this->___currentLim_19 = (85.0f);
		goto IL_003b;
	}

IL_0015:
	{
		// if (currentLim > 1f)
		float L_1 = __this->___currentLim_19;
		if ((!(((float)L_1) > ((float)(1.0f)))))
		{
			goto IL_003b;
		}
	}
	{
		// currentLim -= .5f * OpenSpeed;
		float L_2 = __this->___currentLim_19;
		float L_3 = __this->___OpenSpeed_12;
		__this->___currentLim_19 = ((float)il2cpp_codegen_subtract(L_2, ((float)il2cpp_codegen_multiply((0.5f), L_3))));
	}

IL_003b:
	{
		// hingeLim.max = currentLim;
		JointLimits_tB79BCEF381B77F069150A1A961C05DD9838B998A* L_4 = (&__this->___hingeLim_18);
		float L_5 = __this->___currentLim_19;
		JointLimits_set_max_m192F8B77417D548BF0162E651049DB1C4C1D81A0(L_4, L_5, NULL);
		// hingeLim.min = -currentLim;
		JointLimits_tB79BCEF381B77F069150A1A961C05DD9838B998A* L_6 = (&__this->___hingeLim_18);
		float L_7 = __this->___currentLim_19;
		JointLimits_set_min_m6DCC6F92E715577794E36CD524989509D2A001AF(L_6, ((-L_7)), NULL);
		// hinge.limits = hingeLim;
		HingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7* L_8 = __this->___hinge_17;
		JointLimits_tB79BCEF381B77F069150A1A961C05DD9838B998A L_9 = __this->___hingeLim_18;
		NullCheck(L_8);
		HingeJoint_set_limits_m5B9B968EF88FFC9ABA1777FFEFA13433F9BE08D8(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void AN_DoorScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AN_DoorScript__ctor_m14DB5743E991738B4D74382D715283398446564E (AN_DoorScript_t9C44CFCAF508293A346E40E7A6034A66131293AD* __this, const RuntimeMethod* method) 
{
	{
		// public bool CanOpen = true;
		__this->___CanOpen_6 = (bool)1;
		// public bool CanClose = true;
		__this->___CanClose_7 = (bool)1;
		// public float OpenSpeed = 3f;
		__this->___OpenSpeed_12 = (3.0f);
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
// System.Void AN_HeroController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AN_HeroController_Start_m0664B0FB1B2B9924D334711EFAAB7C2D60C462B4 (AN_HeroController_tDB7EFDBEF61E59C8B7E73AD70746A80CC1E37689* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// character = GetComponent<CharacterController>();
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_0;
		L_0 = Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040(__this, Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		__this->___character_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___character_8), (void*)L_0);
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_9), (void*)L_1);
		// Cam = Camera.main.GetComponent<Transform>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F(L_2, Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		__this->___Cam_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Cam_11), (void*)L_3);
		// Cursor.lockState = CursorLockMode.Locked; // freeze cursor on screen centre
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(1, NULL);
		// Cursor.visible = false; // invisible cursor
		Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7((bool)0, NULL);
		// }
		return;
	}
}
// System.Void AN_HeroController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AN_HeroController_Update_mD28F35D24330789687A3559390EC46DAC27BE440 (AN_HeroController_tDB7EFDBEF61E59C8B7E73AD70746A80CC1E37689* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float xmouse = Input.GetAxis("Mouse X") * Time.deltaTime * Sensitivity;
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_2 = __this->___Sensitivity_6;
		V_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), L_2));
		// float ymouse = Input.GetAxis("Mouse Y") * Time.deltaTime * Sensitivity;
		float L_3;
		L_3 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_5 = __this->___Sensitivity_6;
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5));
		// transform.Rotate(Vector3.up * xmouse);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		NullCheck(L_6);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_6, L_9, NULL);
		// yRotation -= ymouse;
		float L_10 = __this->___yRotation_12;
		float L_11 = V_1;
		__this->___yRotation_12 = ((float)il2cpp_codegen_subtract(L_10, L_11));
		// yRotation = Mathf.Clamp(yRotation, -85f, 60f);
		float L_12 = __this->___yRotation_12;
		float L_13;
		L_13 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_12, (-85.0f), (60.0f), NULL);
		__this->___yRotation_12 = L_13;
		// Cam.localRotation = Quaternion.Euler(yRotation, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___Cam_11;
		float L_15 = __this->___yRotation_12;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_15, (0.0f), (0.0f), NULL);
		NullCheck(L_14);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_14, L_16, NULL);
		// if (Input.GetButtonDown("Jump") && jumpFlag == true) rb.AddForce(transform.up * JumpForce);
		bool L_17;
		L_17 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if (!L_17)
		{
			goto IL_00c4;
		}
	}
	{
		bool L_18 = __this->___jumpFlag_7;
		if (!L_18)
		{
			goto IL_00c4;
		}
	}
	{
		// if (Input.GetButtonDown("Jump") && jumpFlag == true) rb.AddForce(transform.up * JumpForce);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_19 = __this->___rb_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_20, NULL);
		float L_22 = __this->___JumpForce_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_21, L_22, NULL);
		NullCheck(L_19);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_19, L_23, NULL);
	}

IL_00c4:
	{
		// }
		return;
	}
}
// System.Void AN_HeroController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AN_HeroController_FixedUpdate_m7066F904490FD1799793A6B8F06413B3976586EE (AN_HeroController_tDB7EFDBEF61E59C8B7E73AD70746A80CC1E37689* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// moveVector = transform.forward * MoveSpeed * Input.GetAxis("Vertical") +
		//     transform.right * MoveSpeed * Input.GetAxis("Horizontal") +
		//     transform.up * rb.velocity.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_0, NULL);
		float L_2 = __this->___MoveSpeed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		float L_4;
		L_4 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_6, NULL);
		float L_8 = __this->___MoveSpeed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		float L_10;
		L_10 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_13, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_15 = __this->___rb_9;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_15, NULL);
		float L_17 = L_16.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_12, L_18, NULL);
		__this->___moveVector_10 = L_19;
		// rb.velocity = moveVector;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_20 = __this->___rb_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___moveVector_10;
		NullCheck(L_20);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_20, L_21, NULL);
		// }
		return;
	}
}
// System.Void AN_HeroController::OnTriggerStay(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AN_HeroController_OnTriggerStay_mC9DD70A261F59A6BB9D0F98FC538D52307B47AC9 (AN_HeroController_tDB7EFDBEF61E59C8B7E73AD70746A80CC1E37689* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	{
		// jumpFlag = true; // hero can jump
		__this->___jumpFlag_7 = (bool)1;
		// }
		return;
	}
}
// System.Void AN_HeroController::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AN_HeroController_OnTriggerExit_mD8939F64AC8A413AB838EA36E3ABB64C9E29FDCA (AN_HeroController_tDB7EFDBEF61E59C8B7E73AD70746A80CC1E37689* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	{
		// jumpFlag = false;
		__this->___jumpFlag_7 = (bool)0;
		// }
		return;
	}
}
// System.Void AN_HeroController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AN_HeroController__ctor_m770310BF7A480A326FFDFBCF59744F2B69F08EFD (AN_HeroController_tDB7EFDBEF61E59C8B7E73AD70746A80CC1E37689* __this, const RuntimeMethod* method) 
{
	{
		// public float MoveSpeed = 30f, JumpForce = 200f, Sensitivity = 70f;
		__this->___MoveSpeed_4 = (30.0f);
		// public float MoveSpeed = 30f, JumpForce = 200f, Sensitivity = 70f;
		__this->___JumpForce_5 = (200.0f);
		// public float MoveSpeed = 30f, JumpForce = 200f, Sensitivity = 70f;
		__this->___Sensitivity_6 = (70.0f);
		// bool jumpFlag = true; // to jump from surface only
		__this->___jumpFlag_7 = (bool)1;
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
// System.Void AN_HeroInteractive::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AN_HeroInteractive__ctor_m5CA7656380F9AE8B1FA2762949505787031B303B (AN_HeroInteractive_tD848319968C7A7C15BB8EB066BE6FF9E5A9B24FB* __this, const RuntimeMethod* method) 
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
// System.Void AN_PlugScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AN_PlugScript_Start_m678C4B315CBAEB2D5F4DFAF5EF3F9425EE930269 (AN_PlugScript_t8D8A1D3C001915E36C7A555E00D78119BF8A85A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_15), (void*)L_0);
		// }
		return;
	}
}
// System.Void AN_PlugScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AN_PlugScript_Update_m19C8F1422EDE1585B5C88F07D2F981AA0D9111B9 (AN_PlugScript_t8D8A1D3C001915E36C7A555E00D78119BF8A85A0* __this, const RuntimeMethod* method) 
{
	{
		// if (youCan) Interaction();
		bool L_0 = __this->___youCan_14;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (youCan) Interaction();
		AN_PlugScript_Interaction_m29502A6F989E33F8471BF724F3BF056F2AB4CA70(__this, NULL);
	}

IL_000e:
	{
		// if (isConnected)
		bool L_1 = __this->___isConnected_12;
		if (!L_1)
		{
			goto IL_0063;
		}
	}
	{
		// gameObject.transform.position = Socket.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_4 = __this->___Socket_6;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_6, NULL);
		// gameObject.transform.rotation = Socket.transform.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_9 = __this->___Socket_6;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		NullCheck(L_10);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_10, NULL);
		NullCheck(L_8);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_8, L_11, NULL);
		// DoorObject.isOpened = true;
		AN_DoorScript_t9C44CFCAF508293A346E40E7A6034A66131293AD* L_12 = __this->___DoorObject_7;
		NullCheck(L_12);
		L_12->___isOpened_11 = (bool)1;
		return;
	}

IL_0063:
	{
		// DoorObject.isOpened = false;
		AN_DoorScript_t9C44CFCAF508293A346E40E7A6034A66131293AD* L_13 = __this->___DoorObject_7;
		NullCheck(L_13);
		L_13->___isOpened_11 = (bool)0;
		// }
		return;
	}
}
// System.Void AN_PlugScript::Interaction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AN_PlugScript_Interaction_m29502A6F989E33F8471BF724F3BF056F2AB4CA70 (AN_PlugScript_t8D8A1D3C001915E36C7A555E00D78119BF8A85A0* __this, const RuntimeMethod* method) 
{
	{
		// if (NearView() && Input.GetKeyDown(KeyCode.E) && !follow)
		bool L_0;
		L_0 = AN_PlugScript_NearView_mA3877625C17E7C76486F0082D9DE803D582AF369(__this, NULL);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)101), NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		bool L_2 = __this->___follow_11;
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		// isConnected = false; // unfrozen
		__this->___isConnected_12 = (bool)0;
		// follow = true;
		__this->___follow_11 = (bool)1;
		// followFlag = false;
		__this->___followFlag_13 = (bool)0;
	}

IL_002e:
	{
		// if (follow)
		bool L_3 = __this->___follow_11;
		if (!L_3)
		{
			goto IL_00cb;
		}
	}
	{
		// rb.drag = 10f;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = __this->___rb_15;
		NullCheck(L_4);
		Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0(L_4, (10.0f), NULL);
		// rb.angularDrag = 10f;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___rb_15;
		NullCheck(L_5);
		Rigidbody_set_angularDrag_m4193B04EEFCA831DB99E29E98F778957557F130C(L_5, (10.0f), NULL);
		// if (followFlag)
		bool L_6 = __this->___followFlag_13;
		if (!L_6)
		{
			goto IL_00a3;
		}
	}
	{
		// distance = Vector3.Distance(transform.position, Camera.main.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9;
		L_9 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12;
		L_12 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_8, L_11, NULL);
		__this->___distance_8 = L_12;
		// if (distance > 3f || Input.GetKeyDown(KeyCode.E))
		float L_13 = __this->___distance_8;
		if ((((float)L_13) > ((float)(3.0f))))
		{
			goto IL_009c;
		}
	}
	{
		bool L_14;
		L_14 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)101), NULL);
		if (!L_14)
		{
			goto IL_00a3;
		}
	}

IL_009c:
	{
		// follow = false;
		__this->___follow_11 = (bool)0;
	}

IL_00a3:
	{
		// followFlag = true;
		__this->___followFlag_13 = (bool)1;
		// rb.AddExplosionForce(-1000f, HeroHandsPosition.position, 10f);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_15 = __this->___rb_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___HeroHandsPosition_5;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		NullCheck(L_15);
		Rigidbody_AddExplosionForce_mD36F7D864F32F22DA1783D20F6E9563A9C51DFA1(L_15, (-1000.0f), L_17, (10.0f), NULL);
		return;
	}

IL_00cb:
	{
		// rb.drag = 0f;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_18 = __this->___rb_15;
		NullCheck(L_18);
		Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0(L_18, (0.0f), NULL);
		// rb.angularDrag = .5f;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_19 = __this->___rb_15;
		NullCheck(L_19);
		Rigidbody_set_angularDrag_m4193B04EEFCA831DB99E29E98F778957557F130C(L_19, (0.5f), NULL);
		// }
		return;
	}
}
// System.Boolean AN_PlugScript::NearView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AN_PlugScript_NearView_mA3877625C17E7C76486F0082D9DE803D582AF369 (AN_PlugScript_t8D8A1D3C001915E36C7A555E00D78119BF8A85A0* __this, const RuntimeMethod* method) 
{
	{
		// distance = Vector3.Distance(transform.position, Camera.main.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5;
		L_5 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_1, L_4, NULL);
		__this->___distance_8 = L_5;
		// direction = transform.position - Camera.main.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
		L_8 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_7, L_10, NULL);
		__this->___direction_10 = L_11;
		// angleView = Vector3.Angle(Camera.main.transform.forward, direction);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12;
		L_12 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___direction_10;
		float L_16;
		L_16 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_14, L_15, NULL);
		__this->___angleView_9 = L_16;
		// if (distance < 3f && angleView <35f) return true;
		float L_17 = __this->___distance_8;
		if ((!(((float)L_17) < ((float)(3.0f)))))
		{
			goto IL_0086;
		}
	}
	{
		float L_18 = __this->___angleView_9;
		if ((!(((float)L_18) < ((float)(35.0f)))))
		{
			goto IL_0086;
		}
	}
	{
		// if (distance < 3f && angleView <35f) return true;
		return (bool)1;
	}

IL_0086:
	{
		// else return false;
		return (bool)0;
	}
}
// System.Void AN_PlugScript::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AN_PlugScript_OnTriggerEnter_mB002E4888FC278145F374DA6872F71BE47017613 (AN_PlugScript_t8D8A1D3C001915E36C7A555E00D78119BF8A85A0* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other == Socket)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = __this->___Socket_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		// isConnected = true;
		__this->___isConnected_12 = (bool)1;
		// follow = false;
		__this->___follow_11 = (bool)0;
		// DoorObject.rbDoor.AddRelativeTorque(new Vector3(0, 0, 20f));
		AN_DoorScript_t9C44CFCAF508293A346E40E7A6034A66131293AD* L_3 = __this->___DoorObject_7;
		NullCheck(L_3);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = L_3->___rbDoor_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), (0.0f), (0.0f), (20.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Rigidbody_AddRelativeTorque_m8A4883737B7F8BDC0B25144986F74C4B9F789311(L_4, L_5, NULL);
	}

IL_0040:
	{
		// if (OneTime) youCan = false;
		bool L_6 = __this->___OneTime_4;
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		// if (OneTime) youCan = false;
		__this->___youCan_14 = (bool)0;
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void AN_PlugScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AN_PlugScript__ctor_mEA78A95ED89BD6FDFB47877976AF48EC80854604 (AN_PlugScript_t8D8A1D3C001915E36C7A555E00D78119BF8A85A0* __this, const RuntimeMethod* method) 
{
	{
		// bool follow = false, isConnected = false, followFlag = false, youCan = true;
		__this->___youCan_14 = (bool)1;
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
// System.Void CameraWalker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraWalker_Start_m2CC1F50953F6D9FC92C7CD42698F56CEB2FD34D9 (CameraWalker_t04284262D4EF568956C5F39D01E9A206703620BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.Find("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___player_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_4), (void*)L_0);
		// offset = transform.position - player.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___player_4;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_5, NULL);
		__this->___offset_5 = L_6;
		// }
		return;
	}
}
// System.Void CameraWalker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraWalker_Update_mED97D17098CB155DA2B196B90F5516957E9586A7 (CameraWalker_t04284262D4EF568956C5F39D01E9A206703620BC* __this, const RuntimeMethod* method) 
{
	{
		// void Update() => transform.position = player.transform.position + offset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___player_4;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___offset_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_4, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_5, NULL);
		return;
	}
}
// System.Void CameraWalker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraWalker__ctor_m6316E6CA2E7F64DBAA18E365C3F4344409CF9FAF (CameraWalker_t04284262D4EF568956C5F39D01E9A206703620BC* __this, const RuntimeMethod* method) 
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
// System.Void DestroyWithChance::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyWithChance_Start_mD94EE3BB25EBC66FF0E0C0EA936DA3E8558000DB (DestroyWithChance_t635D2605C78F0993387EA0E2BD3A67934C1F57B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Random.value < ChanceOfStaying) Destroy(gameObject);
		float L_0;
		L_0 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		float L_1 = __this->___ChanceOfStaying_4;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_0018;
		}
	}
	{
		// if (Random.value < ChanceOfStaying) Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void DestroyWithChance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyWithChance__ctor_m8A98C799E96BE831D2B5DB518BAD3FF4224A8740 (DestroyWithChance_t635D2605C78F0993387EA0E2BD3A67934C1F57B3* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float ChanceOfStaying = 0.5f;
		__this->___ChanceOfStaying_4 = (0.5f);
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
// System.Void DoorController::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorController_OnTriggerEnter_mC070CC0CC7DA2B0C569737B4559D27912D96C2BB (DoorController_tF2F99340EB03FDC2F2F1CDC7C67770C13D62849A* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("Player") && !isOpened)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		bool L_2 = __this->___isOpened_6;
		if (L_2)
		{
			goto IL_0047;
		}
	}
	{
		// isOpened = true;
		__this->___isOpened_6 = (bool)1;
		// StartCoroutine(Open());
		RuntimeObject* L_3;
		L_3 = DoorController_Open_mCE3D1DE4BDC1DA40ECE48C75AD6F1E72FE2F325D(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// i++;
		int32_t L_5 = __this->___i_7;
		__this->___i_7 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// Debug.Log(i);
		int32_t L_6 = __this->___i_7;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator DoorController::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DoorController_Open_mCE3D1DE4BDC1DA40ECE48C75AD6F1E72FE2F325D (DoorController_tF2F99340EB03FDC2F2F1CDC7C67770C13D62849A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COpenU3Ed__5_t31F1DBA7BBF1313EC6E3EA810D86E021DE670145_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COpenU3Ed__5_t31F1DBA7BBF1313EC6E3EA810D86E021DE670145* L_0 = (U3COpenU3Ed__5_t31F1DBA7BBF1313EC6E3EA810D86E021DE670145*)il2cpp_codegen_object_new(U3COpenU3Ed__5_t31F1DBA7BBF1313EC6E3EA810D86E021DE670145_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COpenU3Ed__5__ctor_m95C93172DC5C8560CAD99A7D4FD3294D1A6072EA(L_0, 0, NULL);
		U3COpenU3Ed__5_t31F1DBA7BBF1313EC6E3EA810D86E021DE670145* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void DoorController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorController__ctor_mD89F4B49FFD160724C7040A3E91E96951CEC5BF3 (DoorController_tF2F99340EB03FDC2F2F1CDC7C67770C13D62849A* __this, const RuntimeMethod* method) 
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
// System.Void DoorController/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m732B4EB24EE65400183E72A97792B27D46E41125 (U3CU3Ec__DisplayClass5_0_tA1FDE93D31E3582D86EAE8A82D2EBB5C4DB0A07F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean DoorController/<>c__DisplayClass5_0::<Open>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass5_0_U3COpenU3Eb__0_m9826714E4209E2C85A827C1E5B5D9B1BE5110C77 (U3CU3Ec__DisplayClass5_0_tA1FDE93D31E3582D86EAE8A82D2EBB5C4DB0A07F* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitUntil(() => stateInfo.normalizedTime >= 1);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* L_0 = (&__this->___stateInfo_0);
		float L_1;
		L_1 = AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6(L_0, NULL);
		return (bool)((((int32_t)((!(((float)L_1) >= ((float)(1.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean DoorController/<>c__DisplayClass5_0::<Open>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass5_0_U3COpenU3Eb__1_m69C2ACB9E935BF6E9A9116D29B4FEB49FF3706D6 (U3CU3Ec__DisplayClass5_0_tA1FDE93D31E3582D86EAE8A82D2EBB5C4DB0A07F* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitUntil(() => stateInfo.normalizedTime >= 1);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* L_0 = (&__this->___stateInfo_0);
		float L_1;
		L_1 = AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6(L_0, NULL);
		return (bool)((((int32_t)((!(((float)L_1) >= ((float)(1.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void DoorController/<Open>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenU3Ed__5__ctor_m95C93172DC5C8560CAD99A7D4FD3294D1A6072EA (U3COpenU3Ed__5_t31F1DBA7BBF1313EC6E3EA810D86E021DE670145* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void DoorController/<Open>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenU3Ed__5_System_IDisposable_Dispose_mF34C03F6836014E74CC4F185FED54F68C3240F2E (U3COpenU3Ed__5_t31F1DBA7BBF1313EC6E3EA810D86E021DE670145* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean DoorController/<Open>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COpenU3Ed__5_MoveNext_m2EBE3D897DA5B1FDEA9F346C0F3E9BAD31254407 (U3COpenU3Ed__5_t31F1DBA7BBF1313EC6E3EA810D86E021DE670145* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDoorRamp_t69CB6A72DCFD3F080BF78F327C54BA7F6EF37BC4_m26C39A7970F0E3C42DB1F43469734DE7ACCAAABA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3COpenU3Eb__0_m9826714E4209E2C85A827C1E5B5D9B1BE5110C77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3COpenU3Eb__1_m69C2ACB9E935BF6E9A9116D29B4FEB49FF3706D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_tA1FDE93D31E3582D86EAE8A82D2EBB5C4DB0A07F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DoorController_tF2F99340EB03FDC2F2F1CDC7C67770C13D62849A* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		DoorController_tF2F99340EB03FDC2F2F1CDC7C67770C13D62849A* L_1 = __this->___U3CU3E4__this_2;
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
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00e7;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		U3CU3Ec__DisplayClass5_0_tA1FDE93D31E3582D86EAE8A82D2EBB5C4DB0A07F* L_3 = (U3CU3Ec__DisplayClass5_0_tA1FDE93D31E3582D86EAE8A82D2EBB5C4DB0A07F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_tA1FDE93D31E3582D86EAE8A82D2EBB5C4DB0A07F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CU3Ec__DisplayClass5_0__ctor_m732B4EB24EE65400183E72A97792B27D46E41125(L_3, NULL);
		__this->___U3CU3E8__1_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_3), (void*)L_3);
		// gate.GetComponent<DoorRamp>().Open();
		DoorController_tF2F99340EB03FDC2F2F1CDC7C67770C13D62849A* L_4 = V_1;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___gate_5;
		NullCheck(L_5);
		DoorRamp_t69CB6A72DCFD3F080BF78F327C54BA7F6EF37BC4* L_6;
		L_6 = GameObject_GetComponent_TisDoorRamp_t69CB6A72DCFD3F080BF78F327C54BA7F6EF37BC4_m26C39A7970F0E3C42DB1F43469734DE7ACCAAABA(L_5, GameObject_GetComponent_TisDoorRamp_t69CB6A72DCFD3F080BF78F327C54BA7F6EF37BC4_m26C39A7970F0E3C42DB1F43469734DE7ACCAAABA_RuntimeMethod_var);
		NullCheck(L_6);
		DoorRamp_Open_mB359D537C30004D931040489D6ADBF987C09293D(L_6, NULL);
		// AnimatorStateInfo stateInfo = gate.GetComponent<DoorRamp>().animator.GetCurrentAnimatorStateInfo(0);
		U3CU3Ec__DisplayClass5_0_tA1FDE93D31E3582D86EAE8A82D2EBB5C4DB0A07F* L_7 = __this->___U3CU3E8__1_3;
		DoorController_tF2F99340EB03FDC2F2F1CDC7C67770C13D62849A* L_8 = V_1;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___gate_5;
		NullCheck(L_9);
		DoorRamp_t69CB6A72DCFD3F080BF78F327C54BA7F6EF37BC4* L_10;
		L_10 = GameObject_GetComponent_TisDoorRamp_t69CB6A72DCFD3F080BF78F327C54BA7F6EF37BC4_m26C39A7970F0E3C42DB1F43469734DE7ACCAAABA(L_9, GameObject_GetComponent_TisDoorRamp_t69CB6A72DCFD3F080BF78F327C54BA7F6EF37BC4_m26C39A7970F0E3C42DB1F43469734DE7ACCAAABA_RuntimeMethod_var);
		NullCheck(L_10);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11;
		L_11 = DoorRamp_get_animator_m70F202589753A0BD86B811E93BD95DD07009EA7F_inline(L_10, NULL);
		NullCheck(L_11);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_12;
		L_12 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_11, 0, NULL);
		NullCheck(L_7);
		L_7->___stateInfo_0 = L_12;
		// yield return new WaitUntil(() => stateInfo.normalizedTime >= 1);
		U3CU3Ec__DisplayClass5_0_tA1FDE93D31E3582D86EAE8A82D2EBB5C4DB0A07F* L_13 = __this->___U3CU3E8__1_3;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_14 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_14, L_13, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3COpenU3Eb__0_m9826714E4209E2C85A827C1E5B5D9B1BE5110C77_RuntimeMethod_var), NULL);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_15 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_15, L_14, NULL);
		__this->___U3CU3E2__current_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_15);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_008a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// rump.GetComponent<DoorRamp>().Open();
		DoorController_tF2F99340EB03FDC2F2F1CDC7C67770C13D62849A* L_16 = V_1;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = L_16->___rump_4;
		NullCheck(L_17);
		DoorRamp_t69CB6A72DCFD3F080BF78F327C54BA7F6EF37BC4* L_18;
		L_18 = GameObject_GetComponent_TisDoorRamp_t69CB6A72DCFD3F080BF78F327C54BA7F6EF37BC4_m26C39A7970F0E3C42DB1F43469734DE7ACCAAABA(L_17, GameObject_GetComponent_TisDoorRamp_t69CB6A72DCFD3F080BF78F327C54BA7F6EF37BC4_m26C39A7970F0E3C42DB1F43469734DE7ACCAAABA_RuntimeMethod_var);
		NullCheck(L_18);
		DoorRamp_Open_mB359D537C30004D931040489D6ADBF987C09293D(L_18, NULL);
		// stateInfo = rump.GetComponent<DoorRamp>().animator.GetCurrentAnimatorStateInfo(0);
		U3CU3Ec__DisplayClass5_0_tA1FDE93D31E3582D86EAE8A82D2EBB5C4DB0A07F* L_19 = __this->___U3CU3E8__1_3;
		DoorController_tF2F99340EB03FDC2F2F1CDC7C67770C13D62849A* L_20 = V_1;
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = L_20->___rump_4;
		NullCheck(L_21);
		DoorRamp_t69CB6A72DCFD3F080BF78F327C54BA7F6EF37BC4* L_22;
		L_22 = GameObject_GetComponent_TisDoorRamp_t69CB6A72DCFD3F080BF78F327C54BA7F6EF37BC4_m26C39A7970F0E3C42DB1F43469734DE7ACCAAABA(L_21, GameObject_GetComponent_TisDoorRamp_t69CB6A72DCFD3F080BF78F327C54BA7F6EF37BC4_m26C39A7970F0E3C42DB1F43469734DE7ACCAAABA_RuntimeMethod_var);
		NullCheck(L_22);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_23;
		L_23 = DoorRamp_get_animator_m70F202589753A0BD86B811E93BD95DD07009EA7F_inline(L_22, NULL);
		NullCheck(L_23);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_24;
		L_24 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_23, 0, NULL);
		NullCheck(L_19);
		L_19->___stateInfo_0 = L_24;
		// yield return new WaitUntil(() => stateInfo.normalizedTime >= 1);
		U3CU3Ec__DisplayClass5_0_tA1FDE93D31E3582D86EAE8A82D2EBB5C4DB0A07F* L_25 = __this->___U3CU3E8__1_3;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_26 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_26, L_25, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3COpenU3Eb__1_m69C2ACB9E935BF6E9A9116D29B4FEB49FF3706D6_RuntimeMethod_var), NULL);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_27 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_27, L_26, NULL);
		__this->___U3CU3E2__current_1 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_27);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00e7:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object DoorController/<Open>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COpenU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9BBB29A5C520520CCDB011696ABF5FCC42BCA8CD (U3COpenU3Ed__5_t31F1DBA7BBF1313EC6E3EA810D86E021DE670145* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void DoorController/<Open>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenU3Ed__5_System_Collections_IEnumerator_Reset_mEF927BB2AF49BA5B93F8F888272A3C728DDA96B5 (U3COpenU3Ed__5_t31F1DBA7BBF1313EC6E3EA810D86E021DE670145* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COpenU3Ed__5_System_Collections_IEnumerator_Reset_mEF927BB2AF49BA5B93F8F888272A3C728DDA96B5_RuntimeMethod_var)));
	}
}
// System.Object DoorController/<Open>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COpenU3Ed__5_System_Collections_IEnumerator_get_Current_m8F89143CAA74255E6878D9B525CDE46266441C7C (U3COpenU3Ed__5_t31F1DBA7BBF1313EC6E3EA810D86E021DE670145* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// UnityEngine.Animator DoorRamp::get_animator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* DoorRamp_get_animator_m70F202589753A0BD86B811E93BD95DD07009EA7F (DoorRamp_t69CB6A72DCFD3F080BF78F327C54BA7F6EF37BC4* __this, const RuntimeMethod* method) 
{
	{
		// public Animator animator { get; private set; }
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___U3CanimatorU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void DoorRamp::set_animator(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorRamp_set_animator_m665DFA957ABF35FB7B63560439B01426D0D8DD53 (DoorRamp_t69CB6A72DCFD3F080BF78F327C54BA7F6EF37BC4* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___value0, const RuntimeMethod* method) 
{
	{
		// public Animator animator { get; private set; }
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___value0;
		__this->___U3CanimatorU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CanimatorU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void DoorRamp::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorRamp_Start_mEB617BC8662D11E3902006AF2395182AA69A4FCC (DoorRamp_t69CB6A72DCFD3F080BF78F327C54BA7F6EF37BC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		DoorRamp_set_animator_m665DFA957ABF35FB7B63560439B01426D0D8DD53_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void DoorRamp::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorRamp_Open_mB359D537C30004D931040489D6ADBF987C09293D (DoorRamp_t69CB6A72DCFD3F080BF78F327C54BA7F6EF37BC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85364350D2A2EDA973AEF68CD6755D362AC6E24C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetTrigger("Open");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = DoorRamp_get_animator_m70F202589753A0BD86B811E93BD95DD07009EA7F_inline(__this, NULL);
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B, NULL);
		// Debug.Log("triggered");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral85364350D2A2EDA973AEF68CD6755D362AC6E24C, NULL);
		// }
		return;
	}
}
// System.Void DoorRamp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorRamp__ctor_mF005D307A9D4642D1F5113951990BFFF0126CF27 (DoorRamp_t69CB6A72DCFD3F080BF78F327C54BA7F6EF37BC4* __this, const RuntimeMethod* method) 
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
// System.Void OpenScreenOnFinish::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenScreenOnFinish_Awake_m9217D6A61B3D69BFAE443F26C734957D99943D4D (OpenScreenOnFinish_tC67193BCB26A36188FF2367A6F203304495DDF68* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06_m1A0765C079AA01F0281C0BE6994AE2BD57AF92EC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void Awake() => endGame = screen.GetComponent<EndGame>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___screen_4;
		NullCheck(L_0);
		EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* L_1;
		L_1 = GameObject_GetComponent_TisEndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06_m1A0765C079AA01F0281C0BE6994AE2BD57AF92EC(L_0, GameObject_GetComponent_TisEndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06_m1A0765C079AA01F0281C0BE6994AE2BD57AF92EC_RuntimeMethod_var);
		__this->___endGame_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___endGame_5), (void*)L_1);
		return;
	}
}
// System.Void OpenScreenOnFinish::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenScreenOnFinish_OnTriggerEnter_mBFFD1E15E169A941E5EBAA05B97EC94A39DED543 (OpenScreenOnFinish_tC67193BCB26A36188FF2367A6F203304495DDF68* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("Player"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// endGame.OpenEndScreen();
		EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* L_2 = __this->___endGame_5;
		NullCheck(L_2);
		EndGame_OpenEndScreen_m61163D812C0BD53645BE897095D6E2C7B134A8AA(L_2, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void OpenScreenOnFinish::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenScreenOnFinish__ctor_m0F40CBF5CE0181D63AD805623C837EB77BD29D61 (OpenScreenOnFinish_tC67193BCB26A36188FF2367A6F203304495DDF68* __this, const RuntimeMethod* method) 
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
// System.Void EndGame::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndGame_Awake_m178768A9DD726CA1C92B4C66B8E23C69BAEBCDBF (EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* __this, const RuntimeMethod* method) 
{
	{
		// private void Awake() => gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		return;
	}
}
// System.Void EndGame::OpenEndScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndGame_OpenEndScreen_m61163D812C0BD53645BE897095D6E2C7B134A8AA (EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_m50669A283DE0DEFD0FFB1F42B965E6FCD460901F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndGame_ExitButtonPressed_mB615B698D755212EFC16DA1C88C9FDC66708080C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndGame_RestartButtonPressed_m3BEEBF9D7065E7AE04D7393E2B81C2C3645A5961_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21C54BF860BF41F6CB5FA90618AD96345DB385CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DCFED261E2880A0BAC97F17340F3E0B85FF123C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76E112635C3C501D74AF9A4D3B515FF840FF84EF);
		s_Il2CppMethodInitialized = true;
	}
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_0 = NULL;
	{
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// Time.timeScale = 0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// var root = GetComponent<UIDocument>().rootVisualElement;
		UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77* L_1;
		L_1 = Component_GetComponent_TisUIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_m50669A283DE0DEFD0FFB1F42B965E6FCD460901F(__this, Component_GetComponent_TisUIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_m50669A283DE0DEFD0FFB1F42B965E6FCD460901F_RuntimeMethod_var);
		NullCheck(L_1);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_2;
		L_2 = UIDocument_get_rootVisualElement_mA6214AAAA8DE0A4DE36AA35F9A98CF8065ED51E1(L_1, NULL);
		V_0 = L_2;
		// restartButton = root.Q<Button>("RestartButton");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_4;
		L_4 = UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75(L_3, _stringLiteral6DCFED261E2880A0BAC97F17340F3E0B85FF123C, (String_t*)NULL, UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75_RuntimeMethod_var);
		__this->___restartButton_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___restartButton_5), (void*)L_4);
		// exitButton = root.Q<Button>("ExitButton");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_5 = V_0;
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_6;
		L_6 = UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75(L_5, _stringLiteral76E112635C3C501D74AF9A4D3B515FF840FF84EF, (String_t*)NULL, UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75_RuntimeMethod_var);
		__this->___exitButton_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___exitButton_6), (void*)L_6);
		// label = root.Q<Label>("Label");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7 = V_0;
		Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* L_8;
		L_8 = UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F(L_7, _stringLiteral21C54BF860BF41F6CB5FA90618AD96345DB385CD, (String_t*)NULL, UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F_RuntimeMethod_var);
		__this->___label_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___label_4), (void*)L_8);
		// restartButton.clicked += RestartButtonPressed;
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_9 = __this->___restartButton_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_10, __this, (intptr_t)((void*)EndGame_RestartButtonPressed_m3BEEBF9D7065E7AE04D7393E2B81C2C3645A5961_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		Button_add_clicked_m8F3895E73CAC223492F25142874FFF38A1830C81(L_9, L_10, NULL);
		// exitButton.clicked += ExitButtonPressed;
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_11 = __this->___exitButton_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_12 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_12, __this, (intptr_t)((void*)EndGame_ExitButtonPressed_mB615B698D755212EFC16DA1C88C9FDC66708080C_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		Button_add_clicked_m8F3895E73CAC223492F25142874FFF38A1830C81(L_11, L_12, NULL);
		// }
		return;
	}
}
// System.Void EndGame::RestartButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndGame_RestartButtonPressed_m3BEEBF9D7065E7AE04D7393E2B81C2C3645A5961 (EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void RestartButtonPressed() => SceneManager.LoadScene("Game");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306, NULL);
		return;
	}
}
// System.Void EndGame::ExitButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndGame_ExitButtonPressed_mB615B698D755212EFC16DA1C88C9FDC66708080C (EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* __this, const RuntimeMethod* method) 
{
	{
		// private void ExitButtonPressed() => Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		return;
	}
}
// System.Void EndGame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndGame__ctor_m9CE969697AF96C58116DBE45A0D8C4E36FECD3E4 (EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* __this, const RuntimeMethod* method) 
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
// System.Void InputManager::add_OnStartTouch(InputManager/StartTouchEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_add_OnStartTouch_mBDA58D7B3D652AA358CEA21B2CB75EAC67DD771A (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* V_0 = NULL;
	StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* V_1 = NULL;
	StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* V_2 = NULL;
	{
		StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* L_0 = __this->___OnStartTouch_4;
		V_0 = L_0;
	}

IL_0007:
	{
		StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* L_1 = V_0;
		V_1 = L_1;
		StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* L_2 = V_1;
		StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47*)CastclassSealed((RuntimeObject*)L_4, StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47_il2cpp_TypeInfo_var));
		StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47** L_5 = (&__this->___OnStartTouch_4);
		StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* L_6 = V_2;
		StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* L_7 = V_1;
		StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* L_8;
		L_8 = InterlockedCompareExchangeImpl<StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47*>(L_5, L_6, L_7);
		V_0 = L_8;
		StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* L_9 = V_0;
		StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* L_10 = V_1;
		if ((!(((RuntimeObject*)(StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47*)L_9) == ((RuntimeObject*)(StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void InputManager::remove_OnStartTouch(InputManager/StartTouchEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_remove_OnStartTouch_m49A1E295268C17A860723E995D68583A5E19F7DF (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* V_0 = NULL;
	StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* V_1 = NULL;
	StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* V_2 = NULL;
	{
		StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* L_0 = __this->___OnStartTouch_4;
		V_0 = L_0;
	}

IL_0007:
	{
		StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* L_1 = V_0;
		V_1 = L_1;
		StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* L_2 = V_1;
		StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47*)CastclassSealed((RuntimeObject*)L_4, StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47_il2cpp_TypeInfo_var));
		StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47** L_5 = (&__this->___OnStartTouch_4);
		StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* L_6 = V_2;
		StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* L_7 = V_1;
		StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* L_8;
		L_8 = InterlockedCompareExchangeImpl<StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47*>(L_5, L_6, L_7);
		V_0 = L_8;
		StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* L_9 = V_0;
		StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* L_10 = V_1;
		if ((!(((RuntimeObject*)(StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47*)L_9) == ((RuntimeObject*)(StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void InputManager::add_OnEndTouch(InputManager/EndTouchEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_add_OnEndTouch_m3B9DF6BBCE4F060F29783F125C76B50460F43C5B (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* V_0 = NULL;
	EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* V_1 = NULL;
	EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* V_2 = NULL;
	{
		EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* L_0 = __this->___OnEndTouch_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* L_1 = V_0;
		V_1 = L_1;
		EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* L_2 = V_1;
		EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE*)CastclassSealed((RuntimeObject*)L_4, EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE_il2cpp_TypeInfo_var));
		EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE** L_5 = (&__this->___OnEndTouch_5);
		EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* L_6 = V_2;
		EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* L_7 = V_1;
		EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* L_8;
		L_8 = InterlockedCompareExchangeImpl<EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE*>(L_5, L_6, L_7);
		V_0 = L_8;
		EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* L_9 = V_0;
		EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* L_10 = V_1;
		if ((!(((RuntimeObject*)(EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE*)L_9) == ((RuntimeObject*)(EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void InputManager::remove_OnEndTouch(InputManager/EndTouchEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_remove_OnEndTouch_m4DE9834CC8E50C1FCA27C63C9C4D05B74A5F3CBE (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* V_0 = NULL;
	EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* V_1 = NULL;
	EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* V_2 = NULL;
	{
		EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* L_0 = __this->___OnEndTouch_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* L_1 = V_0;
		V_1 = L_1;
		EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* L_2 = V_1;
		EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE*)CastclassSealed((RuntimeObject*)L_4, EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE_il2cpp_TypeInfo_var));
		EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE** L_5 = (&__this->___OnEndTouch_5);
		EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* L_6 = V_2;
		EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* L_7 = V_1;
		EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* L_8;
		L_8 = InterlockedCompareExchangeImpl<EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE*>(L_5, L_6, L_7);
		V_0 = L_8;
		EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* L_9 = V_0;
		EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* L_10 = V_1;
		if ((!(((RuntimeObject*)(EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE*)L_9) == ((RuntimeObject*)(EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void InputManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_Awake_mCFCABAA5EC85B074EEBE8095E9139175D6526D9F (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// touchContorls = new();
		Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* L_0 = (Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5*)il2cpp_codegen_object_new(Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Touch__ctor_mF116F191559A62D3742652AB8482AF28825D95DD(L_0, NULL);
		__this->___touchContorls_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___touchContorls_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void InputManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_OnEnable_m788646F88BA8D47D800F554CCADD096AA02F10F8 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, const RuntimeMethod* method) 
{
	{
		// touchContorls.Enable();
		Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* L_0 = __this->___touchContorls_6;
		NullCheck(L_0);
		Touch_Enable_m304005E62C39EB4DF1ABB8EA5DFCE37F3AAA4853(L_0, NULL);
		// }
		return;
	}
}
// System.Void InputManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_OnDisable_mCDBA1B46CEBA4C1DCA221F2CD193C36BFC35F29C (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, const RuntimeMethod* method) 
{
	{
		// touchContorls.Disable();
		Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* L_0 = __this->___touchContorls_6;
		NullCheck(L_0);
		Touch_Disable_m21C4D663CDC4528B21E57B0CF158A00A3A9690C1(L_0, NULL);
		// }
		return;
	}
}
// System.Void InputManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_Start_m1C1F4D73A508DB32B5D6E294F12240923279FB10 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputManager_U3CStartU3Eb__12_0_m43759EFB0CCF512F3ABD0F86BDFF6665D8E0924B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputManager_U3CStartU3Eb__12_1_m928629600C6F1D4C365A2AE7968CECE90CF65FF7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// touchContorls.TouchControl.TouchPress.started += ctx => StartTouch(ctx);
		Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* L_0 = __this->___touchContorls_6;
		NullCheck(L_0);
		TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82 L_1;
		L_1 = Touch_get_TouchControl_m802385639A284923FF58B200E94957C6E67ED94A(L_0, NULL);
		V_0 = L_1;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2;
		L_2 = TouchControlActions_get_TouchPress_m8403F741C84E27FA873FAD6ECE66FFD226CCFC53((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_3 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_3, __this, (intptr_t)((void*)InputManager_U3CStartU3Eb__12_0_m43759EFB0CCF512F3ABD0F86BDFF6665D8E0924B_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_2, L_3, NULL);
		// touchContorls.TouchControl.TouchPress.canceled += ctx => EndTouch(ctx);
		Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* L_4 = __this->___touchContorls_6;
		NullCheck(L_4);
		TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82 L_5;
		L_5 = Touch_get_TouchControl_m802385639A284923FF58B200E94957C6E67ED94A(L_4, NULL);
		V_0 = L_5;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6;
		L_6 = TouchControlActions_get_TouchPress_m8403F741C84E27FA873FAD6ECE66FFD226CCFC53((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_7 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_7, __this, (intptr_t)((void*)InputManager_U3CStartU3Eb__12_1_m928629600C6F1D4C365A2AE7968CECE90CF65FF7_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void InputManager::StartTouch(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_StartTouch_m6853A6F8AC0A86B520596DCCA033F3234CE24D43 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* G_B2_0 = NULL;
	StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* G_B1_0 = NULL;
	{
		// OnStartTouch?.Invoke((float)context.startTime);
		StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* L_0 = __this->___OnStartTouch_4;
		StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		double L_2;
		L_2 = CallbackContext_get_startTime_m6F0F9C2CF03CDEFFE81F2E54636A465221AFD39B((&___context0), NULL);
		NullCheck(G_B2_0);
		StartTouchEvent_Invoke_mCE9B4C4042C9AC89B196AC03E7CE3699280033FD_inline(G_B2_0, ((float)L_2), NULL);
		// }
		return;
	}
}
// System.Void InputManager::EndTouch(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_EndTouch_mA458D101A33D96B22274145ED36A10A1D0865458 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* G_B2_0 = NULL;
	EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* G_B1_0 = NULL;
	{
		// OnEndTouch?.Invoke((float)context.duration);
		EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* L_0 = __this->___OnEndTouch_5;
		EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		double L_2;
		L_2 = CallbackContext_get_duration_m1E925BA2636AD5558E1DE54167742BB8D2BB4042((&___context0), NULL);
		NullCheck(G_B2_0);
		EndTouchEvent_Invoke_m53977F30D5F8C9DEE49BED57417AB0C6C565501C_inline(G_B2_0, ((float)L_2), NULL);
		// }
		return;
	}
}
// System.Void InputManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager__ctor_m52D2F3B9FA0D50C52BCC92486F49B300E9334C2A (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void InputManager::<Start>b__12_0(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_U3CStartU3Eb__12_0_m43759EFB0CCF512F3ABD0F86BDFF6665D8E0924B (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___ctx0, const RuntimeMethod* method) 
{
	{
		// touchContorls.TouchControl.TouchPress.started += ctx => StartTouch(ctx);
		CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 L_0 = ___ctx0;
		InputManager_StartTouch_m6853A6F8AC0A86B520596DCCA033F3234CE24D43(__this, L_0, NULL);
		return;
	}
}
// System.Void InputManager::<Start>b__12_1(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_U3CStartU3Eb__12_1_m928629600C6F1D4C365A2AE7968CECE90CF65FF7 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___ctx0, const RuntimeMethod* method) 
{
	{
		// touchContorls.TouchControl.TouchPress.canceled += ctx => EndTouch(ctx);
		CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 L_0 = ___ctx0;
		InputManager_EndTouch_mA458D101A33D96B22274145ED36A10A1D0865458(__this, L_0, NULL);
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
void StartTouchEvent_Invoke_mCE9B4C4042C9AC89B196AC03E7CE3699280033FD_Multicast(StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* __this, float ___time0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* currentDelegate = reinterpret_cast<StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___time0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void StartTouchEvent_Invoke_mCE9B4C4042C9AC89B196AC03E7CE3699280033FD_OpenInst(StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* __this, float ___time0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___time0, method);
}
void StartTouchEvent_Invoke_mCE9B4C4042C9AC89B196AC03E7CE3699280033FD_OpenStatic(StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* __this, float ___time0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___time0, method);
}
void StartTouchEvent_Invoke_mCE9B4C4042C9AC89B196AC03E7CE3699280033FD_OpenStaticInvoker(StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* __this, float ___time0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< float >::Invoke(__this->___method_ptr_0, method, NULL, ___time0);
}
void StartTouchEvent_Invoke_mCE9B4C4042C9AC89B196AC03E7CE3699280033FD_ClosedStaticInvoker(StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* __this, float ___time0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___time0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47 (StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* __this, float ___time0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___time0);

}
// System.Void InputManager/StartTouchEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartTouchEvent__ctor_mFD909FF72B2E73494EA50F76747BC836B4B31408 (StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StartTouchEvent_Invoke_mCE9B4C4042C9AC89B196AC03E7CE3699280033FD_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&StartTouchEvent_Invoke_mCE9B4C4042C9AC89B196AC03E7CE3699280033FD_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StartTouchEvent_Invoke_mCE9B4C4042C9AC89B196AC03E7CE3699280033FD_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&StartTouchEvent_Invoke_mCE9B4C4042C9AC89B196AC03E7CE3699280033FD_Multicast;
}
// System.Void InputManager/StartTouchEvent::Invoke(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartTouchEvent_Invoke_mCE9B4C4042C9AC89B196AC03E7CE3699280033FD (StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* __this, float ___time0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___time0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult InputManager/StartTouchEvent::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StartTouchEvent_BeginInvoke_mDB82CC9710D1746D3845BD987353C95EA9F0B177 (StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* __this, float ___time0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___time0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void InputManager/StartTouchEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartTouchEvent_EndInvoke_m8BB84185E0274586666855FFBEA96CBBDCBEFED9 (StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void EndTouchEvent_Invoke_m53977F30D5F8C9DEE49BED57417AB0C6C565501C_Multicast(EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* __this, float ___time0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* currentDelegate = reinterpret_cast<EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___time0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void EndTouchEvent_Invoke_m53977F30D5F8C9DEE49BED57417AB0C6C565501C_OpenInst(EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* __this, float ___time0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___time0, method);
}
void EndTouchEvent_Invoke_m53977F30D5F8C9DEE49BED57417AB0C6C565501C_OpenStatic(EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* __this, float ___time0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___time0, method);
}
void EndTouchEvent_Invoke_m53977F30D5F8C9DEE49BED57417AB0C6C565501C_OpenStaticInvoker(EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* __this, float ___time0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< float >::Invoke(__this->___method_ptr_0, method, NULL, ___time0);
}
void EndTouchEvent_Invoke_m53977F30D5F8C9DEE49BED57417AB0C6C565501C_ClosedStaticInvoker(EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* __this, float ___time0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___time0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE (EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* __this, float ___time0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___time0);

}
// System.Void InputManager/EndTouchEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndTouchEvent__ctor_m1DE02D701B772BB6E35643680391BF5200DDFAD5 (EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EndTouchEvent_Invoke_m53977F30D5F8C9DEE49BED57417AB0C6C565501C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&EndTouchEvent_Invoke_m53977F30D5F8C9DEE49BED57417AB0C6C565501C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EndTouchEvent_Invoke_m53977F30D5F8C9DEE49BED57417AB0C6C565501C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&EndTouchEvent_Invoke_m53977F30D5F8C9DEE49BED57417AB0C6C565501C_Multicast;
}
// System.Void InputManager/EndTouchEvent::Invoke(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndTouchEvent_Invoke_m53977F30D5F8C9DEE49BED57417AB0C6C565501C (EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* __this, float ___time0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___time0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult InputManager/EndTouchEvent::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EndTouchEvent_BeginInvoke_mAB818CCD601F03700CDE48520E143B587254529A (EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* __this, float ___time0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___time0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void InputManager/EndTouchEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndTouchEvent_EndInvoke_m48F1B7913BF26819995B7E238138A5231C9E204E (EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.InputSystem.InputActionAsset Touch::get_asset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* Touch_get_asset_m48CA30CF84C0D216EF013AD3D23A6089481F0B7F (Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* __this, const RuntimeMethod* method) 
{
	{
		// public InputActionAsset asset { get; }
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0 = __this->___U3CassetU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Touch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Touch__ctor_mF116F191559A62D3742652AB8482AF28825D95DD (Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F5B6C350FECF631C92BC63DC7F9029B75F6E0B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3871EAB332B72BCDB2A54199A4D11FB130C8872B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral497D04A9F12484A2B579045305317D824B392B5E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral586ED90E8A5989C330E8E38E2139B5E3DFD533D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98E7D179EA2E8773D1C579142703763CE3DA7653);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public @Touch()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		//         asset = InputActionAsset.FromJson(@"{
		//     ""name"": ""Touch"",
		//     ""maps"": [
		//         {
		//             ""name"": ""TouchControl"",
		//             ""id"": ""312c5dc4-66f6-417e-b8d5-e97abc296ece"",
		//             ""actions"": [
		//                 {
		//                     ""name"": ""TouchInput"",
		//                     ""type"": ""PassThrough"",
		//                     ""id"": ""87b1462c-da44-45ab-93ea-d27c44fbb3f2"",
		//                     ""expectedControlType"": """",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 },
		//                 {
		//                     ""name"": ""TouchPress"",
		//                     ""type"": ""Button"",
		//                     ""id"": ""f7ec68e7-86bb-4bbc-b67e-fcd051c0faac"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 },
		//                 {
		//                     ""name"": ""TouchPosition"",
		//                     ""type"": ""PassThrough"",
		//                     ""id"": ""9101c413-3928-4773-9b53-3ebe716e8cf2"",
		//                     ""expectedControlType"": ""Vector2"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 }
		//             ],
		//             ""bindings"": [
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""a17b04ba-a9da-4527-a9bc-6abaa2585047"",
		//                     ""path"": ""<Touchscreen>/primaryTouch"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""TouchInput"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""988c7e16-8bb5-471c-af40-4e5b6e5c4a11"",
		//                     ""path"": ""<Touchscreen>/primaryTouch/press"",
		//                     ""interactions"": ""Press(behavior=2)"",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""TouchPress"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""a11d8701-6e7c-49a9-8219-e27f9b4357d5"",
		//                     ""path"": ""<Touchscreen>/primaryTouch/position"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""TouchPosition"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 }
		//             ]
		//         }
		//     ],
		//     ""controlSchemes"": []
		// }");
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = InputActionAsset_FromJson_m8F7212EB013EF4D853836228D393C0D15BD0433C(_stringLiteral0F5B6C350FECF631C92BC63DC7F9029B75F6E0B7, NULL);
		__this->___U3CassetU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CassetU3Ek__BackingField_0), (void*)L_0);
		// m_TouchControl = asset.FindActionMap("TouchControl", throwIfNotFound: true);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_1;
		L_1 = Touch_get_asset_m48CA30CF84C0D216EF013AD3D23A6089481F0B7F_inline(__this, NULL);
		NullCheck(L_1);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_2;
		L_2 = InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75(L_1, _stringLiteral98E7D179EA2E8773D1C579142703763CE3DA7653, (bool)1, NULL);
		__this->___m_TouchControl_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TouchControl_1), (void*)L_2);
		// m_TouchControl_TouchInput = m_TouchControl.FindAction("TouchInput", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_3 = __this->___m_TouchControl_1;
		NullCheck(L_3);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_3, _stringLiteral586ED90E8A5989C330E8E38E2139B5E3DFD533D3, (bool)1, NULL);
		__this->___m_TouchControl_TouchInput_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TouchControl_TouchInput_3), (void*)L_4);
		// m_TouchControl_TouchPress = m_TouchControl.FindAction("TouchPress", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_5 = __this->___m_TouchControl_1;
		NullCheck(L_5);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6;
		L_6 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_5, _stringLiteral497D04A9F12484A2B579045305317D824B392B5E, (bool)1, NULL);
		__this->___m_TouchControl_TouchPress_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TouchControl_TouchPress_4), (void*)L_6);
		// m_TouchControl_TouchPosition = m_TouchControl.FindAction("TouchPosition", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_7 = __this->___m_TouchControl_1;
		NullCheck(L_7);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8;
		L_8 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_7, _stringLiteral3871EAB332B72BCDB2A54199A4D11FB130C8872B, (bool)1, NULL);
		__this->___m_TouchControl_TouchPosition_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TouchControl_TouchPosition_5), (void*)L_8);
		// }
		return;
	}
}
// System.Void Touch::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Touch_Dispose_m2F7B053F416E1CB7BB909B3AB06F756963A6ED3E (Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Object.Destroy(asset);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = Touch_get_asset_m48CA30CF84C0D216EF013AD3D23A6089481F0B7F_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// }
		return;
	}
}
// System.Nullable`1<UnityEngine.InputSystem.InputBinding> Touch::get_bindingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 Touch_get_bindingMask_mAA3CA236FF224F40DCB1F3811F57FC3A5EA1A4F7 (Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* __this, const RuntimeMethod* method) 
{
	{
		// get => asset.bindingMask;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = Touch_get_asset_m48CA30CF84C0D216EF013AD3D23A6089481F0B7F_inline(__this, NULL);
		NullCheck(L_0);
		Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 L_1;
		L_1 = InputActionAsset_get_bindingMask_mD5D2FAC455D221E7BC657DA5E7E4F5402E0B4F6C_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Touch::set_bindingMask(System.Nullable`1<UnityEngine.InputSystem.InputBinding>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Touch_set_bindingMask_mC8A855A572C1BAC9A4A9A6DEEC22350CBC3629C2 (Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* __this, Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___value0, const RuntimeMethod* method) 
{
	{
		// set => asset.bindingMask = value;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = Touch_get_asset_m48CA30CF84C0D216EF013AD3D23A6089481F0B7F_inline(__this, NULL);
		Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 L_1 = ___value0;
		NullCheck(L_0);
		InputActionAsset_set_bindingMask_mD621370B859495F593CBE28019D84F44922C94A5(L_0, L_1, NULL);
		return;
	}
}
// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>> Touch::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D Touch_get_devices_mE13315F6E755D66E140C1F3113572297DFC24DAF (Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* __this, const RuntimeMethod* method) 
{
	{
		// get => asset.devices;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = Touch_get_asset_m48CA30CF84C0D216EF013AD3D23A6089481F0B7F_inline(__this, NULL);
		NullCheck(L_0);
		Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D L_1;
		L_1 = InputActionAsset_get_devices_m8FF856B2C61E23B7360A9279C10F8A6498C72B9C(L_0, NULL);
		return L_1;
	}
}
// System.Void Touch::set_devices(System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Touch_set_devices_m41651DF0860F4D013F4D043423DC2F93125ECD83 (Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* __this, Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D ___value0, const RuntimeMethod* method) 
{
	{
		// set => asset.devices = value;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = Touch_get_asset_m48CA30CF84C0D216EF013AD3D23A6089481F0B7F_inline(__this, NULL);
		Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D L_1 = ___value0;
		NullCheck(L_0);
		InputActionAsset_set_devices_m5A513BB841DB76966CD2B39E0E6FA8AFB3EBE38D(L_0, L_1, NULL);
		return;
	}
}
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme> Touch::get_controlSchemes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 Touch_get_controlSchemes_m6CAD0D6F5F01F8AABB7A3A63D5210D0F201F5FAB (Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* __this, const RuntimeMethod* method) 
{
	{
		// public ReadOnlyArray<InputControlScheme> controlSchemes => asset.controlSchemes;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = Touch_get_asset_m48CA30CF84C0D216EF013AD3D23A6089481F0B7F_inline(__this, NULL);
		NullCheck(L_0);
		ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 L_1;
		L_1 = InputActionAsset_get_controlSchemes_m257644C546BD6221DD62251F6C7C2A2CC11BD099(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Touch::Contains(UnityEngine.InputSystem.InputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Touch_Contains_m66000F859CE7F625FEC825D00B190800E8ECCBE7 (Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* __this, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___action0, const RuntimeMethod* method) 
{
	{
		// return asset.Contains(action);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = Touch_get_asset_m48CA30CF84C0D216EF013AD3D23A6089481F0B7F_inline(__this, NULL);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = ___action0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InputActionAsset_Contains_mB3B9FBCE562FB5229F9387F14AEC22083FC6CDDE(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> Touch::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Touch_GetEnumerator_m53D9DE21E439D3FCD82E7BDF3DCB5721695C4B17 (Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* __this, const RuntimeMethod* method) 
{
	{
		// return asset.GetEnumerator();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = Touch_get_asset_m48CA30CF84C0D216EF013AD3D23A6089481F0B7F_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InputActionAsset_GetEnumerator_m39998F5B21D08AAE328E63B3FDCC0F414620A8A9(L_0, NULL);
		return L_1;
	}
}
// System.Collections.IEnumerator Touch::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Touch_System_Collections_IEnumerable_GetEnumerator_mBC66B83B098114A521CE8F1BE23FBD26E4492D5F (Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* __this, const RuntimeMethod* method) 
{
	{
		// return GetEnumerator();
		RuntimeObject* L_0;
		L_0 = Touch_GetEnumerator_m53D9DE21E439D3FCD82E7BDF3DCB5721695C4B17(__this, NULL);
		return L_0;
	}
}
// System.Void Touch::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Touch_Enable_m304005E62C39EB4DF1ABB8EA5DFCE37F3AAA4853 (Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* __this, const RuntimeMethod* method) 
{
	{
		// asset.Enable();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = Touch_get_asset_m48CA30CF84C0D216EF013AD3D23A6089481F0B7F_inline(__this, NULL);
		NullCheck(L_0);
		InputActionAsset_Enable_m5102429EE832C7891F73B6979612702CECA8F431(L_0, NULL);
		// }
		return;
	}
}
// System.Void Touch::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Touch_Disable_m21C4D663CDC4528B21E57B0CF158A00A3A9690C1 (Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* __this, const RuntimeMethod* method) 
{
	{
		// asset.Disable();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = Touch_get_asset_m48CA30CF84C0D216EF013AD3D23A6089481F0B7F_inline(__this, NULL);
		NullCheck(L_0);
		InputActionAsset_Disable_m62FD8B11BB4EDF6AADAB2BDDC699242D09BAF99C(L_0, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBinding> Touch::get_bindings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Touch_get_bindings_mC7600BDAE72D664199C9F034B1C02D28EBEEE0FA (Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* __this, const RuntimeMethod* method) 
{
	{
		// public IEnumerable<InputBinding> bindings => asset.bindings;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = Touch_get_asset_m48CA30CF84C0D216EF013AD3D23A6089481F0B7F_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InputActionAsset_get_bindings_mB045318575B5D7B13A92B973CABB40E0FEC70FB9(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.InputSystem.InputAction Touch::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* Touch_FindAction_m143E349A34CA6EA2D56C78CE4CAD08884307784C (Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* __this, String_t* ___actionNameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) 
{
	{
		// return asset.FindAction(actionNameOrId, throwIfNotFound);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = Touch_get_asset_m48CA30CF84C0D216EF013AD3D23A6089481F0B7F_inline(__this, NULL);
		String_t* L_1 = ___actionNameOrId0;
		bool L_2 = ___throwIfNotFound1;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionAsset_FindAction_m50D07EAFAA8628B9793E7BBEEB2E89C2A9C45C00(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Int32 Touch::FindBinding(UnityEngine.InputSystem.InputBinding,UnityEngine.InputSystem.InputAction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_FindBinding_mA473BC1696C1B8C025D36EDF10F94F8E69749306 (Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* __this, InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___bindingMask0, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD** ___action1, const RuntimeMethod* method) 
{
	{
		// return asset.FindBinding(bindingMask, out action);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = Touch_get_asset_m48CA30CF84C0D216EF013AD3D23A6089481F0B7F_inline(__this, NULL);
		InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 L_1 = ___bindingMask0;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD** L_2 = ___action1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InputActionAsset_FindBinding_mB5B36B9DDFAABFD4B528B891653B1B5B895DBDC5(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// Touch/TouchControlActions Touch::get_TouchControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82 Touch_get_TouchControl_m802385639A284923FF58B200E94957C6E67ED94A (Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* __this, const RuntimeMethod* method) 
{
	{
		// public TouchControlActions @TouchControl => new TouchControlActions(this);
		TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82 L_0;
		memset((&L_0), 0, sizeof(L_0));
		TouchControlActions__ctor_m3DBBF4BEB5A6F1BDB8BDAC54B92F21B9D515C21E_inline((&L_0), __this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: Touch/TouchControlActions
IL2CPP_EXTERN_C void TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82_marshal_pinvoke(const TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82& unmarshaled, TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'TouchControlActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82_marshal_pinvoke_back(const TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82_marshaled_pinvoke& marshaled, TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'TouchControlActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Touch/TouchControlActions
IL2CPP_EXTERN_C void TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82_marshal_pinvoke_cleanup(TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Touch/TouchControlActions
IL2CPP_EXTERN_C void TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82_marshal_com(const TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82& unmarshaled, TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82_marshaled_com& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'TouchControlActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82_marshal_com_back(const TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82_marshaled_com& marshaled, TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'TouchControlActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Touch/TouchControlActions
IL2CPP_EXTERN_C void TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82_marshal_com_cleanup(TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82_marshaled_com& marshaled)
{
}
// System.Void Touch/TouchControlActions::.ctor(Touch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchControlActions__ctor_m3DBBF4BEB5A6F1BDB8BDAC54B92F21B9D515C21E (TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82* __this, Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* ___wrapper0, const RuntimeMethod* method) 
{
	{
		// public TouchControlActions(@Touch wrapper) { m_Wrapper = wrapper; }
		Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* L_0 = ___wrapper0;
		__this->___m_Wrapper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Wrapper_0), (void*)L_0);
		// public TouchControlActions(@Touch wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_EXTERN_C  void TouchControlActions__ctor_m3DBBF4BEB5A6F1BDB8BDAC54B92F21B9D515C21E_AdjustorThunk (RuntimeObject* __this, Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* ___wrapper0, const RuntimeMethod* method)
{
	TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82*>(__this + _offset);
	TouchControlActions__ctor_m3DBBF4BEB5A6F1BDB8BDAC54B92F21B9D515C21E_inline(_thisAdjusted, ___wrapper0, method);
}
// UnityEngine.InputSystem.InputAction Touch/TouchControlActions::get_TouchInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* TouchControlActions_get_TouchInput_mD438A943C8D04F3342516907BF77D671C935A700 (TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @TouchInput => m_Wrapper.m_TouchControl_TouchInput;
		Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_TouchControl_TouchInput_3;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* TouchControlActions_get_TouchInput_mD438A943C8D04F3342516907BF77D671C935A700_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = TouchControlActions_get_TouchInput_mD438A943C8D04F3342516907BF77D671C935A700(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction Touch/TouchControlActions::get_TouchPress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* TouchControlActions_get_TouchPress_m8403F741C84E27FA873FAD6ECE66FFD226CCFC53 (TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @TouchPress => m_Wrapper.m_TouchControl_TouchPress;
		Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_TouchControl_TouchPress_4;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* TouchControlActions_get_TouchPress_m8403F741C84E27FA873FAD6ECE66FFD226CCFC53_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = TouchControlActions_get_TouchPress_m8403F741C84E27FA873FAD6ECE66FFD226CCFC53(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction Touch/TouchControlActions::get_TouchPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* TouchControlActions_get_TouchPosition_m3DC10D48CBF82D8BBEFD0CB8AD62CFC031248B3A (TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @TouchPosition => m_Wrapper.m_TouchControl_TouchPosition;
		Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_TouchControl_TouchPosition_5;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* TouchControlActions_get_TouchPosition_m3DC10D48CBF82D8BBEFD0CB8AD62CFC031248B3A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = TouchControlActions_get_TouchPosition_m3DC10D48CBF82D8BBEFD0CB8AD62CFC031248B3A(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap Touch/TouchControlActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* TouchControlActions_Get_mD0A68A8E78323EC8705B8981A8170A68868AA5C6 (TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82* __this, const RuntimeMethod* method) 
{
	{
		// public InputActionMap Get() { return m_Wrapper.m_TouchControl; }
		Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_1 = L_0->___m_TouchControl_1;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* TouchControlActions_Get_mD0A68A8E78323EC8705B8981A8170A68868AA5C6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82*>(__this + _offset);
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* _returnValue;
	_returnValue = TouchControlActions_Get_mD0A68A8E78323EC8705B8981A8170A68868AA5C6(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Touch/TouchControlActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchControlActions_Enable_mB1D719E37B984A481CF4CDEF6186F05C4B35D820 (TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82* __this, const RuntimeMethod* method) 
{
	{
		// public void Enable() { Get().Enable(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = TouchControlActions_Get_mD0A68A8E78323EC8705B8981A8170A68868AA5C6(__this, NULL);
		NullCheck(L_0);
		InputActionMap_Enable_mAB23F0C4179D27C375F9FA335898B02E336CA4F6(L_0, NULL);
		// public void Enable() { Get().Enable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void TouchControlActions_Enable_mB1D719E37B984A481CF4CDEF6186F05C4B35D820_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82*>(__this + _offset);
	TouchControlActions_Enable_mB1D719E37B984A481CF4CDEF6186F05C4B35D820(_thisAdjusted, method);
}
// System.Void Touch/TouchControlActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchControlActions_Disable_m50A9ADE4A72A29B44926F4DA8D40E8CBDF46178B (TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82* __this, const RuntimeMethod* method) 
{
	{
		// public void Disable() { Get().Disable(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = TouchControlActions_Get_mD0A68A8E78323EC8705B8981A8170A68868AA5C6(__this, NULL);
		NullCheck(L_0);
		InputActionMap_Disable_m987468348648610F8B84D4F481592FF37AF5445C(L_0, NULL);
		// public void Disable() { Get().Disable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void TouchControlActions_Disable_m50A9ADE4A72A29B44926F4DA8D40E8CBDF46178B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82*>(__this + _offset);
	TouchControlActions_Disable_m50A9ADE4A72A29B44926F4DA8D40E8CBDF46178B(_thisAdjusted, method);
}
// System.Boolean Touch/TouchControlActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TouchControlActions_get_enabled_m19FF65DB0669D8523EA4E7DEED768593ECC75DAC (TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82* __this, const RuntimeMethod* method) 
{
	{
		// public bool enabled => Get().enabled;
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = TouchControlActions_Get_mD0A68A8E78323EC8705B8981A8170A68868AA5C6(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InputActionMap_get_enabled_mB89FAA20F1EA1884A28829B3E350822D7456E888(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TouchControlActions_get_enabled_m19FF65DB0669D8523EA4E7DEED768593ECC75DAC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82*>(__this + _offset);
	bool _returnValue;
	_returnValue = TouchControlActions_get_enabled_m19FF65DB0669D8523EA4E7DEED768593ECC75DAC(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap Touch/TouchControlActions::op_Implicit(Touch/TouchControlActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* TouchControlActions_op_Implicit_m9D43F2A85C91B54DE980B9A6BDAA4DDAE2616BC3 (TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82 ___set0, const RuntimeMethod* method) 
{
	{
		// public static implicit operator InputActionMap(TouchControlActions set) { return set.Get(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = TouchControlActions_Get_mD0A68A8E78323EC8705B8981A8170A68868AA5C6((&___set0), NULL);
		return L_0;
	}
}
// System.Void Touch/TouchControlActions::SetCallbacks(Touch/ITouchControlActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchControlActions_SetCallbacks_m5203A41D5DCF937089EE7E9E4D8E1368A14C163D (TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchControlActions_t12D7DD601475071D7008E4A22B66735DB1E23853_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Wrapper.m_TouchControlActionsCallbackInterface != null)
		Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___m_TouchControlActionsCallbackInterface_2;
		if (!L_1)
		{
			goto IL_0142;
		}
	}
	{
		// @TouchInput.started -= m_Wrapper.m_TouchControlActionsCallbackInterface.OnTouchInput;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2;
		L_2 = TouchControlActions_get_TouchInput_mD438A943C8D04F3342516907BF77D671C935A700(__this, NULL);
		Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* L_3 = __this->___m_Wrapper_0;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___m_TouchControlActionsCallbackInterface_2;
		RuntimeObject* L_5 = L_4;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_6 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_6, L_5, (intptr_t)((void*)GetInterfaceMethodInfo(L_5, 0, ITouchControlActions_t12D7DD601475071D7008E4A22B66735DB1E23853_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_2);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_2, L_6, NULL);
		// @TouchInput.performed -= m_Wrapper.m_TouchControlActionsCallbackInterface.OnTouchInput;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_7;
		L_7 = TouchControlActions_get_TouchInput_mD438A943C8D04F3342516907BF77D671C935A700(__this, NULL);
		Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* L_8 = __this->___m_Wrapper_0;
		NullCheck(L_8);
		RuntimeObject* L_9 = L_8->___m_TouchControlActionsCallbackInterface_2;
		RuntimeObject* L_10 = L_9;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_11 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_11, L_10, (intptr_t)((void*)GetInterfaceMethodInfo(L_10, 0, ITouchControlActions_t12D7DD601475071D7008E4A22B66735DB1E23853_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_7);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_7, L_11, NULL);
		// @TouchInput.canceled -= m_Wrapper.m_TouchControlActionsCallbackInterface.OnTouchInput;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_12;
		L_12 = TouchControlActions_get_TouchInput_mD438A943C8D04F3342516907BF77D671C935A700(__this, NULL);
		Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* L_13 = __this->___m_Wrapper_0;
		NullCheck(L_13);
		RuntimeObject* L_14 = L_13->___m_TouchControlActionsCallbackInterface_2;
		RuntimeObject* L_15 = L_14;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_16 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_16, L_15, (intptr_t)((void*)GetInterfaceMethodInfo(L_15, 0, ITouchControlActions_t12D7DD601475071D7008E4A22B66735DB1E23853_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_12);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_12, L_16, NULL);
		// @TouchPress.started -= m_Wrapper.m_TouchControlActionsCallbackInterface.OnTouchPress;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_17;
		L_17 = TouchControlActions_get_TouchPress_m8403F741C84E27FA873FAD6ECE66FFD226CCFC53(__this, NULL);
		Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* L_18 = __this->___m_Wrapper_0;
		NullCheck(L_18);
		RuntimeObject* L_19 = L_18->___m_TouchControlActionsCallbackInterface_2;
		RuntimeObject* L_20 = L_19;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_21 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_21, L_20, (intptr_t)((void*)GetInterfaceMethodInfo(L_20, 1, ITouchControlActions_t12D7DD601475071D7008E4A22B66735DB1E23853_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_17);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_17, L_21, NULL);
		// @TouchPress.performed -= m_Wrapper.m_TouchControlActionsCallbackInterface.OnTouchPress;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_22;
		L_22 = TouchControlActions_get_TouchPress_m8403F741C84E27FA873FAD6ECE66FFD226CCFC53(__this, NULL);
		Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* L_23 = __this->___m_Wrapper_0;
		NullCheck(L_23);
		RuntimeObject* L_24 = L_23->___m_TouchControlActionsCallbackInterface_2;
		RuntimeObject* L_25 = L_24;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_26 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_26, L_25, (intptr_t)((void*)GetInterfaceMethodInfo(L_25, 1, ITouchControlActions_t12D7DD601475071D7008E4A22B66735DB1E23853_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_22);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_22, L_26, NULL);
		// @TouchPress.canceled -= m_Wrapper.m_TouchControlActionsCallbackInterface.OnTouchPress;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_27;
		L_27 = TouchControlActions_get_TouchPress_m8403F741C84E27FA873FAD6ECE66FFD226CCFC53(__this, NULL);
		Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* L_28 = __this->___m_Wrapper_0;
		NullCheck(L_28);
		RuntimeObject* L_29 = L_28->___m_TouchControlActionsCallbackInterface_2;
		RuntimeObject* L_30 = L_29;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_31 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_31, L_30, (intptr_t)((void*)GetInterfaceMethodInfo(L_30, 1, ITouchControlActions_t12D7DD601475071D7008E4A22B66735DB1E23853_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_27);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_27, L_31, NULL);
		// @TouchPosition.started -= m_Wrapper.m_TouchControlActionsCallbackInterface.OnTouchPosition;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_32;
		L_32 = TouchControlActions_get_TouchPosition_m3DC10D48CBF82D8BBEFD0CB8AD62CFC031248B3A(__this, NULL);
		Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* L_33 = __this->___m_Wrapper_0;
		NullCheck(L_33);
		RuntimeObject* L_34 = L_33->___m_TouchControlActionsCallbackInterface_2;
		RuntimeObject* L_35 = L_34;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_36 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_36, L_35, (intptr_t)((void*)GetInterfaceMethodInfo(L_35, 2, ITouchControlActions_t12D7DD601475071D7008E4A22B66735DB1E23853_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_32);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_32, L_36, NULL);
		// @TouchPosition.performed -= m_Wrapper.m_TouchControlActionsCallbackInterface.OnTouchPosition;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_37;
		L_37 = TouchControlActions_get_TouchPosition_m3DC10D48CBF82D8BBEFD0CB8AD62CFC031248B3A(__this, NULL);
		Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* L_38 = __this->___m_Wrapper_0;
		NullCheck(L_38);
		RuntimeObject* L_39 = L_38->___m_TouchControlActionsCallbackInterface_2;
		RuntimeObject* L_40 = L_39;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_41 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_41, L_40, (intptr_t)((void*)GetInterfaceMethodInfo(L_40, 2, ITouchControlActions_t12D7DD601475071D7008E4A22B66735DB1E23853_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_37);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_37, L_41, NULL);
		// @TouchPosition.canceled -= m_Wrapper.m_TouchControlActionsCallbackInterface.OnTouchPosition;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_42;
		L_42 = TouchControlActions_get_TouchPosition_m3DC10D48CBF82D8BBEFD0CB8AD62CFC031248B3A(__this, NULL);
		Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* L_43 = __this->___m_Wrapper_0;
		NullCheck(L_43);
		RuntimeObject* L_44 = L_43->___m_TouchControlActionsCallbackInterface_2;
		RuntimeObject* L_45 = L_44;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_46 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_46, L_45, (intptr_t)((void*)GetInterfaceMethodInfo(L_45, 2, ITouchControlActions_t12D7DD601475071D7008E4A22B66735DB1E23853_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_42);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_42, L_46, NULL);
	}

IL_0142:
	{
		// m_Wrapper.m_TouchControlActionsCallbackInterface = instance;
		Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* L_47 = __this->___m_Wrapper_0;
		RuntimeObject* L_48 = ___instance0;
		NullCheck(L_47);
		L_47->___m_TouchControlActionsCallbackInterface_2 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&L_47->___m_TouchControlActionsCallbackInterface_2), (void*)L_48);
		// if (instance != null)
		RuntimeObject* L_49 = ___instance0;
		if (!L_49)
		{
			goto IL_022c;
		}
	}
	{
		// @TouchInput.started += instance.OnTouchInput;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_50;
		L_50 = TouchControlActions_get_TouchInput_mD438A943C8D04F3342516907BF77D671C935A700(__this, NULL);
		RuntimeObject* L_51 = ___instance0;
		RuntimeObject* L_52 = L_51;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_53 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_53);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_53, L_52, (intptr_t)((void*)GetInterfaceMethodInfo(L_52, 0, ITouchControlActions_t12D7DD601475071D7008E4A22B66735DB1E23853_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_50);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_50, L_53, NULL);
		// @TouchInput.performed += instance.OnTouchInput;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_54;
		L_54 = TouchControlActions_get_TouchInput_mD438A943C8D04F3342516907BF77D671C935A700(__this, NULL);
		RuntimeObject* L_55 = ___instance0;
		RuntimeObject* L_56 = L_55;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_57 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_57, L_56, (intptr_t)((void*)GetInterfaceMethodInfo(L_56, 0, ITouchControlActions_t12D7DD601475071D7008E4A22B66735DB1E23853_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_54);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_54, L_57, NULL);
		// @TouchInput.canceled += instance.OnTouchInput;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_58;
		L_58 = TouchControlActions_get_TouchInput_mD438A943C8D04F3342516907BF77D671C935A700(__this, NULL);
		RuntimeObject* L_59 = ___instance0;
		RuntimeObject* L_60 = L_59;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_61 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_61);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_61, L_60, (intptr_t)((void*)GetInterfaceMethodInfo(L_60, 0, ITouchControlActions_t12D7DD601475071D7008E4A22B66735DB1E23853_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_58);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_58, L_61, NULL);
		// @TouchPress.started += instance.OnTouchPress;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_62;
		L_62 = TouchControlActions_get_TouchPress_m8403F741C84E27FA873FAD6ECE66FFD226CCFC53(__this, NULL);
		RuntimeObject* L_63 = ___instance0;
		RuntimeObject* L_64 = L_63;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_65 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_65);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_65, L_64, (intptr_t)((void*)GetInterfaceMethodInfo(L_64, 1, ITouchControlActions_t12D7DD601475071D7008E4A22B66735DB1E23853_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_62);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_62, L_65, NULL);
		// @TouchPress.performed += instance.OnTouchPress;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_66;
		L_66 = TouchControlActions_get_TouchPress_m8403F741C84E27FA873FAD6ECE66FFD226CCFC53(__this, NULL);
		RuntimeObject* L_67 = ___instance0;
		RuntimeObject* L_68 = L_67;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_69 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_69);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_69, L_68, (intptr_t)((void*)GetInterfaceMethodInfo(L_68, 1, ITouchControlActions_t12D7DD601475071D7008E4A22B66735DB1E23853_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_66);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_66, L_69, NULL);
		// @TouchPress.canceled += instance.OnTouchPress;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_70;
		L_70 = TouchControlActions_get_TouchPress_m8403F741C84E27FA873FAD6ECE66FFD226CCFC53(__this, NULL);
		RuntimeObject* L_71 = ___instance0;
		RuntimeObject* L_72 = L_71;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_73 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_73);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_73, L_72, (intptr_t)((void*)GetInterfaceMethodInfo(L_72, 1, ITouchControlActions_t12D7DD601475071D7008E4A22B66735DB1E23853_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_70);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_70, L_73, NULL);
		// @TouchPosition.started += instance.OnTouchPosition;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_74;
		L_74 = TouchControlActions_get_TouchPosition_m3DC10D48CBF82D8BBEFD0CB8AD62CFC031248B3A(__this, NULL);
		RuntimeObject* L_75 = ___instance0;
		RuntimeObject* L_76 = L_75;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_77 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_77);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_77, L_76, (intptr_t)((void*)GetInterfaceMethodInfo(L_76, 2, ITouchControlActions_t12D7DD601475071D7008E4A22B66735DB1E23853_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_74);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_74, L_77, NULL);
		// @TouchPosition.performed += instance.OnTouchPosition;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_78;
		L_78 = TouchControlActions_get_TouchPosition_m3DC10D48CBF82D8BBEFD0CB8AD62CFC031248B3A(__this, NULL);
		RuntimeObject* L_79 = ___instance0;
		RuntimeObject* L_80 = L_79;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_81 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_81);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_81, L_80, (intptr_t)((void*)GetInterfaceMethodInfo(L_80, 2, ITouchControlActions_t12D7DD601475071D7008E4A22B66735DB1E23853_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_78);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_78, L_81, NULL);
		// @TouchPosition.canceled += instance.OnTouchPosition;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_82;
		L_82 = TouchControlActions_get_TouchPosition_m3DC10D48CBF82D8BBEFD0CB8AD62CFC031248B3A(__this, NULL);
		RuntimeObject* L_83 = ___instance0;
		RuntimeObject* L_84 = L_83;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_85 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_85);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_85, L_84, (intptr_t)((void*)GetInterfaceMethodInfo(L_84, 2, ITouchControlActions_t12D7DD601475071D7008E4A22B66735DB1E23853_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_82);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_82, L_85, NULL);
	}

IL_022c:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TouchControlActions_SetCallbacks_m5203A41D5DCF937089EE7E9E4D8E1368A14C163D_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82*>(__this + _offset);
	TouchControlActions_SetCallbacks_m5203A41D5DCF937089EE7E9E4D8E1368A14C163D(_thisAdjusted, ___instance0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerMove::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_Start_m1ACFD10BF71998671B39878CE4208A1F880BE62E (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06_m1A0765C079AA01F0281C0BE6994AE2BD57AF92EC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_7), (void*)L_0);
		// endGame = screen.GetComponent<EndGame>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___screen_5;
		NullCheck(L_1);
		EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* L_2;
		L_2 = GameObject_GetComponent_TisEndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06_m1A0765C079AA01F0281C0BE6994AE2BD57AF92EC(L_1, GameObject_GetComponent_TisEndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06_m1A0765C079AA01F0281C0BE6994AE2BD57AF92EC_RuntimeMethod_var);
		__this->___endGame_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___endGame_6), (void*)L_2);
		// }
		return;
	}
}
// System.Void PlayerMove::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_Update_m2D580181CA2970EE505CEA4D2E722DD2F72F2D29 (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 velocity = rb.velocity;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb_7;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_0, NULL);
		V_0 = L_1;
		// velocity.x = moveSpeed;
		float L_2 = __this->___moveSpeed_4;
		(&V_0)->___x_2 = L_2;
		// rb.velocity = velocity;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = __this->___rb_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		NullCheck(L_3);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void PlayerMove::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_OnCollisionEnter_m3F4A816556D9C2ED1588F7EA942136A0545B8B28 (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F94F4742528BDF9EB11E79D6B1AA693BB9912DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.CompareTag("Tree"))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteral2F94F4742528BDF9EB11E79D6B1AA693BB9912DF, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// endGame.OpenEndScreen();
		EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* L_3 = __this->___endGame_6;
		NullCheck(L_3);
		EndGame_OpenEndScreen_m61163D812C0BD53645BE897095D6E2C7B134A8AA(L_3, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void PlayerMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove__ctor_m259C024B72725E14EF78BC65889964013830B7B2 (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float moveSpeed = 4f;
		__this->___moveSpeed_4 = (4.0f);
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
// System.Void Road::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Road_Update_m5EBA635677CAE5CEEB1BC765C9B6AF48D83F03E4 (Road_t361F14BED654C37F9762713439B45E48FAF8778F* __this, const RuntimeMethod* method) 
{
	{
		// transform.localScale = new Vector3(283, .01f, player.transform.localScale.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___player_4;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_2, NULL);
		float L_4 = L_3.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), (283.0f), (0.00999999978f), L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void Road::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Road__ctor_mFB8A47C406A2E756C6F105ECE120911147CC63C4 (Road_t361F14BED654C37F9762713439B45E48FAF8778F* __this, const RuntimeMethod* method) 
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
// System.Void ShootBall::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootBall_Start_mF361EC632119EC03AD43251CE3BF3F3241E577DD (ShootBall_t692CDFD1501143404C9BEF465255407E6ADC78B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m7FE20EC51F5F0CD242B94967CCF5B8E32BA9FC62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// meshRenderer = GetComponent<MeshRenderer>();
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0;
		L_0 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		__this->___meshRenderer_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshRenderer_5), (void*)L_0);
		// explosion = GetComponentInChildren<ParticleSystem>();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_1;
		L_1 = Component_GetComponentInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m7FE20EC51F5F0CD242B94967CCF5B8E32BA9FC62(__this, Component_GetComponentInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m7FE20EC51F5F0CD242B94967CCF5B8E32BA9FC62_RuntimeMethod_var);
		__this->___explosion_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___explosion_6), (void*)L_1);
		// explosion.gameObject.transform.localScale = gameObject.transform.localScale * 3;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_2 = __this->___explosion_6;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, (3.0f), NULL);
		NullCheck(L_4);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_4, L_8, NULL);
		// }
		return;
	}
}
// System.Void ShootBall::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootBall_Update_mA75F348EB1237735F2D9877479E0406727FFD1A7 (ShootBall_t692CDFD1501143404C9BEF465255407E6ADC78B0* __this, const RuntimeMethod* method) 
{
	{
		// transform.Translate(moveSpeed * Time.deltaTime * transform.right);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_1 = __this->___moveSpeed_4;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(L_1, L_2)), L_4, NULL);
		NullCheck(L_0);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void ShootBall::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootBall_OnCollisionEnter_m52A674EF3DAE5B24F85DE12D69A8C689EE5CA9FB (ShootBall_t692CDFD1501143404C9BEF465255407E6ADC78B0* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	{
		// moveSpeed = 0;
		__this->___moveSpeed_4 = (0.0f);
		// isStopped = true;
		__this->___isStopped_7 = (bool)1;
		// meshRenderer.enabled = false;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->___meshRenderer_5;
		NullCheck(L_0);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// explosion.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_1 = __this->___explosion_6;
		NullCheck(L_1);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_1, NULL);
		// StartCoroutine(DestroyBall());
		RuntimeObject* L_2;
		L_2 = ShootBall_DestroyBall_mF591ACC6365ACD8193DC892B721620C6FDEBC842(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void ShootBall::OnTriggerStay(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootBall_OnTriggerStay_mC12DF4C0E86C9497A99F08ECEB14502A28D28424 (ShootBall_t692CDFD1501143404C9BEF465255407E6ADC78B0* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTree_t523ABF112CF15FC9FECDF55ED678B31919BF162F_m91E2DB2750104A2DB4336B2861FF74DFF33CF34A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F94F4742528BDF9EB11E79D6B1AA693BB9912DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isStopped)
		bool L_0 = __this->___isStopped_7;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// if (other.CompareTag("Tree"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = ___other0;
		NullCheck(L_1);
		bool L_2;
		L_2 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_1, _stringLiteral2F94F4742528BDF9EB11E79D6B1AA693BB9912DF, NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// other.GetComponent<Tree>().isInTriggerArea = true;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___other0;
		NullCheck(L_3);
		Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F* L_4;
		L_4 = Component_GetComponent_TisTree_t523ABF112CF15FC9FECDF55ED678B31919BF162F_m91E2DB2750104A2DB4336B2861FF74DFF33CF34A(L_3, Component_GetComponent_TisTree_t523ABF112CF15FC9FECDF55ED678B31919BF162F_m91E2DB2750104A2DB4336B2861FF74DFF33CF34A_RuntimeMethod_var);
		NullCheck(L_4);
		Tree_set_isInTriggerArea_mD2DB1B29A90F3BA45CCC611619397157CB0118FA_inline(L_4, (bool)1, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator ShootBall::DestroyBall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShootBall_DestroyBall_mF591ACC6365ACD8193DC892B721620C6FDEBC842 (ShootBall_t692CDFD1501143404C9BEF465255407E6ADC78B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDestroyBallU3Ed__8_tFFD2607F8773023EC2B7F4A31ABB26113445CC0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDestroyBallU3Ed__8_tFFD2607F8773023EC2B7F4A31ABB26113445CC0E* L_0 = (U3CDestroyBallU3Ed__8_tFFD2607F8773023EC2B7F4A31ABB26113445CC0E*)il2cpp_codegen_object_new(U3CDestroyBallU3Ed__8_tFFD2607F8773023EC2B7F4A31ABB26113445CC0E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDestroyBallU3Ed__8__ctor_m64519C0CF97056289752DFB12437D11DB325D0F9(L_0, 0, NULL);
		U3CDestroyBallU3Ed__8_tFFD2607F8773023EC2B7F4A31ABB26113445CC0E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void ShootBall::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootBall__ctor_m4AE57393B22BF00AC5143C8517A32538163C680A (ShootBall_t692CDFD1501143404C9BEF465255407E6ADC78B0* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float moveSpeed = 9;
		__this->___moveSpeed_4 = (9.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Boolean ShootBall::<DestroyBall>b__8_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShootBall_U3CDestroyBallU3Eb__8_0_m0FC410B43460F7259004D41F1F3A8C474C3B0E48 (ShootBall_t692CDFD1501143404C9BEF465255407E6ADC78B0* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitUntil(() => !explosion.isPlaying);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___explosion_6;
		NullCheck(L_0);
		bool L_1;
		L_1 = ParticleSystem_get_isPlaying_mC5170DA3C904670B88200C8DA1E0F8FC1BC7C42B(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
// System.Void ShootBall/<DestroyBall>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyBallU3Ed__8__ctor_m64519C0CF97056289752DFB12437D11DB325D0F9 (U3CDestroyBallU3Ed__8_tFFD2607F8773023EC2B7F4A31ABB26113445CC0E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ShootBall/<DestroyBall>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyBallU3Ed__8_System_IDisposable_Dispose_m77A8BD8CA971C4537C3BB862EE93681FCCD06D33 (U3CDestroyBallU3Ed__8_tFFD2607F8773023EC2B7F4A31ABB26113445CC0E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ShootBall/<DestroyBall>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDestroyBallU3Ed__8_MoveNext_mACCAFD52C57EA6BAFE04DBC7A2FBC0DC6646C1D5 (U3CDestroyBallU3Ed__8_tFFD2607F8773023EC2B7F4A31ABB26113445CC0E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShootBall_U3CDestroyBallU3Eb__8_0_m0FC410B43460F7259004D41F1F3A8C474C3B0E48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ShootBall_t692CDFD1501143404C9BEF465255407E6ADC78B0* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ShootBall_t692CDFD1501143404C9BEF465255407E6ADC78B0* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitUntil(() => !explosion.isPlaying);
		ShootBall_t692CDFD1501143404C9BEF465255407E6ADC78B0* L_4 = V_1;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_5 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_5, L_4, (intptr_t)((void*)ShootBall_U3CDestroyBallU3Eb__8_0_m0FC410B43460F7259004D41F1F3A8C474C3B0E48_RuntimeMethod_var), NULL);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_6 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Destroy(gameObject);
		ShootBall_t692CDFD1501143404C9BEF465255407E6ADC78B0* L_7 = V_1;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_8, NULL);
		// }
		return (bool)0;
	}
}
// System.Object ShootBall/<DestroyBall>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDestroyBallU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1CA8DE143B7A02D52E122CEB0792647BC73B44E9 (U3CDestroyBallU3Ed__8_tFFD2607F8773023EC2B7F4A31ABB26113445CC0E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ShootBall/<DestroyBall>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyBallU3Ed__8_System_Collections_IEnumerator_Reset_mD55F60D47EDB60FEE4D40C87EC27CAB3CEB26FB4 (U3CDestroyBallU3Ed__8_tFFD2607F8773023EC2B7F4A31ABB26113445CC0E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDestroyBallU3Ed__8_System_Collections_IEnumerator_Reset_mD55F60D47EDB60FEE4D40C87EC27CAB3CEB26FB4_RuntimeMethod_var)));
	}
}
// System.Object ShootBall/<DestroyBall>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDestroyBallU3Ed__8_System_Collections_IEnumerator_get_Current_m8CAB13679DB73ACA221FB459B661DA31966AF2D6 (U3CDestroyBallU3Ed__8_tFFD2607F8773023EC2B7F4A31ABB26113445CC0E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void ShootControl::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootControl_Awake_m303BE40E88EEBDC37CE9181187B1841E2B89C1E4 (ShootControl_t31618C05DC02BC9743209AA5AA14248C2EB354CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06_m1A0765C079AA01F0281C0BE6994AE2BD57AF92EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisInputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677_mD89593A49808DCACB240D17149BA7ED1E15E3247_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// inputManager = FindObjectOfType<InputManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* L_0;
		L_0 = Object_FindObjectOfType_TisInputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677_mD89593A49808DCACB240D17149BA7ED1E15E3247(Object_FindObjectOfType_TisInputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677_mD89593A49808DCACB240D17149BA7ED1E15E3247_RuntimeMethod_var);
		__this->___inputManager_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputManager_9), (void*)L_0);
		// multiplyScale = transform.localScale.magnitude;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		V_0 = L_2;
		float L_3;
		L_3 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		__this->___multiplyScale_8 = L_3;
		// endGame = screen.GetComponent<EndGame>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___screen_6;
		NullCheck(L_4);
		EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* L_5;
		L_5 = GameObject_GetComponent_TisEndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06_m1A0765C079AA01F0281C0BE6994AE2BD57AF92EC(L_4, GameObject_GetComponent_TisEndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06_m1A0765C079AA01F0281C0BE6994AE2BD57AF92EC_RuntimeMethod_var);
		__this->___endGame_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___endGame_7), (void*)L_5);
		// }
		return;
	}
}
// System.Void ShootControl::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootControl_FixedUpdate_m95D1DBCA7439B338F1AD4DA7BCAAFB97A34C24D5 (ShootControl_t31618C05DC02BC9743209AA5AA14248C2EB354CD* __this, const RuntimeMethod* method) 
{
	{
		// if (transform.localScale.x < minScale)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		float L_2 = L_1.___x_2;
		float L_3 = __this->___minScale_5;
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0045;
		}
	}
	{
		// transform.localScale = new Vector3(minScale, minScale, minScale);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_5 = __this->___minScale_5;
		float L_6 = __this->___minScale_5;
		float L_7 = __this->___minScale_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_5, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_4, L_8, NULL);
		// endGame.OpenEndScreen();
		EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* L_9 = __this->___endGame_7;
		NullCheck(L_9);
		EndGame_OpenEndScreen_m61163D812C0BD53645BE897095D6E2C7B134A8AA(L_9, NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void ShootControl::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootControl_OnEnable_mD8EE4BC344D168EC355C4479C898A69EF7169BBD (ShootControl_t31618C05DC02BC9743209AA5AA14248C2EB354CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShootControl_Shoot_mBC98B39CAE8A8D0571BCC423A520AF9F7B2DDDED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void OnEnable() => inputManager.OnEndTouch += Shoot;
		InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* L_0 = __this->___inputManager_9;
		EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* L_1 = (EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE*)il2cpp_codegen_object_new(EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EndTouchEvent__ctor_m1DE02D701B772BB6E35643680391BF5200DDFAD5(L_1, __this, (intptr_t)((void*)ShootControl_Shoot_mBC98B39CAE8A8D0571BCC423A520AF9F7B2DDDED_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InputManager_add_OnEndTouch_m3B9DF6BBCE4F060F29783F125C76B50460F43C5B(L_0, L_1, NULL);
		return;
	}
}
// System.Void ShootControl::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootControl_OnDisable_m7C35D1E3C1681C1BAA74D60157B8F393D1DDA7E3 (ShootControl_t31618C05DC02BC9743209AA5AA14248C2EB354CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShootControl_Shoot_mBC98B39CAE8A8D0571BCC423A520AF9F7B2DDDED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void OnDisable() => inputManager.OnEndTouch -= Shoot;
		InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* L_0 = __this->___inputManager_9;
		EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* L_1 = (EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE*)il2cpp_codegen_object_new(EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EndTouchEvent__ctor_m1DE02D701B772BB6E35643680391BF5200DDFAD5(L_1, __this, (intptr_t)((void*)ShootControl_Shoot_mBC98B39CAE8A8D0571BCC423A520AF9F7B2DDDED_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InputManager_remove_OnEndTouch_m4DE9834CC8E50C1FCA27C63C9C4D05B74A5F3CBE(L_0, L_1, NULL);
		return;
	}
}
// System.Void ShootControl::Shoot(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootControl_Shoot_mBC98B39CAE8A8D0571BCC423A520AF9F7B2DDDED (ShootControl_t31618C05DC02BC9743209AA5AA14248C2EB354CD* __this, float ___time0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	{
		// time /= 2;
		float L_0 = ___time0;
		___time0 = ((float)(L_0/(2.0f)));
		// var shootBall = Instantiate(shootPrefab, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___shootPrefab_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_1, L_3, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// var scaleSize = time * multiplyScale;
		float L_6 = ___time0;
		float L_7 = __this->___multiplyScale_8;
		V_0 = ((float)il2cpp_codegen_multiply(L_6, L_7));
		// if (time > 1)
		float L_8 = ___time0;
		G_B1_0 = L_5;
		if ((!(((float)L_8) > ((float)(1.0f)))))
		{
			G_B4_0 = L_5;
			goto IL_006a;
		}
	}
	{
		// if (scaleSize > transform.localScale.magnitude)
		float L_9 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_10, NULL);
		V_2 = L_11;
		float L_12;
		L_12 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		G_B2_0 = G_B1_0;
		if ((!(((float)L_9) > ((float)L_12))))
		{
			G_B3_0 = G_B1_0;
			goto IL_0056;
		}
	}
	{
		// endGame.OpenEndScreen();
		EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* L_13 = __this->___endGame_7;
		NullCheck(L_13);
		EndGame_OpenEndScreen_m61163D812C0BD53645BE897095D6E2C7B134A8AA(L_13, NULL);
		G_B3_0 = G_B2_0;
	}

IL_0056:
	{
		// scaleSize = transform.localScale.magnitude;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_14, NULL);
		V_2 = L_15;
		float L_16;
		L_16 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		V_0 = L_16;
		G_B4_0 = G_B3_0;
	}

IL_006a:
	{
		// var scale = new Vector3(scaleSize, scaleSize, scaleSize);
		float L_17 = V_0;
		float L_18 = V_0;
		float L_19 = V_0;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), L_17, L_18, L_19, NULL);
		// shootBall.transform.localScale = scale;
		NullCheck(G_B4_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(G_B4_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_1;
		NullCheck(L_20);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_20, L_21, NULL);
		// transform.localScale -= scale / 2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = L_22;
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_25, (2.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_24, L_26, NULL);
		NullCheck(L_23);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_23, L_27, NULL);
		// }
		return;
	}
}
// System.Void ShootControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootControl__ctor_mD18F5C0F84BD9D676FA86E80A4B4D567AED94CFD (ShootControl_t31618C05DC02BC9743209AA5AA14248C2EB354CD* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float minScale = 1f;
		__this->___minScale_5 = (1.0f);
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
// System.Boolean Tree::get_isInTriggerArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tree_get_isInTriggerArea_m0093DA459A5E9D28FBB1003AB95B6FB2029B57FA (Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F* __this, const RuntimeMethod* method) 
{
	{
		// public bool isInTriggerArea { get; set; } = false;
		bool L_0 = __this->___U3CisInTriggerAreaU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Tree::set_isInTriggerArea(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree_set_isInTriggerArea_mD2DB1B29A90F3BA45CCC611619397157CB0118FA (Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool isInTriggerArea { get; set; } = false;
		bool L_0 = ___value0;
		__this->___U3CisInTriggerAreaU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void Tree::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree_Start_mFB8A27A7DE8C2D35BBBCBC35B425F774DCD3BE43 (Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// meshRenderer = GetComponent<MeshRenderer>();
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0;
		L_0 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		__this->___meshRenderer_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshRenderer_6), (void*)L_0);
		// AddExplosionPrefab();
		Tree_AddExplosionPrefab_m40BC2C26C6B8F643B5D2EDAEDE87BEAC669894BE(__this, NULL);
		// }
		return;
	}
}
// System.Void Tree::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree_FixedUpdate_m27ABEB5E9D5E87660BCA616F7A87CEE69B89D9C2 (Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F* __this, const RuntimeMethod* method) 
{
	{
		// if (isInTriggerArea && isEntered)
		bool L_0;
		L_0 = Tree_get_isInTriggerArea_m0093DA459A5E9D28FBB1003AB95B6FB2029B57FA_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		bool L_1 = __this->___isEntered_9;
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		// meshRenderer.sharedMaterial = hitMaterial;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_2 = __this->___meshRenderer_6;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___hitMaterial_4;
		NullCheck(L_2);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_2, L_3, NULL);
		// StartCoroutine(DestroyAfterHit(gameObject));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		RuntimeObject* L_5;
		L_5 = Tree_DestroyAfterHit_m8DA3EE08124F6CE1CD3AC530FFF2FF5D436FBC33(__this, L_4, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		// isInTriggerArea = false;
		Tree_set_isInTriggerArea_mD2DB1B29A90F3BA45CCC611619397157CB0118FA_inline(__this, (bool)0, NULL);
		// isEntered = false;
		__this->___isEntered_9 = (bool)0;
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Tree::DestroyAfterHit(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Tree_DestroyAfterHit_m8DA3EE08124F6CE1CD3AC530FFF2FF5D436FBC33 (Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDestroyAfterHitU3Ed__11_t0519306A8AAD55D87E3E1123D69CBCD1B0D990A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDestroyAfterHitU3Ed__11_t0519306A8AAD55D87E3E1123D69CBCD1B0D990A0* L_0 = (U3CDestroyAfterHitU3Ed__11_t0519306A8AAD55D87E3E1123D69CBCD1B0D990A0*)il2cpp_codegen_object_new(U3CDestroyAfterHitU3Ed__11_t0519306A8AAD55D87E3E1123D69CBCD1B0D990A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDestroyAfterHitU3Ed__11__ctor_m0E9FEBB875F14741873A733644AE25CD50A81279(L_0, 0, NULL);
		U3CDestroyAfterHitU3Ed__11_t0519306A8AAD55D87E3E1123D69CBCD1B0D990A0* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Tree::AddExplosionPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree_AddExplosionPrefab_m40BC2C26C6B8F643B5D2EDAEDE87BEAC669894BE (Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var child = Instantiate(explosionPrefab, new Vector3(0, 4f, 0), Quaternion.Euler(0, Random.Range(0, 180), 0));
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___explosionPrefab_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.0f), (4.0f), (0.0f), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)180), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), ((float)L_2), (0.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_4;
		L_4 = Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2(L_0, L_1, L_3, Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2_RuntimeMethod_var);
		// child.transform.localScale = new Vector3(30, 30, 30);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_5 = L_4;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), (30.0f), (30.0f), (30.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_6, L_7, NULL);
		// child.transform.SetParent(transform, false);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_8, L_9, (bool)0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Tree::DestroyTree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Tree_DestroyTree_mFA81F3AB33A483421A7CDF04595C66A9B666CC14 (Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDestroyTreeU3Ed__13_t3F1756E246E0F84CA97EECA5DAEC9FBE78C141EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDestroyTreeU3Ed__13_t3F1756E246E0F84CA97EECA5DAEC9FBE78C141EE* L_0 = (U3CDestroyTreeU3Ed__13_t3F1756E246E0F84CA97EECA5DAEC9FBE78C141EE*)il2cpp_codegen_object_new(U3CDestroyTreeU3Ed__13_t3F1756E246E0F84CA97EECA5DAEC9FBE78C141EE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDestroyTreeU3Ed__13__ctor_m6DFB4958A7F0A9C584E0FA7749FE10591F1024CD(L_0, 0, NULL);
		U3CDestroyTreeU3Ed__13_t3F1756E246E0F84CA97EECA5DAEC9FBE78C141EE* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Tree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree__ctor_mCD46328B18360B940343A4B95645A9BF93F825F5 (Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F* __this, const RuntimeMethod* method) 
{
	{
		// private bool isEntered = true;
		__this->___isEntered_9 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Boolean Tree::<DestroyTree>b__13_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tree_U3CDestroyTreeU3Eb__13_0_m33973CF6E76D6DF353A24447B26F7A29D8A53790 (Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitUntil(() => !explosion.isPlaying);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___explosion_7;
		NullCheck(L_0);
		bool L_1;
		L_1 = ParticleSystem_get_isPlaying_mC5170DA3C904670B88200C8DA1E0F8FC1BC7C42B(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
// System.Void Tree/<DestroyAfterHit>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyAfterHitU3Ed__11__ctor_m0E9FEBB875F14741873A733644AE25CD50A81279 (U3CDestroyAfterHitU3Ed__11_t0519306A8AAD55D87E3E1123D69CBCD1B0D990A0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Tree/<DestroyAfterHit>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyAfterHitU3Ed__11_System_IDisposable_Dispose_m89767F51AAFA91CB2AC97FB7B7861AC2B59C6C7B (U3CDestroyAfterHitU3Ed__11_t0519306A8AAD55D87E3E1123D69CBCD1B0D990A0* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Tree/<DestroyAfterHit>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDestroyAfterHitU3Ed__11_MoveNext_mD71022E90E17A7A7E031DAD7A87FCEA4CE56F7F8 (U3CDestroyAfterHitU3Ed__11_t0519306A8AAD55D87E3E1123D69CBCD1B0D990A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m7FE20EC51F5F0CD242B94967CCF5B8E32BA9FC62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0041;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(Random.Range(1, 1.5f));
		float L_4;
		L_4 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((1.0f), (1.5f), NULL);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0041:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// meshRenderer.enabled = false;
		Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F* L_6 = V_1;
		NullCheck(L_6);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_7 = L_6->___meshRenderer_6;
		NullCheck(L_7);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_7, (bool)0, NULL);
		// explosion = GetComponentInChildren<ParticleSystem>();
		Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F* L_8 = V_1;
		Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F* L_9 = V_1;
		NullCheck(L_9);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_10;
		L_10 = Component_GetComponentInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m7FE20EC51F5F0CD242B94967CCF5B8E32BA9FC62(L_9, Component_GetComponentInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m7FE20EC51F5F0CD242B94967CCF5B8E32BA9FC62_RuntimeMethod_var);
		NullCheck(L_8);
		L_8->___explosion_7 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___explosion_7), (void*)L_10);
		// explosion.Play();
		Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F* L_11 = V_1;
		NullCheck(L_11);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_12 = L_11->___explosion_7;
		NullCheck(L_12);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_12, NULL);
		// StartCoroutine(DestroyTree());
		Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F* L_13 = V_1;
		Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F* L_14 = V_1;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = Tree_DestroyTree_mFA81F3AB33A483421A7CDF04595C66A9B666CC14(L_14, NULL);
		NullCheck(L_13);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_16;
		L_16 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_13, L_15, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Tree/<DestroyAfterHit>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDestroyAfterHitU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m167FBEF65873B789E5857E911546F08636F5C51C (U3CDestroyAfterHitU3Ed__11_t0519306A8AAD55D87E3E1123D69CBCD1B0D990A0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Tree/<DestroyAfterHit>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyAfterHitU3Ed__11_System_Collections_IEnumerator_Reset_mFB057EFA2EBB64E96BABDBC6BD12AF58F9D57E7A (U3CDestroyAfterHitU3Ed__11_t0519306A8AAD55D87E3E1123D69CBCD1B0D990A0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDestroyAfterHitU3Ed__11_System_Collections_IEnumerator_Reset_mFB057EFA2EBB64E96BABDBC6BD12AF58F9D57E7A_RuntimeMethod_var)));
	}
}
// System.Object Tree/<DestroyAfterHit>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDestroyAfterHitU3Ed__11_System_Collections_IEnumerator_get_Current_mBF7AFBE5903E690AB65BBDAA95DCB96C8C6C5144 (U3CDestroyAfterHitU3Ed__11_t0519306A8AAD55D87E3E1123D69CBCD1B0D990A0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Tree/<DestroyTree>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyTreeU3Ed__13__ctor_m6DFB4958A7F0A9C584E0FA7749FE10591F1024CD (U3CDestroyTreeU3Ed__13_t3F1756E246E0F84CA97EECA5DAEC9FBE78C141EE* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Tree/<DestroyTree>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyTreeU3Ed__13_System_IDisposable_Dispose_m66CC970A5C6801D36087C454E3A0029D970F1200 (U3CDestroyTreeU3Ed__13_t3F1756E246E0F84CA97EECA5DAEC9FBE78C141EE* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Tree/<DestroyTree>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDestroyTreeU3Ed__13_MoveNext_m906953E2DEC5B69E4EFA8D2D1A7557B2BADACDAE (U3CDestroyTreeU3Ed__13_t3F1756E246E0F84CA97EECA5DAEC9FBE78C141EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_U3CDestroyTreeU3Eb__13_0_m33973CF6E76D6DF353A24447B26F7A29D8A53790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitUntil(() => !explosion.isPlaying);
		Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F* L_4 = V_1;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_5 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_5, L_4, (intptr_t)((void*)Tree_U3CDestroyTreeU3Eb__13_0_m33973CF6E76D6DF353A24447B26F7A29D8A53790_RuntimeMethod_var), NULL);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_6 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Destroy(gameObject);
		Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F* L_7 = V_1;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_8, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Tree/<DestroyTree>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDestroyTreeU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m817A24C7A29D21FB893B19962538289D2246CD08 (U3CDestroyTreeU3Ed__13_t3F1756E246E0F84CA97EECA5DAEC9FBE78C141EE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Tree/<DestroyTree>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyTreeU3Ed__13_System_Collections_IEnumerator_Reset_mBDCEA3AA09CD6722ADFED3F22A540F62A2F820D1 (U3CDestroyTreeU3Ed__13_t3F1756E246E0F84CA97EECA5DAEC9FBE78C141EE* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDestroyTreeU3Ed__13_System_Collections_IEnumerator_Reset_mBDCEA3AA09CD6722ADFED3F22A540F62A2F820D1_RuntimeMethod_var)));
	}
}
// System.Object Tree/<DestroyTree>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDestroyTreeU3Ed__13_System_Collections_IEnumerator_get_Current_m116311ED48351853ABF031AC31B8947A4B0657D5 (U3CDestroyTreeU3Ed__13_t3F1756E246E0F84CA97EECA5DAEC9FBE78C141EE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___from0), NULL);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___to1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___from0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___to1;
		float L_7;
		L_7 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* DoorRamp_get_animator_m70F202589753A0BD86B811E93BD95DD07009EA7F_inline (DoorRamp_t69CB6A72DCFD3F080BF78F327C54BA7F6EF37BC4* __this, const RuntimeMethod* method) 
{
	{
		// public Animator animator { get; private set; }
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___U3CanimatorU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DoorRamp_set_animator_m665DFA957ABF35FB7B63560439B01426D0D8DD53_inline (DoorRamp_t69CB6A72DCFD3F080BF78F327C54BA7F6EF37BC4* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___value0, const RuntimeMethod* method) 
{
	{
		// public Animator animator { get; private set; }
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___value0;
		__this->___U3CanimatorU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CanimatorU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StartTouchEvent_Invoke_mCE9B4C4042C9AC89B196AC03E7CE3699280033FD_inline (StartTouchEvent_t1A7030E16EEFC7BD64D8A61DEA35C3CD71130D47* __this, float ___time0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___time0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EndTouchEvent_Invoke_m53977F30D5F8C9DEE49BED57417AB0C6C565501C_inline (EndTouchEvent_t78EEC9208D99E24F9886192FC6A97A43C3D010FE* __this, float ___time0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___time0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* Touch_get_asset_m48CA30CF84C0D216EF013AD3D23A6089481F0B7F_inline (Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* __this, const RuntimeMethod* method) 
{
	{
		// public InputActionAsset asset { get; }
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0 = __this->___U3CassetU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 InputActionAsset_get_bindingMask_mD5D2FAC455D221E7BC657DA5E7E4F5402E0B4F6C_inline (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) 
{
	{
		// get => m_BindingMask;
		Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 L_0 = __this->___m_BindingMask_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TouchControlActions__ctor_m3DBBF4BEB5A6F1BDB8BDAC54B92F21B9D515C21E_inline (TouchControlActions_t7602092D1C2F59EC987F6309A79EE038C95BBE82* __this, Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* ___wrapper0, const RuntimeMethod* method) 
{
	{
		// public TouchControlActions(@Touch wrapper) { m_Wrapper = wrapper; }
		Touch_t7EAB8D5B909B844F3E35764114EF5B8260CE55F5* L_0 = ___wrapper0;
		__this->___m_Wrapper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Wrapper_0), (void*)L_0);
		// public TouchControlActions(@Touch wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Tree_set_isInTriggerArea_mD2DB1B29A90F3BA45CCC611619397157CB0118FA_inline (Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool isInTriggerArea { get; set; } = false;
		bool L_0 = ___value0;
		__this->___U3CisInTriggerAreaU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tree_get_isInTriggerArea_m0093DA459A5E9D28FBB1003AB95B6FB2029B57FA_inline (Tree_t523ABF112CF15FC9FECDF55ED678B31919BF162F* __this, const RuntimeMethod* method) 
{
	{
		// public bool isInTriggerArea { get; set; } = false;
		bool L_0 = __this->___U3CisInTriggerAreaU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
