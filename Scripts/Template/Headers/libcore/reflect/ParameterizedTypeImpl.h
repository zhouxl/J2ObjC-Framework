//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/reflect/ParameterizedTypeImpl.java
//

#ifndef _LibcoreReflectParameterizedTypeImpl_H_
#define _LibcoreReflectParameterizedTypeImpl_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/lang/reflect/ParameterizedType.h>

@class IOSClass;
@class IOSObjectArray;
@class JavaLangClassLoader;
@class LibcoreReflectListOfTypes;
@protocol JavaLangReflectType;

@interface LibcoreReflectParameterizedTypeImpl : NSObject < JavaLangReflectParameterizedType >

#pragma mark Public

- (instancetype)initWithLibcoreReflectParameterizedTypeImpl:(LibcoreReflectParameterizedTypeImpl *)ownerType
                                               withNSString:(NSString *)rawTypeName
                              withLibcoreReflectListOfTypes:(LibcoreReflectListOfTypes *)args
                                    withJavaLangClassLoader:(JavaLangClassLoader *)loader;

- (jboolean)isEqual:(id)o;

- (IOSObjectArray *)getActualTypeArguments;

- (id<JavaLangReflectType>)getOwnerType;

- (IOSClass *)getRawType;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Package-Private

- (id<JavaLangReflectType>)getResolvedType;

@end

J2OBJC_EMPTY_STATIC_INIT(LibcoreReflectParameterizedTypeImpl)

FOUNDATION_EXPORT void LibcoreReflectParameterizedTypeImpl_initWithLibcoreReflectParameterizedTypeImpl_withNSString_withLibcoreReflectListOfTypes_withJavaLangClassLoader_(LibcoreReflectParameterizedTypeImpl *self, LibcoreReflectParameterizedTypeImpl *ownerType, NSString *rawTypeName, LibcoreReflectListOfTypes *args, JavaLangClassLoader *loader);

FOUNDATION_EXPORT LibcoreReflectParameterizedTypeImpl *new_LibcoreReflectParameterizedTypeImpl_initWithLibcoreReflectParameterizedTypeImpl_withNSString_withLibcoreReflectListOfTypes_withJavaLangClassLoader_(LibcoreReflectParameterizedTypeImpl *ownerType, NSString *rawTypeName, LibcoreReflectListOfTypes *args, JavaLangClassLoader *loader) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(LibcoreReflectParameterizedTypeImpl)

#endif // _LibcoreReflectParameterizedTypeImpl_H_