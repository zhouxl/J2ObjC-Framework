//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/ArrayDeque.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilArrayDeque")
#ifdef RESTRICT_JavaUtilArrayDeque
#define INCLUDE_ALL_JavaUtilArrayDeque 0
#else
#define INCLUDE_ALL_JavaUtilArrayDeque 1
#endif
#undef RESTRICT_JavaUtilArrayDeque

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilArrayDeque_) && (INCLUDE_ALL_JavaUtilArrayDeque || defined(INCLUDE_JavaUtilArrayDeque))
#define JavaUtilArrayDeque_

#define RESTRICT_JavaUtilAbstractCollection 1
#define INCLUDE_JavaUtilAbstractCollection 1
#include "../../java/util/AbstractCollection.h"

#define RESTRICT_JavaUtilDeque 1
#define INCLUDE_JavaUtilDeque 1
#include "../../java/util/Deque.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../java/io/Serializable.h"

@class IOSObjectArray;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilSpliterator;

/*!
 @brief Resizable-array implementation of the <code>Deque</code> interface.Array
  deques have no capacity restrictions; they grow as necessary to support
  usage.
 They are not thread-safe; in the absence of external
  synchronization, they do not support concurrent access by multiple threads.
  Null elements are prohibited.  This class is likely to be faster than 
 <code>Stack</code> when used as a stack, and faster than <code>LinkedList</code>
  when used as a queue. 
 <p>Most <code>ArrayDeque</code> operations run in amortized constant time.
  Exceptions include 
 <code>remove</code>,
  <code>removeFirstOccurrence</code>,
  <code>removeLastOccurrence</code>,
  <code>contains</code>,
  <code>iterator.remove()</code>,
  and the bulk operations, all of which run in linear time. 
 <p>The iterators returned by this class's <code>iterator</code>
  method are <em>fail-fast</em>: If the deque is modified at any time after
  the iterator is created, in any way except through the iterator's own 
 <code>remove</code> method, the iterator will generally throw a <code>ConcurrentModificationException</code>
 .  Thus, in the face of concurrent
  modification, the iterator fails quickly and cleanly, rather than risking
  arbitrary, non-deterministic behavior at an undetermined time in the
  future. 
 <p>Note that the fail-fast behavior of an iterator cannot be guaranteed
  as it is, generally speaking, impossible to make any hard guarantees in the
  presence of unsynchronized concurrent modification.  Fail-fast iterators
  throw <code>ConcurrentModificationException</code> on a best-effort basis.
  Therefore, it would be wrong to write a program that depended on this
  exception for its correctness: <i>the fail-fast behavior of iterators
  should be used only to detect bugs.</i>
  
 <p>This class and its iterator implement all of the 
 <em>optional</em> methods of the <code>Collection</code> and <code>Iterator</code>
  interfaces.
 @author Josh Bloch and Doug Lea
 @since 1.6
 */
@interface JavaUtilArrayDeque : JavaUtilAbstractCollection < JavaUtilDeque, NSCopying, JavaIoSerializable > {
 @public
  /*!
   @brief The array in which the elements of the deque are stored.
   The capacity of the deque is the length of this array, which is
  always a power of two. The array is never allowed to become
  full, except transiently within an addX method where it is
  resized (see doubleCapacity) immediately upon becoming full,
  thus avoiding head and tail wrapping around to equal each
  other.  We also guarantee that all array cells not holding
  deque elements are always null.
   */
  IOSObjectArray *elements_;
  /*!
   @brief The index of the element at the head of the deque (which is the
  element that would be removed by remove() or pop()); or an
  arbitrary number equal to tail if the deque is empty.
   */
  jint head_;
  /*!
   @brief The index at which the next element would be added to the tail
  of the deque (via addLast(E), add(E), or push(E)).
   */
  jint tail_;
}

#pragma mark Public

/*!
 @brief Constructs an empty array deque with an initial capacity
  sufficient to hold 16 elements.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a deque containing the elements of the specified
  collection, in the order they are returned by the collection's
  iterator.
 (The first element returned by the collection's
  iterator becomes the first element, or <i>front</i> of the
  deque.)
 @param c the collection whose elements are to be placed into the deque
 @throw NullPointerExceptionif the specified collection is null
 */
- (instancetype __nonnull)initWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @brief Constructs an empty array deque with an initial capacity
  sufficient to hold the specified number of elements.
 @param numElements lower bound on initial capacity of the deque
 */
- (instancetype __nonnull)initWithInt:(jint)numElements;

/*!
 @brief Inserts the specified element at the end of this deque.
 <p>This method is equivalent to <code>addLast</code>.
 @param e the element to add
 @return <code>true</code> (as specified by <code>Collection.add</code>)
 @throw NullPointerExceptionif the specified element is null
 */
- (jboolean)addWithId:(id)e;

/*!
 @brief Inserts the specified element at the front of this deque.
 @param e the element to add
 @throw NullPointerExceptionif the specified element is null
 */
- (void)addFirstWithId:(id)e;

/*!
 @brief Inserts the specified element at the end of this deque.
 <p>This method is equivalent to <code>add</code>.
 @param e the element to add
 @throw NullPointerExceptionif the specified element is null
 */
- (void)addLastWithId:(id)e;

/*!
 @brief Removes all of the elements from this deque.
 The deque will be empty after this call returns.
 */
- (void)clear;

/*!
 @brief Returns a copy of this deque.
 @return a copy of this deque
 */
- (JavaUtilArrayDeque *)java_clone;

/*!
 @brief Returns <code>true</code> if this deque contains the specified element.
 More formally, returns <code>true</code> if and only if this deque contains
  at least one element <code>e</code> such that <code>o.equals(e)</code>.
 @param o object to be checked for containment in this deque
 @return <code>true</code> if this deque contains the specified element
 */
- (jboolean)containsWithId:(id)o;

- (id<JavaUtilIterator>)descendingIterator;

/*!
 @brief Retrieves, but does not remove, the head of the queue represented by
  this deque.This method differs from <code>peek</code> only in
  that it throws an exception if this deque is empty.
 <p>This method is equivalent to <code>getFirst</code>.
 @return the head of the queue represented by this deque
 @throw NoSuchElementException
 */
- (id)element;

/*!
 @throw NoSuchElementException
 */
- (id)getFirst;

/*!
 @throw NoSuchElementException
 */
- (id)getLast;

/*!
 @brief Returns <code>true</code> if this deque contains no elements.
 @return <code>true</code> if this deque contains no elements
 */
- (jboolean)isEmpty;

/*!
 @brief Returns an iterator over the elements in this deque.The elements
  will be ordered from first (head) to last (tail).
 This is the same
  order that elements would be dequeued (via successive calls to 
 <code>remove</code> or popped (via successive calls to <code>pop</code>).
 @return an iterator over the elements in this deque
 */
- (id<JavaUtilIterator>)iterator;

/*!
 @brief Inserts the specified element at the end of this deque.
 <p>This method is equivalent to <code>offerLast</code>.
 @param e the element to add
 @return <code>true</code> (as specified by <code>Queue.offer</code>)
 @throw NullPointerExceptionif the specified element is null
 */
- (jboolean)offerWithId:(id)e;

/*!
 @brief Inserts the specified element at the front of this deque.
 @param e the element to add
 @return <code>true</code> (as specified by <code>Deque.offerFirst</code>)
 @throw NullPointerExceptionif the specified element is null
 */
- (jboolean)offerFirstWithId:(id)e;

/*!
 @brief Inserts the specified element at the end of this deque.
 @param e the element to add
 @return <code>true</code> (as specified by <code>Deque.offerLast</code>)
 @throw NullPointerExceptionif the specified element is null
 */
- (jboolean)offerLastWithId:(id)e;

/*!
 @brief Retrieves, but does not remove, the head of the queue represented by
  this deque, or returns <code>null</code> if this deque is empty.
 <p>This method is equivalent to <code>peekFirst</code>.
 @return the head of the queue represented by this deque, or
          <code>null</code> if this deque is empty
 */
- (id)peek;

- (id)peekFirst;

- (id)peekLast;

/*!
 @brief Retrieves and removes the head of the queue represented by this deque
  (in other words, the first element of this deque), or returns 
 <code>null</code> if this deque is empty.
 <p>This method is equivalent to <code>pollFirst</code>.
 @return the head of the queue represented by this deque, or
          <code>null</code> if this deque is empty
 */
- (id)poll;

- (id)pollFirst;

- (id)pollLast;

/*!
 @brief Pops an element from the stack represented by this deque.In other
  words, removes and returns the first element of this deque.
 <p>This method is equivalent to <code>removeFirst()</code>.
 @return the element at the front of this deque (which is the top
          of the stack represented by this deque)
 @throw NoSuchElementException
 */
- (id)pop;

/*!
 @brief Pushes an element onto the stack represented by this deque.In other
  words, inserts the element at the front of this deque.
 <p>This method is equivalent to <code>addFirst</code>.
 @param e the element to push
 @throw NullPointerExceptionif the specified element is null
 */
- (void)pushWithId:(id)e;

/*!
 @brief Retrieves and removes the head of the queue represented by this deque.
 This method differs from <code>poll</code> only in that it throws an
  exception if this deque is empty. 
 <p>This method is equivalent to <code>removeFirst</code>.
 @return the head of the queue represented by this deque
 @throw NoSuchElementException
 */
- (id)remove;

/*!
 @brief Removes a single instance of the specified element from this deque.
 If the deque does not contain the element, it is unchanged.
  More formally, removes the first element <code>e</code> such that 
 <code>o.equals(e)</code> (if such an element exists).
  Returns <code>true</code> if this deque contained the specified element
  (or equivalently, if this deque changed as a result of the call). 
 <p>This method is equivalent to <code>removeFirstOccurrence(Object)</code>.
 @param o element to be removed from this deque, if present
 @return <code>true</code> if this deque contained the specified element
 */
- (jboolean)removeWithId:(id)o;

/*!
 @throw NoSuchElementException
 */
- (id)removeFirst;

/*!
 @brief Removes the first occurrence of the specified element in this
  deque (when traversing the deque from head to tail).
 If the deque does not contain the element, it is unchanged.
  More formally, removes the first element <code>e</code> such that 
 <code>o.equals(e)</code> (if such an element exists).
  Returns <code>true</code> if this deque contained the specified element
  (or equivalently, if this deque changed as a result of the call).
 @param o element to be removed from this deque, if present
 @return <code>true</code> if the deque contained the specified element
 */
- (jboolean)removeFirstOccurrenceWithId:(id)o;

/*!
 @throw NoSuchElementException
 */
- (id)removeLast;

/*!
 @brief Removes the last occurrence of the specified element in this
  deque (when traversing the deque from head to tail).
 If the deque does not contain the element, it is unchanged.
  More formally, removes the last element <code>e</code> such that 
 <code>o.equals(e)</code> (if such an element exists).
  Returns <code>true</code> if this deque contained the specified element
  (or equivalently, if this deque changed as a result of the call).
 @param o element to be removed from this deque, if present
 @return <code>true</code> if the deque contained the specified element
 */
- (jboolean)removeLastOccurrenceWithId:(id)o;

/*!
 @brief Returns the number of elements in this deque.
 @return the number of elements in this deque
 */
- (jint)size;

/*!
 @brief Creates a <em><a href="Spliterator.html#binding">late-binding</a></em>
  and <em>fail-fast</em> <code>Spliterator</code> over the elements in this
  deque.
 <p>The <code>Spliterator</code> reports <code>Spliterator.SIZED</code>,
  <code>Spliterator.SUBSIZED</code>, <code>Spliterator.ORDERED</code>, and 
 <code>Spliterator.NONNULL</code>.  Overriding implementations should document
  the reporting of additional characteristic values.
 @return a <code>Spliterator</code> over the elements in this deque
 @since 1.8
 */
- (id<JavaUtilSpliterator>)spliterator;

/*!
 @brief Returns an array containing all of the elements in this deque
  in proper sequence (from first to last element).
 <p>The returned array will be "safe" in that no references to it are
  maintained by this deque.  (In other words, this method must allocate
  a new array).  The caller is thus free to modify the returned array. 
 <p>This method acts as bridge between array-based and collection-based
  APIs.
 @return an array containing all of the elements in this deque
 */
- (IOSObjectArray *)toArray;

/*!
 @brief Returns an array containing all of the elements in this deque in
  proper sequence (from first to last element); the runtime type of the
  returned array is that of the specified array.If the deque fits in
  the specified array, it is returned therein.
 Otherwise, a new array
  is allocated with the runtime type of the specified array and the
  size of this deque. 
 <p>If this deque fits in the specified array with room to spare
  (i.e., the array has more elements than this deque), the element in
  the array immediately following the end of the deque is set to 
 <code>null</code>.
  
 <p>Like the <code>toArray()</code> method, this method acts as bridge between
  array-based and collection-based APIs.  Further, this method allows
  precise control over the runtime type of the output array, and may,
  under certain circumstances, be used to save allocation costs. 
 <p>Suppose <code>x</code> is a deque known to contain only strings.
  The following code can be used to dump the deque into a newly
  allocated array of <code>String</code>:
  
 @code
 String[] y = x.toArray(new String[0]);
@endcode
  Note that <code>toArray(new Object[0])</code> is identical in function to 
 <code>toArray()</code>.
 @param a the array into which the elements of the deque are to           be stored, if it is big enough; otherwise, a new array of the
            same runtime type is allocated for this purpose
 @return an array containing all of the elements in this deque
 @throw ArrayStoreExceptionif the runtime type of the specified array
          is not a supertype of the runtime type of every element in
          this deque
 @throw NullPointerExceptionif the specified array is null
 */
- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)a;

#pragma mark Package-Private

/*!
 @brief Removes the element at the specified position in the elements array,
  adjusting head and tail as necessary.This can result in motion of
  elements backwards or forwards in the array.
 <p>This method is called delete rather than remove to emphasize
  that its semantics differ from those of <code>List.remove(int)</code>.
 @return true if elements moved backwards
 */
- (jboolean)delete__WithInt:(jint)i;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilArrayDeque)

J2OBJC_FIELD_SETTER(JavaUtilArrayDeque, elements_, IOSObjectArray *)

FOUNDATION_EXPORT void JavaUtilArrayDeque_init(JavaUtilArrayDeque *self);

FOUNDATION_EXPORT JavaUtilArrayDeque *new_JavaUtilArrayDeque_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilArrayDeque *create_JavaUtilArrayDeque_init(void);

FOUNDATION_EXPORT void JavaUtilArrayDeque_initWithInt_(JavaUtilArrayDeque *self, jint numElements);

FOUNDATION_EXPORT JavaUtilArrayDeque *new_JavaUtilArrayDeque_initWithInt_(jint numElements) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilArrayDeque *create_JavaUtilArrayDeque_initWithInt_(jint numElements);

FOUNDATION_EXPORT void JavaUtilArrayDeque_initWithJavaUtilCollection_(JavaUtilArrayDeque *self, id<JavaUtilCollection> c);

FOUNDATION_EXPORT JavaUtilArrayDeque *new_JavaUtilArrayDeque_initWithJavaUtilCollection_(id<JavaUtilCollection> c) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilArrayDeque *create_JavaUtilArrayDeque_initWithJavaUtilCollection_(id<JavaUtilCollection> c);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilArrayDeque)

#endif

#if !defined (JavaUtilArrayDeque_DeqSpliterator_) && (INCLUDE_ALL_JavaUtilArrayDeque || defined(INCLUDE_JavaUtilArrayDeque_DeqSpliterator))
#define JavaUtilArrayDeque_DeqSpliterator_

#define RESTRICT_JavaUtilSpliterator 1
#define INCLUDE_JavaUtilSpliterator 1
#include "../../java/util/Spliterator.h"

@class JavaUtilArrayDeque;
@protocol JavaUtilComparator;
@protocol JavaUtilFunctionConsumer;

@interface JavaUtilArrayDeque_DeqSpliterator : NSObject < JavaUtilSpliterator >

#pragma mark Public

- (jint)characteristics;

- (jlong)estimateSize;

- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)consumer;

- (jboolean)tryAdvanceWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)consumer;

- (JavaUtilArrayDeque_DeqSpliterator *)trySplit;

#pragma mark Package-Private

/*!
 @brief Creates new spliterator covering the given array and range.
 */
- (instancetype __nonnull)initWithJavaUtilArrayDeque:(JavaUtilArrayDeque *)deq
                                             withInt:(jint)origin
                                             withInt:(jint)fence;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilArrayDeque_DeqSpliterator)

FOUNDATION_EXPORT void JavaUtilArrayDeque_DeqSpliterator_initWithJavaUtilArrayDeque_withInt_withInt_(JavaUtilArrayDeque_DeqSpliterator *self, JavaUtilArrayDeque *deq, jint origin, jint fence);

FOUNDATION_EXPORT JavaUtilArrayDeque_DeqSpliterator *new_JavaUtilArrayDeque_DeqSpliterator_initWithJavaUtilArrayDeque_withInt_withInt_(JavaUtilArrayDeque *deq, jint origin, jint fence) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilArrayDeque_DeqSpliterator *create_JavaUtilArrayDeque_DeqSpliterator_initWithJavaUtilArrayDeque_withInt_withInt_(JavaUtilArrayDeque *deq, jint origin, jint fence);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilArrayDeque_DeqSpliterator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilArrayDeque")
