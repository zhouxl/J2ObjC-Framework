//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/org/checkerframework/framework/qual/InheritedAnnotation.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgCheckerframeworkFrameworkQualInheritedAnnotation")
#ifdef RESTRICT_OrgCheckerframeworkFrameworkQualInheritedAnnotation
#define INCLUDE_ALL_OrgCheckerframeworkFrameworkQualInheritedAnnotation 0
#else
#define INCLUDE_ALL_OrgCheckerframeworkFrameworkQualInheritedAnnotation 1
#endif
#undef RESTRICT_OrgCheckerframeworkFrameworkQualInheritedAnnotation

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgCheckerframeworkFrameworkQualInheritedAnnotation_) && (INCLUDE_ALL_OrgCheckerframeworkFrameworkQualInheritedAnnotation || defined(INCLUDE_OrgCheckerframeworkFrameworkQualInheritedAnnotation))
#define OrgCheckerframeworkFrameworkQualInheritedAnnotation_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief A meta-annotation that specifies if an annotation should be inherited.
 */
@protocol OrgCheckerframeworkFrameworkQualInheritedAnnotation < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface OrgCheckerframeworkFrameworkQualInheritedAnnotation : NSObject < OrgCheckerframeworkFrameworkQualInheritedAnnotation >

@end

J2OBJC_EMPTY_STATIC_INIT(OrgCheckerframeworkFrameworkQualInheritedAnnotation)

FOUNDATION_EXPORT id<OrgCheckerframeworkFrameworkQualInheritedAnnotation> create_OrgCheckerframeworkFrameworkQualInheritedAnnotation(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgCheckerframeworkFrameworkQualInheritedAnnotation)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgCheckerframeworkFrameworkQualInheritedAnnotation")
