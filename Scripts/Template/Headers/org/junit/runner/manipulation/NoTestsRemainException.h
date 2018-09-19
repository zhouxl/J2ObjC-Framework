//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/runner/manipulation/NoTestsRemainException.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnerManipulationNoTestsRemainException")
#ifdef RESTRICT_OrgJunitRunnerManipulationNoTestsRemainException
#define INCLUDE_ALL_OrgJunitRunnerManipulationNoTestsRemainException 0
#else
#define INCLUDE_ALL_OrgJunitRunnerManipulationNoTestsRemainException 1
#endif
#undef RESTRICT_OrgJunitRunnerManipulationNoTestsRemainException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitRunnerManipulationNoTestsRemainException_) && (INCLUDE_ALL_OrgJunitRunnerManipulationNoTestsRemainException || defined(INCLUDE_OrgJunitRunnerManipulationNoTestsRemainException))
#define OrgJunitRunnerManipulationNoTestsRemainException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "../../../../java/lang/Exception.h"

@class JavaLangThrowable;

/*!
 @brief Thrown when a filter removes all tests from a runner.
 @since 4.0
 */
@interface OrgJunitRunnerManipulationNoTestsRemainException : JavaLangException

#pragma mark Public

- (instancetype)init;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1
                     withBoolean:(jboolean)arg2
                     withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnerManipulationNoTestsRemainException)

FOUNDATION_EXPORT void OrgJunitRunnerManipulationNoTestsRemainException_init(OrgJunitRunnerManipulationNoTestsRemainException *self);

FOUNDATION_EXPORT OrgJunitRunnerManipulationNoTestsRemainException *new_OrgJunitRunnerManipulationNoTestsRemainException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRunnerManipulationNoTestsRemainException *create_OrgJunitRunnerManipulationNoTestsRemainException_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerManipulationNoTestsRemainException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnerManipulationNoTestsRemainException")
