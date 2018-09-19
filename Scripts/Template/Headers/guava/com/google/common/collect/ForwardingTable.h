//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/ForwardingTable.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingTable")
#ifdef RESTRICT_ComGoogleCommonCollectForwardingTable
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingTable 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingTable 1
#endif
#undef RESTRICT_ComGoogleCommonCollectForwardingTable

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectForwardingTable_) && (INCLUDE_ALL_ComGoogleCommonCollectForwardingTable || defined(INCLUDE_ComGoogleCommonCollectForwardingTable))
#define ComGoogleCommonCollectForwardingTable_

#define RESTRICT_ComGoogleCommonCollectForwardingObject 1
#define INCLUDE_ComGoogleCommonCollectForwardingObject 1
#include "../../../../../com/google/common/collect/ForwardingObject.h"

#define RESTRICT_ComGoogleCommonCollectTable 1
#define INCLUDE_ComGoogleCommonCollectTable 1
#include "../../../../../com/google/common/collect/Table.h"

@protocol JavaUtilCollection;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectForwardingTable : ComGoogleCommonCollectForwardingObject < ComGoogleCommonCollectTable >

#pragma mark Public

- (id<JavaUtilSet>)cellSet;

- (void)clear;

- (id<JavaUtilMap>)columnWithId:(id)columnKey;

- (id<JavaUtilSet>)columnKeySet;

- (id<JavaUtilMap>)columnMap;

- (jboolean)containsWithId:(id)rowKey
                    withId:(id)columnKey;

- (jboolean)containsColumnWithId:(id)columnKey;

- (jboolean)containsRowWithId:(id)rowKey;

- (jboolean)containsValueWithId:(id)value;

- (jboolean)isEqual:(id)obj;

- (id)getWithId:(id)rowKey
         withId:(id)columnKey;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (id)putWithId:(id)rowKey
         withId:(id)columnKey
         withId:(id)value;

- (void)putAllWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)table;

- (id)removeWithId:(id)rowKey
            withId:(id)columnKey;

- (id<JavaUtilMap>)rowWithId:(id)rowKey;

- (id<JavaUtilSet>)rowKeySet;

- (id<JavaUtilMap>)rowMap;

- (jint)size;

- (id<JavaUtilCollection>)values;

#pragma mark Protected

- (instancetype)init;

- (id<ComGoogleCommonCollectTable>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingTable)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingTable_init(ComGoogleCommonCollectForwardingTable *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingTable)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingTable")