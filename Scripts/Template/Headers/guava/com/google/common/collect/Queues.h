//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/Queues.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectQueues")
#ifdef RESTRICT_ComGoogleCommonCollectQueues
#define INCLUDE_ALL_ComGoogleCommonCollectQueues 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectQueues 1
#endif
#undef RESTRICT_ComGoogleCommonCollectQueues

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectQueues_) && (INCLUDE_ALL_ComGoogleCommonCollectQueues || defined(INCLUDE_ComGoogleCommonCollectQueues))
#define ComGoogleCommonCollectQueues_

@class JavaUtilArrayDeque;
@class JavaUtilConcurrentArrayBlockingQueue;
@class JavaUtilConcurrentConcurrentLinkedQueue;
@class JavaUtilConcurrentLinkedBlockingDeque;
@class JavaUtilConcurrentLinkedBlockingQueue;
@class JavaUtilConcurrentPriorityBlockingQueue;
@class JavaUtilConcurrentSynchronousQueue;
@class JavaUtilConcurrentTimeUnit;
@class JavaUtilPriorityQueue;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilConcurrentBlockingQueue;
@protocol JavaUtilDeque;
@protocol JavaUtilQueue;

/*!
 @brief Static utility methods pertaining to <code>Queue</code> and <code>Deque</code> instances.Also see this
  class's counterparts <code>Lists</code>, <code>Sets</code>, and <code>Maps</code>.
 @author Kurt Alfred Kluever
 @since 11.0
 */
@interface ComGoogleCommonCollectQueues : NSObject

#pragma mark Public

/*!
 @brief Drains the queue as <code>int)</code>, but if the requested <code>numElements</code>
  elements are not available, it will wait for them up to the specified timeout.
 @param q the blocking queue to be drained
 @param buffer where to add the transferred elements
 @param numElements the number of elements to be waited for
 @param timeout how long to wait before giving up, in units of <code>unit</code>
 @param unit a <code>TimeUnit</code>  determining how to interpret the timeout parameter
 @return the number of elements transferred
 @throw InterruptedExceptionif interrupted while waiting
 */
+ (jint)drainWithJavaUtilConcurrentBlockingQueue:(id<JavaUtilConcurrentBlockingQueue>)q
                          withJavaUtilCollection:(id<JavaUtilCollection>)buffer
                                         withInt:(jint)numElements
                                        withLong:(jlong)timeout
                  withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @brief Drains the queue as Collection, int, long, TimeUnit), but
  with a different behavior in case it is interrupted while waiting.In that case, the operation
  will continue as usual, and in the end the thread's interruption status will be set (no <code>InterruptedException</code>
  is thrown).
 @param q the blocking queue to be drained
 @param buffer where to add the transferred elements
 @param numElements the number of elements to be waited for
 @param timeout how long to wait before giving up, in units of <code>unit</code>
 @param unit a <code>TimeUnit</code>  determining how to interpret the timeout parameter
 @return the number of elements transferred
 */
+ (jint)drainUninterruptiblyWithJavaUtilConcurrentBlockingQueue:(id<JavaUtilConcurrentBlockingQueue>)q
                                         withJavaUtilCollection:(id<JavaUtilCollection>)buffer
                                                        withInt:(jint)numElements
                                                       withLong:(jlong)timeout
                                 withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @brief Creates an empty <code>ArrayBlockingQueue</code> with the given (fixed) capacity and nonfair access
  policy.
 */
+ (JavaUtilConcurrentArrayBlockingQueue *)newArrayBlockingQueueWithInt:(jint)capacity OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates an empty <code>ArrayDeque</code>.
 @since 12.0
 */
+ (JavaUtilArrayDeque *)newArrayDeque OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates an <code>ArrayDeque</code> containing the elements of the specified iterable, in the order
  they are returned by the iterable's iterator.
 @since 12.0
 */
+ (JavaUtilArrayDeque *)newArrayDequeWithJavaLangIterable:(id<JavaLangIterable>)elements OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates an empty <code>ConcurrentLinkedQueue</code>.
 */
+ (JavaUtilConcurrentConcurrentLinkedQueue *)newConcurrentLinkedQueue OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates a <code>ConcurrentLinkedQueue</code> containing the elements of the specified iterable, in
  the order they are returned by the iterable's iterator.
 */
+ (JavaUtilConcurrentConcurrentLinkedQueue *)newConcurrentLinkedQueueWithJavaLangIterable:(id<JavaLangIterable>)elements OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates an empty <code>LinkedBlockingDeque</code> with a capacity of <code>Integer.MAX_VALUE</code>.
 @since 12.0
 */
+ (JavaUtilConcurrentLinkedBlockingDeque *)newLinkedBlockingDeque OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates an empty <code>LinkedBlockingDeque</code> with the given (fixed) capacity.
 @throw IllegalArgumentExceptionif <code>capacity</code> is less than 1
 @since 12.0
 */
+ (JavaUtilConcurrentLinkedBlockingDeque *)newLinkedBlockingDequeWithInt:(jint)capacity OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates a <code>LinkedBlockingDeque</code> with a capacity of <code>Integer.MAX_VALUE</code>, containing
  the elements of the specified iterable, in the order they are returned by the iterable's
  iterator.
 @since 12.0
 */
+ (JavaUtilConcurrentLinkedBlockingDeque *)newLinkedBlockingDequeWithJavaLangIterable:(id<JavaLangIterable>)elements OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates an empty <code>LinkedBlockingQueue</code> with a capacity of <code>Integer.MAX_VALUE</code>.
 */
+ (JavaUtilConcurrentLinkedBlockingQueue *)newLinkedBlockingQueue OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates an empty <code>LinkedBlockingQueue</code> with the given (fixed) capacity.
 @throw IllegalArgumentExceptionif <code>capacity</code> is less than 1
 */
+ (JavaUtilConcurrentLinkedBlockingQueue *)newLinkedBlockingQueueWithInt:(jint)capacity OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates a <code>LinkedBlockingQueue</code> with a capacity of <code>Integer.MAX_VALUE</code>, containing
  the elements of the specified iterable, in the order they are returned by the iterable's
  iterator.
 @param elements the elements that the queue should contain, in order
 @return a new <code>LinkedBlockingQueue</code> containing those elements
 */
+ (JavaUtilConcurrentLinkedBlockingQueue *)newLinkedBlockingQueueWithJavaLangIterable:(id<JavaLangIterable>)elements OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates an empty <code>PriorityBlockingQueue</code> with the ordering given by its elements' natural
  ordering.
 @since 11.0 (requires that <code>E</code> be <code>Comparable</code> since 15.0).
 */
+ (JavaUtilConcurrentPriorityBlockingQueue *)newPriorityBlockingQueue OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates a <code>PriorityBlockingQueue</code> containing the given elements.
 <p><b>Note:</b> If the specified iterable is a <code>SortedSet</code> or a <code>PriorityQueue</code>,
  this priority queue will be ordered according to the same ordering.
 @since 11.0 (requires that <code>E</code> be <code>Comparable</code> since 15.0).
 */
+ (JavaUtilConcurrentPriorityBlockingQueue *)newPriorityBlockingQueueWithJavaLangIterable:(id<JavaLangIterable>)elements OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates an empty <code>PriorityQueue</code> with the ordering given by its elements' natural
  ordering.
 @since 11.0 (requires that <code>E</code> be <code>Comparable</code> since 15.0).
 */
+ (JavaUtilPriorityQueue *)newPriorityQueue OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates a <code>PriorityQueue</code> containing the given elements.
 <p><b>Note:</b> If the specified iterable is a <code>SortedSet</code> or a <code>PriorityQueue</code>,
  this priority queue will be ordered according to the same ordering.
 @since 11.0 (requires that <code>E</code> be <code>Comparable</code> since 15.0).
 */
+ (JavaUtilPriorityQueue *)newPriorityQueueWithJavaLangIterable:(id<JavaLangIterable>)elements OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates an empty <code>SynchronousQueue</code> with nonfair access policy.
 */
+ (JavaUtilConcurrentSynchronousQueue *)newSynchronousQueue OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns a synchronized (thread-safe) deque backed by the specified deque.In order to guarantee
  serial access, it is critical that <b>all</b> access to the backing deque is accomplished
  through the returned deque.
 <p>It is imperative that the user manually synchronize on the returned deque when accessing any
  of the deque's iterators: 
 @code
 Deque<E> deque = Queues.synchronizedDeque(Queues.<E>newArrayDeque());
  ...
  deque.add(element);  // Needn't be in synchronized block
  ...
  synchronized (deque) {  // Must synchronize on deque!
    Iterator<E> i = deque.iterator(); // Must be in synchronized block
    while (i.hasNext()) {
      foo(i.next());
    }  }  
 
@endcode
  
 <p>Failure to follow this advice may result in non-deterministic behavior. 
 <p>The returned deque will be serializable if the specified deque is serializable.
 @param deque the deque to be wrapped in a synchronized view
 @return a synchronized view of the specified deque
 @since 15.0
 */
+ (id<JavaUtilDeque>)synchronizedDequeWithJavaUtilDeque:(id<JavaUtilDeque>)deque;

/*!
 @brief Returns a synchronized (thread-safe) queue backed by the specified queue.In order to guarantee
  serial access, it is critical that <b>all</b> access to the backing queue is accomplished
  through the returned queue.
 <p>It is imperative that the user manually synchronize on the returned queue when accessing the
  queue's iterator: 
 @code
 Queue<E> queue = Queues.synchronizedQueue(MinMaxPriorityQueue.<E>create());
  ...
  queue.add(element);  // Needn't be in synchronized block
  ...
  synchronized (queue) {  // Must synchronize on queue!
    Iterator<E> i = queue.iterator(); // Must be in synchronized block
    while (i.hasNext()) {
      foo(i.next());
    }  }  
 
@endcode
  
 <p>Failure to follow this advice may result in non-deterministic behavior. 
 <p>The returned queue will be serializable if the specified queue is serializable.
 @param queue the queue to be wrapped in a synchronized view
 @return a synchronized view of the specified queue
 @since 14.0
 */
+ (id<JavaUtilQueue>)synchronizedQueueWithJavaUtilQueue:(id<JavaUtilQueue>)queue;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectQueues)

FOUNDATION_EXPORT JavaUtilConcurrentArrayBlockingQueue *ComGoogleCommonCollectQueues_newArrayBlockingQueueWithInt_(jint capacity);

FOUNDATION_EXPORT JavaUtilArrayDeque *ComGoogleCommonCollectQueues_newArrayDeque(void);

FOUNDATION_EXPORT JavaUtilArrayDeque *ComGoogleCommonCollectQueues_newArrayDequeWithJavaLangIterable_(id<JavaLangIterable> elements);

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentLinkedQueue *ComGoogleCommonCollectQueues_newConcurrentLinkedQueue(void);

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentLinkedQueue *ComGoogleCommonCollectQueues_newConcurrentLinkedQueueWithJavaLangIterable_(id<JavaLangIterable> elements);

FOUNDATION_EXPORT JavaUtilConcurrentLinkedBlockingDeque *ComGoogleCommonCollectQueues_newLinkedBlockingDeque(void);

FOUNDATION_EXPORT JavaUtilConcurrentLinkedBlockingDeque *ComGoogleCommonCollectQueues_newLinkedBlockingDequeWithInt_(jint capacity);

FOUNDATION_EXPORT JavaUtilConcurrentLinkedBlockingDeque *ComGoogleCommonCollectQueues_newLinkedBlockingDequeWithJavaLangIterable_(id<JavaLangIterable> elements);

FOUNDATION_EXPORT JavaUtilConcurrentLinkedBlockingQueue *ComGoogleCommonCollectQueues_newLinkedBlockingQueue(void);

FOUNDATION_EXPORT JavaUtilConcurrentLinkedBlockingQueue *ComGoogleCommonCollectQueues_newLinkedBlockingQueueWithInt_(jint capacity);

FOUNDATION_EXPORT JavaUtilConcurrentLinkedBlockingQueue *ComGoogleCommonCollectQueues_newLinkedBlockingQueueWithJavaLangIterable_(id<JavaLangIterable> elements);

FOUNDATION_EXPORT JavaUtilConcurrentPriorityBlockingQueue *ComGoogleCommonCollectQueues_newPriorityBlockingQueue(void);

FOUNDATION_EXPORT JavaUtilConcurrentPriorityBlockingQueue *ComGoogleCommonCollectQueues_newPriorityBlockingQueueWithJavaLangIterable_(id<JavaLangIterable> elements);

FOUNDATION_EXPORT JavaUtilPriorityQueue *ComGoogleCommonCollectQueues_newPriorityQueue(void);

FOUNDATION_EXPORT JavaUtilPriorityQueue *ComGoogleCommonCollectQueues_newPriorityQueueWithJavaLangIterable_(id<JavaLangIterable> elements);

FOUNDATION_EXPORT JavaUtilConcurrentSynchronousQueue *ComGoogleCommonCollectQueues_newSynchronousQueue(void);

FOUNDATION_EXPORT jint ComGoogleCommonCollectQueues_drainWithJavaUtilConcurrentBlockingQueue_withJavaUtilCollection_withInt_withLong_withJavaUtilConcurrentTimeUnit_(id<JavaUtilConcurrentBlockingQueue> q, id<JavaUtilCollection> buffer, jint numElements, jlong timeout, JavaUtilConcurrentTimeUnit *unit);

FOUNDATION_EXPORT jint ComGoogleCommonCollectQueues_drainUninterruptiblyWithJavaUtilConcurrentBlockingQueue_withJavaUtilCollection_withInt_withLong_withJavaUtilConcurrentTimeUnit_(id<JavaUtilConcurrentBlockingQueue> q, id<JavaUtilCollection> buffer, jint numElements, jlong timeout, JavaUtilConcurrentTimeUnit *unit);

FOUNDATION_EXPORT id<JavaUtilQueue> ComGoogleCommonCollectQueues_synchronizedQueueWithJavaUtilQueue_(id<JavaUtilQueue> queue);

FOUNDATION_EXPORT id<JavaUtilDeque> ComGoogleCommonCollectQueues_synchronizedDequeWithJavaUtilDeque_(id<JavaUtilDeque> deque);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectQueues)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectQueues")
