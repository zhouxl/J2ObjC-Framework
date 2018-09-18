//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/MatchersPrinter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalMatchersMatchersPrinter")
#ifdef RESTRICT_OrgMockitoInternalMatchersMatchersPrinter
#define INCLUDE_ALL_OrgMockitoInternalMatchersMatchersPrinter 0
#else
#define INCLUDE_ALL_OrgMockitoInternalMatchersMatchersPrinter 1
#endif
#undef RESTRICT_OrgMockitoInternalMatchersMatchersPrinter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalMatchersMatchersPrinter_) && (INCLUDE_ALL_OrgMockitoInternalMatchersMatchersPrinter || defined(INCLUDE_OrgMockitoInternalMatchersMatchersPrinter))
#define OrgMockitoInternalMatchersMatchersPrinter_

@class OrgMockitoInternalReportingPrintSettings;
@protocol JavaUtilList;

@interface OrgMockitoInternalMatchersMatchersPrinter : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

- (NSString *)getArgumentsBlockWithJavaUtilList:(id<JavaUtilList>)matchers
   withOrgMockitoInternalReportingPrintSettings:(OrgMockitoInternalReportingPrintSettings *)printSettings;

- (NSString *)getArgumentsLineWithJavaUtilList:(id<JavaUtilList>)matchers
  withOrgMockitoInternalReportingPrintSettings:(OrgMockitoInternalReportingPrintSettings *)printSettings;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersMatchersPrinter)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersMatchersPrinter_init(OrgMockitoInternalMatchersMatchersPrinter *self);

FOUNDATION_EXPORT OrgMockitoInternalMatchersMatchersPrinter *new_OrgMockitoInternalMatchersMatchersPrinter_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalMatchersMatchersPrinter *create_OrgMockitoInternalMatchersMatchersPrinter_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersMatchersPrinter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalMatchersMatchersPrinter")
