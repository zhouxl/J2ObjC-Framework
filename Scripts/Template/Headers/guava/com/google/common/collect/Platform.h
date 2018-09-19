//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/Platform.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectPlatform")
#ifdef RESTRICT_ComGoogleCommonCollectPlatform
#define INCLUDE_ALL_ComGoogleCommonCollectPlatform 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectPlatform 1
#endif
#undef RESTRICT_ComGoogleCommonCollectPlatform

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectPlatform_) && (INCLUDE_ALL_ComGoogleCommonCollectPlatform || defined(INCLUDE_ComGoogleCommonCollectPlatform))
#define ComGoogleCommonCollectPlatform_

@class ComGoogleCommonCollectMapMaker;
@class IOSObjectArray;
@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonBasePredicate;
@protocol ComGoogleCommonCollectMaps_EntryTransformer;
@protocol JavaUtilMap;
@protocol JavaUtilQueue;
@protocol JavaUtilSet;
@protocol JavaUtilSortedMap;
@protocol JavaUtilSortedSet;

@interface ComGoogleCommonCollectPlatform : NSObject

#pragma mark Package-Private

+ (id<JavaUtilSortedMap>)mapsAsMapSortedSetWithJavaUtilSortedSet:(id<JavaUtilSortedSet>)set
                                 withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

+ (id<JavaUtilSortedMap>)mapsFilterSortedMapWithJavaUtilSortedMap:(id<JavaUtilSortedMap>)map
                                 withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

+ (id<JavaUtilSortedMap>)mapsTransformEntriesSortedMapWithJavaUtilSortedMap:(id<JavaUtilSortedMap>)fromMap
                            withComGoogleCommonCollectMaps_EntryTransformer:(id<ComGoogleCommonCollectMaps_EntryTransformer>)transformer;

+ (IOSObjectArray *)newArrayWithNSObjectArray:(IOSObjectArray *)reference
                                      withInt:(jint)length OBJC_METHOD_FAMILY_NONE;

+ (id<JavaUtilQueue>)newFastestQueueWithInt:(jint)initialCapacity OBJC_METHOD_FAMILY_NONE;

+ (id<JavaUtilSet>)newSetFromMapWithJavaUtilMap:(id<JavaUtilMap>)map OBJC_METHOD_FAMILY_NONE;

+ (id<JavaUtilSortedSet>)setsFilterSortedSetWithJavaUtilSortedSet:(id<JavaUtilSortedSet>)set
                                 withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

+ (ComGoogleCommonCollectMapMaker *)tryWeakKeysWithComGoogleCommonCollectMapMaker:(ComGoogleCommonCollectMapMaker *)mapMaker;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectPlatform)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectPlatform_newArrayWithNSObjectArray_withInt_(IOSObjectArray *reference, jint length);

FOUNDATION_EXPORT id<JavaUtilSet> ComGoogleCommonCollectPlatform_newSetFromMapWithJavaUtilMap_(id<JavaUtilMap> map);

FOUNDATION_EXPORT ComGoogleCommonCollectMapMaker *ComGoogleCommonCollectPlatform_tryWeakKeysWithComGoogleCommonCollectMapMaker_(ComGoogleCommonCollectMapMaker *mapMaker);

FOUNDATION_EXPORT id<JavaUtilSortedMap> ComGoogleCommonCollectPlatform_mapsTransformEntriesSortedMapWithJavaUtilSortedMap_withComGoogleCommonCollectMaps_EntryTransformer_(id<JavaUtilSortedMap> fromMap, id<ComGoogleCommonCollectMaps_EntryTransformer> transformer);

FOUNDATION_EXPORT id<JavaUtilSortedMap> ComGoogleCommonCollectPlatform_mapsAsMapSortedSetWithJavaUtilSortedSet_withComGoogleCommonBaseFunction_(id<JavaUtilSortedSet> set, id<ComGoogleCommonBaseFunction> function);

FOUNDATION_EXPORT id<JavaUtilSortedSet> ComGoogleCommonCollectPlatform_setsFilterSortedSetWithJavaUtilSortedSet_withComGoogleCommonBasePredicate_(id<JavaUtilSortedSet> set, id<ComGoogleCommonBasePredicate> predicate);

FOUNDATION_EXPORT id<JavaUtilSortedMap> ComGoogleCommonCollectPlatform_mapsFilterSortedMapWithJavaUtilSortedMap_withComGoogleCommonBasePredicate_(id<JavaUtilSortedMap> map, id<ComGoogleCommonBasePredicate> predicate);

FOUNDATION_EXPORT id<JavaUtilQueue> ComGoogleCommonCollectPlatform_newFastestQueueWithInt_(jint initialCapacity);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectPlatform)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectPlatform")
