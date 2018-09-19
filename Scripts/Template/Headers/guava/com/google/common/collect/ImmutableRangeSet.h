//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/ImmutableRangeSet.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableRangeSet")
#ifdef RESTRICT_ComGoogleCommonCollectImmutableRangeSet
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableRangeSet 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableRangeSet 1
#endif
#undef RESTRICT_ComGoogleCommonCollectImmutableRangeSet

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectImmutableRangeSet_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableRangeSet || defined(INCLUDE_ComGoogleCommonCollectImmutableRangeSet))
#define ComGoogleCommonCollectImmutableRangeSet_

#define RESTRICT_ComGoogleCommonCollectAbstractRangeSet 1
#define INCLUDE_ComGoogleCommonCollectAbstractRangeSet 1
#include "../../../../../com/google/common/collect/AbstractRangeSet.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../../java/io/Serializable.h"

@class ComGoogleCommonCollectDiscreteDomain;
@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableRangeSet_Builder;
@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonCollectImmutableSortedSet;
@class ComGoogleCommonCollectRange;
@protocol ComGoogleCommonCollectRangeSet;
@protocol JavaLangComparable;
@protocol JavaLangIterable;
@protocol JavaUtilStreamCollector;

/*!
 @brief A <code>RangeSet</code> whose contents will never change, with many other important properties
  detailed at <code>ImmutableCollection</code>.
 @author Louis Wasserman
 @since 14.0
 */
@interface ComGoogleCommonCollectImmutableRangeSet : ComGoogleCommonCollectAbstractRangeSet < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Guaranteed to throw an exception and leave the <code>RangeSet</code> unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (void)addWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range __attribute__((deprecated));

/*!
 @brief Guaranteed to throw an exception and leave the <code>RangeSet</code> unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (void)addAllWithJavaLangIterable:(id<JavaLangIterable>)other __attribute__((deprecated));

/*!
 @brief Guaranteed to throw an exception and leave the <code>RangeSet</code> unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (void)addAllWithComGoogleCommonCollectRangeSet:(id<ComGoogleCommonCollectRangeSet>)other __attribute__((deprecated));

- (ComGoogleCommonCollectImmutableSet *)asDescendingSetOfRanges;

- (ComGoogleCommonCollectImmutableSet *)asRanges;

/*!
 @brief Returns an <code>ImmutableSortedSet</code> containing the same values in the given domain 
 contained by this range set.
 <p><b>Note:</b> <code>a.asSet(d).equals(b.asSet(d))</code> does not imply <code>a.equals(b)</code>! For
  example, <code>a</code> and <code>b</code> could be <code>[2..4]</code> and <code>(1..5)</code>, or the empty
  ranges <code>[3..3)</code> and <code>[4..4)</code>.
  
 <p><b>Warning:</b> Be extremely careful what you do with the <code>asSet</code> view of a large
  range set (such as <code>ImmutableRangeSet.of(Range.greaterThan(0))</code>). Certain operations on
  such a set can be performed efficiently, but others (such as <code>Set.hashCode</code> or <code>Collections.frequency</code>
 ) can cause major performance problems. 
 <p>The returned set's <code>Object.toString</code> method returns a short-hand form of the set's
  contents, such as <code>"[1..100]</code>"}.
 @throw IllegalArgumentExceptionif neither this range nor the domain has a lower bound, or if
      neither has an upper bound
 */
- (ComGoogleCommonCollectImmutableSortedSet *)asSetWithComGoogleCommonCollectDiscreteDomain:(ComGoogleCommonCollectDiscreteDomain *)domain;

/*!
 @brief Returns a new builder for an immutable range set.
 */
+ (ComGoogleCommonCollectImmutableRangeSet_Builder *)builder;

- (ComGoogleCommonCollectImmutableRangeSet *)complement;

/*!
 @brief Returns an <code>ImmutableRangeSet</code> containing each of the specified disjoint ranges.
 Overlapping ranges and empty ranges are forbidden, though adjacent ranges are permitted and
  will be merged.
 @throw IllegalArgumentExceptionif any ranges overlap or are empty
 @since 21.0
 */
+ (ComGoogleCommonCollectImmutableRangeSet *)copyOfWithJavaLangIterable:(id<JavaLangIterable>)ranges OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns an immutable copy of the specified <code>RangeSet</code>.
 */
+ (ComGoogleCommonCollectImmutableRangeSet *)copyOfWithComGoogleCommonCollectRangeSet:(id<ComGoogleCommonCollectRangeSet>)rangeSet OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns a new range set consisting of the difference of this range set and <code>other</code>.
 <p>This is essentially the same as <code>TreeRangeSet.create(this).removeAll(other)</code> except it
  returns an <code>ImmutableRangeSet</code>.
 @since 21.0
 */
- (ComGoogleCommonCollectImmutableRangeSet *)differenceWithComGoogleCommonCollectRangeSet:(id<ComGoogleCommonCollectRangeSet>)other;

- (jboolean)enclosesWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)otherRange;

/*!
 @brief Returns a new range set consisting of the intersection of this range set and <code>other</code>.
 <p>This is essentially the same as <code>TreeRangeSet.create(this).removeAll(other.complement())</code>
  except it returns an <code>ImmutableRangeSet</code>
 .
 @since 21.0
 */
- (ComGoogleCommonCollectImmutableRangeSet *)intersectionWithComGoogleCommonCollectRangeSet:(id<ComGoogleCommonCollectRangeSet>)other;

- (jboolean)intersectsWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)otherRange;

- (jboolean)isEmpty;

/*!
 @brief Returns an empty immutable range set.
 */
+ (ComGoogleCommonCollectImmutableRangeSet *)of;

/*!
 @brief Returns an immutable range set containing the specified single range.If <code>range.isEmpty()</code>
 , this is equivalent to <code>ImmutableRangeSet.of()</code>.
 */
+ (ComGoogleCommonCollectImmutableRangeSet *)ofWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range;

- (ComGoogleCommonCollectRange *)rangeContainingWithJavaLangComparable:(id<JavaLangComparable>)value;

/*!
 @brief Guaranteed to throw an exception and leave the <code>RangeSet</code> unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (void)removeWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range __attribute__((deprecated));

/*!
 @brief Guaranteed to throw an exception and leave the <code>RangeSet</code> unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (void)removeAllWithJavaLangIterable:(id<JavaLangIterable>)other __attribute__((deprecated));

/*!
 @brief Guaranteed to throw an exception and leave the <code>RangeSet</code> unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (void)removeAllWithComGoogleCommonCollectRangeSet:(id<ComGoogleCommonCollectRangeSet>)other __attribute__((deprecated));

- (ComGoogleCommonCollectRange *)span;

/*!
 @brief Returns a view of the intersection of this range set with the given range.
 */
- (ComGoogleCommonCollectImmutableRangeSet *)subRangeSetWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range;

/*!
 @brief Returns a <code>Collector</code> that accumulates the input elements into a new <code>ImmutableRangeSet</code>
 .As in <code>Builder</code>, overlapping ranges are not permitted and adjacent
  ranges will be merged.
 @since 23.1
 */
+ (id<JavaUtilStreamCollector>)toImmutableRangeSet;

/*!
 @brief Returns a new range set consisting of the union of this range set and <code>other</code>.
 <p>This is essentially the same as <code>TreeRangeSet.create(this).addAll(other)</code> except it
  returns an <code>ImmutableRangeSet</code>.
 @since 21.0
 */
- (ComGoogleCommonCollectImmutableRangeSet *)union__WithComGoogleCommonCollectRangeSet:(id<ComGoogleCommonCollectRangeSet>)other;

/*!
 @brief Returns an <code>ImmutableRangeSet</code> representing the union of the specified ranges.
 <p>This is the smallest <code>RangeSet</code> which encloses each of the specified ranges. Duplicate
  or connected ranges are permitted, and will be coalesced in the result.
 @since 21.0
 */
+ (ComGoogleCommonCollectImmutableRangeSet *)unionOfWithJavaLangIterable:(id<JavaLangIterable>)ranges;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)ranges;

/*!
 @brief Returns an immutable range set containing the single range <code>Range.all()</code>.
 */
+ (ComGoogleCommonCollectImmutableRangeSet *)all;

/*!
 @brief Returns <code>true</code> if this immutable range set's implementation contains references to
  user-created objects that aren't accessible via this range set's methods.This is generally
  used to determine whether <code>copyOf</code> implementations should make an explicit copy to avoid
  memory leaks.
 */
- (jboolean)isPartialView;

- (id)writeReplace;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectImmutableRangeSet)

FOUNDATION_EXPORT id<JavaUtilStreamCollector> ComGoogleCommonCollectImmutableRangeSet_toImmutableRangeSet(void);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableRangeSet *ComGoogleCommonCollectImmutableRangeSet_of(void);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableRangeSet *ComGoogleCommonCollectImmutableRangeSet_ofWithComGoogleCommonCollectRange_(ComGoogleCommonCollectRange *range);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableRangeSet *ComGoogleCommonCollectImmutableRangeSet_all(void);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableRangeSet *ComGoogleCommonCollectImmutableRangeSet_copyOfWithComGoogleCommonCollectRangeSet_(id<ComGoogleCommonCollectRangeSet> rangeSet);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableRangeSet *ComGoogleCommonCollectImmutableRangeSet_copyOfWithJavaLangIterable_(id<JavaLangIterable> ranges);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableRangeSet *ComGoogleCommonCollectImmutableRangeSet_unionOfWithJavaLangIterable_(id<JavaLangIterable> ranges);

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableRangeSet_initWithComGoogleCommonCollectImmutableList_(ComGoogleCommonCollectImmutableRangeSet *self, ComGoogleCommonCollectImmutableList *ranges);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableRangeSet *new_ComGoogleCommonCollectImmutableRangeSet_initWithComGoogleCommonCollectImmutableList_(ComGoogleCommonCollectImmutableList *ranges) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableRangeSet *create_ComGoogleCommonCollectImmutableRangeSet_initWithComGoogleCommonCollectImmutableList_(ComGoogleCommonCollectImmutableList *ranges);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableRangeSet_Builder *ComGoogleCommonCollectImmutableRangeSet_builder(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableRangeSet)

#endif

#if !defined (ComGoogleCommonCollectImmutableRangeSet_Builder_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableRangeSet || defined(INCLUDE_ComGoogleCommonCollectImmutableRangeSet_Builder))
#define ComGoogleCommonCollectImmutableRangeSet_Builder_

@class ComGoogleCommonCollectImmutableRangeSet;
@class ComGoogleCommonCollectRange;
@protocol ComGoogleCommonCollectRangeSet;
@protocol JavaLangIterable;

/*!
 @brief A builder for immutable range sets.
 @since 14.0
 */
@interface ComGoogleCommonCollectImmutableRangeSet_Builder : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Add the specified range to this builder.Adjacent ranges are permitted and will be merged,
  but overlapping ranges will cause an exception when <code>build()</code> is called.
 @throw IllegalArgumentExceptionif <code>range</code> is empty
 */
- (ComGoogleCommonCollectImmutableRangeSet_Builder *)addWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range;

/*!
 @brief Add all of the specified ranges to this builder.Adjacent ranges are permitted and will be
  merged, but overlapping ranges will cause an exception when <code>build()</code> is called.
 @throw IllegalArgumentExceptionif any inserted ranges are empty
 @since 21.0
 */
- (ComGoogleCommonCollectImmutableRangeSet_Builder *)addAllWithJavaLangIterable:(id<JavaLangIterable>)ranges;

/*!
 @brief Add all ranges from the specified range set to this builder.Adjacent ranges are permitted
  and will be merged, but overlapping ranges will cause an exception when <code>build()</code> is
  called.
 */
- (ComGoogleCommonCollectImmutableRangeSet_Builder *)addAllWithComGoogleCommonCollectRangeSet:(id<ComGoogleCommonCollectRangeSet>)ranges;

/*!
 @brief Returns an <code>ImmutableRangeSet</code> containing the ranges added to this builder.
 @throw IllegalArgumentExceptionif any input ranges have nonempty overlap
 */
- (ComGoogleCommonCollectImmutableRangeSet *)build;

#pragma mark Package-Private

- (ComGoogleCommonCollectImmutableRangeSet_Builder *)combineWithComGoogleCommonCollectImmutableRangeSet_Builder:(ComGoogleCommonCollectImmutableRangeSet_Builder *)builder;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableRangeSet_Builder)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableRangeSet_Builder_init(ComGoogleCommonCollectImmutableRangeSet_Builder *self);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableRangeSet_Builder *new_ComGoogleCommonCollectImmutableRangeSet_Builder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableRangeSet_Builder *create_ComGoogleCommonCollectImmutableRangeSet_Builder_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableRangeSet_Builder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableRangeSet")
