#ifndef INCLUDED_openfl__Vector_BoolVector
#define INCLUDED_openfl__Vector_BoolVector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
HX_DECLARE_CLASS2(openfl,_Vector,BoolVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)

namespace openfl{
namespace _Vector{


class HXCPP_CLASS_ATTRIBUTES BoolVector_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BoolVector_obj OBJ_;
		BoolVector_obj();

	public:
		enum { _hx_ClassId = 0x718919df };

		void __construct(::hx::Null< int >  __o_length,::hx::Null< bool >  __o_fixed,::Array< bool > array);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._Vector.BoolVector")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl._Vector.BoolVector"); }
		static ::hx::ObjectPtr< BoolVector_obj > __new(::hx::Null< int >  __o_length,::hx::Null< bool >  __o_fixed,::Array< bool > array);
		static ::hx::ObjectPtr< BoolVector_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_length,::hx::Null< bool >  __o_fixed,::Array< bool > array);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BoolVector_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		void unshift_58413545( ::Dynamic value);

		 ::Dynamic set_eb1eedd7(int index, ::Dynamic value);

		 ::Dynamic removeAt_e55b6ed4(int index);

		int push_1de514fa( ::Dynamic value);

		int lastIndexOf_40b54d71( ::Dynamic x, ::Dynamic from);

		void insertAt_b5fb9c22(int index, ::Dynamic element);

		int indexOf_6b0e4700( ::Dynamic x,::hx::Null< int >  from);

		 ::Dynamic get_e55b6ed4(int index);
		::String __ToString() const { return HX_("BoolVector",ad,28,bf,2d); }

		static void __boot();
		static  ::Dynamic __meta__;
		bool fixed;
		::Array< bool > _hx___array;
		int _hx___tempIndex;
		::Dynamic concat(::Dynamic a);
		::Dynamic concat_dyn();

		::Dynamic copy();
		::Dynamic copy_dyn();

		::Dynamic filter( ::Dynamic callback);
		::Dynamic filter_dyn();

		bool get(int index);
		::Dynamic get_dyn();

		int indexOf(bool x,::hx::Null< int >  from);
		::Dynamic indexOf_dyn();

		void insertAt(int index,bool element);
		::Dynamic insertAt_dyn();

		 ::Dynamic iterator();
		::Dynamic iterator_dyn();

		::String join(::String sep);
		::Dynamic join_dyn();

		int lastIndexOf(bool x, ::Dynamic from);
		::Dynamic lastIndexOf_dyn();

		 ::Dynamic pop();
		::Dynamic pop_dyn();

		int push(bool x);
		::Dynamic push_dyn();

		bool removeAt(int index);
		::Dynamic removeAt_dyn();

		::Dynamic reverse();
		::Dynamic reverse_dyn();

		bool set(int index,bool value);
		::Dynamic set_dyn();

		 ::Dynamic shift();
		::Dynamic shift_dyn();

		::Dynamic slice(::hx::Null< int >  startIndex, ::Dynamic endIndex);
		::Dynamic slice_dyn();

		void sort( ::Dynamic f);
		::Dynamic sort_dyn();

		::Dynamic splice(int pos,int len);
		::Dynamic splice_dyn();

		 ::Dynamic toJSON();
		::Dynamic toJSON_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		void unshift(bool x);
		::Dynamic unshift_dyn();

		int get_length();
		::Dynamic get_length_dyn();

		int set_length(int value);
		::Dynamic set_length_dyn();

};

} // end namespace openfl
} // end namespace _Vector

#endif /* INCLUDED_openfl__Vector_BoolVector */ 
