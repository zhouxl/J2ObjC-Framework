//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/junit/build_result/java/junit/framework/TestResult.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JunitFrameworkTestResult")
#ifdef RESTRICT_JunitFrameworkTestResult
#define INCLUDE_ALL_JunitFrameworkTestResult 0
#else
#define INCLUDE_ALL_JunitFrameworkTestResult 1
#endif
#undef RESTRICT_JunitFrameworkTestResult

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JunitFrameworkTestResult_) && (INCLUDE_ALL_JunitFrameworkTestResult || defined(INCLUDE_JunitFrameworkTestResult))
#define JunitFrameworkTestResult_

@class JavaLangThrowable;
@class JunitFrameworkAssertionFailedError;
@class JunitFrameworkTestCase;
@protocol JavaUtilEnumeration;
@protocol JavaUtilList;
@protocol JunitFrameworkProtectable;
@protocol JunitFrameworkTest;
@protocol JunitFrameworkTestListener;

/*!
 @brief A <code>TestResult</code> collects the results of executing
  a test case.It is an instance of the Collecting Parameter pattern.
 The test framework distinguishes between <i>failures</i> and <i>errors</i>.
  A failure is anticipated and checked for with assertions. Errors are
  unanticipated problems like an <code>ArrayIndexOutOfBoundsException</code>.
 - seealso: Test
 */
@interface JunitFrameworkTestResult : NSObject {
 @public
  id<JavaUtilList> fFailures_;
  id<JavaUtilList> fErrors_;
  id<JavaUtilList> fListeners_;
  jint fRunTests_;
}

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Adds an error to the list of errors.The passed in exception
  caused the error.
 */
- (void)addErrorWithJunitFrameworkTest:(id<JunitFrameworkTest>)test
                 withJavaLangThrowable:(JavaLangThrowable *)t;

/*!
 @brief Adds a failure to the list of failures.The passed in exception
  caused the failure.
 */
- (void)addFailureWithJunitFrameworkTest:(id<JunitFrameworkTest>)test
  withJunitFrameworkAssertionFailedError:(JunitFrameworkAssertionFailedError *)t;

/*!
 @brief Registers a TestListener
 */
- (void)addListenerWithJunitFrameworkTestListener:(id<JunitFrameworkTestListener>)listener;

/*!
 @brief Informs the result that a test was completed.
 */
- (void)endTestWithJunitFrameworkTest:(id<JunitFrameworkTest>)test;

/*!
 @brief Gets the number of detected errors.
 */
- (jint)errorCount;

/*!
 @brief Returns an Enumeration for the errors
 */
- (id<JavaUtilEnumeration>)errors;

/*!
 @brief Gets the number of detected failures.
 */
- (jint)failureCount;

/*!
 @brief Returns an Enumeration for the failures
 */
- (id<JavaUtilEnumeration>)failures;

/*!
 @brief Unregisters a TestListener
 */
- (void)removeListenerWithJunitFrameworkTestListener:(id<JunitFrameworkTestListener>)listener;

/*!
 @brief Gets the number of run tests.
 */
- (jint)runCount;

/*!
 @brief Runs a TestCase.
 */
- (void)runProtectedWithJunitFrameworkTest:(id<JunitFrameworkTest>)test
             withJunitFrameworkProtectable:(id<JunitFrameworkProtectable>)p;

/*!
 @brief Checks whether the test run should stop
 */
- (jboolean)shouldStop;

/*!
 @brief Informs the result that a test will be started.
 */
- (void)startTestWithJunitFrameworkTest:(id<JunitFrameworkTest>)test;

/*!
 @brief Marks that the test run should stop.
 */
- (void)stop;

/*!
 @brief Returns whether the entire test was successful or not.
 */
- (jboolean)wasSuccessful;

#pragma mark Protected

/*!
 @brief Runs a TestCase.
 */
- (void)runWithJunitFrameworkTestCase:(JunitFrameworkTestCase *)test;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitFrameworkTestResult)

J2OBJC_FIELD_SETTER(JunitFrameworkTestResult, fFailures_, id<JavaUtilList>)
J2OBJC_FIELD_SETTER(JunitFrameworkTestResult, fErrors_, id<JavaUtilList>)
J2OBJC_FIELD_SETTER(JunitFrameworkTestResult, fListeners_, id<JavaUtilList>)

FOUNDATION_EXPORT void JunitFrameworkTestResult_init(JunitFrameworkTestResult *self);

FOUNDATION_EXPORT JunitFrameworkTestResult *new_JunitFrameworkTestResult_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JunitFrameworkTestResult *create_JunitFrameworkTestResult_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JunitFrameworkTestResult)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JunitFrameworkTestResult")
