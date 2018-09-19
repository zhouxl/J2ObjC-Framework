//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/ConsecutiveStubbing.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalStubbingConsecutiveStubbing")
#ifdef RESTRICT_OrgMockitoInternalStubbingConsecutiveStubbing
#define INCLUDE_ALL_OrgMockitoInternalStubbingConsecutiveStubbing 0
#else
#define INCLUDE_ALL_OrgMockitoInternalStubbingConsecutiveStubbing 1
#endif
#undef RESTRICT_OrgMockitoInternalStubbingConsecutiveStubbing

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalStubbingConsecutiveStubbing_) && (INCLUDE_ALL_OrgMockitoInternalStubbingConsecutiveStubbing || defined(INCLUDE_OrgMockitoInternalStubbingConsecutiveStubbing))
#define OrgMockitoInternalStubbingConsecutiveStubbing_

#define RESTRICT_OrgMockitoInternalStubbingBaseStubbing 1
#define INCLUDE_OrgMockitoInternalStubbingBaseStubbing 1
#include "../../../../org/mockito/internal/stubbing/BaseStubbing.h"

@class OrgMockitoInternalStubbingInvocationContainerImpl;
@protocol OrgMockitoStubbingAnswer;
@protocol OrgMockitoStubbingDeprecatedOngoingStubbing;
@protocol OrgMockitoStubbingOngoingStubbing;

@interface OrgMockitoInternalStubbingConsecutiveStubbing : OrgMockitoInternalStubbingBaseStubbing

#pragma mark Public

- (instancetype __nonnull)initWithOrgMockitoInternalStubbingInvocationContainerImpl:(OrgMockitoInternalStubbingInvocationContainerImpl *)invocationContainerImpl;

- (id)getMock;

- (id<OrgMockitoStubbingOngoingStubbing>)thenWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

- (id<OrgMockitoStubbingOngoingStubbing>)thenAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

- (id<OrgMockitoStubbingDeprecatedOngoingStubbing>)toAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingConsecutiveStubbing)

FOUNDATION_EXPORT void OrgMockitoInternalStubbingConsecutiveStubbing_initWithOrgMockitoInternalStubbingInvocationContainerImpl_(OrgMockitoInternalStubbingConsecutiveStubbing *self, OrgMockitoInternalStubbingInvocationContainerImpl *invocationContainerImpl);

FOUNDATION_EXPORT OrgMockitoInternalStubbingConsecutiveStubbing *new_OrgMockitoInternalStubbingConsecutiveStubbing_initWithOrgMockitoInternalStubbingInvocationContainerImpl_(OrgMockitoInternalStubbingInvocationContainerImpl *invocationContainerImpl) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalStubbingConsecutiveStubbing *create_OrgMockitoInternalStubbingConsecutiveStubbing_initWithOrgMockitoInternalStubbingInvocationContainerImpl_(OrgMockitoInternalStubbingInvocationContainerImpl *invocationContainerImpl);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingConsecutiveStubbing)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalStubbingConsecutiveStubbing")
