//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/Timer.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilTimer")
#ifdef RESTRICT_JavaUtilTimer
#define INCLUDE_ALL_JavaUtilTimer 0
#else
#define INCLUDE_ALL_JavaUtilTimer 1
#endif
#undef RESTRICT_JavaUtilTimer

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilTimer_) && (INCLUDE_ALL_JavaUtilTimer || defined(INCLUDE_JavaUtilTimer))
#define JavaUtilTimer_

@class JavaUtilDate;
@class JavaUtilTimerTask;

/*!
 @brief A facility for threads to schedule tasks for future execution in a
  background thread.Tasks may be scheduled for one-time execution, or for
  repeated execution at regular intervals.
 <p>Corresponding to each <tt>Timer</tt> object is a single background
  thread that is used to execute all of the timer's tasks, sequentially.
  Timer tasks should complete quickly.  If a timer task takes excessive time
  to complete, it "hogs" the timer's task execution thread.  This can, in
  turn, delay the execution of subsequent tasks, which may "bunch up" and
  execute in rapid succession when (and if) the offending task finally
  completes. 
 <p>After the last live reference to a <tt>Timer</tt> object goes away 
 <i>and</i> all outstanding tasks have completed execution, the timer's task
  execution thread terminates gracefully (and becomes subject to garbage
  collection).  However, this can take arbitrarily long to occur.  By
  default, the task execution thread does not run as a <i>daemon thread</i>,
  so it is capable of keeping an application from terminating.  If a caller
  wants to terminate a timer's task execution thread rapidly, the caller
  should invoke the timer's <tt>cancel</tt> method. 
 <p>If the timer's task execution thread terminates unexpectedly, for
  example, because its <tt>stop</tt> method is invoked, any further
  attempt to schedule a task on the timer will result in an 
 <tt>IllegalStateException</tt>, as if the timer's <tt>cancel</tt>
  method had been invoked. 
 <p>This class is thread-safe: multiple threads can share a single 
 <tt>Timer</tt> object without the need for external synchronization. 
 <p>This class does <i>not</i> offer real-time guarantees: it schedules
  tasks using the <tt>Object.wait(long)</tt> method. 
 <p>Java 5.0 introduced the <code>java.util.concurrent</code> package and
  one of the concurrency utilities therein is the <code>ScheduledThreadPoolExecutor</code>
  which is a thread pool for repeatedly
  executing tasks at a given rate or delay.  It is effectively a more
  versatile replacement for the <code>Timer</code>/<code>TimerTask</code>
  combination, as it allows multiple service threads, accepts various
  time units, and doesn't require subclassing <code>TimerTask</code> (just
  implement <code>Runnable</code>).  Configuring <code>ScheduledThreadPoolExecutor</code>
  with one thread makes it equivalent to 
 <code>Timer</code>.
  
 <p>Implementation note: This class scales to large numbers of concurrently
  scheduled tasks (thousands should present no problem).  Internally,
  it uses a binary heap to represent its task queue, so the cost to schedule
  a task is O(log n), where n is the number of concurrently scheduled tasks. 
 <p>Implementation note: All constructors start a timer thread.
 @author Josh Bloch
 - seealso: TimerTask
 - seealso: Object#wait(long)
 @since 1.3
 */
@interface JavaUtilTimer : NSObject

#pragma mark Public

/*!
 @brief Creates a new timer.The associated thread does <i>not</i>
  as a daemon.
 */
- (instancetype __nonnull)init;

/*!
 @brief Creates a new timer whose associated thread may be specified to 
 as a daemon.
 A daemon thread is called for if the timer will be used to
  schedule repeating "maintenance activities", which must be
  performed as long as the application is running, but should not
  prolong the lifetime of the application.
 @param isDaemon true if the associated thread should run as a daemon.
 */
- (instancetype __nonnull)initWithBoolean:(jboolean)isDaemon;

/*!
 @brief Creates a new timer whose associated thread has the specified name.
 The associated thread does <i>not</i>
  as a daemon.
 @param name the name of the associated thread
 @throw NullPointerExceptionif <code>name</code> is null
 @since 1.5
 */
- (instancetype __nonnull)initWithNSString:(NSString *)name;

/*!
 @brief Creates a new timer whose associated thread has the specified name,
  and may be specified to 
 as a daemon.
 @param name the name of the associated thread
 @param isDaemon true if the associated thread should run as a daemon
 @throw NullPointerExceptionif <code>name</code> is null
 @since 1.5
 */
- (instancetype __nonnull)initWithNSString:(NSString *)name
                               withBoolean:(jboolean)isDaemon;

/*!
 @brief Terminates this timer, discarding any currently scheduled tasks.
 Does not interfere with a currently executing task (if it exists).
  Once a timer has been terminated, its execution thread terminates
  gracefully, and no more tasks may be scheduled on it. 
 <p>Note that calling this method from within the run method of a
  timer task that was invoked by this timer absolutely guarantees that
  the ongoing task execution is the last task execution that will ever
  be performed by this timer. 
 <p>This method may be called repeatedly; the second and subsequent
  calls have no effect.
 */
- (void)cancel;

/*!
 @brief Removes all cancelled tasks from this timer's task queue.
 <i>Calling
  this method has no effect on the behavior of the timer</i>, but
  eliminates the references to the cancelled tasks from the queue.
  If there are no external references to these tasks, they become
  eligible for garbage collection. 
 <p>Most programs will have no need to call this method.
  It is designed for use by the rare application that cancels a large
  number of tasks.  Calling this method trades time for space: the
  runtime of the method may be proportional to n + c log n, where n
  is the number of tasks in the queue and c is the number of cancelled
  tasks. 
 <p>Note that it is permissible to call this method from within a
  a task scheduled on this timer.
 @return the number of tasks removed from the queue.
 @since 1.5
 */
- (jint)purge;

/*!
 @brief Schedules the specified task for execution at the specified time.If
  the time is in the past, the task is scheduled for immediate execution.
 @param task task to be scheduled.
 @param time time at which task is to be executed.
 @throw IllegalArgumentExceptionif <tt>time.getTime()</tt> is negative.
 @throw IllegalStateExceptionif task was already scheduled or
          cancelled, timer was cancelled, or timer thread terminated.
 @throw NullPointerExceptionif <code>task</code> or <code>time</code> is null
 */
- (void)scheduleWithJavaUtilTimerTask:(JavaUtilTimerTask *)task
                     withJavaUtilDate:(JavaUtilDate *)time;

/*!
 @brief Schedules the specified task for repeated <i>fixed-delay execution</i>,
  beginning at the specified time.Subsequent executions take place at
  approximately regular intervals, separated by the specified period.
 <p>In fixed-delay execution, each execution is scheduled relative to
  the actual execution time of the previous execution.  If an execution
  is delayed for any reason (such as garbage collection or other
  background activity), subsequent executions will be delayed as well.
  In the long run, the frequency of execution will generally be slightly
  lower than the reciprocal of the specified period (assuming the system
  clock underlying <tt>Object.wait(long)</tt> is accurate).  As a
  consequence of the above, if the scheduled first time is in the past,
  it is scheduled for immediate execution. 
 <p>Fixed-delay execution is appropriate for recurring activities
  that require "smoothness."  In other words, it is appropriate for
  activities where it is more important to keep the frequency accurate
  in the short run than in the long run.  This includes most animation
  tasks, such as blinking a cursor at regular intervals.  It also includes
  tasks wherein regular activity is performed in response to human
  input, such as automatically repeating a character as long as a key
  is held down.
 @param task task to be scheduled.
 @param firstTime First time at which task is to be executed.
 @param period time in milliseconds between successive task executions.
 @throw IllegalArgumentExceptionif <code>firstTime.getTime() < 0</code>, or
          <code>period <= 0</code>
 @throw IllegalStateExceptionif task was already scheduled or
          cancelled, timer was cancelled, or timer thread terminated.
 @throw NullPointerExceptionif <code>task</code> or <code>firstTime</code> is null
 */
- (void)scheduleWithJavaUtilTimerTask:(JavaUtilTimerTask *)task
                     withJavaUtilDate:(JavaUtilDate *)firstTime
                             withLong:(jlong)period;

/*!
 @brief Schedules the specified task for execution after the specified delay.
 @param task task to be scheduled.
 @param delay delay in milliseconds before task is to be executed.
 @throw IllegalArgumentExceptionif <tt>delay</tt> is negative, or
          <tt>delay + System.currentTimeMillis()</tt> is negative.
 @throw IllegalStateExceptionif task was already scheduled or
          cancelled, timer was cancelled, or timer thread terminated.
 @throw NullPointerExceptionif <code>task</code> is null
 */
- (void)scheduleWithJavaUtilTimerTask:(JavaUtilTimerTask *)task
                             withLong:(jlong)delay;

/*!
 @brief Schedules the specified task for repeated <i>fixed-delay execution</i>,
  beginning after the specified delay.Subsequent executions take place
  at approximately regular intervals separated by the specified period.
 <p>In fixed-delay execution, each execution is scheduled relative to
  the actual execution time of the previous execution.  If an execution
  is delayed for any reason (such as garbage collection or other
  background activity), subsequent executions will be delayed as well.
  In the long run, the frequency of execution will generally be slightly
  lower than the reciprocal of the specified period (assuming the system
  clock underlying <tt>Object.wait(long)</tt> is accurate). 
 <p>Fixed-delay execution is appropriate for recurring activities
  that require "smoothness."  In other words, it is appropriate for
  activities where it is more important to keep the frequency accurate
  in the short run than in the long run.  This includes most animation
  tasks, such as blinking a cursor at regular intervals.  It also includes
  tasks wherein regular activity is performed in response to human
  input, such as automatically repeating a character as long as a key
  is held down.
 @param task task to be scheduled.
 @param delay delay in milliseconds before task is to be executed.
 @param period time in milliseconds between successive task executions.
 @throw IllegalArgumentExceptionif <code>delay < 0</code>, or
          <code>delay + System.currentTimeMillis() < 0</code>, or
          <code>period <= 0</code>
 @throw IllegalStateExceptionif task was already scheduled or
          cancelled, timer was cancelled, or timer thread terminated.
 @throw NullPointerExceptionif <code>task</code> is null
 */
- (void)scheduleWithJavaUtilTimerTask:(JavaUtilTimerTask *)task
                             withLong:(jlong)delay
                             withLong:(jlong)period;

/*!
 @brief Schedules the specified task for repeated <i>fixed-rate execution</i>,
  beginning at the specified time.Subsequent executions take place at
  approximately regular intervals, separated by the specified period.
 <p>In fixed-rate execution, each execution is scheduled relative to the
  scheduled execution time of the initial execution.  If an execution is
  delayed for any reason (such as garbage collection or other background
  activity), two or more executions will occur in rapid succession to
  "catch up."  In the long run, the frequency of execution will be
  exactly the reciprocal of the specified period (assuming the system
  clock underlying <tt>Object.wait(long)</tt> is accurate).  As a
  consequence of the above, if the scheduled first time is in the past,
  then any "missed" executions will be scheduled for immediate "catch up"
  execution. 
 <p>Fixed-rate execution is appropriate for recurring activities that
  are sensitive to <i>absolute</i> time, such as ringing a chime every
  hour on the hour, or running scheduled maintenance every day at a
  particular time.  It is also appropriate for recurring activities
  where the total time to perform a fixed number of executions is
  important, such as a countdown timer that ticks once every second for
  ten seconds.  Finally, fixed-rate execution is appropriate for
  scheduling multiple repeating timer tasks that must remain synchronized
  with respect to one another.
 @param task task to be scheduled.
 @param firstTime First time at which task is to be executed.
 @param period time in milliseconds between successive task executions.
 @throw IllegalArgumentExceptionif <code>firstTime.getTime() < 0</code> or
          <code>period <= 0</code>
 @throw IllegalStateExceptionif task was already scheduled or
          cancelled, timer was cancelled, or timer thread terminated.
 @throw NullPointerExceptionif <code>task</code> or <code>firstTime</code> is null
 */
- (void)scheduleAtFixedRateWithJavaUtilTimerTask:(JavaUtilTimerTask *)task
                                withJavaUtilDate:(JavaUtilDate *)firstTime
                                        withLong:(jlong)period;

/*!
 @brief Schedules the specified task for repeated <i>fixed-rate execution</i>,
  beginning after the specified delay.Subsequent executions take place
  at approximately regular intervals, separated by the specified period.
 <p>In fixed-rate execution, each execution is scheduled relative to the
  scheduled execution time of the initial execution.  If an execution is
  delayed for any reason (such as garbage collection or other background
  activity), two or more executions will occur in rapid succession to
  "catch up."  In the long run, the frequency of execution will be
  exactly the reciprocal of the specified period (assuming the system
  clock underlying <tt>Object.wait(long)</tt> is accurate). 
 <p>Fixed-rate execution is appropriate for recurring activities that
  are sensitive to <i>absolute</i> time, such as ringing a chime every
  hour on the hour, or running scheduled maintenance every day at a
  particular time.  It is also appropriate for recurring activities
  where the total time to perform a fixed number of executions is
  important, such as a countdown timer that ticks once every second for
  ten seconds.  Finally, fixed-rate execution is appropriate for
  scheduling multiple repeating timer tasks that must remain synchronized
  with respect to one another.
 @param task task to be scheduled.
 @param delay delay in milliseconds before task is to be executed.
 @param period time in milliseconds between successive task executions.
 @throw IllegalArgumentExceptionif <code>delay < 0</code>, or
          <code>delay + System.currentTimeMillis() < 0</code>, or
          <code>period <= 0</code>
 @throw IllegalStateExceptionif task was already scheduled or
          cancelled, timer was cancelled, or timer thread terminated.
 @throw NullPointerExceptionif <code>task</code> is null
 */
- (void)scheduleAtFixedRateWithJavaUtilTimerTask:(JavaUtilTimerTask *)task
                                        withLong:(jlong)delay
                                        withLong:(jlong)period;

@end

J2OBJC_STATIC_INIT(JavaUtilTimer)

FOUNDATION_EXPORT void JavaUtilTimer_init(JavaUtilTimer *self);

FOUNDATION_EXPORT JavaUtilTimer *new_JavaUtilTimer_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilTimer *create_JavaUtilTimer_init(void);

FOUNDATION_EXPORT void JavaUtilTimer_initWithBoolean_(JavaUtilTimer *self, jboolean isDaemon);

FOUNDATION_EXPORT JavaUtilTimer *new_JavaUtilTimer_initWithBoolean_(jboolean isDaemon) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilTimer *create_JavaUtilTimer_initWithBoolean_(jboolean isDaemon);

FOUNDATION_EXPORT void JavaUtilTimer_initWithNSString_(JavaUtilTimer *self, NSString *name);

FOUNDATION_EXPORT JavaUtilTimer *new_JavaUtilTimer_initWithNSString_(NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilTimer *create_JavaUtilTimer_initWithNSString_(NSString *name);

FOUNDATION_EXPORT void JavaUtilTimer_initWithNSString_withBoolean_(JavaUtilTimer *self, NSString *name, jboolean isDaemon);

FOUNDATION_EXPORT JavaUtilTimer *new_JavaUtilTimer_initWithNSString_withBoolean_(NSString *name, jboolean isDaemon) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilTimer *create_JavaUtilTimer_initWithNSString_withBoolean_(NSString *name, jboolean isDaemon);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTimer)

#endif

#if !defined (JavaUtilTimerThread_) && (INCLUDE_ALL_JavaUtilTimer || defined(INCLUDE_JavaUtilTimerThread))
#define JavaUtilTimerThread_

#define RESTRICT_JavaLangThread 1
#define INCLUDE_JavaLangThread 1
#include "java/lang/Thread.h"

@class JavaLangThreadGroup;
@class JavaUtilTaskQueue;
@protocol JavaLangRunnable;

/*!
 @brief This "helper class" implements the timer's task execution thread, which
  waits for tasks on the timer queue, executions them when they fire,
  reschedules repeating tasks, and removes cancelled tasks and spent
  non-repeating tasks from the queue.
 */
@interface JavaUtilTimerThread : JavaLangThread {
 @public
  /*!
   @brief This flag is set to false by the reaper to inform us that there
  are no more live references to our Timer object.Once this flag
  is true and there are no more tasks in our queue, there is no
  work left for us to do, so we terminate gracefully.
   Note that
  this field is protected by queue's monitor!
   */
  jboolean newTasksMayBeScheduled_;
}

#pragma mark Public

- (void)run;

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaUtilTaskQueue:(JavaUtilTaskQueue *)queue;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangRunnable:(id<JavaLangRunnable>)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangRunnable:(id<JavaLangRunnable>)arg0
                                      withNSString:(NSString *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangThreadGroup:(JavaLangThreadGroup *)arg0
                                 withJavaLangRunnable:(id<JavaLangRunnable>)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangThreadGroup:(JavaLangThreadGroup *)arg0
                                 withJavaLangRunnable:(id<JavaLangRunnable>)arg1
                                         withNSString:(NSString *)arg2 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangThreadGroup:(JavaLangThreadGroup *)arg0
                                 withJavaLangRunnable:(id<JavaLangRunnable>)arg1
                                         withNSString:(NSString *)arg2
                                             withLong:(jlong)arg3 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangThreadGroup:(JavaLangThreadGroup *)arg0
                                         withNSString:(NSString *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilTimerThread)

FOUNDATION_EXPORT void JavaUtilTimerThread_initWithJavaUtilTaskQueue_(JavaUtilTimerThread *self, JavaUtilTaskQueue *queue);

FOUNDATION_EXPORT JavaUtilTimerThread *new_JavaUtilTimerThread_initWithJavaUtilTaskQueue_(JavaUtilTaskQueue *queue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilTimerThread *create_JavaUtilTimerThread_initWithJavaUtilTaskQueue_(JavaUtilTaskQueue *queue);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTimerThread)

#endif

#if !defined (JavaUtilTaskQueue_) && (INCLUDE_ALL_JavaUtilTimer || defined(INCLUDE_JavaUtilTaskQueue))
#define JavaUtilTaskQueue_

@class JavaUtilTimerTask;

/*!
 @brief This class represents a timer task queue: a priority queue of TimerTasks,
  ordered on nextExecutionTime.Each Timer object has one of these, which it
  shares with its TimerThread.
 Internally this class uses a heap, which
  offers log(n) performance for the add, removeMin and rescheduleMin
  operations, and constant time performance for the getMin operation.
 */
@interface JavaUtilTaskQueue : NSObject

#pragma mark Package-Private

- (instancetype __nonnull)init;

/*!
 @brief Adds a new task to the priority queue.
 */
- (void)addWithJavaUtilTimerTask:(JavaUtilTimerTask *)task;

/*!
 @brief Removes all elements from the priority queue.
 */
- (void)clear;

/*!
 @brief Return the ith task in the priority queue, where i ranges from 1 (the
  head task, which is returned by getMin) to the number of tasks on the
  queue, inclusive.
 */
- (JavaUtilTimerTask *)getWithInt:(jint)i;

/*!
 @brief Return the "head task" of the priority queue.
 (The head task is an
  task with the lowest nextExecutionTime.)
 */
- (JavaUtilTimerTask *)getMin;

/*!
 @brief Establishes the heap invariant (described above) in the entire tree,
  assuming nothing about the order of the elements prior to the call.
 */
- (void)heapify;

/*!
 @brief Returns true if the priority queue contains no elements.
 */
- (jboolean)isEmpty;

/*!
 @brief Removes the ith element from queue without regard for maintaining
  the heap invariant.Recall that queue is one-based, so
  1 <= i <= size.
 */
- (void)quickRemoveWithInt:(jint)i;

/*!
 @brief Remove the head task from the priority queue.
 */
- (void)removeMin;

/*!
 @brief Sets the nextExecutionTime associated with the head task to the
  specified value, and adjusts priority queue accordingly.
 */
- (void)rescheduleMinWithLong:(jlong)newTime;

/*!
 @brief Returns the number of tasks currently on the queue.
 */
- (jint)size;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilTaskQueue)

FOUNDATION_EXPORT void JavaUtilTaskQueue_init(JavaUtilTaskQueue *self);

FOUNDATION_EXPORT JavaUtilTaskQueue *new_JavaUtilTaskQueue_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilTaskQueue *create_JavaUtilTaskQueue_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTaskQueue)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilTimer")
