//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/java/util/concurrent/locks/LockSupport.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentLocksLockSupport")
#ifdef RESTRICT_JavaUtilConcurrentLocksLockSupport
#define INCLUDE_ALL_JavaUtilConcurrentLocksLockSupport 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentLocksLockSupport 1
#endif
#undef RESTRICT_JavaUtilConcurrentLocksLockSupport

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilConcurrentLocksLockSupport_) && (INCLUDE_ALL_JavaUtilConcurrentLocksLockSupport || defined(INCLUDE_JavaUtilConcurrentLocksLockSupport))
#define JavaUtilConcurrentLocksLockSupport_

@class JavaLangThread;

/*!
 @brief Basic thread blocking primitives for creating locks and other
  synchronization classes.
 <p>This class associates, with each thread that uses it, a permit
  (in the sense of the <code>Semaphore</code>
  class). A call to <code>park</code> will return immediately
  if the permit is available, consuming it in the process; otherwise it 
 <em>may</em> block.  A call to <code>unpark</code> makes the permit
  available, if it was not already available. (Unlike with Semaphores
  though, permits do not accumulate. There is at most one.)
  Reliable usage requires the use of volatile (or atomic) variables
  to control when to park or unpark.  Orderings of calls to these
  methods are maintained with respect to volatile variable accesses,
  but not necessarily non-volatile variable accesses. 
 <p>Methods <code>park</code> and <code>unpark</code> provide efficient
  means of blocking and unblocking threads that do not encounter the
  problems that cause the deprecated methods <code>Thread.suspend</code>
  and <code>Thread.resume</code> to be unusable for such purposes: Races
  between one thread invoking <code>park</code> and another thread trying
  to <code>unpark</code> it will preserve liveness, due to the
  permit. Additionally, <code>park</code> will return if the caller's
  thread was interrupted, and timeout versions are supported. The 
 <code>park</code> method may also return at any other time, for "no
  reason", so in general must be invoked within a loop that rechecks
  conditions upon return. In this sense <code>park</code> serves as an
  optimization of a "busy wait" that does not waste as much time
  spinning, but must be paired with an <code>unpark</code> to be
  effective. 
 <p>The three forms of <code>park</code> each also support a 
 <code>blocker</code> object parameter. This object is recorded while
  the thread is blocked to permit monitoring and diagnostic tools to
  identify the reasons that threads are blocked. (Such tools may
  access blockers using method <code>getBlocker(Thread)</code>.)
  The use of these forms rather than the original forms without this
  parameter is strongly encouraged. The normal argument to supply as
  a <code>blocker</code> within a lock implementation is <code>this</code>.
  
 <p>These methods are designed to be used as tools for creating
  higher-level synchronization utilities, and are not in themselves
  useful for most concurrency control applications.  The <code>park</code>
  method is designed for use only in constructions of the form: 
 @code
  while (!canProceed()) {
    // ensure request to unpark is visible to other threads
    ...
    LockSupport.park(this);
  }
 
@endcode
  where no actions by the thread publishing a request to unpark,
  prior to the call to <code>park</code>, entail locking or blocking.
  Because only one permit is associated with each thread, any
  intermediary uses of <code>park</code>, including implicitly via class
  loading, could lead to an unresponsive thread (a "lost unpark"). 
 <p><b>Sample Usage.</b> Here is a sketch of a first-in-first-out
  non-reentrant lock class: 
 @code
  class FIFOMutex {
    private final AtomicBoolean locked = new AtomicBoolean(false);
    private final Queue<Thread> waiters
      = new ConcurrentLinkedQueue<>();
    public void lock() {
      boolean wasInterrupted = false;
      // publish current thread for unparkers
      waiters.add(Thread.currentThread());
      // Block while not first in queue or cannot acquire lock
      while (waiters.peek() != Thread.currentThread() ||
             !locked.compareAndSet(false, true)) {
        LockSupport.park(this);
        // ignore interrupts while waiting
        if (Thread.interrupted())
          wasInterrupted = true;
      }
      waiters.remove();
      // ensure correct interrupt status on return
      if (wasInterrupted)
        Thread.currentThread().interrupt();
    }
    public void unlock() {
      locked.set(false);
      LockSupport.unpark(waiters.peek());
    }
    static {
      // Reduce the risk of "lost unpark" due to classloading
      Class<?> ensureLoaded = LockSupport.class;
    }  }
 
@endcode
 */
@interface JavaUtilConcurrentLocksLockSupport : NSObject

#pragma mark Public

/*!
 @brief Returns the blocker object supplied to the most recent
  invocation of a park method that has not yet unblocked, or null
  if not blocked.The value returned is just a momentary
  snapshot -- the thread may have since unblocked or blocked on a
  different blocker object.
 @param t the thread
 @return the blocker
 @throw NullPointerExceptionif argument is null
 @since 1.6
 */
+ (id)getBlockerWithJavaLangThread:(JavaLangThread *)t;

/*!
 @brief Disables the current thread for thread scheduling purposes unless the
  permit is available.
 <p>If the permit is available then it is consumed and the call
  returns immediately; otherwise the current thread becomes disabled
  for thread scheduling purposes and lies dormant until one of three
  things happens: 
 <ul>
  
 <li>Some other thread invokes <code>unpark</code> with the
  current thread as the target; or 
 <li>Some other thread interrupts
  the current thread; or 
 <li>The call spuriously (that is, for no reason) returns. 
 </ul>
  
 <p>This method does <em>not</em> report which of these caused the
  method to return. Callers should re-check the conditions which caused
  the thread to park in the first place. Callers may also determine,
  for example, the interrupt status of the thread upon return.
 */
+ (void)park;

/*!
 @brief Disables the current thread for thread scheduling purposes unless the
  permit is available.
 <p>If the permit is available then it is consumed and the call returns
  immediately; otherwise
  the current thread becomes disabled for thread scheduling
  purposes and lies dormant until one of three things happens: 
 <ul>
  <li>Some other thread invokes <code>unpark</code> with the
  current thread as the target; or 
 <li>Some other thread interrupts
  the current thread; or 
 <li>The call spuriously (that is, for no reason) returns. 
 </ul>
  
 <p>This method does <em>not</em> report which of these caused the
  method to return. Callers should re-check the conditions which caused
  the thread to park in the first place. Callers may also determine,
  for example, the interrupt status of the thread upon return.
 @param blocker the synchronization object responsible for this         thread parking
 @since 1.6
 */
+ (void)parkWithId:(id)blocker;

/*!
 @brief Disables the current thread for thread scheduling purposes, for up to
  the specified waiting time, unless the permit is available.
 <p>If the permit is available then it is consumed and the call
  returns immediately; otherwise the current thread becomes disabled
  for thread scheduling purposes and lies dormant until one of four
  things happens: 
 <ul>
  <li>Some other thread invokes <code>unpark</code> with the
  current thread as the target; or 
 <li>Some other thread interrupts
  the current thread; or 
 <li>The specified waiting time elapses; or 
 <li>The call spuriously (that is, for no reason) returns. 
 </ul>
  
 <p>This method does <em>not</em> report which of these caused the
  method to return. Callers should re-check the conditions which caused
  the thread to park in the first place. Callers may also determine,
  for example, the interrupt status of the thread, or the elapsed time
  upon return.
 @param nanos the maximum number of nanoseconds to wait
 */
+ (void)parkNanosWithLong:(jlong)nanos;

/*!
 @brief Disables the current thread for thread scheduling purposes, for up to
  the specified waiting time, unless the permit is available.
 <p>If the permit is available then it is consumed and the call
  returns immediately; otherwise the current thread becomes disabled
  for thread scheduling purposes and lies dormant until one of four
  things happens: 
 <ul>
  <li>Some other thread invokes <code>unpark</code> with the
  current thread as the target; or 
 <li>Some other thread interrupts
  the current thread; or 
 <li>The specified waiting time elapses; or 
 <li>The call spuriously (that is, for no reason) returns. 
 </ul>
  
 <p>This method does <em>not</em> report which of these caused the
  method to return. Callers should re-check the conditions which caused
  the thread to park in the first place. Callers may also determine,
  for example, the interrupt status of the thread, or the elapsed time
  upon return.
 @param blocker the synchronization object responsible for this         thread parking
 @param nanos the maximum number of nanoseconds to wait
 @since 1.6
 */
+ (void)parkNanosWithId:(id)blocker
               withLong:(jlong)nanos;

/*!
 @brief Disables the current thread for thread scheduling purposes, until
  the specified deadline, unless the permit is available.
 <p>If the permit is available then it is consumed and the call
  returns immediately; otherwise the current thread becomes disabled
  for thread scheduling purposes and lies dormant until one of four
  things happens: 
 <ul>
  <li>Some other thread invokes <code>unpark</code> with the
  current thread as the target; or 
 <li>Some other thread interrupts
  the current thread; or 
 <li>The specified deadline passes; or 
 <li>The call spuriously (that is, for no reason) returns. 
 </ul>
  
 <p>This method does <em>not</em> report which of these caused the
  method to return. Callers should re-check the conditions which caused
  the thread to park in the first place. Callers may also determine,
  for example, the interrupt status of the thread, or the current time
  upon return.
 @param deadline the absolute time, in milliseconds from the Epoch,         to wait until
 */
+ (void)parkUntilWithLong:(jlong)deadline;

/*!
 @brief Disables the current thread for thread scheduling purposes, until
  the specified deadline, unless the permit is available.
 <p>If the permit is available then it is consumed and the call
  returns immediately; otherwise the current thread becomes disabled
  for thread scheduling purposes and lies dormant until one of four
  things happens: 
 <ul>
  <li>Some other thread invokes <code>unpark</code> with the
  current thread as the target; or 
 <li>Some other thread interrupts the
  current thread; or 
 <li>The specified deadline passes; or 
 <li>The call spuriously (that is, for no reason) returns. 
 </ul>
  
 <p>This method does <em>not</em> report which of these caused the
  method to return. Callers should re-check the conditions which caused
  the thread to park in the first place. Callers may also determine,
  for example, the interrupt status of the thread, or the current time
  upon return.
 @param blocker the synchronization object responsible for this         thread parking
 @param deadline the absolute time, in milliseconds from the Epoch,         to wait until
 @since 1.6
 */
+ (void)parkUntilWithId:(id)blocker
               withLong:(jlong)deadline;

/*!
 @brief Makes available the permit for the given thread, if it
  was not already available.If the thread was blocked on 
 <code>park</code> then it will unblock.
 Otherwise, its next call
  to <code>park</code> is guaranteed not to block. This operation
  is not guaranteed to have any effect at all if the given
  thread has not been started.
 @param thread the thread to unpark, or <code>null</code> , in which case
          this operation has no effect
 */
+ (void)unparkWithJavaLangThread:(JavaLangThread *)thread;

@end

J2OBJC_STATIC_INIT(JavaUtilConcurrentLocksLockSupport)

FOUNDATION_EXPORT void JavaUtilConcurrentLocksLockSupport_unparkWithJavaLangThread_(JavaLangThread *thread);

FOUNDATION_EXPORT void JavaUtilConcurrentLocksLockSupport_parkWithId_(id blocker);

FOUNDATION_EXPORT void JavaUtilConcurrentLocksLockSupport_parkNanosWithId_withLong_(id blocker, jlong nanos);

FOUNDATION_EXPORT void JavaUtilConcurrentLocksLockSupport_parkUntilWithId_withLong_(id blocker, jlong deadline);

FOUNDATION_EXPORT id JavaUtilConcurrentLocksLockSupport_getBlockerWithJavaLangThread_(JavaLangThread *t);

FOUNDATION_EXPORT void JavaUtilConcurrentLocksLockSupport_park(void);

FOUNDATION_EXPORT void JavaUtilConcurrentLocksLockSupport_parkNanosWithLong_(jlong nanos);

FOUNDATION_EXPORT void JavaUtilConcurrentLocksLockSupport_parkUntilWithLong_(jlong deadline);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentLocksLockSupport)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentLocksLockSupport")
