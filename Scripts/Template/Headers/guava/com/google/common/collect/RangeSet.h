//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/RangeSet.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectRangeSet")
#ifdef RESTRICT_ComGoogleCommonCollectRangeSet
#define INCLUDE_ALL_ComGoogleCommonCollectRangeSet 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectRangeSet 1
#endif
#undef RESTRICT_ComGoogleCommonCollectRangeSet

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectRangeSet_) && (INCLUDE_ALL_ComGoogleCommonCollectRangeSet || defined(INCLUDE_ComGoogleCommonCollectRangeSet))
#define ComGoogleCommonCollectRangeSet_

@class ComGoogleCommonCollectRange;
@protocol JavaLangComparable;
@protocol JavaLangIterable;
@protocol JavaUtilSet;

/*!
 @brief A set comprising zero or more nonempty, disconnected
  ranges of type <code>C</code>.
 <p>Implementations that choose to support the <code>add(Range)</code> operation are required to
  ignore empty ranges and coalesce connected ranges. For example: 
 @code
 RangeSet<Integer> rangeSet = TreeRangeSet.create();
  rangeSet.add(Range.closed(1, 10)); // {[1, 10]}
  rangeSet.add(Range.closedOpen(11, 15)); // disconnected range; {[1, 10], [11, 15)}
  rangeSet.add(Range.closedOpen(15, 20)); // connected range; {[1, 10], [11, 20)}
  rangeSet.add(Range.openClosed(0, 0)); // empty range; {[1, 10], [11, 20)}
  rangeSet.remove(Range.open(5, 10)); // splits [1, 10]; {[1, 5], [10, 10], [11, 20)} 
 
@endcode
  
 <p>Note that the behavior of <code>Range.isEmpty()</code> and <code>Range.isConnected(Range)</code> may not
  be as expected on discrete ranges. See the Javadoc of those methods for details. 
 <p>For a <code>Set</code> whose contents are specified by a <code>Range</code>, see <code>ContiguousSet</code>.
  
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/NewCollectionTypesExplained#rangeset">
  RangeSets</a>.
 @author Kevin Bourrillion
 @author Louis Wasserman
 @since 14.0
 */
@protocol ComGoogleCommonCollectRangeSet < JavaObject >

/*!
 @brief Determines whether any of this range set's member ranges contains <code>value</code>.
 */
- (jboolean)containsWithJavaLangComparable:(id<JavaLangComparable>)value;

/*!
 @brief Returns the unique range from this range set that contains <code>value</code>
 , or <code>null</code> if this range set does not contain <code>value</code>.
 */
- (ComGoogleCommonCollectRange *)rangeContainingWithJavaLangComparable:(id<JavaLangComparable>)value;

/*!
 @brief Returns <code>true</code> if there exists a non-empty range enclosed by both a member range in this
  range set and the specified range.This is equivalent to calling <code>subRangeSet(otherRange)</code>
  and testing whether the resulting range set is non-empty.
 @since 20.0
 */
- (jboolean)intersectsWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)otherRange;

/*!
 @brief Returns <code>true</code> if there exists a member range in this range set which encloses
  the specified range.
 */
- (jboolean)enclosesWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)otherRange;

/*!
 @brief Returns <code>true</code> if for each member range in <code>other</code> there exists a member range in
  this range set which encloses it.It follows that <code>this.contains(value)</code>
  whenever <code>other.contains(value)</code>.
 Returns <code>true</code> if <code>other</code>
  is empty. 
 <p>This is equivalent to checking if this range set <code>encloses</code> each of the ranges in 
 <code>other</code>.
 */
- (jboolean)enclosesAllWithComGoogleCommonCollectRangeSet:(id<ComGoogleCommonCollectRangeSet>)other;

/*!
 @brief Returns <code>true</code> if for each range in <code>other</code> there exists a member range in this
  range set which encloses it.Returns <code>true</code> if <code>other</code>
  is empty.
 <p>This is equivalent to checking if this range set <code>encloses</code> each range in <code>other</code>
 .
 @since 21.0
 */
- (jboolean)enclosesAllWithJavaLangIterable:(id<JavaLangIterable>)other;

/*!
 @brief Returns <code>true</code> if this range set contains no ranges.
 */
- (jboolean)isEmpty;

/*!
 @brief Returns the minimal range which encloses all ranges in this
  range set.
 @throw NoSuchElementExceptionif this range set is empty
 */
- (ComGoogleCommonCollectRange *)span;

/*!
 @brief Returns a view of the disconnected ranges that make up this
  range set.The returned set may be empty.
 The iterators returned by its <code>Iterable.iterator</code>
  method return the ranges in increasing order of lower bound (equivalently,
  of upper bound).
 */
- (id<JavaUtilSet>)asRanges;

/*!
 @brief Returns a descending view of the disconnected ranges that make
  up this range set.The returned set may be empty.
 The iterators returned by its <code>Iterable.iterator</code>
  method return the ranges in decreasing order of lower bound (equivalently,
  of upper bound).
 @since 19.0
 */
- (id<JavaUtilSet>)asDescendingSetOfRanges;

/*!
 @brief Returns a view of the complement of this <code>RangeSet</code>.
 <p>The returned view supports the <code>add</code> operation if this <code>RangeSet</code> supports 
 <code>remove</code>, and vice versa.
 */
- (id<ComGoogleCommonCollectRangeSet>)complement;

/*!
 @brief Returns a view of the intersection of this <code>RangeSet</code> with the specified range.
 <p>The returned view supports all optional operations supported by this <code>RangeSet</code>, with
  the caveat that an <code>IllegalArgumentException</code> is thrown on an attempt to add
  any range not enclosed by <code>view</code>.
 */
- (id<ComGoogleCommonCollectRangeSet>)subRangeSetWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)view;

/*!
 @brief Adds the specified range to this <code>RangeSet</code> (optional operation).That is, for equal
  range sets a and b, the result of <code>a.add(range)</code> is that <code>a</code> will be the minimal
  range set for which both <code>a.enclosesAll(b)</code> and <code>a.encloses(range)</code>.
 <p>Note that <code>range</code> will be coalesced with any ranges in
  the range set that are connected with it. Moreover, if 
 <code>range</code> is empty, this is a no-op.
 @throw UnsupportedOperationExceptionif this range set does not support the <code>add</code>
      operation
 */
- (void)addWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range;

/*!
 @brief Removes the specified range from this <code>RangeSet</code> (optional operation).After this
  operation, if <code>range.contains(c)</code>, <code>this.contains(c)</code> will return <code>false</code>.
 <p>If <code>range</code> is empty, this is a no-op.
 @throw UnsupportedOperationExceptionif this range set does not support the <code>remove</code>
      operation
 */
- (void)removeWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range;

/*!
 @brief Removes all ranges from this <code>RangeSet</code> (optional operation).After this operation, 
 <code>this.contains(c)</code> will return false for all <code>c</code>.
 <p>This is equivalent to <code>remove(Range.all())</code>.
 @throw UnsupportedOperationExceptionif this range set does not support the <code>clear</code>
      operation
 */
- (void)clear;

/*!
 @brief Adds all of the ranges from the specified range set to this range set (optional operation).
 After this operation, this range set is the minimal range set that encloses
  both the original range set and <code>other</code>.
  
 <p>This is equivalent to calling <code>add</code> on each of the ranges in <code>other</code> in turn.
 @throw UnsupportedOperationExceptionif this range set does not support the <code>addAll</code>
      operation
 */
- (void)addAllWithComGoogleCommonCollectRangeSet:(id<ComGoogleCommonCollectRangeSet>)other;

/*!
 @brief Adds all of the specified ranges to this range set (optional operation).After this operation,
  this range set is the minimal range set that encloses both
  the original range set and each range in <code>other</code>.
 <p>This is equivalent to calling <code>add</code> on each of the ranges in <code>other</code> in turn.
 @throw UnsupportedOperationExceptionif this range set does not support the <code>addAll</code>
      operation
 @since 21.0
 */
- (void)addAllWithJavaLangIterable:(id<JavaLangIterable>)ranges;

/*!
 @brief Removes all of the ranges from the specified range set from this range set (optional
  operation).After this operation, if <code>other.contains(c)</code>, <code>this.contains(c)</code> will
  return <code>false</code>.
 <p>This is equivalent to calling <code>remove</code> on each of the ranges in <code>other</code> in
  turn.
 @throw UnsupportedOperationExceptionif this range set does not support the <code>removeAll</code>
      operation
 */
- (void)removeAllWithComGoogleCommonCollectRangeSet:(id<ComGoogleCommonCollectRangeSet>)other;

/*!
 @brief Removes all of the specified ranges from this range set (optional operation).
 <p>This is equivalent to calling <code>remove</code> on each of the ranges in <code>other</code> in
  turn.
 @throw UnsupportedOperationExceptionif this range set does not support the <code>removeAll</code>
      operation
 @since 21.0
 */
- (void)removeAllWithJavaLangIterable:(id<JavaLangIterable>)ranges;

/*!
 @brief Returns <code>true</code> if <code>obj</code> is another <code>RangeSet</code> that contains the same ranges
  according to <code>Range.equals(Object)</code>.
 */
- (jboolean)isEqual:(id __nullable)obj;

/*!
 @brief Returns <code>asRanges().hashCode()</code>.
 */
- (NSUInteger)hash;

/*!
 @brief Returns a readable string representation of this range set.For example, if this <code>RangeSet</code>
  consisted of <code>Range.closed(1, 3)</code> and <code>Range.greaterThan(4)</code>, this might
  return <code>" [1..3](4..+∞)</code>"}.
 */
- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRangeSet)

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectRangeSet_enclosesAllWithJavaLangIterable_(id<ComGoogleCommonCollectRangeSet> self, id<JavaLangIterable> other);

FOUNDATION_EXPORT void ComGoogleCommonCollectRangeSet_addAllWithJavaLangIterable_(id<ComGoogleCommonCollectRangeSet> self, id<JavaLangIterable> ranges);

FOUNDATION_EXPORT void ComGoogleCommonCollectRangeSet_removeAllWithJavaLangIterable_(id<ComGoogleCommonCollectRangeSet> self, id<JavaLangIterable> ranges);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRangeSet)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectRangeSet")
