//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/org/checkerframework/framework/qual/LiteralKind.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgCheckerframeworkFrameworkQualLiteralKind")
#ifdef RESTRICT_OrgCheckerframeworkFrameworkQualLiteralKind
#define INCLUDE_ALL_OrgCheckerframeworkFrameworkQualLiteralKind 0
#else
#define INCLUDE_ALL_OrgCheckerframeworkFrameworkQualLiteralKind 1
#endif
#undef RESTRICT_OrgCheckerframeworkFrameworkQualLiteralKind

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgCheckerframeworkFrameworkQualLiteralKind_) && (INCLUDE_ALL_OrgCheckerframeworkFrameworkQualLiteralKind || defined(INCLUDE_OrgCheckerframeworkFrameworkQualLiteralKind))
#define OrgCheckerframeworkFrameworkQualLiteralKind_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "../../../../../java/lang/Enum.h"

@class IOSObjectArray;
@protocol JavaUtilList;

typedef NS_ENUM(NSUInteger, OrgCheckerframeworkFrameworkQualLiteralKind_Enum) {
  OrgCheckerframeworkFrameworkQualLiteralKind_Enum_NULL = 0,
  OrgCheckerframeworkFrameworkQualLiteralKind_Enum_INT = 1,
  OrgCheckerframeworkFrameworkQualLiteralKind_Enum_LONG = 2,
  OrgCheckerframeworkFrameworkQualLiteralKind_Enum_FLOAT = 3,
  OrgCheckerframeworkFrameworkQualLiteralKind_Enum_DOUBLE = 4,
  OrgCheckerframeworkFrameworkQualLiteralKind_Enum_BOOLEAN = 5,
  OrgCheckerframeworkFrameworkQualLiteralKind_Enum_CHAR = 6,
  OrgCheckerframeworkFrameworkQualLiteralKind_Enum_STRING = 7,
  OrgCheckerframeworkFrameworkQualLiteralKind_Enum_ALL = 8,
  OrgCheckerframeworkFrameworkQualLiteralKind_Enum_PRIMITIVE = 9,
};

/*!
 @brief Specifies kinds of literal trees.
 These correspond to the *_LITERAL constants in <code>com.sun.source.tree.Tree.Kind</code>.
  However, that enum is in the tools.jar which is not on the user's classpath by default.
  So this enum is used instead.
 */
@interface OrgCheckerframeworkFrameworkQualLiteralKind : JavaLangEnum

@property (readonly, class, nonnull) OrgCheckerframeworkFrameworkQualLiteralKind *NULL_ NS_SWIFT_NAME(NULL_);
@property (readonly, class, nonnull) OrgCheckerframeworkFrameworkQualLiteralKind *INT NS_SWIFT_NAME(INT);
@property (readonly, class, nonnull) OrgCheckerframeworkFrameworkQualLiteralKind *LONG NS_SWIFT_NAME(LONG);
@property (readonly, class, nonnull) OrgCheckerframeworkFrameworkQualLiteralKind *FLOAT NS_SWIFT_NAME(FLOAT);
@property (readonly, class, nonnull) OrgCheckerframeworkFrameworkQualLiteralKind *DOUBLE NS_SWIFT_NAME(DOUBLE);
@property (readonly, class, nonnull) OrgCheckerframeworkFrameworkQualLiteralKind *BOOLEAN NS_SWIFT_NAME(BOOLEAN);
@property (readonly, class, nonnull) OrgCheckerframeworkFrameworkQualLiteralKind *CHAR NS_SWIFT_NAME(CHAR);
@property (readonly, class, nonnull) OrgCheckerframeworkFrameworkQualLiteralKind *STRING NS_SWIFT_NAME(STRING);
@property (readonly, class, nonnull) OrgCheckerframeworkFrameworkQualLiteralKind *ALL NS_SWIFT_NAME(ALL);
@property (readonly, class, nonnull) OrgCheckerframeworkFrameworkQualLiteralKind *PRIMITIVE NS_SWIFT_NAME(PRIMITIVE);
+ (OrgCheckerframeworkFrameworkQualLiteralKind * __nonnull)NULL_;

+ (OrgCheckerframeworkFrameworkQualLiteralKind * __nonnull)INT;

+ (OrgCheckerframeworkFrameworkQualLiteralKind * __nonnull)LONG;

+ (OrgCheckerframeworkFrameworkQualLiteralKind * __nonnull)FLOAT;

+ (OrgCheckerframeworkFrameworkQualLiteralKind * __nonnull)DOUBLE;

+ (OrgCheckerframeworkFrameworkQualLiteralKind * __nonnull)BOOLEAN;

+ (OrgCheckerframeworkFrameworkQualLiteralKind * __nonnull)CHAR;

+ (OrgCheckerframeworkFrameworkQualLiteralKind * __nonnull)STRING;

+ (OrgCheckerframeworkFrameworkQualLiteralKind * __nonnull)ALL;

+ (OrgCheckerframeworkFrameworkQualLiteralKind * __nonnull)PRIMITIVE;

#pragma mark Public

/*!
 @brief Returns all LiteralKinds except for ALL and PRIMITIVE
 @return List of LiteralKinds except for ALL and PRIMITIVE
 */
+ (id<JavaUtilList>)allLiteralKinds;

/*!
 @brief Returns the primitive <code>LiteralKind</code>s:
  INT, LONG, FLOAT, DOUBLE, BOOLEAN, CHAR
 @return List of LiteralKinds except for ALL
 */
+ (id<JavaUtilList>)primitiveLiteralKinds;

+ (OrgCheckerframeworkFrameworkQualLiteralKind *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (OrgCheckerframeworkFrameworkQualLiteralKind_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(OrgCheckerframeworkFrameworkQualLiteralKind)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT OrgCheckerframeworkFrameworkQualLiteralKind *OrgCheckerframeworkFrameworkQualLiteralKind_values_[];

/*!
 @brief Corresponds to <code>com.sun.source.tree.Tree.Kind</code> trees
 */
inline OrgCheckerframeworkFrameworkQualLiteralKind *OrgCheckerframeworkFrameworkQualLiteralKind_get_NULL(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualLiteralKind, NULL)

/*!
 @brief Corresponds to <code>com.sun.source.tree.Tree.Kind</code> trees
 */
inline OrgCheckerframeworkFrameworkQualLiteralKind *OrgCheckerframeworkFrameworkQualLiteralKind_get_INT(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualLiteralKind, INT)

/*!
 @brief Corresponds to <code>com.sun.source.tree.Tree.Kind</code> trees
 */
inline OrgCheckerframeworkFrameworkQualLiteralKind *OrgCheckerframeworkFrameworkQualLiteralKind_get_LONG(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualLiteralKind, LONG)

/*!
 @brief Corresponds to <code>com.sun.source.tree.Tree.Kind</code> trees
 */
inline OrgCheckerframeworkFrameworkQualLiteralKind *OrgCheckerframeworkFrameworkQualLiteralKind_get_FLOAT(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualLiteralKind, FLOAT)

/*!
 @brief Corresponds to <code>com.sun.source.tree.Tree.Kind</code> trees
 */
inline OrgCheckerframeworkFrameworkQualLiteralKind *OrgCheckerframeworkFrameworkQualLiteralKind_get_DOUBLE(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualLiteralKind, DOUBLE)

/*!
 @brief Corresponds to <code>com.sun.source.tree.Tree.Kind</code> trees
 */
inline OrgCheckerframeworkFrameworkQualLiteralKind *OrgCheckerframeworkFrameworkQualLiteralKind_get_BOOLEAN(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualLiteralKind, BOOLEAN)

/*!
 @brief Corresponds to <code>com.sun.source.tree.Tree.Kind</code> trees
 */
inline OrgCheckerframeworkFrameworkQualLiteralKind *OrgCheckerframeworkFrameworkQualLiteralKind_get_CHAR(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualLiteralKind, CHAR)

/*!
 @brief Corresponds to <code>com.sun.source.tree.Tree.Kind</code> trees
 */
inline OrgCheckerframeworkFrameworkQualLiteralKind *OrgCheckerframeworkFrameworkQualLiteralKind_get_STRING(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualLiteralKind, STRING)

/*!
 @brief Shorthand for all other LiteralKind constants, other than PRIMITIVE
 */
inline OrgCheckerframeworkFrameworkQualLiteralKind *OrgCheckerframeworkFrameworkQualLiteralKind_get_ALL(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualLiteralKind, ALL)

/*!
 @brief Shorthand for all primitive LiteralKind constants: INT, LONG, FLOAT, DOUBLE, BOOLEAN, CHAR
 */
inline OrgCheckerframeworkFrameworkQualLiteralKind *OrgCheckerframeworkFrameworkQualLiteralKind_get_PRIMITIVE(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualLiteralKind, PRIMITIVE)

FOUNDATION_EXPORT id<JavaUtilList> OrgCheckerframeworkFrameworkQualLiteralKind_allLiteralKinds(void);

FOUNDATION_EXPORT id<JavaUtilList> OrgCheckerframeworkFrameworkQualLiteralKind_primitiveLiteralKinds(void);

FOUNDATION_EXPORT IOSObjectArray *OrgCheckerframeworkFrameworkQualLiteralKind_values(void);

FOUNDATION_EXPORT OrgCheckerframeworkFrameworkQualLiteralKind *OrgCheckerframeworkFrameworkQualLiteralKind_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT OrgCheckerframeworkFrameworkQualLiteralKind *OrgCheckerframeworkFrameworkQualLiteralKind_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(OrgCheckerframeworkFrameworkQualLiteralKind)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgCheckerframeworkFrameworkQualLiteralKind")
