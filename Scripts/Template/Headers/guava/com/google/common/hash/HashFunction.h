//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/hash/HashFunction.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonHashHashFunction")
#ifdef RESTRICT_ComGoogleCommonHashHashFunction
#define INCLUDE_ALL_ComGoogleCommonHashHashFunction 0
#else
#define INCLUDE_ALL_ComGoogleCommonHashHashFunction 1
#endif
#undef RESTRICT_ComGoogleCommonHashHashFunction

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonHashHashFunction_) && (INCLUDE_ALL_ComGoogleCommonHashHashFunction || defined(INCLUDE_ComGoogleCommonHashHashFunction))
#define ComGoogleCommonHashHashFunction_

@class ComGoogleCommonHashHashCode;
@class IOSByteArray;
@class JavaNioCharsetCharset;
@protocol ComGoogleCommonHashFunnel;
@protocol ComGoogleCommonHashHasher;
@protocol JavaLangCharSequence;

@protocol ComGoogleCommonHashHashFunction < JavaObject >

- (id<ComGoogleCommonHashHasher>)newHasher OBJC_METHOD_FAMILY_NONE;

- (id<ComGoogleCommonHashHasher>)newHasherWithInt:(jint)expectedInputSize OBJC_METHOD_FAMILY_NONE;

- (ComGoogleCommonHashHashCode *)hashIntWithInt:(jint)input;

- (ComGoogleCommonHashHashCode *)hashLongWithLong:(jlong)input;

- (ComGoogleCommonHashHashCode *)hashBytesWithByteArray:(IOSByteArray *)input;

- (ComGoogleCommonHashHashCode *)hashBytesWithByteArray:(IOSByteArray *)input
                                                withInt:(jint)off
                                                withInt:(jint)len;

- (ComGoogleCommonHashHashCode *)hashUnencodedCharsWithJavaLangCharSequence:(id<JavaLangCharSequence>)input;

- (ComGoogleCommonHashHashCode *)hashStringWithJavaLangCharSequence:(id<JavaLangCharSequence>)input
                                          withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

- (ComGoogleCommonHashHashCode *)hashObjectWithId:(id)instance
                    withComGoogleCommonHashFunnel:(id<ComGoogleCommonHashFunnel>)funnel;

- (jint)bits;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashHashFunction)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashHashFunction)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonHashHashFunction")
