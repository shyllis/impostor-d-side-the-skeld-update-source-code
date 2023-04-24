#include <hxcpp.h>

#ifndef INCLUDED_CustomizeGameplay
#include <CustomizeGameplay.h>
#endif
#ifndef INCLUDED_GameplayCustomizeState
#include <GameplayCustomizeState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e4b4f5f29184daa6_551_new,"CustomizeGameplay","new",0xb144179b,"CustomizeGameplay.new","Options.hx",551,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_e4b4f5f29184daa6_557_press,"CustomizeGameplay","press",0xcb851f7e,"CustomizeGameplay.press","Options.hx",557,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_e4b4f5f29184daa6_565_updateDisplay,"CustomizeGameplay","updateDisplay",0x26aa4e34,"CustomizeGameplay.updateDisplay","Options.hx",565,0x9d9a0240)

void CustomizeGameplay_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_e4b4f5f29184daa6_551_new)
HXLINE( 552)		super::__construct();
HXLINE( 553)		this->description = desc;
            	}

Dynamic CustomizeGameplay_obj::__CreateEmpty() { return new CustomizeGameplay_obj; }

void *CustomizeGameplay_obj::_hx_vtable = 0;

Dynamic CustomizeGameplay_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CustomizeGameplay_obj > _hx_result = new CustomizeGameplay_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CustomizeGameplay_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x5c466369;
	}
}

bool CustomizeGameplay_obj::press(){
            	HX_GC_STACKFRAME(&_hx_pos_e4b4f5f29184daa6_557_press)
HXLINE( 558)		::haxe::Log_obj::trace(HX_("switch",f4,49,79,c5),::hx::SourceInfo(HX_("code/Options.hx",22,e7,9c,7c),558,HX_("CustomizeGameplay",29,ae,ab,0c),HX_("press",83,53,88,c8)));
HXLINE( 559)		{
HXLINE( 559)			 ::flixel::FlxState nextState =  ::GameplayCustomizeState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 559)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 559)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
HXLINE( 560)		return false;
            	}


::String CustomizeGameplay_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_e4b4f5f29184daa6_565_updateDisplay)
HXDLIN( 565)		return HX_("Customize Gameplay",a3,2e,c4,04);
            	}



::hx::ObjectPtr< CustomizeGameplay_obj > CustomizeGameplay_obj::__new(::String desc) {
	::hx::ObjectPtr< CustomizeGameplay_obj > __this = new CustomizeGameplay_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< CustomizeGameplay_obj > CustomizeGameplay_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	CustomizeGameplay_obj *__this = (CustomizeGameplay_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CustomizeGameplay_obj), true, "CustomizeGameplay"));
	*(void **)__this = CustomizeGameplay_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

CustomizeGameplay_obj::CustomizeGameplay_obj()
{
}

::hx::Val CustomizeGameplay_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"press") ) { return ::hx::Val( press_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return ::hx::Val( updateDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CustomizeGameplay_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CustomizeGameplay_obj_sStaticStorageInfo = 0;
#endif

static ::String CustomizeGameplay_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class CustomizeGameplay_obj::__mClass;

void CustomizeGameplay_obj::__register()
{
	CustomizeGameplay_obj _hx_dummy;
	CustomizeGameplay_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("CustomizeGameplay",29,ae,ab,0c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CustomizeGameplay_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CustomizeGameplay_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CustomizeGameplay_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CustomizeGameplay_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

