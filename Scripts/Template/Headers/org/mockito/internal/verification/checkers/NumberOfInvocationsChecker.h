//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/checkers/NumberOfInvocationsChecker.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker")
#ifdef RESTRICT_OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker
#define INCLUDE_ALL_OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker 0
#else
#define INCLUDE_ALL_OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker 1
#endif
#undef RESTRICT_OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker_) && (INCLUDE_ALL_OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker || defined(INCLUDE_OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker))
#define OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker_

@class OrgMockitoExceptionsReporter;
@class OrgMockitoInternalInvocationInvocationMatcher;
@class OrgMockitoInternalInvocationInvocationsFinder;
@protocol JavaUtilList;

@interface OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker : NSObject

#pragma mark Public

- (instancetype)init;

- (void)checkWithJavaUtilList:(id<JavaUtilList>)invocations
withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted
                      withInt:(jint)wantedCount;

#pragma mark Package-Private

- (instancetype)initWithOrgMockitoExceptionsReporter:(OrgMockitoExceptionsReporter *)reporter
   withOrgMockitoInternalInvocationInvocationsFinder:(OrgMockitoInternalInvocationInvocationsFinder *)finder;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker_init(OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker *self);

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker *new_OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker *create_OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker_init(void);

FOUNDATION_EXPORT void OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker_initWithOrgMockitoExceptionsReporter_withOrgMockitoInternalInvocationInvocationsFinder_(OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker *self, OrgMockitoExceptionsReporter *reporter, OrgMockitoInternalInvocationInvocationsFinder *finder);

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker *new_OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker_initWithOrgMockitoExceptionsReporter_withOrgMockitoInternalInvocationInvocationsFinder_(OrgMockitoExceptionsReporter *reporter, OrgMockitoInternalInvocationInvocationsFinder *finder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker *create_OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker_initWithOrgMockitoExceptionsReporter_withOrgMockitoInternalInvocationInvocationsFinder_(OrgMockitoExceptionsReporter *reporter, OrgMockitoInternalInvocationInvocationsFinder *finder);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker")