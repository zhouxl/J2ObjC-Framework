//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/exceptions/misusing/NullInsteadOfMockException.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoExceptionsMisusingNullInsteadOfMockException")
#ifdef RESTRICT_OrgMockitoExceptionsMisusingNullInsteadOfMockException
#define INCLUDE_ALL_OrgMockitoExceptionsMisusingNullInsteadOfMockException 0
#else
#define INCLUDE_ALL_OrgMockitoExceptionsMisusingNullInsteadOfMockException 1
#endif
#undef RESTRICT_OrgMockitoExceptionsMisusingNullInsteadOfMockException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoExceptionsMisusingNullInsteadOfMockException_) && (INCLUDE_ALL_OrgMockitoExceptionsMisusingNullInsteadOfMockException || defined(INCLUDE_OrgMockitoExceptionsMisusingNullInsteadOfMockException))
#define OrgMockitoExceptionsMisusingNullInsteadOfMockException_

#define RESTRICT_OrgMockitoExceptionsBaseMockitoException 1
#define INCLUDE_OrgMockitoExceptionsBaseMockitoException 1
#include "../../../../org/mockito/exceptions/base/MockitoException.h"

@class JavaLangThrowable;

@interface OrgMockitoExceptionsMisusingNullInsteadOfMockException : OrgMockitoExceptionsBaseMockitoException

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString *)message;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoExceptionsMisusingNullInsteadOfMockException)

FOUNDATION_EXPORT void OrgMockitoExceptionsMisusingNullInsteadOfMockException_initWithNSString_(OrgMockitoExceptionsMisusingNullInsteadOfMockException *self, NSString *message);

FOUNDATION_EXPORT OrgMockitoExceptionsMisusingNullInsteadOfMockException *new_OrgMockitoExceptionsMisusingNullInsteadOfMockException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoExceptionsMisusingNullInsteadOfMockException *create_OrgMockitoExceptionsMisusingNullInsteadOfMockException_initWithNSString_(NSString *message);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoExceptionsMisusingNullInsteadOfMockException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoExceptionsMisusingNullInsteadOfMockException")
