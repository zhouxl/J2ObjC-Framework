//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/util/concurrent/JdkFutureAdapters.java
//

#include "../../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentJdkFutureAdapters")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentJdkFutureAdapters
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentJdkFutureAdapters 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentJdkFutureAdapters 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentJdkFutureAdapters

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentJdkFutureAdapters_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentJdkFutureAdapters || defined(INCLUDE_ComGoogleCommonUtilConcurrentJdkFutureAdapters))
#define ComGoogleCommonUtilConcurrentJdkFutureAdapters_

@protocol ComGoogleCommonUtilConcurrentListenableFuture;
@protocol JavaUtilConcurrentExecutor;
@protocol JavaUtilConcurrentFuture;

/*!
 @brief Utilities necessary for working with libraries that supply plain <code>Future</code> instances.Note
  that, whenever possible, it is strongly preferred to modify those libraries to return <code>ListenableFuture</code>
  directly.
 @author Sven Mawson
 @since 10.0 (replacing <code>Futures.makeListenable</code>, which existed in 1.0)
 */
@interface ComGoogleCommonUtilConcurrentJdkFutureAdapters : NSObject

#pragma mark Public

/*!
 @brief Assigns a thread to the given <code>Future</code> to provide <code>ListenableFuture</code> functionality.
 <p><b>Warning:</b> If the input future does not already implement <code>ListenableFuture</code>, the
  returned future will emulate <code>ListenableFuture.addListener</code> by taking a thread from an
  internal, unbounded pool at the first call to <code>addListener</code> and holding it until the
  future is done.
  
 <p>Prefer to create <code>ListenableFuture</code> instances with <code>SettableFuture</code>, <code>java.util.concurrent.ExecutorService)</code>
 , <code>ListenableFutureTask</code>
 , <code>AbstractFuture</code>, and other utilities over creating plain <code>Future</code>
  instances to be upgraded to <code>ListenableFuture</code> after the fact.
 */
+ (id<ComGoogleCommonUtilConcurrentListenableFuture>)listenInPoolThreadWithJavaUtilConcurrentFuture:(id<JavaUtilConcurrentFuture>)future;

/*!
 @brief Submits a blocking task for the given <code>Future</code> to provide <code>ListenableFuture</code>
  functionality.
 <p><b>Warning:</b> If the input future does not already implement <code>ListenableFuture</code>, the
  returned future will emulate <code>ListenableFuture.addListener</code> by submitting a task to the
  given executor at the first call to <code>addListener</code>. The task must be started by the
  executor promptly, or else the returned <code>ListenableFuture</code> may fail to work. The task's
  execution consists of blocking until the input future is done, so
  each call to this method may claim and hold a thread for an arbitrary length of time. Use of
  bounded executors or other executors that may fail to execute a task promptly may result in
  deadlocks. 
 <p>Prefer to create <code>ListenableFuture</code> instances with <code>SettableFuture</code>, <code>java.util.concurrent.ExecutorService)</code>
 , <code>ListenableFutureTask</code>
 , <code>AbstractFuture</code>, and other utilities over creating plain <code>Future</code>
  instances to be upgraded to <code>ListenableFuture</code> after the fact.
 @since 12.0
 */
+ (id<ComGoogleCommonUtilConcurrentListenableFuture>)listenInPoolThreadWithJavaUtilConcurrentFuture:(id<JavaUtilConcurrentFuture>)future
                                                                     withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentJdkFutureAdapters)

FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentListenableFuture> ComGoogleCommonUtilConcurrentJdkFutureAdapters_listenInPoolThreadWithJavaUtilConcurrentFuture_(id<JavaUtilConcurrentFuture> future);

FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentListenableFuture> ComGoogleCommonUtilConcurrentJdkFutureAdapters_listenInPoolThreadWithJavaUtilConcurrentFuture_withJavaUtilConcurrentExecutor_(id<JavaUtilConcurrentFuture> future, id<JavaUtilConcurrentExecutor> executor);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentJdkFutureAdapters)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentJdkFutureAdapters")