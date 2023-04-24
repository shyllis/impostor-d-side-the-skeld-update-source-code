#ifndef INCLUDED_SongPositionOption
#define INCLUDED_SongPositionOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS0(SongPositionOption)



class HXCPP_CLASS_ATTRIBUTES SongPositionOption_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef SongPositionOption_obj OBJ_;
		SongPositionOption_obj();

	public:
		enum { _hx_ClassId = 0x2f8840f7 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="SongPositionOption")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"SongPositionOption"); }
		static ::hx::ObjectPtr< SongPositionOption_obj > __new(::String desc);
		static ::hx::ObjectPtr< SongPositionOption_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SongPositionOption_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SongPositionOption",d3,53,d0,70); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_SongPositionOption */ 
