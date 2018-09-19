//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/errorprone/annotations/RequiredModifiers.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleErrorproneAnnotationsRequiredModifiers")
#ifdef RESTRICT_ComGoogleErrorproneAnnotationsRequiredModifiers
#define INCLUDE_ALL_ComGoogleErrorproneAnnotationsRequiredModifiers 0
#else
#define INCLUDE_ALL_ComGoogleErrorproneAnnotationsRequiredModifiers 1
#endif
#undef RESTRICT_ComGoogleErrorproneAnnotationsRequiredModifiers

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleErrorproneAnnotationsRequiredModifiers_) && (INCLUDE_ALL_ComGoogleErrorproneAnnotationsRequiredModifiers || defined(INCLUDE_ComGoogleErrorproneAnnotationsRequiredModifiers))
#define ComGoogleErrorproneAnnotationsRequiredModifiers_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "../../../../../java/lang/annotation/Annotation.h"

/*!
 @brief Annotation declaring that the target annotation requires all the specified modifiers.For
  example, an annotation declared as: 
 @code

  @@RequiredModifiers(Modifier.PUBLIC)
  @@interface MyAnnotation {} 
  
@endcode
  
 <p>will be considered illegal when used on non-public elements such as: 
 @code

  @@MyAnnotation void foo() {} 
  
@endcode
 @author benyu@@google.com (Jige Yu)
 */
@protocol ComGoogleErrorproneAnnotationsRequiredModifiers < JavaLangAnnotationAnnotation >

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleErrorproneAnnotationsRequiredModifiers)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleErrorproneAnnotationsRequiredModifiers)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleErrorproneAnnotationsRequiredModifiers")
