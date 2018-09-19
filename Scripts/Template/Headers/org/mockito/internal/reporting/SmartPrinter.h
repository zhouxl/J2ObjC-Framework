//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/internal/reporting/SmartPrinter.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalReportingSmartPrinter")
#ifdef RESTRICT_OrgMockitoInternalReportingSmartPrinter
#define INCLUDE_ALL_OrgMockitoInternalReportingSmartPrinter 0
#else
#define INCLUDE_ALL_OrgMockitoInternalReportingSmartPrinter 1
#endif
#undef RESTRICT_OrgMockitoInternalReportingSmartPrinter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalReportingSmartPrinter_) && (INCLUDE_ALL_OrgMockitoInternalReportingSmartPrinter || defined(INCLUDE_OrgMockitoInternalReportingSmartPrinter))
#define OrgMockitoInternalReportingSmartPrinter_

@class IOSObjectArray;
@class OrgMockitoInternalInvocationInvocationMatcher;
@protocol OrgMockitoInvocationInvocation;

/*!
 @brief Makes sure both wanted and actual are printed consistently (single line or multiline)
 <p>
  Makes arguments printed with types if necessary
 */
@interface OrgMockitoInternalReportingSmartPrinter : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted
                                             withOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)actual
                                                       withJavaLangIntegerArray:(IOSObjectArray *)indexesOfMatchersToBeDescribedWithExtraTypeInfo;

- (NSString *)getActual;

- (NSString *)getWanted;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalReportingSmartPrinter)

FOUNDATION_EXPORT void OrgMockitoInternalReportingSmartPrinter_initWithOrgMockitoInternalInvocationInvocationMatcher_withOrgMockitoInvocationInvocation_withJavaLangIntegerArray_(OrgMockitoInternalReportingSmartPrinter *self, OrgMockitoInternalInvocationInvocationMatcher *wanted, id<OrgMockitoInvocationInvocation> actual, IOSObjectArray *indexesOfMatchersToBeDescribedWithExtraTypeInfo);

FOUNDATION_EXPORT OrgMockitoInternalReportingSmartPrinter *new_OrgMockitoInternalReportingSmartPrinter_initWithOrgMockitoInternalInvocationInvocationMatcher_withOrgMockitoInvocationInvocation_withJavaLangIntegerArray_(OrgMockitoInternalInvocationInvocationMatcher *wanted, id<OrgMockitoInvocationInvocation> actual, IOSObjectArray *indexesOfMatchersToBeDescribedWithExtraTypeInfo) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalReportingSmartPrinter *create_OrgMockitoInternalReportingSmartPrinter_initWithOrgMockitoInternalInvocationInvocationMatcher_withOrgMockitoInvocationInvocation_withJavaLangIntegerArray_(OrgMockitoInternalInvocationInvocationMatcher *wanted, id<OrgMockitoInvocationInvocation> actual, IOSObjectArray *indexesOfMatchersToBeDescribedWithExtraTypeInfo);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalReportingSmartPrinter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalReportingSmartPrinter")
