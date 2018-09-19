//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/util/concurrent/AtomicLongMap.java
//

#include "../../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAtomicLongMap")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentAtomicLongMap
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAtomicLongMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAtomicLongMap 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentAtomicLongMap

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentAtomicLongMap_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentAtomicLongMap || defined(INCLUDE_ComGoogleCommonUtilConcurrentAtomicLongMap))
#define ComGoogleCommonUtilConcurrentAtomicLongMap_

@protocol JavaUtilMap;

@interface ComGoogleCommonUtilConcurrentAtomicLongMap : NSObject

#pragma mark Public

- (jlong)addAndGetWithId:(id)key
                withLong:(jlong)delta;

- (id<JavaUtilMap>)asMap;

- (void)clear;

- (jboolean)containsKeyWithId:(id)key;

+ (ComGoogleCommonUtilConcurrentAtomicLongMap *)create;

+ (ComGoogleCommonUtilConcurrentAtomicLongMap *)createWithJavaUtilMap:(id<JavaUtilMap>)m;

- (jlong)decrementAndGetWithId:(id)key;

- (jlong)getWithId:(id)key;

- (jlong)getAndAddWithId:(id)key
                withLong:(jlong)delta;

- (jlong)getAndDecrementWithId:(id)key;

- (jlong)getAndIncrementWithId:(id)key;

- (jlong)incrementAndGetWithId:(id)key;

- (jboolean)isEmpty;

- (jlong)putWithId:(id)key
          withLong:(jlong)newValue;

- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)m;

- (jlong)removeWithId:(id)key;

- (void)removeAllZeros;

- (jint)size;

- (jlong)sum;

- (NSString *)description;

#pragma mark Package-Private

- (jlong)putIfAbsentWithId:(id)key
                  withLong:(jlong)newValue;

- (jboolean)removeWithId:(id)key
                withLong:(jlong)value;

- (jboolean)replaceWithId:(id)key
                 withLong:(jlong)expectedOldValue
                 withLong:(jlong)newValue;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentAtomicLongMap)

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentAtomicLongMap *ComGoogleCommonUtilConcurrentAtomicLongMap_create(void);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentAtomicLongMap *ComGoogleCommonUtilConcurrentAtomicLongMap_createWithJavaUtilMap_(id<JavaUtilMap> m);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAtomicLongMap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAtomicLongMap")
