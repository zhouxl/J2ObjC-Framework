//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/runner/Result.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnerResult")
#ifdef RESTRICT_OrgJunitRunnerResult
#define INCLUDE_ALL_OrgJunitRunnerResult 0
#else
#define INCLUDE_ALL_OrgJunitRunnerResult 1
#endif
#undef RESTRICT_OrgJunitRunnerResult

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitRunnerResult_) && (INCLUDE_ALL_OrgJunitRunnerResult || defined(INCLUDE_OrgJunitRunnerResult))
#define OrgJunitRunnerResult_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../java/io/Serializable.h"

@class OrgJunitRunnerNotificationRunListener;
@protocol JavaUtilList;

/*!
 @brief A <code>Result</code> collects and summarizes information from running multiple tests.
 All tests are counted -- additional information is collected from tests that fail.
 @since 4.0
 */
@interface OrgJunitRunnerResult : NSObject < JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

/*!
 @brief Internal use only.
 */
- (OrgJunitRunnerNotificationRunListener *)createListener;

/*!
 @return the number of tests that failed during the run
 */
- (jint)getFailureCount;

/*!
 @return the <code>Failure</code>s describing tests that failed and the problems they encountered
 */
- (id<JavaUtilList>)getFailures;

/*!
 @return the number of tests ignored during the run
 */
- (jint)getIgnoreCount;

/*!
 @return the number of tests run
 */
- (jint)getRunCount;

/*!
 @return the number of milliseconds it took to run the entire suite to run
 */
- (jlong)getRunTime;

/*!
 @return <code>true</code> if all tests succeeded
 */
- (jboolean)wasSuccessful;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnerResult)

FOUNDATION_EXPORT void OrgJunitRunnerResult_init(OrgJunitRunnerResult *self);

FOUNDATION_EXPORT OrgJunitRunnerResult *new_OrgJunitRunnerResult_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRunnerResult *create_OrgJunitRunnerResult_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerResult)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnerResult")
