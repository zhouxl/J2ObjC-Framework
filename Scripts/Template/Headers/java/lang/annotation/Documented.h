//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/annotation/Documented.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangAnnotationDocumented")
#ifdef RESTRICT_JavaLangAnnotationDocumented
#define INCLUDE_ALL_JavaLangAnnotationDocumented 0
#else
#define INCLUDE_ALL_JavaLangAnnotationDocumented 1
#endif
#undef RESTRICT_JavaLangAnnotationDocumented

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangAnnotationDocumented_) && (INCLUDE_ALL_JavaLangAnnotationDocumented || defined(INCLUDE_JavaLangAnnotationDocumented))
#define JavaLangAnnotationDocumented_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "../../../java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief Indicates that annotations with a type are to be documented by javadoc
  and similar tools by default.This type should be used to annotate the
  declarations of types whose annotations affect the use of annotated
  elements by their clients.
 If a type declaration is annotated with
  Documented, its annotations become part of the public API
  of the annotated elements.
 @author Joshua Bloch
 @since 1.5
 */
@protocol JavaLangAnnotationDocumented < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaLangAnnotationDocumented : NSObject < JavaLangAnnotationDocumented >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangAnnotationDocumented)

FOUNDATION_EXPORT id<JavaLangAnnotationDocumented> create_JavaLangAnnotationDocumented(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangAnnotationDocumented)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangAnnotationDocumented")
