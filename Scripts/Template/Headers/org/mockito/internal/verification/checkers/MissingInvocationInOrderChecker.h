//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/checkers/MissingInvocationInOrderChecker.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker")
#ifdef RESTRICT_OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker
#define INCLUDE_ALL_OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker 0
#else
#define INCLUDE_ALL_OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker 1
#endif
#undef RESTRICT_OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker_) && (INCLUDE_ALL_OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker || defined(INCLUDE_OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker))
#define OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker_

@class OrgMockitoExceptionsReporter;
@class OrgMockitoInternalInvocationInvocationMatcher;
@class OrgMockitoInternalInvocationInvocationsFinder;
@protocol JavaUtilList;
@protocol OrgMockitoInternalVerificationApiInOrderContext;
@protocol OrgMockitoVerificationVerificationMode;

@interface OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

- (void)checkWithJavaUtilList:(id<JavaUtilList>)invocations
withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted
withOrgMockitoVerificationVerificationMode:(id<OrgMockitoVerificationVerificationMode>)mode
withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)context;

#pragma mark Package-Private

- (instancetype __nonnull)initWithOrgMockitoInternalInvocationInvocationsFinder:(OrgMockitoInternalInvocationInvocationsFinder *)finder
                                               withOrgMockitoExceptionsReporter:(OrgMockitoExceptionsReporter *)reporter;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker_init(OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker *self);

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker *new_OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker *create_OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker_init(void);

FOUNDATION_EXPORT void OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker_initWithOrgMockitoInternalInvocationInvocationsFinder_withOrgMockitoExceptionsReporter_(OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker *self, OrgMockitoInternalInvocationInvocationsFinder *finder, OrgMockitoExceptionsReporter *reporter);

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker *new_OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker_initWithOrgMockitoInternalInvocationInvocationsFinder_withOrgMockitoExceptionsReporter_(OrgMockitoInternalInvocationInvocationsFinder *finder, OrgMockitoExceptionsReporter *reporter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker *create_OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker_initWithOrgMockitoInternalInvocationInvocationsFinder_withOrgMockitoExceptionsReporter_(OrgMockitoInternalInvocationInvocationsFinder *finder, OrgMockitoExceptionsReporter *reporter);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker")
