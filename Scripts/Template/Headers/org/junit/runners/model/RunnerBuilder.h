//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/runners/model/RunnerBuilder.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnersModelRunnerBuilder")
#ifdef RESTRICT_OrgJunitRunnersModelRunnerBuilder
#define INCLUDE_ALL_OrgJunitRunnersModelRunnerBuilder 0
#else
#define INCLUDE_ALL_OrgJunitRunnersModelRunnerBuilder 1
#endif
#undef RESTRICT_OrgJunitRunnersModelRunnerBuilder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitRunnersModelRunnerBuilder_) && (INCLUDE_ALL_OrgJunitRunnersModelRunnerBuilder || defined(INCLUDE_OrgJunitRunnersModelRunnerBuilder))
#define OrgJunitRunnersModelRunnerBuilder_

@class IOSClass;
@class IOSObjectArray;
@class OrgJunitRunnerRunner;
@protocol JavaUtilList;

/*!
 @brief A RunnerBuilder is a strategy for constructing runners for classes.
 Only writers of custom runners should use <code>RunnerBuilder</code>s.  A custom runner class with a constructor taking a 
 <code>RunnerBuilder</code> parameter will be passed the instance of <code>RunnerBuilder</code> used to build that runner itself.
  For example,
  imagine a custom runner that builds suites based on a list of classes in a text file: 
 @code

  \@@RunWith(TextFileSuite.class)
  \@@SuiteSpecFile("mysuite.txt")
  class MySuite {} 
  
@endcode
  The implementation of TextFileSuite might include: 
 @code

  public TextFileSuite(Class testClass, RunnerBuilder builder) {
    // ...
    for (String className : readClassNames())
      addRunner(builder.runnerForClass(Class.forName(className)));
    // ...
  } 
  
@endcode
 - seealso: org.junit.runners.Suite
 @since 4.5
 */
@interface OrgJunitRunnersModelRunnerBuilder : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief Override to calculate the correct runner for a test class at runtime.
 @param testClass class to be run
 @return a Runner
 @throw Throwableif a runner cannot be constructed
 */
- (OrgJunitRunnerRunner *)runnerForClassWithIOSClass:(IOSClass *)testClass;

/*!
 @brief Constructs and returns a list of Runners, one for each child class in 
 <code>children</code>.Care is taken to avoid infinite recursion:
  this builder will throw an exception if it is requested for another
  runner for <code>parent</code> before this call completes.
 */
- (id<JavaUtilList>)runnersWithIOSClass:(IOSClass *)parent
                      withIOSClassArray:(IOSObjectArray *)children;

- (id<JavaUtilList>)runnersWithIOSClass:(IOSClass *)parent
                       withJavaUtilList:(id<JavaUtilList>)children;

/*!
 @brief Always returns a runner, even if it is just one that prints an error instead of running tests.
 @param testClass class to be run
 @return a Runner
 */
- (OrgJunitRunnerRunner *)safeRunnerForClassWithIOSClass:(IOSClass *)testClass;

#pragma mark Package-Private

- (IOSClass *)addParentWithIOSClass:(IOSClass *)parent;

- (void)removeParentWithIOSClass:(IOSClass *)klass;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnersModelRunnerBuilder)

FOUNDATION_EXPORT void OrgJunitRunnersModelRunnerBuilder_init(OrgJunitRunnersModelRunnerBuilder *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnersModelRunnerBuilder)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnersModelRunnerBuilder")
