//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/errorprone/annotations/concurrent/UnlockMethod.java
//

#include "../../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleErrorproneAnnotationsConcurrentUnlockMethod")
#ifdef RESTRICT_ComGoogleErrorproneAnnotationsConcurrentUnlockMethod
#define INCLUDE_ALL_ComGoogleErrorproneAnnotationsConcurrentUnlockMethod 0
#else
#define INCLUDE_ALL_ComGoogleErrorproneAnnotationsConcurrentUnlockMethod 1
#endif
#undef RESTRICT_ComGoogleErrorproneAnnotationsConcurrentUnlockMethod

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleErrorproneAnnotationsConcurrentUnlockMethod_) && (INCLUDE_ALL_ComGoogleErrorproneAnnotationsConcurrentUnlockMethod || defined(INCLUDE_ComGoogleErrorproneAnnotationsConcurrentUnlockMethod))
#define ComGoogleErrorproneAnnotationsConcurrentUnlockMethod_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "../../../../../../java/lang/annotation/Annotation.h"

/*!
 @brief The method to which this annotation is applied releases one or more locks.The caller must hold
  the locks when the function is entered, and will not hold them when it completes.
 <p>This annotation does not apply to built-in (synchronization) locks, which cannot be released
  without being acquired in the same method. 
 <p>The arguments determine which locks the annotated method releases: 
 <ul>
    <li><code>field-name</code>: The lock is referenced by the final instance field specified by
        <em>field-name</em>.
    <li><code>class-name.this.field-name</code>: For inner classes, it may be necessary to
        disambiguate 'this'; the <em>class-name.this</em> designation allows you to specify which
        'this' reference is intended.   
 <li><code>class-name.field-name</code>: The lock is referenced by the static final field
        specified by <em>class-name.field-name</em>.
    <li><code>method-name()</code>: The lock object is returned by calling the named nullary
        method. 
 </ul>
 */
@protocol ComGoogleErrorproneAnnotationsConcurrentUnlockMethod < JavaLangAnnotationAnnotation >

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleErrorproneAnnotationsConcurrentUnlockMethod)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleErrorproneAnnotationsConcurrentUnlockMethod)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleErrorproneAnnotationsConcurrentUnlockMethod")
