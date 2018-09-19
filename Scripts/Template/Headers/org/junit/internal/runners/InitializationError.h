//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/internal/runners/InitializationError.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalRunnersInitializationError")
#ifdef RESTRICT_OrgJunitInternalRunnersInitializationError
#define INCLUDE_ALL_OrgJunitInternalRunnersInitializationError 0
#else
#define INCLUDE_ALL_OrgJunitInternalRunnersInitializationError 1
#endif
#undef RESTRICT_OrgJunitInternalRunnersInitializationError

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitInternalRunnersInitializationError_) && (INCLUDE_ALL_OrgJunitInternalRunnersInitializationError || defined(INCLUDE_OrgJunitInternalRunnersInitializationError))
#define OrgJunitInternalRunnersInitializationError_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "../../../../java/lang/Exception.h"

@class IOSObjectArray;
@class JavaLangThrowable;
@protocol JavaUtilList;

/*!
 @brief Use the published version: <code>org.junit.runners.InitializationError</code>
  This may disappear as soon as 1 April 2009
 */
__attribute__((deprecated))
@interface OrgJunitInternalRunnersInitializationError : JavaLangException

#pragma mark Public

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)errors;

- (instancetype)initWithNSString:(NSString *)string;

- (instancetype)initWithJavaLangThrowableArray:(IOSObjectArray *)errors;

- (id<JavaUtilList>)getCauses;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1
                     withBoolean:(jboolean)arg2
                     withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRunnersInitializationError)

FOUNDATION_EXPORT void OrgJunitInternalRunnersInitializationError_initWithJavaUtilList_(OrgJunitInternalRunnersInitializationError *self, id<JavaUtilList> errors);

FOUNDATION_EXPORT OrgJunitInternalRunnersInitializationError *new_OrgJunitInternalRunnersInitializationError_initWithJavaUtilList_(id<JavaUtilList> errors) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalRunnersInitializationError *create_OrgJunitInternalRunnersInitializationError_initWithJavaUtilList_(id<JavaUtilList> errors);

FOUNDATION_EXPORT void OrgJunitInternalRunnersInitializationError_initWithJavaLangThrowableArray_(OrgJunitInternalRunnersInitializationError *self, IOSObjectArray *errors);

FOUNDATION_EXPORT OrgJunitInternalRunnersInitializationError *new_OrgJunitInternalRunnersInitializationError_initWithJavaLangThrowableArray_(IOSObjectArray *errors) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalRunnersInitializationError *create_OrgJunitInternalRunnersInitializationError_initWithJavaLangThrowableArray_(IOSObjectArray *errors);

FOUNDATION_EXPORT void OrgJunitInternalRunnersInitializationError_initWithNSString_(OrgJunitInternalRunnersInitializationError *self, NSString *string);

FOUNDATION_EXPORT OrgJunitInternalRunnersInitializationError *new_OrgJunitInternalRunnersInitializationError_initWithNSString_(NSString *string) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalRunnersInitializationError *create_OrgJunitInternalRunnersInitializationError_initWithNSString_(NSString *string);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRunnersInitializationError)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalRunnersInitializationError")