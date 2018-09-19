//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/rules/MethodRule.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRulesMethodRule")
#ifdef RESTRICT_OrgJunitRulesMethodRule
#define INCLUDE_ALL_OrgJunitRulesMethodRule 0
#else
#define INCLUDE_ALL_OrgJunitRulesMethodRule 1
#endif
#undef RESTRICT_OrgJunitRulesMethodRule

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitRulesMethodRule_) && (INCLUDE_ALL_OrgJunitRulesMethodRule || defined(INCLUDE_OrgJunitRulesMethodRule))
#define OrgJunitRulesMethodRule_

@class OrgJunitRunnersModelFrameworkMethod;
@class OrgJunitRunnersModelStatement;

/*!
 @brief A MethodRule is an alteration in how a test method is run and reported.
 Multiple <code>MethodRule</code>s can be applied to a test method. The 
 <code>Statement</code> that executes the method is passed to each annotated 
 <code>Rule</code> in turn, and each may return a substitute or modified 
 <code>Statement</code>, which is passed to the next <code>Rule</code>, if any. For
  examples of how this can be useful, see these provided MethodRules,
  or write your own: 
 <ul>
    <li><code>ErrorCollector</code>: collect multiple errors in one test method</li>
    <li><code>ExpectedException</code>: make flexible assertions about thrown exceptions</li>
    <li><code>ExternalResource</code>: start and stop a server, for example</li>
    <li><code>TemporaryFolder</code>: create fresh files, and delete after test</li>
    <li><code>TestName</code>: remember the test name for use during the method</li>
    <li><code>TestWatchman</code>: add logic at events during method execution</li>
    <li><code>Timeout</code>: cause test to fail after a set time</li>
    <li><code>Verifier</code>: fail test if object state ends up incorrect</li>
  </ul>
  Note that <code>MethodRule</code> has been replaced by <code>TestRule</code>,
  which has the added benefit of supporting class rules.
 @since 4.7
 */
@protocol OrgJunitRulesMethodRule < JavaObject >

/*!
 @brief Modifies the method-running <code>Statement</code> to implement an additional
  test-running rule.
 @param base The <code>Statement</code>  to be modified
 @param method The method to be run
 @param target The object on with the method will be run.
 @return a new statement, which may be the same as <code>base</code>,
          a wrapper around <code>base</code>, or a completely new Statement.
 */
- (OrgJunitRunnersModelStatement *)applyWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)base
                                  withOrgJunitRunnersModelFrameworkMethod:(OrgJunitRunnersModelFrameworkMethod *)method
                                                                   withId:(id)target;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRulesMethodRule)

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRulesMethodRule)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRulesMethodRule")
