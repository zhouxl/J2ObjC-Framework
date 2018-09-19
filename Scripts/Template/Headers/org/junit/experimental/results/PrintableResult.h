//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/experimental/results/PrintableResult.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitExperimentalResultsPrintableResult")
#ifdef RESTRICT_OrgJunitExperimentalResultsPrintableResult
#define INCLUDE_ALL_OrgJunitExperimentalResultsPrintableResult 0
#else
#define INCLUDE_ALL_OrgJunitExperimentalResultsPrintableResult 1
#endif
#undef RESTRICT_OrgJunitExperimentalResultsPrintableResult

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitExperimentalResultsPrintableResult_) && (INCLUDE_ALL_OrgJunitExperimentalResultsPrintableResult || defined(INCLUDE_OrgJunitExperimentalResultsPrintableResult))
#define OrgJunitExperimentalResultsPrintableResult_

@class IOSClass;
@class OrgJunitRunnerRequest;
@protocol JavaUtilList;

/*!
 @brief A test result that prints nicely in error messages.
 This is only intended to be used in JUnit self-tests.
  For example: 
 @code

     assertThat(testResult(HasExpectedException.class), isSuccessful()); 
  
@endcode
 */
@interface OrgJunitExperimentalResultsPrintableResult : NSObject

#pragma mark Public

/*!
 @brief A result that includes the given <code>failures</code>
 */
- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)failures;

/*!
 @brief Returns the number of failures in this result.
 */
- (jint)failureCount;

/*!
 @brief The result of running JUnit on <code>type</code>
 */
+ (OrgJunitExperimentalResultsPrintableResult *)testResultWithIOSClass:(IOSClass *)type;

/*!
 @brief The result of running JUnit on Request <code>request</code>
 */
+ (OrgJunitExperimentalResultsPrintableResult *)testResultWithOrgJunitRunnerRequest:(OrgJunitRunnerRequest *)request;

- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalResultsPrintableResult)

FOUNDATION_EXPORT OrgJunitExperimentalResultsPrintableResult *OrgJunitExperimentalResultsPrintableResult_testResultWithIOSClass_(IOSClass *type);

FOUNDATION_EXPORT OrgJunitExperimentalResultsPrintableResult *OrgJunitExperimentalResultsPrintableResult_testResultWithOrgJunitRunnerRequest_(OrgJunitRunnerRequest *request);

FOUNDATION_EXPORT void OrgJunitExperimentalResultsPrintableResult_initWithJavaUtilList_(OrgJunitExperimentalResultsPrintableResult *self, id<JavaUtilList> failures);

FOUNDATION_EXPORT OrgJunitExperimentalResultsPrintableResult *new_OrgJunitExperimentalResultsPrintableResult_initWithJavaUtilList_(id<JavaUtilList> failures) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitExperimentalResultsPrintableResult *create_OrgJunitExperimentalResultsPrintableResult_initWithJavaUtilList_(id<JavaUtilList> failures);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalResultsPrintableResult)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitExperimentalResultsPrintableResult")
