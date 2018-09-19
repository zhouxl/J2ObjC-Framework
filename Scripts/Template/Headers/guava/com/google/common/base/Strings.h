//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/base/Strings.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseStrings")
#ifdef RESTRICT_ComGoogleCommonBaseStrings
#define INCLUDE_ALL_ComGoogleCommonBaseStrings 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseStrings 1
#endif
#undef RESTRICT_ComGoogleCommonBaseStrings

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBaseStrings_) && (INCLUDE_ALL_ComGoogleCommonBaseStrings || defined(INCLUDE_ComGoogleCommonBaseStrings))
#define ComGoogleCommonBaseStrings_

@protocol JavaLangCharSequence;

@interface ComGoogleCommonBaseStrings : NSObject

#pragma mark Public

+ (NSString *)commonPrefixWithJavaLangCharSequence:(id<JavaLangCharSequence>)a
                          withJavaLangCharSequence:(id<JavaLangCharSequence>)b;

+ (NSString *)commonSuffixWithJavaLangCharSequence:(id<JavaLangCharSequence>)a
                          withJavaLangCharSequence:(id<JavaLangCharSequence>)b;

+ (NSString *)emptyToNullWithNSString:(NSString *)string;

+ (jboolean)isNullOrEmptyWithNSString:(NSString *)string;

+ (NSString *)nullToEmptyWithNSString:(NSString *)string;

+ (NSString *)padEndWithNSString:(NSString *)string
                         withInt:(jint)minLength
                        withChar:(jchar)padChar;

+ (NSString *)padStartWithNSString:(NSString *)string
                           withInt:(jint)minLength
                          withChar:(jchar)padChar;

+ (NSString *)repeatWithNSString:(NSString *)string
                         withInt:(jint)count;

#pragma mark Package-Private

+ (jboolean)validSurrogatePairAtWithJavaLangCharSequence:(id<JavaLangCharSequence>)string
                                                 withInt:(jint)index;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseStrings)

FOUNDATION_EXPORT NSString *ComGoogleCommonBaseStrings_nullToEmptyWithNSString_(NSString *string);

FOUNDATION_EXPORT NSString *ComGoogleCommonBaseStrings_emptyToNullWithNSString_(NSString *string);

FOUNDATION_EXPORT jboolean ComGoogleCommonBaseStrings_isNullOrEmptyWithNSString_(NSString *string);

FOUNDATION_EXPORT NSString *ComGoogleCommonBaseStrings_padStartWithNSString_withInt_withChar_(NSString *string, jint minLength, jchar padChar);

FOUNDATION_EXPORT NSString *ComGoogleCommonBaseStrings_padEndWithNSString_withInt_withChar_(NSString *string, jint minLength, jchar padChar);

FOUNDATION_EXPORT NSString *ComGoogleCommonBaseStrings_repeatWithNSString_withInt_(NSString *string, jint count);

FOUNDATION_EXPORT NSString *ComGoogleCommonBaseStrings_commonPrefixWithJavaLangCharSequence_withJavaLangCharSequence_(id<JavaLangCharSequence> a, id<JavaLangCharSequence> b);

FOUNDATION_EXPORT NSString *ComGoogleCommonBaseStrings_commonSuffixWithJavaLangCharSequence_withJavaLangCharSequence_(id<JavaLangCharSequence> a, id<JavaLangCharSequence> b);

FOUNDATION_EXPORT jboolean ComGoogleCommonBaseStrings_validSurrogatePairAtWithJavaLangCharSequence_withInt_(id<JavaLangCharSequence> string, jint index);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseStrings)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseStrings")
