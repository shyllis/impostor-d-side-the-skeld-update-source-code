#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_frontEnds_ConsoleFrontEnd
#include <flixel/system/frontEnds/ConsoleFrontEnd.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2427e5c2ee20ebaa_8_new,"flixel.system.frontEnds.ConsoleFrontEnd","new",0x926b3ea1,"flixel.system.frontEnds.ConsoleFrontEnd.new","flixel/system/frontEnds/ConsoleFrontEnd.hx",8,0x0ff3a650)
HX_LOCAL_STACK_FRAME(_hx_pos_2427e5c2ee20ebaa_30_registerFunction,"flixel.system.frontEnds.ConsoleFrontEnd","registerFunction",0xa673a5ba,"flixel.system.frontEnds.ConsoleFrontEnd.registerFunction","flixel/system/frontEnds/ConsoleFrontEnd.hx",30,0x0ff3a650)
HX_LOCAL_STACK_FRAME(_hx_pos_2427e5c2ee20ebaa_43_registerObject,"flixel.system.frontEnds.ConsoleFrontEnd","registerObject",0x557f2ce1,"flixel.system.frontEnds.ConsoleFrontEnd.registerObject","flixel/system/frontEnds/ConsoleFrontEnd.hx",43,0x0ff3a650)
HX_LOCAL_STACK_FRAME(_hx_pos_2427e5c2ee20ebaa_55_registerClass,"flixel.system.frontEnds.ConsoleFrontEnd","registerClass",0x3d276456,"flixel.system.frontEnds.ConsoleFrontEnd.registerClass","flixel/system/frontEnds/ConsoleFrontEnd.hx",55,0x0ff3a650)
HX_LOCAL_STACK_FRAME(_hx_pos_2427e5c2ee20ebaa_68_registerEnum,"flixel.system.frontEnds.ConsoleFrontEnd","registerEnum",0x8478eca3,"flixel.system.frontEnds.ConsoleFrontEnd.registerEnum","flixel/system/frontEnds/ConsoleFrontEnd.hx",68,0x0ff3a650)
namespace flixel{
namespace _hx_system{
namespace frontEnds{

void ConsoleFrontEnd_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_2427e5c2ee20ebaa_8_new)
HXLINE(  21)		this->stepAfterCommand = true;
HXLINE(  13)		this->autoPause = true;
            	}

Dynamic ConsoleFrontEnd_obj::__CreateEmpty() { return new ConsoleFrontEnd_obj; }

void *ConsoleFrontEnd_obj::_hx_vtable = 0;

Dynamic ConsoleFrontEnd_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ConsoleFrontEnd_obj > _hx_result = new ConsoleFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ConsoleFrontEnd_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x536f13b3;
}

void ConsoleFrontEnd_obj::registerFunction(::String FunctionAlias, ::Dynamic Function){
            	HX_STACKFRAME(&_hx_pos_2427e5c2ee20ebaa_30_registerFunction)
            	}


HX_DEFINE_DYNAMIC_FUNC2(ConsoleFrontEnd_obj,registerFunction,(void))

void ConsoleFrontEnd_obj::registerObject(::String ObjectAlias, ::Dynamic AnyObject){
            	HX_STACKFRAME(&_hx_pos_2427e5c2ee20ebaa_43_registerObject)
            	}


HX_DEFINE_DYNAMIC_FUNC2(ConsoleFrontEnd_obj,registerObject,(void))

void ConsoleFrontEnd_obj::registerClass(::hx::Class cl){
            	HX_STACKFRAME(&_hx_pos_2427e5c2ee20ebaa_55_registerClass)
            	}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleFrontEnd_obj,registerClass,(void))

void ConsoleFrontEnd_obj::registerEnum(::hx::Class e){
            	HX_STACKFRAME(&_hx_pos_2427e5c2ee20ebaa_68_registerEnum)
            	}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleFrontEnd_obj,registerEnum,(void))


ConsoleFrontEnd_obj::ConsoleFrontEnd_obj()
{
}

::hx::Val ConsoleFrontEnd_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"autoPause") ) { return ::hx::Val( autoPause ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"registerEnum") ) { return ::hx::Val( registerEnum_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"registerClass") ) { return ::hx::Val( registerClass_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"registerObject") ) { return ::hx::Val( registerObject_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"stepAfterCommand") ) { return ::hx::Val( stepAfterCommand ); }
		if (HX_FIELD_EQ(inName,"registerFunction") ) { return ::hx::Val( registerFunction_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ConsoleFrontEnd_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"autoPause") ) { autoPause=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"stepAfterCommand") ) { stepAfterCommand=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ConsoleFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("autoPause",07,15,63,9b));
	outFields->push(HX_("stepAfterCommand",fb,63,ab,7b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ConsoleFrontEnd_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(ConsoleFrontEnd_obj,autoPause),HX_("autoPause",07,15,63,9b)},
	{::hx::fsBool,(int)offsetof(ConsoleFrontEnd_obj,stepAfterCommand),HX_("stepAfterCommand",fb,63,ab,7b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ConsoleFrontEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String ConsoleFrontEnd_obj_sMemberFields[] = {
	HX_("autoPause",07,15,63,9b),
	HX_("stepAfterCommand",fb,63,ab,7b),
	HX_("registerFunction",9b,a8,15,13),
	HX_("registerObject",82,05,81,db),
	HX_("registerClass",d5,3a,c1,3d),
	HX_("registerEnum",04,ab,05,bf),
	::String(null()) };

::hx::Class ConsoleFrontEnd_obj::__mClass;

void ConsoleFrontEnd_obj::__register()
{
	ConsoleFrontEnd_obj _hx_dummy;
	ConsoleFrontEnd_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.frontEnds.ConsoleFrontEnd",2f,5a,25,5d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ConsoleFrontEnd_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ConsoleFrontEnd_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ConsoleFrontEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ConsoleFrontEnd_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
