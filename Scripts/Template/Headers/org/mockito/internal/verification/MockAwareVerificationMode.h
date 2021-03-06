//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/MockAwareVerificationMode.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalVerificationMockAwareVerificationMode")
#ifdef RESTRICT_OrgMockitoInternalVerificationMockAwareVerificationMode
#define INCLUDE_ALL_OrgMockitoInternalVerificationMockAwareVerificationMode 0
#else
#define INCLUDE_ALL_OrgMockitoInternalVerificationMockAwareVerificationMode 1
#endif
#undef RESTRICT_OrgMockitoInternalVerificationMockAwareVerificationMode

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalVerificationMockAwareVerificationMode_) && (INCLUDE_ALL_OrgMockitoInternalVerificationMockAwareVerificationMode || defined(INCLUDE_OrgMockitoInternalVerificationMockAwareVerificationMode))
#define OrgMockitoInternalVerificationMockAwareVerificationMode_

#define RESTRICT_OrgMockitoVerificationVerificationMode 1
#define INCLUDE_OrgMockitoVerificationVerificationMode 1
#include "../../../../org/mockito/verification/VerificationMode.h"

@protocol OrgMockitoInternalVerificationApiVerificationData;

@interface OrgMockitoInternalVerificationMockAwareVerificationMode : NSObject < OrgMockitoVerificationVerificationMode >

#pragma mark Public

- (instancetype __nonnull)initWithId:(id)mock
withOrgMockitoVerificationVerificationMode:(id<OrgMockitoVerificationVerificationMode>)mode;

- (id)getMock;

- (void)verifyWithOrgMockitoInternalVerificationApiVerificationData:(id<OrgMockitoInternalVerificationApiVerificationData>)data;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationMockAwareVerificationMode)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationMockAwareVerificationMode_initWithId_withOrgMockitoVerificationVerificationMode_(OrgMockitoInternalVerificationMockAwareVerificationMode *self, id mock, id<OrgMockitoVerificationVerificationMode> mode);

FOUNDATION_EXPORT OrgMockitoInternalVerificationMockAwareVerificationMode *new_OrgMockitoInternalVerificationMockAwareVerificationMode_initWithId_withOrgMockitoVerificationVerificationMode_(id mock, id<OrgMockitoVerificationVerificationMode> mode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalVerificationMockAwareVerificationMode *create_OrgMockitoInternalVerificationMockAwareVerificationMode_initWithId_withOrgMockitoVerificationVerificationMode_(id mock, id<OrgMockitoVerificationVerificationMode> mode);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationMockAwareVerificationMode)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalVerificationMockAwareVerificationMode")
