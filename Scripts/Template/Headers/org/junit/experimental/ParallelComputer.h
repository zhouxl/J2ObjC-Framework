//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/junit/build_result/java/org/junit/experimental/ParallelComputer.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitExperimentalParallelComputer")
#ifdef RESTRICT_OrgJunitExperimentalParallelComputer
#define INCLUDE_ALL_OrgJunitExperimentalParallelComputer 0
#else
#define INCLUDE_ALL_OrgJunitExperimentalParallelComputer 1
#endif
#undef RESTRICT_OrgJunitExperimentalParallelComputer

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitExperimentalParallelComputer_) && (INCLUDE_ALL_OrgJunitExperimentalParallelComputer || defined(INCLUDE_OrgJunitExperimentalParallelComputer))
#define OrgJunitExperimentalParallelComputer_

#define RESTRICT_OrgJunitRunnerComputer 1
#define INCLUDE_OrgJunitRunnerComputer 1
#include "../../../org/junit/runner/Computer.h"

@class IOSClass;
@class IOSObjectArray;
@class OrgJunitRunnerRunner;
@class OrgJunitRunnersModelRunnerBuilder;

@interface OrgJunitExperimentalParallelComputer : OrgJunitRunnerComputer

#pragma mark Public

- (instancetype __nonnull)initWithBoolean:(jboolean)classes
                              withBoolean:(jboolean)methods;

+ (OrgJunitRunnerComputer *)classes;

- (OrgJunitRunnerRunner *)getSuiteWithOrgJunitRunnersModelRunnerBuilder:(OrgJunitRunnersModelRunnerBuilder *)builder
                                                      withIOSClassArray:(IOSObjectArray *)classes;

+ (OrgJunitRunnerComputer *)methods;

#pragma mark Protected

- (OrgJunitRunnerRunner *)getRunnerWithOrgJunitRunnersModelRunnerBuilder:(OrgJunitRunnersModelRunnerBuilder *)builder
                                                            withIOSClass:(IOSClass *)testClass;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalParallelComputer)

FOUNDATION_EXPORT void OrgJunitExperimentalParallelComputer_initWithBoolean_withBoolean_(OrgJunitExperimentalParallelComputer *self, jboolean classes, jboolean methods);

FOUNDATION_EXPORT OrgJunitExperimentalParallelComputer *new_OrgJunitExperimentalParallelComputer_initWithBoolean_withBoolean_(jboolean classes, jboolean methods) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitExperimentalParallelComputer *create_OrgJunitExperimentalParallelComputer_initWithBoolean_withBoolean_(jboolean classes, jboolean methods);

FOUNDATION_EXPORT OrgJunitRunnerComputer *OrgJunitExperimentalParallelComputer_classes(void);

FOUNDATION_EXPORT OrgJunitRunnerComputer *OrgJunitExperimentalParallelComputer_methods(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalParallelComputer)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitExperimentalParallelComputer")
