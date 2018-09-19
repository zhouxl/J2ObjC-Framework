//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/cache/ForwardingLoadingCache.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCacheForwardingLoadingCache")
#ifdef RESTRICT_ComGoogleCommonCacheForwardingLoadingCache
#define INCLUDE_ALL_ComGoogleCommonCacheForwardingLoadingCache 0
#else
#define INCLUDE_ALL_ComGoogleCommonCacheForwardingLoadingCache 1
#endif
#undef RESTRICT_ComGoogleCommonCacheForwardingLoadingCache
#ifdef INCLUDE_ComGoogleCommonCacheForwardingLoadingCache_SimpleForwardingLoadingCache
#define INCLUDE_ComGoogleCommonCacheForwardingLoadingCache 1
#endif

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCacheForwardingLoadingCache_) && (INCLUDE_ALL_ComGoogleCommonCacheForwardingLoadingCache || defined(INCLUDE_ComGoogleCommonCacheForwardingLoadingCache))
#define ComGoogleCommonCacheForwardingLoadingCache_

#define RESTRICT_ComGoogleCommonCacheForwardingCache 1
#define INCLUDE_ComGoogleCommonCacheForwardingCache 1
#include "../../../../../com/google/common/cache/ForwardingCache.h"

#define RESTRICT_ComGoogleCommonCacheLoadingCache 1
#define INCLUDE_ComGoogleCommonCacheLoadingCache 1
#include "../../../../../com/google/common/cache/LoadingCache.h"

@class ComGoogleCommonCollectImmutableMap;
@protocol JavaLangIterable;

@interface ComGoogleCommonCacheForwardingLoadingCache : ComGoogleCommonCacheForwardingCache < ComGoogleCommonCacheLoadingCache >

#pragma mark Public

- (id)applyWithId:(id)key;

- (id)getWithId:(id)key;

- (ComGoogleCommonCollectImmutableMap *)getAllWithJavaLangIterable:(id<JavaLangIterable>)keys;

- (id)getUncheckedWithId:(id)key;

- (void)refreshWithId:(id)key;

#pragma mark Protected

- (instancetype)init;

- (id<ComGoogleCommonCacheLoadingCache>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheForwardingLoadingCache)

FOUNDATION_EXPORT void ComGoogleCommonCacheForwardingLoadingCache_init(ComGoogleCommonCacheForwardingLoadingCache *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheForwardingLoadingCache)

#endif

#if !defined (ComGoogleCommonCacheForwardingLoadingCache_SimpleForwardingLoadingCache_) && (INCLUDE_ALL_ComGoogleCommonCacheForwardingLoadingCache || defined(INCLUDE_ComGoogleCommonCacheForwardingLoadingCache_SimpleForwardingLoadingCache))
#define ComGoogleCommonCacheForwardingLoadingCache_SimpleForwardingLoadingCache_

@protocol ComGoogleCommonCacheLoadingCache;

@interface ComGoogleCommonCacheForwardingLoadingCache_SimpleForwardingLoadingCache : ComGoogleCommonCacheForwardingLoadingCache

#pragma mark Protected

- (instancetype)initWithComGoogleCommonCacheLoadingCache:(id<ComGoogleCommonCacheLoadingCache>)delegate;

- (id<ComGoogleCommonCacheLoadingCache>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheForwardingLoadingCache_SimpleForwardingLoadingCache)

FOUNDATION_EXPORT void ComGoogleCommonCacheForwardingLoadingCache_SimpleForwardingLoadingCache_initWithComGoogleCommonCacheLoadingCache_(ComGoogleCommonCacheForwardingLoadingCache_SimpleForwardingLoadingCache *self, id<ComGoogleCommonCacheLoadingCache> delegate);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheForwardingLoadingCache_SimpleForwardingLoadingCache)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCacheForwardingLoadingCache")
