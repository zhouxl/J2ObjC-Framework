//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/java/util/concurrent/ConcurrentLinkedQueue.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentConcurrentLinkedQueue")
#ifdef RESTRICT_JavaUtilConcurrentConcurrentLinkedQueue
#define INCLUDE_ALL_JavaUtilConcurrentConcurrentLinkedQueue 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentConcurrentLinkedQueue 1
#endif
#undef RESTRICT_JavaUtilConcurrentConcurrentLinkedQueue

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilConcurrentConcurrentLinkedQueue_) && (INCLUDE_ALL_JavaUtilConcurrentConcurrentLinkedQueue || defined(INCLUDE_JavaUtilConcurrentConcurrentLinkedQueue))
#define JavaUtilConcurrentConcurrentLinkedQueue_

#define RESTRICT_JavaUtilAbstractQueue 1
#define INCLUDE_JavaUtilAbstractQueue 1
#include "../../../java/util/AbstractQueue.h"

#define RESTRICT_JavaUtilQueue 1
#define INCLUDE_JavaUtilQueue 1
#include "../../../java/util/Queue.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../java/io/Serializable.h"

@class IOSObjectArray;
@class JavaUtilConcurrentConcurrentLinkedQueue_Node;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilSpliterator;

/*!
 @brief An unbounded thread-safe queue based on linked nodes.
 This queue orders elements FIFO (first-in-first-out).
  The <em>head</em> of the queue is that element that has been on the
  queue the longest time.
  The <em>tail</em> of the queue is that element that has been on the
  queue the shortest time. New elements
  are inserted at the tail of the queue, and the queue retrieval
  operations obtain elements at the head of the queue.
  A <code>ConcurrentLinkedQueue</code> is an appropriate choice when
  many threads will share access to a common collection.
  Like most other concurrent collection implementations, this class
  does not permit the use of <code>null</code> elements. 
 <p>This implementation employs an efficient <em>non-blocking</em>
  algorithm based on one described in 
 <a href="http://www.cs.rochester.edu/~scott/papers/1996_PODC_queues.pdf">
  Simple, Fast, and Practical Non-Blocking and Blocking Concurrent Queue
  Algorithms</a> by Maged M. Michael and Michael L. Scott. 
 <p>Iterators are <i>weakly consistent</i>, returning elements
  reflecting the state of the queue at some point at or since the
  creation of the iterator.  They do <em>not</em> throw <code>java.util.ConcurrentModificationException</code>
 , and may proceed concurrently
  with other operations.  Elements contained in the queue since the creation
  of the iterator will be returned exactly once. 
 <p>Beware that, unlike in most collections, the <code>size</code> method
  is <em>NOT</em> a constant-time operation. Because of the
  asynchronous nature of these queues, determining the current number
  of elements requires a traversal of the elements, and so may report
  inaccurate results if this collection is modified during traversal.
  Additionally, the bulk operations <code>addAll</code>,
  <code>removeAll</code>, <code>retainAll</code>, <code>containsAll</code>,
  <code>equals</code>, and <code>toArray</code> are <em>not</em> guaranteed
  to be performed atomically. For example, an iterator operating
  concurrently with an <code>addAll</code> operation might view only some
  of the added elements. 
 <p>This class and its iterator implement all of the <em>optional</em>
  methods of the <code>Queue</code> and <code>Iterator</code> interfaces. 
 <p>Memory consistency effects: As with other concurrent
  collections, actions in a thread prior to placing an object into a 
 <code>ConcurrentLinkedQueue</code>
  <a href="package-summary.html#MemoryVisibility"><i>happen-before</i></a>
  actions subsequent to the access or removal of that element from the 
 <code>ConcurrentLinkedQueue</code> in another thread.
 @since 1.5
 @author Doug Lea
 */
@interface JavaUtilConcurrentConcurrentLinkedQueue : JavaUtilAbstractQueue < JavaUtilQueue, JavaIoSerializable > {
 @public
  /*!
   @brief A node from which the first live (non-deleted) node (if any)
  can be reached in O(1) time.
   Invariants:
  - all live nodes are reachable from head via succ()
  - head != null
  - (tmp = head).next != tmp || tmp != head
  Non-invariants:
  - head.item may or may not be null.
  - it is permitted for tail to lag behind head, that is, for tail
    to not be reachable from head!
   */
  volatile_id head_;
}

#pragma mark Public

/*!
 @brief Creates a <code>ConcurrentLinkedQueue</code> that is initially empty.
 */
- (instancetype)init;

/*!
 @brief Creates a <code>ConcurrentLinkedQueue</code>
  initially containing the elements of the given collection,
  added in traversal order of the collection's iterator.
 @param c the collection of elements to initially contain
 @throw NullPointerExceptionif the specified collection or any
          of its elements are null
 */
- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @brief Inserts the specified element at the tail of this queue.
 As the queue is unbounded, this method will never throw 
 <code>IllegalStateException</code> or return <code>false</code>.
 @return <code>true</code> (as specified by <code>Collection.add</code>)
 @throw NullPointerExceptionif the specified element is null
 */
- (jboolean)addWithId:(id)e;

/*!
 @brief Appends all of the elements in the specified collection to the end of
  this queue, in the order that they are returned by the specified
  collection's iterator.Attempts to <code>addAll</code> of a queue to
  itself result in <code>IllegalArgumentException</code>.
 @param c the elements to be inserted into this queue
 @return <code>true</code> if this queue changed as a result of the call
 @throw NullPointerExceptionif the specified collection or any
          of its elements are null
 @throw IllegalArgumentExceptionif the collection is this queue
 */
- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @brief Returns <code>true</code> if this queue contains the specified element.
 More formally, returns <code>true</code> if and only if this queue contains
  at least one element <code>e</code> such that <code>o.equals(e)</code>.
 @param o object to be checked for containment in this queue
 @return <code>true</code> if this queue contains the specified element
 */
- (jboolean)containsWithId:(id)o;

/*!
 @brief Returns <code>true</code> if this queue contains no elements.
 @return <code>true</code> if this queue contains no elements
 */
- (jboolean)isEmpty;

/*!
 @brief Returns an iterator over the elements in this queue in proper sequence.
 The elements will be returned in order from first (head) to last (tail). 
 <p>The returned iterator is 
 <a href="package-summary.html#Weakly"><i>weakly consistent</i></a>.
 @return an iterator over the elements in this queue in proper sequence
 */
- (id<JavaUtilIterator>)iterator;

/*!
 @brief Inserts the specified element at the tail of this queue.
 As the queue is unbounded, this method will never return <code>false</code>.
 @return <code>true</code> (as specified by <code>Queue.offer</code>)
 @throw NullPointerExceptionif the specified element is null
 */
- (jboolean)offerWithId:(id)e;

- (id)peek;

- (id)poll;

/*!
 @brief Removes a single instance of the specified element from this queue,
  if it is present.More formally, removes an element <code>e</code> such
  that <code>o.equals(e)</code>, if this queue contains one or more such
  elements.
 Returns <code>true</code> if this queue contained the specified element
  (or equivalently, if this queue changed as a result of the call).
 @param o element to be removed from this queue, if present
 @return <code>true</code> if this queue changed as a result of the call
 */
- (jboolean)removeWithId:(id)o;

/*!
 @brief Returns the number of elements in this queue.If this queue
  contains more than <code>Integer.MAX_VALUE</code> elements, returns 
 <code>Integer.MAX_VALUE</code>.
 <p>Beware that, unlike in most collections, this method is 
 <em>NOT</em> a constant-time operation. Because of the
  asynchronous nature of these queues, determining the current
  number of elements requires an O(n) traversal.
  Additionally, if elements are added or removed during execution
  of this method, the returned result may be inaccurate.  Thus,
  this method is typically not very useful in concurrent
  applications.
 @return the number of elements in this queue
 */
- (jint)size;

/*!
 @brief Returns a <code>Spliterator</code> over the elements in this queue.
 <p>The returned spliterator is 
 <a href="package-summary.html#Weakly"><i>weakly consistent</i></a>.
  
 <p>The <code>Spliterator</code> reports <code>Spliterator.CONCURRENT</code>,
  <code>Spliterator.ORDERED</code>, and <code>Spliterator.NONNULL</code>.
 @return a <code>Spliterator</code> over the elements in this queue
 @since 1.8
 */
- (id<JavaUtilSpliterator>)spliterator;

/*!
 @brief Returns an array containing all of the elements in this queue, in
  proper sequence.
 <p>The returned array will be "safe" in that no references to it are
  maintained by this queue.  (In other words, this method must allocate
  a new array).  The caller is thus free to modify the returned array. 
 <p>This method acts as bridge between array-based and collection-based
  APIs.
 @return an array containing all of the elements in this queue
 */
- (IOSObjectArray *)toArray;

/*!
 @brief Returns an array containing all of the elements in this queue, in
  proper sequence; the runtime type of the returned array is that of
  the specified array.If the queue fits in the specified array, it
  is returned therein.
 Otherwise, a new array is allocated with the
  runtime type of the specified array and the size of this queue. 
 <p>If this queue fits in the specified array with room to spare
  (i.e., the array has more elements than this queue), the element in
  the array immediately following the end of the queue is set to 
 <code>null</code>.
  
 <p>Like the <code>toArray()</code> method, this method acts as bridge between
  array-based and collection-based APIs.  Further, this method allows
  precise control over the runtime type of the output array, and may,
  under certain circumstances, be used to save allocation costs. 
 <p>Suppose <code>x</code> is a queue known to contain only strings.
  The following code can be used to dump the queue into a newly
  allocated array of <code>String</code>:
  
 @code
 String[] y = x.toArray(new String[0]);
@endcode
  Note that <code>toArray(new Object[0])</code> is identical in function to 
 <code>toArray()</code>.
 @param a the array into which the elements of the queue are to           be stored, if it is big enough; otherwise, a new array of the
            same runtime type is allocated for this purpose
 @return an array containing all of the elements in this queue
 @throw ArrayStoreExceptionif the runtime type of the specified array
          is not a supertype of the runtime type of every element in
          this queue
 @throw NullPointerExceptionif the specified array is null
 */
- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)a;

- (NSString *)description;

#pragma mark Package-Private

+ (jboolean)casItemWithJavaUtilConcurrentConcurrentLinkedQueue_Node:(JavaUtilConcurrentConcurrentLinkedQueue_Node *)node
                                                             withId:(id)cmp
                                                             withId:(id)val;

+ (jboolean)casNextWithJavaUtilConcurrentConcurrentLinkedQueue_Node:(JavaUtilConcurrentConcurrentLinkedQueue_Node *)node
                   withJavaUtilConcurrentConcurrentLinkedQueue_Node:(JavaUtilConcurrentConcurrentLinkedQueue_Node *)cmp
                   withJavaUtilConcurrentConcurrentLinkedQueue_Node:(JavaUtilConcurrentConcurrentLinkedQueue_Node *)val;

/*!
 @brief Returns the first live (non-deleted) node on list, or null if none.
 This is yet another variant of poll/peek; here returning the
  first node, not element.  We could make peek() a wrapper around
  first(), but that would cost an extra volatile read of item,
  and the need to add a retry loop to deal with the possibility
  of losing a race to a concurrent poll().
 */
- (JavaUtilConcurrentConcurrentLinkedQueue_Node *)first;

+ (void)lazySetNextWithJavaUtilConcurrentConcurrentLinkedQueue_Node:(JavaUtilConcurrentConcurrentLinkedQueue_Node *)node
                   withJavaUtilConcurrentConcurrentLinkedQueue_Node:(JavaUtilConcurrentConcurrentLinkedQueue_Node *)val;

/*!
 @brief Returns a new node holding item.Uses relaxed write because item
  can only be seen after piggy-backing publication via casNext.
 */
+ (JavaUtilConcurrentConcurrentLinkedQueue_Node *)newNodeWithId:(id)item OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns the successor of p, or the head node if p.next has been
  linked to self, which will only be true if traversing with a
  stale pointer that is now off the list.
 */
- (JavaUtilConcurrentConcurrentLinkedQueue_Node *)succWithJavaUtilConcurrentConcurrentLinkedQueue_Node:(JavaUtilConcurrentConcurrentLinkedQueue_Node *)p;

/*!
 @brief Tries to CAS head to p.If successful, repoint old head to itself
  as sentinel for succ(), below.
 */
- (void)updateHeadWithJavaUtilConcurrentConcurrentLinkedQueue_Node:(JavaUtilConcurrentConcurrentLinkedQueue_Node *)h
                  withJavaUtilConcurrentConcurrentLinkedQueue_Node:(JavaUtilConcurrentConcurrentLinkedQueue_Node *)p;

@end

J2OBJC_STATIC_INIT(JavaUtilConcurrentConcurrentLinkedQueue)

J2OBJC_VOLATILE_FIELD_SETTER(JavaUtilConcurrentConcurrentLinkedQueue, head_, JavaUtilConcurrentConcurrentLinkedQueue_Node *)

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentLinkedQueue_Node *JavaUtilConcurrentConcurrentLinkedQueue_newNodeWithId_(id item);

FOUNDATION_EXPORT jboolean JavaUtilConcurrentConcurrentLinkedQueue_casItemWithJavaUtilConcurrentConcurrentLinkedQueue_Node_withId_withId_(JavaUtilConcurrentConcurrentLinkedQueue_Node *node, id cmp, id val);

FOUNDATION_EXPORT void JavaUtilConcurrentConcurrentLinkedQueue_lazySetNextWithJavaUtilConcurrentConcurrentLinkedQueue_Node_withJavaUtilConcurrentConcurrentLinkedQueue_Node_(JavaUtilConcurrentConcurrentLinkedQueue_Node *node, JavaUtilConcurrentConcurrentLinkedQueue_Node *val);

FOUNDATION_EXPORT jboolean JavaUtilConcurrentConcurrentLinkedQueue_casNextWithJavaUtilConcurrentConcurrentLinkedQueue_Node_withJavaUtilConcurrentConcurrentLinkedQueue_Node_withJavaUtilConcurrentConcurrentLinkedQueue_Node_(JavaUtilConcurrentConcurrentLinkedQueue_Node *node, JavaUtilConcurrentConcurrentLinkedQueue_Node *cmp, JavaUtilConcurrentConcurrentLinkedQueue_Node *val);

FOUNDATION_EXPORT void JavaUtilConcurrentConcurrentLinkedQueue_init(JavaUtilConcurrentConcurrentLinkedQueue *self);

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentLinkedQueue *new_JavaUtilConcurrentConcurrentLinkedQueue_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentLinkedQueue *create_JavaUtilConcurrentConcurrentLinkedQueue_init(void);

FOUNDATION_EXPORT void JavaUtilConcurrentConcurrentLinkedQueue_initWithJavaUtilCollection_(JavaUtilConcurrentConcurrentLinkedQueue *self, id<JavaUtilCollection> c);

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentLinkedQueue *new_JavaUtilConcurrentConcurrentLinkedQueue_initWithJavaUtilCollection_(id<JavaUtilCollection> c) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentLinkedQueue *create_JavaUtilConcurrentConcurrentLinkedQueue_initWithJavaUtilCollection_(id<JavaUtilCollection> c);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentConcurrentLinkedQueue)

#endif

#if !defined (JavaUtilConcurrentConcurrentLinkedQueue_Node_) && (INCLUDE_ALL_JavaUtilConcurrentConcurrentLinkedQueue || defined(INCLUDE_JavaUtilConcurrentConcurrentLinkedQueue_Node))
#define JavaUtilConcurrentConcurrentLinkedQueue_Node_

@interface JavaUtilConcurrentConcurrentLinkedQueue_Node : NSObject {
 @public
  volatile_id item_;
  volatile_id next_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentConcurrentLinkedQueue_Node)

J2OBJC_VOLATILE_FIELD_SETTER(JavaUtilConcurrentConcurrentLinkedQueue_Node, item_, id)
J2OBJC_VOLATILE_FIELD_SETTER(JavaUtilConcurrentConcurrentLinkedQueue_Node, next_, JavaUtilConcurrentConcurrentLinkedQueue_Node *)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentConcurrentLinkedQueue_Node)

#endif

#if !defined (JavaUtilConcurrentConcurrentLinkedQueue_CLQSpliterator_) && (INCLUDE_ALL_JavaUtilConcurrentConcurrentLinkedQueue || defined(INCLUDE_JavaUtilConcurrentConcurrentLinkedQueue_CLQSpliterator))
#define JavaUtilConcurrentConcurrentLinkedQueue_CLQSpliterator_

#define RESTRICT_JavaUtilSpliterator 1
#define INCLUDE_JavaUtilSpliterator 1
#include "../../../java/util/Spliterator.h"

@class JavaUtilConcurrentConcurrentLinkedQueue;
@class JavaUtilConcurrentConcurrentLinkedQueue_Node;
@protocol JavaUtilComparator;
@protocol JavaUtilFunctionConsumer;

/*!
 @brief A customized variant of Spliterators.IteratorSpliterator
 */
@interface JavaUtilConcurrentConcurrentLinkedQueue_CLQSpliterator : NSObject < JavaUtilSpliterator > {
 @public
  JavaUtilConcurrentConcurrentLinkedQueue *queue_;
  JavaUtilConcurrentConcurrentLinkedQueue_Node *current_;
  jint batch_;
  jboolean exhausted_;
}

+ (jint)MAX_BATCH;

#pragma mark Public

- (jint)characteristics;

- (jlong)estimateSize;

- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

- (jboolean)tryAdvanceWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

- (id<JavaUtilSpliterator>)trySplit;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilConcurrentConcurrentLinkedQueue:(JavaUtilConcurrentConcurrentLinkedQueue *)queue;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentConcurrentLinkedQueue_CLQSpliterator)

J2OBJC_FIELD_SETTER(JavaUtilConcurrentConcurrentLinkedQueue_CLQSpliterator, queue_, JavaUtilConcurrentConcurrentLinkedQueue *)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentConcurrentLinkedQueue_CLQSpliterator, current_, JavaUtilConcurrentConcurrentLinkedQueue_Node *)

inline jint JavaUtilConcurrentConcurrentLinkedQueue_CLQSpliterator_get_MAX_BATCH(void);
#define JavaUtilConcurrentConcurrentLinkedQueue_CLQSpliterator_MAX_BATCH 33554432
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilConcurrentConcurrentLinkedQueue_CLQSpliterator, MAX_BATCH, jint)

FOUNDATION_EXPORT void JavaUtilConcurrentConcurrentLinkedQueue_CLQSpliterator_initWithJavaUtilConcurrentConcurrentLinkedQueue_(JavaUtilConcurrentConcurrentLinkedQueue_CLQSpliterator *self, JavaUtilConcurrentConcurrentLinkedQueue *queue);

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentLinkedQueue_CLQSpliterator *new_JavaUtilConcurrentConcurrentLinkedQueue_CLQSpliterator_initWithJavaUtilConcurrentConcurrentLinkedQueue_(JavaUtilConcurrentConcurrentLinkedQueue *queue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentLinkedQueue_CLQSpliterator *create_JavaUtilConcurrentConcurrentLinkedQueue_CLQSpliterator_initWithJavaUtilConcurrentConcurrentLinkedQueue_(JavaUtilConcurrentConcurrentLinkedQueue *queue);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentConcurrentLinkedQueue_CLQSpliterator)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentConcurrentLinkedQueue")
