//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/FilteredMultimapValues.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectFilteredMultimapValues")
#ifdef RESTRICT_ComGoogleCommonCollectFilteredMultimapValues
#define INCLUDE_ALL_ComGoogleCommonCollectFilteredMultimapValues 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectFilteredMultimapValues 1
#endif
#undef RESTRICT_ComGoogleCommonCollectFilteredMultimapValues

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectFilteredMultimapValues_) && (INCLUDE_ALL_ComGoogleCommonCollectFilteredMultimapValues || defined(INCLUDE_ComGoogleCommonCollectFilteredMultimapValues))
#define ComGoogleCommonCollectFilteredMultimapValues_

#define RESTRICT_JavaUtilAbstractCollection 1
#define INCLUDE_JavaUtilAbstractCollection 1
#include "../../../../../java/util/AbstractCollection.h"

@protocol ComGoogleCommonCollectFilteredMultimap;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;

/*!
 @brief Implementation for <code>FilteredMultimap.values()</code>.
 @author Louis Wasserman
 */
@interface ComGoogleCommonCollectFilteredMultimapValues : JavaUtilAbstractCollection

#pragma mark Public

- (void)clear;

- (jboolean)containsWithId:(id __nullable)o;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id __nullable)o;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jint)size;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectFilteredMultimap:(id<ComGoogleCommonCollectFilteredMultimap>)multimap;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectFilteredMultimapValues)

FOUNDATION_EXPORT void ComGoogleCommonCollectFilteredMultimapValues_initWithComGoogleCommonCollectFilteredMultimap_(ComGoogleCommonCollectFilteredMultimapValues *self, id<ComGoogleCommonCollectFilteredMultimap> multimap);

FOUNDATION_EXPORT ComGoogleCommonCollectFilteredMultimapValues *new_ComGoogleCommonCollectFilteredMultimapValues_initWithComGoogleCommonCollectFilteredMultimap_(id<ComGoogleCommonCollectFilteredMultimap> multimap) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectFilteredMultimapValues *create_ComGoogleCommonCollectFilteredMultimapValues_initWithComGoogleCommonCollectFilteredMultimap_(id<ComGoogleCommonCollectFilteredMultimap> multimap);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectFilteredMultimapValues)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectFilteredMultimapValues")
