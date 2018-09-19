//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/util/concurrent/MoreExecutors.java
//

#include "../../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentMoreExecutors")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentMoreExecutors
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentMoreExecutors 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentMoreExecutors 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentMoreExecutors

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentMoreExecutors_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentMoreExecutors || defined(INCLUDE_ComGoogleCommonUtilConcurrentMoreExecutors))
#define ComGoogleCommonUtilConcurrentMoreExecutors_

@class ComGoogleCommonUtilConcurrentAbstractFuture;
@class JavaLangThread;
@class JavaUtilConcurrentScheduledThreadPoolExecutor;
@class JavaUtilConcurrentThreadPoolExecutor;
@class JavaUtilConcurrentTimeUnit;
@protocol ComGoogleCommonBaseSupplier;
@protocol ComGoogleCommonUtilConcurrentListeningExecutorService;
@protocol ComGoogleCommonUtilConcurrentListeningScheduledExecutorService;
@protocol JavaLangRunnable;
@protocol JavaUtilCollection;
@protocol JavaUtilConcurrentExecutor;
@protocol JavaUtilConcurrentExecutorService;
@protocol JavaUtilConcurrentScheduledExecutorService;
@protocol JavaUtilConcurrentThreadFactory;

/*!
 @brief Factory and utility methods for <code>java.util.concurrent.Executor</code>, <code>ExecutorService</code>,
  and <code>ThreadFactory</code>.
 @author Eric Fellheimer
 @author Kyle Littlefield
 @author Justin Mahoney
 @since 3.0
 */
@interface ComGoogleCommonUtilConcurrentMoreExecutors : NSObject

#pragma mark Public

/*!
 @brief Add a shutdown hook to wait for thread completion in the given <code>service</code>.
 This is useful if the given service uses daemon threads, and we want to keep the JVM from
  exiting immediately on shutdown, instead giving these daemon threads a chance to terminate
  normally.
 @param service ExecutorService which uses daemon threads
 @param terminationTimeout how long to wait for the executor to finish before terminating the      JVM
 @param timeUnit unit of time for the time parameter
 */
+ (void)addDelayedShutdownHookWithJavaUtilConcurrentExecutorService:(id<JavaUtilConcurrentExecutorService>)service
                                                           withLong:(jlong)terminationTimeout
                                     withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)timeUnit;

/*!
 @brief Returns an <code>Executor</code> that runs each task in the thread that invokes <code>execute</code>
 , as in <code>CallerRunsPolicy</code>.
 <p>This instance is equivalent to: 
 @code
 final class DirectExecutor implements Executor {
    public void execute(Runnable r) {
      r.run();
    }  }  
 
@endcode
  
 <p>This should be preferred to <code>newDirectExecutorService()</code> because implementing the 
 <code>ExecutorService</code> subinterface necessitates significant performance overhead.
 @since 18.0
 */
+ (id<JavaUtilConcurrentExecutor>)directExecutor;

/*!
 @brief Converts the given ThreadPoolExecutor into an ExecutorService that exits when the application
  is complete.It does so by using daemon threads and adding a shutdown hook to wait for their
  completion.
 <p>This method waits 120 seconds before continuing with JVM termination, even if the executor
  has not finished its work. 
 <p>This is mainly for fixed thread pools. See <code>Executors.newFixedThreadPool(int)</code>.
 @param executor the executor to modify to make sure it exits when the application is finished
 @return an unmodifiable version of the input which will not hang the JVM
 */
+ (id<JavaUtilConcurrentExecutorService>)getExitingExecutorServiceWithJavaUtilConcurrentThreadPoolExecutor:(JavaUtilConcurrentThreadPoolExecutor *)executor;

/*!
 @brief Converts the given ThreadPoolExecutor into an ExecutorService that exits when the application
  is complete.It does so by using daemon threads and adding a shutdown hook to wait for their
  completion.
 <p>This is mainly for fixed thread pools. See <code>Executors.newFixedThreadPool(int)</code>.
 @param executor the executor to modify to make sure it exits when the application is finished
 @param terminationTimeout how long to wait for the executor to finish before terminating the      JVM
 @param timeUnit unit of time for the time parameter
 @return an unmodifiable version of the input which will not hang the JVM
 */
+ (id<JavaUtilConcurrentExecutorService>)getExitingExecutorServiceWithJavaUtilConcurrentThreadPoolExecutor:(JavaUtilConcurrentThreadPoolExecutor *)executor
                                                                                                  withLong:(jlong)terminationTimeout
                                                                            withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)timeUnit;

/*!
 @brief Converts the given ScheduledThreadPoolExecutor into a ScheduledExecutorService that exits when
  the application is complete.It does so by using daemon threads and adding a shutdown hook to
  wait for their completion.
 <p>This method waits 120 seconds before continuing with JVM termination, even if the executor
  has not finished its work. 
 <p>This is mainly for fixed thread pools. See <code>Executors.newScheduledThreadPool(int)</code>.
 @param executor the executor to modify to make sure it exits when the application is finished
 @return an unmodifiable version of the input which will not hang the JVM
 */
+ (id<JavaUtilConcurrentScheduledExecutorService>)getExitingScheduledExecutorServiceWithJavaUtilConcurrentScheduledThreadPoolExecutor:(JavaUtilConcurrentScheduledThreadPoolExecutor *)executor;

/*!
 @brief Converts the given ScheduledThreadPoolExecutor into a ScheduledExecutorService that exits when
  the application is complete.It does so by using daemon threads and adding a shutdown hook to
  wait for their completion.
 <p>This is mainly for fixed thread pools. See <code>Executors.newScheduledThreadPool(int)</code>.
 @param executor the executor to modify to make sure it exits when the application is finished
 @param terminationTimeout how long to wait for the executor to finish before terminating the      JVM
 @param timeUnit unit of time for the time parameter
 @return an unmodifiable version of the input which will not hang the JVM
 */
+ (id<JavaUtilConcurrentScheduledExecutorService>)getExitingScheduledExecutorServiceWithJavaUtilConcurrentScheduledThreadPoolExecutor:(JavaUtilConcurrentScheduledThreadPoolExecutor *)executor
                                                                                                                             withLong:(jlong)terminationTimeout
                                                                                                       withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)timeUnit;

/*!
 @brief Creates an <code>ExecutorService</code> whose <code>submit</code> and <code>invokeAll</code> methods submit 
 <code>ListenableFutureTask</code> instances to the given delegate executor.Those methods, as well as 
 <code>execute</code> and <code>invokeAny</code>, are implemented in terms of calls to <code>delegate.execute</code>
 .
 All other methods are forwarded unchanged to the delegate. This implies that
  the returned <code>ListeningExecutorService</code> never calls the delegate's <code>submit</code>, <code>invokeAll</code>
 , and <code>invokeAny</code> methods, so any special handling of tasks must be implemented
  in the delegate's <code>execute</code> method or by wrapping the returned <code>ListeningExecutorService</code>
 .
  
 <p>If the delegate executor was already an instance of <code>ListeningExecutorService</code>, it is
  returned untouched, and the rest of this documentation does not apply.
 @since 10.0
 */
+ (id<ComGoogleCommonUtilConcurrentListeningExecutorService>)listeningDecoratorWithJavaUtilConcurrentExecutorService:(id<JavaUtilConcurrentExecutorService>)delegate;

/*!
 @brief Creates a <code>ScheduledExecutorService</code> whose <code>submit</code> and <code>invokeAll</code> methods
  submit <code>ListenableFutureTask</code> instances to the given delegate executor.Those methods, as
  well as <code>execute</code> and <code>invokeAny</code>, are implemented in terms of calls to <code>delegate.execute</code>
 .
 All other methods are forwarded unchanged to the delegate. This implies that
  the returned <code>ListeningScheduledExecutorService</code> never calls the delegate's <code>submit</code>
 , <code>invokeAll</code>, and <code>invokeAny</code> methods, so any special handling of tasks
  must be implemented in the delegate's <code>execute</code> method or by wrapping the returned <code>ListeningScheduledExecutorService</code>
 .
  
 <p>If the delegate executor was already an instance of <code>ListeningScheduledExecutorService</code>
 , it is returned untouched, and the rest of this
  documentation does not apply.
 @since 10.0
 */
+ (id<ComGoogleCommonUtilConcurrentListeningScheduledExecutorService>)listeningDecoratorWithJavaUtilConcurrentScheduledExecutorService:(id<JavaUtilConcurrentScheduledExecutorService>)delegate;

/*!
 @brief Creates an executor service that runs each task in the thread that invokes <code>execute/submit</code>
 , as in <code>CallerRunsPolicy</code> This applies both to individually submitted
  tasks and to collections of tasks submitted via <code>invokeAll</code> or <code>invokeAny</code>.In the
  latter case, tasks will run serially on the calling thread.
 Tasks are run to completion before
  a <code>Future</code> is returned to the caller (unless the executor has been shutdown). 
 <p>Although all tasks are immediately executed in the thread that submitted the task, this 
 <code>ExecutorService</code> imposes a small locking overhead on each task submission in order to
  implement shutdown and termination behavior. 
 <p>The implementation deviates from the <code>ExecutorService</code> specification with regards to
  the <code>shutdownNow</code> method. First, "best-effort" with regards to canceling running tasks is
  implemented as "no-effort". No interrupts or other attempts are made to stop threads executing
  tasks. Second, the returned list will always be empty, as any submitted task is considered to
  have started execution. This applies also to tasks given to <code>invokeAll</code> or <code>invokeAny</code>
  which are pending serial execution, even the subset of the tasks that have not yet
  started execution. It is unclear from the <code>ExecutorService</code> specification if these should
  be included, and it's much easier to implement the interpretation that they not be. Finally, a
  call to <code>shutdown</code> or <code>shutdownNow</code> may result in concurrent calls to <code>invokeAll/invokeAny</code>
  throwing RejectedExecutionException, although a subset of the tasks may
  already have been executed.
 @since 18.0 (present as MoreExecutors.sameThreadExecutor() since 10.0)
 */
+ (id<ComGoogleCommonUtilConcurrentListeningExecutorService>)newDirectExecutorService OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns an <code>Executor</code> that runs each task executed sequentially, such that no two tasks
  are running concurrently.Submitted tasks have a happens-before order as defined in the Java
  Language Specification.
 <p>The executor uses <code>delegate</code> in order to <code>execute</code> each task in
  turn, and does not create any threads of its own. 
 <p>After execution begins on a thread from the <code>delegate</code> <code>Executor</code>, tasks are
  polled and executed from a task queue until there are no more tasks. The thread will not be
  released until there are no more tasks to run. 
 <p>If a task is submitted while a thread is executing tasks from the task queue, the thread
  will not be released until that submitted task is also complete. 
 <p>If a task is interrupted while a task is running: 
 <ol>
    <li>execution will not stop until the task queue is empty.
    <li>tasks will begin execution with the thread marked as not interrupted - any interruption
        applies only to the task that was running at the point of interruption.   
 <li>if the thread was interrupted before the SequentialExecutor's worker begins execution,
        the interrupt will be restored to the thread after it completes so that its <code>delegate</code>
  Executor may process the interrupt.
    <li>subtasks are run with the thread uninterrupted and interrupts received during execution
        of a task are ignored. 
 </ol>
  
 <p><code>RuntimeException</code>s thrown by tasks are simply logged and the executor keeps trucking.
  If an <code>Error</code> is thrown, the error will propagate and execution will stop until the next
  time a task is submitted. 
 <p>When an <code>Error</code> is thrown by an executed task, previously submitted tasks may never
  run. An attempt will be made to restart execution on the next call to <code>execute</code>. If the 
 <code>delegate</code> has begun to reject execution, the previously submitted tasks may never run,
  despite not throwing a RejectedExecutionException synchronously with the call to <code>execute</code>
 . If this behaviour is problematic, use an Executor with a single thread (e.g. <code>Executors.newSingleThreadExecutor</code>
 ).
 @since 23.3 (since 23.1 as <code>sequentialExecutor</code>)
 */
+ (id<JavaUtilConcurrentExecutor>)newSequentialExecutorWithJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)delegate OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns a default thread factory used to create new threads.
 <p>On AppEngine, returns <code>ThreadManager.currentRequestThreadFactory()</code>. Otherwise,
  returns <code>Executors.defaultThreadFactory()</code>.
 @since 14.0
 */
+ (id<JavaUtilConcurrentThreadFactory>)platformThreadFactory;

/*!
 @brief Shuts down the given executor service gradually, first disabling new submissions and later, if
  necessary, cancelling remaining tasks.
 <p>The method takes the following steps: 
 <ol>
    <li>calls <code>ExecutorService.shutdown()</code>, disabling acceptance of new submitted tasks.
    <li>awaits executor service termination for half of the specified timeout.
    <li>if the timeout expires, it calls <code>ExecutorService.shutdownNow()</code>, cancelling
        pending tasks and interrupting running tasks.   
 <li>awaits executor service termination for the other half of the specified timeout. 
 </ol>
  
 <p>If, at any step of the process, the calling thread is interrupted, the method calls <code>ExecutorService.shutdownNow()</code>
  and returns.
 @param service the <code>ExecutorService</code>  to shut down
 @param timeout the maximum time to wait for the <code>ExecutorService</code>  to terminate
 @param unit the time unit of the timeout argument
 @return <code>true</code> if the <code>ExecutorService</code> was terminated successfully, <code>false</code>
      if the call timed out or was interrupted
 @since 17.0
 */
+ (jboolean)shutdownAndAwaitTerminationWithJavaUtilConcurrentExecutorService:(id<JavaUtilConcurrentExecutorService>)service
                                                                    withLong:(jlong)timeout
                                              withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

#pragma mark Package-Private

/*!
 @brief An implementation of <code>ExecutorService.invokeAny</code> for <code>ListeningExecutorService</code>
  implementations.
 */
+ (id)invokeAnyImplWithComGoogleCommonUtilConcurrentListeningExecutorService:(id<ComGoogleCommonUtilConcurrentListeningExecutorService>)executorService
                                                      withJavaUtilCollection:(id<JavaUtilCollection>)tasks
                                                                 withBoolean:(jboolean)timed
                                                                    withLong:(jlong)timeout
                                              withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @brief Creates a thread using <code>platformThreadFactory</code>, and sets its name to <code>name</code> unless
  changing the name is forbidden by the security manager.
 */
+ (JavaLangThread *)newThreadWithNSString:(NSString *)name
                     withJavaLangRunnable:(id<JavaLangRunnable>)runnable OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns an Executor that will propagate <code>RejectedExecutionException</code> from the delegate
  executor to the given <code>future</code>.
 <p>Note, the returned executor can only be used once.
 */
+ (id<JavaUtilConcurrentExecutor>)rejectionPropagatingExecutorWithJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)delegate
                                             withComGoogleCommonUtilConcurrentAbstractFuture:(ComGoogleCommonUtilConcurrentAbstractFuture *)future;

/*!
 @brief Creates an <code>Executor</code> that renames the <code>threads</code> that its tasks run in.
 <p>The names are retrieved from the <code>nameSupplier</code> on the thread that is being renamed
  right before each task is run. The renaming is best effort, if a <code>SecurityManager</code>
  prevents the renaming then it will be skipped but the tasks will still execute.
 @param executor The executor to decorate
 @param nameSupplier The source of names for each task
 */
+ (id<JavaUtilConcurrentExecutor>)renamingDecoratorWithJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor
                                                  withComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)nameSupplier;

/*!
 @brief Creates an <code>ExecutorService</code> that renames the <code>threads</code> that its tasks run
  in.
 <p>The names are retrieved from the <code>nameSupplier</code> on the thread that is being renamed
  right before each task is run. The renaming is best effort, if a <code>SecurityManager</code>
  prevents the renaming then it will be skipped but the tasks will still execute.
 @param service The executor to decorate
 @param nameSupplier The source of names for each task
 */
+ (id<JavaUtilConcurrentExecutorService>)renamingDecoratorWithJavaUtilConcurrentExecutorService:(id<JavaUtilConcurrentExecutorService>)service
                                                                withComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)nameSupplier;

/*!
 @brief Creates a <code>ScheduledExecutorService</code> that renames the <code>threads</code> that its
  tasks run in.
 <p>The names are retrieved from the <code>nameSupplier</code> on the thread that is being renamed
  right before each task is run. The renaming is best effort, if a <code>SecurityManager</code>
  prevents the renaming then it will be skipped but the tasks will still execute.
 @param service The executor to decorate
 @param nameSupplier The source of names for each task
 */
+ (id<JavaUtilConcurrentScheduledExecutorService>)renamingDecoratorWithJavaUtilConcurrentScheduledExecutorService:(id<JavaUtilConcurrentScheduledExecutorService>)service
                                                                                  withComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)nameSupplier;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentMoreExecutors)

FOUNDATION_EXPORT id<JavaUtilConcurrentExecutorService> ComGoogleCommonUtilConcurrentMoreExecutors_getExitingExecutorServiceWithJavaUtilConcurrentThreadPoolExecutor_withLong_withJavaUtilConcurrentTimeUnit_(JavaUtilConcurrentThreadPoolExecutor *executor, jlong terminationTimeout, JavaUtilConcurrentTimeUnit *timeUnit);

FOUNDATION_EXPORT id<JavaUtilConcurrentExecutorService> ComGoogleCommonUtilConcurrentMoreExecutors_getExitingExecutorServiceWithJavaUtilConcurrentThreadPoolExecutor_(JavaUtilConcurrentThreadPoolExecutor *executor);

FOUNDATION_EXPORT id<JavaUtilConcurrentScheduledExecutorService> ComGoogleCommonUtilConcurrentMoreExecutors_getExitingScheduledExecutorServiceWithJavaUtilConcurrentScheduledThreadPoolExecutor_withLong_withJavaUtilConcurrentTimeUnit_(JavaUtilConcurrentScheduledThreadPoolExecutor *executor, jlong terminationTimeout, JavaUtilConcurrentTimeUnit *timeUnit);

FOUNDATION_EXPORT id<JavaUtilConcurrentScheduledExecutorService> ComGoogleCommonUtilConcurrentMoreExecutors_getExitingScheduledExecutorServiceWithJavaUtilConcurrentScheduledThreadPoolExecutor_(JavaUtilConcurrentScheduledThreadPoolExecutor *executor);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentMoreExecutors_addDelayedShutdownHookWithJavaUtilConcurrentExecutorService_withLong_withJavaUtilConcurrentTimeUnit_(id<JavaUtilConcurrentExecutorService> service, jlong terminationTimeout, JavaUtilConcurrentTimeUnit *timeUnit);

FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentListeningExecutorService> ComGoogleCommonUtilConcurrentMoreExecutors_newDirectExecutorService(void);

FOUNDATION_EXPORT id<JavaUtilConcurrentExecutor> ComGoogleCommonUtilConcurrentMoreExecutors_directExecutor(void);

FOUNDATION_EXPORT id<JavaUtilConcurrentExecutor> ComGoogleCommonUtilConcurrentMoreExecutors_newSequentialExecutorWithJavaUtilConcurrentExecutor_(id<JavaUtilConcurrentExecutor> delegate);

FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentListeningExecutorService> ComGoogleCommonUtilConcurrentMoreExecutors_listeningDecoratorWithJavaUtilConcurrentExecutorService_(id<JavaUtilConcurrentExecutorService> delegate);

FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentListeningScheduledExecutorService> ComGoogleCommonUtilConcurrentMoreExecutors_listeningDecoratorWithJavaUtilConcurrentScheduledExecutorService_(id<JavaUtilConcurrentScheduledExecutorService> delegate);

FOUNDATION_EXPORT id ComGoogleCommonUtilConcurrentMoreExecutors_invokeAnyImplWithComGoogleCommonUtilConcurrentListeningExecutorService_withJavaUtilCollection_withBoolean_withLong_withJavaUtilConcurrentTimeUnit_(id<ComGoogleCommonUtilConcurrentListeningExecutorService> executorService, id<JavaUtilCollection> tasks, jboolean timed, jlong timeout, JavaUtilConcurrentTimeUnit *unit);

FOUNDATION_EXPORT id<JavaUtilConcurrentThreadFactory> ComGoogleCommonUtilConcurrentMoreExecutors_platformThreadFactory(void);

FOUNDATION_EXPORT JavaLangThread *ComGoogleCommonUtilConcurrentMoreExecutors_newThreadWithNSString_withJavaLangRunnable_(NSString *name, id<JavaLangRunnable> runnable);

FOUNDATION_EXPORT id<JavaUtilConcurrentExecutor> ComGoogleCommonUtilConcurrentMoreExecutors_renamingDecoratorWithJavaUtilConcurrentExecutor_withComGoogleCommonBaseSupplier_(id<JavaUtilConcurrentExecutor> executor, id<ComGoogleCommonBaseSupplier> nameSupplier);

FOUNDATION_EXPORT id<JavaUtilConcurrentExecutorService> ComGoogleCommonUtilConcurrentMoreExecutors_renamingDecoratorWithJavaUtilConcurrentExecutorService_withComGoogleCommonBaseSupplier_(id<JavaUtilConcurrentExecutorService> service, id<ComGoogleCommonBaseSupplier> nameSupplier);

FOUNDATION_EXPORT id<JavaUtilConcurrentScheduledExecutorService> ComGoogleCommonUtilConcurrentMoreExecutors_renamingDecoratorWithJavaUtilConcurrentScheduledExecutorService_withComGoogleCommonBaseSupplier_(id<JavaUtilConcurrentScheduledExecutorService> service, id<ComGoogleCommonBaseSupplier> nameSupplier);

FOUNDATION_EXPORT jboolean ComGoogleCommonUtilConcurrentMoreExecutors_shutdownAndAwaitTerminationWithJavaUtilConcurrentExecutorService_withLong_withJavaUtilConcurrentTimeUnit_(id<JavaUtilConcurrentExecutorService> service, jlong timeout, JavaUtilConcurrentTimeUnit *unit);

FOUNDATION_EXPORT id<JavaUtilConcurrentExecutor> ComGoogleCommonUtilConcurrentMoreExecutors_rejectionPropagatingExecutorWithJavaUtilConcurrentExecutor_withComGoogleCommonUtilConcurrentAbstractFuture_(id<JavaUtilConcurrentExecutor> delegate, ComGoogleCommonUtilConcurrentAbstractFuture *future);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentMoreExecutors)

#endif

#if !defined (ComGoogleCommonUtilConcurrentMoreExecutors_Application_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentMoreExecutors || defined(INCLUDE_ComGoogleCommonUtilConcurrentMoreExecutors_Application))
#define ComGoogleCommonUtilConcurrentMoreExecutors_Application_

@class JavaLangThread;
@class JavaUtilConcurrentScheduledThreadPoolExecutor;
@class JavaUtilConcurrentThreadPoolExecutor;
@class JavaUtilConcurrentTimeUnit;
@protocol JavaUtilConcurrentExecutorService;
@protocol JavaUtilConcurrentScheduledExecutorService;

/*!
 @brief Represents the current application to register shutdown hooks.
 */
@interface ComGoogleCommonUtilConcurrentMoreExecutors_Application : NSObject

#pragma mark Package-Private

- (instancetype __nonnull)init;

- (void)addDelayedShutdownHookWithJavaUtilConcurrentExecutorService:(id<JavaUtilConcurrentExecutorService>)service
                                                           withLong:(jlong)terminationTimeout
                                     withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)timeUnit;

- (void)addShutdownHookWithJavaLangThread:(JavaLangThread *)hook;

- (id<JavaUtilConcurrentExecutorService>)getExitingExecutorServiceWithJavaUtilConcurrentThreadPoolExecutor:(JavaUtilConcurrentThreadPoolExecutor *)executor;

- (id<JavaUtilConcurrentExecutorService>)getExitingExecutorServiceWithJavaUtilConcurrentThreadPoolExecutor:(JavaUtilConcurrentThreadPoolExecutor *)executor
                                                                                                  withLong:(jlong)terminationTimeout
                                                                            withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)timeUnit;

- (id<JavaUtilConcurrentScheduledExecutorService>)getExitingScheduledExecutorServiceWithJavaUtilConcurrentScheduledThreadPoolExecutor:(JavaUtilConcurrentScheduledThreadPoolExecutor *)executor;

- (id<JavaUtilConcurrentScheduledExecutorService>)getExitingScheduledExecutorServiceWithJavaUtilConcurrentScheduledThreadPoolExecutor:(JavaUtilConcurrentScheduledThreadPoolExecutor *)executor
                                                                                                                             withLong:(jlong)terminationTimeout
                                                                                                       withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)timeUnit;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentMoreExecutors_Application)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentMoreExecutors_Application_init(ComGoogleCommonUtilConcurrentMoreExecutors_Application *self);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentMoreExecutors_Application *new_ComGoogleCommonUtilConcurrentMoreExecutors_Application_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentMoreExecutors_Application *create_ComGoogleCommonUtilConcurrentMoreExecutors_Application_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentMoreExecutors_Application)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentMoreExecutors")
