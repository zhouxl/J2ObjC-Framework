//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/org/checkerframework/framework/qual/DefaultQualifierInHierarchy.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgCheckerframeworkFrameworkQualDefaultQualifierInHierarchy")
#ifdef RESTRICT_OrgCheckerframeworkFrameworkQualDefaultQualifierInHierarchy
#define INCLUDE_ALL_OrgCheckerframeworkFrameworkQualDefaultQualifierInHierarchy 0
#else
#define INCLUDE_ALL_OrgCheckerframeworkFrameworkQualDefaultQualifierInHierarchy 1
#endif
#undef RESTRICT_OrgCheckerframeworkFrameworkQualDefaultQualifierInHierarchy

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgCheckerframeworkFrameworkQualDefaultQualifierInHierarchy_) && (INCLUDE_ALL_OrgCheckerframeworkFrameworkQualDefaultQualifierInHierarchy || defined(INCLUDE_OrgCheckerframeworkFrameworkQualDefaultQualifierInHierarchy))
#define OrgCheckerframeworkFrameworkQualDefaultQualifierInHierarchy_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "../../../../../java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief Indicates that the annotated qualifier is the default qualifier in the
  qualifier hierarchy:  it applies if the programmer writes no explicit
  qualifier and no other default has been specified for the location.
 <p>
  Other defaults can be specified for a checker via the <code>DefaultFor</code> meta-annotation, which
  takes precedence over <code>DefaultQualifierInHierarchy</code>, or via 
 <code>org.checkerframework.framework.type.GenericAnnotatedTypeFactory</code>.
  <p>
  The <code>DefaultQualifier</code> annotation, which targets Java code elements,
  takes precedence over <code>DefaultQualifierInHierarchy</code>.
  <p>
  Each type qualifier hierarchy may have at most one qualifier marked as 
 <code>DefaultQualifierInHierarchy</code>.
 - seealso: org.checkerframework.framework.qual.DefaultQualifier
 */
@protocol OrgCheckerframeworkFrameworkQualDefaultQualifierInHierarchy < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface OrgCheckerframeworkFrameworkQualDefaultQualifierInHierarchy : NSObject < OrgCheckerframeworkFrameworkQualDefaultQualifierInHierarchy >

@end

J2OBJC_EMPTY_STATIC_INIT(OrgCheckerframeworkFrameworkQualDefaultQualifierInHierarchy)

FOUNDATION_EXPORT id<OrgCheckerframeworkFrameworkQualDefaultQualifierInHierarchy> create_OrgCheckerframeworkFrameworkQualDefaultQualifierInHierarchy(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgCheckerframeworkFrameworkQualDefaultQualifierInHierarchy)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgCheckerframeworkFrameworkQualDefaultQualifierInHierarchy")
