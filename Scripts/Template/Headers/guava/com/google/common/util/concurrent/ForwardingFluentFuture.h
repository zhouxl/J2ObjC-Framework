//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/util/concurrent/ForwardingFluentFuture.java
//

#include "../../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingFluentFuture")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentForwardingFluentFuture
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingFluentFuture 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingFluentFuture 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentForwardingFluentFuture

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentForwardingFluentFuture_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingFluentFuture || defined(INCLUDE_ComGoogleCommonUtilConcurrentForwardingFluentFuture))
#define ComGoogleCommonUtilConcurrentForwardingFluentFuture_

#define RESTRICT_ComGoogleCommonUtilConcurrentFluentFuture 1
#define INCLUDE_ComGoogleCommonUtilConcurrentFluentFuture 1
#include "../../../../../../com/google/common/util/concurrent/FluentFuture.h"

@class JavaUtilConcurrentTimeUnit;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentExecutor;

/*!
 @brief <code>FluentFuture</code> that forwards all calls to a delegate.
 <h3>Extension</h3>
  If you want a class like <code>FluentFuture</code> but with extra methods, we recommend declaring your
  own subclass of <code>ListenableFuture</code>, complete with a method like <code>from</code> to adapt an
  existing <code>ListenableFuture</code>, implemented atop a <code>ForwardingListenableFuture</code> that
  forwards to that future and adds the desired methods.
 */
@interface ComGoogleCommonUtilConcurrentForwardingFluentFuture : ComGoogleCommonUtilConcurrentFluentFuture

#pragma mark Public

- (void)addListenerWithJavaLangRunnable:(id<JavaLangRunnable>)listener
         withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

- (jboolean)cancelWithBoolean:(jboolean)mayInterruptIfRunning;

- (id)get;

- (id)getWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (jboolean)isCancelled;

- (jboolean)isDone;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonUtilConcurrentListenableFuture:(id<ComGoogleCommonUtilConcurrentListenableFuture>)delegate;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentForwardingFluentFuture)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentForwardingFluentFuture_initWithComGoogleCommonUtilConcurrentListenableFuture_(ComGoogleCommonUtilConcurrentForwardingFluentFuture *self, id<ComGoogleCommonUtilConcurrentListenableFuture> delegate);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentForwardingFluentFuture *new_ComGoogleCommonUtilConcurrentForwardingFluentFuture_initWithComGoogleCommonUtilConcurrentListenableFuture_(id<ComGoogleCommonUtilConcurrentListenableFuture> delegate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentForwardingFluentFuture *create_ComGoogleCommonUtilConcurrentForwardingFluentFuture_initWithComGoogleCommonUtilConcurrentListenableFuture_(id<ComGoogleCommonUtilConcurrentListenableFuture> delegate);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentForwardingFluentFuture)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingFluentFuture")
