//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/Table.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectTable")
#ifdef RESTRICT_ComGoogleCommonCollectTable
#define INCLUDE_ALL_ComGoogleCommonCollectTable 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectTable 1
#endif
#undef RESTRICT_ComGoogleCommonCollectTable

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectTable_) && (INCLUDE_ALL_ComGoogleCommonCollectTable || defined(INCLUDE_ComGoogleCommonCollectTable))
#define ComGoogleCommonCollectTable_

@protocol JavaUtilCollection;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@protocol ComGoogleCommonCollectTable < JavaObject >

- (jboolean)containsWithId:(id)rowKey
                    withId:(id)columnKey;

- (jboolean)containsRowWithId:(id)rowKey;

- (jboolean)containsColumnWithId:(id)columnKey;

- (jboolean)containsValueWithId:(id)value;

- (id)getWithId:(id)rowKey
         withId:(id)columnKey;

- (jboolean)isEmpty;

- (jint)size;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (void)clear;

- (id)putWithId:(id)rowKey
         withId:(id)columnKey
         withId:(id)value;

- (void)putAllWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)table;

- (id)removeWithId:(id)rowKey
            withId:(id)columnKey;

- (id<JavaUtilMap>)rowWithId:(id)rowKey;

- (id<JavaUtilMap>)columnWithId:(id)columnKey;

- (id<JavaUtilSet>)cellSet;

- (id<JavaUtilSet>)rowKeySet;

- (id<JavaUtilSet>)columnKeySet;

- (id<JavaUtilCollection>)values;

- (id<JavaUtilMap>)rowMap;

- (id<JavaUtilMap>)columnMap;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTable)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTable)

#endif

#if !defined (ComGoogleCommonCollectTable_Cell_) && (INCLUDE_ALL_ComGoogleCommonCollectTable || defined(INCLUDE_ComGoogleCommonCollectTable_Cell))
#define ComGoogleCommonCollectTable_Cell_

@protocol ComGoogleCommonCollectTable_Cell < JavaObject >

- (id)getRowKey;

- (id)getColumnKey;

- (id)getValue;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTable_Cell)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTable_Cell)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectTable")