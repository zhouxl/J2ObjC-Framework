//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/cache/AbstractLoadingCache.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCacheAbstractLoadingCache")
#ifdef RESTRICT_ComGoogleCommonCacheAbstractLoadingCache
#define INCLUDE_ALL_ComGoogleCommonCacheAbstractLoadingCache 0
#else
#define INCLUDE_ALL_ComGoogleCommonCacheAbstractLoadingCache 1
#endif
#undef RESTRICT_ComGoogleCommonCacheAbstractLoadingCache

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCacheAbstractLoadingCache_) && (INCLUDE_ALL_ComGoogleCommonCacheAbstractLoadingCache || defined(INCLUDE_ComGoogleCommonCacheAbstractLoadingCache))
#define ComGoogleCommonCacheAbstractLoadingCache_

#define RESTRICT_ComGoogleCommonCacheAbstractCache 1
#define INCLUDE_ComGoogleCommonCacheAbstractCache 1
#include "../../../../../com/google/common/cache/AbstractCache.h"

#define RESTRICT_ComGoogleCommonCacheLoadingCache 1
#define INCLUDE_ComGoogleCommonCacheLoadingCache 1
#include "../../../../../com/google/common/cache/LoadingCache.h"

@class ComGoogleCommonCollectImmutableMap;
@protocol JavaLangIterable;
@protocol JavaUtilFunctionFunction;

/*!
 @brief This class provides a skeletal implementation of the <code>Cache</code> interface to minimize the
  effort required to implement this interface.
 <p>To implement a cache, the programmer needs only to extend this class and provide an
  implementation for the <code>get(Object)</code> and <code>getIfPresent</code> methods. <code>getUnchecked</code>
 , <code>Callable)</code>, and <code>getAll</code> are implemented in terms of 
 <code>get</code>; <code>getAllPresent</code> is implemented in terms of <code>getIfPresent</code>; <code>putAll</code>
  is implemented in terms of <code>put</code>, <code>invalidateAll(Iterable)</code> is implemented
  in terms of <code>invalidate</code>. The method <code>cleanUp</code> is a no-op. All other methods throw
  an <code>UnsupportedOperationException</code>.
 @author Charles Fry
 @since 11.0
 */
@interface ComGoogleCommonCacheAbstractLoadingCache : ComGoogleCommonCacheAbstractCache < ComGoogleCommonCacheLoadingCache >

#pragma mark Public

- (id)applyWithId:(id)key;

- (ComGoogleCommonCollectImmutableMap *)getAllWithJavaLangIterable:(id<JavaLangIterable>)keys;

- (id)getUncheckedWithId:(id)key;

- (void)refreshWithId:(id)key;

#pragma mark Protected

/*!
 @brief Constructor for use by subclasses.
 */
- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheAbstractLoadingCache)

FOUNDATION_EXPORT void ComGoogleCommonCacheAbstractLoadingCache_init(ComGoogleCommonCacheAbstractLoadingCache *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheAbstractLoadingCache)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCacheAbstractLoadingCache")
