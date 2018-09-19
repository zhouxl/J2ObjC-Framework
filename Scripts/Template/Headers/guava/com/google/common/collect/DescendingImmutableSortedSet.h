//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/DescendingImmutableSortedSet.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectDescendingImmutableSortedSet")
#ifdef RESTRICT_ComGoogleCommonCollectDescendingImmutableSortedSet
#define INCLUDE_ALL_ComGoogleCommonCollectDescendingImmutableSortedSet 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectDescendingImmutableSortedSet 1
#endif
#undef RESTRICT_ComGoogleCommonCollectDescendingImmutableSortedSet

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectDescendingImmutableSortedSet_) && (INCLUDE_ALL_ComGoogleCommonCollectDescendingImmutableSortedSet || defined(INCLUDE_ComGoogleCommonCollectDescendingImmutableSortedSet))
#define ComGoogleCommonCollectDescendingImmutableSortedSet_

#define RESTRICT_ComGoogleCommonCollectImmutableSortedSet 1
#define INCLUDE_ComGoogleCommonCollectImmutableSortedSet 1
#include "../../../../../com/google/common/collect/ImmutableSortedSet.h"

@class ComGoogleCommonCollectUnmodifiableIterator;
@protocol JavaUtilComparator;

@interface ComGoogleCommonCollectDescendingImmutableSortedSet : ComGoogleCommonCollectImmutableSortedSet

#pragma mark Public

- (id)ceilingWithId:(id)element;

- (jboolean)containsWithId:(id)object;

- (ComGoogleCommonCollectUnmodifiableIterator *)descendingIterator;

- (ComGoogleCommonCollectImmutableSortedSet *)descendingSet;

- (id)floorWithId:(id)element;

- (id)higherWithId:(id)element;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (id)lowerWithId:(id)element;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectImmutableSortedSet:(ComGoogleCommonCollectImmutableSortedSet *)forward;

- (ComGoogleCommonCollectImmutableSortedSet *)createDescendingSet;

- (ComGoogleCommonCollectImmutableSortedSet *)headSetImplWithId:(id)toElement
                                                    withBoolean:(jboolean)inclusive;

- (jint)indexOfWithId:(id)target;

- (jboolean)isPartialView;

- (ComGoogleCommonCollectImmutableSortedSet *)subSetImplWithId:(id)fromElement
                                                   withBoolean:(jboolean)fromInclusive
                                                        withId:(id)toElement
                                                   withBoolean:(jboolean)toInclusive;

- (ComGoogleCommonCollectImmutableSortedSet *)tailSetImplWithId:(id)fromElement
                                                    withBoolean:(jboolean)inclusive;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithJavaUtilComparator:(id<JavaUtilComparator>)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectDescendingImmutableSortedSet)

FOUNDATION_EXPORT void ComGoogleCommonCollectDescendingImmutableSortedSet_initWithComGoogleCommonCollectImmutableSortedSet_(ComGoogleCommonCollectDescendingImmutableSortedSet *self, ComGoogleCommonCollectImmutableSortedSet *forward);

FOUNDATION_EXPORT ComGoogleCommonCollectDescendingImmutableSortedSet *new_ComGoogleCommonCollectDescendingImmutableSortedSet_initWithComGoogleCommonCollectImmutableSortedSet_(ComGoogleCommonCollectImmutableSortedSet *forward) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectDescendingImmutableSortedSet *create_ComGoogleCommonCollectDescendingImmutableSortedSet_initWithComGoogleCommonCollectImmutableSortedSet_(ComGoogleCommonCollectImmutableSortedSet *forward);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectDescendingImmutableSortedSet)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectDescendingImmutableSortedSet")
