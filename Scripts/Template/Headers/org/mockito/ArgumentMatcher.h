//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/ArgumentMatcher.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoArgumentMatcher")
#ifdef RESTRICT_OrgMockitoArgumentMatcher
#define INCLUDE_ALL_OrgMockitoArgumentMatcher 0
#else
#define INCLUDE_ALL_OrgMockitoArgumentMatcher 1
#endif
#undef RESTRICT_OrgMockitoArgumentMatcher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoArgumentMatcher_) && (INCLUDE_ALL_OrgMockitoArgumentMatcher || defined(INCLUDE_OrgMockitoArgumentMatcher))
#define OrgMockitoArgumentMatcher_

#define RESTRICT_OrgHamcrestBaseMatcher 1
#define INCLUDE_OrgHamcrestBaseMatcher 1
#include "org/hamcrest/BaseMatcher.h"

@protocol OrgHamcrestDescription;

/*!
 @brief Allows creating customized argument matchers.
 <p>
  ArgumentMatcher is an hamcrest <code>Matcher</code> with predefined describeTo() method.
  In case of failure, ArgumentMatcher generates description based on <b>decamelized class name</b> - to promote meaningful class names. 
  For example <b>StringWithStrongLanguage</b> matcher will generate 'String with strong language' description.
  You can always override describeTo() method and provide detailed description. 
 <p>
  Use <code>Matchers.argThat</code> method and pass an instance of hamcrest <code>Matcher</code>, e.g:  
 <pre class="code"><code class="java">
  class IsListOfTwoElements extends ArgumentMatcher&lt;List&gt; {
      public boolean matches(Object list) {
          return ((List) list).size() == 2;
      } } 
  List mock = mock(List.class); 
  when(mock.addAll(argThat(new IsListOfTwoElements()))).thenReturn(true); 
  mock.addAll(Arrays.asList(&quot;one&quot;, &quot;two&quot;));
  
  verify(mock).addAll(argThat(new IsListOfTwoElements())); 
 </code>
@endcode
  
  To keep it readable you may want to extract method, e.g:  
 <pre class="code"><code class="java">
    verify(mock).addAll(<b>argThat(new IsListOfTwoElements())</b>);
    //becomes
    verify(mock).addAll(<b>listOfTwoElements()</b>);
  </code>
@endcode
  
 <b>Warning:</b> Be reasonable with using complicated argument matching, especially custom argument matchers, as it can make the test less readable. 
  Sometimes it's better to implement equals() for arguments that are passed to mocks 
  (Mockito naturally uses equals() for argument matching). 
  This can make the test cleaner.  
 <p>
  Also, <b>sometimes <code>ArgumentCaptor</code> may be a better fit</b> than custom matcher.
  For example, if custom argument matcher is not likely to be reused
  or you just need it to assert on argument values to complete verification of behavior. 
 <p>
  Read more about other matchers in javadoc for <code>Matchers</code> class
 */
@interface OrgMockitoArgumentMatcher : OrgHamcrestBaseMatcher

#pragma mark Public

- (instancetype __nonnull)init;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

/*!
 @brief Returns whether this matcher accepts the given argument.
 <p>
  The method should <b>never</b> assert if the argument doesn't match. It
  should only return false.
 @param argument the argument
 @return whether this matcher accepts the given argument.
 */
- (jboolean)matchesWithId:(id)argument;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoArgumentMatcher)

FOUNDATION_EXPORT void OrgMockitoArgumentMatcher_init(OrgMockitoArgumentMatcher *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoArgumentMatcher)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoArgumentMatcher")
