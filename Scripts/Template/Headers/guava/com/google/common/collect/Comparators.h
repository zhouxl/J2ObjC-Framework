//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/Comparators.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectComparators")
#ifdef RESTRICT_ComGoogleCommonCollectComparators
#define INCLUDE_ALL_ComGoogleCommonCollectComparators 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectComparators 1
#endif
#undef RESTRICT_ComGoogleCommonCollectComparators

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectComparators_) && (INCLUDE_ALL_ComGoogleCommonCollectComparators || defined(INCLUDE_ComGoogleCommonCollectComparators))
#define ComGoogleCommonCollectComparators_

@protocol JavaLangIterable;
@protocol JavaUtilComparator;
@protocol JavaUtilStreamCollector;

/*!
 @brief Provides static methods for working with <code>Comparator</code> instances.For many other helpful
  comparator utilities, see either <code>Comparator</code> itself (for Java 8 or later), or <code>com.google.common.collect.Ordering</code>
  (otherwise).
 <h3>Relationship to <code>Ordering</code></h3>
  
 <p>In light of the significant enhancements to <code>Comparator</code> in Java 8, the overwhelming
  majority of usages of <code>Ordering</code> can be written using only built-in JDK APIs. This class is
  intended to "fill the gap" and provide those features of <code>Ordering</code> not already provided by
  the JDK.
 @since 21.0
 @author Louis Wasserman
 */
@interface ComGoogleCommonCollectComparators : NSObject

#pragma mark Public

/*!
 @brief Returns a comparator of <code>Optional</code> values which treats <code>Optional.empty</code> as less
  than all other values, and orders the rest using <code>valueComparator</code> on the contained
  value.
 @since 22.0
 */
+ (id<JavaUtilComparator>)emptiesFirstWithJavaUtilComparator:(id<JavaUtilComparator>)valueComparator;

/*!
 @brief Returns a comparator of <code>Optional</code> values which treats <code>Optional.empty</code> as greater
  than all other values, and orders the rest using <code>valueComparator</code> on the contained
  value.
 @since 22.0
 */
+ (id<JavaUtilComparator>)emptiesLastWithJavaUtilComparator:(id<JavaUtilComparator>)valueComparator;

/*!
 @brief Returns a <code>Collector</code> that returns the <code>k</code> greatest (relative to the specified 
 <code>Comparator</code>) input elements, in descending order, as an unmodifiable <code>List</code>.Ties
  are broken arbitrarily.
 <p>For example: 
 @code
 Stream.of("foo", "quux", "banana", "elephant")
      .collect(greatest(2, comparingInt(String::length)))
  // returns {"elephant", "banana"} 
 
@endcode
  
 <p>This <code>Collector</code> uses O(k) memory and takes expected time O(n) (worst-case O(n log
  k)), as opposed to e.g. <code>Stream.sorted(comparator.reversed()).limit(k)</code>, which currently
  takes O(n log n) time and O(n) space.
 @throw IllegalArgumentExceptionif <code>k < 0</code>
 @since 22.0
 */
+ (id<JavaUtilStreamCollector>)greatestWithInt:(jint)k
                        withJavaUtilComparator:(id<JavaUtilComparator>)comparator;

/*!
 @brief Returns <code>true</code> if each element in <code>iterable</code> after the first is greater than or
  equal to the element that preceded it, according to the specified comparator.Note that this is
  always true when the iterable has fewer than two elements.
 */
+ (jboolean)isInOrderWithJavaLangIterable:(id<JavaLangIterable>)iterable
                   withJavaUtilComparator:(id<JavaUtilComparator>)comparator;

/*!
 @brief Returns <code>true</code> if each element in <code>iterable</code> after the first is <i>strictly</i>
  greater than the element that preceded it, according to the specified comparator.Note that
  this is always true when the iterable has fewer than two elements.
 */
+ (jboolean)isInStrictOrderWithJavaLangIterable:(id<JavaLangIterable>)iterable
                         withJavaUtilComparator:(id<JavaUtilComparator>)comparator;

/*!
 @brief Returns a <code>Collector</code> that returns the <code>k</code> smallest (relative to the specified 
 <code>Comparator</code>) input elements, in ascending order, as an unmodifiable <code>List</code>.Ties
  are broken arbitrarily.
 <p>For example: 
 @code
 Stream.of("foo", "quux", "banana", "elephant")
      .collect(least(2, comparingInt(String::length)))
  // returns {"foo", "quux"} 
 
@endcode
  
 <p>This <code>Collector</code> uses O(k) memory and takes expected time O(n) (worst-case O(n log
  k)), as opposed to e.g. <code>Stream.sorted(comparator).limit(k)</code>, which currently takes O(n
  log n) time and O(n) space.
 @throw IllegalArgumentExceptionif <code>k < 0</code>
 @since 22.0
 */
+ (id<JavaUtilStreamCollector>)leastWithInt:(jint)k
                     withJavaUtilComparator:(id<JavaUtilComparator>)comparator;

/*!
 @brief Returns a new comparator which sorts iterables by comparing corresponding elements pairwise
  until a nonzero result is found; imposes "dictionary order."
 If the end of one iterable is
  reached, but not the other, the shorter iterable is considered to be less than the longer one.
 For example, a lexicographical natural ordering over integers considers <code>[] < [1] < [1,
  1] < [1, 2] < [2]</code>
 .
  
 <p>Note that <code>Collections.reverseOrder(lexicographical(comparator))</code> is not equivalent to 
 <code>lexicographical(Collections.reverseOrder(comparator))</code> (consider how each would order 
 <code>[1]</code> and <code>[1, 1]</code>).
 */
+ (id<JavaUtilComparator>)lexicographicalWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectComparators)

FOUNDATION_EXPORT id<JavaUtilComparator> ComGoogleCommonCollectComparators_lexicographicalWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectComparators_isInOrderWithJavaLangIterable_withJavaUtilComparator_(id<JavaLangIterable> iterable, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectComparators_isInStrictOrderWithJavaLangIterable_withJavaUtilComparator_(id<JavaLangIterable> iterable, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT id<JavaUtilStreamCollector> ComGoogleCommonCollectComparators_leastWithInt_withJavaUtilComparator_(jint k, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT id<JavaUtilStreamCollector> ComGoogleCommonCollectComparators_greatestWithInt_withJavaUtilComparator_(jint k, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT id<JavaUtilComparator> ComGoogleCommonCollectComparators_emptiesFirstWithJavaUtilComparator_(id<JavaUtilComparator> valueComparator);

FOUNDATION_EXPORT id<JavaUtilComparator> ComGoogleCommonCollectComparators_emptiesLastWithJavaUtilComparator_(id<JavaUtilComparator> valueComparator);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectComparators)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectComparators")