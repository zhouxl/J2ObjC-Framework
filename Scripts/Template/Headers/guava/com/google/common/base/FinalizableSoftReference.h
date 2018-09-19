//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/base/FinalizableSoftReference.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseFinalizableSoftReference")
#ifdef RESTRICT_ComGoogleCommonBaseFinalizableSoftReference
#define INCLUDE_ALL_ComGoogleCommonBaseFinalizableSoftReference 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseFinalizableSoftReference 1
#endif
#undef RESTRICT_ComGoogleCommonBaseFinalizableSoftReference

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBaseFinalizableSoftReference_) && (INCLUDE_ALL_ComGoogleCommonBaseFinalizableSoftReference || defined(INCLUDE_ComGoogleCommonBaseFinalizableSoftReference))
#define ComGoogleCommonBaseFinalizableSoftReference_

#define RESTRICT_JavaLangRefSoftReference 1
#define INCLUDE_JavaLangRefSoftReference 1
#include "../../../../../java/lang/ref/SoftReference.h"

#define RESTRICT_ComGoogleCommonBaseFinalizableReference 1
#define INCLUDE_ComGoogleCommonBaseFinalizableReference 1
#include "../../../../../com/google/common/base/FinalizableReference.h"

@class ComGoogleCommonBaseFinalizableReferenceQueue;

/*!
 @brief Soft reference with a <code>finalizeReferent()</code> method which a background thread invokes after
  the garbage collector reclaims the referent.This is a simpler alternative to using a <code>ReferenceQueue</code>
 .
 @author Bob Lee
 @since 2.0
 */
@interface ComGoogleCommonBaseFinalizableSoftReference : JavaLangRefSoftReference < ComGoogleCommonBaseFinalizableReference >

#pragma mark Protected

/*!
 @brief Constructs a new finalizable soft reference.
 @param referent to softly reference
 @param queue that should finalize the referent
 */
- (instancetype __nonnull)initWithId:(id)referent
withComGoogleCommonBaseFinalizableReferenceQueue:(ComGoogleCommonBaseFinalizableReferenceQueue *)queue;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseFinalizableSoftReference)

FOUNDATION_EXPORT void ComGoogleCommonBaseFinalizableSoftReference_initWithId_withComGoogleCommonBaseFinalizableReferenceQueue_(ComGoogleCommonBaseFinalizableSoftReference *self, id referent, ComGoogleCommonBaseFinalizableReferenceQueue *queue);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseFinalizableSoftReference)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseFinalizableSoftReference")