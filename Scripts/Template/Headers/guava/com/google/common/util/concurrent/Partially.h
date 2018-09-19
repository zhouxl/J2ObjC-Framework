//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/util/concurrent/Partially.java
//

#include "../../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentPartially")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentPartially
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentPartially 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentPartially 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentPartially

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentPartially_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentPartially || defined(INCLUDE_ComGoogleCommonUtilConcurrentPartially))
#define ComGoogleCommonUtilConcurrentPartially_

/*!
 @brief Outer class that exists solely to let us write <code>Partially.GwtIncompatible</code> instead of plain 
 <code>GwtIncompatible</code>.This is more accurate for <code>Futures.catching</code>, which is available
  under GWT but with a slightly different signature.
 <p>We can't use <code>PartiallyGwtIncompatible</code> because then the GWT compiler wouldn't recognize
  it as a <code>GwtIncompatible</code> annotation. And for <code>Futures.catching</code>, we need the GWT
  compiler to autostrip the normal server method in order to expose the special, inherited GWT
  version.
 */
@interface ComGoogleCommonUtilConcurrentPartially : NSObject

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentPartially)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentPartially)

#endif

#if !defined (ComGoogleCommonUtilConcurrentPartially_GwtIncompatible_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentPartially || defined(INCLUDE_ComGoogleCommonUtilConcurrentPartially_GwtIncompatible))
#define ComGoogleCommonUtilConcurrentPartially_GwtIncompatible_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "../../../../../../java/lang/annotation/Annotation.h"

/*!
 @brief The presence of this annotation on an API indicates that the method <i>may</i> be used with the 
 <a href="http://www.gwtproject.org/">Google Web Toolkit</a> (GWT) but that it has <i>some
  restrictions</i>.
 */
@protocol ComGoogleCommonUtilConcurrentPartially_GwtIncompatible < JavaLangAnnotationAnnotation >

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentPartially_GwtIncompatible)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentPartially_GwtIncompatible)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentPartially")
