#ifndef INCLUDED_flixel_tile_FlxTileblock
#define INCLUDED_flixel_tile_FlxTileblock

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxTileFrames)
HX_DECLARE_CLASS2(flixel,tile,FlxTileblock)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace tile{


class HXCPP_CLASS_ATTRIBUTES FlxTileblock_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef FlxTileblock_obj OBJ_;
		FlxTileblock_obj();

	public:
		enum { _hx_ClassId = 0x2b935cf7 };

		void __construct(int X,int Y,int Width,int Height);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.tile.FlxTileblock")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.tile.FlxTileblock"); }
		static ::hx::ObjectPtr< FlxTileblock_obj > __new(int X,int Y,int Width,int Height);
		static ::hx::ObjectPtr< FlxTileblock_obj > __alloc(::hx::Ctx *_hx_ctx,int X,int Y,int Width,int Height);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTileblock_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxTileblock",ad,ac,12,ca); }

		 ::flixel::FlxSprite tileSprite;
		void destroy();

		 ::flixel::tile::FlxTileblock loadFrames( ::flixel::graphics::frames::FlxTileFrames tileFrames,::hx::Null< int >  empties);
		::Dynamic loadFrames_dyn();

		 ::flixel::tile::FlxTileblock loadTiles( ::Dynamic TileGraphic,::hx::Null< int >  TileWidth,::hx::Null< int >  TileHeight,::hx::Null< int >  Empties);
		::Dynamic loadTiles_dyn();

		void setTile(int x,int y,int index);
		::Dynamic setTile_dyn();

};

} // end namespace flixel
} // end namespace tile

#endif /* INCLUDED_flixel_tile_FlxTileblock */ 
