//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/test/suitebuilder/annotation/Suppress.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidTestSuitebuilderAnnotationSuppress")
#ifdef RESTRICT_AndroidTestSuitebuilderAnnotationSuppress
#define INCLUDE_ALL_AndroidTestSuitebuilderAnnotationSuppress 0
#else
#define INCLUDE_ALL_AndroidTestSuitebuilderAnnotationSuppress 1
#endif
#undef RESTRICT_AndroidTestSuitebuilderAnnotationSuppress

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (AndroidTestSuitebuilderAnnotationSuppress_) && (INCLUDE_ALL_AndroidTestSuitebuilderAnnotationSuppress || defined(INCLUDE_AndroidTestSuitebuilderAnnotationSuppress))
#define AndroidTestSuitebuilderAnnotationSuppress_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "../../../../java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief Use this annotation on test classes or test methods that should not be included in a test
  suite.If the annotation appears on the class then no tests in that class will be included.
 If
  the annotation appears only on a test method then only that method will be excluded.
 */
@protocol AndroidTestSuitebuilderAnnotationSuppress < JavaLangAnnotationAnnotation >

@end

@interface AndroidTestSuitebuilderAnnotationSuppress : NSObject < AndroidTestSuitebuilderAnnotationSuppress >

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidTestSuitebuilderAnnotationSuppress)

FOUNDATION_EXPORT id<AndroidTestSuitebuilderAnnotationSuppress> create_AndroidTestSuitebuilderAnnotationSuppress(void);

J2OBJC_TYPE_LITERAL_HEADER(AndroidTestSuitebuilderAnnotationSuppress)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidTestSuitebuilderAnnotationSuppress")
