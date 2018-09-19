//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/util/concurrent/SequentialExecutor.java
//

#include "../../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentSequentialExecutor")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentSequentialExecutor
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentSequentialExecutor 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentSequentialExecutor 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentSequentialExecutor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentSequentialExecutor_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentSequentialExecutor || defined(INCLUDE_ComGoogleCommonUtilConcurrentSequentialExecutor))
#define ComGoogleCommonUtilConcurrentSequentialExecutor_

#define RESTRICT_JavaUtilConcurrentExecutor 1
#define INCLUDE_JavaUtilConcurrentExecutor 1
#include "../../../../../../java/util/concurrent/Executor.h"

@protocol JavaLangRunnable;

/*!
 @brief Executor ensuring that all Runnables submitted are executed in order, using the provided
  Executor, and sequentially such that no two will ever be running at the same time.
 <p>Tasks submitted to <code>execute(Runnable)</code> are executed in FIFO order. 
 <p>The execution of tasks is done by one thread as long as there are tasks left in the queue.
  When a task is interrupted, execution of subsequent tasks
  continues. See <code>QueueWorker.workOnQueue</code> for details. 
 <p><code>RuntimeException</code>s thrown by tasks are simply logged and the executor keeps trucking.
  If an <code>Error</code> is thrown, the error will propagate and execution will stop until it is
  restarted by a call to <code>execute</code>.
 */
@interface ComGoogleCommonUtilConcurrentSequentialExecutor : NSObject < JavaUtilConcurrentExecutor >

#pragma mark Public

/*!
 @brief Adds a task to the queue and makes sure a worker thread is running.
 <p>If this method throws, e.g. a <code>RejectedExecutionException</code> from the delegate executor,
  execution of tasks will stop until a call to this method or to <code>resume()</code> is made.
 */
- (void)executeWithJavaLangRunnable:(id<JavaLangRunnable>)task;

#pragma mark Package-Private

/*!
 @brief Use <code>MoreExecutors.newSequentialExecutor</code>
 */
- (instancetype __nonnull)initWithJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentSequentialExecutor)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentSequentialExecutor_initWithJavaUtilConcurrentExecutor_(ComGoogleCommonUtilConcurrentSequentialExecutor *self, id<JavaUtilConcurrentExecutor> executor);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentSequentialExecutor *new_ComGoogleCommonUtilConcurrentSequentialExecutor_initWithJavaUtilConcurrentExecutor_(id<JavaUtilConcurrentExecutor> executor) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentSequentialExecutor *create_ComGoogleCommonUtilConcurrentSequentialExecutor_initWithJavaUtilConcurrentExecutor_(id<JavaUtilConcurrentExecutor> executor);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentSequentialExecutor)

#endif

#if !defined (ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentSequentialExecutor || defined(INCLUDE_ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState))
#define ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "../../../../../../java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState_Enum) {
  ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState_Enum_IDLE = 0,
  ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState_Enum_QUEUING = 1,
  ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState_Enum_QUEUED = 2,
  ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState_Enum_RUNNING = 3,
};

@interface ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState : JavaLangEnum

@property (readonly, class, nonnull) ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState *IDLE NS_SWIFT_NAME(IDLE);
@property (readonly, class, nonnull) ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState *QUEUING NS_SWIFT_NAME(QUEUING);
@property (readonly, class, nonnull) ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState *QUEUED NS_SWIFT_NAME(QUEUED);
@property (readonly, class, nonnull) ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState *RUNNING NS_SWIFT_NAME(RUNNING);
+ (ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState * __nonnull)IDLE;

+ (ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState * __nonnull)QUEUING;

+ (ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState * __nonnull)QUEUED;

+ (ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState * __nonnull)RUNNING;

#pragma mark Public

+ (ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState *ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState_values_[];

/*!
 @brief Runnable is not running and not queued for execution
 */
inline ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState *ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState_get_IDLE(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState, IDLE)

/*!
 @brief Runnable is not running, but is being queued for execution
 */
inline ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState *ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState_get_QUEUING(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState, QUEUING)

/*!
 @brief runnable has been submitted but has not yet begun execution
 */
inline ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState *ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState_get_QUEUED(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState, QUEUED)

inline ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState *ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState_get_RUNNING(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState, RUNNING)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState_values(void);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState *ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState *ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentSequentialExecutor")
