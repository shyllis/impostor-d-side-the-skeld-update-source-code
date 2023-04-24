#ifndef INCLUDED_openfl_text_TextField
#define INCLUDED_openfl_text_TextField

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,FocusEvent)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,text,StyleSheet)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
HX_DECLARE_CLASS2(openfl,text,TextLineMetrics)
HX_DECLARE_CLASS3(openfl,text,_internal,TextEngine)
HX_DECLARE_CLASS3(openfl,text,_internal,TextLayoutGroup)

namespace openfl{
namespace text{


class HXCPP_CLASS_ATTRIBUTES TextField_obj : public  ::openfl::display::InteractiveObject_obj
{
	public:
		typedef  ::openfl::display::InteractiveObject_obj super;
		typedef TextField_obj OBJ_;
		TextField_obj();

	public:
		enum { _hx_ClassId = 0x7f0de750 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.text.TextField")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.text.TextField"); }
		static ::hx::ObjectPtr< TextField_obj > __new();
		static ::hx::ObjectPtr< TextField_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextField_obj();

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
		::String __ToString() const { return HX_("TextField",ad,04,54,3b); }

		static void __boot();
		static  ::openfl::text::TextFormat _hx___defaultTextFormat;
		static  ::haxe::ds::StringMap _hx___missingFontWarning;
		bool condenseWhite;
		 ::openfl::geom::Rectangle _hx___bounds;
		int _hx___caretIndex;
		 ::haxe::Timer _hx___cursorTimer;
		bool _hx___dirty;
		bool _hx___displayAsPassword;
		bool _hx___domRender;
		bool _hx___inputEnabled;
		bool _hx___isHTML;
		bool _hx___layoutDirty;
		int _hx___mouseScrollVCounter;
		bool _hx___mouseWheelEnabled;
		Float _hx___offsetX;
		Float _hx___offsetY;
		int _hx___selectionIndex;
		bool _hx___showCursor;
		 ::openfl::text::StyleSheet _hx___styleSheet;
		::String _hx___text;
		::String _hx___htmlText;
		 ::openfl::text::_internal::TextEngine _hx___textEngine;
		 ::openfl::text::TextFormat _hx___textFormat;
		void appendText(::String text);
		::Dynamic appendText_dyn();

		 ::openfl::geom::Rectangle getCharBoundaries(int charIndex);
		::Dynamic getCharBoundaries_dyn();

		int getCharIndexAtPoint(Float x,Float y);
		::Dynamic getCharIndexAtPoint_dyn();

		int getFirstCharInParagraph(int charIndex);
		::Dynamic getFirstCharInParagraph_dyn();

		int getLineIndexAtPoint(Float x,Float y);
		::Dynamic getLineIndexAtPoint_dyn();

		int getLineIndexOfChar(int charIndex);
		::Dynamic getLineIndexOfChar_dyn();

		int getLineLength(int lineIndex);
		::Dynamic getLineLength_dyn();

		 ::openfl::text::TextLineMetrics getLineMetrics(int lineIndex);
		::Dynamic getLineMetrics_dyn();

		int getLineOffset(int lineIndex);
		::Dynamic getLineOffset_dyn();

		::String getLineText(int lineIndex);
		::Dynamic getLineText_dyn();

		int getParagraphLength(int charIndex);
		::Dynamic getParagraphLength_dyn();

		 ::openfl::text::TextFormat getTextFormat(::hx::Null< int >  beginIndex,::hx::Null< int >  endIndex);
		::Dynamic getTextFormat_dyn();

		void replaceSelectedText(::String value);
		::Dynamic replaceSelectedText_dyn();

		void replaceText(int beginIndex,int endIndex,::String newText);
		::Dynamic replaceText_dyn();

		void setSelection(int beginIndex,int endIndex);
		::Dynamic setSelection_dyn();

		void setTextFormat( ::openfl::text::TextFormat format,::hx::Null< int >  beginIndex,::hx::Null< int >  endIndex);
		::Dynamic setTextFormat_dyn();

		bool _hx___allowMouseFocus();

		void _hx___caretBeginningOfLine();
		::Dynamic _hx___caretBeginningOfLine_dyn();

		void _hx___caretBeginningOfNextLine();
		::Dynamic _hx___caretBeginningOfNextLine_dyn();

		void _hx___caretBeginningOfPreviousLine();
		::Dynamic _hx___caretBeginningOfPreviousLine_dyn();

		void _hx___caretEndOfLine();
		::Dynamic _hx___caretEndOfLine_dyn();

		void _hx___caretNextCharacter();
		::Dynamic _hx___caretNextCharacter_dyn();

		void _hx___caretNextLine();
		::Dynamic _hx___caretNextLine_dyn();

		void _hx___caretPreviousCharacter();
		::Dynamic _hx___caretPreviousCharacter_dyn();

		void _hx___caretPreviousLine();
		::Dynamic _hx___caretPreviousLine_dyn();

		void _hx___disableInput();
		::Dynamic _hx___disableInput_dyn();

		bool _hx___dispatch( ::openfl::events::Event event);

		void _hx___enableInput();
		::Dynamic _hx___enableInput_dyn();

		Float _hx___getAdvance( ::Dynamic position);
		::Dynamic _hx___getAdvance_dyn();

		void _hx___getBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix);

		bool _hx___getCharBoundaries(int charIndex, ::openfl::geom::Rectangle rect);
		::Dynamic _hx___getCharBoundaries_dyn();

		int _hx___getCharIndexOnDifferentLine(int charIndex,int lineIndex);
		::Dynamic _hx___getCharIndexOnDifferentLine_dyn();

		::String _hx___getCursor();

		 ::openfl::text::_internal::TextLayoutGroup _hx___getGroup(Float x,Float y,::hx::Null< bool >  precise);
		::Dynamic _hx___getGroup_dyn();

		int _hx___getPosition(Float x,Float y);
		::Dynamic _hx___getPosition_dyn();

		bool _hx___hitTest(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject);

		bool _hx___hitTestMask(Float x,Float y);

		void _hx___replaceSelectedText(::String value,::hx::Null< bool >  restrict);
		::Dynamic _hx___replaceSelectedText_dyn();

		void _hx___replaceText(int beginIndex,int endIndex,::String newText,bool restrict);
		::Dynamic _hx___replaceText_dyn();

		void _hx___startCursorTimer();
		::Dynamic _hx___startCursorTimer_dyn();

		void _hx___startTextInput();
		::Dynamic _hx___startTextInput_dyn();

		void _hx___stopCursorTimer();
		::Dynamic _hx___stopCursorTimer_dyn();

		void _hx___stopTextInput();
		::Dynamic _hx___stopTextInput_dyn();

		void _hx___updateLayout();
		::Dynamic _hx___updateLayout_dyn();

		void _hx___updateScrollH();
		::Dynamic _hx___updateScrollH_dyn();

		void _hx___updateScrollV();
		::Dynamic _hx___updateScrollV_dyn();

		void _hx___updateMouseDrag();
		::Dynamic _hx___updateMouseDrag_dyn();

		void _hx___updateText(::String value);
		::Dynamic _hx___updateText_dyn();

		void _hx___updateTransforms( ::openfl::geom::Matrix overrideTransform);

		 ::Dynamic get_antiAliasType();
		::Dynamic get_antiAliasType_dyn();

		 ::Dynamic set_antiAliasType( ::Dynamic value);
		::Dynamic set_antiAliasType_dyn();

		 ::Dynamic get_autoSize();
		::Dynamic get_autoSize_dyn();

		 ::Dynamic set_autoSize( ::Dynamic value);
		::Dynamic set_autoSize_dyn();

		bool get_background();
		::Dynamic get_background_dyn();

		bool set_background(bool value);
		::Dynamic set_background_dyn();

		int get_backgroundColor();
		::Dynamic get_backgroundColor_dyn();

		int set_backgroundColor(int value);
		::Dynamic set_backgroundColor_dyn();

		bool get_border();
		::Dynamic get_border_dyn();

		bool set_border(bool value);
		::Dynamic set_border_dyn();

		int get_borderColor();
		::Dynamic get_borderColor_dyn();

		int set_borderColor(int value);
		::Dynamic set_borderColor_dyn();

		int get_bottomScrollV();
		::Dynamic get_bottomScrollV_dyn();

		int get_caretIndex();
		::Dynamic get_caretIndex_dyn();

		 ::openfl::text::TextFormat get_defaultTextFormat();
		::Dynamic get_defaultTextFormat_dyn();

		 ::openfl::text::TextFormat set_defaultTextFormat( ::openfl::text::TextFormat value);
		::Dynamic set_defaultTextFormat_dyn();

		bool get_displayAsPassword();
		::Dynamic get_displayAsPassword_dyn();

		bool set_displayAsPassword(bool value);
		::Dynamic set_displayAsPassword_dyn();

		bool get_embedFonts();
		::Dynamic get_embedFonts_dyn();

		bool set_embedFonts(bool value);
		::Dynamic set_embedFonts_dyn();

		 ::Dynamic get_gridFitType();
		::Dynamic get_gridFitType_dyn();

		 ::Dynamic set_gridFitType( ::Dynamic value);
		::Dynamic set_gridFitType_dyn();

		Float get_height();

		Float set_height(Float value);

		::String get_htmlText();
		::Dynamic get_htmlText_dyn();

		::String set_htmlText(::String value);
		::Dynamic set_htmlText_dyn();

		int get_length();
		::Dynamic get_length_dyn();

		int get_maxChars();
		::Dynamic get_maxChars_dyn();

		int set_maxChars(int value);
		::Dynamic set_maxChars_dyn();

		int get_maxScrollH();
		::Dynamic get_maxScrollH_dyn();

		int get_maxScrollV();
		::Dynamic get_maxScrollV_dyn();

		bool get_mouseWheelEnabled();
		::Dynamic get_mouseWheelEnabled_dyn();

		bool set_mouseWheelEnabled(bool value);
		::Dynamic set_mouseWheelEnabled_dyn();

		bool get_multiline();
		::Dynamic get_multiline_dyn();

		bool set_multiline(bool value);
		::Dynamic set_multiline_dyn();

		int get_numLines();
		::Dynamic get_numLines_dyn();

		::String get_restrict();
		::Dynamic get_restrict_dyn();

		::String set_restrict(::String value);
		::Dynamic set_restrict_dyn();

		int get_scrollH();
		::Dynamic get_scrollH_dyn();

		int set_scrollH(int value);
		::Dynamic set_scrollH_dyn();

		int get_scrollV();
		::Dynamic get_scrollV_dyn();

		int set_scrollV(int value);
		::Dynamic set_scrollV_dyn();

		bool get_selectable();
		::Dynamic get_selectable_dyn();

		bool set_selectable(bool value);
		::Dynamic set_selectable_dyn();

		int get_selectionBeginIndex();
		::Dynamic get_selectionBeginIndex_dyn();

		int get_selectionEndIndex();
		::Dynamic get_selectionEndIndex_dyn();

		Float get_sharpness();
		::Dynamic get_sharpness_dyn();

		Float set_sharpness(Float value);
		::Dynamic set_sharpness_dyn();

		 ::openfl::text::StyleSheet get_styleSheet();
		::Dynamic get_styleSheet_dyn();

		 ::openfl::text::StyleSheet set_styleSheet( ::openfl::text::StyleSheet value);
		::Dynamic set_styleSheet_dyn();

		bool get_tabEnabled();

		::String get_text();
		::Dynamic get_text_dyn();

		::String set_text(::String value);
		::Dynamic set_text_dyn();

		int get_textColor();
		::Dynamic get_textColor_dyn();

		int set_textColor(int value);
		::Dynamic set_textColor_dyn();

		Float get_textWidth();
		::Dynamic get_textWidth_dyn();

		Float get_textHeight();
		::Dynamic get_textHeight_dyn();

		 ::Dynamic get_type();
		::Dynamic get_type_dyn();

		 ::Dynamic set_type( ::Dynamic value);
		::Dynamic set_type_dyn();

		Float get_width();

		Float set_width(Float value);

		bool get_wordWrap();
		::Dynamic get_wordWrap_dyn();

		bool set_wordWrap(bool value);
		::Dynamic set_wordWrap_dyn();

		Float get_x();

		Float set_x(Float value);

		Float get_y();

		Float set_y(Float value);

		void stage_onMouseMove( ::openfl::events::MouseEvent event);
		::Dynamic stage_onMouseMove_dyn();

		void stage_onMouseUp( ::openfl::events::MouseEvent event);
		::Dynamic stage_onMouseUp_dyn();

		void this_onAddedToStage( ::openfl::events::Event event);
		::Dynamic this_onAddedToStage_dyn();

		void this_onEnterFrame( ::openfl::events::Event e);
		::Dynamic this_onEnterFrame_dyn();

		void this_onFocusIn( ::openfl::events::FocusEvent event);
		::Dynamic this_onFocusIn_dyn();

		void this_onFocusOut( ::openfl::events::FocusEvent event);
		::Dynamic this_onFocusOut_dyn();

		void this_onKeyDown( ::openfl::events::KeyboardEvent event);
		::Dynamic this_onKeyDown_dyn();

		void this_onMouseDown( ::openfl::events::MouseEvent event);
		::Dynamic this_onMouseDown_dyn();

		void this_onMouseWheel( ::openfl::events::MouseEvent event);
		::Dynamic this_onMouseWheel_dyn();

		void this_onDoubleClick( ::openfl::events::MouseEvent event);
		::Dynamic this_onDoubleClick_dyn();

		void window_onKeyDown(int key,int modifier);
		::Dynamic window_onKeyDown_dyn();

		void window_onTextInput(::String value);
		::Dynamic window_onTextInput_dyn();

};

} // end namespace openfl
} // end namespace text

#endif /* INCLUDED_openfl_text_TextField */ 
