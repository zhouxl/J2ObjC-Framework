//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/util/concurrent/CheckedFuture.java
//

#include "../../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentCheckedFuture")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentCheckedFuture
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentCheckedFuture 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentCheckedFuture 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentCheckedFuture

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentCheckedFuture_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentCheckedFuture || defined(INCLUDE_ComGoogleCommonUtilConcurrentCheckedFuture))
#define ComGoogleCommonUtilConcurrentCheckedFuture_

#define RESTRICT_ComGoogleCommonUtilConcurrentListenableFuture 1
#define INCLUDE_ComGoogleCommonUtilConcurrentListenableFuture 1
#include "../../../../../../com/google/common/util/concurrent/ListenableFuture.h"

@class JavaUtilConcurrentTimeUnit;

/*!
 @brief A <code>CheckedFuture</code> is a <code>ListenableFuture</code> that includes versions of the <code>get</code>
  methods that can throw a checked exception.This makes it easier to create a future that executes
  logic which can throw an exception.
 <p><b>Warning:</b> We recommend against using <code>CheckedFuture</code> in new projects. <code>CheckedFuture</code>
  is difficult to build libraries atop. <code>CheckedFuture</code> ports of methods like 
 <code>Futures.transformAsync</code> have historically had bugs, and some of these bugs are necessary,
  unavoidable consequences of the <code>CheckedFuture</code> API. Additionally, <code>CheckedFuture</code>
  encourages users to take exceptions from one thread and rethrow them in another, producing
  confusing stack traces. 
 <p>A common implementation is <code>Futures.immediateCheckedFuture</code>.
  
 <p>Implementations of this interface must adapt the exceptions thrown by <code>Future#get()</code>:
  <code>CancellationException</code>, <code>ExecutionException</code> and <code>InterruptedException</code> into
  the type specified by the <code>X</code> type parameter. 
 <p>This interface also extends the ListenableFuture interface to allow listeners to be added.
  This allows the future to be used as a normal <code>Future</code> or as an asynchronous callback
  mechanism as needed. This allows multiple callbacks to be registered for a particular task, and
  the future will guarantee execution of all listeners when the task completes. 
 <p>For a simpler alternative to CheckedFuture, consider accessing Future values with <code>Futures.getChecked()</code>
 .
 @author Sven Mawson
 @since 1.0
 */
__attribute__((deprecated))
@protocol ComGoogleCommonUtilConcurrentCheckedFuture < ComGoogleCommonUtilConcurrentListenableFuture, JavaObject >

/*!
 @brief Exception checking version of <code>Future.get()</code> that will translate <code>InterruptedException</code>
 , <code>CancellationException</code> and <code>ExecutionException</code> into
  application-specific exceptions.
 @return the result of executing the future.
 @throw Xon interruption, cancellation or execution exceptions.
 */
- (id)checkedGet;

/*!
 @brief Exception checking version of <code>TimeUnit)</code> that will translate <code>InterruptedException</code>
 , <code>CancellationException</code> and <code>ExecutionException</code> into
  application-specific exceptions.On timeout this method throws a normal <code>TimeoutException</code>
 .
 @return the result of executing the future.
 @throw TimeoutExceptionif retrieving the result timed out.
 @throw Xon interruption, cancellation or execution exceptions.
 */
- (id)checkedGetWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentCheckedFuture)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCheckedFuture)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentCheckedFuture")
