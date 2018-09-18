//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/res/XResourceBundle.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsResXResourceBundle")
#ifdef RESTRICT_OrgApacheXmlUtilsResXResourceBundle
#define INCLUDE_ALL_OrgApacheXmlUtilsResXResourceBundle 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsResXResourceBundle 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsResXResourceBundle

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlUtilsResXResourceBundle_) && (INCLUDE_ALL_OrgApacheXmlUtilsResXResourceBundle || defined(INCLUDE_OrgApacheXmlUtilsResXResourceBundle))
#define OrgApacheXmlUtilsResXResourceBundle_

#define RESTRICT_JavaUtilListResourceBundle 1
#define INCLUDE_JavaUtilListResourceBundle 1
#include "java/util/ListResourceBundle.h"

@class IOSObjectArray;
@class JavaUtilLocale;

/*!
 @brief The default (english) resource bundle.
 */
@interface OrgApacheXmlUtilsResXResourceBundle : JavaUtilListResourceBundle
@property (readonly, copy, class) NSString *ERROR_RESOURCES NS_SWIFT_NAME(ERROR_RESOURCES);
@property (readonly, copy, class) NSString *XSLT_RESOURCE NS_SWIFT_NAME(XSLT_RESOURCE);
@property (readonly, copy, class) NSString *LANG_BUNDLE_NAME NS_SWIFT_NAME(LANG_BUNDLE_NAME);
@property (readonly, copy, class) NSString *MULT_ORDER NS_SWIFT_NAME(MULT_ORDER);
@property (readonly, copy, class) NSString *MULT_PRECEDES NS_SWIFT_NAME(MULT_PRECEDES);
@property (readonly, copy, class) NSString *MULT_FOLLOWS NS_SWIFT_NAME(MULT_FOLLOWS);
@property (readonly, copy, class) NSString *LANG_ORIENTATION NS_SWIFT_NAME(LANG_ORIENTATION);
@property (readonly, copy, class) NSString *LANG_RIGHTTOLEFT NS_SWIFT_NAME(LANG_RIGHTTOLEFT);
@property (readonly, copy, class) NSString *LANG_LEFTTORIGHT NS_SWIFT_NAME(LANG_LEFTTORIGHT);
@property (readonly, copy, class) NSString *LANG_NUMBERING NS_SWIFT_NAME(LANG_NUMBERING);
@property (readonly, copy, class) NSString *LANG_ADDITIVE NS_SWIFT_NAME(LANG_ADDITIVE);
@property (readonly, copy, class) NSString *LANG_MULT_ADD NS_SWIFT_NAME(LANG_MULT_ADD);
@property (readonly, copy, class) NSString *LANG_MULTIPLIER NS_SWIFT_NAME(LANG_MULTIPLIER);
@property (readonly, copy, class) NSString *LANG_MULTIPLIER_CHAR NS_SWIFT_NAME(LANG_MULTIPLIER_CHAR);
@property (readonly, copy, class) NSString *LANG_NUMBERGROUPS NS_SWIFT_NAME(LANG_NUMBERGROUPS);
@property (readonly, copy, class) NSString *LANG_NUM_TABLES NS_SWIFT_NAME(LANG_NUM_TABLES);
@property (readonly, copy, class) NSString *LANG_ALPHABET NS_SWIFT_NAME(LANG_ALPHABET);
@property (readonly, copy, class) NSString *LANG_TRAD_ALPHABET NS_SWIFT_NAME(LANG_TRAD_ALPHABET);

+ (NSString *)ERROR_RESOURCES;

+ (NSString *)XSLT_RESOURCE;

+ (NSString *)LANG_BUNDLE_NAME;

+ (NSString *)MULT_ORDER;

+ (NSString *)MULT_PRECEDES;

+ (NSString *)MULT_FOLLOWS;

+ (NSString *)LANG_ORIENTATION;

+ (NSString *)LANG_RIGHTTOLEFT;

+ (NSString *)LANG_LEFTTORIGHT;

+ (NSString *)LANG_NUMBERING;

+ (NSString *)LANG_ADDITIVE;

+ (NSString *)LANG_MULT_ADD;

+ (NSString *)LANG_MULTIPLIER;

+ (NSString *)LANG_MULTIPLIER_CHAR;

+ (NSString *)LANG_NUMBERGROUPS;

+ (NSString *)LANG_NUM_TABLES;

+ (NSString *)LANG_ALPHABET;

+ (NSString *)LANG_TRAD_ALPHABET;

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Get the association list.
 @return The association list.
 */
- (IOSObjectArray *)getContents;

/*!
 @brief Return a named ResourceBundle for a particular locale.This method mimics the behavior
  of ResourceBundle.getBundle().
 @param className_ Name of local-specific subclass.
 @param locale the locale to prefer when searching for the bundle
 */
+ (OrgApacheXmlUtilsResXResourceBundle *)loadResourceBundleWithNSString:(NSString *)className_
                                                     withJavaUtilLocale:(JavaUtilLocale *)locale;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsResXResourceBundle)

/*!
 @brief Error resource constants
 */
inline NSString *OrgApacheXmlUtilsResXResourceBundle_get_ERROR_RESOURCES(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsResXResourceBundle_ERROR_RESOURCES;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsResXResourceBundle, ERROR_RESOURCES, NSString *)

/*!
 @brief Error resource constants
 */
inline NSString *OrgApacheXmlUtilsResXResourceBundle_get_XSLT_RESOURCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsResXResourceBundle_XSLT_RESOURCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsResXResourceBundle, XSLT_RESOURCE, NSString *)

/*!
 @brief Error resource constants
 */
inline NSString *OrgApacheXmlUtilsResXResourceBundle_get_LANG_BUNDLE_NAME(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsResXResourceBundle_LANG_BUNDLE_NAME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsResXResourceBundle, LANG_BUNDLE_NAME, NSString *)

/*!
 @brief Error resource constants
 */
inline NSString *OrgApacheXmlUtilsResXResourceBundle_get_MULT_ORDER(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsResXResourceBundle_MULT_ORDER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsResXResourceBundle, MULT_ORDER, NSString *)

/*!
 @brief Error resource constants
 */
inline NSString *OrgApacheXmlUtilsResXResourceBundle_get_MULT_PRECEDES(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsResXResourceBundle_MULT_PRECEDES;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsResXResourceBundle, MULT_PRECEDES, NSString *)

/*!
 @brief Error resource constants
 */
inline NSString *OrgApacheXmlUtilsResXResourceBundle_get_MULT_FOLLOWS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsResXResourceBundle_MULT_FOLLOWS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsResXResourceBundle, MULT_FOLLOWS, NSString *)

/*!
 @brief Error resource constants
 */
inline NSString *OrgApacheXmlUtilsResXResourceBundle_get_LANG_ORIENTATION(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsResXResourceBundle_LANG_ORIENTATION;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsResXResourceBundle, LANG_ORIENTATION, NSString *)

/*!
 @brief Error resource constants
 */
inline NSString *OrgApacheXmlUtilsResXResourceBundle_get_LANG_RIGHTTOLEFT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsResXResourceBundle_LANG_RIGHTTOLEFT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsResXResourceBundle, LANG_RIGHTTOLEFT, NSString *)

/*!
 @brief Error resource constants
 */
inline NSString *OrgApacheXmlUtilsResXResourceBundle_get_LANG_LEFTTORIGHT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsResXResourceBundle_LANG_LEFTTORIGHT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsResXResourceBundle, LANG_LEFTTORIGHT, NSString *)

/*!
 @brief Error resource constants
 */
inline NSString *OrgApacheXmlUtilsResXResourceBundle_get_LANG_NUMBERING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsResXResourceBundle_LANG_NUMBERING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsResXResourceBundle, LANG_NUMBERING, NSString *)

/*!
 @brief Error resource constants
 */
inline NSString *OrgApacheXmlUtilsResXResourceBundle_get_LANG_ADDITIVE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsResXResourceBundle_LANG_ADDITIVE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsResXResourceBundle, LANG_ADDITIVE, NSString *)

/*!
 @brief Error resource constants
 */
inline NSString *OrgApacheXmlUtilsResXResourceBundle_get_LANG_MULT_ADD(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsResXResourceBundle_LANG_MULT_ADD;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsResXResourceBundle, LANG_MULT_ADD, NSString *)

/*!
 @brief Error resource constants
 */
inline NSString *OrgApacheXmlUtilsResXResourceBundle_get_LANG_MULTIPLIER(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsResXResourceBundle_LANG_MULTIPLIER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsResXResourceBundle, LANG_MULTIPLIER, NSString *)

/*!
 @brief Error resource constants
 */
inline NSString *OrgApacheXmlUtilsResXResourceBundle_get_LANG_MULTIPLIER_CHAR(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsResXResourceBundle_LANG_MULTIPLIER_CHAR;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsResXResourceBundle, LANG_MULTIPLIER_CHAR, NSString *)

/*!
 @brief Error resource constants
 */
inline NSString *OrgApacheXmlUtilsResXResourceBundle_get_LANG_NUMBERGROUPS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsResXResourceBundle_LANG_NUMBERGROUPS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsResXResourceBundle, LANG_NUMBERGROUPS, NSString *)

/*!
 @brief Error resource constants
 */
inline NSString *OrgApacheXmlUtilsResXResourceBundle_get_LANG_NUM_TABLES(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsResXResourceBundle_LANG_NUM_TABLES;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsResXResourceBundle, LANG_NUM_TABLES, NSString *)

/*!
 @brief Error resource constants
 */
inline NSString *OrgApacheXmlUtilsResXResourceBundle_get_LANG_ALPHABET(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsResXResourceBundle_LANG_ALPHABET;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsResXResourceBundle, LANG_ALPHABET, NSString *)

/*!
 @brief Error resource constants
 */
inline NSString *OrgApacheXmlUtilsResXResourceBundle_get_LANG_TRAD_ALPHABET(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsResXResourceBundle_LANG_TRAD_ALPHABET;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsResXResourceBundle, LANG_TRAD_ALPHABET, NSString *)

FOUNDATION_EXPORT void OrgApacheXmlUtilsResXResourceBundle_init(OrgApacheXmlUtilsResXResourceBundle *self);

FOUNDATION_EXPORT OrgApacheXmlUtilsResXResourceBundle *new_OrgApacheXmlUtilsResXResourceBundle_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsResXResourceBundle *create_OrgApacheXmlUtilsResXResourceBundle_init(void);

FOUNDATION_EXPORT OrgApacheXmlUtilsResXResourceBundle *OrgApacheXmlUtilsResXResourceBundle_loadResourceBundleWithNSString_withJavaUtilLocale_(NSString *className_, JavaUtilLocale *locale);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsResXResourceBundle)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsResXResourceBundle")
