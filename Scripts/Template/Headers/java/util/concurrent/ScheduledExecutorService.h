//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/java/util/concurrent/ScheduledExecutorService.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentScheduledExecutorService")
#ifdef RESTRICT_JavaUtilConcurrentScheduledExecutorService
#define INCLUDE_ALL_JavaUtilConcurrentScheduledExecutorService 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentScheduledExecutorService 1
#endif
#undef RESTRICT_JavaUtilConcurrentScheduledExecutorService

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilConcurrentScheduledExecutorService_) && (INCLUDE_ALL_JavaUtilConcurrentScheduledExecutorService || defined(INCLUDE_JavaUtilConcurrentScheduledExecutorService))
#define JavaUtilConcurrentScheduledExecutorService_

#define RESTRICT_JavaUtilConcurrentExecutorService 1
#define INCLUDE_JavaUtilConcurrentExecutorService 1
#include "java/util/concurrent/ExecutorService.h"

@class JavaUtilConcurrentTimeUnit;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentCallable;
@protocol JavaUtilConcurrentScheduledFuture;

/*!
 @brief An <code>ExecutorService</code> that can schedule commands to run after a given
  delay, or to execute periodically.
 <p>The <code>schedule</code> methods create tasks with various delays
  and return a task object that can be used to cancel or check
  execution. The <code>scheduleAtFixedRate</code> and 
 <code>scheduleWithFixedDelay</code> methods create and execute tasks
  that run periodically until cancelled. 
 <p>Commands submitted using the <code>Executor.execute(Runnable)</code>
  and <code>ExecutorService</code> <code>submit</code> methods are scheduled
  with a requested delay of zero. Zero and negative delays (but not
  periods) are also allowed in <code>schedule</code> methods, and are
  treated as requests for immediate execution. 
 <p>All <code>schedule</code> methods accept <em>relative</em> delays and
  periods as arguments, not absolute times or dates. It is a simple
  matter to transform an absolute time represented as a <code>java.util.Date</code>
  to the required form. For example, to schedule at
  a certain future <code>date</code>, you can use: <code>schedule(task,
  date.getTime() - System.currentTimeMillis(),
  TimeUnit.MILLISECONDS)</code>
 . Beware however that expiration of a
  relative delay need not coincide with the current <code>Date</code> at
  which the task is enabled due to network time synchronization
  protocols, clock drift, or other factors. 
 <p>The <code>Executors</code> class provides convenient factory methods for
  the ScheduledExecutorService implementations provided in this package. 
 <h3>Usage Example</h3>
  Here is a class with a method that sets up a ScheduledExecutorService
  to beep every ten seconds for an hour: 
 @code
  import static java.util.concurrent.TimeUnit.*;
  class BeeperControl {
    private final ScheduledExecutorService scheduler =
      Executors.newScheduledThreadPool(1);
    public void beepForAnHour() {
      final Runnable beeper = new Runnable() {
        public void run() { System.out.println("beep"); }
      };
      final ScheduledFuture<?> beeperHandle =
        scheduler.scheduleAtFixedRate(beeper, 10, 10, SECONDS);
      scheduler.schedule(new Runnable() {
        public void run() { beeperHandle.cancel(true); }
      }, 60 * 60, SECONDS);    }    }
 
@endcode
 @since 1.5
 @author Doug Lea
 */
@protocol JavaUtilConcurrentScheduledExecutorService < JavaUtilConcurrentExecutorService, JavaObject >

/*!
 @brief Creates and executes a one-shot action that becomes enabled
  after the given delay.
 @param command the task to execute
 @param delay the time from now to delay execution
 @param unit the time unit of the delay parameter
 @return a ScheduledFuture representing pending completion of
          the task and whose <code>get()</code> method will return
          <code>null</code> upon completion
 @throw RejectedExecutionExceptionif the task cannot be
          scheduled for execution
 @throw NullPointerExceptionif command is null
 */
- (id<JavaUtilConcurrentScheduledFuture>)scheduleWithJavaLangRunnable:(id<JavaLangRunnable>)command
                                                             withLong:(jlong)delay
                                       withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @brief Creates and executes a ScheduledFuture that becomes enabled after the
  given delay.
 @param callable the function to execute
 @param delay the time from now to delay execution
 @param unit the time unit of the delay parameter
 @return a ScheduledFuture that can be used to extract result or cancel
 @throw RejectedExecutionExceptionif the task cannot be
          scheduled for execution
 @throw NullPointerExceptionif callable is null
 */
- (id<JavaUtilConcurrentScheduledFuture>)scheduleWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)callable
                                                                       withLong:(jlong)delay
                                                 withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @brief Creates and executes a periodic action that becomes enabled first
  after the given initial delay, and subsequently with the given
  period; that is, executions will commence after 
 <code>initialDelay</code>, then <code>initialDelay + period</code>, then 
 <code>initialDelay + 2 * period</code>, and so on.
 <p>The sequence of task executions continues indefinitely until
  one of the following exceptional completions occur: 
 <ul>
  <li>The task is cancelled
  via the returned future. 
 <li>The executor terminates, also resulting in task cancellation. 
 <li>An execution of the task throws an exception.  In this case
  calling <code>get</code> on the returned future will
  throw <code>ExecutionException</code>.
  </ul>
  Subsequent executions are suppressed.  Subsequent calls to 
 <code>isDone()</code> on the returned future will
  return <code>true</code>.
  
 <p>If any execution of this task takes longer than its period, then
  subsequent executions may start late, but will not concurrently
  execute.
 @param command the task to execute
 @param initialDelay the time to delay first execution
 @param period the period between successive executions
 @param unit the time unit of the initialDelay and period parameters
 @return a ScheduledFuture representing pending completion of
          the series of repeated tasks.  The future's <code>get()</code>
  method will never return normally,
          and will throw an exception upon task cancellation or
          abnormal termination of a task execution.
 @throw RejectedExecutionExceptionif the task cannot be
          scheduled for execution
 @throw NullPointerExceptionif command is null
 @throw IllegalArgumentExceptionif period less than or equal to zero
 */
- (id<JavaUtilConcurrentScheduledFuture>)scheduleAtFixedRateWithJavaLangRunnable:(id<JavaLangRunnable>)command
                                                                        withLong:(jlong)initialDelay
                                                                        withLong:(jlong)period
                                                  withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @brief Creates and executes a periodic action that becomes enabled first
  after the given initial delay, and subsequently with the
  given delay between the termination of one execution and the
  commencement of the next.
 <p>The sequence of task executions continues indefinitely until
  one of the following exceptional completions occur: 
 <ul>
  <li>The task is cancelled
  via the returned future. 
 <li>The executor terminates, also resulting in task cancellation. 
 <li>An execution of the task throws an exception.  In this case
  calling <code>get</code> on the returned future will
  throw <code>ExecutionException</code>.
  </ul>
  Subsequent executions are suppressed.  Subsequent calls to 
 <code>isDone()</code> on the returned future will
  return <code>true</code>.
 @param command the task to execute
 @param initialDelay the time to delay first execution
 @param delay the delay between the termination of one  execution and the commencement of the next
 @param unit the time unit of the initialDelay and delay parameters
 @return a ScheduledFuture representing pending completion of
          the series of repeated tasks.  The future's <code>get()</code>
  method will never return normally,
          and will throw an exception upon task cancellation or
          abnormal termination of a task execution.
 @throw RejectedExecutionExceptionif the task cannot be
          scheduled for execution
 @throw NullPointerExceptionif command is null
 @throw IllegalArgumentExceptionif delay less than or equal to zero
 */
- (id<JavaUtilConcurrentScheduledFuture>)scheduleWithFixedDelayWithJavaLangRunnable:(id<JavaLangRunnable>)command
                                                                           withLong:(jlong)initialDelay
                                                                           withLong:(jlong)delay
                                                     withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentScheduledExecutorService)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentScheduledExecutorService)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentScheduledExecutorService")
