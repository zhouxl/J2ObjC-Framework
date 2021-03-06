//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/util/concurrent/AbstractCheckedFuture.java
//

#include "../../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractCheckedFuture")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentAbstractCheckedFuture
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractCheckedFuture 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractCheckedFuture 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentAbstractCheckedFuture

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentAbstractCheckedFuture_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractCheckedFuture || defined(INCLUDE_ComGoogleCommonUtilConcurrentAbstractCheckedFuture))
#define ComGoogleCommonUtilConcurrentAbstractCheckedFuture_

#define RESTRICT_ComGoogleCommonUtilConcurrentForwardingListenableFuture 1
#define INCLUDE_ComGoogleCommonUtilConcurrentForwardingListenableFuture_SimpleForwardingListenableFuture 1
#include "../../../../../../com/google/common/util/concurrent/ForwardingListenableFuture.h"

#define RESTRICT_ComGoogleCommonUtilConcurrentCheckedFuture 1
#define INCLUDE_ComGoogleCommonUtilConcurrentCheckedFuture 1
#include "../../../../../../com/google/common/util/concurrent/CheckedFuture.h"

@class JavaLangException;
@class JavaUtilConcurrentTimeUnit;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;

/*!
 @brief A delegating wrapper around a <code>ListenableFuture</code> that adds support for the <code>checkedGet()</code>
  and <code>TimeUnit)</code> methods.
 @author Sven Mawson
 @since 1.0
 */
__attribute__((deprecated))
@interface ComGoogleCommonUtilConcurrentAbstractCheckedFuture : ComGoogleCommonUtilConcurrentForwardingListenableFuture_SimpleForwardingListenableFuture < ComGoogleCommonUtilConcurrentCheckedFuture >

#pragma mark Public

/*!
 @brief <p>This implementation calls <code>get()</code> and maps that method's standard exceptions to
  instances of type <code>X</code> using <code>mapException</code>.
 <p>In addition, if <code>get</code> throws an <code>InterruptedException</code>, this implementation will
  set the current thread's interrupt status before calling <code>mapException</code>.
 @throw Xif <code>get()</code> throws an <code>InterruptedException</code>, <code>CancellationException</code>
 , or <code>ExecutionException</code>
 */
- (id)checkedGet;

/*!
 @brief <p>This implementation calls <code>TimeUnit)</code> and maps that method's standard
  exceptions (excluding <code>TimeoutException</code>, which is propagated) to instances of type 
 <code>X</code> using <code>mapException</code>.
 <p>In addition, if <code>get</code> throws an <code>InterruptedException</code>, this implementation will
  set the current thread's interrupt status before calling <code>mapException</code>.
 @throw Xif <code>get()</code> throws an <code>InterruptedException</code>, <code>CancellationException</code>
 , or <code>ExecutionException</code>
 */
- (id)checkedGetWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

#pragma mark Protected

/*!
 @brief Constructs an <code>AbstractCheckedFuture</code> that wraps a delegate.
 */
- (instancetype __nonnull)initWithComGoogleCommonUtilConcurrentListenableFuture:(id<ComGoogleCommonUtilConcurrentListenableFuture>)delegate;

/*!
 @brief Translates from an <code>InterruptedException</code>, <code>CancellationException</code> or <code>ExecutionException</code>
  thrown by <code>get</code> to an exception of type <code>X</code> to be thrown by 
 <code>checkedGet</code>.Subclasses must implement this method.
 <p>If <code>e</code> is an <code>InterruptedException</code>, the calling <code>checkedGet</code> method has
  already restored the interrupt after catching the exception. If an implementation of <code>mapException(Exception)</code>
  wishes to swallow the interrupt, it can do so by calling <code>Thread.interrupted()</code>
 .
  
 <p>Subclasses may choose to throw, rather than return, a subclass of <code>RuntimeException</code>
  to allow creating a CheckedFuture that throws both checked and unchecked exceptions.
 */
- (JavaLangException *)mapExceptionWithJavaLangException:(JavaLangException *)e;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentAbstractCheckedFuture)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentAbstractCheckedFuture_initWithComGoogleCommonUtilConcurrentListenableFuture_(ComGoogleCommonUtilConcurrentAbstractCheckedFuture *self, id<ComGoogleCommonUtilConcurrentListenableFuture> delegate);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAbstractCheckedFuture)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractCheckedFuture")
