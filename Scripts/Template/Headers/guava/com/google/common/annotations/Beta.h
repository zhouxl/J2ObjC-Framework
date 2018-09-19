//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/annotations/Beta.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonAnnotationsBeta")
#ifdef RESTRICT_ComGoogleCommonAnnotationsBeta
#define INCLUDE_ALL_ComGoogleCommonAnnotationsBeta 0
#else
#define INCLUDE_ALL_ComGoogleCommonAnnotationsBeta 1
#endif
#undef RESTRICT_ComGoogleCommonAnnotationsBeta

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonAnnotationsBeta_) && (INCLUDE_ALL_ComGoogleCommonAnnotationsBeta || defined(INCLUDE_ComGoogleCommonAnnotationsBeta))
#define ComGoogleCommonAnnotationsBeta_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "../../../../../java/lang/annotation/Annotation.h"

/*!
 @brief Signifies that a public API (public class, method or field) is subject to incompatible changes,
  or even removal, in a future release.An API bearing this annotation is exempt from any
  compatibility guarantees made by its containing library.
 Note that the presence of this
  annotation implies nothing about the quality or performance of the API in question, only the fact
  that it is not "API-frozen." 
 <p>It is generally safe for <i>applications</i> to depend on beta APIs, at the cost of some extra
  work during upgrades. However it is generally inadvisable for <i>libraries</i> (which get
  included on users' CLASSPATHs, outside the library developers' control) to do so.
 @author Kevin Bourrillion
 */
@protocol ComGoogleCommonAnnotationsBeta < JavaLangAnnotationAnnotation >

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonAnnotationsBeta)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonAnnotationsBeta)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonAnnotationsBeta")
