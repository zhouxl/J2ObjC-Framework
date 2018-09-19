//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/FilteredEntrySetMultimap.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectFilteredEntrySetMultimap")
#ifdef RESTRICT_ComGoogleCommonCollectFilteredEntrySetMultimap
#define INCLUDE_ALL_ComGoogleCommonCollectFilteredEntrySetMultimap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectFilteredEntrySetMultimap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectFilteredEntrySetMultimap

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectFilteredEntrySetMultimap_) && (INCLUDE_ALL_ComGoogleCommonCollectFilteredEntrySetMultimap || defined(INCLUDE_ComGoogleCommonCollectFilteredEntrySetMultimap))
#define ComGoogleCommonCollectFilteredEntrySetMultimap_

#define RESTRICT_ComGoogleCommonCollectFilteredEntryMultimap 1
#define INCLUDE_ComGoogleCommonCollectFilteredEntryMultimap 1
#include "../../../../../com/google/common/collect/FilteredEntryMultimap.h"

#define RESTRICT_ComGoogleCommonCollectFilteredSetMultimap 1
#define INCLUDE_ComGoogleCommonCollectFilteredSetMultimap 1
#include "../../../../../com/google/common/collect/FilteredSetMultimap.h"

@protocol ComGoogleCommonBasePredicate;
@protocol ComGoogleCommonCollectMultimap;
@protocol ComGoogleCommonCollectSetMultimap;
@protocol JavaLangIterable;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectFilteredEntrySetMultimap : ComGoogleCommonCollectFilteredEntryMultimap < ComGoogleCommonCollectFilteredSetMultimap >

#pragma mark Public

- (id<JavaUtilSet>)entries;

- (id<JavaUtilSet>)getWithId:(id)key;

- (id<JavaUtilSet>)removeAllWithId:(id)key;

- (id<JavaUtilSet>)replaceValuesWithId:(id)key
                  withJavaLangIterable:(id<JavaLangIterable>)values;

- (id<ComGoogleCommonCollectSetMultimap>)unfiltered;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectSetMultimap:(id<ComGoogleCommonCollectSetMultimap>)unfiltered
                         withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

- (id<JavaUtilSet>)createEntries;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)arg0
                      withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectFilteredEntrySetMultimap)

FOUNDATION_EXPORT void ComGoogleCommonCollectFilteredEntrySetMultimap_initWithComGoogleCommonCollectSetMultimap_withComGoogleCommonBasePredicate_(ComGoogleCommonCollectFilteredEntrySetMultimap *self, id<ComGoogleCommonCollectSetMultimap> unfiltered, id<ComGoogleCommonBasePredicate> predicate);

FOUNDATION_EXPORT ComGoogleCommonCollectFilteredEntrySetMultimap *new_ComGoogleCommonCollectFilteredEntrySetMultimap_initWithComGoogleCommonCollectSetMultimap_withComGoogleCommonBasePredicate_(id<ComGoogleCommonCollectSetMultimap> unfiltered, id<ComGoogleCommonBasePredicate> predicate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectFilteredEntrySetMultimap *create_ComGoogleCommonCollectFilteredEntrySetMultimap_initWithComGoogleCommonCollectSetMultimap_withComGoogleCommonBasePredicate_(id<ComGoogleCommonCollectSetMultimap> unfiltered, id<ComGoogleCommonBasePredicate> predicate);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectFilteredEntrySetMultimap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectFilteredEntrySetMultimap")
