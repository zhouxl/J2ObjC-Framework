//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/util/concurrent/GwtFluentFutureCatchingSpecialization.java
//

#include "../../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization || defined(INCLUDE_ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization))
#define ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization_

#define RESTRICT_ComGoogleCommonUtilConcurrentListenableFuture 1
#define INCLUDE_ComGoogleCommonUtilConcurrentListenableFuture 1
#include "../../../../../../com/google/common/util/concurrent/ListenableFuture.h"

/*!
 @brief Hidden superclass of <code>FluentFuture</code> that provides us a place to declare special GWT
  versions of the <code>FluentFuture.catching</code>
  family of methods.Those versions have slightly different signatures.
 */
@interface ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization : NSObject < ComGoogleCommonUtilConcurrentListenableFuture >

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization_init(ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization")
