//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/io/MultiReader.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonIoMultiReader")
#ifdef RESTRICT_ComGoogleCommonIoMultiReader
#define INCLUDE_ALL_ComGoogleCommonIoMultiReader 0
#else
#define INCLUDE_ALL_ComGoogleCommonIoMultiReader 1
#endif
#undef RESTRICT_ComGoogleCommonIoMultiReader

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonIoMultiReader_) && (INCLUDE_ALL_ComGoogleCommonIoMultiReader || defined(INCLUDE_ComGoogleCommonIoMultiReader))
#define ComGoogleCommonIoMultiReader_

#define RESTRICT_JavaIoReader 1
#define INCLUDE_JavaIoReader 1
#include "../../../../../java/io/Reader.h"

@class IOSCharArray;
@protocol JavaUtilIterator;

@interface ComGoogleCommonIoMultiReader : JavaIoReader

#pragma mark Public

- (void)close;

- (jint)readWithCharArray:(IOSCharArray *)cbuf
                  withInt:(jint)off
                  withInt:(jint)len;

- (jboolean)ready;

- (jlong)skipWithLong:(jlong)n;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilIterator:(id<JavaUtilIterator>)readers;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithId:(id)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoMultiReader)

FOUNDATION_EXPORT void ComGoogleCommonIoMultiReader_initWithJavaUtilIterator_(ComGoogleCommonIoMultiReader *self, id<JavaUtilIterator> readers);

FOUNDATION_EXPORT ComGoogleCommonIoMultiReader *new_ComGoogleCommonIoMultiReader_initWithJavaUtilIterator_(id<JavaUtilIterator> readers) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonIoMultiReader *create_ComGoogleCommonIoMultiReader_initWithJavaUtilIterator_(id<JavaUtilIterator> readers);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoMultiReader)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonIoMultiReader")