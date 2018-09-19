//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/errorprone/annotations/MustBeClosed.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleErrorproneAnnotationsMustBeClosed")
#ifdef RESTRICT_ComGoogleErrorproneAnnotationsMustBeClosed
#define INCLUDE_ALL_ComGoogleErrorproneAnnotationsMustBeClosed 0
#else
#define INCLUDE_ALL_ComGoogleErrorproneAnnotationsMustBeClosed 1
#endif
#undef RESTRICT_ComGoogleErrorproneAnnotationsMustBeClosed

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleErrorproneAnnotationsMustBeClosed_) && (INCLUDE_ALL_ComGoogleErrorproneAnnotationsMustBeClosed || defined(INCLUDE_ComGoogleErrorproneAnnotationsMustBeClosed))
#define ComGoogleErrorproneAnnotationsMustBeClosed_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "../../../../../java/lang/annotation/Annotation.h"

/*!
 @brief Annotation for constructors of AutoCloseables or methods that return an AutoCloseable and require
  that the resource is closed.
 <p>This is enforced by checking that invocations occur within the resource variable initializer
  of a try-with-resources statement, which guarantees that the resource is always closed. The
  analysis may be improved in the future to recognize other patterns where the resource will always
  be closed. 
 <p>Note that Android SDK versions prior to 19 do not support try-with-resources, so the
  annotation should be avoided on APIs that may be used on Android.
 */
@protocol ComGoogleErrorproneAnnotationsMustBeClosed < JavaLangAnnotationAnnotation >

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleErrorproneAnnotationsMustBeClosed)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleErrorproneAnnotationsMustBeClosed)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleErrorproneAnnotationsMustBeClosed")
