//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/UnmodifiableListIterator.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectUnmodifiableListIterator")
#ifdef RESTRICT_ComGoogleCommonCollectUnmodifiableListIterator
#define INCLUDE_ALL_ComGoogleCommonCollectUnmodifiableListIterator 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectUnmodifiableListIterator 1
#endif
#undef RESTRICT_ComGoogleCommonCollectUnmodifiableListIterator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectUnmodifiableListIterator_) && (INCLUDE_ALL_ComGoogleCommonCollectUnmodifiableListIterator || defined(INCLUDE_ComGoogleCommonCollectUnmodifiableListIterator))
#define ComGoogleCommonCollectUnmodifiableListIterator_

#define RESTRICT_ComGoogleCommonCollectUnmodifiableIterator 1
#define INCLUDE_ComGoogleCommonCollectUnmodifiableIterator 1
#include "../../../../../com/google/common/collect/UnmodifiableIterator.h"

#define RESTRICT_JavaUtilListIterator 1
#define INCLUDE_JavaUtilListIterator 1
#include "../../../../../java/util/ListIterator.h"

/*!
 @brief A list iterator that does not support <code>remove</code>, <code>add</code>, or <code>set</code>.
 @since 7.0
 @author Louis Wasserman
 */
@interface ComGoogleCommonCollectUnmodifiableListIterator : ComGoogleCommonCollectUnmodifiableIterator < JavaUtilListIterator >

#pragma mark Public

/*!
 @brief Guaranteed to throw an exception and leave the underlying data unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (void)addWithId:(id)e __attribute__((deprecated));

/*!
 @brief Guaranteed to throw an exception and leave the underlying data unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (void)setWithId:(id)e __attribute__((deprecated));

#pragma mark Protected

/*!
 @brief Constructor for use by subclasses.
 */
- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectUnmodifiableListIterator)

FOUNDATION_EXPORT void ComGoogleCommonCollectUnmodifiableListIterator_init(ComGoogleCommonCollectUnmodifiableListIterator *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectUnmodifiableListIterator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectUnmodifiableListIterator")
