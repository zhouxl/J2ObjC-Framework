//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/exceptions/verification/SmartNullPointerException.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoExceptionsVerificationSmartNullPointerException")
#ifdef RESTRICT_OrgMockitoExceptionsVerificationSmartNullPointerException
#define INCLUDE_ALL_OrgMockitoExceptionsVerificationSmartNullPointerException 0
#else
#define INCLUDE_ALL_OrgMockitoExceptionsVerificationSmartNullPointerException 1
#endif
#undef RESTRICT_OrgMockitoExceptionsVerificationSmartNullPointerException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoExceptionsVerificationSmartNullPointerException_) && (INCLUDE_ALL_OrgMockitoExceptionsVerificationSmartNullPointerException || defined(INCLUDE_OrgMockitoExceptionsVerificationSmartNullPointerException))
#define OrgMockitoExceptionsVerificationSmartNullPointerException_

#define RESTRICT_OrgMockitoExceptionsBaseMockitoException 1
#define INCLUDE_OrgMockitoExceptionsBaseMockitoException 1
#include "../../../../org/mockito/exceptions/base/MockitoException.h"

@class JavaLangThrowable;

@interface OrgMockitoExceptionsVerificationSmartNullPointerException : OrgMockitoExceptionsBaseMockitoException

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)message;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoExceptionsVerificationSmartNullPointerException)

FOUNDATION_EXPORT void OrgMockitoExceptionsVerificationSmartNullPointerException_initWithNSString_(OrgMockitoExceptionsVerificationSmartNullPointerException *self, NSString *message);

FOUNDATION_EXPORT OrgMockitoExceptionsVerificationSmartNullPointerException *new_OrgMockitoExceptionsVerificationSmartNullPointerException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoExceptionsVerificationSmartNullPointerException *create_OrgMockitoExceptionsVerificationSmartNullPointerException_initWithNSString_(NSString *message);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoExceptionsVerificationSmartNullPointerException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoExceptionsVerificationSmartNullPointerException")
