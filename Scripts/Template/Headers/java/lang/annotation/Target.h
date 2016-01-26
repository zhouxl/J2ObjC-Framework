//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/annotation/Target.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaLangAnnotationTarget_INCLUDE_ALL")
#ifdef JavaLangAnnotationTarget_RESTRICT
#define JavaLangAnnotationTarget_INCLUDE_ALL 0
#else
#define JavaLangAnnotationTarget_INCLUDE_ALL 1
#endif
#undef JavaLangAnnotationTarget_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangAnnotationTarget_) && (JavaLangAnnotationTarget_INCLUDE_ALL || defined(JavaLangAnnotationTarget_INCLUDE))
#define JavaLangAnnotationTarget_

#define JavaLangAnnotationAnnotation_RESTRICT 1
#define JavaLangAnnotationAnnotation_INCLUDE 1
#include "../../../java/lang/annotation/Annotation.h"

@class IOSObjectArray;

/*!
 @brief Defines a meta-annotation for determining what <code>ElementType</code>s an
 annotation can be applied to.
 @since 1.5
 */
@protocol JavaLangAnnotationTarget < JavaLangAnnotationAnnotation >

@property (readonly) IOSObjectArray *value;

@end

@interface JavaLangAnnotationTarget : NSObject < JavaLangAnnotationTarget > {
 @private
  IOSObjectArray *value_;
}

- (instancetype)initWithValue:(IOSObjectArray *)value__;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangAnnotationTarget)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangAnnotationTarget)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaLangAnnotationTarget_INCLUDE_ALL")
