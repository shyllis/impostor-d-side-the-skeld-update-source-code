#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_texture_format_BGRA8888
#include <lime/graphics/opengl/ext/EXT_texture_format_BGRA8888.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d5b9ccaa5426931f_6_new,"lime.graphics.opengl.ext.EXT_texture_format_BGRA8888","new",0xf062f3ea,"lime.graphics.opengl.ext.EXT_texture_format_BGRA8888.new","lime/graphics/opengl/ext/EXT_texture_format_BGRA8888.hx",6,0x3ffddae8)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void EXT_texture_format_BGRA8888_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d5b9ccaa5426931f_6_new)
HXDLIN(   6)		this->BGRA_EXT = 32993;
            	}

Dynamic EXT_texture_format_BGRA8888_obj::__CreateEmpty() { return new EXT_texture_format_BGRA8888_obj; }

void *EXT_texture_format_BGRA8888_obj::_hx_vtable = 0;

Dynamic EXT_texture_format_BGRA8888_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EXT_texture_format_BGRA8888_obj > _hx_result = new EXT_texture_format_BGRA8888_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EXT_texture_format_BGRA8888_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6ea1d9d4;
}


EXT_texture_format_BGRA8888_obj::EXT_texture_format_BGRA8888_obj()
{
}

::hx::Val EXT_texture_format_BGRA8888_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"BGRA_EXT") ) { return ::hx::Val( BGRA_EXT ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EXT_texture_format_BGRA8888_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"BGRA_EXT") ) { BGRA_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_texture_format_BGRA8888_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("BGRA_EXT",36,94,c4,bc));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EXT_texture_format_BGRA8888_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(EXT_texture_format_BGRA8888_obj,BGRA_EXT),HX_("BGRA_EXT",36,94,c4,bc)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EXT_texture_format_BGRA8888_obj_sStaticStorageInfo = 0;
#endif

static ::String EXT_texture_format_BGRA8888_obj_sMemberFields[] = {
	HX_("BGRA_EXT",36,94,c4,bc),
	::String(null()) };

::hx::Class EXT_texture_format_BGRA8888_obj::__mClass;

void EXT_texture_format_BGRA8888_obj::__register()
{
	EXT_texture_format_BGRA8888_obj _hx_dummy;
	EXT_texture_format_BGRA8888_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.EXT_texture_format_BGRA8888",f8,76,d4,43);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EXT_texture_format_BGRA8888_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EXT_texture_format_BGRA8888_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EXT_texture_format_BGRA8888_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EXT_texture_format_BGRA8888_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
