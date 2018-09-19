//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/io/CountingOutputStream.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonIoCountingOutputStream")
#ifdef RESTRICT_ComGoogleCommonIoCountingOutputStream
#define INCLUDE_ALL_ComGoogleCommonIoCountingOutputStream 0
#else
#define INCLUDE_ALL_ComGoogleCommonIoCountingOutputStream 1
#endif
#undef RESTRICT_ComGoogleCommonIoCountingOutputStream

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonIoCountingOutputStream_) && (INCLUDE_ALL_ComGoogleCommonIoCountingOutputStream || defined(INCLUDE_ComGoogleCommonIoCountingOutputStream))
#define ComGoogleCommonIoCountingOutputStream_

#define RESTRICT_JavaIoFilterOutputStream 1
#define INCLUDE_JavaIoFilterOutputStream 1
#include "../../../../../java/io/FilterOutputStream.h"

@class IOSByteArray;
@class JavaIoOutputStream;

@interface ComGoogleCommonIoCountingOutputStream : JavaIoFilterOutputStream

#pragma mark Public

- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg;

- (void)close;

- (jlong)getCount;

- (void)writeWithByteArray:(IOSByteArray *)b
                   withInt:(jint)off
                   withInt:(jint)len;

- (void)writeWithInt:(jint)b;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoCountingOutputStream)

FOUNDATION_EXPORT void ComGoogleCommonIoCountingOutputStream_initWithJavaIoOutputStream_(ComGoogleCommonIoCountingOutputStream *self, JavaIoOutputStream *outArg);

FOUNDATION_EXPORT ComGoogleCommonIoCountingOutputStream *new_ComGoogleCommonIoCountingOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonIoCountingOutputStream *create_ComGoogleCommonIoCountingOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoCountingOutputStream)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonIoCountingOutputStream")
