#ifndef INCLUDED_DistractionsAndEffectsOption
#define INCLUDED_DistractionsAndEffectsOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(DistractionsAndEffectsOption)
HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES DistractionsAndEffectsOption_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef DistractionsAndEffectsOption_obj OBJ_;
		DistractionsAndEffectsOption_obj();

	public:
		enum { _hx_ClassId = 0x055912dd };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="DistractionsAndEffectsOption")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"DistractionsAndEffectsOption"); }
		static ::hx::ObjectPtr< DistractionsAndEffectsOption_obj > __new(::String desc);
		static ::hx::ObjectPtr< DistractionsAndEffectsOption_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DistractionsAndEffectsOption_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DistractionsAndEffectsOption",f1,f1,42,c5); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_DistractionsAndEffectsOption */ 
