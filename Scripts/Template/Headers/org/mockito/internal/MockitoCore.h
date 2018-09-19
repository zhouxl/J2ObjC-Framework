//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/MockitoCore.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalMockitoCore")
#ifdef RESTRICT_OrgMockitoInternalMockitoCore
#define INCLUDE_ALL_OrgMockitoInternalMockitoCore 0
#else
#define INCLUDE_ALL_OrgMockitoInternalMockitoCore 1
#endif
#undef RESTRICT_OrgMockitoInternalMockitoCore

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalMockitoCore_) && (INCLUDE_ALL_OrgMockitoInternalMockitoCore || defined(INCLUDE_OrgMockitoInternalMockitoCore))
#define OrgMockitoInternalMockitoCore_

@class IOSClass;
@class IOSObjectArray;
@protocol JavaUtilList;
@protocol OrgMockitoInOrder;
@protocol OrgMockitoInternalProgressIOngoingStubbing;
@protocol OrgMockitoInternalVerificationApiInOrderContext;
@protocol OrgMockitoInvocationInvocation;
@protocol OrgMockitoMockSettings;
@protocol OrgMockitoMockingDetails;
@protocol OrgMockitoStubbingAnswer;
@protocol OrgMockitoStubbingDeprecatedOngoingStubbing;
@protocol OrgMockitoStubbingOngoingStubbing;
@protocol OrgMockitoStubbingStubber;
@protocol OrgMockitoStubbingVoidMethodStubbable;
@protocol OrgMockitoVerificationVerificationMode;

@interface OrgMockitoInternalMockitoCore : NSObject

#pragma mark Public

- (instancetype)init;

- (id<OrgMockitoStubbingStubber>)doAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

/*!
 @brief For testing purposes only.Is not the part of main API.
 @return last invocation
 */
- (id<OrgMockitoInvocationInvocation>)getLastInvocation;

- (IOSObjectArray *)ignoreStubsWithNSObjectArray:(IOSObjectArray *)mocks;

- (id<OrgMockitoInOrder>)inOrderWithNSObjectArray:(IOSObjectArray *)mocks;

- (id)mockWithIOSClass:(IOSClass *)typeToMock
withOrgMockitoMockSettings:(id<OrgMockitoMockSettings>)settings;

- (id<OrgMockitoMockingDetails>)mockingDetailsWithId:(id)toInspect;

- (void)resetWithNSObjectArray:(IOSObjectArray *)mocks;

- (id<OrgMockitoInternalProgressIOngoingStubbing>)stub;

- (id<OrgMockitoStubbingDeprecatedOngoingStubbing>)stubWithId:(id)methodCall;

- (id<OrgMockitoStubbingVoidMethodStubbable>)stubVoidWithId:(id)mock;

- (void)validateMockitoUsage;

- (id)verifyWithId:(id)mock
withOrgMockitoVerificationVerificationMode:(id<OrgMockitoVerificationVerificationMode>)mode;

- (void)verifyNoMoreInteractionsWithNSObjectArray:(IOSObjectArray *)mocks;

- (void)verifyNoMoreInteractionsInOrderWithJavaUtilList:(id<JavaUtilList>)mocks
    withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)inOrderContext;

- (id<OrgMockitoStubbingOngoingStubbing>)whenWithId:(id)methodCall;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMockitoCore)

FOUNDATION_EXPORT void OrgMockitoInternalMockitoCore_init(OrgMockitoInternalMockitoCore *self);

FOUNDATION_EXPORT OrgMockitoInternalMockitoCore *new_OrgMockitoInternalMockitoCore_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalMockitoCore *create_OrgMockitoInternalMockitoCore_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMockitoCore)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalMockitoCore")
