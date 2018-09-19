//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/hash/Striped64.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonHashStriped64")
#ifdef RESTRICT_ComGoogleCommonHashStriped64
#define INCLUDE_ALL_ComGoogleCommonHashStriped64 0
#else
#define INCLUDE_ALL_ComGoogleCommonHashStriped64 1
#endif
#undef RESTRICT_ComGoogleCommonHashStriped64

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonHashStriped64_) && (INCLUDE_ALL_ComGoogleCommonHashStriped64 || defined(INCLUDE_ComGoogleCommonHashStriped64))
#define ComGoogleCommonHashStriped64_

@class IOSIntArray;
@class IOSObjectArray;
@class JavaLangThreadLocal;
@class JavaUtilRandom;

/*!
 @brief A package-local class holding common representation and mechanics for classes supporting dynamic
  striping on 64bit values.The class extends Number so that concrete subclasses must publicly do
  so.
 */
@interface ComGoogleCommonHashStriped64 : NSNumber {
 @public
  /*!
   @brief Table of cells.When non-null, size is a power of 2.
   */
  volatile_id cells_;
  /*!
   @brief Base value, used mainly when there is no contention, but also as a fallback during table
  initialization races.Updated via CAS.
   */
  volatile_jlong base_;
  /*!
   @brief Spinlock (locked via CAS) used when resizing and/or creating Cells.
   */
  volatile_jint busy_;
}
@property (readonly, class, strong) JavaLangThreadLocal *threadHashCode NS_SWIFT_NAME(threadHashCode);
@property (readonly, class, strong) JavaUtilRandom *rng NS_SWIFT_NAME(rng);
@property (readonly, class) jint NCPU NS_SWIFT_NAME(NCPU);

+ (JavaLangThreadLocal *)threadHashCode;

+ (JavaUtilRandom *)rng;

+ (jint)NCPU;

#pragma mark Public

- (NSUInteger)hash;

- (jboolean)isEqual:(id)obj;

#pragma mark Package-Private

/*!
 @brief Package-private default constructor
 */
- (instancetype __nonnull)init;

/*!
 @brief CASes the base field.
 */
- (jboolean)casBaseWithLong:(jlong)cmp
                   withLong:(jlong)val;

/*!
 @brief CASes the busy field from 0 to 1 to acquire lock.
 */
- (jboolean)casBusy;

/*!
 @brief Computes the function of current and new value.Subclasses should open-code this update
  function for most uses, but the virtualized form is needed within retryUpdate.
 @param currentValue the current value (of either base or a cell)
 @param newValue the argument from a user update call
 @return result of the update function
 */
- (jlong)fnWithLong:(jlong)currentValue
           withLong:(jlong)newValue;

/*!
 @brief Sets base and all cells to the given value.
 */
- (void)internalResetWithLong:(jlong)initialValue;

/*!
 @brief Handles cases of updates involving initialization, resizing, creating new Cells, and/or
  contention.See above for explanation.
 This method suffers the usual non-modularity problems of
  optimistic retry code, relying on rechecked sets of reads.
 @param x the value
 @param hc the hash code holder
 @param wasUncontended false if CAS failed before call
 */
- (void)retryUpdateWithLong:(jlong)x
               withIntArray:(IOSIntArray *)hc
                withBoolean:(jboolean)wasUncontended;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonHashStriped64)

J2OBJC_VOLATILE_FIELD_SETTER(ComGoogleCommonHashStriped64, cells_, IOSObjectArray *)

/*!
 @brief ThreadLocal holding a single-slot int array holding hash code.Unlike the JDK8 version of this
  class, we use a suboptimal int[] representation to avoid introducing a new type that can impede
  class-unloading when ThreadLocals are not removed.
 */
inline JavaLangThreadLocal *ComGoogleCommonHashStriped64_get_threadHashCode(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaLangThreadLocal *ComGoogleCommonHashStriped64_threadHashCode;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonHashStriped64, threadHashCode, JavaLangThreadLocal *)

/*!
 @brief Generator of new random hash codes
 */
inline JavaUtilRandom *ComGoogleCommonHashStriped64_get_rng(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaUtilRandom *ComGoogleCommonHashStriped64_rng;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonHashStriped64, rng, JavaUtilRandom *)

/*!
 @brief Number of CPUS, to place bound on table size
 */
inline jint ComGoogleCommonHashStriped64_get_NCPU(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT jint ComGoogleCommonHashStriped64_NCPU;
J2OBJC_STATIC_FIELD_PRIMITIVE_FINAL(ComGoogleCommonHashStriped64, NCPU, jint)

FOUNDATION_EXPORT void ComGoogleCommonHashStriped64_init(ComGoogleCommonHashStriped64 *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashStriped64)

#endif

#if !defined (ComGoogleCommonHashStriped64_Cell_) && (INCLUDE_ALL_ComGoogleCommonHashStriped64 || defined(INCLUDE_ComGoogleCommonHashStriped64_Cell))
#define ComGoogleCommonHashStriped64_Cell_

/*!
 @brief Padded variant of AtomicLong supporting only raw accesses plus CAS.The value field is placed
  between pads, hoping that the JVM doesn't reorder them.
 <p>JVM intrinsics note: It would be possible to use a release-only form of CAS here, if it were
  provided.
 */
@interface ComGoogleCommonHashStriped64_Cell : NSObject {
 @public
  volatile_jlong p0_;
  volatile_jlong p1_;
  volatile_jlong p2_;
  volatile_jlong p3_;
  volatile_jlong p4_;
  volatile_jlong p5_;
  volatile_jlong p6_;
  volatile_jlong value_;
  volatile_jlong q0_;
  volatile_jlong q1_;
  volatile_jlong q2_;
  volatile_jlong q3_;
  volatile_jlong q4_;
  volatile_jlong q5_;
  volatile_jlong q6_;
}

#pragma mark Package-Private

- (instancetype __nonnull)initWithLong:(jlong)x;

- (jboolean)casWithLong:(jlong)cmp
               withLong:(jlong)val;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonHashStriped64_Cell)

FOUNDATION_EXPORT void ComGoogleCommonHashStriped64_Cell_initWithLong_(ComGoogleCommonHashStriped64_Cell *self, jlong x);

FOUNDATION_EXPORT ComGoogleCommonHashStriped64_Cell *new_ComGoogleCommonHashStriped64_Cell_initWithLong_(jlong x) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonHashStriped64_Cell *create_ComGoogleCommonHashStriped64_Cell_initWithLong_(jlong x);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashStriped64_Cell)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonHashStriped64")