//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/math/LongMath.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonMathLongMath")
#ifdef RESTRICT_ComGoogleCommonMathLongMath
#define INCLUDE_ALL_ComGoogleCommonMathLongMath 0
#else
#define INCLUDE_ALL_ComGoogleCommonMathLongMath 1
#endif
#undef RESTRICT_ComGoogleCommonMathLongMath

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonMathLongMath_) && (INCLUDE_ALL_ComGoogleCommonMathLongMath || defined(INCLUDE_ComGoogleCommonMathLongMath))
#define ComGoogleCommonMathLongMath_

@class IOSByteArray;
@class IOSIntArray;
@class IOSLongArray;
@class JavaMathRoundingMode;

@interface ComGoogleCommonMathLongMath : NSObject

#pragma mark Public

+ (jlong)binomialWithInt:(jint)n
                 withInt:(jint)k;

+ (jlong)checkedAddWithLong:(jlong)a
                   withLong:(jlong)b;

+ (jlong)checkedMultiplyWithLong:(jlong)a
                        withLong:(jlong)b;

+ (jlong)checkedPowWithLong:(jlong)b
                    withInt:(jint)k;

+ (jlong)checkedSubtractWithLong:(jlong)a
                        withLong:(jlong)b;

+ (jlong)divideWithLong:(jlong)p
               withLong:(jlong)q
withJavaMathRoundingMode:(JavaMathRoundingMode *)mode;

+ (jlong)factorialWithInt:(jint)n;

+ (jlong)gcdWithLong:(jlong)a
            withLong:(jlong)b;

+ (jboolean)isPowerOfTwoWithLong:(jlong)x;

+ (jint)log10WithLong:(jlong)x
withJavaMathRoundingMode:(JavaMathRoundingMode *)mode;

+ (jint)log2WithLong:(jlong)x
withJavaMathRoundingMode:(JavaMathRoundingMode *)mode;

+ (jlong)meanWithLong:(jlong)x
             withLong:(jlong)y;

+ (jint)modWithLong:(jlong)x
            withInt:(jint)m;

+ (jlong)modWithLong:(jlong)x
            withLong:(jlong)m;

+ (jlong)powWithLong:(jlong)b
             withInt:(jint)k;

+ (jlong)sqrtWithLong:(jlong)x
withJavaMathRoundingMode:(JavaMathRoundingMode *)mode;

#pragma mark Package-Private

+ (jboolean)fitsInIntWithLong:(jlong)x;

+ (jint)lessThanBranchFreeWithLong:(jlong)x
                          withLong:(jlong)y;

+ (jint)log10FloorWithLong:(jlong)x;

+ (jlong)multiplyFractionWithLong:(jlong)x
                         withLong:(jlong)numerator
                         withLong:(jlong)denominator;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonMathLongMath)

inline jlong ComGoogleCommonMathLongMath_get_MAX_POWER_OF_SQRT2_UNSIGNED(void);
#define ComGoogleCommonMathLongMath_MAX_POWER_OF_SQRT2_UNSIGNED -5402926248376769404LL
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonMathLongMath, MAX_POWER_OF_SQRT2_UNSIGNED, jlong)

inline IOSByteArray *ComGoogleCommonMathLongMath_get_maxLog10ForLeadingZeros(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSByteArray *ComGoogleCommonMathLongMath_maxLog10ForLeadingZeros;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonMathLongMath, maxLog10ForLeadingZeros, IOSByteArray *)

inline IOSLongArray *ComGoogleCommonMathLongMath_get_powersOf10(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSLongArray *ComGoogleCommonMathLongMath_powersOf10;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonMathLongMath, powersOf10, IOSLongArray *)

inline IOSLongArray *ComGoogleCommonMathLongMath_get_halfPowersOf10(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSLongArray *ComGoogleCommonMathLongMath_halfPowersOf10;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonMathLongMath, halfPowersOf10, IOSLongArray *)

inline jlong ComGoogleCommonMathLongMath_get_FLOOR_SQRT_MAX_LONG(void);
#define ComGoogleCommonMathLongMath_FLOOR_SQRT_MAX_LONG 3037000499LL
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonMathLongMath, FLOOR_SQRT_MAX_LONG, jlong)

inline IOSLongArray *ComGoogleCommonMathLongMath_get_factorials(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSLongArray *ComGoogleCommonMathLongMath_factorials;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonMathLongMath, factorials, IOSLongArray *)

inline IOSIntArray *ComGoogleCommonMathLongMath_get_biggestBinomials(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSIntArray *ComGoogleCommonMathLongMath_biggestBinomials;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonMathLongMath, biggestBinomials, IOSIntArray *)

inline IOSIntArray *ComGoogleCommonMathLongMath_get_biggestSimpleBinomials(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSIntArray *ComGoogleCommonMathLongMath_biggestSimpleBinomials;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonMathLongMath, biggestSimpleBinomials, IOSIntArray *)

FOUNDATION_EXPORT jboolean ComGoogleCommonMathLongMath_isPowerOfTwoWithLong_(jlong x);

FOUNDATION_EXPORT jint ComGoogleCommonMathLongMath_lessThanBranchFreeWithLong_withLong_(jlong x, jlong y);

FOUNDATION_EXPORT jint ComGoogleCommonMathLongMath_log2WithLong_withJavaMathRoundingMode_(jlong x, JavaMathRoundingMode *mode);

FOUNDATION_EXPORT jint ComGoogleCommonMathLongMath_log10WithLong_withJavaMathRoundingMode_(jlong x, JavaMathRoundingMode *mode);

FOUNDATION_EXPORT jint ComGoogleCommonMathLongMath_log10FloorWithLong_(jlong x);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_powWithLong_withInt_(jlong b, jint k);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_sqrtWithLong_withJavaMathRoundingMode_(jlong x, JavaMathRoundingMode *mode);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_divideWithLong_withLong_withJavaMathRoundingMode_(jlong p, jlong q, JavaMathRoundingMode *mode);

FOUNDATION_EXPORT jint ComGoogleCommonMathLongMath_modWithLong_withInt_(jlong x, jint m);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_modWithLong_withLong_(jlong x, jlong m);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_gcdWithLong_withLong_(jlong a, jlong b);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_checkedAddWithLong_withLong_(jlong a, jlong b);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_checkedSubtractWithLong_withLong_(jlong a, jlong b);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_checkedMultiplyWithLong_withLong_(jlong a, jlong b);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_checkedPowWithLong_withInt_(jlong b, jint k);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_factorialWithInt_(jint n);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_binomialWithInt_withInt_(jint n, jint k);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_multiplyFractionWithLong_withLong_withLong_(jlong x, jlong numerator, jlong denominator);

FOUNDATION_EXPORT jboolean ComGoogleCommonMathLongMath_fitsInIntWithLong_(jlong x);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_meanWithLong_withLong_(jlong x, jlong y);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonMathLongMath)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonMathLongMath")
