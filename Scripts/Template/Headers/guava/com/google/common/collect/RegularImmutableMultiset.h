//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/RegularImmutableMultiset.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableMultiset")
#ifdef RESTRICT_ComGoogleCommonCollectRegularImmutableMultiset
#define INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableMultiset 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableMultiset 1
#endif
#undef RESTRICT_ComGoogleCommonCollectRegularImmutableMultiset

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectRegularImmutableMultiset_) && (INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableMultiset || defined(INCLUDE_ComGoogleCommonCollectRegularImmutableMultiset))
#define ComGoogleCommonCollectRegularImmutableMultiset_

#define RESTRICT_ComGoogleCommonCollectImmutableMultiset 1
#define INCLUDE_ComGoogleCommonCollectImmutableMultiset 1
#include "../../../../../com/google/common/collect/ImmutableMultiset.h"

@class ComGoogleCommonCollectImmutableSet;
@protocol ComGoogleCommonCollectMultiset_Entry;
@protocol JavaUtilCollection;

/*!
 @brief Implementation of <code>ImmutableMultiset</code> with zero or more elements.
 @author Jared Levy
 @author Louis Wasserman
 */
@interface ComGoogleCommonCollectRegularImmutableMultiset : ComGoogleCommonCollectImmutableMultiset
@property (readonly, class, strong) ComGoogleCommonCollectImmutableMultiset *EMPTY NS_SWIFT_NAME(EMPTY);
@property (readonly, class) jdouble MAX_LOAD_FACTOR NS_SWIFT_NAME(MAX_LOAD_FACTOR);
@property (readonly, class) jdouble HASH_FLOODING_FPP NS_SWIFT_NAME(HASH_FLOODING_FPP);
@property (readonly, class) jint MAX_HASH_BUCKET_LENGTH NS_SWIFT_NAME(MAX_HASH_BUCKET_LENGTH);

+ (ComGoogleCommonCollectImmutableMultiset *)EMPTY;

+ (jdouble)MAX_LOAD_FACTOR;

+ (jdouble)HASH_FLOODING_FPP;

+ (jint)MAX_HASH_BUCKET_LENGTH;

#pragma mark Public

- (jint)countWithId:(id __nullable)element;

- (ComGoogleCommonCollectImmutableSet *)elementSet;

- (NSUInteger)hash;

- (jint)size;

#pragma mark Package-Private

+ (ComGoogleCommonCollectImmutableMultiset *)createWithJavaUtilCollection:(id<JavaUtilCollection>)entries;

- (id<ComGoogleCommonCollectMultiset_Entry>)getEntryWithInt:(jint)index;

- (jboolean)isPartialView;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectRegularImmutableMultiset)

inline ComGoogleCommonCollectImmutableMultiset *ComGoogleCommonCollectRegularImmutableMultiset_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultiset *ComGoogleCommonCollectRegularImmutableMultiset_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonCollectRegularImmutableMultiset, EMPTY, ComGoogleCommonCollectImmutableMultiset *)

/*!
 @brief Closed addressing tends to perform well even with high load factors.Being conservative here
  ensures that the table is still likely to be relatively sparse (hence it misses fast) while
  saving space.
 */
inline jdouble ComGoogleCommonCollectRegularImmutableMultiset_get_MAX_LOAD_FACTOR(void);
#define ComGoogleCommonCollectRegularImmutableMultiset_MAX_LOAD_FACTOR 1.0
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonCollectRegularImmutableMultiset, MAX_LOAD_FACTOR, jdouble)

/*!
 @brief Maximum allowed false positive probability of detecting a hash flooding attack given random
  input.
 */
inline jdouble ComGoogleCommonCollectRegularImmutableMultiset_get_HASH_FLOODING_FPP(void);
#define ComGoogleCommonCollectRegularImmutableMultiset_HASH_FLOODING_FPP 0.001
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonCollectRegularImmutableMultiset, HASH_FLOODING_FPP, jdouble)

/*!
 @brief Maximum allowed length of a hash table bucket before falling back to a j.u.HashMap based
  implementation.Experimentally determined.
 */
inline jint ComGoogleCommonCollectRegularImmutableMultiset_get_MAX_HASH_BUCKET_LENGTH(void);
#define ComGoogleCommonCollectRegularImmutableMultiset_MAX_HASH_BUCKET_LENGTH 9
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonCollectRegularImmutableMultiset, MAX_HASH_BUCKET_LENGTH, jint)

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultiset *ComGoogleCommonCollectRegularImmutableMultiset_createWithJavaUtilCollection_(id<JavaUtilCollection> entries);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableMultiset)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableMultiset")
