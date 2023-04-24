#ifndef INCLUDED_flixel_util_FlxSave
#define INCLUDED_flixel_util_FlxSave

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS2(flixel,util,FlxSave)
HX_DECLARE_CLASS2(flixel,util,FlxSaveStatus)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,net,SharedObject)

namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES FlxSave_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxSave_obj OBJ_;
		FlxSave_obj();

	public:
		enum { _hx_ClassId = 0x051f3151 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.util.FlxSave")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.util.FlxSave"); }
		static ::hx::ObjectPtr< FlxSave_obj > __new();
		static ::hx::ObjectPtr< FlxSave_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxSave_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxSave",af,c4,a5,dc); }

		static void __boot();
		static  ::EReg invalidChars;
		static bool hasInvalidChars(::String str);
		static ::Dynamic hasInvalidChars_dyn();

		static ::String validate(::String str);
		static ::Dynamic validate_dyn();

		static ::String validateAndWarn(::String str,::String fieldId);
		static ::Dynamic validateAndWarn_dyn();

		 ::Dynamic data;
		 ::flixel::util::FlxSaveStatus status;
		 ::openfl::net::SharedObject _sharedObject;
		void destroy();
		::Dynamic destroy_dyn();

		bool bind(::String name,::String path);
		::Dynamic bind_dyn();

		bool mergeDataFrom(::String name,::String path,::hx::Null< bool >  overwrite,::hx::Null< bool >  eraseSave,::hx::Null< int >  minFileSize);
		::Dynamic mergeDataFrom_dyn();

		bool mergeData( ::Dynamic sourceData,::hx::Null< bool >  overwrite,::hx::Null< int >  minFileSize);
		::Dynamic mergeData_dyn();

		bool close(::hx::Null< int >  minFileSize);
		::Dynamic close_dyn();

		bool flush(::hx::Null< int >  minFileSize);
		::Dynamic flush_dyn();

		bool erase();
		::Dynamic erase_dyn();

		bool checkStatus();
		::Dynamic checkStatus_dyn();

		::String get_name();
		::Dynamic get_name_dyn();

		::String get_path();
		::Dynamic get_path_dyn();

		bool get_isBound();
		::Dynamic get_isBound_dyn();

		bool isEmpty();
		::Dynamic isEmpty_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxSave */ 
