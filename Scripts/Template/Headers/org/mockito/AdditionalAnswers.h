//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/AdditionalAnswers.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoAdditionalAnswers")
#ifdef RESTRICT_OrgMockitoAdditionalAnswers
#define INCLUDE_ALL_OrgMockitoAdditionalAnswers 0
#else
#define INCLUDE_ALL_OrgMockitoAdditionalAnswers 1
#endif
#undef RESTRICT_OrgMockitoAdditionalAnswers

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoAdditionalAnswers_) && (INCLUDE_ALL_OrgMockitoAdditionalAnswers || defined(INCLUDE_OrgMockitoAdditionalAnswers))
#define OrgMockitoAdditionalAnswers_

@protocol JavaUtilCollection;
@protocol OrgMockitoStubbingAnswer;

/*!
 @brief Additional answers provides factory methods for less common answers.
 <p>Currently offer answers that can return the parameter of an invocation at a certain position. 
 <p>See factory methods for more information : <code>returnsFirstArg</code>, <code>returnsSecondArg</code>,
  <code>returnsLastArg</code> and <code>returnsArgAt</code>
 @since 1.9.5
 */
@interface OrgMockitoAdditionalAnswers : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief An answer that directly forwards the calls to the delegate.
 <p>
  Useful for spies or partial mocks of objects that are difficult to mock
  or spy using the usual spy API. Possible use cases: 
 <ul>
      <li>Final classes but with an interface</li>
      <li>Already custom proxied object</li>
      <li>Special objects with a finalize method, i.e. to avoid executing it 2 times</li>
  </ul>
  For more details including the use cases reported by users take a look at 
 <a link="http://code.google.com/p/mockito/issues/detail?id=145">issue 145</a>.
  <p>
  The difference with the regular spy: 
 <ul>
    <li>
      The regular spy (<code>Mockito.spy(Object)</code>) contains <strong>all</strong> state from the spied instance
      and the methods are invoked on the spy. The spied instance is only used at mock creation to copy the state from.
      If you call a method on a regular spy and it internally calls other methods on this spy, those calls are remembered
      for verifications, and they can be effectively stubbed.   
 </li>
    <li>
      The mock that delegates simply delegates all methods to the delegate.
      The delegate is used all the time as methods are delegated onto it.
      If you call a method on a mock that delegates and it internally calls other methods on this mock,
      those calls are <strong>not</strong> remembered for verifications, stubbing does not have effect on them, too.
      Mock that delegates is less powerful than the regular spy but it is useful when the regular spy cannot be created.   
 </li>
  </ul>
  An example with a final class that we want to delegate to: 
 <p>
  <pre class="code"><code class="java">
    final class DontYouDareToMockMe implements list { ... }
    DontYouDareToMockMe awesomeList = new DontYouDareToMockMe();
    List mock = mock(List.class, delegatesTo(awesomeList)); 
 </code>
@endcode
  
 <p>
  This feature suffers from the same drawback as the spy.
  The mock will call the delegate if you use regular when().then() stubbing style.
  Since the real implementation is called this might have some side effects.
  Therefore you should to use the doReturn|Throw|Answer|CallRealMethod stubbing style. Example: 
 <pre class="code"><code class="java">
    List listWithDelegate = mock(List.class, AdditionalAnswers.delegatesTo(awesomeList));
    //Impossible: real method is called so listWithDelegate.get(0) throws IndexOutOfBoundsException (the list is yet empty)
    when(listWithDelegate.get(0)).thenReturn("foo");
    //You have to use doReturn() for stubbing
    doReturn("foo").when(listWithDelegate).get(0); 
 </code>
@endcode
 @param delegate The delegate to forward calls to.
 @return the answer
 @since 1.9.5
 */
+ (id<OrgMockitoStubbingAnswer>)delegatesToWithId:(id)delegate;

/*!
 @brief Returns the parameter of an invocation at the given position.
 <p>
  This additional answer could be used at stub time using the 
 <code>then|do|will<code>org.mockito.stubbing.Answer</code></code> methods. For example : 
 </p>
  
 <pre class="code"><code class="java">given(person.remember(dream1, dream2, dream3, dream4)).will(returnsArgAt(3));
  daAnswer(returnsArgAt(3)).when(person).remember(dream1, dream2, dream3, dream4)</code>
@endcode
 @return Answer that will return the second argument of the invocation.
 @since 1.9.5
 */
+ (id<OrgMockitoStubbingAnswer>)returnsArgAtWithInt:(jint)position;

/*!
 @brief Returns elements of the collection.Keeps returning the last element forever.
 Might be useful on occasion when you have a collection of elements to return. 
 <p>
  <pre class="code"><code class="java">
    //this:
    when(mock.foo()).thenReturn(1, 2, 3);
    //is equivalent to:
    when(mock.foo()).thenReturn(new ReturnsElementsOf(Arrays.asList(1, 2, 3))); 
 </code>
@endcode
 @param elements The collection of elements to return.
 @return the answer
 @since 1.9.5
 */
+ (id<OrgMockitoStubbingAnswer>)returnsElementsOfWithJavaUtilCollection:(id<JavaUtilCollection>)elements;

/*!
 @brief Returns the first parameter of an invocation.
 <p>
      This additional answer could be used at stub time using the     
 <code>then|do|will<code>org.mockito.stubbing.Answer</code></code> methods. For example : 
 </p>
  
 <pre class="code"><code class="java">given(carKeyFob.authenticate(carKey)).will(returnsFirstArg());
  daAnswer(returnsFirstArg()).when(carKeyFob).authenticate(carKey)</code>
@endcode
 @return Answer that will return the first argument of the invocation.
 @since 1.9.5
 */
+ (id<OrgMockitoStubbingAnswer>)returnsFirstArg;

/*!
 @brief Returns the last parameter of an invocation.
 <p>
      This additional answer could be used at stub time using the     
 <code>then|do|will<code>org.mockito.stubbing.Answer</code></code> methods. For example : 
 </p>
  
 <pre class="code"><code class="java">given(person.remember(dream1, dream2, dream3, dream4)).will(returnsLastArg());
  daAnswer(returnsLastArg()).when(person).remember(dream1, dream2, dream3, dream4)</code>
@endcode
 @return Answer that will return the last argument of the invocation.
 @since 1.9.5
 */
+ (id<OrgMockitoStubbingAnswer>)returnsLastArg;

/*!
 @brief Returns the second parameter of an invocation.
 <p>
      This additional answer could be used at stub time using the     
 <code>then|do|will<code>org.mockito.stubbing.Answer</code></code> methods. For example : 
 </p>
  
 <pre class="code"><code class="java">given(trader.apply(leesFormula, onCreditDefaultSwap)).will(returnsSecondArg());
  daAnswer(returnsSecondArg()).when(trader).apply(leesFormula, onCreditDefaultSwap)</code>
@endcode
 @return Answer that will return the second argument of the invocation.
 @since 1.9.5
 */
+ (id<OrgMockitoStubbingAnswer>)returnsSecondArg;

@end

J2OBJC_STATIC_INIT(OrgMockitoAdditionalAnswers)

FOUNDATION_EXPORT void OrgMockitoAdditionalAnswers_init(OrgMockitoAdditionalAnswers *self);

FOUNDATION_EXPORT OrgMockitoAdditionalAnswers *new_OrgMockitoAdditionalAnswers_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoAdditionalAnswers *create_OrgMockitoAdditionalAnswers_init(void);

FOUNDATION_EXPORT id<OrgMockitoStubbingAnswer> OrgMockitoAdditionalAnswers_returnsFirstArg(void);

FOUNDATION_EXPORT id<OrgMockitoStubbingAnswer> OrgMockitoAdditionalAnswers_returnsSecondArg(void);

FOUNDATION_EXPORT id<OrgMockitoStubbingAnswer> OrgMockitoAdditionalAnswers_returnsLastArg(void);

FOUNDATION_EXPORT id<OrgMockitoStubbingAnswer> OrgMockitoAdditionalAnswers_returnsArgAtWithInt_(jint position);

FOUNDATION_EXPORT id<OrgMockitoStubbingAnswer> OrgMockitoAdditionalAnswers_delegatesToWithId_(id delegate);

FOUNDATION_EXPORT id<OrgMockitoStubbingAnswer> OrgMockitoAdditionalAnswers_returnsElementsOfWithJavaUtilCollection_(id<JavaUtilCollection> elements);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoAdditionalAnswers)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoAdditionalAnswers")
