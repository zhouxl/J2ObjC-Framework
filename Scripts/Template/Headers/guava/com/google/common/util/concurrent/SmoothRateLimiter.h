//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/util/concurrent/SmoothRateLimiter.java
//

#include "../../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentSmoothRateLimiter")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentSmoothRateLimiter
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentSmoothRateLimiter 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentSmoothRateLimiter 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentSmoothRateLimiter
#ifdef INCLUDE_ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty
#define INCLUDE_ComGoogleCommonUtilConcurrentSmoothRateLimiter 1
#endif
#ifdef INCLUDE_ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp
#define INCLUDE_ComGoogleCommonUtilConcurrentSmoothRateLimiter 1
#endif

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentSmoothRateLimiter_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentSmoothRateLimiter || defined(INCLUDE_ComGoogleCommonUtilConcurrentSmoothRateLimiter))
#define ComGoogleCommonUtilConcurrentSmoothRateLimiter_

#define RESTRICT_ComGoogleCommonUtilConcurrentRateLimiter 1
#define INCLUDE_ComGoogleCommonUtilConcurrentRateLimiter 1
#include "../../../../../../com/google/common/util/concurrent/RateLimiter.h"

@interface ComGoogleCommonUtilConcurrentSmoothRateLimiter : ComGoogleCommonUtilConcurrentRateLimiter {
 @public
  jdouble storedPermits_;
  jdouble maxPermits_;
  jdouble stableIntervalMicros_;
}

#pragma mark Package-Private

- (jdouble)coolDownIntervalMicros;

- (jdouble)doGetRate;

- (void)doSetRateWithDouble:(jdouble)permitsPerSecond
                 withDouble:(jdouble)stableIntervalMicros;

- (void)doSetRateWithDouble:(jdouble)permitsPerSecond
                   withLong:(jlong)nowMicros;

- (jlong)queryEarliestAvailableWithLong:(jlong)nowMicros;

- (jlong)reserveEarliestAvailableWithInt:(jint)requiredPermits
                                withLong:(jlong)nowMicros;

- (void)resyncWithLong:(jlong)nowMicros;

- (jlong)storedPermitsToWaitTimeWithDouble:(jdouble)storedPermits
                                withDouble:(jdouble)permitsToTake;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentSmoothRateLimiter)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentSmoothRateLimiter)

#endif

#if !defined (ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentSmoothRateLimiter || defined(INCLUDE_ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp))
#define ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp_

@class ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch;
@class JavaUtilConcurrentTimeUnit;

@interface ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp : ComGoogleCommonUtilConcurrentSmoothRateLimiter

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch:(ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *)stopwatch
                                                                          withLong:(jlong)warmupPeriod
                                                    withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)timeUnit
                                                                        withDouble:(jdouble)coldFactor;

- (jdouble)coolDownIntervalMicros;

- (void)doSetRateWithDouble:(jdouble)permitsPerSecond
                 withDouble:(jdouble)stableIntervalMicros;

- (jlong)storedPermitsToWaitTimeWithDouble:(jdouble)storedPermits
                                withDouble:(jdouble)permitsToTake;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp_initWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch_withLong_withJavaUtilConcurrentTimeUnit_withDouble_(ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp *self, ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *stopwatch, jlong warmupPeriod, JavaUtilConcurrentTimeUnit *timeUnit, jdouble coldFactor);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp *new_ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp_initWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch_withLong_withJavaUtilConcurrentTimeUnit_withDouble_(ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *stopwatch, jlong warmupPeriod, JavaUtilConcurrentTimeUnit *timeUnit, jdouble coldFactor) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp *create_ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp_initWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch_withLong_withJavaUtilConcurrentTimeUnit_withDouble_(ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *stopwatch, jlong warmupPeriod, JavaUtilConcurrentTimeUnit *timeUnit, jdouble coldFactor);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp)

#endif

#if !defined (ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentSmoothRateLimiter || defined(INCLUDE_ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty))
#define ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty_

@class ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch;

@interface ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty : ComGoogleCommonUtilConcurrentSmoothRateLimiter {
 @public
  jdouble maxBurstSeconds_;
}

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch:(ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *)stopwatch
                                                                        withDouble:(jdouble)maxBurstSeconds;

- (jdouble)coolDownIntervalMicros;

- (void)doSetRateWithDouble:(jdouble)permitsPerSecond
                 withDouble:(jdouble)stableIntervalMicros;

- (jlong)storedPermitsToWaitTimeWithDouble:(jdouble)storedPermits
                                withDouble:(jdouble)permitsToTake;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty_initWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch_withDouble_(ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty *self, ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *stopwatch, jdouble maxBurstSeconds);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty *new_ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty_initWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch_withDouble_(ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *stopwatch, jdouble maxBurstSeconds) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty *create_ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty_initWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch_withDouble_(ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *stopwatch, jdouble maxBurstSeconds);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentSmoothRateLimiter")
