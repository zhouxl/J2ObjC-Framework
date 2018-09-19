//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/junit/extensions/TestDecorator.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JunitExtensionsTestDecorator")
#ifdef RESTRICT_JunitExtensionsTestDecorator
#define INCLUDE_ALL_JunitExtensionsTestDecorator 0
#else
#define INCLUDE_ALL_JunitExtensionsTestDecorator 1
#endif
#undef RESTRICT_JunitExtensionsTestDecorator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JunitExtensionsTestDecorator_) && (INCLUDE_ALL_JunitExtensionsTestDecorator || defined(INCLUDE_JunitExtensionsTestDecorator))
#define JunitExtensionsTestDecorator_

#define RESTRICT_JunitFrameworkAssert 1
#define INCLUDE_JunitFrameworkAssert 1
#include "../../junit/framework/Assert.h"

#define RESTRICT_JunitFrameworkTest 1
#define INCLUDE_JunitFrameworkTest 1
#include "../../junit/framework/Test.h"

@class JunitFrameworkTestResult;

/*!
 @brief A Decorator for Tests.Use TestDecorator as the base class for defining new
  test decorators.
 Test decorator subclasses can be introduced to add behaviour
  before or after a test is run.
 */
@interface JunitExtensionsTestDecorator : JunitFrameworkAssert < JunitFrameworkTest > {
 @public
  id<JunitFrameworkTest> fTest_;
}

#pragma mark Public

- (instancetype)initWithJunitFrameworkTest:(id<JunitFrameworkTest>)test;

/*!
 @brief The basic run behaviour.
 */
- (void)basicRunWithJunitFrameworkTestResult:(JunitFrameworkTestResult *)result;

- (jint)countTestCases;

- (id<JunitFrameworkTest>)getTest;

- (void)runWithJunitFrameworkTestResult:(JunitFrameworkTestResult *)result;

- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitExtensionsTestDecorator)

J2OBJC_FIELD_SETTER(JunitExtensionsTestDecorator, fTest_, id<JunitFrameworkTest>)

FOUNDATION_EXPORT void JunitExtensionsTestDecorator_initWithJunitFrameworkTest_(JunitExtensionsTestDecorator *self, id<JunitFrameworkTest> test);

FOUNDATION_EXPORT JunitExtensionsTestDecorator *new_JunitExtensionsTestDecorator_initWithJunitFrameworkTest_(id<JunitFrameworkTest> test) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JunitExtensionsTestDecorator *create_JunitExtensionsTestDecorator_initWithJunitFrameworkTest_(id<JunitFrameworkTest> test);

J2OBJC_TYPE_LITERAL_HEADER(JunitExtensionsTestDecorator)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JunitExtensionsTestDecorator")
