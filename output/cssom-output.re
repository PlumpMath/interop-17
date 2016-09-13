let module StyleSheet = {
  type t;
  external disabled: bool = "" [@@bs.get];
  external href: string = "" [@@bs.get];
  external media: MediaList = "" [@@bs.get];
  external ownerNode: Node = "" [@@bs.get];
  external parentStyleSheet: TODO = "" [@@bs.get];
  external title: string = "" [@@bs.get];
  external _type: string = "" [@@bs.get];
};
let module StyleSheetList = {
  type t;
  external length: float = "" [@@bs.get];
};
let module MediaList = {
  type t;
  external mediaText: string = "" [@@bs.get];
  external length: float = "" [@@bs.get];
  external item: t => float => TODO = "" [@@bs.send];
  external deleteMedium: t => string => unit = "" [@@bs.send];
  external appendMedium: t => string => unit = "" [@@bs.send];
};
let module CSSStyleSheet = {
  type t;
  external cssRules: CSSRuleList = "" [@@bs.get];
  external ownerRule: TODO = "" [@@bs.get];
  external deleteRule: t => float => unit = "" [@@bs.send];
  external insertRule: t => string => float => unit = "" [@@bs.send];
};
let module CSSRule = {
  type t;
  external cssText: string = "" [@@bs.get];
  external parentRule: TODO = "" [@@bs.get];
  external parentStyleSheet: TODO = "" [@@bs.get];
  external _type: float = "" [@@bs.get];
  external _STYLE_RULE: float = "" [@@bs.val];
  external _MEDIA_RULE: float = "" [@@bs.val];
  external _FONT_FACE_RULE: float = "" [@@bs.val];
  external _PAGE_RULE: float = "" [@@bs.val];
  external _IMPORT_RULE: float = "" [@@bs.val];
  external _CHARSET_RULE: float = "" [@@bs.val];
  external _UNKNOWN_RULE: float = "" [@@bs.val];
  external _KEYFRAMES_RULE: float = "" [@@bs.val];
  external _KEYFRAME_RULE: float = "" [@@bs.val];
  external _NAMESPACE_RULE: float = "" [@@bs.val];
  external _COUNTER_STYLE_RULE: float = "" [@@bs.val];
  external _SUPPORTS_RULE: float = "" [@@bs.val];
  external _DOCUMENT_RULE: float = "" [@@bs.val];
  external _FONT_FEATURE_VALUES_RULE: float = "" [@@bs.val];
  external _VIEWPORT_RULE: float = "" [@@bs.val];
  external _REGION_STYLE_RULE: float = "" [@@bs.val];
};
let module CSSRuleList = {
  type t;
  external length: float = "" [@@bs.get];
  external item: t => float => TODO = "" [@@bs.send];
};
let module CSSStyleDeclaration = {
  type t;
  external alignContent: string = "" [@@bs.get];
  external alignItems: string = "" [@@bs.get];
  external alignSelf: string = "" [@@bs.get];
  external all: string = "" [@@bs.get];
  external animation: string = "" [@@bs.get];
  external animationDelay: string = "" [@@bs.get];
  external animationDirection: string = "" [@@bs.get];
  external animationDuration: string = "" [@@bs.get];
  external animationFillMode: string = "" [@@bs.get];
  external animationIterationCount: string = "" [@@bs.get];
  external animationName: string = "" [@@bs.get];
  external animationPlayState: string = "" [@@bs.get];
  external animationTimingFunction: string = "" [@@bs.get];
  external backfaceVisibility: string = "" [@@bs.get];
  external background: string = "" [@@bs.get];
  external backgroundAttachment: string = "" [@@bs.get];
  external backgroundBlendMode: string = "" [@@bs.get];
  external backgroundClip: string = "" [@@bs.get];
  external backgroundColor: string = "" [@@bs.get];
  external backgroundImage: string = "" [@@bs.get];
  external backgroundOrigin: string = "" [@@bs.get];
  external backgroundPosition: string = "" [@@bs.get];
  external backgroundRepeat: string = "" [@@bs.get];
  external backgroundSize: string = "" [@@bs.get];
  external blockSize: string = "" [@@bs.get];
  external border: string = "" [@@bs.get];
  external borderBlockEnd: string = "" [@@bs.get];
  external borderBlockEndColor: string = "" [@@bs.get];
  external borderBlockEndStyle: string = "" [@@bs.get];
  external borderBlockEndWidth: string = "" [@@bs.get];
  external borderBlockStart: string = "" [@@bs.get];
  external borderBlockStartColor: string = "" [@@bs.get];
  external borderBlockStartStyle: string = "" [@@bs.get];
  external borderBlockStartWidth: string = "" [@@bs.get];
  external borderBottom: string = "" [@@bs.get];
  external borderBottomColor: string = "" [@@bs.get];
  external borderBottomLeftRadius: string = "" [@@bs.get];
  external borderBottomRightRadius: string = "" [@@bs.get];
  external borderBottomStyle: string = "" [@@bs.get];
  external borderBottomWidth: string = "" [@@bs.get];
  external borderCollapse: string = "" [@@bs.get];
  external borderColor: string = "" [@@bs.get];
  external borderImage: string = "" [@@bs.get];
  external borderImageOutset: string = "" [@@bs.get];
  external borderImageRepeat: string = "" [@@bs.get];
  external borderImageSlice: string = "" [@@bs.get];
  external borderImageSource: string = "" [@@bs.get];
  external borderImageWidth: string = "" [@@bs.get];
  external borderInlineEnd: string = "" [@@bs.get];
  external borderInlineEndColor: string = "" [@@bs.get];
  external borderInlineEndStyle: string = "" [@@bs.get];
  external borderInlineEndWidth: string = "" [@@bs.get];
  external borderInlineStart: string = "" [@@bs.get];
  external borderInlineStartColor: string = "" [@@bs.get];
  external borderInlineStartStyle: string = "" [@@bs.get];
  external borderInlineStartWidth: string = "" [@@bs.get];
  external borderLeft: string = "" [@@bs.get];
  external borderLeftColor: string = "" [@@bs.get];
  external borderLeftStyle: string = "" [@@bs.get];
  external borderLeftWidth: string = "" [@@bs.get];
  external borderRadius: string = "" [@@bs.get];
  external borderRight: string = "" [@@bs.get];
  external borderRightColor: string = "" [@@bs.get];
  external borderRightStyle: string = "" [@@bs.get];
  external borderRightWidth: string = "" [@@bs.get];
  external borderSpacing: string = "" [@@bs.get];
  external borderStyle: string = "" [@@bs.get];
  external borderTop: string = "" [@@bs.get];
  external borderTopColor: string = "" [@@bs.get];
  external borderTopLeftRadius: string = "" [@@bs.get];
  external borderTopRightRadius: string = "" [@@bs.get];
  external borderTopStyle: string = "" [@@bs.get];
  external borderTopWidth: string = "" [@@bs.get];
  external borderWidth: string = "" [@@bs.get];
  external bottom: string = "" [@@bs.get];
  external boxDecorationBreak: string = "" [@@bs.get];
  external boxShadow: string = "" [@@bs.get];
  external boxSizing: string = "" [@@bs.get];
  external breakAfter: string = "" [@@bs.get];
  external breakBefore: string = "" [@@bs.get];
  external breakInside: string = "" [@@bs.get];
  external captionSide: string = "" [@@bs.get];
  external clear: string = "" [@@bs.get];
  external clip: string = "" [@@bs.get];
  external clipPath: string = "" [@@bs.get];
  external color: string = "" [@@bs.get];
  external columns: string = "" [@@bs.get];
  external columnCount: string = "" [@@bs.get];
  external columnFill: string = "" [@@bs.get];
  external columnGap: string = "" [@@bs.get];
  external columnRule: string = "" [@@bs.get];
  external columnRuleColor: string = "" [@@bs.get];
  external columnRuleStyle: string = "" [@@bs.get];
  external columnRuleWidth: string = "" [@@bs.get];
  external columnSpan: string = "" [@@bs.get];
  external columnWidth: string = "" [@@bs.get];
  external content: string = "" [@@bs.get];
  external counterIncrement: string = "" [@@bs.get];
  external counterReset: string = "" [@@bs.get];
  external cursor: string = "" [@@bs.get];
  external direction: string = "" [@@bs.get];
  external display: string = "" [@@bs.get];
  external emptyCells: string = "" [@@bs.get];
  external filter: string = "" [@@bs.get];
  external flex: string = "" [@@bs.get];
  external flexBasis: string = "" [@@bs.get];
  external flexDirection: string = "" [@@bs.get];
  external flexFlow: string = "" [@@bs.get];
  external flexGrow: string = "" [@@bs.get];
  external flexShrink: string = "" [@@bs.get];
  external flexWrap: string = "" [@@bs.get];
  external float: string = "" [@@bs.get];
  external font: string = "" [@@bs.get];
  external fontFamily: string = "" [@@bs.get];
  external fontFeatureSettings: string = "" [@@bs.get];
  external fontKerning: string = "" [@@bs.get];
  external fontLanguageOverride: string = "" [@@bs.get];
  external fontSize: string = "" [@@bs.get];
  external fontSizeAdjust: string = "" [@@bs.get];
  external fontStretch: string = "" [@@bs.get];
  external fontStyle: string = "" [@@bs.get];
  external fontSynthesis: string = "" [@@bs.get];
  external fontVariant: string = "" [@@bs.get];
  external fontVariantAlternates: string = "" [@@bs.get];
  external fontVariantCaps: string = "" [@@bs.get];
  external fontVariantEastAsian: string = "" [@@bs.get];
  external fontVariantLigatures: string = "" [@@bs.get];
  external fontVariantNumeric: string = "" [@@bs.get];
  external fontVariantPosition: string = "" [@@bs.get];
  external fontWeight: string = "" [@@bs.get];
  external grad: string = "" [@@bs.get];
  external grid: string = "" [@@bs.get];
  external gridArea: string = "" [@@bs.get];
  external gridAutoColumns: string = "" [@@bs.get];
  external gridAutoFlow: string = "" [@@bs.get];
  external gridAutoPosition: string = "" [@@bs.get];
  external gridAutoRows: string = "" [@@bs.get];
  external gridColumn: string = "" [@@bs.get];
  external gridColumnStart: string = "" [@@bs.get];
  external gridColumnEnd: string = "" [@@bs.get];
  external gridRow: string = "" [@@bs.get];
  external gridRowStart: string = "" [@@bs.get];
  external gridRowEnd: string = "" [@@bs.get];
  external gridTemplate: string = "" [@@bs.get];
  external gridTemplateAreas: string = "" [@@bs.get];
  external gridTemplateRows: string = "" [@@bs.get];
  external gridTemplateColumns: string = "" [@@bs.get];
  external height: string = "" [@@bs.get];
  external hyphens: string = "" [@@bs.get];
  external imageRendering: string = "" [@@bs.get];
  external imageResolution: string = "" [@@bs.get];
  external imageOrientation: string = "" [@@bs.get];
  external imeMode: string = "" [@@bs.get];
  external inherit: string = "" [@@bs.get];
  external initial: string = "" [@@bs.get];
  external inlineSize: string = "" [@@bs.get];
  external isolation: string = "" [@@bs.get];
  external justifyContent: string = "" [@@bs.get];
  external left: string = "" [@@bs.get];
  external letterSpacing: string = "" [@@bs.get];
  external lineBreak: string = "" [@@bs.get];
  external lineHeight: string = "" [@@bs.get];
  external listStyle: string = "" [@@bs.get];
  external listStyleImage: string = "" [@@bs.get];
  external listStylePosition: string = "" [@@bs.get];
  external listStyleType: string = "" [@@bs.get];
  external margin: string = "" [@@bs.get];
  external marginBlockEnd: string = "" [@@bs.get];
  external marginBlockStart: string = "" [@@bs.get];
  external marginBottom: string = "" [@@bs.get];
  external marginInlineEnd: string = "" [@@bs.get];
  external marginInlineStart: string = "" [@@bs.get];
  external marginLeft: string = "" [@@bs.get];
  external marginRight: string = "" [@@bs.get];
  external marginTop: string = "" [@@bs.get];
  external marks: string = "" [@@bs.get];
  external mask: string = "" [@@bs.get];
  external maskType: string = "" [@@bs.get];
  external maxBlockSize: string = "" [@@bs.get];
  external maxHeight: string = "" [@@bs.get];
  external maxInlineSize: string = "" [@@bs.get];
  external maxWidth: string = "" [@@bs.get];
  external minBlockSize: string = "" [@@bs.get];
  external minHeight: string = "" [@@bs.get];
  external minInlineSize: string = "" [@@bs.get];
  external minWidth: string = "" [@@bs.get];
  external mixBlendMode: string = "" [@@bs.get];
  external objectFit: string = "" [@@bs.get];
  external objectPosition: string = "" [@@bs.get];
  external offsetBlockEnd: string = "" [@@bs.get];
  external offsetBlockStart: string = "" [@@bs.get];
  external offsetInlineEnd: string = "" [@@bs.get];
  external offsetInlineStart: string = "" [@@bs.get];
  external opacity: string = "" [@@bs.get];
  external order: string = "" [@@bs.get];
  external orphans: string = "" [@@bs.get];
  external outline: string = "" [@@bs.get];
  external outlineColor: string = "" [@@bs.get];
  external outlineOffset: string = "" [@@bs.get];
  external outlineStyle: string = "" [@@bs.get];
  external outlineWidth: string = "" [@@bs.get];
  external overflow: string = "" [@@bs.get];
  external overflowWrap: string = "" [@@bs.get];
  external overflowX: string = "" [@@bs.get];
  external overflowY: string = "" [@@bs.get];
  external padding: string = "" [@@bs.get];
  external paddingBlockEnd: string = "" [@@bs.get];
  external paddingBlockStart: string = "" [@@bs.get];
  external paddingBottom: string = "" [@@bs.get];
  external paddingInlineEnd: string = "" [@@bs.get];
  external paddingInlineStart: string = "" [@@bs.get];
  external paddingLeft: string = "" [@@bs.get];
  external paddingRight: string = "" [@@bs.get];
  external paddingTop: string = "" [@@bs.get];
  external pageBreakAfter: string = "" [@@bs.get];
  external pageBreakBefore: string = "" [@@bs.get];
  external pageBreakInside: string = "" [@@bs.get];
  external perspective: string = "" [@@bs.get];
  external perspectiveOrigin: string = "" [@@bs.get];
  external pointerEvents: string = "" [@@bs.get];
  external position: string = "" [@@bs.get];
  external quotes: string = "" [@@bs.get];
  external rad: string = "" [@@bs.get];
  external resize: string = "" [@@bs.get];
  external right: string = "" [@@bs.get];
  external rubyAlign: string = "" [@@bs.get];
  external rubyMerge: string = "" [@@bs.get];
  external rubyPosition: string = "" [@@bs.get];
  external scrollBehavior: string = "" [@@bs.get];
  external scrollSnapCoordinate: string = "" [@@bs.get];
  external scrollSnapDestination: string = "" [@@bs.get];
  external scrollSnapPointsX: string = "" [@@bs.get];
  external scrollSnapPointsY: string = "" [@@bs.get];
  external scrollSnapType: string = "" [@@bs.get];
  external shapeImageThreshold: string = "" [@@bs.get];
  external shapeMargin: string = "" [@@bs.get];
  external shapeOutside: string = "" [@@bs.get];
  external tableLayout: string = "" [@@bs.get];
  external tabSize: string = "" [@@bs.get];
  external textAlign: string = "" [@@bs.get];
  external textAlignLast: string = "" [@@bs.get];
  external textCombineUpright: string = "" [@@bs.get];
  external textDecoration: string = "" [@@bs.get];
  external textDecorationColor: string = "" [@@bs.get];
  external textDecorationLine: string = "" [@@bs.get];
  external textDecorationStyle: string = "" [@@bs.get];
  external textIndent: string = "" [@@bs.get];
  external textOrientation: string = "" [@@bs.get];
  external textOverflow: string = "" [@@bs.get];
  external textRendering: string = "" [@@bs.get];
  external textShadow: string = "" [@@bs.get];
  external textTransform: string = "" [@@bs.get];
  external textUnderlinePosition: string = "" [@@bs.get];
  external top: string = "" [@@bs.get];
  external touchAction: string = "" [@@bs.get];
  external transform: string = "" [@@bs.get];
  external transformOrigin: string = "" [@@bs.get];
  external transformStyle: string = "" [@@bs.get];
  external transition: string = "" [@@bs.get];
  external transitionDelay: string = "" [@@bs.get];
  external transitionDuration: string = "" [@@bs.get];
  external transitionProperty: string = "" [@@bs.get];
  external transitionTimingFunction: string = "" [@@bs.get];
  external turn: string = "" [@@bs.get];
  external unicodeBidi: string = "" [@@bs.get];
  external unicodeRange: string = "" [@@bs.get];
  external verticalAlign: string = "" [@@bs.get];
  external visibility: string = "" [@@bs.get];
  external webkitTransform: string = "" [@@bs.get];
  external whiteSpace: string = "" [@@bs.get];
  external widows: string = "" [@@bs.get];
  external width: string = "" [@@bs.get];
  external willChange: string = "" [@@bs.get];
  external wordBreak: string = "" [@@bs.get];
  external wordSpacing: string = "" [@@bs.get];
  external wordWrap: string = "" [@@bs.get];
  external writingMode: string = "" [@@bs.get];
  external zIndex: string = "" [@@bs.get];
  external cssFloat: string = "" [@@bs.get];
  external cssText: string = "" [@@bs.get];
  external getPropertyPriority: t => string => string = "" [@@bs.send];
  external getPropertyValue: t => string => string = "" [@@bs.send];
  external item: t => float => string = "" [@@bs.send];
  external length: float = "" [@@bs.get];
  external parentRule: CSSRule = "" [@@bs.get];
  external removeProperty: t => string => string = "" [@@bs.send];
  external setProperty: t => string => TODO => TODO => unit = "" [@@bs.send];
  external setPropertyPriority: t => string => string => unit = "" [@@bs.send];
};
let module TransitionEvent = {
  type t;
  external elapsedTime: float = "" [@@bs.get];
  external pseudoElement: string = "" [@@bs.get];
  external propertyName: string = "" [@@bs.get];
};
