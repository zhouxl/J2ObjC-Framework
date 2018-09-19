//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/AllEqualOrdering.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectAllEqualOrdering")
#ifdef RESTRICT_ComGoogleCommonCollectAllEqualOrdering
#define INCLUDE_ALL_ComGoogleCommonCollectAllEqualOrdering 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectAllEqualOrdering 1
#endif
#undef RESTRICT_ComGoogleCommonCollectAllEqualOrdering

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectAllEqualOrdering_) && (INCLUDE_ALL_ComGoogleCommonCollectAllEqualOrdering || defined(INCLUDE_ComGoogleCommonCollectAllEqualOrdering))
#define ComGoogleCommonCollectAllEqualOrdering_

#define RESTRICT_ComGoogleCommonCollectOrdering 1
#define INCLUDE_ComGoogleCommonCollectOrdering 1
#include "../../../../../com/google/common/collect/Ordering.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../../java/io/Serializable.h"

@class ComGoogleCommonCollectImmutableList;
@protocol JavaLangIterable;
@protocol JavaUtilList;

@interface ComGoogleCommonCollectAllEqualOrdering : ComGoogleCommonCollectOrdering < JavaIoSerializable >

#pragma mark Public

- (jint)compareWithId:(id)left
               withId:(id)right;

- (ComGoogleCommonCollectImmutableList *)immutableSortedCopyWithJavaLangIterable:(id<JavaLangIterable>)iterable;

- (ComGoogleCommonCollectOrdering *)reverse;

- (id<JavaUtilList>)sortedCopyWithJavaLangIterable:(id<JavaLangIterable>)iterable;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectAllEqualOrdering)

inline ComGoogleCommonCollectAllEqualOrdering *ComGoogleCommonCollectAllEqualOrdering_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonCollectAllEqualOrdering *ComGoogleCommonCollectAllEqualOrdering_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonCollectAllEqualOrdering, INSTANCE, ComGoogleCommonCollectAllEqualOrdering *)

FOUNDATION_EXPORT void ComGoogleCommonCollectAllEqualOrdering_init(ComGoogleCommonCollectAllEqualOrdering *self);

FOUNDATION_EXPORT ComGoogleCommonCollectAllEqualOrdering *new_ComGoogleCommonCollectAllEqualOrdering_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectAllEqualOrdering *create_ComGoogleCommonCollectAllEqualOrdering_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAllEqualOrdering)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectAllEqualOrdering")
