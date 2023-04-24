#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#define INCLUDED_flixel_addons_ui_FlxUISprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUISprite)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxUISprite_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef FlxUISprite_obj OBJ_;
		FlxUISprite_obj();

	public:
		enum { _hx_ClassId = 0x0dc54e00 };

		void __construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic SimpleGraphic);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUISprite")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.FlxUISprite"); }
		static ::hx::ObjectPtr< FlxUISprite_obj > __new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic SimpleGraphic);
		static ::hx::ObjectPtr< FlxUISprite_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic SimpleGraphic);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxUISprite_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxUISprite",cb,2f,ee,0e); }

		static void __boot();
		static int RESIZE_RATIO_X;
		static int RESIZE_RATIO_Y;
		static int RESIZE_RATIO_UNKNOWN;
		bool broadcastToFlxUI;
		::String name;
		 ::Dynamic ptr_owner;
		bool recycled;
		Float resize_ratio;
		int resize_ratio_axis;
		Float set_resize_ratio(Float r);
		::Dynamic set_resize_ratio_dyn();

		 ::flixel::math::FlxBasePoint resize_point;
		 ::flixel::math::FlxBasePoint set_resize_point( ::flixel::math::FlxBasePoint r);
		::Dynamic set_resize_point_dyn();

		void recycle( ::Dynamic data);
		::Dynamic recycle_dyn();

		virtual void resize(Float w,Float h);
		::Dynamic resize_dyn();

		void loadGraphicAtScale(::String GraphicKey,Float W,Float H);
		::Dynamic loadGraphicAtScale_dyn();

		 ::flixel::FlxSprite loadGraphic( ::Dynamic Graphic,::hx::Null< bool >  Animated,::hx::Null< int >  Width,::hx::Null< int >  Height,::hx::Null< bool >  Unique,::String Key);

		virtual void destroy();

		void loadFromScaledGraphic( ::Dynamic Graphic,::hx::Null< bool >  Animated,::hx::Null< int >  Width,::hx::Null< int >  Height,::hx::Null< bool >  Unique,::String Key);
		::Dynamic loadFromScaledGraphic_dyn();

		::String _originalKey;
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUISprite */ 
