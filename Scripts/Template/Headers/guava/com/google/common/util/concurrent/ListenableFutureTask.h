//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/util/concurrent/ListenableFutureTask.java
//

#include "../../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentListenableFutureTask")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentListenableFutureTask
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentListenableFutureTask 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentListenableFutureTask 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentListenableFutureTask

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentListenableFutureTask_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentListenableFutureTask || defined(INCLUDE_ComGoogleCommonUtilConcurrentListenableFutureTask))
#define ComGoogleCommonUtilConcurrentListenableFutureTask_

#define RESTRICT_JavaUtilConcurrentFutureTask 1
#define INCLUDE_JavaUtilConcurrentFutureTask 1
#include "../../../../../../java/util/concurrent/FutureTask.h"

#define RESTRICT_ComGoogleCommonUtilConcurrentListenableFuture 1
#define INCLUDE_ComGoogleCommonUtilConcurrentListenableFuture 1
#include "../../../../../../com/google/common/util/concurrent/ListenableFuture.h"

@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentCallable;
@protocol JavaUtilConcurrentExecutor;

/*!
 @brief A <code>FutureTask</code> that also implements the <code>ListenableFuture</code> interface.Unlike <code>FutureTask</code>
 , <code>ListenableFutureTask</code> does not provide an overrideable <code>done()</code>
  method.
 For similar functionality, call <code>addListener</code>.
  
 <p>Few users should use this class. It is intended primarily for those who are implementing an 
 <code>ExecutorService</code>. Most users should call <code>ListeningExecutorService.submit</code>
  on a service obtained from <code>MoreExecutors.listeningDecorator</code>
 .
 @author Sven Mawson
 @since 1.0
 */
@interface ComGoogleCommonUtilConcurrentListenableFutureTask : JavaUtilConcurrentFutureTask < ComGoogleCommonUtilConcurrentListenableFuture >

#pragma mark Public

- (void)addListenerWithJavaLangRunnable:(id<JavaLangRunnable>)listener
         withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)exec;

/*!
 @brief Creates a <code>ListenableFutureTask</code> that will upon running, execute the given <code>Callable</code>
 .
 @param callable the callable task
 @since 10.0
 */
+ (ComGoogleCommonUtilConcurrentListenableFutureTask *)createWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)callable;

/*!
 @brief Creates a <code>ListenableFutureTask</code> that will upon running, execute the given <code>Runnable</code>
 , and arrange that <code>get</code> will return the given result on successful completion.
 @param runnable the runnable task
 @param result the result to return on successful completion. If you don't need a particular      result, consider using constructions of the form: 
 <code>ListenableFuture<?> f =
      ListenableFutureTask.create(runnable, null)</code>
 @since 10.0
 */
+ (ComGoogleCommonUtilConcurrentListenableFutureTask *)createWithJavaLangRunnable:(id<JavaLangRunnable>)runnable
                                                                           withId:(id)result;

#pragma mark Protected

/*!
 @brief Internal implementation detail used to invoke the listeners.
 */
- (void)done;

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)callable;

- (instancetype __nonnull)initWithJavaLangRunnable:(id<JavaLangRunnable>)runnable
                                            withId:(id)result;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentListenableFutureTask)

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentListenableFutureTask *ComGoogleCommonUtilConcurrentListenableFutureTask_createWithJavaUtilConcurrentCallable_(id<JavaUtilConcurrentCallable> callable);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentListenableFutureTask *ComGoogleCommonUtilConcurrentListenableFutureTask_createWithJavaLangRunnable_withId_(id<JavaLangRunnable> runnable, id result);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentListenableFutureTask_initWithJavaUtilConcurrentCallable_(ComGoogleCommonUtilConcurrentListenableFutureTask *self, id<JavaUtilConcurrentCallable> callable);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentListenableFutureTask *new_ComGoogleCommonUtilConcurrentListenableFutureTask_initWithJavaUtilConcurrentCallable_(id<JavaUtilConcurrentCallable> callable) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentListenableFutureTask *create_ComGoogleCommonUtilConcurrentListenableFutureTask_initWithJavaUtilConcurrentCallable_(id<JavaUtilConcurrentCallable> callable);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentListenableFutureTask_initWithJavaLangRunnable_withId_(ComGoogleCommonUtilConcurrentListenableFutureTask *self, id<JavaLangRunnable> runnable, id result);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentListenableFutureTask *new_ComGoogleCommonUtilConcurrentListenableFutureTask_initWithJavaLangRunnable_withId_(id<JavaLangRunnable> runnable, id result) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentListenableFutureTask *create_ComGoogleCommonUtilConcurrentListenableFutureTask_initWithJavaLangRunnable_withId_(id<JavaLangRunnable> runnable, id result);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentListenableFutureTask)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentListenableFutureTask")
