#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
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
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_495f89d9d0902be3_16_new,"MusicBeatState","new",0xdae47368,"MusicBeatState.new","MusicBeatState.hx",16,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_26_get_controls,"MusicBeatState","get_controls",0xacecf677,"MusicBeatState.get_controls","MusicBeatState.hx",26,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_29_create,"MusicBeatState","create",0x5e9058f4,"MusicBeatState.create","MusicBeatState.hx",29,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_52_update,"MusicBeatState","update",0x69867801,"MusicBeatState.update","MusicBeatState.hx",52,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_80_updateBeat,"MusicBeatState","updateBeat",0x79761a17,"MusicBeatState.updateBeat","MusicBeatState.hx",80,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_88_updateCurStep,"MusicBeatState","updateCurStep",0xd6ad7aeb,"MusicBeatState.updateCurStep","MusicBeatState.hx",88,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_106_stepHit,"MusicBeatState","stepHit",0xcf94756f,"MusicBeatState.stepHit","MusicBeatState.hx",106,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_111_beatHit,"MusicBeatState","beatHit",0xc257b185,"MusicBeatState.beatHit","MusicBeatState.hx",111,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_120_fancyOpenURL,"MusicBeatState","fancyOpenURL",0x105d0074,"MusicBeatState.fancyOpenURL","MusicBeatState.hx",120,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_85_boot,"MusicBeatState","boot",0xa519882a,"MusicBeatState.boot","MusicBeatState.hx",85,0xa1b2f108)

void MusicBeatState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_16_new)
HXLINE(  49)		this->skippedFrames = 0;
HXLINE(  40)		int Alpha = 255;
HXDLIN(  40)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  40)		{
HXLINE(  40)			color = (color & -16711681);
HXDLIN(  40)			color = (color | 9699328);
            		}
HXDLIN(  40)		{
HXLINE(  40)			color = (color & -65281);
HXDLIN(  40)			color = (color | 0);
            		}
HXDLIN(  40)		{
HXLINE(  40)			color = (color & -256);
HXDLIN(  40)			color = (color | 211);
            		}
HXDLIN(  40)		{
HXLINE(  40)			color = (color & 16777215);
HXDLIN(  40)			int color1;
HXDLIN(  40)			if ((Alpha > 255)) {
HXLINE(  40)				color1 = 255;
            			}
            			else {
HXLINE(  40)				if ((Alpha < 0)) {
HXLINE(  40)					color1 = 0;
            				}
            				else {
HXLINE(  40)					color1 = Alpha;
            				}
            			}
HXDLIN(  40)			color = (color | (color1 << 24));
            		}
HXLINE(  41)		int Alpha1 = 255;
HXDLIN(  41)		int color2 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  41)		{
HXLINE(  41)			color2 = (color2 & -16711681);
HXDLIN(  41)			color2 = (color2 | 4915200);
            		}
HXDLIN(  41)		{
HXLINE(  41)			color2 = (color2 & -65281);
HXDLIN(  41)			color2 = (color2 | 0);
            		}
HXDLIN(  41)		{
HXLINE(  41)			color2 = (color2 & -256);
HXDLIN(  41)			color2 = (color2 | 130);
            		}
HXDLIN(  41)		{
HXLINE(  41)			color2 = (color2 & 16777215);
HXDLIN(  41)			int color3;
HXDLIN(  41)			if ((Alpha1 > 255)) {
HXLINE(  41)				color3 = 255;
            			}
            			else {
HXLINE(  41)				if ((Alpha1 < 0)) {
HXLINE(  41)					color3 = 0;
            				}
            				else {
HXLINE(  41)					color3 = Alpha1;
            				}
            			}
HXDLIN(  41)			color2 = (color2 | (color3 << 24));
            		}
HXLINE(  42)		int Alpha2 = 255;
HXDLIN(  42)		int color4 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  42)		{
HXLINE(  42)			color4 = (color4 & -16711681);
HXDLIN(  42)			color4 = (color4 | 0);
            		}
HXDLIN(  42)		{
HXLINE(  42)			color4 = (color4 & -65281);
HXDLIN(  42)			color4 = (color4 | 0);
            		}
HXDLIN(  42)		{
HXLINE(  42)			color4 = (color4 & -256);
HXDLIN(  42)			color4 = (color4 | 255);
            		}
HXDLIN(  42)		{
HXLINE(  42)			color4 = (color4 & 16777215);
HXDLIN(  42)			int color5;
HXDLIN(  42)			if ((Alpha2 > 255)) {
HXLINE(  42)				color5 = 255;
            			}
            			else {
HXLINE(  42)				if ((Alpha2 < 0)) {
HXLINE(  42)					color5 = 0;
            				}
            				else {
HXLINE(  42)					color5 = Alpha2;
            				}
            			}
HXDLIN(  42)			color4 = (color4 | (color5 << 24));
            		}
HXLINE(  43)		int Alpha3 = 255;
HXDLIN(  43)		int color6 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  43)		{
HXLINE(  43)			color6 = (color6 & -16711681);
HXDLIN(  43)			color6 = (color6 | 0);
            		}
HXDLIN(  43)		{
HXLINE(  43)			color6 = (color6 & -65281);
HXDLIN(  43)			color6 = (color6 | 65280);
            		}
HXDLIN(  43)		{
HXLINE(  43)			color6 = (color6 & -256);
HXDLIN(  43)			color6 = (color6 | 0);
            		}
HXDLIN(  43)		{
HXLINE(  43)			color6 = (color6 & 16777215);
HXDLIN(  43)			int color7;
HXDLIN(  43)			if ((Alpha3 > 255)) {
HXLINE(  43)				color7 = 255;
            			}
            			else {
HXLINE(  43)				if ((Alpha3 < 0)) {
HXLINE(  43)					color7 = 0;
            				}
            				else {
HXLINE(  43)					color7 = Alpha3;
            				}
            			}
HXDLIN(  43)			color6 = (color6 | (color7 << 24));
            		}
HXLINE(  44)		int Alpha4 = 255;
HXDLIN(  44)		int color8 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  44)		{
HXLINE(  44)			color8 = (color8 & -16711681);
HXDLIN(  44)			color8 = (color8 | 16711680);
            		}
HXDLIN(  44)		{
HXLINE(  44)			color8 = (color8 & -65281);
HXDLIN(  44)			color8 = (color8 | 65280);
            		}
HXDLIN(  44)		{
HXLINE(  44)			color8 = (color8 & -256);
HXDLIN(  44)			color8 = (color8 | 0);
            		}
HXDLIN(  44)		{
HXLINE(  44)			color8 = (color8 & 16777215);
HXDLIN(  44)			int color9;
HXDLIN(  44)			if ((Alpha4 > 255)) {
HXLINE(  44)				color9 = 255;
            			}
            			else {
HXLINE(  44)				if ((Alpha4 < 0)) {
HXLINE(  44)					color9 = 0;
            				}
            				else {
HXLINE(  44)					color9 = Alpha4;
            				}
            			}
HXDLIN(  44)			color8 = (color8 | (color9 << 24));
            		}
HXLINE(  45)		int Alpha5 = 255;
HXDLIN(  45)		int color10 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  45)		{
HXLINE(  45)			color10 = (color10 & -16711681);
HXDLIN(  45)			color10 = (color10 | 16711680);
            		}
HXDLIN(  45)		{
HXLINE(  45)			color10 = (color10 & -65281);
HXDLIN(  45)			color10 = (color10 | 32512);
            		}
HXDLIN(  45)		{
HXLINE(  45)			color10 = (color10 & -256);
HXDLIN(  45)			color10 = (color10 | 0);
            		}
HXDLIN(  45)		{
HXLINE(  45)			color10 = (color10 & 16777215);
HXDLIN(  45)			int color11;
HXDLIN(  45)			if ((Alpha5 > 255)) {
HXLINE(  45)				color11 = 255;
            			}
            			else {
HXLINE(  45)				if ((Alpha5 < 0)) {
HXLINE(  45)					color11 = 0;
            				}
            				else {
HXLINE(  45)					color11 = Alpha5;
            				}
            			}
HXDLIN(  45)			color10 = (color10 | (color11 << 24));
            		}
HXLINE(  46)		int Alpha6 = 255;
HXDLIN(  46)		int color12 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  46)		{
HXLINE(  46)			color12 = (color12 & -16711681);
HXDLIN(  46)			color12 = (color12 | 16711680);
            		}
HXDLIN(  46)		{
HXLINE(  46)			color12 = (color12 & -65281);
HXDLIN(  46)			color12 = (color12 | 0);
            		}
HXDLIN(  46)		{
HXLINE(  46)			color12 = (color12 & -256);
HXDLIN(  46)			color12 = (color12 | 0);
            		}
HXDLIN(  46)		{
HXLINE(  46)			color12 = (color12 & 16777215);
HXDLIN(  46)			int color13;
HXDLIN(  46)			if ((Alpha6 > 255)) {
HXLINE(  46)				color13 = 255;
            			}
            			else {
HXLINE(  46)				if ((Alpha6 < 0)) {
HXLINE(  46)					color13 = 0;
            				}
            				else {
HXLINE(  46)					color13 = Alpha6;
            				}
            			}
HXDLIN(  46)			color12 = (color12 | (color13 << 24));
            		}
HXLINE(  39)		this->array = ::Array_obj< int >::__new(7)->init(0,color)->init(1,color2)->init(2,color4)->init(3,color6)->init(4,color8)->init(5,color10)->init(6,color12);
HXLINE(  22)		this->curBeat = 0;
HXLINE(  21)		this->curStep = 0;
HXLINE(  19)		this->lastStep = ((Float)0);
HXLINE(  18)		this->lastBeat = ((Float)0);
HXLINE(  16)		super::__construct(TransIn,TransOut);
            	}

Dynamic MusicBeatState_obj::__CreateEmpty() { return new MusicBeatState_obj; }

void *MusicBeatState_obj::_hx_vtable = 0;

Dynamic MusicBeatState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MusicBeatState_obj > _hx_result = new MusicBeatState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MusicBeatState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

 ::Controls MusicBeatState_obj::get_controls(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_26_get_controls)
HXDLIN(  26)		return ::PlayerSettings_obj::player1->controls;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,get_controls,return )

void MusicBeatState_obj::create(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_29_create)
HXLINE(  30)		::hx::TCast<  ::Main >::cast(::openfl::Lib_obj::get_current()->getChildAt(0))->setFPSCap(( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic)) ));
HXLINE(  32)		if (::hx::IsNotNull( this->transIn )) {
HXLINE(  33)			 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  33)			::String _hx_tmp1 = (HX_("reg ",4c,50,a7,4b) + ::Std_obj::string(this->transIn->region));
HXDLIN(  33)			_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("code/MusicBeatState.hx",66,4c,1d,f3),33,HX_("MusicBeatState",76,df,84,5d),HX_("create",fc,66,0f,7c)));
            		}
HXLINE(  35)		this->super::create();
            	}


void MusicBeatState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_52_update)
HXLINE(  54)		int oldStep = this->curStep;
HXLINE(  56)		this->updateCurStep();
HXLINE(  57)		this->updateBeat();
HXLINE(  59)		bool _hx_tmp;
HXDLIN(  59)		if ((oldStep != this->curStep)) {
HXLINE(  59)			_hx_tmp = (this->curStep > 0);
            		}
            		else {
HXLINE(  59)			_hx_tmp = false;
            		}
HXDLIN(  59)		if (_hx_tmp) {
HXLINE(  60)			this->stepHit();
            		}
HXLINE(  62)		bool _hx_tmp1;
HXDLIN(  62)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("fpsRain",dd,e5,17,c7),::hx::paccDynamic)) )) {
HXLINE(  62)			_hx_tmp1 = (this->skippedFrames >= 6);
            		}
            		else {
HXLINE(  62)			_hx_tmp1 = false;
            		}
HXDLIN(  62)		if (_hx_tmp1) {
HXLINE(  64)			if ((::MusicBeatState_obj::currentColor >= this->array->length)) {
HXLINE(  65)				::MusicBeatState_obj::currentColor = 0;
            			}
HXLINE(  66)			 ::Main _hx_tmp = ::hx::TCast<  ::Main >::cast(::openfl::Lib_obj::get_current()->getChildAt(0));
HXDLIN(  66)			_hx_tmp->changeFPSColor(this->array->__get(::MusicBeatState_obj::currentColor));
HXLINE(  67)			::MusicBeatState_obj::currentColor++;
HXLINE(  68)			this->skippedFrames = 0;
            		}
            		else {
HXLINE(  71)			this->skippedFrames++;
            		}
HXLINE(  73)		bool _hx_tmp2;
HXDLIN(  73)		if (::hx::IsNotEq( ::hx::TCast<  ::Main >::cast(::openfl::Lib_obj::get_current()->getChildAt(0))->getFPSCap_dyn(),::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic) )) {
HXLINE(  73)			_hx_tmp2 = ::hx::IsLessEq( ::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic),290 );
            		}
            		else {
HXLINE(  73)			_hx_tmp2 = false;
            		}
HXDLIN(  73)		if (_hx_tmp2) {
HXLINE(  74)			::hx::TCast<  ::Main >::cast(::openfl::Lib_obj::get_current()->getChildAt(0))->setFPSCap(( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic)) ));
            		}
HXLINE(  76)		this->super::update(elapsed);
            	}


void MusicBeatState_obj::updateBeat(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_80_updateBeat)
HXLINE(  81)		this->lastBeat = ( (Float)(this->curStep) );
HXLINE(  82)		this->curBeat = ::Math_obj::floor((( (Float)(this->curStep) ) / ( (Float)(4) )));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,updateBeat,(void))

void MusicBeatState_obj::updateCurStep(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_88_updateCurStep)
HXLINE(  89)		 ::Dynamic lastChange =  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("stepTime",79,75,25,a0),0)
            			->setFixed(1,HX_("bpm",df,be,4a,00),( (Float)(0) ))
            			->setFixed(2,HX_("songTime",82,2a,d5,3a),( (Float)(0) )));
HXLINE(  94)		{
HXLINE(  94)			int _g = 0;
HXDLIN(  94)			int _g1 = ::Conductor_obj::bpmChangeMap->length;
HXDLIN(  94)			while((_g < _g1)){
HXLINE(  94)				_g = (_g + 1);
HXDLIN(  94)				int i = (_g - 1);
HXLINE(  96)				if (::hx::IsGreaterEq( ::Conductor_obj::songPosition,::Conductor_obj::bpmChangeMap->__get(i)->__Field(HX_("songTime",82,2a,d5,3a),::hx::paccDynamic) )) {
HXLINE(  97)					lastChange = ::Conductor_obj::bpmChangeMap->__get(i);
            				}
            			}
            		}
HXLINE( 100)		this->curStep = ( (int)((lastChange->__Field(HX_("stepTime",79,75,25,a0),::hx::paccDynamic) + ::Math_obj::floor(((::Conductor_obj::songPosition - ( (Float)(lastChange->__Field(HX_("songTime",82,2a,d5,3a),::hx::paccDynamic)) )) / ::Conductor_obj::stepCrochet)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,updateCurStep,(void))

void MusicBeatState_obj::stepHit(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_106_stepHit)
HXDLIN( 106)		if ((::hx::Mod(this->curStep,4) == 0)) {
HXLINE( 107)			this->beatHit();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,stepHit,(void))

void MusicBeatState_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_111_beatHit)
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,beatHit,(void))

void MusicBeatState_obj::fancyOpenURL(::String schmancy){
            	HX_GC_STACKFRAME(&_hx_pos_495f89d9d0902be3_120_fancyOpenURL)
HXDLIN( 120)		::String prefix = HX_("",00,00,00,00);
HXDLIN( 120)		if (!( ::EReg_obj::__alloc( HX_CTX ,HX_("^https?://",48,ee,dd,38),HX_("",00,00,00,00))->match(schmancy))) {
HXDLIN( 120)			prefix = HX_("http://",52,75,cd,5a);
            		}
HXDLIN( 120)		::openfl::Lib_obj::getURL( ::openfl::net::URLRequest_obj::__alloc( HX_CTX ,(prefix + schmancy)),HX_("_blank",95,26,d9,b0));
            	}


HX_DEFINE_DYNAMIC_FUNC1(MusicBeatState_obj,fancyOpenURL,(void))

int MusicBeatState_obj::currentColor;


::hx::ObjectPtr< MusicBeatState_obj > MusicBeatState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< MusicBeatState_obj > __this = new MusicBeatState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< MusicBeatState_obj > MusicBeatState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	MusicBeatState_obj *__this = (MusicBeatState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MusicBeatState_obj), true, "MusicBeatState"));
	*(void **)__this = MusicBeatState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

MusicBeatState_obj::MusicBeatState_obj()
{
}

void MusicBeatState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MusicBeatState);
	HX_MARK_MEMBER_NAME(lastBeat,"lastBeat");
	HX_MARK_MEMBER_NAME(lastStep,"lastStep");
	HX_MARK_MEMBER_NAME(curStep,"curStep");
	HX_MARK_MEMBER_NAME(curBeat,"curBeat");
	HX_MARK_MEMBER_NAME(array,"array");
	HX_MARK_MEMBER_NAME(skippedFrames,"skippedFrames");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MusicBeatState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lastBeat,"lastBeat");
	HX_VISIT_MEMBER_NAME(lastStep,"lastStep");
	HX_VISIT_MEMBER_NAME(curStep,"curStep");
	HX_VISIT_MEMBER_NAME(curBeat,"curBeat");
	HX_VISIT_MEMBER_NAME(array,"array");
	HX_VISIT_MEMBER_NAME(skippedFrames,"skippedFrames");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MusicBeatState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"array") ) { return ::hx::Val( array ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curStep") ) { return ::hx::Val( curStep ); }
		if (HX_FIELD_EQ(inName,"curBeat") ) { return ::hx::Val( curBeat ); }
		if (HX_FIELD_EQ(inName,"stepHit") ) { return ::hx::Val( stepHit_dyn() ); }
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastBeat") ) { return ::hx::Val( lastBeat ); }
		if (HX_FIELD_EQ(inName,"lastStep") ) { return ::hx::Val( lastStep ); }
		if (HX_FIELD_EQ(inName,"controls") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_controls() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateBeat") ) { return ::hx::Val( updateBeat_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_controls") ) { return ::hx::Val( get_controls_dyn() ); }
		if (HX_FIELD_EQ(inName,"fancyOpenURL") ) { return ::hx::Val( fancyOpenURL_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"skippedFrames") ) { return ::hx::Val( skippedFrames ); }
		if (HX_FIELD_EQ(inName,"updateCurStep") ) { return ::hx::Val( updateCurStep_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MusicBeatState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"currentColor") ) { outValue = ( currentColor ); return true; }
	}
	return false;
}

::hx::Val MusicBeatState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"array") ) { array=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curStep") ) { curStep=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curBeat") ) { curBeat=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastBeat") ) { lastBeat=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastStep") ) { lastStep=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"skippedFrames") ) { skippedFrames=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MusicBeatState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"currentColor") ) { currentColor=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void MusicBeatState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("lastBeat",ec,fa,5c,d4));
	outFields->push(HX_("lastStep",c2,00,a5,df));
	outFields->push(HX_("curStep",ec,58,71,b7));
	outFields->push(HX_("curBeat",16,53,29,ac));
	outFields->push(HX_("controls",76,86,bc,37));
	outFields->push(HX_("array",99,6d,8f,25));
	outFields->push(HX_("skippedFrames",76,1f,4b,c6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MusicBeatState_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(MusicBeatState_obj,lastBeat),HX_("lastBeat",ec,fa,5c,d4)},
	{::hx::fsFloat,(int)offsetof(MusicBeatState_obj,lastStep),HX_("lastStep",c2,00,a5,df)},
	{::hx::fsInt,(int)offsetof(MusicBeatState_obj,curStep),HX_("curStep",ec,58,71,b7)},
	{::hx::fsInt,(int)offsetof(MusicBeatState_obj,curBeat),HX_("curBeat",16,53,29,ac)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(MusicBeatState_obj,array),HX_("array",99,6d,8f,25)},
	{::hx::fsInt,(int)offsetof(MusicBeatState_obj,skippedFrames),HX_("skippedFrames",76,1f,4b,c6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo MusicBeatState_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &MusicBeatState_obj::currentColor,HX_("currentColor",6a,56,68,91)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MusicBeatState_obj_sMemberFields[] = {
	HX_("lastBeat",ec,fa,5c,d4),
	HX_("lastStep",c2,00,a5,df),
	HX_("curStep",ec,58,71,b7),
	HX_("curBeat",16,53,29,ac),
	HX_("get_controls",7f,3a,d6,ec),
	HX_("create",fc,66,0f,7c),
	HX_("array",99,6d,8f,25),
	HX_("skippedFrames",76,1f,4b,c6),
	HX_("update",09,86,05,87),
	HX_("updateBeat",1f,cc,c8,f9),
	HX_("updateCurStep",e3,bd,df,82),
	HX_("stepHit",67,ae,41,81),
	HX_("beatHit",7d,ea,04,74),
	HX_("fancyOpenURL",7c,44,46,50),
	::String(null()) };

static void MusicBeatState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MusicBeatState_obj::currentColor,"currentColor");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MusicBeatState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MusicBeatState_obj::currentColor,"currentColor");
};

#endif

::hx::Class MusicBeatState_obj::__mClass;

static ::String MusicBeatState_obj_sStaticFields[] = {
	HX_("currentColor",6a,56,68,91),
	::String(null())
};

void MusicBeatState_obj::__register()
{
	MusicBeatState_obj _hx_dummy;
	MusicBeatState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MusicBeatState",76,df,84,5d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MusicBeatState_obj::__GetStatic;
	__mClass->mSetStaticField = &MusicBeatState_obj::__SetStatic;
	__mClass->mMarkFunc = MusicBeatState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MusicBeatState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MusicBeatState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MusicBeatState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MusicBeatState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MusicBeatState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MusicBeatState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MusicBeatState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_85_boot)
HXDLIN(  85)		currentColor = 0;
            	}
}

