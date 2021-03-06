//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/stubbing/DeprecatedOngoingStubbing.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoStubbingDeprecatedOngoingStubbing")
#ifdef RESTRICT_OrgMockitoStubbingDeprecatedOngoingStubbing
#define INCLUDE_ALL_OrgMockitoStubbingDeprecatedOngoingStubbing 0
#else
#define INCLUDE_ALL_OrgMockitoStubbingDeprecatedOngoingStubbing 1
#endif
#undef RESTRICT_OrgMockitoStubbingDeprecatedOngoingStubbing

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoStubbingDeprecatedOngoingStubbing_) && (INCLUDE_ALL_OrgMockitoStubbingDeprecatedOngoingStubbing || defined(INCLUDE_OrgMockitoStubbingDeprecatedOngoingStubbing))
#define OrgMockitoStubbingDeprecatedOngoingStubbing_

#define RESTRICT_OrgMockitoInternalProgressIOngoingStubbing 1
#define INCLUDE_OrgMockitoInternalProgressIOngoingStubbing 1
#include "../../../org/mockito/internal/progress/IOngoingStubbing.h"

@class JavaLangThrowable;
@protocol OrgMockitoStubbingAnswer;

/*!
 @brief Stubs a method call with return value or an exception.E.g:
  
 <pre class="code"><code class="java">
  stub(mock.someMethod()).toReturn(10);
  //you can use flexible argument matchers, e.g:
  stub(mock.someMethod(<b>anyString()</b>)).toReturn(10);
  //setting exception to be thrown:
  stub(mock.someMethod("some arg")).toThrow(new RuntimeException());
  //you can stub with different behavior for consecutive method calls.
 //Last stubbing (e.g: toReturn("foo")) determines the behavior for further consecutive calls.
  stub(mock.someMethod("some arg"))
   .toThrow(new RuntimeException())
   .toReturn("foo"); 
 </code>
@endcode
  See examples in javadoc for <code>Mockito.stub</code>
 */
@protocol OrgMockitoStubbingDeprecatedOngoingStubbing < OrgMockitoInternalProgressIOngoingStubbing, JavaObject >

/*!
 @brief Set a return value for the stubbed method.E.g:
  <pre class="code"><code class="java">
  stub(mock.someMethod()).toReturn(10); 
 </code>
@endcode
  See examples in javadoc for <code>Mockito.stub</code>
 @param value return value
 @return iOngoingStubbing object that allows stubbing consecutive calls
 */
- (id<OrgMockitoStubbingDeprecatedOngoingStubbing>)toReturnWithId:(id)value;

/*!
 @brief Set a Throwable to be thrown when the stubbed method is called.E.g:
  <pre class="code"><code class="java">
  stub(mock.someMethod()).toThrow(new RuntimeException()); 
 </code>
@endcode
  If throwable is a checked exception then it has to
  match one of the checked exceptions of method signature.
 See examples in javadoc for <code>Mockito.stub</code>
 @param throwable to be thrown on method invocation
 @return iOngoingStubbing object that allows stubbing consecutive calls
 */
- (id<OrgMockitoStubbingDeprecatedOngoingStubbing>)toThrowWithJavaLangThrowable:(JavaLangThrowable *)throwable;

/*!
 @brief Set a generic Answer for the stubbed method.E.g:
  <pre class="code"><code class="java">
  stub(mock.someMethod(10)).toAnswer(new Answer&lt;Integer&gt;() {
      public Integer answer(InvocationOnMock invocation) throws Throwable {
          return (Integer) invocation.getArguments()[0];
      } } 
 </code>
@endcode
 @param answer the custom answer to execute.
 @return iOngoingStubbing object that allows stubbing consecutive calls
 */
- (id<OrgMockitoStubbingDeprecatedOngoingStubbing>)toAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoStubbingDeprecatedOngoingStubbing)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoStubbingDeprecatedOngoingStubbing)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoStubbingDeprecatedOngoingStubbing")
