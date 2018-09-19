//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/ImmutableSortedAsList.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedAsList")
#ifdef RESTRICT_ComGoogleCommonCollectImmutableSortedAsList
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedAsList 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedAsList 1
#endif
#undef RESTRICT_ComGoogleCommonCollectImmutableSortedAsList

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectImmutableSortedAsList_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedAsList || defined(INCLUDE_ComGoogleCommonCollectImmutableSortedAsList))
#define ComGoogleCommonCollectImmutableSortedAsList_

#define RESTRICT_ComGoogleCommonCollectRegularImmutableAsList 1
#define INCLUDE_ComGoogleCommonCollectRegularImmutableAsList 1
#include "../../../../../com/google/common/collect/RegularImmutableAsList.h"

#define RESTRICT_ComGoogleCommonCollectSortedIterable 1
#define INCLUDE_ComGoogleCommonCollectSortedIterable 1
#include "../../../../../com/google/common/collect/SortedIterable.h"

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableSortedSet;
@class ComGoogleCommonCollectUnmodifiableIterator;
@class IOSObjectArray;
@protocol JavaUtilComparator;

@interface ComGoogleCommonCollectImmutableSortedAsList : ComGoogleCommonCollectRegularImmutableAsList < ComGoogleCommonCollectSortedIterable >

#pragma mark Public

- (id<JavaUtilComparator>)comparator;

- (jboolean)containsWithId:(id)target;

- (jint)indexOfWithId:(id)target;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (jint)lastIndexOfWithId:(id)target;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectImmutableSortedSet:(ComGoogleCommonCollectImmutableSortedSet *)backingSet
                         withComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)backingList;

- (ComGoogleCommonCollectImmutableSortedSet *)delegateCollection;

- (ComGoogleCommonCollectImmutableList *)subListUncheckedWithInt:(jint)fromIndex
                                                         withInt:(jint)toIndex;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithComGoogleCommonCollectImmutableCollection:(ComGoogleCommonCollectImmutableCollection *)arg0
                          withComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)arg1 NS_UNAVAILABLE;

- (instancetype)initWithComGoogleCommonCollectImmutableCollection:(ComGoogleCommonCollectImmutableCollection *)arg0
                                                withNSObjectArray:(IOSObjectArray *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableSortedAsList)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableSortedAsList_initWithComGoogleCommonCollectImmutableSortedSet_withComGoogleCommonCollectImmutableList_(ComGoogleCommonCollectImmutableSortedAsList *self, ComGoogleCommonCollectImmutableSortedSet *backingSet, ComGoogleCommonCollectImmutableList *backingList);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedAsList *new_ComGoogleCommonCollectImmutableSortedAsList_initWithComGoogleCommonCollectImmutableSortedSet_withComGoogleCommonCollectImmutableList_(ComGoogleCommonCollectImmutableSortedSet *backingSet, ComGoogleCommonCollectImmutableList *backingList) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedAsList *create_ComGoogleCommonCollectImmutableSortedAsList_initWithComGoogleCommonCollectImmutableSortedSet_withComGoogleCommonCollectImmutableList_(ComGoogleCommonCollectImmutableSortedSet *backingSet, ComGoogleCommonCollectImmutableList *backingList);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableSortedAsList)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedAsList")
