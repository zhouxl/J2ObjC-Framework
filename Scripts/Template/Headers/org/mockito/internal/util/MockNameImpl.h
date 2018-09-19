//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/internal/util/MockNameImpl.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalUtilMockNameImpl")
#ifdef RESTRICT_OrgMockitoInternalUtilMockNameImpl
#define INCLUDE_ALL_OrgMockitoInternalUtilMockNameImpl 0
#else
#define INCLUDE_ALL_OrgMockitoInternalUtilMockNameImpl 1
#endif
#undef RESTRICT_OrgMockitoInternalUtilMockNameImpl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalUtilMockNameImpl_) && (INCLUDE_ALL_OrgMockitoInternalUtilMockNameImpl || defined(INCLUDE_OrgMockitoInternalUtilMockNameImpl))
#define OrgMockitoInternalUtilMockNameImpl_

#define RESTRICT_OrgMockitoMockMockName 1
#define INCLUDE_OrgMockitoMockMockName 1
#include "../../../../org/mockito/mock/MockName.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../java/io/Serializable.h"

@class IOSClass;

@interface OrgMockitoInternalUtilMockNameImpl : NSObject < OrgMockitoMockMockName, JavaIoSerializable >

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString *)mockName;

- (instancetype __nonnull)initWithNSString:(NSString *)mockName
                              withIOSClass:(IOSClass *)classToMock;

- (jboolean)isDefault;

- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilMockNameImpl)

FOUNDATION_EXPORT void OrgMockitoInternalUtilMockNameImpl_initWithNSString_withIOSClass_(OrgMockitoInternalUtilMockNameImpl *self, NSString *mockName, IOSClass *classToMock);

FOUNDATION_EXPORT OrgMockitoInternalUtilMockNameImpl *new_OrgMockitoInternalUtilMockNameImpl_initWithNSString_withIOSClass_(NSString *mockName, IOSClass *classToMock) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalUtilMockNameImpl *create_OrgMockitoInternalUtilMockNameImpl_initWithNSString_withIOSClass_(NSString *mockName, IOSClass *classToMock);

FOUNDATION_EXPORT void OrgMockitoInternalUtilMockNameImpl_initWithNSString_(OrgMockitoInternalUtilMockNameImpl *self, NSString *mockName);

FOUNDATION_EXPORT OrgMockitoInternalUtilMockNameImpl *new_OrgMockitoInternalUtilMockNameImpl_initWithNSString_(NSString *mockName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalUtilMockNameImpl *create_OrgMockitoInternalUtilMockNameImpl_initWithNSString_(NSString *mockName);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilMockNameImpl)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalUtilMockNameImpl")
