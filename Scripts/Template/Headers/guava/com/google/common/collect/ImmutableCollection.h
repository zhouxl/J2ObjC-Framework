//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/ImmutableCollection.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableCollection")
#ifdef RESTRICT_ComGoogleCommonCollectImmutableCollection
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableCollection 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableCollection 1
#endif
#undef RESTRICT_ComGoogleCommonCollectImmutableCollection
#ifdef INCLUDE_ComGoogleCommonCollectImmutableCollection_ArrayBasedBuilder
#define INCLUDE_ComGoogleCommonCollectImmutableCollection_Builder 1
#endif

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectImmutableCollection_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableCollection || defined(INCLUDE_ComGoogleCommonCollectImmutableCollection))
#define ComGoogleCommonCollectImmutableCollection_

#define RESTRICT_JavaUtilAbstractCollection 1
#define INCLUDE_JavaUtilAbstractCollection 1
#include "../../../../../java/util/AbstractCollection.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../../java/io/Serializable.h"

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectUnmodifiableIterator;
@class IOSObjectArray;
@protocol JavaUtilCollection;

@interface ComGoogleCommonCollectImmutableCollection : JavaUtilAbstractCollection < JavaIoSerializable >

#pragma mark Public

- (jboolean)addWithId:(id)e;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)newElements;

- (ComGoogleCommonCollectImmutableList *)asList;

- (void)clear;

- (jboolean)containsWithId:(id)object;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (jboolean)removeWithId:(id)object;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)oldElements;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)elementsToKeep;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)other;

#pragma mark Package-Private

- (instancetype)init;

- (jint)copyIntoArrayWithNSObjectArray:(IOSObjectArray *)dst
                               withInt:(jint)offset OBJC_METHOD_FAMILY_NONE;

- (ComGoogleCommonCollectImmutableList *)createAsList;

- (jboolean)isPartialView;

- (id)writeReplace;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableCollection)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableCollection_init(ComGoogleCommonCollectImmutableCollection *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableCollection)

#endif

#if !defined (ComGoogleCommonCollectImmutableCollection_Builder_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableCollection || defined(INCLUDE_ComGoogleCommonCollectImmutableCollection_Builder))
#define ComGoogleCommonCollectImmutableCollection_Builder_

@class ComGoogleCommonCollectImmutableCollection;
@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectImmutableCollection_Builder : NSObject

#pragma mark Public

- (ComGoogleCommonCollectImmutableCollection_Builder *)addWithId:(id)element;

- (ComGoogleCommonCollectImmutableCollection_Builder *)addWithNSObjectArray:(IOSObjectArray *)elements;

- (ComGoogleCommonCollectImmutableCollection_Builder *)addAllWithJavaLangIterable:(id<JavaLangIterable>)elements;

- (ComGoogleCommonCollectImmutableCollection_Builder *)addAllWithJavaUtilIterator:(id<JavaUtilIterator>)elements;

- (ComGoogleCommonCollectImmutableCollection *)build;

#pragma mark Package-Private

- (instancetype)init;

+ (jint)expandedCapacityWithInt:(jint)oldCapacity
                        withInt:(jint)minCapacity;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableCollection_Builder)

inline jint ComGoogleCommonCollectImmutableCollection_Builder_get_DEFAULT_INITIAL_CAPACITY(void);
#define ComGoogleCommonCollectImmutableCollection_Builder_DEFAULT_INITIAL_CAPACITY 4
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonCollectImmutableCollection_Builder, DEFAULT_INITIAL_CAPACITY, jint)

FOUNDATION_EXPORT jint ComGoogleCommonCollectImmutableCollection_Builder_expandedCapacityWithInt_withInt_(jint oldCapacity, jint minCapacity);

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableCollection_Builder_init(ComGoogleCommonCollectImmutableCollection_Builder *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableCollection_Builder)

#endif

#if !defined (ComGoogleCommonCollectImmutableCollection_ArrayBasedBuilder_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableCollection || defined(INCLUDE_ComGoogleCommonCollectImmutableCollection_ArrayBasedBuilder))
#define ComGoogleCommonCollectImmutableCollection_ArrayBasedBuilder_

@class ComGoogleCommonCollectImmutableCollection_Builder;
@class IOSObjectArray;
@protocol JavaLangIterable;

@interface ComGoogleCommonCollectImmutableCollection_ArrayBasedBuilder : ComGoogleCommonCollectImmutableCollection_Builder {
 @public
  IOSObjectArray *contents_;
  jint size_;
}

#pragma mark Public

- (ComGoogleCommonCollectImmutableCollection_ArrayBasedBuilder *)addWithId:(id)element;

- (ComGoogleCommonCollectImmutableCollection_Builder *)addWithNSObjectArray:(IOSObjectArray *)elements;

- (ComGoogleCommonCollectImmutableCollection_Builder *)addAllWithJavaLangIterable:(id<JavaLangIterable>)elements;

#pragma mark Package-Private

- (instancetype)initWithInt:(jint)initialCapacity;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableCollection_ArrayBasedBuilder)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableCollection_ArrayBasedBuilder, contents_, IOSObjectArray *)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableCollection_ArrayBasedBuilder_initWithInt_(ComGoogleCommonCollectImmutableCollection_ArrayBasedBuilder *self, jint initialCapacity);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableCollection_ArrayBasedBuilder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableCollection")
