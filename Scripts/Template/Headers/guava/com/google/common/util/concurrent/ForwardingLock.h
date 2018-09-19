//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/util/concurrent/ForwardingLock.java
//

#include "../../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingLock")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentForwardingLock
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingLock 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingLock 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentForwardingLock

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentForwardingLock_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingLock || defined(INCLUDE_ComGoogleCommonUtilConcurrentForwardingLock))
#define ComGoogleCommonUtilConcurrentForwardingLock_

#define RESTRICT_JavaUtilConcurrentLocksLock 1
#define INCLUDE_JavaUtilConcurrentLocksLock 1
#include "../../../../../../java/util/concurrent/locks/Lock.h"

@class JavaUtilConcurrentTimeUnit;
@protocol JavaUtilConcurrentLocksCondition;

/*!
 @brief Forwarding wrapper around a <code>Lock</code>.
 */
@interface ComGoogleCommonUtilConcurrentForwardingLock : NSObject < JavaUtilConcurrentLocksLock >

#pragma mark Public

- (void)lock;

- (void)lockInterruptibly;

- (id<JavaUtilConcurrentLocksCondition>)newCondition OBJC_METHOD_FAMILY_NONE;

- (jboolean)tryLock;

- (jboolean)tryLockWithLong:(jlong)time
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (void)unlock;

#pragma mark Package-Private

- (instancetype __nonnull)init;

- (id<JavaUtilConcurrentLocksLock>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentForwardingLock)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentForwardingLock_init(ComGoogleCommonUtilConcurrentForwardingLock *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentForwardingLock)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingLock")
