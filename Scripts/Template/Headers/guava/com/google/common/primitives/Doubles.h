//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/primitives/Doubles.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesDoubles")
#ifdef RESTRICT_ComGoogleCommonPrimitivesDoubles
#define INCLUDE_ALL_ComGoogleCommonPrimitivesDoubles 0
#else
#define INCLUDE_ALL_ComGoogleCommonPrimitivesDoubles 1
#endif
#undef RESTRICT_ComGoogleCommonPrimitivesDoubles

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonPrimitivesDoubles_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesDoubles || defined(INCLUDE_ComGoogleCommonPrimitivesDoubles))
#define ComGoogleCommonPrimitivesDoubles_

@class ComGoogleCommonBaseConverter;
@class IOSDoubleArray;
@class IOSObjectArray;
@class JavaLangDouble;
@class JavaUtilRegexPattern;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilList;

@interface ComGoogleCommonPrimitivesDoubles : NSObject

#pragma mark Public

+ (id<JavaUtilList>)asListWithDoubleArray:(IOSDoubleArray *)backingArray;

+ (jint)compareWithDouble:(jdouble)a
               withDouble:(jdouble)b;

+ (IOSDoubleArray *)concatWithDoubleArray2:(IOSObjectArray *)arrays;

+ (jboolean)containsWithDoubleArray:(IOSDoubleArray *)array
                         withDouble:(jdouble)target;

+ (IOSDoubleArray *)ensureCapacityWithDoubleArray:(IOSDoubleArray *)array
                                          withInt:(jint)minLength
                                          withInt:(jint)padding;

+ (jint)hashCodeWithDouble:(jdouble)value;

+ (jint)indexOfWithDoubleArray:(IOSDoubleArray *)array
                    withDouble:(jdouble)target;

+ (jint)indexOfWithDoubleArray:(IOSDoubleArray *)array
               withDoubleArray:(IOSDoubleArray *)target;

+ (jboolean)isFiniteWithDouble:(jdouble)value;

+ (NSString *)joinWithNSString:(NSString *)separator
               withDoubleArray:(IOSDoubleArray *)array;

+ (jint)lastIndexOfWithDoubleArray:(IOSDoubleArray *)array
                        withDouble:(jdouble)target;

+ (id<JavaUtilComparator>)lexicographicalComparator;

+ (jdouble)maxWithDoubleArray:(IOSDoubleArray *)array;

+ (jdouble)minWithDoubleArray:(IOSDoubleArray *)array;

+ (ComGoogleCommonBaseConverter *)stringConverter;

+ (IOSDoubleArray *)toArrayWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

+ (JavaLangDouble *)tryParseWithNSString:(NSString *)string;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonPrimitivesDoubles)

inline jint ComGoogleCommonPrimitivesDoubles_get_BYTES(void);
#define ComGoogleCommonPrimitivesDoubles_BYTES 8
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonPrimitivesDoubles, BYTES, jint)

inline JavaUtilRegexPattern *ComGoogleCommonPrimitivesDoubles_get_FLOATING_POINT_PATTERN(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaUtilRegexPattern *ComGoogleCommonPrimitivesDoubles_FLOATING_POINT_PATTERN;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonPrimitivesDoubles, FLOATING_POINT_PATTERN, JavaUtilRegexPattern *)

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesDoubles_hashCodeWithDouble_(jdouble value);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesDoubles_compareWithDouble_withDouble_(jdouble a, jdouble b);

FOUNDATION_EXPORT jboolean ComGoogleCommonPrimitivesDoubles_isFiniteWithDouble_(jdouble value);

FOUNDATION_EXPORT jboolean ComGoogleCommonPrimitivesDoubles_containsWithDoubleArray_withDouble_(IOSDoubleArray *array, jdouble target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesDoubles_indexOfWithDoubleArray_withDouble_(IOSDoubleArray *array, jdouble target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesDoubles_indexOfWithDoubleArray_withDoubleArray_(IOSDoubleArray *array, IOSDoubleArray *target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesDoubles_lastIndexOfWithDoubleArray_withDouble_(IOSDoubleArray *array, jdouble target);

FOUNDATION_EXPORT jdouble ComGoogleCommonPrimitivesDoubles_minWithDoubleArray_(IOSDoubleArray *array);

FOUNDATION_EXPORT jdouble ComGoogleCommonPrimitivesDoubles_maxWithDoubleArray_(IOSDoubleArray *array);

FOUNDATION_EXPORT IOSDoubleArray *ComGoogleCommonPrimitivesDoubles_concatWithDoubleArray2_(IOSObjectArray *arrays);

FOUNDATION_EXPORT ComGoogleCommonBaseConverter *ComGoogleCommonPrimitivesDoubles_stringConverter(void);

FOUNDATION_EXPORT IOSDoubleArray *ComGoogleCommonPrimitivesDoubles_ensureCapacityWithDoubleArray_withInt_withInt_(IOSDoubleArray *array, jint minLength, jint padding);

FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesDoubles_joinWithNSString_withDoubleArray_(NSString *separator, IOSDoubleArray *array);

FOUNDATION_EXPORT id<JavaUtilComparator> ComGoogleCommonPrimitivesDoubles_lexicographicalComparator(void);

FOUNDATION_EXPORT IOSDoubleArray *ComGoogleCommonPrimitivesDoubles_toArrayWithJavaUtilCollection_(id<JavaUtilCollection> collection);

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonPrimitivesDoubles_asListWithDoubleArray_(IOSDoubleArray *backingArray);

FOUNDATION_EXPORT JavaLangDouble *ComGoogleCommonPrimitivesDoubles_tryParseWithNSString_(NSString *string);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesDoubles)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesDoubles")
