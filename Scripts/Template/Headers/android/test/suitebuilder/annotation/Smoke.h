//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/test/suitebuilder/annotation/Smoke.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("AndroidTestSuitebuilderAnnotationSmoke_INCLUDE_ALL")
#ifdef AndroidTestSuitebuilderAnnotationSmoke_RESTRICT
#define AndroidTestSuitebuilderAnnotationSmoke_INCLUDE_ALL 0
#else
#define AndroidTestSuitebuilderAnnotationSmoke_INCLUDE_ALL 1
#endif
#undef AndroidTestSuitebuilderAnnotationSmoke_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (AndroidTestSuitebuilderAnnotationSmoke_) && (AndroidTestSuitebuilderAnnotationSmoke_INCLUDE_ALL || defined(AndroidTestSuitebuilderAnnotationSmoke_INCLUDE))
#define AndroidTestSuitebuilderAnnotationSmoke_

#define JavaLangAnnotationAnnotation_RESTRICT 1
#define JavaLangAnnotationAnnotation_INCLUDE 1
#include "../../../../java/lang/annotation/Annotation.h"

/*!
 @brief Marks a test that should run as part of the smoke tests.
 The <code>android.test.suitebuilder.SmokeTestSuiteBuilder</code>
 will run all tests with this annotation.
 */
@protocol AndroidTestSuitebuilderAnnotationSmoke < JavaLangAnnotationAnnotation >

@end

@interface AndroidTestSuitebuilderAnnotationSmoke : NSObject < AndroidTestSuitebuilderAnnotationSmoke >

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidTestSuitebuilderAnnotationSmoke)

J2OBJC_TYPE_LITERAL_HEADER(AndroidTestSuitebuilderAnnotationSmoke)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("AndroidTestSuitebuilderAnnotationSmoke_INCLUDE_ALL")
