#ifndef INCLUDED_flixel_addons_effects_FlxSkewedSprite
#define INCLUDED_flixel_addons_effects_FlxSkewedSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,effects,FlxSkewedSprite)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(openfl,geom,Matrix)

namespace flixel{
namespace addons{
namespace effects{


class HXCPP_CLASS_ATTRIBUTES FlxSkewedSprite_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef FlxSkewedSprite_obj OBJ_;
		FlxSkewedSprite_obj();

	public:
		enum { _hx_ClassId = 0x107498cd };

		void __construct( ::Dynamic X, ::Dynamic Y, ::Dynamic SimpleGraphic);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.effects.FlxSkewedSprite")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.effects.FlxSkewedSprite"); }
		static ::hx::ObjectPtr< FlxSkewedSprite_obj > __new( ::Dynamic X, ::Dynamic Y, ::Dynamic SimpleGraphic);
		static ::hx::ObjectPtr< FlxSkewedSprite_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic X, ::Dynamic Y, ::Dynamic SimpleGraphic);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxSkewedSprite_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxSkewedSprite",40,e2,3b,71); }

		 ::flixel::math::FlxBasePoint skew;
		 ::openfl::geom::Matrix transformMatrix;
		bool matrixExposed;
		 ::openfl::geom::Matrix _skewMatrix;
		void destroy();

		void drawComplex( ::flixel::FlxCamera camera);

		void updateSkewMatrix();
		::Dynamic updateSkewMatrix_dyn();

		bool isSimpleRender( ::flixel::FlxCamera camera);

};

} // end namespace flixel
} // end namespace addons
} // end namespace effects

#endif /* INCLUDED_flixel_addons_effects_FlxSkewedSprite */ 
