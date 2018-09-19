//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/math/MathPreconditions.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonMathMathPreconditions")
#ifdef RESTRICT_ComGoogleCommonMathMathPreconditions
#define INCLUDE_ALL_ComGoogleCommonMathMathPreconditions 0
#else
#define INCLUDE_ALL_ComGoogleCommonMathMathPreconditions 1
#endif
#undef RESTRICT_ComGoogleCommonMathMathPreconditions

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonMathMathPreconditions_) && (INCLUDE_ALL_ComGoogleCommonMathMathPreconditions || defined(INCLUDE_ComGoogleCommonMathMathPreconditions))
#define ComGoogleCommonMathMathPreconditions_

@class JavaMathBigInteger;

@interface ComGoogleCommonMathMathPreconditions : NSObject

#pragma mark Package-Private

+ (void)checkInRangeWithBoolean:(jboolean)condition;

+ (JavaMathBigInteger *)checkNonNegativeWithNSString:(NSString *)role
                              withJavaMathBigInteger:(JavaMathBigInteger *)x;

+ (jdouble)checkNonNegativeWithNSString:(NSString *)role
                             withDouble:(jdouble)x;

+ (jint)checkNonNegativeWithNSString:(NSString *)role
                             withInt:(jint)x;

+ (jlong)checkNonNegativeWithNSString:(NSString *)role
                             withLong:(jlong)x;

+ (void)checkNoOverflowWithBoolean:(jboolean)condition;

+ (JavaMathBigInteger *)checkPositiveWithNSString:(NSString *)role
                           withJavaMathBigInteger:(JavaMathBigInteger *)x;

+ (jint)checkPositiveWithNSString:(NSString *)role
                          withInt:(jint)x;

+ (jlong)checkPositiveWithNSString:(NSString *)role
                          withLong:(jlong)x;

+ (void)checkRoundingUnnecessaryWithBoolean:(jboolean)condition;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonMathMathPreconditions)

FOUNDATION_EXPORT jint ComGoogleCommonMathMathPreconditions_checkPositiveWithNSString_withInt_(NSString *role, jint x);

FOUNDATION_EXPORT jlong ComGoogleCommonMathMathPreconditions_checkPositiveWithNSString_withLong_(NSString *role, jlong x);

FOUNDATION_EXPORT JavaMathBigInteger *ComGoogleCommonMathMathPreconditions_checkPositiveWithNSString_withJavaMathBigInteger_(NSString *role, JavaMathBigInteger *x);

FOUNDATION_EXPORT jint ComGoogleCommonMathMathPreconditions_checkNonNegativeWithNSString_withInt_(NSString *role, jint x);

FOUNDATION_EXPORT jlong ComGoogleCommonMathMathPreconditions_checkNonNegativeWithNSString_withLong_(NSString *role, jlong x);

FOUNDATION_EXPORT JavaMathBigInteger *ComGoogleCommonMathMathPreconditions_checkNonNegativeWithNSString_withJavaMathBigInteger_(NSString *role, JavaMathBigInteger *x);

FOUNDATION_EXPORT jdouble ComGoogleCommonMathMathPreconditions_checkNonNegativeWithNSString_withDouble_(NSString *role, jdouble x);

FOUNDATION_EXPORT void ComGoogleCommonMathMathPreconditions_checkRoundingUnnecessaryWithBoolean_(jboolean condition);

FOUNDATION_EXPORT void ComGoogleCommonMathMathPreconditions_checkInRangeWithBoolean_(jboolean condition);

FOUNDATION_EXPORT void ComGoogleCommonMathMathPreconditions_checkNoOverflowWithBoolean_(jboolean condition);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonMathMathPreconditions)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonMathMathPreconditions")
