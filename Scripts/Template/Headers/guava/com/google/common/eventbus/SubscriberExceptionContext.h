//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/eventbus/SubscriberExceptionContext.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonEventbusSubscriberExceptionContext")
#ifdef RESTRICT_ComGoogleCommonEventbusSubscriberExceptionContext
#define INCLUDE_ALL_ComGoogleCommonEventbusSubscriberExceptionContext 0
#else
#define INCLUDE_ALL_ComGoogleCommonEventbusSubscriberExceptionContext 1
#endif
#undef RESTRICT_ComGoogleCommonEventbusSubscriberExceptionContext

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonEventbusSubscriberExceptionContext_) && (INCLUDE_ALL_ComGoogleCommonEventbusSubscriberExceptionContext || defined(INCLUDE_ComGoogleCommonEventbusSubscriberExceptionContext))
#define ComGoogleCommonEventbusSubscriberExceptionContext_

@class ComGoogleCommonEventbusEventBus;
@class JavaLangReflectMethod;

/*!
 @brief Context for an exception thrown by a subscriber.
 @since 16.0
 */
@interface ComGoogleCommonEventbusSubscriberExceptionContext : NSObject

#pragma mark Public

/*!
 @return The event object that caused the subscriber to throw.
 */
- (id)getEvent;

/*!
 @return The <code>EventBus</code> that handled the event and the subscriber. Useful for broadcasting
      a a new event based on the error.
 */
- (ComGoogleCommonEventbusEventBus *)getEventBus;

/*!
 @return The object context that the subscriber was called on.
 */
- (id)getSubscriber;

/*!
 @return The subscribed method that threw the exception.
 */
- (JavaLangReflectMethod *)getSubscriberMethod;

#pragma mark Package-Private

/*!
 @param eventBus The <code>EventBus</code>  that handled the event and the subscriber. Useful for
       broadcasting a a new event based on the error.
 @param event The event object that caused the subscriber to throw.
 @param subscriber The source subscriber context.
 @param subscriberMethod the subscribed method.
 */
- (instancetype __nonnull)initWithComGoogleCommonEventbusEventBus:(ComGoogleCommonEventbusEventBus *)eventBus
                                                           withId:(id)event
                                                           withId:(id)subscriber
                                        withJavaLangReflectMethod:(JavaLangReflectMethod *)subscriberMethod;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonEventbusSubscriberExceptionContext)

FOUNDATION_EXPORT void ComGoogleCommonEventbusSubscriberExceptionContext_initWithComGoogleCommonEventbusEventBus_withId_withId_withJavaLangReflectMethod_(ComGoogleCommonEventbusSubscriberExceptionContext *self, ComGoogleCommonEventbusEventBus *eventBus, id event, id subscriber, JavaLangReflectMethod *subscriberMethod);

FOUNDATION_EXPORT ComGoogleCommonEventbusSubscriberExceptionContext *new_ComGoogleCommonEventbusSubscriberExceptionContext_initWithComGoogleCommonEventbusEventBus_withId_withId_withJavaLangReflectMethod_(ComGoogleCommonEventbusEventBus *eventBus, id event, id subscriber, JavaLangReflectMethod *subscriberMethod) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonEventbusSubscriberExceptionContext *create_ComGoogleCommonEventbusSubscriberExceptionContext_initWithComGoogleCommonEventbusEventBus_withId_withId_withJavaLangReflectMethod_(ComGoogleCommonEventbusEventBus *eventBus, id event, id subscriber, JavaLangReflectMethod *subscriberMethod);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonEventbusSubscriberExceptionContext)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonEventbusSubscriberExceptionContext")
