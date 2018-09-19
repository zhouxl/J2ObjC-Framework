//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/Incubating.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoIncubating")
#ifdef RESTRICT_OrgMockitoIncubating
#define INCLUDE_ALL_OrgMockitoIncubating 0
#else
#define INCLUDE_ALL_OrgMockitoIncubating 1
#endif
#undef RESTRICT_OrgMockitoIncubating

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoIncubating_) && (INCLUDE_ALL_OrgMockitoIncubating || defined(INCLUDE_OrgMockitoIncubating))
#define OrgMockitoIncubating_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "../../java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief The annotation conveys following information: 
 <ul>
  <li>The API is fairly new and we would appreciate your feedback.For example, what are you missing from the API
  to solve your use case (yes, please, real use cases).
 </li>
  <li>For types or methods that are already released this annotation means that that the API might change.
  The chance for that is small and we will always try to make any changes in a backwards compatible way.
  The only reason we would want to change it is to provide better support for using and extending Mockito. 
 </li>
  <li>
  For types or methods that are not yet released it means the API is <strong>work in progress</strong>
  and can change before release. 
 </li>
  </ul>
 */
@protocol OrgMockitoIncubating < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface OrgMockitoIncubating : NSObject < OrgMockitoIncubating >

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoIncubating)

FOUNDATION_EXPORT id<OrgMockitoIncubating> create_OrgMockitoIncubating(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoIncubating)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoIncubating")
