//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/junit/build_result/java/org/junit/experimental/theories/PotentialAssignment.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitExperimentalTheoriesPotentialAssignment")
#ifdef RESTRICT_OrgJunitExperimentalTheoriesPotentialAssignment
#define INCLUDE_ALL_OrgJunitExperimentalTheoriesPotentialAssignment 0
#else
#define INCLUDE_ALL_OrgJunitExperimentalTheoriesPotentialAssignment 1
#endif
#undef RESTRICT_OrgJunitExperimentalTheoriesPotentialAssignment

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitExperimentalTheoriesPotentialAssignment_) && (INCLUDE_ALL_OrgJunitExperimentalTheoriesPotentialAssignment || defined(INCLUDE_OrgJunitExperimentalTheoriesPotentialAssignment))
#define OrgJunitExperimentalTheoriesPotentialAssignment_

@interface OrgJunitExperimentalTheoriesPotentialAssignment : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

+ (OrgJunitExperimentalTheoriesPotentialAssignment *)forValueWithNSString:(NSString *)name
                                                                   withId:(id)value;

- (NSString *)getDescription;

- (id)getValue;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalTheoriesPotentialAssignment)

FOUNDATION_EXPORT void OrgJunitExperimentalTheoriesPotentialAssignment_init(OrgJunitExperimentalTheoriesPotentialAssignment *self);

FOUNDATION_EXPORT OrgJunitExperimentalTheoriesPotentialAssignment *OrgJunitExperimentalTheoriesPotentialAssignment_forValueWithNSString_withId_(NSString *name, id value);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalTheoriesPotentialAssignment)

#endif

#if !defined (OrgJunitExperimentalTheoriesPotentialAssignment_CouldNotGenerateValueException_) && (INCLUDE_ALL_OrgJunitExperimentalTheoriesPotentialAssignment || defined(INCLUDE_OrgJunitExperimentalTheoriesPotentialAssignment_CouldNotGenerateValueException))
#define OrgJunitExperimentalTheoriesPotentialAssignment_CouldNotGenerateValueException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "java/lang/Exception.h"

@class JavaLangThrowable;

@interface OrgJunitExperimentalTheoriesPotentialAssignment_CouldNotGenerateValueException : JavaLangException

#pragma mark Public

- (instancetype __nonnull)init;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalTheoriesPotentialAssignment_CouldNotGenerateValueException)

FOUNDATION_EXPORT void OrgJunitExperimentalTheoriesPotentialAssignment_CouldNotGenerateValueException_init(OrgJunitExperimentalTheoriesPotentialAssignment_CouldNotGenerateValueException *self);

FOUNDATION_EXPORT OrgJunitExperimentalTheoriesPotentialAssignment_CouldNotGenerateValueException *new_OrgJunitExperimentalTheoriesPotentialAssignment_CouldNotGenerateValueException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitExperimentalTheoriesPotentialAssignment_CouldNotGenerateValueException *create_OrgJunitExperimentalTheoriesPotentialAssignment_CouldNotGenerateValueException_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalTheoriesPotentialAssignment_CouldNotGenerateValueException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitExperimentalTheoriesPotentialAssignment")
