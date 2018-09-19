//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/rules/ExpectedException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRulesExpectedException")
#ifdef RESTRICT_OrgJunitRulesExpectedException
#define INCLUDE_ALL_OrgJunitRulesExpectedException 0
#else
#define INCLUDE_ALL_OrgJunitRulesExpectedException 1
#endif
#undef RESTRICT_OrgJunitRulesExpectedException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitRulesExpectedException_) && (INCLUDE_ALL_OrgJunitRulesExpectedException || defined(INCLUDE_OrgJunitRulesExpectedException))
#define OrgJunitRulesExpectedException_

#define RESTRICT_OrgJunitRulesTestRule 1
#define INCLUDE_OrgJunitRulesTestRule 1
#include "../../../org/junit/rules/TestRule.h"

@class IOSClass;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnersModelStatement;
@protocol OrgHamcrestMatcher;

/*!
 @brief The ExpectedException rule allows in-test specification of expected exception
  types and messages:
 @code

  // These tests all pass.
 public static class HasExpectedException {
  		&#064;Rule
  	public ExpectedException thrown= ExpectedException.none(); 	
 	&#064;Test
  	public void throwsNothing() {
  		// no exception expected, none thrown: passes.
      }
  		&#064;Test
  	public void throwsNullPointerException() {
  		thrown.expect(NullPointerException.class);
  		throw new NullPointerException();
      }
  		&#064;Test
  	public void throwsNullPointerExceptionWithMessage() {
  		thrown.expect(NullPointerException.class);
  		thrown.expectMessage(&quot;happened?&quot;);
  		thrown.expectMessage(startsWith(&quot;What&quot;));
  		throw new NullPointerException(&quot;What happened?&quot;);
      }
  		&#064;Test
  	public void throwsIllegalArgumentExceptionWithMessageAndCause() {
  		NullPointerException expectedCause = new NullPointerException();
  		thrown.expect(IllegalArgumentException.class);
  		thrown.expectMessage(&quot;What&quot;);
  		thrown.expectCause(is(expectedCause));
  		throw new IllegalArgumentException(&quot;What happened?&quot;, cause);
      }    }    
  
@endcode
  By default ExpectedException rule doesn't handle AssertionErrors and
  AssumptionViolatedExceptions, because such exceptions are used by JUnit. If
  you want to handle such exceptions you have to call @@link 
 <code>handleAssertionErrors()</code> or @@link 
 <code>handleAssumptionViolatedExceptions()</code>.
  
 @code

  // These tests all pass.
  public static class HasExpectedException {
  		&#064;Rule
  	public ExpectedException thrown= ExpectedException.none(); 	
 	&#064;Test
  	public void throwExpectedAssertionError() {
  		thrown.handleAssertionErrors();
  		thrown.expect(AssertionError.class);
  		throw new AssertionError();
      }  
  &#064;Test
   public void throwExpectAssumptionViolatedException() {
       thrown.handleAssumptionViolatedExceptions();
       thrown.expect(AssumptionViolatedException.class);
       throw new AssumptionViolatedException(&quot;&quot;);
      }    }    
  
@endcode
 @since 4.7
 */
@interface OrgJunitRulesExpectedException : NSObject < OrgJunitRulesTestRule >

#pragma mark Public

- (OrgJunitRunnersModelStatement *)applyWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)base
                                            withOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

/*!
 @brief Adds to the list of requirements for any thrown exception that it should
  be an instance of <code>type</code>
 */
- (void)expectWithIOSClass:(IOSClass *)type;

/*!
 @brief Adds <code>matcher</code> to the list of requirements for any thrown
  exception.
 */
- (void)expectWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

/*!
 @brief Adds <code>matcher</code> to the list of requirements for the cause of
  any thrown exception.
 */
- (void)expectCauseWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)expectedCause;

/*!
 @brief Adds <code>matcher</code> to the list of requirements for the message returned
  from any thrown exception.
 */
- (void)expectMessageWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

/*!
 @brief Adds to the list of requirements for any thrown exception that it should 
 <em>contain</em> string <code>substring</code>
 */
- (void)expectMessageWithNSString:(NSString *)substring;

- (OrgJunitRulesExpectedException *)handleAssertionErrors;

- (OrgJunitRulesExpectedException *)handleAssumptionViolatedExceptions;

/*!
 @return a Rule that expects no exception to be thrown (identical to
          behavior without this Rule)
 */
+ (OrgJunitRulesExpectedException *)none;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRulesExpectedException)

FOUNDATION_EXPORT OrgJunitRulesExpectedException *OrgJunitRulesExpectedException_none(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRulesExpectedException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRulesExpectedException")
