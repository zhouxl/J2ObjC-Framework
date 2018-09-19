//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/annotation/RetentionPolicy.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangAnnotationRetentionPolicy")
#ifdef RESTRICT_JavaLangAnnotationRetentionPolicy
#define INCLUDE_ALL_JavaLangAnnotationRetentionPolicy 0
#else
#define INCLUDE_ALL_JavaLangAnnotationRetentionPolicy 1
#endif
#undef RESTRICT_JavaLangAnnotationRetentionPolicy

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangAnnotationRetentionPolicy_) && (INCLUDE_ALL_JavaLangAnnotationRetentionPolicy || defined(INCLUDE_JavaLangAnnotationRetentionPolicy))
#define JavaLangAnnotationRetentionPolicy_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "../../../java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, JavaLangAnnotationRetentionPolicy_Enum) {
  JavaLangAnnotationRetentionPolicy_Enum_SOURCE = 0,
  JavaLangAnnotationRetentionPolicy_Enum_CLASS = 1,
  JavaLangAnnotationRetentionPolicy_Enum_RUNTIME = 2,
};

/*!
 @brief Annotation retention policy.The constants of this enumerated type
  describe the various policies for retaining annotations.
 They are used
  in conjunction with the <code>Retention</code> meta-annotation type to specify
  how long annotations are to be retained.
 @author Joshua Bloch
 @since 1.5
 */
@interface JavaLangAnnotationRetentionPolicy : JavaLangEnum

+ (JavaLangAnnotationRetentionPolicy * __nonnull)SOURCE;

+ (JavaLangAnnotationRetentionPolicy * __nonnull)CLASS;

+ (JavaLangAnnotationRetentionPolicy * __nonnull)RUNTIME;

#pragma mark Public

+ (JavaLangAnnotationRetentionPolicy *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (JavaLangAnnotationRetentionPolicy_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(JavaLangAnnotationRetentionPolicy)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT JavaLangAnnotationRetentionPolicy *JavaLangAnnotationRetentionPolicy_values_[];

/*!
 @brief Annotations are to be discarded by the compiler.
 */
inline JavaLangAnnotationRetentionPolicy *JavaLangAnnotationRetentionPolicy_get_SOURCE(void);
J2OBJC_ENUM_CONSTANT(JavaLangAnnotationRetentionPolicy, SOURCE)

/*!
 @brief Annotations are to be recorded in the class file by the compiler
  but need not be retained by the VM at run time.This is the default
  behavior.
 */
inline JavaLangAnnotationRetentionPolicy *JavaLangAnnotationRetentionPolicy_get_CLASS(void);
J2OBJC_ENUM_CONSTANT(JavaLangAnnotationRetentionPolicy, CLASS)

/*!
 @brief Annotations are to be recorded in the class file by the compiler and
  retained by the VM at run time, so they may be read reflectively.
 - seealso: java.lang.reflect.AnnotatedElement
 */
inline JavaLangAnnotationRetentionPolicy *JavaLangAnnotationRetentionPolicy_get_RUNTIME(void);
J2OBJC_ENUM_CONSTANT(JavaLangAnnotationRetentionPolicy, RUNTIME)

FOUNDATION_EXPORT IOSObjectArray *JavaLangAnnotationRetentionPolicy_values(void);

FOUNDATION_EXPORT JavaLangAnnotationRetentionPolicy *JavaLangAnnotationRetentionPolicy_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaLangAnnotationRetentionPolicy *JavaLangAnnotationRetentionPolicy_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangAnnotationRetentionPolicy)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangAnnotationRetentionPolicy")
