//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/hamcrest/CoreMatchers.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgHamcrestCoreMatchers")
#ifdef RESTRICT_OrgHamcrestCoreMatchers
#define INCLUDE_ALL_OrgHamcrestCoreMatchers 0
#else
#define INCLUDE_ALL_OrgHamcrestCoreMatchers 1
#endif
#undef RESTRICT_OrgHamcrestCoreMatchers

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgHamcrestCoreMatchers_) && (INCLUDE_ALL_OrgHamcrestCoreMatchers || defined(INCLUDE_OrgHamcrestCoreMatchers))
#define OrgHamcrestCoreMatchers_

@class IOSClass;
@class IOSObjectArray;
@class OrgHamcrestCoreAnyOf;
@class OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher;
@class OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher;
@protocol JavaLangIterable;
@protocol OrgHamcrestMatcher;

@interface OrgHamcrestCoreMatchers : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief Creates a matcher that matches if the examined object matches <b>ALL</b> of the specified matchers.
 <p>
  For example: 
 @code
assertThat("myValue", allOf(startsWith("my"), containsString("Val")))
@endcode
 */
+ (id<OrgHamcrestMatcher>)allOfWithJavaLangIterable:(id<JavaLangIterable>)matchers;

/*!
 @brief Creates a matcher that matches if the examined object matches <b>ALL</b> of the specified matchers.
 <p>
  For example: 
 @code
assertThat("myValue", allOf(startsWith("my"), containsString("Val")))
@endcode
 */
+ (id<OrgHamcrestMatcher>)allOfWithOrgHamcrestMatcherArray:(IOSObjectArray *)matchers;

/*!
 @brief Creates a matcher that matches if the examined object matches <b>ALL</b> of the specified matchers.
 <p>
  For example: 
 @code
assertThat("myValue", allOf(startsWith("my"), containsString("Val")))
@endcode
 */
+ (id<OrgHamcrestMatcher>)allOfWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)first
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)second;

/*!
 @brief Creates a matcher that matches if the examined object matches <b>ALL</b> of the specified matchers.
 <p>
  For example: 
 @code
assertThat("myValue", allOf(startsWith("my"), containsString("Val")))
@endcode
 */
+ (id<OrgHamcrestMatcher>)allOfWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)first
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)second
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)third;

/*!
 @brief Creates a matcher that matches if the examined object matches <b>ALL</b> of the specified matchers.
 <p>
  For example: 
 @code
assertThat("myValue", allOf(startsWith("my"), containsString("Val")))
@endcode
 */
+ (id<OrgHamcrestMatcher>)allOfWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)first
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)second
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)third
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)fourth;

/*!
 @brief Creates a matcher that matches if the examined object matches <b>ALL</b> of the specified matchers.
 <p>
  For example: 
 @code
assertThat("myValue", allOf(startsWith("my"), containsString("Val")))
@endcode
 */
+ (id<OrgHamcrestMatcher>)allOfWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)first
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)second
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)third
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)fourth
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)fifth;

/*!
 @brief Creates a matcher that matches if the examined object matches <b>ALL</b> of the specified matchers.
 <p>
  For example: 
 @code
assertThat("myValue", allOf(startsWith("my"), containsString("Val")))
@endcode
 */
+ (id<OrgHamcrestMatcher>)allOfWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)first
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)second
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)third
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)fourth
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)fifth
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)sixth;

/*!
 @brief Creates a matcher that matches when the examined object is an instance of the specified <code>type</code>,
  as determined by calling the <code>java.lang.Class</code> method on that type, passing the
  the examined object.
 <p>The created matcher forces a relationship between specified type and the examined object, and should be
  used when it is necessary to make generics conform, for example in the JMock clause 
 <code>with(any(Thing.class))</code></p>
  <p>
  For example:  
 @code
assertThat(new Canoe(), instanceOf(Canoe.class));
@endcode
 */
+ (id<OrgHamcrestMatcher>)anyWithIOSClass:(IOSClass *)type;

/*!
 @brief Creates a matcher that matches if the examined object matches <b>ANY</b> of the specified matchers.
 <p>
  For example: 
 @code
assertThat("myValue", anyOf(startsWith("foo"), containsString("Val")))
@endcode
 */
+ (OrgHamcrestCoreAnyOf *)anyOfWithJavaLangIterable:(id<JavaLangIterable>)matchers;

/*!
 @brief Creates a matcher that matches if the examined object matches <b>ANY</b> of the specified matchers.
 <p>
  For example: 
 @code
assertThat("myValue", anyOf(startsWith("foo"), containsString("Val")))
@endcode
 */
+ (OrgHamcrestCoreAnyOf *)anyOfWithOrgHamcrestMatcherArray:(IOSObjectArray *)matchers;

/*!
 @brief Creates a matcher that matches if the examined object matches <b>ANY</b> of the specified matchers.
 <p>
  For example: 
 @code
assertThat("myValue", anyOf(startsWith("foo"), containsString("Val")))
@endcode
 */
+ (OrgHamcrestCoreAnyOf *)anyOfWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)first
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)second;

/*!
 @brief Creates a matcher that matches if the examined object matches <b>ANY</b> of the specified matchers.
 <p>
  For example: 
 @code
assertThat("myValue", anyOf(startsWith("foo"), containsString("Val")))
@endcode
 */
+ (OrgHamcrestCoreAnyOf *)anyOfWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)first
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)second
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)third;

/*!
 @brief Creates a matcher that matches if the examined object matches <b>ANY</b> of the specified matchers.
 <p>
  For example: 
 @code
assertThat("myValue", anyOf(startsWith("foo"), containsString("Val")))
@endcode
 */
+ (OrgHamcrestCoreAnyOf *)anyOfWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)first
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)second
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)third
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)fourth;

/*!
 @brief Creates a matcher that matches if the examined object matches <b>ANY</b> of the specified matchers.
 <p>
  For example: 
 @code
assertThat("myValue", anyOf(startsWith("foo"), containsString("Val")))
@endcode
 */
+ (OrgHamcrestCoreAnyOf *)anyOfWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)first
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)second
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)third
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)fourth
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)fifth;

/*!
 @brief Creates a matcher that matches if the examined object matches <b>ANY</b> of the specified matchers.
 <p>
  For example: 
 @code
assertThat("myValue", anyOf(startsWith("foo"), containsString("Val")))
@endcode
 */
+ (OrgHamcrestCoreAnyOf *)anyOfWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)first
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)second
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)third
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)fourth
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)fifth
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)sixth;

/*!
 @brief Creates a matcher that always matches, regardless of the examined object.
 */
+ (id<OrgHamcrestMatcher>)anything;

/*!
 @brief Creates a matcher that always matches, regardless of the examined object, but describes
  itself with the specified <code>String</code>.
 @param description_ a meaningful 
 <code>String</code>  used when describing itself
 */
+ (id<OrgHamcrestMatcher>)anythingWithNSString:(NSString *)description_;

/*!
 @brief Creates a matcher that matches when both of the specified matchers match the examined object.
 <p>
  For example: 
 @code
assertThat("fab", both(containsString("a")).and(containsString("b")))
@endcode
 */
+ (OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher *)bothWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

/*!
 @brief Creates a matcher that matches if the examined <code>String</code> contains the specified 
 <code>String</code> anywhere.
 <p>
  For example: 
 @code
assertThat("myStringOfNote", containsString("ring"))
@endcode
 @param substring the substring that the returned matcher will expect to find within any examined string
 */
+ (id<OrgHamcrestMatcher>)containsStringWithNSString:(NSString *)substring;

/*!
 @brief Wraps an existing matcher, overriding its description with that specified.All other functions are
  delegated to the decorated matcher, including its mismatch description.
 <p>
  For example: 
 @code
describedAs("a big decimal equal to %0", equalTo(myBigDecimal), myBigDecimal.toPlainString())
@endcode
 @param description_ the new description for the wrapped matcher
 @param matcher the matcher to wrap
 @param values optional values to insert into the tokenised description
 */
+ (id<OrgHamcrestMatcher>)describedAsWithNSString:(NSString *)description_
                           withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher
                                withNSObjectArray:(IOSObjectArray *)values;

/*!
 @brief Creates a matcher that matches when either of the specified matchers match the examined object.
 <p>
  For example: 
 @code
assertThat("fan", either(containsString("a")).and(containsString("b")))
@endcode
 */
+ (OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher *)eitherWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

/*!
 @brief Creates a matcher that matches if the examined <code>String</code> ends with the specified 
 <code>String</code>.
 <p>
  For example: 
 @code
assertThat("myStringOfNote", endsWith("Note"))
@endcode
 @param suffix the substring that the returned matcher will expect at the end of any examined string
 */
+ (id<OrgHamcrestMatcher>)endsWithWithNSString:(NSString *)suffix;

/*!
 @brief Creates a matcher that matches when the examined object is logically equal to the specified 
 <code>operand</code>, as determined by calling the <code>java.lang.Object</code> method on
  the <b>examined</b> object.
 <p>If the specified operand is <code>null</code> then the created matcher will only match if
  the examined object's <code>equals</code> method returns <code>true</code> when passed a 
 <code>null</code> (which would be a violation of the <code>equals</code> contract), unless the
  examined object itself is <code>null</code>, in which case the matcher will return a positive
  match.</p>
   
 <p>The created matcher provides a special behaviour when examining <code>Array</code>s, whereby
  it will match if both the operand and the examined object are arrays of the same length and
  contain items that are equal to each other (according to the above rules) <b>in the same
  indexes</b>.</p>  
 <p>
  For example: 
 @code

  assertThat("foo", equalTo("foo"));
  assertThat(new String[] {"foo", "bar"}, equalTo(new String[] {"foo", "bar"})); 
  
@endcode
 */
+ (id<OrgHamcrestMatcher>)equalToWithId:(id)operand;

/*!
 @brief Creates a matcher for <code>Iterable</code>s that only matches when a single pass over the
  examined <code>Iterable</code> yields items that are all matched by the specified 
 <code>itemMatcher</code>.
 <p>
  For example: 
 @code
assertThat(Arrays.asList("bar", "baz"), everyItem(startsWith("ba")))
@endcode
 @param itemMatcher the matcher to apply to every item provided by the examined 
 <code>Iterable</code>
 */
+ (id<OrgHamcrestMatcher>)everyItemWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)itemMatcher;

/*!
 @brief Creates a matcher for <code>Iterable</code>s that only matches when a single pass over the
  examined <code>Iterable</code> yields at least one item that is matched by the specified 
 <code>itemMatcher</code>.Whilst matching, the traversal of the examined <code>Iterable</code>
  will stop as soon as a matching item is found.
 <p>
  For example: 
 @code
assertThat(Arrays.asList("foo", "bar"), hasItem(startsWith("ba")))
@endcode
 @param itemMatcher the matcher to apply to items provided by the examined 
 <code>Iterable</code>
 */
+ (id<OrgHamcrestMatcher>)hasItemWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)itemMatcher;

/*!
 @brief Creates a matcher for <code>Iterable</code>s that only matches when a single pass over the
  examined <code>Iterable</code> yields at least one item that is equal to the specified 
 <code>item</code>.Whilst matching, the traversal of the examined <code>Iterable</code>
  will stop as soon as a matching item is found.
 <p>
  For example: 
 @code
assertThat(Arrays.asList("foo", "bar"), hasItem("bar"))
@endcode
 @param item the item to compare against the items provided by the examined 
 <code>Iterable</code>
 */
+ (id<OrgHamcrestMatcher>)hasItemWithId:(id)item;

/*!
 @brief Creates a matcher for <code>Iterable</code>s that matches when consecutive passes over the
  examined <code>Iterable</code> yield at least one item that is matched by the corresponding
  matcher from the specified <code>itemMatchers</code>.Whilst matching, each traversal of
  the examined <code>Iterable</code> will stop as soon as a matching item is found.
 <p>
  For example: 
 @code
assertThat(Arrays.asList("foo", "bar", "baz"), hasItems(endsWith("z"), endsWith("o")))
@endcode
 @param itemMatchers the matchers to apply to items provided by the examined 
 <code>Iterable</code>
 */
+ (id<OrgHamcrestMatcher>)hasItemsWithOrgHamcrestMatcherArray:(IOSObjectArray *)itemMatchers;

/*!
 @brief Creates a matcher for <code>Iterable</code>s that matches when consecutive passes over the
  examined <code>Iterable</code> yield at least one item that is equal to the corresponding
  item from the specified <code>items</code>.Whilst matching, each traversal of the
  examined <code>Iterable</code> will stop as soon as a matching item is found.
 <p>
  For example: 
 @code
assertThat(Arrays.asList("foo", "bar", "baz"), hasItems("baz", "foo"))
@endcode
 @param items the items to compare against the items provided by the examined 
 <code>Iterable</code>
 */
+ (id<OrgHamcrestMatcher>)hasItemsWithNSObjectArray:(IOSObjectArray *)items;

/*!
 @brief Creates a matcher that matches when the examined object is an instance of the specified <code>type</code>,
  as determined by calling the <code>java.lang.Class</code> method on that type, passing the
  the examined object.
 <p>The created matcher assumes no relationship between specified type and the examined object.</p>
  <p>
  For example:  
 @code
assertThat(new Canoe(), instanceOf(Paddlable.class));
@endcode
 */
+ (id<OrgHamcrestMatcher>)instanceOfWithIOSClass:(IOSClass *)type;

/*!
 @brief A shortcut to the frequently used <code>is(instanceOf(SomeClass.class))</code>.
 <p>
  For example: 
 @code
assertThat(cheese, is(Cheddar.class))
@endcode
  instead of: 
 @code
assertThat(cheese, is(instanceOf(Cheddar.class)))
@endcode
 */
+ (id<OrgHamcrestMatcher>)isWithIOSClass:(IOSClass *)type;

/*!
 @brief Decorates another Matcher, retaining its behaviour, but allowing tests
  to be slightly more expressive.
 <p>
  For example: 
 @code
assertThat(cheese, is(equalTo(smelly)))
@endcode
  instead of: 
 @code
assertThat(cheese, equalTo(smelly))
@endcode
 */
+ (id<OrgHamcrestMatcher>)isWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

/*!
 @brief A shortcut to the frequently used <code>is(equalTo(x))</code>.
 <p>
  For example: 
 @code
assertThat(cheese, is(smelly))
@endcode
  instead of: 
 @code
assertThat(cheese, is(equalTo(smelly)))
@endcode
 */
+ (id<OrgHamcrestMatcher>)isWithId:(id)value;

/*!
 @brief A shortcut to the frequently used <code>is(instanceOf(SomeClass.class))</code>.
 <p>
  For example: 
 @code
assertThat(cheese, isA(Cheddar.class))
@endcode
  instead of: 
 @code
assertThat(cheese, is(instanceOf(Cheddar.class)))
@endcode
 */
+ (id<OrgHamcrestMatcher>)isAWithIOSClass:(IOSClass *)type;

/*!
 @brief Creates a matcher that wraps an existing matcher, but inverts the logic by which
  it will match.
 <p>
  For example: 
 @code
assertThat(cheese, is(not(equalTo(smelly))))
@endcode
 @param matcher the matcher whose sense should be inverted
 */
+ (id<OrgHamcrestMatcher>)not__WithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

/*!
 @brief A shortcut to the frequently used <code>not(equalTo(x))</code>.
 <p>
  For example: 
 @code
assertThat(cheese, is(not(smelly)))
@endcode
  instead of: 
 @code
assertThat(cheese, is(not(equalTo(smelly))))
@endcode
 @param value the value that any examined object should 
  <b> not </b>  equal
 */
+ (id<OrgHamcrestMatcher>)not__WithId:(id)value;

/*!
 @brief A shortcut to the frequently used <code>not(nullValue())</code>.
 <p>
  For example: 
 @code
assertThat(cheese, is(notNullValue()))
@endcode
  instead of: 
 @code
assertThat(cheese, is(not(nullValue())))
@endcode
 */
+ (id<OrgHamcrestMatcher>)notNullValue;

/*!
 @brief A shortcut to the frequently used <code>not(nullValue(X.class)).Accepts a
  single dummy argument to facilitate type inference.
 </code>.
  <p>
  For example: 
 @code
assertThat(cheese, is(notNullValue(X.class)))
@endcode
  instead of: 
 @code
assertThat(cheese, is(not(nullValue(X.class))))
@endcode
 @param type dummy parameter used to infer the generic type of the returned matcher
 */
+ (id<OrgHamcrestMatcher>)notNullValueWithIOSClass:(IOSClass *)type;

/*!
 @brief Creates a matcher that matches if examined object is <code>null</code>.
 <p>
  For example: 
 @code
assertThat(cheese, is(nullValue())
@endcode
 */
+ (id<OrgHamcrestMatcher>)nullValue;

/*!
 @brief Creates a matcher that matches if examined object is <code>null</code>.Accepts a
  single dummy argument to facilitate type inference.
 <p>
  For example: 
 @code
assertThat(cheese, is(nullValue(Cheese.class))
@endcode
 @param type dummy parameter used to infer the generic type of the returned matcher
 */
+ (id<OrgHamcrestMatcher>)nullValueWithIOSClass:(IOSClass *)type;

/*!
 @brief Creates a matcher that matches only when the examined object is the same instance as
  the specified target object.
 @param target the target instance against which others should be assessed
 */
+ (id<OrgHamcrestMatcher>)sameInstanceWithId:(id)target;

/*!
 @brief Creates a matcher that matches if the examined <code>String</code> starts with the specified 
 <code>String</code>.
 <p>
  For example: 
 @code
assertThat("myStringOfNote", startsWith("my"))
@endcode
 @param prefix the substring that the returned matcher will expect at the start of any examined string
 */
+ (id<OrgHamcrestMatcher>)startsWithWithNSString:(NSString *)prefix;

/*!
 @brief Creates a matcher that matches only when the examined object is the same instance as
  the specified target object.
 @param target the target instance against which others should be assessed
 */
+ (id<OrgHamcrestMatcher>)theInstanceWithId:(id)target;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreMatchers)

FOUNDATION_EXPORT void OrgHamcrestCoreMatchers_init(OrgHamcrestCoreMatchers *self);

FOUNDATION_EXPORT OrgHamcrestCoreMatchers *new_OrgHamcrestCoreMatchers_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgHamcrestCoreMatchers *create_OrgHamcrestCoreMatchers_init(void);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreMatchers_allOfWithJavaLangIterable_(id<JavaLangIterable> matchers);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreMatchers_allOfWithOrgHamcrestMatcherArray_(IOSObjectArray *matchers);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreMatchers_allOfWithOrgHamcrestMatcher_withOrgHamcrestMatcher_(id<OrgHamcrestMatcher> first, id<OrgHamcrestMatcher> second);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreMatchers_allOfWithOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_(id<OrgHamcrestMatcher> first, id<OrgHamcrestMatcher> second, id<OrgHamcrestMatcher> third);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreMatchers_allOfWithOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_(id<OrgHamcrestMatcher> first, id<OrgHamcrestMatcher> second, id<OrgHamcrestMatcher> third, id<OrgHamcrestMatcher> fourth);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreMatchers_allOfWithOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_(id<OrgHamcrestMatcher> first, id<OrgHamcrestMatcher> second, id<OrgHamcrestMatcher> third, id<OrgHamcrestMatcher> fourth, id<OrgHamcrestMatcher> fifth);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreMatchers_allOfWithOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_(id<OrgHamcrestMatcher> first, id<OrgHamcrestMatcher> second, id<OrgHamcrestMatcher> third, id<OrgHamcrestMatcher> fourth, id<OrgHamcrestMatcher> fifth, id<OrgHamcrestMatcher> sixth);

FOUNDATION_EXPORT OrgHamcrestCoreAnyOf *OrgHamcrestCoreMatchers_anyOfWithJavaLangIterable_(id<JavaLangIterable> matchers);

FOUNDATION_EXPORT OrgHamcrestCoreAnyOf *OrgHamcrestCoreMatchers_anyOfWithOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_(id<OrgHamcrestMatcher> first, id<OrgHamcrestMatcher> second, id<OrgHamcrestMatcher> third);

FOUNDATION_EXPORT OrgHamcrestCoreAnyOf *OrgHamcrestCoreMatchers_anyOfWithOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_(id<OrgHamcrestMatcher> first, id<OrgHamcrestMatcher> second, id<OrgHamcrestMatcher> third, id<OrgHamcrestMatcher> fourth);

FOUNDATION_EXPORT OrgHamcrestCoreAnyOf *OrgHamcrestCoreMatchers_anyOfWithOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_(id<OrgHamcrestMatcher> first, id<OrgHamcrestMatcher> second, id<OrgHamcrestMatcher> third, id<OrgHamcrestMatcher> fourth, id<OrgHamcrestMatcher> fifth);

FOUNDATION_EXPORT OrgHamcrestCoreAnyOf *OrgHamcrestCoreMatchers_anyOfWithOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_(id<OrgHamcrestMatcher> first, id<OrgHamcrestMatcher> second, id<OrgHamcrestMatcher> third, id<OrgHamcrestMatcher> fourth, id<OrgHamcrestMatcher> fifth, id<OrgHamcrestMatcher> sixth);

FOUNDATION_EXPORT OrgHamcrestCoreAnyOf *OrgHamcrestCoreMatchers_anyOfWithOrgHamcrestMatcher_withOrgHamcrestMatcher_(id<OrgHamcrestMatcher> first, id<OrgHamcrestMatcher> second);

FOUNDATION_EXPORT OrgHamcrestCoreAnyOf *OrgHamcrestCoreMatchers_anyOfWithOrgHamcrestMatcherArray_(IOSObjectArray *matchers);

FOUNDATION_EXPORT OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher *OrgHamcrestCoreMatchers_bothWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher *OrgHamcrestCoreMatchers_eitherWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreMatchers_describedAsWithNSString_withOrgHamcrestMatcher_withNSObjectArray_(NSString *description_, id<OrgHamcrestMatcher> matcher, IOSObjectArray *values);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreMatchers_everyItemWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> itemMatcher);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreMatchers_isWithId_(id value);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreMatchers_isWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreMatchers_isWithIOSClass_(IOSClass *type);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreMatchers_isAWithIOSClass_(IOSClass *type);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreMatchers_anything(void);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreMatchers_anythingWithNSString_(NSString *description_);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreMatchers_hasItemWithId_(id item);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreMatchers_hasItemWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> itemMatcher);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreMatchers_hasItemsWithNSObjectArray_(IOSObjectArray *items);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreMatchers_hasItemsWithOrgHamcrestMatcherArray_(IOSObjectArray *itemMatchers);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreMatchers_equalToWithId_(id operand);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreMatchers_anyWithIOSClass_(IOSClass *type);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreMatchers_instanceOfWithIOSClass_(IOSClass *type);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreMatchers_not__WithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreMatchers_not__WithId_(id value);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreMatchers_nullValue(void);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreMatchers_nullValueWithIOSClass_(IOSClass *type);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreMatchers_notNullValue(void);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreMatchers_notNullValueWithIOSClass_(IOSClass *type);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreMatchers_sameInstanceWithId_(id target);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreMatchers_theInstanceWithId_(id target);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreMatchers_containsStringWithNSString_(NSString *substring);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreMatchers_startsWithWithNSString_(NSString *prefix);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreMatchers_endsWithWithNSString_(NSString *suffix);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreMatchers)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgHamcrestCoreMatchers")
