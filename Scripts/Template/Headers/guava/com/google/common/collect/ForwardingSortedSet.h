//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/ForwardingSortedSet.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingSortedSet")
#ifdef RESTRICT_ComGoogleCommonCollectForwardingSortedSet
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingSortedSet 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingSortedSet 1
#endif
#undef RESTRICT_ComGoogleCommonCollectForwardingSortedSet

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectForwardingSortedSet_) && (INCLUDE_ALL_ComGoogleCommonCollectForwardingSortedSet || defined(INCLUDE_ComGoogleCommonCollectForwardingSortedSet))
#define ComGoogleCommonCollectForwardingSortedSet_

#define RESTRICT_ComGoogleCommonCollectForwardingSet 1
#define INCLUDE_ComGoogleCommonCollectForwardingSet 1
#include "../../../../../com/google/common/collect/ForwardingSet.h"

#define RESTRICT_JavaUtilSortedSet 1
#define INCLUDE_JavaUtilSortedSet 1
#include "../../../../../java/util/SortedSet.h"

@protocol JavaUtilComparator;
@protocol JavaUtilSpliterator;

/*!
 @brief A sorted set which forwards all its method calls to another sorted set.Subclasses should
  override one or more methods to modify the behavior of the backing sorted set as desired per the 
 <a href="http://en.wikipedia.org/wiki/Decorator_pattern">decorator pattern</a>.
 <p><b>Warning:</b> The methods of <code>ForwardingSortedSet</code> forward <i>indiscriminately</i> to
  the methods of the delegate. For example, overriding <code>add</code> alone <i>will not</i> change
  the behavior of <code>addAll</code>, which can lead to unexpected behavior. In this case, you should
  override <code>addAll</code> as well, either providing your own implementation, or delegating to the
  provided <code>standardAddAll</code> method. 
 <p><b><code>default</code> method warning:</b> This class does <i>not</i> forward calls to <code>default</code>
  methods. Instead, it inherits their default implementations. When those implementations
  invoke methods, they invoke methods on the <code>ForwardingSortedSet</code>.
  
 <p>Each of the <code>standard</code> methods, where appropriate, uses the set's comparator (or the
  natural ordering of the elements, if there is no comparator) to test element equality. As a
  result, if the comparator is not consistent with equals, some of the standard implementations may
  violate the <code>Set</code> contract. 
 <p>The <code>standard</code> methods and the collection views they return are not guaranteed to be
  thread-safe, even when all of the methods that they depend on are thread-safe.
 @author Mike Bostock
 @author Louis Wasserman
 @since 2.0
 */
@interface ComGoogleCommonCollectForwardingSortedSet : ComGoogleCommonCollectForwardingSet < JavaUtilSortedSet >

#pragma mark Public

- (id<JavaUtilComparator>)comparator;

- (id)first;

- (id<JavaUtilSortedSet>)headSetWithId:(id)toElement;

- (id)last;

- (id<JavaUtilSortedSet>)subSetWithId:(id)fromElement
                               withId:(id)toElement;

- (id<JavaUtilSortedSet>)tailSetWithId:(id)fromElement;

#pragma mark Protected

/*!
 @brief Constructor for use by subclasses.
 */
- (instancetype __nonnull)init;

- (id<JavaUtilSortedSet>)delegate;

/*!
 @brief A sensible definition of <code>contains</code> in terms of the <code>first()</code> method of <code>tailSet</code>
 .If you override <code>tailSet</code>, you may wish to override <code>contains</code> to
  forward to this implementation.
 @since 7.0
 */
- (jboolean)standardContainsWithId:(id __nullable)object;

/*!
 @brief A sensible definition of <code>remove</code> in terms of the <code>iterator()</code> method of <code>tailSet</code>
 .If you override <code>tailSet</code>, you may wish to override <code>remove</code> to
  forward to this implementation.
 @since 7.0
 */
- (jboolean)standardRemoveWithId:(id __nullable)object;

/*!
 @brief A sensible default implementation of <code>Object)</code> in terms of <code>headSet(Object)</code>
  and <code>tailSet(Object)</code>.In some situations, you may wish to override 
 <code>Object)</code> to forward to this implementation.
 @since 7.0
 */
- (id<JavaUtilSortedSet>)standardSubSetWithId:(id)fromElement
                                       withId:(id)toElement;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingSortedSet)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingSortedSet_init(ComGoogleCommonCollectForwardingSortedSet *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingSortedSet)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingSortedSet")
