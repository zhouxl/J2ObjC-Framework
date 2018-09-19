//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/java/util/concurrent/locks/Lock.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentLocksLock")
#ifdef RESTRICT_JavaUtilConcurrentLocksLock
#define INCLUDE_ALL_JavaUtilConcurrentLocksLock 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentLocksLock 1
#endif
#undef RESTRICT_JavaUtilConcurrentLocksLock

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilConcurrentLocksLock_) && (INCLUDE_ALL_JavaUtilConcurrentLocksLock || defined(INCLUDE_JavaUtilConcurrentLocksLock))
#define JavaUtilConcurrentLocksLock_

@class JavaUtilConcurrentTimeUnit;
@protocol JavaUtilConcurrentLocksCondition;

/*!
 @brief <code>Lock</code> implementations provide more extensive locking
  operations than can be obtained using <code>synchronized</code> methods
  and statements.They allow more flexible structuring, may have
  quite different properties, and may support multiple associated 
 <code>Condition</code> objects.
 <p>A lock is a tool for controlling access to a shared resource by
  multiple threads. Commonly, a lock provides exclusive access to a
  shared resource: only one thread at a time can acquire the lock and
  all access to the shared resource requires that the lock be
  acquired first. However, some locks may allow concurrent access to
  a shared resource, such as the read lock of a <code>ReadWriteLock</code>.
  
 <p>The use of <code>synchronized</code> methods or statements provides
  access to the implicit monitor lock associated with every object, but
  forces all lock acquisition and release to occur in a block-structured way:
  when multiple locks are acquired they must be released in the opposite
  order, and all locks must be released in the same lexical scope in which
  they were acquired. 
 <p>While the scoping mechanism for <code>synchronized</code> methods
  and statements makes it much easier to program with monitor locks,
  and helps avoid many common programming errors involving locks,
  there are occasions where you need to work with locks in a more
  flexible way. For example, some algorithms for traversing
  concurrently accessed data structures require the use of 
 &quot;hand-over-hand&quot; or &quot;chain locking&quot;: you
  acquire the lock of node A, then node B, then release A and acquire
  C, then release B and acquire D and so on.  Implementations of the 
 <code>Lock</code> interface enable the use of such techniques by
  allowing a lock to be acquired and released in different scopes,
  and allowing multiple locks to be acquired and released in any
  order. 
 <p>With this increased flexibility comes additional
  responsibility. The absence of block-structured locking removes the
  automatic release of locks that occurs with <code>synchronized</code>
  methods and statements. In most cases, the following idiom
  should be used: 
 @code
  Lock l = ...;
  l.lock();
  try {
    // access the resource protected by this lock
  } finally {
    l.unlock();
  }
 
@endcode
  When locking and unlocking occur in different scopes, care must be
  taken to ensure that all code that is executed while the lock is
  held is protected by try-finally or try-catch to ensure that the
  lock is released when necessary. 
 <p><code>Lock</code> implementations provide additional functionality
  over the use of <code>synchronized</code> methods and statements by
  providing a non-blocking attempt to acquire a lock (<code>tryLock()</code>
 ), an attempt to acquire the lock that can be
  interrupted (<code>lockInterruptibly</code>, and an attempt to acquire
  the lock that can timeout (<code>TimeUnit)</code>).
  
 <p>A <code>Lock</code> class can also provide behavior and semantics
  that is quite different from that of the implicit monitor lock,
  such as guaranteed ordering, non-reentrant usage, or deadlock
  detection. If an implementation provides such specialized semantics
  then the implementation must document those semantics. 
 <p>Note that <code>Lock</code> instances are just normal objects and can
  themselves be used as the target in a <code>synchronized</code> statement.
  Acquiring the
  monitor lock of a <code>Lock</code> instance has no specified relationship
  with invoking any of the <code>lock</code> methods of that instance.
  It is recommended that to avoid confusion you never use <code>Lock</code>
  instances in this way, except within their own implementation. 
 <p>Except where noted, passing a <code>null</code> value for any
  parameter will result in a <code>NullPointerException</code> being
  thrown. 
 <h3>Memory Synchronization</h3>
  
 <p>All <code>Lock</code> implementations <em>must</em> enforce the same
  memory synchronization semantics as provided by the built-in monitor
  lock, as described in 
 <a href="https://docs.oracle.com/javase/specs/jls/se8/html/jls-17.html#jls-17.4">
  Chapter 17 of 
 <cite>The Java&trade; Language Specification</cite></a>:
  <ul>
  <li>A successful <code>lock</code> operation has the same memory
  synchronization effects as a successful <em>Lock</em> action. 
 <li>A successful <code>unlock</code> operation has the same
  memory synchronization effects as a successful <em>Unlock</em> action. 
 </ul>
  Unsuccessful locking and unlocking operations, and reentrant
  locking/unlocking operations, do not require any memory
  synchronization effects. 
 <h3>Implementation Considerations</h3>
  
 <p>The three forms of lock acquisition (interruptible,
  non-interruptible, and timed) may differ in their performance
  characteristics, ordering guarantees, or other implementation
  qualities.  Further, the ability to interrupt the <em>ongoing</em>
  acquisition of a lock may not be available in a given <code>Lock</code>
  class.  Consequently, an implementation is not required to define
  exactly the same guarantees or semantics for all three forms of
  lock acquisition, nor is it required to support interruption of an
  ongoing lock acquisition.  An implementation is required to clearly
  document the semantics and guarantees provided by each of the
  locking methods. It must also obey the interruption semantics as
  defined in this interface, to the extent that interruption of lock
  acquisition is supported: which is either totally, or only on
  method entry. 
 <p>As interruption generally implies cancellation, and checks for
  interruption are often infrequent, an implementation can favor responding
  to an interrupt over normal method return. This is true even if it can be
  shown that the interrupt occurred after another action may have unblocked
  the thread. An implementation should document this behavior.
 - seealso: ReentrantLock
 - seealso: Condition
 - seealso: ReadWriteLock
 @since 1.5
 @author Doug Lea
 */
@protocol JavaUtilConcurrentLocksLock < JavaObject >

/*!
 @brief Acquires the lock.
 <p>If the lock is not available then the current thread becomes
  disabled for thread scheduling purposes and lies dormant until the
  lock has been acquired. 
 <p><b>Implementation Considerations</b>
  
 <p>A <code>Lock</code> implementation may be able to detect erroneous use
  of the lock, such as an invocation that would cause deadlock, and
  may throw an (unchecked) exception in such circumstances.  The
  circumstances and the exception type must be documented by that 
 <code>Lock</code> implementation.
 */
- (void)lock;

/*!
 @brief Acquires the lock unless the current thread is 
 interrupted.
 <p>Acquires the lock if it is available and returns immediately. 
 <p>If the lock is not available then the current thread becomes
  disabled for thread scheduling purposes and lies dormant until
  one of two things happens: 
 <ul>
  <li>The lock is acquired by the current thread; or 
 <li>Some other thread interrupts the
  current thread, and interruption of lock acquisition is supported. 
 </ul>
  
 <p>If the current thread: 
 <ul>
  <li>has its interrupted status set on entry to this method; or 
 <li>is interrupted while acquiring the
  lock, and interruption of lock acquisition is supported, 
 </ul>
  then <code>InterruptedException</code> is thrown and the current thread's
  interrupted status is cleared. 
 <p><b>Implementation Considerations</b>
  
 <p>The ability to interrupt a lock acquisition in some
  implementations may not be possible, and if possible may be an
  expensive operation.  The programmer should be aware that this
  may be the case. An implementation should document when this is the case. 
 <p>An implementation can favor responding to an interrupt over
  normal method return. 
 <p>A <code>Lock</code> implementation may be able to detect
  erroneous use of the lock, such as an invocation that would
  cause deadlock, and may throw an (unchecked) exception in such
  circumstances.  The circumstances and the exception type must
  be documented by that <code>Lock</code> implementation.
 @throw InterruptedExceptionif the current thread is
          interrupted while acquiring the lock (and interruption
          of lock acquisition is supported)
 */
- (void)lockInterruptibly;

/*!
 @brief Acquires the lock only if it is free at the time of invocation.
 <p>Acquires the lock if it is available and returns immediately
  with the value <code>true</code>.
  If the lock is not available then this method will return
  immediately with the value <code>false</code>.
  
 <p>A typical usage idiom for this method would be: 
 @code
  Lock lock = ...;
  if (lock.tryLock()) {
    try {
      // manipulate protected state
    } finally {
      lock.unlock();
    }
  } else {
    // perform alternative actions
  }
 
@endcode
  This usage ensures that the lock is unlocked if it was acquired, and
  doesn't try to unlock if the lock was not acquired.
 @return <code>true</code> if the lock was acquired and
          <code>false</code> otherwise
 */
- (jboolean)tryLock;

/*!
 @brief Acquires the lock if it is free within the given waiting time and the
  current thread has not been interrupted.
 <p>If the lock is available this method returns immediately
  with the value <code>true</code>.
  If the lock is not available then
  the current thread becomes disabled for thread scheduling
  purposes and lies dormant until one of three things happens: 
 <ul>
  <li>The lock is acquired by the current thread; or 
 <li>Some other thread interrupts the
  current thread, and interruption of lock acquisition is supported; or 
 <li>The specified waiting time elapses 
 </ul>
  
 <p>If the lock is acquired then the value <code>true</code> is returned. 
 <p>If the current thread: 
 <ul>
  <li>has its interrupted status set on entry to this method; or 
 <li>is interrupted while acquiring
  the lock, and interruption of lock acquisition is supported, 
 </ul>
  then <code>InterruptedException</code> is thrown and the current thread's
  interrupted status is cleared. 
 <p>If the specified waiting time elapses then the value <code>false</code>
  is returned.
  If the time is
  less than or equal to zero, the method will not wait at all. 
 <p><b>Implementation Considerations</b>
  
 <p>The ability to interrupt a lock acquisition in some implementations
  may not be possible, and if possible may
  be an expensive operation.
  The programmer should be aware that this may be the case. An
  implementation should document when this is the case. 
 <p>An implementation can favor responding to an interrupt over normal
  method return, or reporting a timeout. 
 <p>A <code>Lock</code> implementation may be able to detect
  erroneous use of the lock, such as an invocation that would cause
  deadlock, and may throw an (unchecked) exception in such circumstances.
  The circumstances and the exception type must be documented by that 
 <code>Lock</code> implementation.
 @param time the maximum time to wait for the lock
 @param unit the time unit of the <code>time</code>  argument
 @return <code>true</code> if the lock was acquired and <code>false</code>
          if the waiting time elapsed before the lock was acquired
 @throw InterruptedExceptionif the current thread is interrupted
          while acquiring the lock (and interruption of lock
          acquisition is supported)
 */
- (jboolean)tryLockWithLong:(jlong)time
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @brief Releases the lock.
 <p><b>Implementation Considerations</b>
  
 <p>A <code>Lock</code> implementation will usually impose
  restrictions on which thread can release a lock (typically only the
  holder of the lock can release it) and may throw
  an (unchecked) exception if the restriction is violated.
  Any restrictions and the exception
  type must be documented by that <code>Lock</code> implementation.
 */
- (void)unlock;

/*!
 @brief Returns a new <code>Condition</code> instance that is bound to this 
 <code>Lock</code> instance.
 <p>Before waiting on the condition the lock must be held by the
  current thread.
  A call to <code>Condition.await()</code> will atomically release the lock
  before waiting and re-acquire the lock before the wait returns. 
 <p><b>Implementation Considerations</b>
  
 <p>The exact operation of the <code>Condition</code> instance depends on
  the <code>Lock</code> implementation and must be documented by that
  implementation.
 @return A new <code>Condition</code> instance for this <code>Lock</code> instance
 @throw UnsupportedOperationExceptionif this <code>Lock</code>
          implementation does not support conditions
 */
- (id<JavaUtilConcurrentLocksCondition>)newCondition OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentLocksLock)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentLocksLock)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentLocksLock")
