//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/junit/textui/ResultPrinter.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JunitTextuiResultPrinter")
#ifdef RESTRICT_JunitTextuiResultPrinter
#define INCLUDE_ALL_JunitTextuiResultPrinter 0
#else
#define INCLUDE_ALL_JunitTextuiResultPrinter 1
#endif
#undef RESTRICT_JunitTextuiResultPrinter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JunitTextuiResultPrinter_) && (INCLUDE_ALL_JunitTextuiResultPrinter || defined(INCLUDE_JunitTextuiResultPrinter))
#define JunitTextuiResultPrinter_

#define RESTRICT_JunitFrameworkTestListener 1
#define INCLUDE_JunitFrameworkTestListener 1
#include "../../junit/framework/TestListener.h"

@class JavaIoPrintStream;
@class JavaLangThrowable;
@class JunitFrameworkAssertionFailedError;
@class JunitFrameworkTestFailure;
@class JunitFrameworkTestResult;
@protocol JavaUtilEnumeration;
@protocol JunitFrameworkTest;

@interface JunitTextuiResultPrinter : NSObject < JunitFrameworkTestListener > {
 @public
  JavaIoPrintStream *fWriter_;
  jint fColumn_;
}

#pragma mark Public

- (instancetype)initWithJavaIoPrintStream:(JavaIoPrintStream *)writer;

/*!
 - seealso: junit.framework.TestListener
 */
- (void)addErrorWithJunitFrameworkTest:(id<JunitFrameworkTest>)test
                 withJavaLangThrowable:(JavaLangThrowable *)t;

/*!
 - seealso: junit.framework.TestListener
 */
- (void)addFailureWithJunitFrameworkTest:(id<JunitFrameworkTest>)test
  withJunitFrameworkAssertionFailedError:(JunitFrameworkAssertionFailedError *)t;

/*!
 - seealso: junit.framework.TestListener
 */
- (void)endTestWithJunitFrameworkTest:(id<JunitFrameworkTest>)test;

- (JavaIoPrintStream *)getWriter;

- (void)printDefectWithJunitFrameworkTestFailure:(JunitFrameworkTestFailure *)booBoo
                                         withInt:(jint)count;

/*!
 - seealso: junit.framework.TestListener
 */
- (void)startTestWithJunitFrameworkTest:(id<JunitFrameworkTest>)test;

#pragma mark Protected

/*!
 @brief Returns the formatted string of the elapsed time.
 Duplicated from BaseTestRunner. Fix it.
 */
- (NSString *)elapsedTimeAsStringWithLong:(jlong)runTime;

- (void)printDefectHeaderWithJunitFrameworkTestFailure:(JunitFrameworkTestFailure *)booBoo
                                               withInt:(jint)count;

- (void)printDefectsWithJavaUtilEnumeration:(id<JavaUtilEnumeration>)booBoos
                                    withInt:(jint)count
                               withNSString:(NSString *)type;

- (void)printDefectTraceWithJunitFrameworkTestFailure:(JunitFrameworkTestFailure *)booBoo;

- (void)printErrorsWithJunitFrameworkTestResult:(JunitFrameworkTestResult *)result;

- (void)printFailuresWithJunitFrameworkTestResult:(JunitFrameworkTestResult *)result;

- (void)printFooterWithJunitFrameworkTestResult:(JunitFrameworkTestResult *)result;

- (void)printHeaderWithLong:(jlong)runTime;

#pragma mark Package-Private

- (void)printWithJunitFrameworkTestResult:(JunitFrameworkTestResult *)result
                                 withLong:(jlong)runTime;

- (void)printWaitPrompt;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitTextuiResultPrinter)

J2OBJC_FIELD_SETTER(JunitTextuiResultPrinter, fWriter_, JavaIoPrintStream *)

FOUNDATION_EXPORT void JunitTextuiResultPrinter_initWithJavaIoPrintStream_(JunitTextuiResultPrinter *self, JavaIoPrintStream *writer);

FOUNDATION_EXPORT JunitTextuiResultPrinter *new_JunitTextuiResultPrinter_initWithJavaIoPrintStream_(JavaIoPrintStream *writer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JunitTextuiResultPrinter *create_JunitTextuiResultPrinter_initWithJavaIoPrintStream_(JavaIoPrintStream *writer);

J2OBJC_TYPE_LITERAL_HEADER(JunitTextuiResultPrinter)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JunitTextuiResultPrinter")
