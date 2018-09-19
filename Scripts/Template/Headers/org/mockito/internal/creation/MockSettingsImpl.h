//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/internal/creation/MockSettingsImpl.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalCreationMockSettingsImpl")
#ifdef RESTRICT_OrgMockitoInternalCreationMockSettingsImpl
#define INCLUDE_ALL_OrgMockitoInternalCreationMockSettingsImpl 0
#else
#define INCLUDE_ALL_OrgMockitoInternalCreationMockSettingsImpl 1
#endif
#undef RESTRICT_OrgMockitoInternalCreationMockSettingsImpl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalCreationMockSettingsImpl_) && (INCLUDE_ALL_OrgMockitoInternalCreationMockSettingsImpl || defined(INCLUDE_OrgMockitoInternalCreationMockSettingsImpl))
#define OrgMockitoInternalCreationMockSettingsImpl_

#define RESTRICT_OrgMockitoInternalCreationSettingsCreationSettings 1
#define INCLUDE_OrgMockitoInternalCreationSettingsCreationSettings 1
#include "../../../../org/mockito/internal/creation/settings/CreationSettings.h"

#define RESTRICT_OrgMockitoMockSettings 1
#define INCLUDE_OrgMockitoMockSettings 1
#include "../../../../org/mockito/MockSettings.h"

#define RESTRICT_OrgMockitoMockMockCreationSettings 1
#define INCLUDE_OrgMockitoMockMockCreationSettings 1
#include "../../../../org/mockito/mock/MockCreationSettings.h"

@class IOSClass;
@class IOSObjectArray;
@protocol JavaUtilList;
@protocol JavaUtilSet;
@protocol OrgMockitoMockMockName;
@protocol OrgMockitoStubbingAnswer;

@interface OrgMockitoInternalCreationMockSettingsImpl : OrgMockitoInternalCreationSettingsCreationSettings < OrgMockitoMockSettings, OrgMockitoMockMockCreationSettings >

#pragma mark Public

- (instancetype __nonnull)init;

- (id<OrgMockitoMockMockCreationSettings>)confirmWithIOSClass:(IOSClass *)typeToMock;

- (id<OrgMockitoMockSettings>)defaultAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)defaultAnswer;

- (id<OrgMockitoMockSettings>)extraInterfacesWithIOSClassArray:(IOSObjectArray *)extraInterfaces;

- (id<OrgMockitoStubbingAnswer>)getDefaultAnswer;

- (id<JavaUtilSet>)getExtraInterfaces;

- (id<JavaUtilList>)getInvocationListeners;

- (id<OrgMockitoMockMockName>)getMockName;

- (id)getSpiedInstance;

- (IOSClass *)getTypeToMock;

- (jboolean)hasInvocationListeners;

- (id<OrgMockitoMockSettings>)invocationListenersWithOrgMockitoListenersInvocationListenerArray:(IOSObjectArray *)listeners;

- (jboolean)isSerializable;

- (id<OrgMockitoMockSettings>)nameWithNSString:(NSString *)name;

- (id<OrgMockitoMockSettings>)serializable;

- (id<OrgMockitoMockSettings>)spiedInstanceWithId:(id)spiedInstance;

- (id<OrgMockitoMockSettings>)verboseLogging;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithOrgMockitoInternalCreationSettingsCreationSettings:(OrgMockitoInternalCreationSettingsCreationSettings *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalCreationMockSettingsImpl)

FOUNDATION_EXPORT void OrgMockitoInternalCreationMockSettingsImpl_init(OrgMockitoInternalCreationMockSettingsImpl *self);

FOUNDATION_EXPORT OrgMockitoInternalCreationMockSettingsImpl *new_OrgMockitoInternalCreationMockSettingsImpl_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalCreationMockSettingsImpl *create_OrgMockitoInternalCreationMockSettingsImpl_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalCreationMockSettingsImpl)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalCreationMockSettingsImpl")
