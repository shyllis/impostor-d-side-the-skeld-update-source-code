#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#define INCLUDED_flixel_input_keyboard_FlxKeyList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
HX_DECLARE_CLASS2(flixel,input,FlxBaseKeyList)
HX_DECLARE_CLASS2(flixel,input,FlxKeyManager)
HX_DECLARE_CLASS2(flixel,input,IFlxInputManager)
HX_DECLARE_CLASS3(flixel,input,keyboard,FlxKeyList)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace input{
namespace keyboard{


class HXCPP_CLASS_ATTRIBUTES FlxKeyList_obj : public  ::flixel::input::FlxBaseKeyList_obj
{
	public:
		typedef  ::flixel::input::FlxBaseKeyList_obj super;
		typedef FlxKeyList_obj OBJ_;
		FlxKeyList_obj();

	public:
		enum { _hx_ClassId = 0x23ee7f5c };

		void __construct(int status, ::flixel::input::FlxKeyManager keyManager);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.keyboard.FlxKeyList")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.keyboard.FlxKeyList"); }
		static ::hx::ObjectPtr< FlxKeyList_obj > __new(int status, ::flixel::input::FlxKeyManager keyManager);
		static ::hx::ObjectPtr< FlxKeyList_obj > __alloc(::hx::Ctx *_hx_ctx,int status, ::flixel::input::FlxKeyManager keyManager);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxKeyList_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxKeyList",6b,47,b8,d0); }

		bool get_A();
		::Dynamic get_A_dyn();

		bool get_B();
		::Dynamic get_B_dyn();

		bool get_C();
		::Dynamic get_C_dyn();

		bool get_D();
		::Dynamic get_D_dyn();

		bool get_E();
		::Dynamic get_E_dyn();

		bool get_F();
		::Dynamic get_F_dyn();

		bool get_G();
		::Dynamic get_G_dyn();

		bool get_H();
		::Dynamic get_H_dyn();

		bool get_I();
		::Dynamic get_I_dyn();

		bool get_J();
		::Dynamic get_J_dyn();

		bool get_K();
		::Dynamic get_K_dyn();

		bool get_L();
		::Dynamic get_L_dyn();

		bool get_M();
		::Dynamic get_M_dyn();

		bool get_N();
		::Dynamic get_N_dyn();

		bool get_O();
		::Dynamic get_O_dyn();

		bool get_P();
		::Dynamic get_P_dyn();

		bool get_Q();
		::Dynamic get_Q_dyn();

		bool get_R();
		::Dynamic get_R_dyn();

		bool get_S();
		::Dynamic get_S_dyn();

		bool get_T();
		::Dynamic get_T_dyn();

		bool get_U();
		::Dynamic get_U_dyn();

		bool get_V();
		::Dynamic get_V_dyn();

		bool get_W();
		::Dynamic get_W_dyn();

		bool get_X();
		::Dynamic get_X_dyn();

		bool get_Y();
		::Dynamic get_Y_dyn();

		bool get_Z();
		::Dynamic get_Z_dyn();

		bool get_ZERO();
		::Dynamic get_ZERO_dyn();

		bool get_ONE();
		::Dynamic get_ONE_dyn();

		bool get_TWO();
		::Dynamic get_TWO_dyn();

		bool get_THREE();
		::Dynamic get_THREE_dyn();

		bool get_FOUR();
		::Dynamic get_FOUR_dyn();

		bool get_FIVE();
		::Dynamic get_FIVE_dyn();

		bool get_SIX();
		::Dynamic get_SIX_dyn();

		bool get_SEVEN();
		::Dynamic get_SEVEN_dyn();

		bool get_EIGHT();
		::Dynamic get_EIGHT_dyn();

		bool get_NINE();
		::Dynamic get_NINE_dyn();

		bool get_PAGEUP();
		::Dynamic get_PAGEUP_dyn();

		bool get_PAGEDOWN();
		::Dynamic get_PAGEDOWN_dyn();

		bool get_HOME();
		::Dynamic get_HOME_dyn();

		bool get_END();
		::Dynamic get_END_dyn();

		bool get_INSERT();
		::Dynamic get_INSERT_dyn();

		bool get_ESCAPE();
		::Dynamic get_ESCAPE_dyn();

		bool get_MINUS();
		::Dynamic get_MINUS_dyn();

		bool get_PLUS();
		::Dynamic get_PLUS_dyn();

		bool get_DELETE();
		::Dynamic get_DELETE_dyn();

		bool get_BACKSPACE();
		::Dynamic get_BACKSPACE_dyn();

		bool get_LBRACKET();
		::Dynamic get_LBRACKET_dyn();

		bool get_RBRACKET();
		::Dynamic get_RBRACKET_dyn();

		bool get_BACKSLASH();
		::Dynamic get_BACKSLASH_dyn();

		bool get_CAPSLOCK();
		::Dynamic get_CAPSLOCK_dyn();

		bool get_SCROLL_LOCK();
		::Dynamic get_SCROLL_LOCK_dyn();

		bool get_NUMLOCK();
		::Dynamic get_NUMLOCK_dyn();

		bool get_SEMICOLON();
		::Dynamic get_SEMICOLON_dyn();

		bool get_QUOTE();
		::Dynamic get_QUOTE_dyn();

		bool get_ENTER();
		::Dynamic get_ENTER_dyn();

		bool get_SHIFT();
		::Dynamic get_SHIFT_dyn();

		bool get_COMMA();
		::Dynamic get_COMMA_dyn();

		bool get_PERIOD();
		::Dynamic get_PERIOD_dyn();

		bool get_SLASH();
		::Dynamic get_SLASH_dyn();

		bool get_GRAVEACCENT();
		::Dynamic get_GRAVEACCENT_dyn();

		bool get_CONTROL();
		::Dynamic get_CONTROL_dyn();

		bool get_ALT();
		::Dynamic get_ALT_dyn();

		bool get_SPACE();
		::Dynamic get_SPACE_dyn();

		bool get_UP();
		::Dynamic get_UP_dyn();

		bool get_DOWN();
		::Dynamic get_DOWN_dyn();

		bool get_LEFT();
		::Dynamic get_LEFT_dyn();

		bool get_RIGHT();
		::Dynamic get_RIGHT_dyn();

		bool get_TAB();
		::Dynamic get_TAB_dyn();

		bool get_WINDOWS();
		::Dynamic get_WINDOWS_dyn();

		bool get_MENU();
		::Dynamic get_MENU_dyn();

		bool get_PRINTSCREEN();
		::Dynamic get_PRINTSCREEN_dyn();

		bool get_BREAK();
		::Dynamic get_BREAK_dyn();

		bool get_F1();
		::Dynamic get_F1_dyn();

		bool get_F2();
		::Dynamic get_F2_dyn();

		bool get_F3();
		::Dynamic get_F3_dyn();

		bool get_F4();
		::Dynamic get_F4_dyn();

		bool get_F5();
		::Dynamic get_F5_dyn();

		bool get_F6();
		::Dynamic get_F6_dyn();

		bool get_F7();
		::Dynamic get_F7_dyn();

		bool get_F8();
		::Dynamic get_F8_dyn();

		bool get_F9();
		::Dynamic get_F9_dyn();

		bool get_F10();
		::Dynamic get_F10_dyn();

		bool get_F11();
		::Dynamic get_F11_dyn();

		bool get_F12();
		::Dynamic get_F12_dyn();

		bool get_NUMPADONE();
		::Dynamic get_NUMPADONE_dyn();

		bool get_NUMPADTWO();
		::Dynamic get_NUMPADTWO_dyn();

		bool get_NUMPADTHREE();
		::Dynamic get_NUMPADTHREE_dyn();

		bool get_NUMPADFOUR();
		::Dynamic get_NUMPADFOUR_dyn();

		bool get_NUMPADFIVE();
		::Dynamic get_NUMPADFIVE_dyn();

		bool get_NUMPADSIX();
		::Dynamic get_NUMPADSIX_dyn();

		bool get_NUMPADSEVEN();
		::Dynamic get_NUMPADSEVEN_dyn();

		bool get_NUMPADEIGHT();
		::Dynamic get_NUMPADEIGHT_dyn();

		bool get_NUMPADNINE();
		::Dynamic get_NUMPADNINE_dyn();

		bool get_NUMPADZERO();
		::Dynamic get_NUMPADZERO_dyn();

		bool get_NUMPADMINUS();
		::Dynamic get_NUMPADMINUS_dyn();

		bool get_NUMPADPLUS();
		::Dynamic get_NUMPADPLUS_dyn();

		bool get_NUMPADPERIOD();
		::Dynamic get_NUMPADPERIOD_dyn();

		bool get_NUMPADMULTIPLY();
		::Dynamic get_NUMPADMULTIPLY_dyn();

		bool get_NUMPADSLASH();
		::Dynamic get_NUMPADSLASH_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace keyboard

#endif /* INCLUDED_flixel_input_keyboard_FlxKeyList */ 
