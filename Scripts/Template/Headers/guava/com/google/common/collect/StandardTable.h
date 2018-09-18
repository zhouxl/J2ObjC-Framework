//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/StandardTable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectStandardTable")
#ifdef RESTRICT_ComGoogleCommonCollectStandardTable
#define INCLUDE_ALL_ComGoogleCommonCollectStandardTable 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectStandardTable 1
#endif
#undef RESTRICT_ComGoogleCommonCollectStandardTable
#ifdef INCLUDE_ComGoogleCommonCollectStandardTable_RowMap_EntrySet
#define INCLUDE_ComGoogleCommonCollectStandardTable_TableSet 1
#endif

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectStandardTable_) && (INCLUDE_ALL_ComGoogleCommonCollectStandardTable || defined(INCLUDE_ComGoogleCommonCollectStandardTable))
#define ComGoogleCommonCollectStandardTable_

#define RESTRICT_ComGoogleCommonCollectAbstractTable 1
#define INCLUDE_ComGoogleCommonCollectAbstractTable 1
#include "com/google/common/collect/AbstractTable.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@protocol ComGoogleCommonBaseSupplier;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;
@protocol JavaUtilSet;
@protocol JavaUtilSpliterator;

/*!
 @brief <code>Table</code> implementation backed by a map that associates row keys with column key / value
  secondary maps.This class provides rapid access to records by the row key alone or by both keys,
  but not by just the column key.
 <p>The views returned by <code>column</code>, <code>columnKeySet()</code>, and <code>columnMap()</code> have
  iterators that don't support <code>remove()</code>. Otherwise, all optional operations are supported.
  Null row keys, columns keys, and values are not supported. 
 <p>Lookups by row key are often faster than lookups by column key, because the data is stored in
  a <code>Map<R, Map<C, V>></code>. A method call like <code>column(columnKey).get(rowKey)</code> still runs
  quickly, since the row key is provided. However, <code>column(columnKey).size()</code> takes longer,
  since an iteration across all row keys occurs. 
 <p>Note that this implementation is not synchronized. If multiple threads access this table
  concurrently and one of the threads modifies the table, it must be synchronized externally.
 @author Jared Levy
 */
@interface ComGoogleCommonCollectStandardTable : ComGoogleCommonCollectAbstractTable < JavaIoSerializable > {
 @public
  id<JavaUtilMap> backingMap_;
  id<ComGoogleCommonBaseSupplier> factory_;
}

#pragma mark Public

/*!
 @brief <p>The set's iterator traverses the mappings for the first row, the mappings for the second
  row, and so on.
 <p>Each cell is an immutable snapshot of a row key / column key / value mapping, taken at the
  time the cell is returned by a method call to the set or its iterator.
 */
- (id<JavaUtilSet>)cellSet;

- (void)clear;

/*!
 @brief <p>The returned map's views have iterators that don't support <code>remove()</code>.
 */
- (id<JavaUtilMap>)columnWithId:(id)columnKey;

/*!
 @brief <p>The returned set has an iterator that does not support <code>remove()</code>.
 <p>The set's iterator traverses the columns of the first row, the columns of the second row,
  etc., skipping any columns that have appeared previously.
 */
- (id<JavaUtilSet>)columnKeySet;

- (id<JavaUtilMap>)columnMap;

- (jboolean)containsWithId:(id __nullable)rowKey
                    withId:(id __nullable)columnKey;

- (jboolean)containsColumnWithId:(id __nullable)columnKey;

- (jboolean)containsRowWithId:(id __nullable)rowKey;

- (jboolean)containsValueWithId:(id __nullable)value;

- (id)getWithId:(id __nullable)rowKey
         withId:(id __nullable)columnKey;

- (jboolean)isEmpty;

- (id)putWithId:(id)rowKey
         withId:(id)columnKey
         withId:(id)value;

- (id)removeWithId:(id __nullable)rowKey
            withId:(id __nullable)columnKey;

- (id<JavaUtilMap>)rowWithId:(id)rowKey;

- (id<JavaUtilSet>)rowKeySet;

- (id<JavaUtilMap>)rowMap;

- (jint)size;

/*!
 @brief <p>The collection's iterator traverses the values for the first row, the values for the second
  row, and so on.
 */
- (id<JavaUtilCollection>)values;

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaUtilMap:(id<JavaUtilMap>)backingMap
              withComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)factory;

- (id<JavaUtilIterator>)cellIterator;

- (id<JavaUtilSpliterator>)cellSpliterator;

/*!
 @brief Creates an iterator that returns each column value with duplicates omitted.
 */
- (id<JavaUtilIterator>)createColumnKeyIterator;

- (id<JavaUtilMap>)createRowMap;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectStandardTable, backingMap_, id<JavaUtilMap>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectStandardTable, factory_, id<ComGoogleCommonBaseSupplier>)

FOUNDATION_EXPORT void ComGoogleCommonCollectStandardTable_initWithJavaUtilMap_withComGoogleCommonBaseSupplier_(ComGoogleCommonCollectStandardTable *self, id<JavaUtilMap> backingMap, id<ComGoogleCommonBaseSupplier> factory);

FOUNDATION_EXPORT ComGoogleCommonCollectStandardTable *new_ComGoogleCommonCollectStandardTable_initWithJavaUtilMap_withComGoogleCommonBaseSupplier_(id<JavaUtilMap> backingMap, id<ComGoogleCommonBaseSupplier> factory) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectStandardTable *create_ComGoogleCommonCollectStandardTable_initWithJavaUtilMap_withComGoogleCommonBaseSupplier_(id<JavaUtilMap> backingMap, id<ComGoogleCommonBaseSupplier> factory);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable)

#endif

#if !defined (ComGoogleCommonCollectStandardTable_TableSet_) && (INCLUDE_ALL_ComGoogleCommonCollectStandardTable || defined(INCLUDE_ComGoogleCommonCollectStandardTable_TableSet))
#define ComGoogleCommonCollectStandardTable_TableSet_

#define RESTRICT_ComGoogleCommonCollectSets 1
#define INCLUDE_ComGoogleCommonCollectSets_ImprovedAbstractSet 1
#include "com/google/common/collect/Sets.h"

/*!
 @brief Abstract set whose <code>isEmpty()</code> returns whether the table is empty and whose <code>clear()</code>
  clears all table mappings.
 */
@interface ComGoogleCommonCollectStandardTable_TableSet : ComGoogleCommonCollectSets_ImprovedAbstractSet

#pragma mark Public

- (void)clear;

- (jboolean)isEmpty;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_TableSet)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_TableSet)

#endif

#if !defined (ComGoogleCommonCollectStandardTable_Row_) && (INCLUDE_ALL_ComGoogleCommonCollectStandardTable || defined(INCLUDE_ComGoogleCommonCollectStandardTable_Row))
#define ComGoogleCommonCollectStandardTable_Row_

#define RESTRICT_ComGoogleCommonCollectMaps 1
#define INCLUDE_ComGoogleCommonCollectMaps_IteratorBasedAbstractMap 1
#include "com/google/common/collect/Maps.h"

@class ComGoogleCommonCollectStandardTable;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;
@protocol JavaUtilMap_Entry;
@protocol JavaUtilSpliterator;

@interface ComGoogleCommonCollectStandardTable_Row : ComGoogleCommonCollectMaps_IteratorBasedAbstractMap {
 @public
  id rowKey_;
  id<JavaUtilMap> backingRowMap_;
}

#pragma mark Public

- (void)clear;

- (jboolean)containsKeyWithId:(id)key;

- (id)getWithId:(id)key;

- (id)putWithId:(id)key
         withId:(id)value;

- (id)removeWithId:(id)key;

- (jint)size;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectStandardTable:(ComGoogleCommonCollectStandardTable *)outer$
                                                               withId:(id)rowKey;

- (id<JavaUtilMap>)backingRowMap;

- (id<JavaUtilMap>)computeBackingRowMap;

- (id<JavaUtilIterator>)entryIterator;

- (id<JavaUtilSpliterator>)entrySpliterator;

- (void)maintainEmptyInvariant;

- (id<JavaUtilMap_Entry>)wrapEntryWithJavaUtilMap_Entry:(id<JavaUtilMap_Entry>)entry_;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_Row)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectStandardTable_Row, rowKey_, id)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectStandardTable_Row, backingRowMap_, id<JavaUtilMap>)

FOUNDATION_EXPORT void ComGoogleCommonCollectStandardTable_Row_initWithComGoogleCommonCollectStandardTable_withId_(ComGoogleCommonCollectStandardTable_Row *self, ComGoogleCommonCollectStandardTable *outer$, id rowKey);

FOUNDATION_EXPORT ComGoogleCommonCollectStandardTable_Row *new_ComGoogleCommonCollectStandardTable_Row_initWithComGoogleCommonCollectStandardTable_withId_(ComGoogleCommonCollectStandardTable *outer$, id rowKey) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectStandardTable_Row *create_ComGoogleCommonCollectStandardTable_Row_initWithComGoogleCommonCollectStandardTable_withId_(ComGoogleCommonCollectStandardTable *outer$, id rowKey);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_Row)

#endif

#if !defined (ComGoogleCommonCollectStandardTable_RowMap_) && (INCLUDE_ALL_ComGoogleCommonCollectStandardTable || defined(INCLUDE_ComGoogleCommonCollectStandardTable_RowMap))
#define ComGoogleCommonCollectStandardTable_RowMap_

#define RESTRICT_ComGoogleCommonCollectMaps 1
#define INCLUDE_ComGoogleCommonCollectMaps_ViewCachingAbstractMap 1
#include "com/google/common/collect/Maps.h"

@class ComGoogleCommonCollectStandardTable;
@protocol JavaUtilFunctionBiFunction;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectStandardTable_RowMap : ComGoogleCommonCollectMaps_ViewCachingAbstractMap

#pragma mark Public

- (id<JavaUtilMap>)computeIfAbsentWithId:(id)arg0
            withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)arg1;

- (id<JavaUtilMap>)computeIfPresentWithId:(id)arg0
           withJavaUtilFunctionBiFunction:(id<JavaUtilFunctionBiFunction>)arg1;

- (id<JavaUtilMap>)computeWithId:(id)arg0
  withJavaUtilFunctionBiFunction:(id<JavaUtilFunctionBiFunction>)arg1;

- (jboolean)containsKeyWithId:(id)key;

- (id<JavaUtilMap>)getWithId:(id)key;

- (id<JavaUtilMap>)getOrDefaultWithId:(id)arg0
                               withId:(id<JavaUtilMap>)arg1;

- (id<JavaUtilMap>)mergeWithId:(id)arg0
                        withId:(id<JavaUtilMap>)arg1
withJavaUtilFunctionBiFunction:(id<JavaUtilFunctionBiFunction>)arg2;

- (id<JavaUtilMap>)putIfAbsentWithId:(id)arg0
                              withId:(id<JavaUtilMap>)arg1;

- (id<JavaUtilMap>)putWithId:(id)arg0
                      withId:(id<JavaUtilMap>)arg1;

- (id<JavaUtilMap>)removeWithId:(id)key;

- (id<JavaUtilMap>)replaceWithId:(id)arg0
                          withId:(id<JavaUtilMap>)arg1;

#pragma mark Protected

- (id<JavaUtilSet>)createEntrySet;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectStandardTable:(ComGoogleCommonCollectStandardTable *)outer$;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_RowMap)

FOUNDATION_EXPORT void ComGoogleCommonCollectStandardTable_RowMap_initWithComGoogleCommonCollectStandardTable_(ComGoogleCommonCollectStandardTable_RowMap *self, ComGoogleCommonCollectStandardTable *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectStandardTable_RowMap *new_ComGoogleCommonCollectStandardTable_RowMap_initWithComGoogleCommonCollectStandardTable_(ComGoogleCommonCollectStandardTable *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectStandardTable_RowMap *create_ComGoogleCommonCollectStandardTable_RowMap_initWithComGoogleCommonCollectStandardTable_(ComGoogleCommonCollectStandardTable *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_RowMap)

#endif

#if !defined (ComGoogleCommonCollectStandardTable_RowMap_EntrySet_) && (INCLUDE_ALL_ComGoogleCommonCollectStandardTable || defined(INCLUDE_ComGoogleCommonCollectStandardTable_RowMap_EntrySet))
#define ComGoogleCommonCollectStandardTable_RowMap_EntrySet_

@class ComGoogleCommonCollectStandardTable_RowMap;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectStandardTable_RowMap_EntrySet : ComGoogleCommonCollectStandardTable_TableSet

#pragma mark Public

- (jboolean)containsWithId:(id)obj;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)obj;

- (jint)size;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectStandardTable_RowMap:(ComGoogleCommonCollectStandardTable_RowMap *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_RowMap_EntrySet)

FOUNDATION_EXPORT void ComGoogleCommonCollectStandardTable_RowMap_EntrySet_initWithComGoogleCommonCollectStandardTable_RowMap_(ComGoogleCommonCollectStandardTable_RowMap_EntrySet *self, ComGoogleCommonCollectStandardTable_RowMap *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectStandardTable_RowMap_EntrySet *new_ComGoogleCommonCollectStandardTable_RowMap_EntrySet_initWithComGoogleCommonCollectStandardTable_RowMap_(ComGoogleCommonCollectStandardTable_RowMap *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectStandardTable_RowMap_EntrySet *create_ComGoogleCommonCollectStandardTable_RowMap_EntrySet_initWithComGoogleCommonCollectStandardTable_RowMap_(ComGoogleCommonCollectStandardTable_RowMap *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_RowMap_EntrySet)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectStandardTable")
