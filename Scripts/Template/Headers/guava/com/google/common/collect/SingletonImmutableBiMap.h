//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/SingletonImmutableBiMap.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectSingletonImmutableBiMap")
#ifdef RESTRICT_ComGoogleCommonCollectSingletonImmutableBiMap
#define INCLUDE_ALL_ComGoogleCommonCollectSingletonImmutableBiMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectSingletonImmutableBiMap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectSingletonImmutableBiMap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectSingletonImmutableBiMap_) && (INCLUDE_ALL_ComGoogleCommonCollectSingletonImmutableBiMap || defined(INCLUDE_ComGoogleCommonCollectSingletonImmutableBiMap))
#define ComGoogleCommonCollectSingletonImmutableBiMap_

#define RESTRICT_ComGoogleCommonCollectImmutableBiMap 1
#define INCLUDE_ComGoogleCommonCollectImmutableBiMap 1
#include "../../../../../com/google/common/collect/ImmutableBiMap.h"

@class ComGoogleCommonCollectImmutableSet;
@protocol JavaUtilFunctionBiConsumer;

/*!
 @brief Implementation of <code>ImmutableMap</code> with exactly one entry.
 @author Jesse Wilson
 @author Kevin Bourrillion
 */
@interface ComGoogleCommonCollectSingletonImmutableBiMap : ComGoogleCommonCollectImmutableBiMap {
 @public
  id singleKey_;
  id singleValue_;
  volatile_id inverse_;
}

#pragma mark Public

- (jboolean)containsKeyWithId:(id __nullable)key;

- (jboolean)containsValueWithId:(id __nullable)value;

- (ComGoogleCommonCollectImmutableSet *)entrySet;

- (void)forEachWithJavaUtilFunctionBiConsumer:(id<JavaUtilFunctionBiConsumer>)action;

- (id)getWithId:(id __nullable)key;

- (ComGoogleCommonCollectImmutableBiMap *)inverse;

- (ComGoogleCommonCollectImmutableSet *)keySet;

- (jint)size;

#pragma mark Package-Private

- (instancetype __nonnull)initWithId:(id)singleKey
                              withId:(id)singleValue;

- (ComGoogleCommonCollectImmutableSet *)createEntrySet;

- (ComGoogleCommonCollectImmutableSet *)createKeySet;

- (jboolean)isPartialView;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSingletonImmutableBiMap)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectSingletonImmutableBiMap, singleKey_, id)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectSingletonImmutableBiMap, singleValue_, id)

FOUNDATION_EXPORT void ComGoogleCommonCollectSingletonImmutableBiMap_initWithId_withId_(ComGoogleCommonCollectSingletonImmutableBiMap *self, id singleKey, id singleValue);

FOUNDATION_EXPORT ComGoogleCommonCollectSingletonImmutableBiMap *new_ComGoogleCommonCollectSingletonImmutableBiMap_initWithId_withId_(id singleKey, id singleValue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectSingletonImmutableBiMap *create_ComGoogleCommonCollectSingletonImmutableBiMap_initWithId_withId_(id singleKey, id singleValue);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSingletonImmutableBiMap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectSingletonImmutableBiMap")
