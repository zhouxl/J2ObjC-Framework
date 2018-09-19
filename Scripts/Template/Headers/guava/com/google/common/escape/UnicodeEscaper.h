//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/escape/UnicodeEscaper.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonEscapeUnicodeEscaper")
#ifdef RESTRICT_ComGoogleCommonEscapeUnicodeEscaper
#define INCLUDE_ALL_ComGoogleCommonEscapeUnicodeEscaper 0
#else
#define INCLUDE_ALL_ComGoogleCommonEscapeUnicodeEscaper 1
#endif
#undef RESTRICT_ComGoogleCommonEscapeUnicodeEscaper

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonEscapeUnicodeEscaper_) && (INCLUDE_ALL_ComGoogleCommonEscapeUnicodeEscaper || defined(INCLUDE_ComGoogleCommonEscapeUnicodeEscaper))
#define ComGoogleCommonEscapeUnicodeEscaper_

#define RESTRICT_ComGoogleCommonEscapeEscaper 1
#define INCLUDE_ComGoogleCommonEscapeEscaper 1
#include "../../../../../com/google/common/escape/Escaper.h"

@class IOSCharArray;
@protocol JavaLangCharSequence;

@interface ComGoogleCommonEscapeUnicodeEscaper : ComGoogleCommonEscapeEscaper

#pragma mark Public

- (NSString *)escapeWithNSString:(NSString *)string;

#pragma mark Protected

- (instancetype)init;

+ (jint)codePointAtWithJavaLangCharSequence:(id<JavaLangCharSequence>)seq
                                    withInt:(jint)index
                                    withInt:(jint)end;

- (IOSCharArray *)escapeWithInt:(jint)cp;

- (NSString *)escapeSlowWithNSString:(NSString *)s
                             withInt:(jint)index;

- (jint)nextEscapeIndexWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq
                                        withInt:(jint)start
                                        withInt:(jint)end;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonEscapeUnicodeEscaper)

FOUNDATION_EXPORT void ComGoogleCommonEscapeUnicodeEscaper_init(ComGoogleCommonEscapeUnicodeEscaper *self);

FOUNDATION_EXPORT jint ComGoogleCommonEscapeUnicodeEscaper_codePointAtWithJavaLangCharSequence_withInt_withInt_(id<JavaLangCharSequence> seq, jint index, jint end);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonEscapeUnicodeEscaper)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonEscapeUnicodeEscaper")
