//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/ImmutableEnumSet.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableEnumSet")
#ifdef RESTRICT_ComGoogleCommonCollectImmutableEnumSet
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableEnumSet 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableEnumSet 1
#endif
#undef RESTRICT_ComGoogleCommonCollectImmutableEnumSet

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectImmutableEnumSet_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableEnumSet || defined(INCLUDE_ComGoogleCommonCollectImmutableEnumSet))
#define ComGoogleCommonCollectImmutableEnumSet_

#define RESTRICT_ComGoogleCommonCollectImmutableSet 1
#define INCLUDE_ComGoogleCommonCollectImmutableSet 1
#include "../../../../../com/google/common/collect/ImmutableSet.h"

@class ComGoogleCommonCollectUnmodifiableIterator;
@class JavaUtilEnumSet;
@protocol JavaUtilCollection;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilSpliterator;

/*!
 @brief Implementation of <code>ImmutableSet</code> backed by a non-empty <code>java.util.EnumSet</code>.
 @author Jared Levy
 */
@interface ComGoogleCommonCollectImmutableEnumSet : ComGoogleCommonCollectImmutableSet

#pragma mark Public

- (jboolean)containsWithId:(id)object;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)isEqual:(id)object;

- (void)forEachWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (jint)size;

- (id<JavaUtilSpliterator>)spliterator;

- (NSString *)description;

#pragma mark Package-Private

+ (ComGoogleCommonCollectImmutableSet *)asImmutableWithJavaUtilEnumSet:(JavaUtilEnumSet *)set;

- (jboolean)isHashCodeFast;

- (jboolean)isPartialView;

- (id)writeReplace;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableEnumSet)

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSet *ComGoogleCommonCollectImmutableEnumSet_asImmutableWithJavaUtilEnumSet_(JavaUtilEnumSet *set);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableEnumSet)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableEnumSet")
