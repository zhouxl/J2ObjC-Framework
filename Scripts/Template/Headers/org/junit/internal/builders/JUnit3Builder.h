//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/internal/builders/JUnit3Builder.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalBuildersJUnit3Builder")
#ifdef RESTRICT_OrgJunitInternalBuildersJUnit3Builder
#define INCLUDE_ALL_OrgJunitInternalBuildersJUnit3Builder 0
#else
#define INCLUDE_ALL_OrgJunitInternalBuildersJUnit3Builder 1
#endif
#undef RESTRICT_OrgJunitInternalBuildersJUnit3Builder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitInternalBuildersJUnit3Builder_) && (INCLUDE_ALL_OrgJunitInternalBuildersJUnit3Builder || defined(INCLUDE_OrgJunitInternalBuildersJUnit3Builder))
#define OrgJunitInternalBuildersJUnit3Builder_

#define RESTRICT_OrgJunitRunnersModelRunnerBuilder 1
#define INCLUDE_OrgJunitRunnersModelRunnerBuilder 1
#include "../../../../org/junit/runners/model/RunnerBuilder.h"

@class IOSClass;
@class OrgJunitRunnerRunner;

@interface OrgJunitInternalBuildersJUnit3Builder : OrgJunitRunnersModelRunnerBuilder

#pragma mark Public

- (instancetype)init;

- (OrgJunitRunnerRunner *)runnerForClassWithIOSClass:(IOSClass *)testClass;

#pragma mark Package-Private

- (jboolean)isPre4TestWithIOSClass:(IOSClass *)testClass;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalBuildersJUnit3Builder)

FOUNDATION_EXPORT void OrgJunitInternalBuildersJUnit3Builder_init(OrgJunitInternalBuildersJUnit3Builder *self);

FOUNDATION_EXPORT OrgJunitInternalBuildersJUnit3Builder *new_OrgJunitInternalBuildersJUnit3Builder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalBuildersJUnit3Builder *create_OrgJunitInternalBuildersJUnit3Builder_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalBuildersJUnit3Builder)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalBuildersJUnit3Builder")
