//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/SingletonImmutableList.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectSingletonImmutableList")
#ifdef RESTRICT_ComGoogleCommonCollectSingletonImmutableList
#define INCLUDE_ALL_ComGoogleCommonCollectSingletonImmutableList 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectSingletonImmutableList 1
#endif
#undef RESTRICT_ComGoogleCommonCollectSingletonImmutableList

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectSingletonImmutableList_) && (INCLUDE_ALL_ComGoogleCommonCollectSingletonImmutableList || defined(INCLUDE_ComGoogleCommonCollectSingletonImmutableList))
#define ComGoogleCommonCollectSingletonImmutableList_

#define RESTRICT_ComGoogleCommonCollectImmutableList 1
#define INCLUDE_ComGoogleCommonCollectImmutableList 1
#include "../../../../../com/google/common/collect/ImmutableList.h"

@class ComGoogleCommonCollectUnmodifiableIterator;
@protocol JavaUtilSpliterator;

/*!
 @brief Implementation of <code>ImmutableList</code> with exactly one element.
 @author Hayward Chan
 */
@interface ComGoogleCommonCollectSingletonImmutableList : ComGoogleCommonCollectImmutableList {
 @public
  id element_;
}

#pragma mark Public

- (id)getWithInt:(jint)index;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (jint)size;

- (id<JavaUtilSpliterator>)spliterator;

- (ComGoogleCommonCollectImmutableList *)subListWithInt:(jint)fromIndex
                                                withInt:(jint)toIndex;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype __nonnull)initWithId:(id)element;

- (jboolean)isPartialView;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSingletonImmutableList)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectSingletonImmutableList, element_, id)

FOUNDATION_EXPORT void ComGoogleCommonCollectSingletonImmutableList_initWithId_(ComGoogleCommonCollectSingletonImmutableList *self, id element);

FOUNDATION_EXPORT ComGoogleCommonCollectSingletonImmutableList *new_ComGoogleCommonCollectSingletonImmutableList_initWithId_(id element) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectSingletonImmutableList *create_ComGoogleCommonCollectSingletonImmutableList_initWithId_(id element);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSingletonImmutableList)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectSingletonImmutableList")
