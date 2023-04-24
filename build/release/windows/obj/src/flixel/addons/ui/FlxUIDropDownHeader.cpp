#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUI9SliceSprite
#include <flixel/addons/ui/FlxUI9SliceSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIDropDownHeader
#include <flixel/addons/ui/FlxUIDropDownHeader.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISpriteButton
#include <flixel/addons/ui/FlxUISpriteButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIText
#include <flixel/addons/ui/FlxUIText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ICursorPointable
#include <flixel/addons/ui/interfaces/ICursorPointable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_015f8e5857f13f23_508_new,"flixel.addons.ui.FlxUIDropDownHeader","new",0x97950645,"flixel.addons.ui.FlxUIDropDownHeader.new","flixel/addons/ui/FlxUIDropDownMenu.hx",508,0x238549da)
static const int _hx_array_data_73217fd3_1[] = {
	(int)1,(int)1,(int)14,(int)14,
};
HX_LOCAL_STACK_FRAME(_hx_pos_015f8e5857f13f23_551_destroy,"flixel.addons.ui.FlxUIDropDownHeader","destroy",0x07c8b95f,"flixel.addons.ui.FlxUIDropDownHeader.destroy","flixel/addons/ui/FlxUIDropDownMenu.hx",551,0x238549da)
namespace flixel{
namespace addons{
namespace ui{

void FlxUIDropDownHeader_obj::__construct(::hx::Null< int >  __o_Width, ::flixel::FlxSprite Background, ::flixel::addons::ui::FlxUIText Text, ::flixel::addons::ui::FlxUISpriteButton Button){
            		int Width = __o_Width.Default(120);
            	HX_GC_STACKFRAME(&_hx_pos_015f8e5857f13f23_508_new)
HXLINE( 509)		super::__construct(null(),null());
HXLINE( 511)		this->background = Background;
HXLINE( 512)		this->text = Text;
HXLINE( 513)		this->button = Button;
HXLINE( 516)		if (::hx::IsNull( this->background )) {
HXLINE( 518)			this->background =  ::flixel::addons::ui::FlxUI9SliceSprite_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),HX_("flixel/flixel-ui/img/box.png",dd,a4,cf,5b), ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,Width,20),::Array_obj< int >::fromData( _hx_array_data_73217fd3_1,4),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 522)		if (::hx::IsNull( this->button )) {
HXLINE( 524)			this->button =  ::flixel::addons::ui::FlxUISpriteButton_obj::__alloc( HX_CTX ,0,0, ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,HX_("flixel/flixel-ui/img/dropdown_mark.png",cd,eb,34,3e)),null());
HXLINE( 525)			 ::flixel::addons::ui::FlxUISpriteButton _hx_tmp = this->button;
HXDLIN( 525)			_hx_tmp->loadGraphicSlice9(::cpp::VirtualArray_obj::__new(1)->init(0,HX_("flixel/flixel-ui/img/button_thin.png",58,62,55,9f)),80,20,::Array_obj< ::Dynamic>::__new(1)->init(0,::flixel::util::FlxStringUtil_obj::toIntArray(HX_("6,6,11,11",c0,1f,fa,07))),0,-1,false,18,18,null());
            		}
HXLINE( 528)		 ::flixel::addons::ui::FlxUISpriteButton _hx_tmp = this->button;
HXDLIN( 528)		Float _hx_tmp1 = this->background->get_height();
HXDLIN( 528)		_hx_tmp->resize(_hx_tmp1,this->background->get_height());
HXLINE( 529)		 ::flixel::addons::ui::FlxUISpriteButton _hx_tmp2 = this->button;
HXDLIN( 529)		Float _hx_tmp3 = this->background->x;
HXDLIN( 529)		Float _hx_tmp4 = (_hx_tmp3 + this->background->get_width());
HXDLIN( 529)		_hx_tmp2->set_x((_hx_tmp4 - this->button->get_width()));
HXLINE( 532)		this->button->set_width(( (Float)(Width) ));
HXLINE( 533)		 ::flixel::addons::ui::FlxUISpriteButton fh = this->button;
HXDLIN( 533)		fh->offset->set_x((fh->offset->x - ( (Float)((Width - this->button->frameWidth)) )));
HXLINE( 534)		this->button->set_x(this->offset->x);
HXLINE( 535)		 ::flixel::FlxSprite fh1 = ( ( ::flixel::FlxSprite)(this->button->label) );
HXDLIN( 535)		fh1->offset->set_x((fh1->offset->x + this->button->offset->x));
HXLINE( 538)		if (::hx::IsNull( this->text )) {
HXLINE( 540)			this->text =  ::flixel::addons::ui::FlxUIText_obj::__alloc( HX_CTX ,0,0,::Std_obj::_hx_int(this->background->get_width()),null(),null(),null());
            		}
HXLINE( 542)		this->text->setPosition(2,4);
HXLINE( 543)		this->text->set_color(-16777216);
HXLINE( 545)		this->add(this->background);
HXLINE( 546)		this->add(this->button);
HXLINE( 547)		this->add(this->text);
            	}

Dynamic FlxUIDropDownHeader_obj::__CreateEmpty() { return new FlxUIDropDownHeader_obj; }

void *FlxUIDropDownHeader_obj::_hx_vtable = 0;

Dynamic FlxUIDropDownHeader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxUIDropDownHeader_obj > _hx_result = new FlxUIDropDownHeader_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool FlxUIDropDownHeader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e99b761) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x2e99b761;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x398eb8dc || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7dab0655;
		}
	}
}

void FlxUIDropDownHeader_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_015f8e5857f13f23_551_destroy)
HXLINE( 552)		this->super::destroy();
HXLINE( 554)		this->background = ( ( ::flixel::FlxSprite)(::flixel::util::FlxDestroyUtil_obj::destroy(this->background)) );
HXLINE( 555)		this->text = ( ( ::flixel::addons::ui::FlxUIText)(::flixel::util::FlxDestroyUtil_obj::destroy(this->text)) );
HXLINE( 556)		this->button = ( ( ::flixel::addons::ui::FlxUISpriteButton)(::flixel::util::FlxDestroyUtil_obj::destroy(this->button)) );
            	}



::hx::ObjectPtr< FlxUIDropDownHeader_obj > FlxUIDropDownHeader_obj::__new(::hx::Null< int >  __o_Width, ::flixel::FlxSprite Background, ::flixel::addons::ui::FlxUIText Text, ::flixel::addons::ui::FlxUISpriteButton Button) {
	::hx::ObjectPtr< FlxUIDropDownHeader_obj > __this = new FlxUIDropDownHeader_obj();
	__this->__construct(__o_Width,Background,Text,Button);
	return __this;
}

::hx::ObjectPtr< FlxUIDropDownHeader_obj > FlxUIDropDownHeader_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_Width, ::flixel::FlxSprite Background, ::flixel::addons::ui::FlxUIText Text, ::flixel::addons::ui::FlxUISpriteButton Button) {
	FlxUIDropDownHeader_obj *__this = (FlxUIDropDownHeader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxUIDropDownHeader_obj), true, "flixel.addons.ui.FlxUIDropDownHeader"));
	*(void **)__this = FlxUIDropDownHeader_obj::_hx_vtable;
	__this->__construct(__o_Width,Background,Text,Button);
	return __this;
}

FlxUIDropDownHeader_obj::FlxUIDropDownHeader_obj()
{
}

void FlxUIDropDownHeader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUIDropDownHeader);
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(button,"button");
	 ::flixel::addons::ui::FlxUIGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUIDropDownHeader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(button,"button");
	 ::flixel::addons::ui::FlxUIGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxUIDropDownHeader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return ::hx::Val( button ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return ::hx::Val( background ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxUIDropDownHeader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast<  ::flixel::addons::ui::FlxUIText >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast<  ::flixel::addons::ui::FlxUISpriteButton >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUIDropDownHeader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("background",ee,93,1d,26));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("button",f2,61,e0,d9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxUIDropDownHeader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FlxUIDropDownHeader_obj,background),HX_("background",ee,93,1d,26)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIText */ ,(int)offsetof(FlxUIDropDownHeader_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUISpriteButton */ ,(int)offsetof(FlxUIDropDownHeader_obj,button),HX_("button",f2,61,e0,d9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxUIDropDownHeader_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxUIDropDownHeader_obj_sMemberFields[] = {
	HX_("background",ee,93,1d,26),
	HX_("text",ad,cc,f9,4c),
	HX_("button",f2,61,e0,d9),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

::hx::Class FlxUIDropDownHeader_obj::__mClass;

void FlxUIDropDownHeader_obj::__register()
{
	FlxUIDropDownHeader_obj _hx_dummy;
	FlxUIDropDownHeader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.FlxUIDropDownHeader",d3,7f,21,73);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxUIDropDownHeader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxUIDropDownHeader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxUIDropDownHeader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxUIDropDownHeader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
