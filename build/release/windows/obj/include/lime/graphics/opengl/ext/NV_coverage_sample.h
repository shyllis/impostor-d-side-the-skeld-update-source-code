#ifndef INCLUDED_lime_graphics_opengl_ext_NV_coverage_sample
#define INCLUDED_lime_graphics_opengl_ext_NV_coverage_sample

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_d197f49e97430958_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,NV_coverage_sample)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES NV_coverage_sample_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NV_coverage_sample_obj OBJ_;
		NV_coverage_sample_obj();

	public:
		enum { _hx_ClassId = 0x3cf51454 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.NV_coverage_sample")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.NV_coverage_sample"); }

		inline static ::hx::ObjectPtr< NV_coverage_sample_obj > __new() {
			::hx::ObjectPtr< NV_coverage_sample_obj > __this = new NV_coverage_sample_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< NV_coverage_sample_obj > __alloc(::hx::Ctx *_hx_ctx) {
			NV_coverage_sample_obj *__this = (NV_coverage_sample_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NV_coverage_sample_obj), false, "lime.graphics.opengl.ext.NV_coverage_sample"));
			*(void **)__this = NV_coverage_sample_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_d197f49e97430958_4_new)
HXLINE(  14)		( ( ::lime::graphics::opengl::ext::NV_coverage_sample)(__this) )->COVERAGE_BUFFER_BIT_NV = 32768;
HXLINE(  13)		( ( ::lime::graphics::opengl::ext::NV_coverage_sample)(__this) )->COVERAGE_AUTOMATIC_NV = 36567;
HXLINE(  12)		( ( ::lime::graphics::opengl::ext::NV_coverage_sample)(__this) )->COVERAGE_EDGE_FRAGMENTS_NV = 36566;
HXLINE(  11)		( ( ::lime::graphics::opengl::ext::NV_coverage_sample)(__this) )->COVERAGE_ALL_FRAGMENTS_NV = 36565;
HXLINE(  10)		( ( ::lime::graphics::opengl::ext::NV_coverage_sample)(__this) )->COVERAGE_SAMPLES_NV = 36564;
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::NV_coverage_sample)(__this) )->COVERAGE_BUFFERS_NV = 36563;
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::NV_coverage_sample)(__this) )->COVERAGE_ATTACHMENT_NV = 36562;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::NV_coverage_sample)(__this) )->COVERAGE_COMPONENT4_NV = 36561;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::NV_coverage_sample)(__this) )->COVERAGE_COMPONENT_NV = 36560;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NV_coverage_sample_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NV_coverage_sample",aa,83,fd,db); }

		int COVERAGE_COMPONENT_NV;
		int COVERAGE_COMPONENT4_NV;
		int COVERAGE_ATTACHMENT_NV;
		int COVERAGE_BUFFERS_NV;
		int COVERAGE_SAMPLES_NV;
		int COVERAGE_ALL_FRAGMENTS_NV;
		int COVERAGE_EDGE_FRAGMENTS_NV;
		int COVERAGE_AUTOMATIC_NV;
		int COVERAGE_BUFFER_BIT_NV;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_NV_coverage_sample */ 
