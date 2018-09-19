//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/handler/MockHandlerImpl.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalHandlerMockHandlerImpl")
#ifdef RESTRICT_OrgMockitoInternalHandlerMockHandlerImpl
#define INCLUDE_ALL_OrgMockitoInternalHandlerMockHandlerImpl 0
#else
#define INCLUDE_ALL_OrgMockitoInternalHandlerMockHandlerImpl 1
#endif
#undef RESTRICT_OrgMockitoInternalHandlerMockHandlerImpl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalHandlerMockHandlerImpl_) && (INCLUDE_ALL_OrgMockitoInternalHandlerMockHandlerImpl || defined(INCLUDE_OrgMockitoInternalHandlerMockHandlerImpl))
#define OrgMockitoInternalHandlerMockHandlerImpl_

#define RESTRICT_OrgMockitoInternalInternalMockHandler 1
#define INCLUDE_OrgMockitoInternalInternalMockHandler 1
#include "../../../../org/mockito/internal/InternalMockHandler.h"

@class OrgMockitoInternalInvocationMatchersBinder;
@class OrgMockitoInternalStubbingInvocationContainerImpl;
@protocol JavaUtilList;
@protocol OrgMockitoInternalProgressMockingProgress;
@protocol OrgMockitoInternalStubbingInvocationContainer;
@protocol OrgMockitoInvocationInvocation;
@protocol OrgMockitoMockMockCreationSettings;
@protocol OrgMockitoStubbingVoidMethodStubbable;

/*!
 @brief Invocation handler set on mock objects.
 */
@interface OrgMockitoInternalHandlerMockHandlerImpl : NSObject < OrgMockitoInternalInternalMockHandler > {
 @public
  OrgMockitoInternalStubbingInvocationContainerImpl *invocationContainerImpl_;
  OrgMockitoInternalInvocationMatchersBinder *matchersBinder_;
  id<OrgMockitoInternalProgressMockingProgress> mockingProgress_;
}

#pragma mark Public

- (instancetype)initWithOrgMockitoMockMockCreationSettings:(id<OrgMockitoMockMockCreationSettings>)mockSettings;

- (id<OrgMockitoInternalStubbingInvocationContainer>)getInvocationContainer;

- (id<OrgMockitoMockMockCreationSettings>)getMockSettings;

- (id)handleWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

- (void)setAnswersForStubbingWithJavaUtilList:(id<JavaUtilList>)answers;

- (id<OrgMockitoStubbingVoidMethodStubbable>)voidMethodStubbableWithId:(id)mock;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalHandlerMockHandlerImpl)

J2OBJC_FIELD_SETTER(OrgMockitoInternalHandlerMockHandlerImpl, invocationContainerImpl_, OrgMockitoInternalStubbingInvocationContainerImpl *)
J2OBJC_FIELD_SETTER(OrgMockitoInternalHandlerMockHandlerImpl, matchersBinder_, OrgMockitoInternalInvocationMatchersBinder *)
J2OBJC_FIELD_SETTER(OrgMockitoInternalHandlerMockHandlerImpl, mockingProgress_, id<OrgMockitoInternalProgressMockingProgress>)

FOUNDATION_EXPORT void OrgMockitoInternalHandlerMockHandlerImpl_initWithOrgMockitoMockMockCreationSettings_(OrgMockitoInternalHandlerMockHandlerImpl *self, id<OrgMockitoMockMockCreationSettings> mockSettings);

FOUNDATION_EXPORT OrgMockitoInternalHandlerMockHandlerImpl *new_OrgMockitoInternalHandlerMockHandlerImpl_initWithOrgMockitoMockMockCreationSettings_(id<OrgMockitoMockMockCreationSettings> mockSettings) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalHandlerMockHandlerImpl *create_OrgMockitoInternalHandlerMockHandlerImpl_initWithOrgMockitoMockMockCreationSettings_(id<OrgMockitoMockMockCreationSettings> mockSettings);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalHandlerMockHandlerImpl)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalHandlerMockHandlerImpl")
