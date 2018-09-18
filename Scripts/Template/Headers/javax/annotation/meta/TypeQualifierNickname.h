//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/jsr305/build_result/java/javax/annotation/meta/TypeQualifierNickname.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationMetaTypeQualifierNickname")
#ifdef RESTRICT_JavaxAnnotationMetaTypeQualifierNickname
#define INCLUDE_ALL_JavaxAnnotationMetaTypeQualifierNickname 0
#else
#define INCLUDE_ALL_JavaxAnnotationMetaTypeQualifierNickname 1
#endif
#undef RESTRICT_JavaxAnnotationMetaTypeQualifierNickname

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxAnnotationMetaTypeQualifierNickname_) && (INCLUDE_ALL_JavaxAnnotationMetaTypeQualifierNickname || defined(INCLUDE_JavaxAnnotationMetaTypeQualifierNickname))
#define JavaxAnnotationMetaTypeQualifierNickname_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

/*!
 @brief This annotation is applied to a annotation, and marks the annotation as being
  a qualifier nickname.Applying a nickname annotation X to a element Y should
  be interpreted as having the same meaning as applying all of annotations of X
  (other than QualifierNickname) to Y.
 <p>
  Thus, you might define a qualifier SocialSecurityNumber as follows: 
 </p>
    
 <code>
 */
@protocol JavaxAnnotationMetaTypeQualifierNickname < JavaLangAnnotationAnnotation >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationMetaTypeQualifierNickname)

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationMetaTypeQualifierNickname)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationMetaTypeQualifierNickname")
