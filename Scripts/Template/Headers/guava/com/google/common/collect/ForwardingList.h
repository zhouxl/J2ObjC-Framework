//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/ForwardingList.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingList")
#ifdef RESTRICT_ComGoogleCommonCollectForwardingList
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingList 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingList 1
#endif
#undef RESTRICT_ComGoogleCommonCollectForwardingList

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectForwardingList_) && (INCLUDE_ALL_ComGoogleCommonCollectForwardingList || defined(INCLUDE_ComGoogleCommonCollectForwardingList))
#define ComGoogleCommonCollectForwardingList_

#define RESTRICT_ComGoogleCommonCollectForwardingCollection 1
#define INCLUDE_ComGoogleCommonCollectForwardingCollection 1
#include "../../../../../com/google/common/collect/ForwardingCollection.h"

#define RESTRICT_JavaUtilList 1
#define INCLUDE_JavaUtilList 1
#include "../../../../../java/util/List.h"

@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilFunctionUnaryOperator;
@protocol JavaUtilIterator;
@protocol JavaUtilListIterator;
@protocol JavaUtilSpliterator;

/*!
 @brief A list which forwards all its method calls to another list.Subclasses should override one or
  more methods to modify the behavior of the backing list as desired per the <a href="http://en.wikipedia.org/wiki/Decorator_pattern">
 decorator pattern</a>.
 <p>This class does not implement <code>java.util.RandomAccess</code>. If the delegate supports random
  access, the <code>ForwardingList</code> subclass should implement the <code>RandomAccess</code> interface. 
 <p><b>Warning:</b> The methods of <code>ForwardingList</code> forward <b>indiscriminately</b> to the
  methods of the delegate. For example, overriding <code>add</code> alone <b>will not</b> change the
  behavior of <code>addAll</code>, which can lead to unexpected behavior. In this case, you should
  override <code>addAll</code> as well, either providing your own implementation, or delegating to the
  provided <code>standardAddAll</code> method. 
 <p><b><code>default</code> method warning:</b> This class does <i>not</i> forward calls to <code>default</code>
  methods. Instead, it inherits their default implementations. When those implementations
  invoke methods, they invoke methods on the <code>ForwardingList</code>.
  
 <p>The <code>standard</code> methods and any collection views they return are not guaranteed to be
  thread-safe, even when all of the methods that they depend on are thread-safe.
 @author Mike Bostock
 @author Louis Wasserman
 @since 2.0
 */
@interface ComGoogleCommonCollectForwardingList : ComGoogleCommonCollectForwardingCollection < JavaUtilList >

#pragma mark Public

- (void)addWithInt:(jint)index
            withId:(id)element;

- (jboolean)addAllWithInt:(jint)index
   withJavaUtilCollection:(id<JavaUtilCollection>)elements;

- (jboolean)isEqual:(id __nullable)object;

- (id)getWithInt:(jint)index;

- (NSUInteger)hash;

- (jint)indexOfWithId:(id)element;

- (jint)lastIndexOfWithId:(id)element;

- (id<JavaUtilListIterator>)listIterator;

- (id<JavaUtilListIterator>)listIteratorWithInt:(jint)index;

- (id)removeWithInt:(jint)index;

- (id)setWithInt:(jint)index
          withId:(id)element;

- (id<JavaUtilList>)subListWithInt:(jint)fromIndex
                           withInt:(jint)toIndex;

#pragma mark Protected

/*!
 @brief Constructor for use by subclasses.
 */
- (instancetype __nonnull)init;

- (id<JavaUtilList>)delegate;

/*!
 @brief A sensible default implementation of <code>add(Object)</code>, in terms of <code>Object)</code>
 .If you override <code>Object)</code>, you may wish to override <code>add(Object)</code>
  to forward to this implementation.
 @since 7.0
 */
- (jboolean)standardAddWithId:(id)element;

/*!
 @brief A sensible default implementation of <code>Collection)</code>, in terms of the <code>add</code>
  method of <code>listIterator(int)</code>.If you override <code>listIterator(int)</code>, you may
  wish to override <code>Collection)</code> to forward to this implementation.
 @since 7.0
 */
- (jboolean)standardAddAllWithInt:(jint)index
             withJavaLangIterable:(id<JavaLangIterable>)elements;

/*!
 @brief A sensible definition of <code>equals(Object)</code> in terms of <code>size</code> and <code>iterator</code>
 .If you override either of those methods, you may wish to override <code>equals(Object)</code>
  to forward to this implementation.
 @since 7.0
 */
- (jboolean)standardEqualsWithId:(id __nullable)object;

/*!
 @brief A sensible definition of <code>hashCode</code> in terms of <code>iterator</code>.If you override 
 <code>iterator</code>, you may wish to override <code>hashCode</code> to forward to this
  implementation.
 @since 7.0
 */
- (jint)standardHashCode;

/*!
 @brief A sensible default implementation of <code>indexOf</code>, in terms of <code>listIterator()</code>.If
  you override <code>listIterator()</code>, you may wish to override <code>indexOf</code> to forward to
  this implementation.
 @since 7.0
 */
- (jint)standardIndexOfWithId:(id __nullable)element;

/*!
 @brief A sensible default implementation of <code>iterator</code>, in terms of <code>listIterator()</code>.If
  you override <code>listIterator()</code>, you may wish to override <code>iterator</code> to forward to
  this implementation.
 @since 7.0
 */
- (id<JavaUtilIterator>)standardIterator;

/*!
 @brief A sensible default implementation of <code>lastIndexOf</code>, in terms of <code>listIterator(int)</code>
 .If you override <code>listIterator(int)</code>, you may wish to override 
 <code>lastIndexOf</code> to forward to this implementation.
 @since 7.0
 */
- (jint)standardLastIndexOfWithId:(id __nullable)element;

/*!
 @brief A sensible default implementation of <code>listIterator()</code>, in terms of <code>listIterator(int)</code>
 .If you override <code>listIterator(int)</code>, you may wish to override 
 <code>listIterator()</code> to forward to this implementation.
 @since 7.0
 */
- (id<JavaUtilListIterator>)standardListIterator;

/*!
 @brief A sensible default implementation of <code>listIterator(int)</code>, in terms of <code>size</code>,
  <code>get(int)</code>, <code>Object)</code>, <code>Object)</code>, and <code>remove(int)</code>
 .If you override any of these methods, you may wish to override <code>listIterator(int)</code>
  to forward to this implementation.
 @since 7.0
 */
- (id<JavaUtilListIterator>)standardListIteratorWithInt:(jint)start;

/*!
 @brief A sensible default implementation of <code>int)</code>.If you override any other
  methods, you may wish to override <code>int)</code> to forward to this implementation.
 @since 7.0
 */
- (id<JavaUtilList>)standardSubListWithInt:(jint)fromIndex
                                   withInt:(jint)toIndex;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingList)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingList_init(ComGoogleCommonCollectForwardingList *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingList)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingList")
