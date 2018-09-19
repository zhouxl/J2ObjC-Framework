//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/ForwardingIterator.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingIterator")
#ifdef RESTRICT_ComGoogleCommonCollectForwardingIterator
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingIterator 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingIterator 1
#endif
#undef RESTRICT_ComGoogleCommonCollectForwardingIterator

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectForwardingIterator_) && (INCLUDE_ALL_ComGoogleCommonCollectForwardingIterator || defined(INCLUDE_ComGoogleCommonCollectForwardingIterator))
#define ComGoogleCommonCollectForwardingIterator_

#define RESTRICT_ComGoogleCommonCollectForwardingObject 1
#define INCLUDE_ComGoogleCommonCollectForwardingObject 1
#include "../../../../../com/google/common/collect/ForwardingObject.h"

#define RESTRICT_JavaUtilIterator 1
#define INCLUDE_JavaUtilIterator 1
#include "../../../../../java/util/Iterator.h"

@protocol JavaUtilFunctionConsumer;

@interface ComGoogleCommonCollectForwardingIterator : ComGoogleCommonCollectForwardingObject < JavaUtilIterator >

#pragma mark Public

- (jboolean)hasNext;

- (id)next;

- (void)remove;

#pragma mark Protected

- (instancetype)init;

- (id<JavaUtilIterator>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingIterator)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingIterator_init(ComGoogleCommonCollectForwardingIterator *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingIterator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingIterator")
