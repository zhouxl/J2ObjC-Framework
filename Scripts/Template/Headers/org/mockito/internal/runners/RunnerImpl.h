//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/internal/runners/RunnerImpl.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalRunnersRunnerImpl")
#ifdef RESTRICT_OrgMockitoInternalRunnersRunnerImpl
#define INCLUDE_ALL_OrgMockitoInternalRunnersRunnerImpl 0
#else
#define INCLUDE_ALL_OrgMockitoInternalRunnersRunnerImpl 1
#endif
#undef RESTRICT_OrgMockitoInternalRunnersRunnerImpl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalRunnersRunnerImpl_) && (INCLUDE_ALL_OrgMockitoInternalRunnersRunnerImpl || defined(INCLUDE_OrgMockitoInternalRunnersRunnerImpl))
#define OrgMockitoInternalRunnersRunnerImpl_

#define RESTRICT_OrgJunitRunnerManipulationFilterable 1
#define INCLUDE_OrgJunitRunnerManipulationFilterable 1
#include "org/junit/runner/manipulation/Filterable.h"

@class OrgJunitRunnerDescription;
@class OrgJunitRunnerNotificationRunNotifier;

/*!
 @brief I'm using this surrogate interface to hide internal Runner implementations.
 Surrogate cannot be used with &#064;RunWith therefore it is less likely clients will use interal runners.
 */
@protocol OrgMockitoInternalRunnersRunnerImpl < OrgJunitRunnerManipulationFilterable, JavaObject >

- (void)runWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

- (OrgJunitRunnerDescription *)getDescription;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalRunnersRunnerImpl)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalRunnersRunnerImpl)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalRunnersRunnerImpl")
