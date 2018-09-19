//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/Lists.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectLists")
#ifdef RESTRICT_ComGoogleCommonCollectLists
#define INCLUDE_ALL_ComGoogleCommonCollectLists 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectLists 1
#endif
#undef RESTRICT_ComGoogleCommonCollectLists

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectLists_) && (INCLUDE_ALL_ComGoogleCommonCollectLists || defined(INCLUDE_ComGoogleCommonCollectLists))
#define ComGoogleCommonCollectLists_

@class ComGoogleCommonCollectImmutableList;
@class IOSObjectArray;
@class JavaUtilArrayList;
@class JavaUtilConcurrentCopyOnWriteArrayList;
@class JavaUtilLinkedList;
@protocol ComGoogleCommonBaseFunction;
@protocol JavaLangCharSequence;
@protocol JavaLangIterable;
@protocol JavaUtilIterator;
@protocol JavaUtilList;
@protocol JavaUtilListIterator;

/*!
 @brief Static utility methods pertaining to <code>List</code> instances.Also see this class's counterparts 
 <code>Sets</code>, <code>Maps</code> and <code>Queues</code>.
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/CollectionUtilitiesExplained#lists">
  <code>Lists</code></a>.
 @author Kevin Bourrillion
 @author Mike Bostock
 @author Louis Wasserman
 @since 2.0
 */
@interface ComGoogleCommonCollectLists : NSObject

#pragma mark Public

/*!
 @brief Returns an unmodifiable list containing the specified first and second element, and backed by
  the specified array of additional elements.Changes to the <code>rest</code> array will be reflected
  in the returned list.
 Unlike <code>Arrays.asList</code>, the returned list is unmodifiable. 
 <p>This is useful when a varargs method needs to use a signature such as <code>(Foo firstFoo,
  Foo secondFoo, Foo... moreFoos)</code>
 , in order to avoid overload ambiguity or to enforce a minimum
  argument count. 
 <p>The returned list is serializable and implements <code>RandomAccess</code>.
 @param first the first element
 @param second the second element
 @param rest an array of additional elements, possibly empty
 @return an unmodifiable list containing the specified elements
 */
+ (id<JavaUtilList>)asListWithId:(id)first
                          withId:(id)second
               withNSObjectArray:(IOSObjectArray *)rest;

/*!
 @brief Returns an unmodifiable list containing the specified first element and backed by the specified
  array of additional elements.Changes to the <code>rest</code> array will be reflected in the
  returned list.
 Unlike <code>Arrays.asList</code>, the returned list is unmodifiable. 
 <p>This is useful when a varargs method needs to use a signature such as <code>(Foo firstFoo,
  Foo... moreFoos)</code>
 , in order to avoid overload ambiguity or to enforce a minimum argument count. 
 <p>The returned list is serializable and implements <code>RandomAccess</code>.
 @param first the first element
 @param rest an array of additional elements, possibly empty
 @return an unmodifiable list containing the specified elements
 */
+ (id<JavaUtilList>)asListWithId:(id)first
               withNSObjectArray:(IOSObjectArray *)rest;

/*!
 @brief Returns every possible list that can be formed by choosing one element from each of the given
  lists in order; the "n-ary <a href="http://en.wikipedia.org/wiki/Cartesian_product">Cartesian
  product</a>" of the lists.For example: 
 @code
 Lists.cartesianProduct(ImmutableList.of(
      ImmutableList.of(1, 2),
      ImmutableList.of("A", "B", "C"))) 
 
@endcode
  
 <p>returns a list containing six lists in the following order: 
 <ul>
    <li><code>ImmutableList.of(1, "A")</code>
    <li><code>ImmutableList.of(1, "B")</code>
    <li><code>ImmutableList.of(1, "C")</code>
    <li><code>ImmutableList.of(2, "A")</code>
    <li><code>ImmutableList.of(2, "B")</code>
    <li><code>ImmutableList.of(2, "C")</code>
  </ul>
  
 <p>The result is guaranteed to be in the "traditional", lexicographical order for Cartesian
  products that you would get from nesting for loops: 
 @code
 for (B b0 : lists.get(0)) {
    for (B b1 : lists.get(1)) {
      ...
 ImmutableList<B> tuple = ImmutableList.of(b0, b1, ...);
      // operate on tuple
    }  }  
 
@endcode
  
 <p>Note that if any input list is empty, the Cartesian product will also be empty. If no lists
  at all are provided (an empty list), the resulting Cartesian product has one element, an empty
  list (counter-intuitive, but mathematically consistent). 
 <p><i>Performance notes:</i> while the cartesian product of lists of size <code>m, n, p</code> is a
  list of size <code>m x n x p</code>, its actual memory consumption is much smaller. When the
  cartesian product is constructed, the input lists are merely copied. Only as the resulting list
  is iterated are the individual lists created, and these are not retained after iteration.
 @param lists the lists to choose elements from, in the order that the elements chosen from      those lists should appear in the resulting lists
 @return the Cartesian product, as an immutable list containing immutable lists
 @throw IllegalArgumentExceptionif the size of the cartesian product would be greater than
      <code>Integer.MAX_VALUE</code>
 @throw NullPointerExceptionif <code>lists</code>, any one of the <code>lists</code>, or any element of
      a provided list is null
 @since 19.0
 */
+ (id<JavaUtilList>)cartesianProductWithJavaUtilList:(id<JavaUtilList>)lists;

/*!
 @brief Returns every possible list that can be formed by choosing one element from each of the given
  lists in order; the "n-ary <a href="http://en.wikipedia.org/wiki/Cartesian_product">Cartesian
  product</a>" of the lists.For example: 
 @code
 Lists.cartesianProduct(ImmutableList.of(
      ImmutableList.of(1, 2),
      ImmutableList.of("A", "B", "C"))) 
 
@endcode
  
 <p>returns a list containing six lists in the following order: 
 <ul>
    <li><code>ImmutableList.of(1, "A")</code>
    <li><code>ImmutableList.of(1, "B")</code>
    <li><code>ImmutableList.of(1, "C")</code>
    <li><code>ImmutableList.of(2, "A")</code>
    <li><code>ImmutableList.of(2, "B")</code>
    <li><code>ImmutableList.of(2, "C")</code>
  </ul>
  
 <p>The result is guaranteed to be in the "traditional", lexicographical order for Cartesian
  products that you would get from nesting for loops: 
 @code
 for (B b0 : lists.get(0)) {
    for (B b1 : lists.get(1)) {
      ...
 ImmutableList<B> tuple = ImmutableList.of(b0, b1, ...);
      // operate on tuple
    }  }  
 
@endcode
  
 <p>Note that if any input list is empty, the Cartesian product will also be empty. If no lists
  at all are provided (an empty list), the resulting Cartesian product has one element, an empty
  list (counter-intuitive, but mathematically consistent). 
 <p><i>Performance notes:</i> while the cartesian product of lists of size <code>m, n, p</code> is a
  list of size <code>m x n x p</code>, its actual memory consumption is much smaller. When the
  cartesian product is constructed, the input lists are merely copied. Only as the resulting list
  is iterated are the individual lists created, and these are not retained after iteration.
 @param lists the lists to choose elements from, in the order that the elements chosen from      those lists should appear in the resulting lists
 @return the Cartesian product, as an immutable list containing immutable lists
 @throw IllegalArgumentExceptionif the size of the cartesian product would be greater than
      <code>Integer.MAX_VALUE</code>
 @throw NullPointerExceptionif <code>lists</code>, any one of the <code>lists</code>, or any element of
      a provided list is null
 @since 19.0
 */
+ (id<JavaUtilList>)cartesianProductWithJavaUtilListArray:(IOSObjectArray *)lists;

/*!
 @brief Returns a view of the specified <code>CharSequence</code> as a <code>List<Character></code>, viewing 
 <code>sequence</code> as a sequence of Unicode code units.The view does not support any
  modification operations, but reflects any changes to the underlying character sequence.
 @param sequence the character sequence to view as a <code>List</code>  of characters
 @return an <code>List<Character></code> view of the character sequence
 @since 7.0
 */
+ (id<JavaUtilList>)charactersOfWithJavaLangCharSequence:(id<JavaLangCharSequence>)sequence;

/*!
 @brief Returns a view of the specified string as an immutable list of <code>Character</code> values.
 @since 7.0
 */
+ (ComGoogleCommonCollectImmutableList *)charactersOfWithNSString:(NSString *)string;

/*!
 @brief Creates a <i>mutable</i>, empty <code>ArrayList</code> instance (for Java 6 and earlier).
 <p><b>Note:</b> if mutability is not required, use <code>ImmutableList.of()</code> instead. 
 <p><b>Note for Java 7 and later:</b> this method is now unnecessary and should be treated as
  deprecated. Instead, use the <code>ArrayList</code> constructor
  directly, taking advantage of the new <a href="http://goo.gl/iz2Wi">"diamond" syntax</a>.
 */
+ (JavaUtilArrayList *)newArrayList OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates a <i>mutable</i> <code>ArrayList</code> instance containing the given elements.
 <p><b>Note:</b> essentially the only reason to use this method is when you will need to add or
  remove elements later. Otherwise, for non-null elements use <code>ImmutableList.of()</code> (for
  varargs) or <code>ImmutableList.copyOf(Object[])</code> (for an array) instead. If any elements
  might be null, or you need support for <code>Object)</code>, use <code>Arrays.asList</code>
 .
  
 <p>Note that even when you do need the ability to add or remove, this method provides only a
  tiny bit of syntactic sugar for <code>newArrayList(</code><code>asList</code><code>(...))</code>
 , or for creating an empty list then calling <code>Collections.addAll</code>. This method is
  not actually very useful and will likely be deprecated in the future.
 */
+ (JavaUtilArrayList *)newArrayListWithNSObjectArray:(IOSObjectArray *)elements OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates a <i>mutable</i> <code>ArrayList</code> instance containing the given elements; a very thin
  shortcut for creating an empty list then calling <code>Iterables.addAll</code>.
 <p><b>Note:</b> if mutability is not required and the elements are non-null, use <code>ImmutableList.copyOf(Iterable)</code>
  instead. (Or, change <code>elements</code> to be a <code>FluentIterable</code>
  and call <code>elements.toList()</code>.)
  
 <p><b>Note for Java 7 and later:</b> if <code>elements</code> is a <code>Collection</code>, you don't
  need this method. Use the <code>ArrayList</code> constructor
  directly, taking advantage of the new <a href="http://goo.gl/iz2Wi">"diamond"
  syntax</a>.
 */
+ (JavaUtilArrayList *)newArrayListWithJavaLangIterable:(id<JavaLangIterable>)elements OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates a <i>mutable</i> <code>ArrayList</code> instance containing the given elements; a very thin
  shortcut for creating an empty list and then calling <code>Iterators.addAll</code>.
 <p><b>Note:</b> if mutability is not required and the elements are non-null, use <code>ImmutableList.copyOf(Iterator)</code>
  instead.
 */
+ (JavaUtilArrayList *)newArrayListWithJavaUtilIterator:(id<JavaUtilIterator>)elements OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates an <code>ArrayList</code> instance backed by an array with the specified initial size;
  simply delegates to <code>ArrayList.ArrayList(int)</code>.
 <p><b>Note for Java 7 and later:</b> this method is now unnecessary and should be treated as
  deprecated. Instead, use <code>new</code><code>ArrayList</code><code><>(int)</code>
  directly, taking advantage of the new <a href="http://goo.gl/iz2Wi">"diamond" syntax</a>.
  (Unlike here, there is no risk of overload ambiguity, since the <code>ArrayList</code> constructors
  very wisely did not accept varargs.)
 @param initialArraySize the exact size of the initial backing array for the returned array list      (
 <code>ArrayList</code>  documentation calls this value the "capacity")
 @return a new, empty <code>ArrayList</code> which is guaranteed not to resize itself unless its size
      reaches <code>initialArraySize + 1</code>
 @throw IllegalArgumentExceptionif <code>initialArraySize</code> is negative
 */
+ (JavaUtilArrayList *)newArrayListWithCapacityWithInt:(jint)initialArraySize OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates an <code>ArrayList</code> instance to hold <code>estimatedSize</code> elements, <i>plus</i> an
  unspecified amount of padding; you almost certainly mean to call <code>newArrayListWithCapacity</code>
  (see that method for further advice on usage).
 <p><b>Note:</b> This method will soon be deprecated. Even in the rare case that you do want
  some amount of padding, it's best if you choose your desired amount explicitly.
 @param estimatedSize an estimate of the eventual <code>List.size()</code>  of the new list
 @return a new, empty <code>ArrayList</code>, sized appropriately to hold the estimated number of
      elements
 @throw IllegalArgumentExceptionif <code>estimatedSize</code> is negative
 */
+ (JavaUtilArrayList *)newArrayListWithExpectedSizeWithInt:(jint)estimatedSize OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates an empty <code>CopyOnWriteArrayList</code> instance.
 <p><b>Note:</b> if you need an immutable empty <code>List</code>, use <code>Collections.emptyList</code>
  instead.
 @return a new, empty <code>CopyOnWriteArrayList</code>
 @since 12.0
 */
+ (JavaUtilConcurrentCopyOnWriteArrayList *)newCopyOnWriteArrayList OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates a <code>CopyOnWriteArrayList</code> instance containing the given elements.
 @param elements the elements that the list should contain, in order
 @return a new <code>CopyOnWriteArrayList</code> containing those elements
 @since 12.0
 */
+ (JavaUtilConcurrentCopyOnWriteArrayList *)newCopyOnWriteArrayListWithJavaLangIterable:(id<JavaLangIterable>)elements OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates a <i>mutable</i>, empty <code>LinkedList</code> instance (for Java 6 and earlier).
 <p><b>Note:</b> if you won't be adding any elements to the list, use <code>ImmutableList.of()</code>
  instead. 
 <p><b>Performance note:</b> <code>ArrayList</code> and <code>java.util.ArrayDeque</code> consistently
  outperform <code>LinkedList</code> except in certain rare and specific situations. Unless you have
  spent a lot of time benchmarking your specific needs, use one of those instead. 
 <p><b>Note for Java 7 and later:</b> this method is now unnecessary and should be treated as
  deprecated. Instead, use the <code>LinkedList</code> constructor
  directly, taking advantage of the new <a href="http://goo.gl/iz2Wi">"diamond"
  syntax</a>.
 */
+ (JavaUtilLinkedList *)newLinkedList OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates a <i>mutable</i> <code>LinkedList</code> instance containing the given elements; a very thin
  shortcut for creating an empty list then calling <code>Iterables.addAll</code>.
 <p><b>Note:</b> if mutability is not required and the elements are non-null, use <code>ImmutableList.copyOf(Iterable)</code>
  instead. (Or, change <code>elements</code> to be a <code>FluentIterable</code>
  and call <code>elements.toList()</code>.)
  
 <p><b>Performance note:</b> <code>ArrayList</code> and <code>java.util.ArrayDeque</code> consistently
  outperform <code>LinkedList</code> except in certain rare and specific situations. Unless you have
  spent a lot of time benchmarking your specific needs, use one of those instead. 
 <p><b>Note for Java 7 and later:</b> if <code>elements</code> is a <code>Collection</code>, you don't
  need this method. Use the <code>LinkedList</code> constructor
  directly, taking advantage of the new <a href="http://goo.gl/iz2Wi">"diamond"
  syntax</a>.
 */
+ (JavaUtilLinkedList *)newLinkedListWithJavaLangIterable:(id<JavaLangIterable>)elements OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns consecutive sublists of a list, each of the same
  size (the final list may be smaller).For example, partitioning a list containing <code>[a, b,
  c, d, e]</code>
  with a partition size of 3 yields <code>[[a, b, c], [d, e]]</code> -- an outer list
  containing two inner lists of three and two elements, all in the original order.
 <p>The outer list is unmodifiable, but reflects the latest state of the source list. The inner
  lists are sublist views of the original list, produced on demand using <code>int)</code>
 , and are subject to all the usual caveats about modification as explained in that API.
 @param list the list to return consecutive sublists of
 @param size the desired size of each sublist (the last may be smaller)
 @return a list of consecutive sublists
 @throw IllegalArgumentExceptionif <code>partitionSize</code> is nonpositive
 */
+ (id<JavaUtilList>)partitionWithJavaUtilList:(id<JavaUtilList>)list
                                      withInt:(jint)size;

/*!
 @brief Returns a reversed view of the specified list.For example, <code>Lists.reverse(Arrays.asList(1, 2, 3))</code>
  returns a list containing <code>3, 2, 1</code>.
 The returned
  list is backed by this list, so changes in the returned list are reflected in this list, and
  vice-versa. The returned list supports all of the optional list operations supported by this
  list. 
 <p>The returned list is random-access if the specified list is random access.
 @since 7.0
 */
+ (id<JavaUtilList>)reverseWithJavaUtilList:(id<JavaUtilList>)list;

/*!
 @brief Returns a list that applies <code>function</code> to each element of <code>fromList</code>.The returned
  list is a transformed view of <code>fromList</code>; changes to <code>fromList</code> will be reflected
  in the returned list and vice versa.
 <p>Since functions are not reversible, the transform is one-way and new items cannot be stored
  in the returned list. The <code>add</code>, <code>addAll</code> and <code>set</code> methods are unsupported
  in the returned list. 
 <p>The function is applied lazily, invoked when needed. This is necessary for the returned list
  to be a view, but it means that the function will be applied many times for bulk operations
  like <code>List.contains</code> and <code>List.hashCode</code>. For this to perform well, <code>function</code>
  should be fast. To avoid lazy evaluation when the returned list doesn't need to be a
  view, copy the returned list into a new list of your choosing. 
 <p>If <code>fromList</code> implements <code>RandomAccess</code>, so will the returned list. The returned
  list is threadsafe if the supplied list and function are. 
 <p>If only a <code>Collection</code> or <code>Iterable</code> input is available, use <code>Collections2.transform</code>
  or <code>Iterables.transform</code>.
  
 <p><b>Note:</b> serializing the returned list is implemented by serializing <code>fromList</code>,
  its contents, and <code>function</code> -- <i>not</i> by serializing the transformed values. This
  can lead to surprising behavior, so serializing the returned list is <b>not recommended</b>.
  Instead, copy the list using <code>ImmutableList.copyOf(Collection)</code> (for example), then
  serialize the copy. Other methods similar to this do not implement serialization at all for
  this reason. 
 <p><b>Java 8 users:</b> many use cases for this method are better addressed by <code>java.util.stream.Stream</code>
 . This method is not being deprecated, but we gently encourage you
  to migrate to streams.
 */
+ (id<JavaUtilList>)transformWithJavaUtilList:(id<JavaUtilList>)fromList
              withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

#pragma mark Package-Private

/*!
 @brief An implementation of <code>Collection)</code>.
 */
+ (jboolean)addAllImplWithJavaUtilList:(id<JavaUtilList>)list
                               withInt:(jint)index
                  withJavaLangIterable:(id<JavaLangIterable>)elements;

/*!
 @brief Used to avoid http://bugs.sun.com/view_bug.do?
 bug_id=6558557
 */
+ (id<JavaUtilList>)castWithJavaLangIterable:(id<JavaLangIterable>)iterable;

+ (jint)computeArrayListCapacityWithInt:(jint)arraySize;

/*!
 @brief An implementation of <code>List.equals(Object)</code>.
 */
+ (jboolean)equalsImplWithJavaUtilList:(id<JavaUtilList>)thisList
                                withId:(id __nullable)other;

/*!
 @brief An implementation of <code>List.hashCode()</code>.
 */
+ (jint)hashCodeImplWithJavaUtilList:(id<JavaUtilList>)list;

/*!
 @brief An implementation of <code>List.indexOf(Object)</code>.
 */
+ (jint)indexOfImplWithJavaUtilList:(id<JavaUtilList>)list
                             withId:(id __nullable)element;

/*!
 @brief An implementation of <code>List.lastIndexOf(Object)</code>.
 */
+ (jint)lastIndexOfImplWithJavaUtilList:(id<JavaUtilList>)list
                                 withId:(id __nullable)element;

/*!
 @brief Returns an implementation of <code>List.listIterator(int)</code>.
 */
+ (id<JavaUtilListIterator>)listIteratorImplWithJavaUtilList:(id<JavaUtilList>)list
                                                     withInt:(jint)index;

/*!
 @brief An implementation of <code>int)</code>.
 */
+ (id<JavaUtilList>)subListImplWithJavaUtilList:(id<JavaUtilList>)list
                                        withInt:(jint)fromIndex
                                        withInt:(jint)toIndex;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectLists)

FOUNDATION_EXPORT JavaUtilArrayList *ComGoogleCommonCollectLists_newArrayList(void);

FOUNDATION_EXPORT JavaUtilArrayList *ComGoogleCommonCollectLists_newArrayListWithNSObjectArray_(IOSObjectArray *elements);

FOUNDATION_EXPORT JavaUtilArrayList *ComGoogleCommonCollectLists_newArrayListWithJavaLangIterable_(id<JavaLangIterable> elements);

FOUNDATION_EXPORT JavaUtilArrayList *ComGoogleCommonCollectLists_newArrayListWithJavaUtilIterator_(id<JavaUtilIterator> elements);

FOUNDATION_EXPORT jint ComGoogleCommonCollectLists_computeArrayListCapacityWithInt_(jint arraySize);

FOUNDATION_EXPORT JavaUtilArrayList *ComGoogleCommonCollectLists_newArrayListWithCapacityWithInt_(jint initialArraySize);

FOUNDATION_EXPORT JavaUtilArrayList *ComGoogleCommonCollectLists_newArrayListWithExpectedSizeWithInt_(jint estimatedSize);

FOUNDATION_EXPORT JavaUtilLinkedList *ComGoogleCommonCollectLists_newLinkedList(void);

FOUNDATION_EXPORT JavaUtilLinkedList *ComGoogleCommonCollectLists_newLinkedListWithJavaLangIterable_(id<JavaLangIterable> elements);

FOUNDATION_EXPORT JavaUtilConcurrentCopyOnWriteArrayList *ComGoogleCommonCollectLists_newCopyOnWriteArrayList(void);

FOUNDATION_EXPORT JavaUtilConcurrentCopyOnWriteArrayList *ComGoogleCommonCollectLists_newCopyOnWriteArrayListWithJavaLangIterable_(id<JavaLangIterable> elements);

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonCollectLists_asListWithId_withNSObjectArray_(id first, IOSObjectArray *rest);

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonCollectLists_asListWithId_withId_withNSObjectArray_(id first, id second, IOSObjectArray *rest);

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonCollectLists_cartesianProductWithJavaUtilList_(id<JavaUtilList> lists);

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonCollectLists_cartesianProductWithJavaUtilListArray_(IOSObjectArray *lists);

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonCollectLists_transformWithJavaUtilList_withComGoogleCommonBaseFunction_(id<JavaUtilList> fromList, id<ComGoogleCommonBaseFunction> function);

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonCollectLists_partitionWithJavaUtilList_withInt_(id<JavaUtilList> list, jint size);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList *ComGoogleCommonCollectLists_charactersOfWithNSString_(NSString *string);

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonCollectLists_charactersOfWithJavaLangCharSequence_(id<JavaLangCharSequence> sequence);

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonCollectLists_reverseWithJavaUtilList_(id<JavaUtilList> list);

FOUNDATION_EXPORT jint ComGoogleCommonCollectLists_hashCodeImplWithJavaUtilList_(id<JavaUtilList> list);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectLists_equalsImplWithJavaUtilList_withId_(id<JavaUtilList> thisList, id other);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectLists_addAllImplWithJavaUtilList_withInt_withJavaLangIterable_(id<JavaUtilList> list, jint index, id<JavaLangIterable> elements);

FOUNDATION_EXPORT jint ComGoogleCommonCollectLists_indexOfImplWithJavaUtilList_withId_(id<JavaUtilList> list, id element);

FOUNDATION_EXPORT jint ComGoogleCommonCollectLists_lastIndexOfImplWithJavaUtilList_withId_(id<JavaUtilList> list, id element);

FOUNDATION_EXPORT id<JavaUtilListIterator> ComGoogleCommonCollectLists_listIteratorImplWithJavaUtilList_withInt_(id<JavaUtilList> list, jint index);

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonCollectLists_subListImplWithJavaUtilList_withInt_withInt_(id<JavaUtilList> list, jint fromIndex, jint toIndex);

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonCollectLists_castWithJavaLangIterable_(id<JavaLangIterable> iterable);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectLists)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectLists")
