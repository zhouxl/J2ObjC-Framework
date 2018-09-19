//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/eventbus/Dispatcher.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonEventbusDispatcher")
#ifdef RESTRICT_ComGoogleCommonEventbusDispatcher
#define INCLUDE_ALL_ComGoogleCommonEventbusDispatcher 0
#else
#define INCLUDE_ALL_ComGoogleCommonEventbusDispatcher 1
#endif
#undef RESTRICT_ComGoogleCommonEventbusDispatcher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonEventbusDispatcher_) && (INCLUDE_ALL_ComGoogleCommonEventbusDispatcher || defined(INCLUDE_ComGoogleCommonEventbusDispatcher))
#define ComGoogleCommonEventbusDispatcher_

@protocol JavaUtilIterator;

/*!
 @brief Handler for dispatching events to subscribers, providing different event ordering guarantees that
  make sense for different situations.
 <p><b>Note:</b> The dispatcher is orthogonal to the subscriber's <code>Executor</code>. The dispatcher
  controls the order in which events are dispatched, while the executor controls how (i.e. on which
  thread) the subscriber is actually called when an event is dispatched to it.
 @author Colin Decker
 */
@interface ComGoogleCommonEventbusDispatcher : NSObject

#pragma mark Package-Private

- (instancetype __nonnull)init;

/*!
 @brief Dispatches the given <code>event</code> to the given <code>subscribers</code>.
 */
- (void)dispatchWithId:(id)event
  withJavaUtilIterator:(id<JavaUtilIterator>)subscribers;

/*!
 @brief Returns a dispatcher that dispatches events to subscribers immediately as they're posted
  without using an intermediate queue to change the dispatch order.This is effectively a
  depth-first dispatch order, vs. breadth-first when using a queue.
 */
+ (ComGoogleCommonEventbusDispatcher *)immediate;

/*!
 @brief Returns a dispatcher that queues events that are posted in a single global queue.This behavior
  matches the original behavior of AsyncEventBus exactly, but is otherwise not especially useful.
 For async dispatch, an immediate dispatcher should generally be
  preferable.
 */
+ (ComGoogleCommonEventbusDispatcher *)legacyAsync;

/*!
 @brief Returns a dispatcher that queues events that are posted reentrantly on a thread that is already
  dispatching an event, guaranteeing that all events posted on a single thread are dispatched to
  all subscribers in the order they are posted.
 <p>When all subscribers are dispatched to using a <i>direct</i> executor (which dispatches on
  the same thread that posts the event), this yields a breadth-first dispatch order on each
  thread. That is, all subscribers to a single event A will be called before any subscribers to
  any events B and C that are posted to the event bus by the subscribers to A.
 */
+ (ComGoogleCommonEventbusDispatcher *)perThreadDispatchQueue;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonEventbusDispatcher)

FOUNDATION_EXPORT void ComGoogleCommonEventbusDispatcher_init(ComGoogleCommonEventbusDispatcher *self);

FOUNDATION_EXPORT ComGoogleCommonEventbusDispatcher *ComGoogleCommonEventbusDispatcher_perThreadDispatchQueue(void);

FOUNDATION_EXPORT ComGoogleCommonEventbusDispatcher *ComGoogleCommonEventbusDispatcher_legacyAsync(void);

FOUNDATION_EXPORT ComGoogleCommonEventbusDispatcher *ComGoogleCommonEventbusDispatcher_immediate(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonEventbusDispatcher)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonEventbusDispatcher")
