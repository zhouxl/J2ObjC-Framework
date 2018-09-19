//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/util/concurrent/AggregateFutureState.java
//

#include "../../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAggregateFutureState")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentAggregateFutureState
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAggregateFutureState 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAggregateFutureState 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentAggregateFutureState

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentAggregateFutureState_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentAggregateFutureState || defined(INCLUDE_ComGoogleCommonUtilConcurrentAggregateFutureState))
#define ComGoogleCommonUtilConcurrentAggregateFutureState_

@protocol JavaUtilSet;

/*!
 @brief A helper which does some thread-safe operations for aggregate futures, which must be implemented
  differently in GWT.Namely:
  
 <ul>
    <li>Lazily initializes a set of seen exceptions
    <li>Decrements a counter atomically 
 </ul>
 */
@interface ComGoogleCommonUtilConcurrentAggregateFutureState : NSObject

#pragma mark Package-Private

- (instancetype __nonnull)initWithInt:(jint)remainingFutures;

/*!
 @brief Populates <code>seen</code> with the exception that was passed to <code>setException</code>.
 */
- (void)addInitialExceptionWithJavaUtilSet:(id<JavaUtilSet>)seen;

- (jint)decrementRemainingAndGet;

- (id<JavaUtilSet>)getOrInitSeenExceptions;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentAggregateFutureState)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentAggregateFutureState_initWithInt_(ComGoogleCommonUtilConcurrentAggregateFutureState *self, jint remainingFutures);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAggregateFutureState)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAggregateFutureState")
