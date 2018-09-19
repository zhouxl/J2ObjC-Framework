//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/junit/build_result/java/org/junit/Before.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitBefore")
#ifdef RESTRICT_OrgJunitBefore
#define INCLUDE_ALL_OrgJunitBefore 0
#else
#define INCLUDE_ALL_OrgJunitBefore 1
#endif
#undef RESTRICT_OrgJunitBefore

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitBefore_) && (INCLUDE_ALL_OrgJunitBefore || defined(INCLUDE_OrgJunitBefore))
#define OrgJunitBefore_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "../../java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief <p>When writing tests, it is common to find that several tests need similar
  objects created before they can run.
 Annotating a <code>public void</code> method
  with <code>&#064;Before</code> causes that method to be run before the <code>org.junit.Test</code> method.
  The <code>&#064;Before</code> methods of superclasses will be run before those of the current class,
  unless they are overridden in the current class. No other ordering is defined. 
 </p>
  Here is a simple example: 
 @code

  public class Example {
     List empty;    
    &#064;Before public void initialize() {
        empty= new ArrayList();
     }    
    &#064;Test public void size() {
        ...
     }    
    &#064;Test public void remove() {
        ...
     }   }   
  
@endcode
 - seealso: org.junit.BeforeClass
 - seealso: org.junit.After
 @since 4.0
 */
@protocol OrgJunitBefore < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface OrgJunitBefore : NSObject < OrgJunitBefore >

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitBefore)

FOUNDATION_EXPORT id<OrgJunitBefore> create_OrgJunitBefore(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitBefore)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitBefore")
