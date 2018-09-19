//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/ForwardingQueue.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingQueue")
#ifdef RESTRICT_ComGoogleCommonCollectForwardingQueue
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingQueue 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingQueue 1
#endif
#undef RESTRICT_ComGoogleCommonCollectForwardingQueue

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectForwardingQueue_) && (INCLUDE_ALL_ComGoogleCommonCollectForwardingQueue || defined(INCLUDE_ComGoogleCommonCollectForwardingQueue))
#define ComGoogleCommonCollectForwardingQueue_

#define RESTRICT_ComGoogleCommonCollectForwardingCollection 1
#define INCLUDE_ComGoogleCommonCollectForwardingCollection 1
#include "../../../../../com/google/common/collect/ForwardingCollection.h"

#define RESTRICT_JavaUtilQueue 1
#define INCLUDE_JavaUtilQueue 1
#include "../../../../../java/util/Queue.h"

/*!
 @brief A queue which forwards all its method calls to another queue.Subclasses should override one or
  more methods to modify the behavior of the backing queue as desired per the <a href="http://en.wikipedia.org/wiki/Decorator_pattern">
 decorator pattern</a>.
 <p><b>Warning:</b> The methods of <code>ForwardingQueue</code> forward <b>indiscriminately</b> to the
  methods of the delegate. For example, overriding <code>add</code> alone <b>will not</b> change the
  behavior of <code>offer</code> which can lead to unexpected behavior. In this case, you should
  override <code>offer</code> as well, either providing your own implementation, or delegating to the
  provided <code>standardOffer</code> method. 
 <p><b><code>default</code> method warning:</b> This class does <i>not</i> forward calls to <code>default</code>
  methods. Instead, it inherits their default implementations. When those implementations
  invoke methods, they invoke methods on the <code>ForwardingQueue</code>.
  
 <p>The <code>standard</code> methods are not guaranteed to be thread-safe, even when all of the
  methods that they depend on are thread-safe.
 @author Mike Bostock
 @author Louis Wasserman
 @since 2.0
 */
@interface ComGoogleCommonCollectForwardingQueue : ComGoogleCommonCollectForwardingCollection < JavaUtilQueue >

#pragma mark Public

- (id)element;

- (jboolean)offerWithId:(id)o;

- (id)peek;

- (id)poll;

- (id)remove;

#pragma mark Protected

/*!
 @brief Constructor for use by subclasses.
 */
- (instancetype __nonnull)init;

- (id<JavaUtilQueue>)delegate;

/*!
 @brief A sensible definition of <code>offer</code> in terms of <code>add</code>.If you override <code>add</code>,
  you may wish to override <code>offer</code> to forward to this implementation.
 @since 7.0
 */
- (jboolean)standardOfferWithId:(id)e;

/*!
 @brief A sensible definition of <code>peek</code> in terms of <code>element</code>.If you override <code>element</code>
 , you may wish to override <code>peek</code> to forward to this implementation.
 @since 7.0
 */
- (id)standardPeek;

/*!
 @brief A sensible definition of <code>poll</code> in terms of <code>remove</code>.If you override <code>remove</code>
 , you may wish to override <code>poll</code> to forward to this implementation.
 @since 7.0
 */
- (id)standardPoll;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingQueue)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingQueue_init(ComGoogleCommonCollectForwardingQueue *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingQueue)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingQueue")
