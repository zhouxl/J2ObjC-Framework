//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/internal/runners/MethodValidator.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalRunnersMethodValidator")
#ifdef RESTRICT_OrgJunitInternalRunnersMethodValidator
#define INCLUDE_ALL_OrgJunitInternalRunnersMethodValidator 0
#else
#define INCLUDE_ALL_OrgJunitInternalRunnersMethodValidator 1
#endif
#undef RESTRICT_OrgJunitInternalRunnersMethodValidator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitInternalRunnersMethodValidator_) && (INCLUDE_ALL_OrgJunitInternalRunnersMethodValidator || defined(INCLUDE_OrgJunitInternalRunnersMethodValidator))
#define OrgJunitInternalRunnersMethodValidator_

@class OrgJunitInternalRunnersTestClass;
@protocol JavaUtilList;

/*!
 */
__attribute__((deprecated))
@interface OrgJunitInternalRunnersMethodValidator : NSObject

#pragma mark Public

- (instancetype)initWithOrgJunitInternalRunnersTestClass:(OrgJunitInternalRunnersTestClass *)testClass;

- (void)assertValid;

- (void)validateInstanceMethods;

- (id<JavaUtilList>)validateMethodsForDefaultRunner;

- (void)validateNoArgConstructor;

- (void)validateStaticMethods;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRunnersMethodValidator)

FOUNDATION_EXPORT void OrgJunitInternalRunnersMethodValidator_initWithOrgJunitInternalRunnersTestClass_(OrgJunitInternalRunnersMethodValidator *self, OrgJunitInternalRunnersTestClass *testClass);

FOUNDATION_EXPORT OrgJunitInternalRunnersMethodValidator *new_OrgJunitInternalRunnersMethodValidator_initWithOrgJunitInternalRunnersTestClass_(OrgJunitInternalRunnersTestClass *testClass) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalRunnersMethodValidator *create_OrgJunitInternalRunnersMethodValidator_initWithOrgJunitInternalRunnersTestClass_(OrgJunitInternalRunnersTestClass *testClass);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRunnersMethodValidator)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalRunnersMethodValidator")
