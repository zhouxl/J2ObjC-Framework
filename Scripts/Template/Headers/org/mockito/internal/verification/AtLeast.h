//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/AtLeast.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalVerificationAtLeast")
#ifdef RESTRICT_OrgMockitoInternalVerificationAtLeast
#define INCLUDE_ALL_OrgMockitoInternalVerificationAtLeast 0
#else
#define INCLUDE_ALL_OrgMockitoInternalVerificationAtLeast 1
#endif
#undef RESTRICT_OrgMockitoInternalVerificationAtLeast

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalVerificationAtLeast_) && (INCLUDE_ALL_OrgMockitoInternalVerificationAtLeast || defined(INCLUDE_OrgMockitoInternalVerificationAtLeast))
#define OrgMockitoInternalVerificationAtLeast_

#define RESTRICT_OrgMockitoInternalVerificationApiVerificationInOrderMode 1
#define INCLUDE_OrgMockitoInternalVerificationApiVerificationInOrderMode 1
#include "org/mockito/internal/verification/api/VerificationInOrderMode.h"

#define RESTRICT_OrgMockitoVerificationVerificationMode 1
#define INCLUDE_OrgMockitoVerificationVerificationMode 1
#include "org/mockito/verification/VerificationMode.h"

@protocol OrgMockitoInternalVerificationApiVerificationData;
@protocol OrgMockitoInternalVerificationApiVerificationDataInOrder;

@interface OrgMockitoInternalVerificationAtLeast : NSObject < OrgMockitoInternalVerificationApiVerificationInOrderMode, OrgMockitoVerificationVerificationMode > {
 @public
  jint wantedCount_;
}

#pragma mark Public

- (instancetype __nonnull)initWithInt:(jint)wantedNumberOfInvocations;

- (NSString *)description;

- (void)verifyWithOrgMockitoInternalVerificationApiVerificationData:(id<OrgMockitoInternalVerificationApiVerificationData>)data;

- (void)verifyInOrderWithOrgMockitoInternalVerificationApiVerificationDataInOrder:(id<OrgMockitoInternalVerificationApiVerificationDataInOrder>)data;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationAtLeast)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationAtLeast_initWithInt_(OrgMockitoInternalVerificationAtLeast *self, jint wantedNumberOfInvocations);

FOUNDATION_EXPORT OrgMockitoInternalVerificationAtLeast *new_OrgMockitoInternalVerificationAtLeast_initWithInt_(jint wantedNumberOfInvocations) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalVerificationAtLeast *create_OrgMockitoInternalVerificationAtLeast_initWithInt_(jint wantedNumberOfInvocations);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationAtLeast)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalVerificationAtLeast")
