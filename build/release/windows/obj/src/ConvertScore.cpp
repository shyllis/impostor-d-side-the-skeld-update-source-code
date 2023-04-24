#include <hxcpp.h>

#ifndef INCLUDED_ConvertScore
#include <ConvertScore.h>
#endif
#ifndef INCLUDED_Ratings
#include <Ratings.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_baa73db8a23a795a_4_convertScore,"ConvertScore","convertScore",0x6bc89dae,"ConvertScore.convertScore","ConvertScore.hx",4,0xa49a9b9f)

void ConvertScore_obj::__construct() { }

Dynamic ConvertScore_obj::__CreateEmpty() { return new ConvertScore_obj; }

void *ConvertScore_obj::_hx_vtable = 0;

Dynamic ConvertScore_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ConvertScore_obj > _hx_result = new ConvertScore_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ConvertScore_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5c94133f;
}

int ConvertScore_obj::convertScore(Float noteDiff){
            	HX_STACKFRAME(&_hx_pos_baa73db8a23a795a_4_convertScore)
HXLINE(   5)		::String daRating = ::Ratings_obj::CalculateRating(noteDiff,166);
HXLINE(   7)		::String _hx_switch_0 = daRating;
            		if (  (_hx_switch_0==HX_("bad",c5,b1,4a,00)) ){
HXLINE(  12)			return 0;
HXDLIN(  12)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("good",3d,95,69,44)) ){
HXLINE(  14)			return 200;
HXDLIN(  14)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("shit",c0,cf,52,4c)) ){
HXLINE(  10)			return -300;
HXDLIN(  10)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("sick",be,8c,53,4c)) ){
HXLINE(  16)			return 350;
HXDLIN(  16)			goto _hx_goto_0;
            		}
            		_hx_goto_0:;
HXLINE(  18)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConvertScore_obj,convertScore,return )


ConvertScore_obj::ConvertScore_obj()
{
}

bool ConvertScore_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"convertScore") ) { outValue = convertScore_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ConvertScore_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ConvertScore_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ConvertScore_obj::__mClass;

static ::String ConvertScore_obj_sStaticFields[] = {
	HX_("convertScore",5f,74,a0,ab),
	::String(null())
};

void ConvertScore_obj::__register()
{
	ConvertScore_obj _hx_dummy;
	ConvertScore_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ConvertScore",7f,c0,b2,73);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ConvertScore_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ConvertScore_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ConvertScore_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ConvertScore_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ConvertScore_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

