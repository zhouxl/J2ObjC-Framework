//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/AbstractMultimap.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractMultimap")
#ifdef RESTRICT_ComGoogleCommonCollectAbstractMultimap
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractMultimap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractMultimap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectAbstractMultimap
#ifdef INCLUDE_ComGoogleCommonCollectAbstractMultimap_EntrySet
#define INCLUDE_ComGoogleCommonCollectAbstractMultimap_Entries 1
#endif

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectAbstractMultimap_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractMultimap || defined(INCLUDE_ComGoogleCommonCollectAbstractMultimap))
#define ComGoogleCommonCollectAbstractMultimap_

#define RESTRICT_ComGoogleCommonCollectMultimap 1
#define INCLUDE_ComGoogleCommonCollectMultimap 1
#include "../../../../../com/google/common/collect/Multimap.h"

@protocol ComGoogleCommonCollectMultiset;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilFunctionBiConsumer;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;
@protocol JavaUtilSet;
@protocol JavaUtilSpliterator;

/*!
 @brief A skeleton <code>Multimap</code> implementation, not necessarily in terms of a <code>Map</code>.
 @author Louis Wasserman
 */
@interface ComGoogleCommonCollectAbstractMultimap : NSObject < ComGoogleCommonCollectMultimap >

#pragma mark Public

- (id<JavaUtilMap>)asMap;

- (jboolean)containsEntryWithId:(id __nullable)key
                         withId:(id __nullable)value;

- (jboolean)containsValueWithId:(id __nullable)value;

- (id<JavaUtilCollection>)entries;

- (jboolean)isEqual:(id __nullable)object;

/*!
 @brief Returns the hash code for this multimap.
 <p>The hash code of a multimap is defined as the hash code of the map view, as returned by 
 <code>Multimap.asMap</code>.
 - seealso: Map#hashCode
 */
- (NSUInteger)hash;

- (jboolean)isEmpty;

- (id<ComGoogleCommonCollectMultiset>)keys;

- (id<JavaUtilSet>)keySet;

- (jboolean)putWithId:(id)key
               withId:(id)value;

- (jboolean)putAllWithId:(id)key
    withJavaLangIterable:(id<JavaLangIterable>)values;

- (jboolean)putAllWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap;

- (jboolean)removeWithId:(id __nullable)key
                  withId:(id __nullable)value;

- (id<JavaUtilCollection>)replaceValuesWithId:(id)key
                         withJavaLangIterable:(id<JavaLangIterable>)values;

/*!
 @brief Returns a string representation of the multimap, generated by calling <code>toString</code> on the
  map returned by <code>Multimap.asMap</code>.
 @return a string representation of the multimap
 */
- (NSString *)description;

- (id<JavaUtilCollection>)values;

#pragma mark Package-Private

- (instancetype __nonnull)init;

- (id<JavaUtilMap>)createAsMap;

- (id<JavaUtilCollection>)createEntries;

- (id<ComGoogleCommonCollectMultiset>)createKeys;

- (id<JavaUtilSet>)createKeySet;

- (id<JavaUtilCollection>)createValues;

- (id<JavaUtilIterator>)entryIterator;

- (id<JavaUtilSpliterator>)entrySpliterator;

- (id<JavaUtilIterator>)valueIterator;

- (id<JavaUtilSpliterator>)valueSpliterator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMultimap)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMultimap_init(ComGoogleCommonCollectAbstractMultimap *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMultimap)

#endif

#if !defined (ComGoogleCommonCollectAbstractMultimap_Entries_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractMultimap || defined(INCLUDE_ComGoogleCommonCollectAbstractMultimap_Entries))
#define ComGoogleCommonCollectAbstractMultimap_Entries_

#define RESTRICT_ComGoogleCommonCollectMultimaps 1
#define INCLUDE_ComGoogleCommonCollectMultimaps_Entries 1
#include "../../../../../com/google/common/collect/Multimaps.h"

@class ComGoogleCommonCollectAbstractMultimap;
@protocol ComGoogleCommonCollectMultimap;
@protocol JavaUtilIterator;
@protocol JavaUtilSpliterator;

@interface ComGoogleCommonCollectAbstractMultimap_Entries : ComGoogleCommonCollectMultimaps_Entries

#pragma mark Public

- (id<JavaUtilIterator>)iterator;

- (id<JavaUtilSpliterator>)spliterator;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectAbstractMultimap:(ComGoogleCommonCollectAbstractMultimap *)outer$;

- (id<ComGoogleCommonCollectMultimap>)multimap;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMultimap_Entries)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMultimap_Entries_initWithComGoogleCommonCollectAbstractMultimap_(ComGoogleCommonCollectAbstractMultimap_Entries *self, ComGoogleCommonCollectAbstractMultimap *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMultimap_Entries *new_ComGoogleCommonCollectAbstractMultimap_Entries_initWithComGoogleCommonCollectAbstractMultimap_(ComGoogleCommonCollectAbstractMultimap *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMultimap_Entries *create_ComGoogleCommonCollectAbstractMultimap_Entries_initWithComGoogleCommonCollectAbstractMultimap_(ComGoogleCommonCollectAbstractMultimap *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMultimap_Entries)

#endif

#if !defined (ComGoogleCommonCollectAbstractMultimap_EntrySet_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractMultimap || defined(INCLUDE_ComGoogleCommonCollectAbstractMultimap_EntrySet))
#define ComGoogleCommonCollectAbstractMultimap_EntrySet_

#define RESTRICT_JavaUtilSet 1
#define INCLUDE_JavaUtilSet 1
#include "../../../../../java/util/Set.h"

@class ComGoogleCommonCollectAbstractMultimap;

@interface ComGoogleCommonCollectAbstractMultimap_EntrySet : ComGoogleCommonCollectAbstractMultimap_Entries < JavaUtilSet >

#pragma mark Public

- (jboolean)isEqual:(id __nullable)obj;

- (NSUInteger)hash;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectAbstractMultimap:(ComGoogleCommonCollectAbstractMultimap *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMultimap_EntrySet)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMultimap_EntrySet_initWithComGoogleCommonCollectAbstractMultimap_(ComGoogleCommonCollectAbstractMultimap_EntrySet *self, ComGoogleCommonCollectAbstractMultimap *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMultimap_EntrySet *new_ComGoogleCommonCollectAbstractMultimap_EntrySet_initWithComGoogleCommonCollectAbstractMultimap_(ComGoogleCommonCollectAbstractMultimap *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMultimap_EntrySet *create_ComGoogleCommonCollectAbstractMultimap_EntrySet_initWithComGoogleCommonCollectAbstractMultimap_(ComGoogleCommonCollectAbstractMultimap *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMultimap_EntrySet)

#endif

#if !defined (ComGoogleCommonCollectAbstractMultimap_Values_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractMultimap || defined(INCLUDE_ComGoogleCommonCollectAbstractMultimap_Values))
#define ComGoogleCommonCollectAbstractMultimap_Values_

#define RESTRICT_JavaUtilAbstractCollection 1
#define INCLUDE_JavaUtilAbstractCollection 1
#include "../../../../../java/util/AbstractCollection.h"

@class ComGoogleCommonCollectAbstractMultimap;
@protocol JavaUtilIterator;
@protocol JavaUtilSpliterator;

@interface ComGoogleCommonCollectAbstractMultimap_Values : JavaUtilAbstractCollection

#pragma mark Public

- (void)clear;

- (jboolean)containsWithId:(id __nullable)o;

- (id<JavaUtilIterator>)iterator;

- (jint)size;

- (id<JavaUtilSpliterator>)spliterator;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectAbstractMultimap:(ComGoogleCommonCollectAbstractMultimap *)outer$;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMultimap_Values)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMultimap_Values_initWithComGoogleCommonCollectAbstractMultimap_(ComGoogleCommonCollectAbstractMultimap_Values *self, ComGoogleCommonCollectAbstractMultimap *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMultimap_Values *new_ComGoogleCommonCollectAbstractMultimap_Values_initWithComGoogleCommonCollectAbstractMultimap_(ComGoogleCommonCollectAbstractMultimap *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMultimap_Values *create_ComGoogleCommonCollectAbstractMultimap_Values_initWithComGoogleCommonCollectAbstractMultimap_(ComGoogleCommonCollectAbstractMultimap *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMultimap_Values)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractMultimap")
