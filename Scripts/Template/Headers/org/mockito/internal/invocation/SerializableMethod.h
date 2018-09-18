//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/internal/invocation/SerializableMethod.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalInvocationSerializableMethod")
#ifdef RESTRICT_OrgMockitoInternalInvocationSerializableMethod
#define INCLUDE_ALL_OrgMockitoInternalInvocationSerializableMethod 0
#else
#define INCLUDE_ALL_OrgMockitoInternalInvocationSerializableMethod 1
#endif
#undef RESTRICT_OrgMockitoInternalInvocationSerializableMethod

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalInvocationSerializableMethod_) && (INCLUDE_ALL_OrgMockitoInternalInvocationSerializableMethod || defined(INCLUDE_OrgMockitoInternalInvocationSerializableMethod))
#define OrgMockitoInternalInvocationSerializableMethod_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

#define RESTRICT_OrgMockitoInternalInvocationMockitoMethod 1
#define INCLUDE_OrgMockitoInternalInvocationMockitoMethod 1
#include "org/mockito/internal/invocation/MockitoMethod.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangReflectMethod;

@interface OrgMockitoInternalInvocationSerializableMethod : NSObject < JavaIoSerializable, OrgMockitoInternalInvocationMockitoMethod >

#pragma mark Public

- (instancetype __nonnull)initWithJavaLangReflectMethod:(JavaLangReflectMethod *)method;

- (jboolean)isEqual:(id)obj;

- (IOSObjectArray *)getExceptionTypes;

- (JavaLangReflectMethod *)getJavaMethod;

- (NSString *)getName;

- (IOSObjectArray *)getParameterTypes;

- (IOSClass *)getReturnType;

- (NSUInteger)hash;

- (jboolean)isVarArgs;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalInvocationSerializableMethod)

FOUNDATION_EXPORT void OrgMockitoInternalInvocationSerializableMethod_initWithJavaLangReflectMethod_(OrgMockitoInternalInvocationSerializableMethod *self, JavaLangReflectMethod *method);

FOUNDATION_EXPORT OrgMockitoInternalInvocationSerializableMethod *new_OrgMockitoInternalInvocationSerializableMethod_initWithJavaLangReflectMethod_(JavaLangReflectMethod *method) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalInvocationSerializableMethod *create_OrgMockitoInternalInvocationSerializableMethod_initWithJavaLangReflectMethod_(JavaLangReflectMethod *method);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationSerializableMethod)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalInvocationSerializableMethod")
