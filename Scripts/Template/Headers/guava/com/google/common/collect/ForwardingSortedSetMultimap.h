//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/ForwardingSortedSetMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingSortedSetMultimap")
#ifdef RESTRICT_ComGoogleCommonCollectForwardingSortedSetMultimap
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingSortedSetMultimap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingSortedSetMultimap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectForwardingSortedSetMultimap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectForwardingSortedSetMultimap_) && (INCLUDE_ALL_ComGoogleCommonCollectForwardingSortedSetMultimap || defined(INCLUDE_ComGoogleCommonCollectForwardingSortedSetMultimap))
#define ComGoogleCommonCollectForwardingSortedSetMultimap_

#define RESTRICT_ComGoogleCommonCollectForwardingSetMultimap 1
#define INCLUDE_ComGoogleCommonCollectForwardingSetMultimap 1
#include "com/google/common/collect/ForwardingSetMultimap.h"

#define RESTRICT_ComGoogleCommonCollectSortedSetMultimap 1
#define INCLUDE_ComGoogleCommonCollectSortedSetMultimap 1
#include "com/google/common/collect/SortedSetMultimap.h"

@protocol JavaLangIterable;
@protocol JavaUtilComparator;
@protocol JavaUtilSortedSet;

/*!
 @brief A sorted set multimap which forwards all its method calls to another sorted set multimap.
 Subclasses should override one or more methods to modify the behavior of the backing multimap as
  desired per the <a href="http://en.wikipedia.org/wiki/Decorator_pattern">decorator pattern</a>.
  
 <p><b><code>default</code> method warning:</b> This class does <i>not</i> forward calls to <code>default</code>
  methods. Instead, it inherits their default implementations. When those implementations
  invoke methods, they invoke methods on the <code>ForwardingSortedSetMultimap</code>.
 @author Kurt Alfred Kluever
 @since 3.0
 */
@interface ComGoogleCommonCollectForwardingSortedSetMultimap : ComGoogleCommonCollectForwardingSetMultimap < ComGoogleCommonCollectSortedSetMultimap >

#pragma mark Public

- (id<JavaUtilSortedSet>)getWithId:(id)key;

- (id<JavaUtilSortedSet>)removeAllWithId:(id __nullable)key;

- (id<JavaUtilSortedSet>)replaceValuesWithId:(id)key
                        withJavaLangIterable:(id<JavaLangIterable>)values;

- (id<JavaUtilComparator>)valueComparator;

#pragma mark Protected

/*!
 @brief Constructor for use by subclasses.
 */
- (instancetype __nonnull)init;

- (id<ComGoogleCommonCollectSortedSetMultimap>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingSortedSetMultimap)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingSortedSetMultimap_init(ComGoogleCommonCollectForwardingSortedSetMultimap *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingSortedSetMultimap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingSortedSetMultimap")
