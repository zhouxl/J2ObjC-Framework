//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/util/concurrent/Service.java
//

#include "../../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentService")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentService
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentService 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentService 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentService

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentService_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentService || defined(INCLUDE_ComGoogleCommonUtilConcurrentService))
#define ComGoogleCommonUtilConcurrentService_

@class ComGoogleCommonUtilConcurrentService_Listener;
@class ComGoogleCommonUtilConcurrentService_State;
@class JavaLangThrowable;
@class JavaUtilConcurrentTimeUnit;
@protocol JavaUtilConcurrentExecutor;

/*!
 @brief An object with an operational state, plus asynchronous <code>startAsync()</code> and <code>stopAsync()</code>
  lifecycle methods to transition between states.Example services include
  webservers, RPC servers and timers.
 <p>The normal lifecycle of a service is: 
 <ul>
    <li>NEW -&gt;
    <li>STARTING -&gt;
    <li>RUNNING -&gt;
    <li>STOPPING -&gt;
    <li>TERMINATED
  </ul>
  
 <p>There are deviations from this if there are failures or if <code>Service.stopAsync</code> is called
  before the <code>Service</code> reaches the RUNNING state. The set of legal
  transitions form a <a href="http://en.wikipedia.org/wiki/Directed_acyclic_graph">DAG</a>,
  therefore every method of the listener will be called at most once. N.B. The <code>State.FAILED</code>
  and <code>State.TERMINATED</code> states are terminal states, once a service enters either of these
  states it cannot ever leave them. 
 <p>Implementors of this interface are strongly encouraged to extend one of the abstract classes
  in this package which implement this interface and make the threading and state management
  easier.
 @author Jesse Wilson
 @author Luke Sandberg
 @since 9.0 (in 1.0 as <code>com.google.common.base.Service</code>)
 */
@protocol ComGoogleCommonUtilConcurrentService < JavaObject >

/*!
 @brief If the service state is <code>State.NEW</code>, this initiates service startup and returns
  immediately.A stopped service may not be restarted.
 @return this
 @throw IllegalStateExceptionif the service is not <code>State.NEW</code>
 @since 15.0
 */
- (id<ComGoogleCommonUtilConcurrentService>)startAsync;

/*!
 @brief Returns <code>true</code> if this service is running.
 */
- (jboolean)isRunning;

/*!
 @brief Returns the lifecycle state of the service.
 */
- (ComGoogleCommonUtilConcurrentService_State *)state;

/*!
 @brief If the service is starting or running,
  this initiates service shutdown and returns immediately.If the service is new
 , it is terminated without having been started nor
  stopped.
 If the service has already been stopped, this method returns immediately without
  taking action.
 @return this
 @since 15.0
 */
- (id<ComGoogleCommonUtilConcurrentService>)stopAsync;

/*!
 @brief Waits for the <code>Service</code> to reach the state.
 @throw IllegalStateExceptionif the service reaches a state from which it is not possible to
      enter the <code>State.RUNNING</code> state. e.g. if the <code>state</code> is <code>State#TERMINATED</code>
  when this method is called then this will throw an IllegalStateException.
 @since 15.0
 */
- (void)awaitRunning;

/*!
 @brief Waits for the <code>Service</code> to reach the state for no more
  than the given time.
 @param timeout the maximum time to wait
 @param unit the time unit of the timeout argument
 @throw TimeoutExceptionif the service has not reached the given state within the deadline
 @throw IllegalStateExceptionif the service reaches a state from which it is not possible to
      enter the <code>RUNNING</code> state. e.g. if the <code>state</code> is <code>State#TERMINATED</code>
  when this method is called then this will throw an IllegalStateException.
 @since 15.0
 */
- (void)awaitRunningWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @brief Waits for the <code>Service</code> to reach the state.
 @throw IllegalStateExceptionif the service fails.
 @since 15.0
 */
- (void)awaitTerminated;

/*!
 @brief Waits for the <code>Service</code> to reach a terminal state (either <code>terminated</code>
  or <code>failed</code>) for no more than the given time.
 @param timeout the maximum time to wait
 @param unit the time unit of the timeout argument
 @throw TimeoutExceptionif the service has not reached the given state within the deadline
 @throw IllegalStateExceptionif the service fails.
 @since 15.0
 */
- (void)awaitTerminatedWithLong:(jlong)timeout
 withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @brief Returns the <code>Throwable</code> that caused this service to fail.
 @throw IllegalStateExceptionif this service's state isn't FAILED.
 @since 14.0
 */
- (JavaLangThrowable *)failureCause;

/*!
 @brief Registers a <code>Listener</code> to be executed on the given
  executor.The listener will have the corresponding transition method called whenever the
  service changes state.
 The listener will not have previous state changes replayed, so it is
  suggested that listeners are added before the service starts. 
 <p><code>addListener</code> guarantees execution ordering across calls to a given listener but not
  across calls to multiple listeners. Specifically, a given listener will have its callbacks
  invoked in the same order as the underlying service enters those states. Additionally, at most
  one of the listener's callbacks will execute at once. However, multiple listeners' callbacks
  may execute concurrently, and listeners may execute in an order different from the one in which
  they were registered. 
 <p>RuntimeExceptions thrown by a listener will be caught and logged. Any exception thrown
  during <code>Executor.execute</code> (e.g., a <code>RejectedExecutionException</code>) will be caught and
  logged.
 @param listener the listener to run when the service changes state is complete
 @param executor the executor in which the listeners callback methods will be run. For fast,      lightweight listeners that would be safe to execute in any thread, consider 
 <code>MoreExecutors.directExecutor</code>
  .
 @since 13.0
 */
- (void)addListenerWithComGoogleCommonUtilConcurrentService_Listener:(ComGoogleCommonUtilConcurrentService_Listener *)listener
                                      withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentService)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentService)

#endif

#if !defined (ComGoogleCommonUtilConcurrentService_State_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentService || defined(INCLUDE_ComGoogleCommonUtilConcurrentService_State))
#define ComGoogleCommonUtilConcurrentService_State_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "../../../../../../java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, ComGoogleCommonUtilConcurrentService_State_Enum) {
  ComGoogleCommonUtilConcurrentService_State_Enum_NEW = 0,
  ComGoogleCommonUtilConcurrentService_State_Enum_STARTING = 1,
  ComGoogleCommonUtilConcurrentService_State_Enum_RUNNING = 2,
  ComGoogleCommonUtilConcurrentService_State_Enum_STOPPING = 3,
  ComGoogleCommonUtilConcurrentService_State_Enum_TERMINATED = 4,
  ComGoogleCommonUtilConcurrentService_State_Enum_FAILED = 5,
};

/*!
 @brief The lifecycle states of a service.
 <p>The ordering of the <code>State</code> enum is defined such that if there is a state transition
  from <code>A -> B</code> then <code>A.compareTo(B) < 0</code>. N.B. The converse is not true, i.e. if 
 <code>A.compareTo(B) < 0</code> then there is <b>not</b> guaranteed to be a valid state transition 
 <code>A -> B</code>.
 @since 9.0 (in 1.0 as <code>com.google.common.base.Service.State</code>)
 */
@interface ComGoogleCommonUtilConcurrentService_State : JavaLangEnum

@property (readonly, class, nonnull) ComGoogleCommonUtilConcurrentService_State *NEW NS_SWIFT_NAME(NEW);
@property (readonly, class, nonnull) ComGoogleCommonUtilConcurrentService_State *STARTING NS_SWIFT_NAME(STARTING);
@property (readonly, class, nonnull) ComGoogleCommonUtilConcurrentService_State *RUNNING NS_SWIFT_NAME(RUNNING);
@property (readonly, class, nonnull) ComGoogleCommonUtilConcurrentService_State *STOPPING NS_SWIFT_NAME(STOPPING);
@property (readonly, class, nonnull) ComGoogleCommonUtilConcurrentService_State *TERMINATED NS_SWIFT_NAME(TERMINATED);
@property (readonly, class, nonnull) ComGoogleCommonUtilConcurrentService_State *FAILED NS_SWIFT_NAME(FAILED);
+ (ComGoogleCommonUtilConcurrentService_State * __nonnull)NEW;

+ (ComGoogleCommonUtilConcurrentService_State * __nonnull)STARTING;

+ (ComGoogleCommonUtilConcurrentService_State * __nonnull)RUNNING;

+ (ComGoogleCommonUtilConcurrentService_State * __nonnull)STOPPING;

+ (ComGoogleCommonUtilConcurrentService_State * __nonnull)TERMINATED;

+ (ComGoogleCommonUtilConcurrentService_State * __nonnull)FAILED;

#pragma mark Public

+ (ComGoogleCommonUtilConcurrentService_State *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

/*!
 @brief Returns true if this state is terminal.
 */
- (jboolean)isTerminal;

- (ComGoogleCommonUtilConcurrentService_State_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentService_State)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentService_State *ComGoogleCommonUtilConcurrentService_State_values_[];

/*!
 @brief A service in this state is inactive.It does minimal work and consumes minimal resources.
 */
inline ComGoogleCommonUtilConcurrentService_State *ComGoogleCommonUtilConcurrentService_State_get_NEW(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonUtilConcurrentService_State, NEW)

/*!
 @brief A service in this state is transitioning to <code>RUNNING</code>.
 */
inline ComGoogleCommonUtilConcurrentService_State *ComGoogleCommonUtilConcurrentService_State_get_STARTING(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonUtilConcurrentService_State, STARTING)

/*!
 @brief A service in this state is operational.
 */
inline ComGoogleCommonUtilConcurrentService_State *ComGoogleCommonUtilConcurrentService_State_get_RUNNING(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonUtilConcurrentService_State, RUNNING)

/*!
 @brief A service in this state is transitioning to <code>TERMINATED</code>.
 */
inline ComGoogleCommonUtilConcurrentService_State *ComGoogleCommonUtilConcurrentService_State_get_STOPPING(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonUtilConcurrentService_State, STOPPING)

/*!
 @brief A service in this state has completed execution normally.It does minimal work and consumes
  minimal resources.
 */
inline ComGoogleCommonUtilConcurrentService_State *ComGoogleCommonUtilConcurrentService_State_get_TERMINATED(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonUtilConcurrentService_State, TERMINATED)

/*!
 @brief A service in this state has encountered a problem and may not be operational.It cannot be
  started nor stopped.
 */
inline ComGoogleCommonUtilConcurrentService_State *ComGoogleCommonUtilConcurrentService_State_get_FAILED(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonUtilConcurrentService_State, FAILED)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonUtilConcurrentService_State_values(void);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentService_State *ComGoogleCommonUtilConcurrentService_State_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentService_State *ComGoogleCommonUtilConcurrentService_State_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentService_State)

#endif

#if !defined (ComGoogleCommonUtilConcurrentService_Listener_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentService || defined(INCLUDE_ComGoogleCommonUtilConcurrentService_Listener))
#define ComGoogleCommonUtilConcurrentService_Listener_

@class ComGoogleCommonUtilConcurrentService_State;
@class JavaLangThrowable;

/*!
 @brief A listener for the various state changes that a <code>Service</code> goes through in its lifecycle.
 <p>All methods are no-ops by default, implementors should override the ones they care about.
 @author Luke Sandberg
 @since 15.0 (present as an interface in 13.0)
 */
@interface ComGoogleCommonUtilConcurrentService_Listener : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Called when the service transitions to the FAILED state.The
  FAILED state is a terminal state in the transition diagram.
 Therefore, if this method is called, no other methods will be called on the <code>Listener</code>.
 @param from The previous state that is being transitioned from. Failure can occur in any      state with the exception of 
 NEW  or TERMINATED
  .
 @param failure The exception that caused the failure.
 */
- (void)failedWithComGoogleCommonUtilConcurrentService_State:(ComGoogleCommonUtilConcurrentService_State *)from
                                       withJavaLangThrowable:(JavaLangThrowable *)failure;

/*!
 @brief Called when the service transitions from STARTING to RUNNING
 .This occurs when a service has successfully started.
 */
- (void)running;

/*!
 @brief Called when the service transitions from NEW to STARTING
 .This occurs when <code>Service.startAsync</code> is called the first
  time.
 */
- (void)starting;

/*!
 @brief Called when the service transitions to the STOPPING state.The
  only valid values for <code>from</code> are STARTING or RUNNING
 .
 This occurs when <code>Service.stopAsync</code> is called.
 @param from The previous state that is being transitioned from.
 */
- (void)stoppingWithComGoogleCommonUtilConcurrentService_State:(ComGoogleCommonUtilConcurrentService_State *)from;

/*!
 @brief Called when the service transitions to the TERMINATED state.
 The TERMINATED state is a terminal state in the transition
  diagram. Therefore, if this method is called, no other methods will be called on the <code>Listener</code>
 .
 @param from The previous state that is being transitioned from. The only valid values for      this are 
 NEW , RUNNING  or STOPPING
  .
 */
- (void)terminatedWithComGoogleCommonUtilConcurrentService_State:(ComGoogleCommonUtilConcurrentService_State *)from;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentService_Listener)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentService_Listener_init(ComGoogleCommonUtilConcurrentService_Listener *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentService_Listener)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentService")
