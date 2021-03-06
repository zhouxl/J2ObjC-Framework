//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/verification/Timeout.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoVerificationTimeout")
#ifdef RESTRICT_OrgMockitoVerificationTimeout
#define INCLUDE_ALL_OrgMockitoVerificationTimeout 0
#else
#define INCLUDE_ALL_OrgMockitoVerificationTimeout 1
#endif
#undef RESTRICT_OrgMockitoVerificationTimeout

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoVerificationTimeout_) && (INCLUDE_ALL_OrgMockitoVerificationTimeout || defined(INCLUDE_OrgMockitoVerificationTimeout))
#define OrgMockitoVerificationTimeout_

#define RESTRICT_OrgMockitoVerificationVerificationWithTimeout 1
#define INCLUDE_OrgMockitoVerificationVerificationWithTimeout 1
#include "../../../org/mockito/verification/VerificationWithTimeout.h"

@class OrgMockitoInternalVerificationVerificationWithTimeoutImpl;
@protocol OrgMockitoInternalVerificationApiVerificationData;
@protocol OrgMockitoVerificationVerificationMode;

/*!
 @brief See the javadoc for <code>VerificationWithTimeout</code>
 <p>
  Typically, you won't use this class explicitly.
 Instead use timeout() method on Mockito class.
  See javadoc for <code>VerificationWithTimeout</code>
 */
@interface OrgMockitoVerificationTimeout : NSObject < OrgMockitoVerificationVerificationWithTimeout > {
 @public
  OrgMockitoInternalVerificationVerificationWithTimeoutImpl *impl_;
}

#pragma mark Public

/*!
 @brief See the javadoc for <code>VerificationWithTimeout</code>
 <p>
  Typically, you won't use this class explicitly.
 Instead use timeout() method on Mockito class.
  See javadoc for <code>VerificationWithTimeout</code>
 */
- (instancetype __nonnull)initWithInt:(jint)millis
withOrgMockitoVerificationVerificationMode:(id<OrgMockitoVerificationVerificationMode>)delegate;

/*!
 @brief See the javadoc for <code>VerificationWithTimeout</code>
 */
- (id<OrgMockitoVerificationVerificationMode>)atLeastWithInt:(jint)minNumberOfInvocations;

/*!
 @brief See the javadoc for <code>VerificationWithTimeout</code>
 */
- (id<OrgMockitoVerificationVerificationMode>)atLeastOnce;

/*!
 @brief See the javadoc for <code>VerificationWithTimeout</code>
 */
- (id<OrgMockitoVerificationVerificationMode>)atMostWithInt:(jint)maxNumberOfInvocations;

/*!
 @brief See the javadoc for <code>VerificationWithTimeout</code>
 */
- (id<OrgMockitoVerificationVerificationMode>)never;

/*!
 @brief See the javadoc for <code>VerificationWithTimeout</code>
 */
- (id<OrgMockitoVerificationVerificationMode>)only;

/*!
 @brief See the javadoc for <code>VerificationWithTimeout</code>
 */
- (id<OrgMockitoVerificationVerificationMode>)timesWithInt:(jint)wantedNumberOfInvocations;

/*!
 @brief See the javadoc for <code>VerificationWithTimeout</code>
 */
- (void)verifyWithOrgMockitoInternalVerificationApiVerificationData:(id<OrgMockitoInternalVerificationApiVerificationData>)data;

#pragma mark Package-Private

/*!
 @brief See the javadoc for <code>VerificationWithTimeout</code>
 */
- (instancetype __nonnull)initWithInt:(jint)treshhold
                              withInt:(jint)millis
withOrgMockitoVerificationVerificationMode:(id<OrgMockitoVerificationVerificationMode>)delegate;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoVerificationTimeout)

J2OBJC_FIELD_SETTER(OrgMockitoVerificationTimeout, impl_, OrgMockitoInternalVerificationVerificationWithTimeoutImpl *)

FOUNDATION_EXPORT void OrgMockitoVerificationTimeout_initWithInt_withOrgMockitoVerificationVerificationMode_(OrgMockitoVerificationTimeout *self, jint millis, id<OrgMockitoVerificationVerificationMode> delegate);

FOUNDATION_EXPORT OrgMockitoVerificationTimeout *new_OrgMockitoVerificationTimeout_initWithInt_withOrgMockitoVerificationVerificationMode_(jint millis, id<OrgMockitoVerificationVerificationMode> delegate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoVerificationTimeout *create_OrgMockitoVerificationTimeout_initWithInt_withOrgMockitoVerificationVerificationMode_(jint millis, id<OrgMockitoVerificationVerificationMode> delegate);

FOUNDATION_EXPORT void OrgMockitoVerificationTimeout_initWithInt_withInt_withOrgMockitoVerificationVerificationMode_(OrgMockitoVerificationTimeout *self, jint treshhold, jint millis, id<OrgMockitoVerificationVerificationMode> delegate);

FOUNDATION_EXPORT OrgMockitoVerificationTimeout *new_OrgMockitoVerificationTimeout_initWithInt_withInt_withOrgMockitoVerificationVerificationMode_(jint treshhold, jint millis, id<OrgMockitoVerificationVerificationMode> delegate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoVerificationTimeout *create_OrgMockitoVerificationTimeout_initWithInt_withInt_withOrgMockitoVerificationVerificationMode_(jint treshhold, jint millis, id<OrgMockitoVerificationVerificationMode> delegate);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoVerificationTimeout)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoVerificationTimeout")
