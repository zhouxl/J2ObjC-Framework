//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/Deque.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilDeque")
#ifdef RESTRICT_JavaUtilDeque
#define INCLUDE_ALL_JavaUtilDeque 0
#else
#define INCLUDE_ALL_JavaUtilDeque 1
#endif
#undef RESTRICT_JavaUtilDeque

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilDeque_) && (INCLUDE_ALL_JavaUtilDeque || defined(INCLUDE_JavaUtilDeque))
#define JavaUtilDeque_

#define RESTRICT_JavaUtilQueue 1
#define INCLUDE_JavaUtilQueue 1
#include "../../java/util/Queue.h"

@protocol JavaUtilIterator;

/*!
 @brief A linear collection that supports element insertion and removal at
  both ends.The name <i>deque</i> is short for "double ended queue"
  and is usually pronounced "deck".
 Most <code>Deque</code>
  implementations place no fixed limits on the number of elements
  they may contain, but this interface supports capacity-restricted
  deques as well as those with no fixed size limit. 
 <p>This interface defines methods to access the elements at both
  ends of the deque.  Methods are provided to insert, remove, and
  examine the element.  Each of these methods exists in two forms:
  one throws an exception if the operation fails, the other returns a
  special value (either <code>null</code> or <code>false</code>, depending on
  the operation).  The latter form of the insert operation is
  designed specifically for use with capacity-restricted 
 <code>Deque</code> implementations; in most implementations, insert
  operations cannot fail. 
 <p>The twelve methods described above are summarized in the
  following table: 
 <table BORDER CELLPADDING=3 CELLSPACING=1>
  <caption>Summary of Deque methods</caption>
   <tr>
     <td></td>
     <td ALIGN=CENTER COLSPAN=2> <b>First Element (Head)</b></td>
     <td ALIGN=CENTER COLSPAN=2> <b>Last Element (Tail)</b></td>
   </tr>
   <tr>
     <td></td>
     <td ALIGN=CENTER><em>Throws exception</em></td>
     <td ALIGN=CENTER><em>Special value</em></td>
     <td ALIGN=CENTER><em>Throws exception</em></td>
     <td ALIGN=CENTER><em>Special value</em></td>
   </tr>
   <tr>
     <td><b>Insert</b></td>
     <td><code>addFirst(e)</code></td>
     <td><code>offerFirst(e)</code></td>
     <td><code>addLast(e)</code></td>
     <td><code>offerLast(e)</code></td>
   </tr>
   <tr>
     <td><b>Remove</b></td>
     <td><code>removeFirst()</code></td>
     <td><code>pollFirst()</code></td>
     <td><code>removeLast()</code></td>
     <td><code>pollLast()</code></td>
   </tr>
   <tr>
     <td><b>Examine</b></td>
     <td><code>getFirst()</code></td>
     <td><code>peekFirst()</code></td>
     <td><code>getLast()</code></td>
     <td><code>peekLast()</code></td>
   </tr>
  </table>
  
 <p>This interface extends the <code>Queue</code> interface.  When a deque is
  used as a queue, FIFO (First-In-First-Out) behavior results.  Elements are
  added at the end of the deque and removed from the beginning.  The methods
  inherited from the <code>Queue</code> interface are precisely equivalent to 
 <code>Deque</code> methods as indicated in the following table: 
 <table BORDER CELLPADDING=3 CELLSPACING=1>
  <caption>Comparison of Queue and Deque methods</caption>
   <tr>
     <td ALIGN=CENTER> <b><code>Queue</code> Method</b></td>
     <td ALIGN=CENTER> <b>Equivalent <code>Deque</code> Method</b></td>
   </tr>
   <tr>
     <td><code>add(e)</code></td>
     <td><code>addLast(e)</code></td>
   </tr>
   <tr>
     <td><code>offer(e)</code></td>
     <td><code>offerLast(e)</code></td>
   </tr>
   <tr>
     <td><code>remove()</code></td>
     <td><code>removeFirst()</code></td>
   </tr>
   <tr>
     <td><code>poll()</code></td>
     <td><code>pollFirst()</code></td>
   </tr>
   <tr>
     <td><code>element()</code></td>
     <td><code>getFirst()</code></td>
   </tr>
   <tr>
     <td><code>peek()</code></td>
     <td><code>peekFirst()</code></td>
   </tr>
  </table>
  
 <p>Deques can also be used as LIFO (Last-In-First-Out) stacks.  This
  interface should be used in preference to the legacy <code>Stack</code> class.
  When a deque is used as a stack, elements are pushed and popped from the
  beginning of the deque.  Stack methods are precisely equivalent to 
 <code>Deque</code> methods as indicated in the table below: 
 <table BORDER CELLPADDING=3 CELLSPACING=1>
  <caption>Comparison of Stack and Deque methods</caption>
   <tr>
     <td ALIGN=CENTER> <b>Stack Method</b></td>
     <td ALIGN=CENTER> <b>Equivalent <code>Deque</code> Method</b></td>
   </tr>
   <tr>
     <td><code>push(e)</code></td>
     <td><code>addFirst(e)</code></td>
   </tr>
   <tr>
     <td><code>pop()</code></td>
     <td><code>removeFirst()</code></td>
   </tr>
   <tr>
     <td><code>peek()</code></td>
     <td><code>peekFirst()</code></td>
   </tr>
  </table>
  
 <p>Note that the <code>peek</code> method works equally well when
  a deque is used as a queue or a stack; in either case, elements are
  drawn from the beginning of the deque. 
 <p>This interface provides two methods to remove interior
  elements, <code>removeFirstOccurrence</code> and 
 <code>removeLastOccurrence</code>.
  
 <p>Unlike the <code>List</code> interface, this interface does not
  provide support for indexed access to elements. 
 <p>While <code>Deque</code> implementations are not strictly required
  to prohibit the insertion of null elements, they are strongly
  encouraged to do so.  Users of any <code>Deque</code> implementations
  that do allow null elements are strongly encouraged <i>not</i> to
  take advantage of the ability to insert nulls.  This is so because 
 <code>null</code> is used as a special return value by various methods
  to indicated that the deque is empty. 
 <p><code>Deque</code> implementations generally do not define
  element-based versions of the <code>equals</code> and <code>hashCode</code>
  methods, but instead inherit the identity-based versions from class 
 <code>Object</code>.
 @author Doug Lea
 @author Josh Bloch
 @since 1.6
 */
@protocol JavaUtilDeque < JavaUtilQueue, JavaObject >

/*!
 @brief Inserts the specified element at the front of this deque if it is
  possible to do so immediately without violating capacity restrictions,
  throwing an <code>IllegalStateException</code> if no space is currently
  available.When using a capacity-restricted deque, it is generally
  preferable to use method <code>offerFirst</code>.
 @param e the element to add
 @throw IllegalStateExceptionif the element cannot be added at this
          time due to capacity restrictions
 @throw ClassCastExceptionif the class of the specified element
          prevents it from being added to this deque
 @throw NullPointerExceptionif the specified element is null and this
          deque does not permit null elements
 @throw IllegalArgumentExceptionif some property of the specified
          element prevents it from being added to this deque
 */
- (void)addFirstWithId:(id)e;

/*!
 @brief Inserts the specified element at the end of this deque if it is
  possible to do so immediately without violating capacity restrictions,
  throwing an <code>IllegalStateException</code> if no space is currently
  available.When using a capacity-restricted deque, it is generally
  preferable to use method <code>offerLast</code>.
 <p>This method is equivalent to <code>add</code>.
 @param e the element to add
 @throw IllegalStateExceptionif the element cannot be added at this
          time due to capacity restrictions
 @throw ClassCastExceptionif the class of the specified element
          prevents it from being added to this deque
 @throw NullPointerExceptionif the specified element is null and this
          deque does not permit null elements
 @throw IllegalArgumentExceptionif some property of the specified
          element prevents it from being added to this deque
 */
- (void)addLastWithId:(id)e;

/*!
 @brief Inserts the specified element at the front of this deque unless it would
  violate capacity restrictions.When using a capacity-restricted deque,
  this method is generally preferable to the <code>addFirst</code> method,
  which can fail to insert an element only by throwing an exception.
 @param e the element to add
 @return <code>true</code> if the element was added to this deque, else
          <code>false</code>
 @throw ClassCastExceptionif the class of the specified element
          prevents it from being added to this deque
 @throw NullPointerExceptionif the specified element is null and this
          deque does not permit null elements
 @throw IllegalArgumentExceptionif some property of the specified
          element prevents it from being added to this deque
 */
- (jboolean)offerFirstWithId:(id)e;

/*!
 @brief Inserts the specified element at the end of this deque unless it would
  violate capacity restrictions.When using a capacity-restricted deque,
  this method is generally preferable to the <code>addLast</code> method,
  which can fail to insert an element only by throwing an exception.
 @param e the element to add
 @return <code>true</code> if the element was added to this deque, else
          <code>false</code>
 @throw ClassCastExceptionif the class of the specified element
          prevents it from being added to this deque
 @throw NullPointerExceptionif the specified element is null and this
          deque does not permit null elements
 @throw IllegalArgumentExceptionif some property of the specified
          element prevents it from being added to this deque
 */
- (jboolean)offerLastWithId:(id)e;

/*!
 @brief Retrieves and removes the first element of this deque.This method
  differs from <code>pollFirst</code> only in that it throws an
  exception if this deque is empty.
 @return the head of this deque
 @throw NoSuchElementExceptionif this deque is empty
 */
- (id)removeFirst;

/*!
 @brief Retrieves and removes the last element of this deque.This method
  differs from <code>pollLast</code> only in that it throws an
  exception if this deque is empty.
 @return the tail of this deque
 @throw NoSuchElementExceptionif this deque is empty
 */
- (id)removeLast;

/*!
 @brief Retrieves and removes the first element of this deque,
  or returns <code>null</code> if this deque is empty.
 @return the head of this deque, or <code>null</code> if this deque is empty
 */
- (id)pollFirst;

/*!
 @brief Retrieves and removes the last element of this deque,
  or returns <code>null</code> if this deque is empty.
 @return the tail of this deque, or <code>null</code> if this deque is empty
 */
- (id)pollLast;

/*!
 @brief Retrieves, but does not remove, the first element of this deque.
 This method differs from <code>peekFirst</code> only in that it
  throws an exception if this deque is empty.
 @return the head of this deque
 @throw NoSuchElementExceptionif this deque is empty
 */
- (id)getFirst;

/*!
 @brief Retrieves, but does not remove, the last element of this deque.
 This method differs from <code>peekLast</code> only in that it
  throws an exception if this deque is empty.
 @return the tail of this deque
 @throw NoSuchElementExceptionif this deque is empty
 */
- (id)getLast;

/*!
 @brief Retrieves, but does not remove, the first element of this deque,
  or returns <code>null</code> if this deque is empty.
 @return the head of this deque, or <code>null</code> if this deque is empty
 */
- (id)peekFirst;

/*!
 @brief Retrieves, but does not remove, the last element of this deque,
  or returns <code>null</code> if this deque is empty.
 @return the tail of this deque, or <code>null</code> if this deque is empty
 */
- (id)peekLast;

/*!
 @brief Removes the first occurrence of the specified element from this deque.
 If the deque does not contain the element, it is unchanged.
  More formally, removes the first element <code>e</code> such that 
 <code>Objects.equals(o, e)</code> (if such an element exists).
  Returns <code>true</code> if this deque contained the specified element
  (or equivalently, if this deque changed as a result of the call).
 @param o element to be removed from this deque, if present
 @return <code>true</code> if an element was removed as a result of this call
 @throw ClassCastExceptionif the class of the specified element
          is incompatible with this deque
  (<a href="Collection.html#optional-restrictions">optional</a>)
 @throw NullPointerExceptionif the specified element is null and this
          deque does not permit null elements
  (<a href="Collection.html#optional-restrictions">optional</a>)
 */
- (jboolean)removeFirstOccurrenceWithId:(id)o;

/*!
 @brief Removes the last occurrence of the specified element from this deque.
 If the deque does not contain the element, it is unchanged.
  More formally, removes the last element <code>e</code> such that 
 <code>Objects.equals(o, e)</code> (if such an element exists).
  Returns <code>true</code> if this deque contained the specified element
  (or equivalently, if this deque changed as a result of the call).
 @param o element to be removed from this deque, if present
 @return <code>true</code> if an element was removed as a result of this call
 @throw ClassCastExceptionif the class of the specified element
          is incompatible with this deque
  (<a href="Collection.html#optional-restrictions">optional</a>)
 @throw NullPointerExceptionif the specified element is null and this
          deque does not permit null elements
  (<a href="Collection.html#optional-restrictions">optional</a>)
 */
- (jboolean)removeLastOccurrenceWithId:(id)o;

/*!
 @brief Inserts the specified element into the queue represented by this deque
  (in other words, at the tail of this deque) if it is possible to do so
  immediately without violating capacity restrictions, returning 
 <code>true</code> upon success and throwing an 
 <code>IllegalStateException</code> if no space is currently available.
 When using a capacity-restricted deque, it is generally preferable to
  use <code>offer</code>.
  
 <p>This method is equivalent to <code>addLast</code>.
 @param e the element to add
 @return <code>true</code> (as specified by <code>Collection.add</code>)
 @throw IllegalStateExceptionif the element cannot be added at this
          time due to capacity restrictions
 @throw ClassCastExceptionif the class of the specified element
          prevents it from being added to this deque
 @throw NullPointerExceptionif the specified element is null and this
          deque does not permit null elements
 @throw IllegalArgumentExceptionif some property of the specified
          element prevents it from being added to this deque
 */
- (jboolean)addWithId:(id)e;

/*!
 @brief Inserts the specified element into the queue represented by this deque
  (in other words, at the tail of this deque) if it is possible to do so
  immediately without violating capacity restrictions, returning 
 <code>true</code> upon success and <code>false</code> if no space is currently
  available.When using a capacity-restricted deque, this method is
  generally preferable to the <code>add</code> method, which can fail to
  insert an element only by throwing an exception.
 <p>This method is equivalent to <code>offerLast</code>.
 @param e the element to add
 @return <code>true</code> if the element was added to this deque, else
          <code>false</code>
 @throw ClassCastExceptionif the class of the specified element
          prevents it from being added to this deque
 @throw NullPointerExceptionif the specified element is null and this
          deque does not permit null elements
 @throw IllegalArgumentExceptionif some property of the specified
          element prevents it from being added to this deque
 */
- (jboolean)offerWithId:(id)e;

/*!
 @brief Retrieves and removes the head of the queue represented by this deque
  (in other words, the first element of this deque).
 This method differs from <code>poll</code> only in that it throws an
  exception if this deque is empty. 
 <p>This method is equivalent to <code>removeFirst()</code>.
 @return the head of the queue represented by this deque
 @throw NoSuchElementExceptionif this deque is empty
 */
- (id)remove;

/*!
 @brief Retrieves and removes the head of the queue represented by this deque
  (in other words, the first element of this deque), or returns 
 <code>null</code> if this deque is empty.
 <p>This method is equivalent to <code>pollFirst()</code>.
 @return the first element of this deque, or <code>null</code> if
          this deque is empty
 */
- (id)poll;

/*!
 @brief Retrieves, but does not remove, the head of the queue represented by
  this deque (in other words, the first element of this deque).
 This method differs from <code>peek</code> only in that it throws an
  exception if this deque is empty. 
 <p>This method is equivalent to <code>getFirst()</code>.
 @return the head of the queue represented by this deque
 @throw NoSuchElementExceptionif this deque is empty
 */
- (id)element;

/*!
 @brief Retrieves, but does not remove, the head of the queue represented by
  this deque (in other words, the first element of this deque), or
  returns <code>null</code> if this deque is empty.
 <p>This method is equivalent to <code>peekFirst()</code>.
 @return the head of the queue represented by this deque, or
          <code>null</code> if this deque is empty
 */
- (id)peek;

/*!
 @brief Pushes an element onto the stack represented by this deque (in other
  words, at the head of this deque) if it is possible to do so
  immediately without violating capacity restrictions, throwing an 
 <code>IllegalStateException</code> if no space is currently available.
 <p>This method is equivalent to <code>addFirst</code>.
 @param e the element to push
 @throw IllegalStateExceptionif the element cannot be added at this
          time due to capacity restrictions
 @throw ClassCastExceptionif the class of the specified element
          prevents it from being added to this deque
 @throw NullPointerExceptionif the specified element is null and this
          deque does not permit null elements
 @throw IllegalArgumentExceptionif some property of the specified
          element prevents it from being added to this deque
 */
- (void)pushWithId:(id)e;

/*!
 @brief Pops an element from the stack represented by this deque.In other
  words, removes and returns the first element of this deque.
 <p>This method is equivalent to <code>removeFirst()</code>.
 @return the element at the front of this deque (which is the top
          of the stack represented by this deque)
 @throw NoSuchElementExceptionif this deque is empty
 */
- (id)pop;

/*!
 @brief Removes the first occurrence of the specified element from this deque.
 If the deque does not contain the element, it is unchanged.
  More formally, removes the first element <code>e</code> such that 
 <code>Objects.equals(o, e)</code> (if such an element exists).
  Returns <code>true</code> if this deque contained the specified element
  (or equivalently, if this deque changed as a result of the call). 
 <p>This method is equivalent to <code>removeFirstOccurrence(Object)</code>.
 @param o element to be removed from this deque, if present
 @return <code>true</code> if an element was removed as a result of this call
 @throw ClassCastExceptionif the class of the specified element
          is incompatible with this deque
  (<a href="Collection.html#optional-restrictions">optional</a>)
 @throw NullPointerExceptionif the specified element is null and this
          deque does not permit null elements
  (<a href="Collection.html#optional-restrictions">optional</a>)
 */
- (jboolean)removeWithId:(id)o;

/*!
 @brief Returns <code>true</code> if this deque contains the specified element.
 More formally, returns <code>true</code> if and only if this deque contains
  at least one element <code>e</code> such that <code>Objects.equals(o, e)</code>.
 @param o element whose presence in this deque is to be tested
 @return <code>true</code> if this deque contains the specified element
 @throw ClassCastExceptionif the class of the specified element
          is incompatible with this deque
  (<a href="Collection.html#optional-restrictions">optional</a>)
 @throw NullPointerExceptionif the specified element is null and this
          deque does not permit null elements
  (<a href="Collection.html#optional-restrictions">optional</a>)
 */
- (jboolean)containsWithId:(id)o;

/*!
 @brief Returns the number of elements in this deque.
 @return the number of elements in this deque
 */
- (jint)size;

/*!
 @brief Returns an iterator over the elements in this deque in proper sequence.
 The elements will be returned in order from first (head) to last (tail).
 @return an iterator over the elements in this deque in proper sequence
 */
- (id<JavaUtilIterator>)iterator;

/*!
 @brief Returns an iterator over the elements in this deque in reverse
  sequential order.The elements will be returned in order from
  last (tail) to first (head).
 @return an iterator over the elements in this deque in reverse
  sequence
 */
- (id<JavaUtilIterator>)descendingIterator;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilDeque)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilDeque)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilDeque")
