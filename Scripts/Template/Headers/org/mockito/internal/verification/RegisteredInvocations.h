//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/RegisteredInvocations.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalVerificationRegisteredInvocations")
#ifdef RESTRICT_OrgMockitoInternalVerificationRegisteredInvocations
#define INCLUDE_ALL_OrgMockitoInternalVerificationRegisteredInvocations 0
#else
#define INCLUDE_ALL_OrgMockitoInternalVerificationRegisteredInvocations 1
#endif
#undef RESTRICT_OrgMockitoInternalVerificationRegisteredInvocations

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalVerificationRegisteredInvocations_) && (INCLUDE_ALL_OrgMockitoInternalVerificationRegisteredInvocations || defined(INCLUDE_OrgMockitoInternalVerificationRegisteredInvocations))
#define OrgMockitoInternalVerificationRegisteredInvocations_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../java/io/Serializable.h"

@protocol JavaUtilList;
@protocol OrgMockitoInvocationInvocation;

@interface OrgMockitoInternalVerificationRegisteredInvocations : NSObject < JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (void)addWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

- (id<JavaUtilList>)getAll;

- (jboolean)isEmpty;

- (void)removeLast;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationRegisteredInvocations)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationRegisteredInvocations_init(OrgMockitoInternalVerificationRegisteredInvocations *self);

FOUNDATION_EXPORT OrgMockitoInternalVerificationRegisteredInvocations *new_OrgMockitoInternalVerificationRegisteredInvocations_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalVerificationRegisteredInvocations *create_OrgMockitoInternalVerificationRegisteredInvocations_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationRegisteredInvocations)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalVerificationRegisteredInvocations")
