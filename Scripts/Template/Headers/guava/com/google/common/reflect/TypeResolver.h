//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/reflect/TypeResolver.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonReflectTypeResolver")
#ifdef RESTRICT_ComGoogleCommonReflectTypeResolver
#define INCLUDE_ALL_ComGoogleCommonReflectTypeResolver 0
#else
#define INCLUDE_ALL_ComGoogleCommonReflectTypeResolver 1
#endif
#undef RESTRICT_ComGoogleCommonReflectTypeResolver

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonReflectTypeResolver_) && (INCLUDE_ALL_ComGoogleCommonReflectTypeResolver || defined(INCLUDE_ComGoogleCommonReflectTypeResolver))
#define ComGoogleCommonReflectTypeResolver_

@protocol JavaLangReflectType;
@protocol JavaUtilMap;

@interface ComGoogleCommonReflectTypeResolver : NSObject

#pragma mark Public

- (instancetype)init;

- (id<JavaLangReflectType>)resolveTypeWithJavaLangReflectType:(id<JavaLangReflectType>)type;

- (ComGoogleCommonReflectTypeResolver *)whereWithJavaLangReflectType:(id<JavaLangReflectType>)formal
                                             withJavaLangReflectType:(id<JavaLangReflectType>)actual;

#pragma mark Package-Private

+ (ComGoogleCommonReflectTypeResolver *)accordingToWithJavaLangReflectType:(id<JavaLangReflectType>)type;

- (ComGoogleCommonReflectTypeResolver *)whereWithJavaUtilMap:(id<JavaUtilMap>)mappings;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonReflectTypeResolver)

FOUNDATION_EXPORT void ComGoogleCommonReflectTypeResolver_init(ComGoogleCommonReflectTypeResolver *self);

FOUNDATION_EXPORT ComGoogleCommonReflectTypeResolver *new_ComGoogleCommonReflectTypeResolver_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonReflectTypeResolver *create_ComGoogleCommonReflectTypeResolver_init(void);

FOUNDATION_EXPORT ComGoogleCommonReflectTypeResolver *ComGoogleCommonReflectTypeResolver_accordingToWithJavaLangReflectType_(id<JavaLangReflectType> type);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectTypeResolver)

#endif

#if !defined (ComGoogleCommonReflectTypeResolver_TypeVariableKey_) && (INCLUDE_ALL_ComGoogleCommonReflectTypeResolver || defined(INCLUDE_ComGoogleCommonReflectTypeResolver_TypeVariableKey))
#define ComGoogleCommonReflectTypeResolver_TypeVariableKey_

@protocol JavaLangReflectType;
@protocol JavaLangReflectTypeVariable;

@interface ComGoogleCommonReflectTypeResolver_TypeVariableKey : NSObject

#pragma mark Public

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithJavaLangReflectTypeVariable:(id<JavaLangReflectTypeVariable>)var;

- (jboolean)equalsTypeWithJavaLangReflectType:(id<JavaLangReflectType>)type;

+ (id)forLookupWithJavaLangReflectType:(id<JavaLangReflectType>)t;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonReflectTypeResolver_TypeVariableKey)

FOUNDATION_EXPORT void ComGoogleCommonReflectTypeResolver_TypeVariableKey_initWithJavaLangReflectTypeVariable_(ComGoogleCommonReflectTypeResolver_TypeVariableKey *self, id<JavaLangReflectTypeVariable> var);

FOUNDATION_EXPORT ComGoogleCommonReflectTypeResolver_TypeVariableKey *new_ComGoogleCommonReflectTypeResolver_TypeVariableKey_initWithJavaLangReflectTypeVariable_(id<JavaLangReflectTypeVariable> var) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonReflectTypeResolver_TypeVariableKey *create_ComGoogleCommonReflectTypeResolver_TypeVariableKey_initWithJavaLangReflectTypeVariable_(id<JavaLangReflectTypeVariable> var);

FOUNDATION_EXPORT id ComGoogleCommonReflectTypeResolver_TypeVariableKey_forLookupWithJavaLangReflectType_(id<JavaLangReflectType> t);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectTypeResolver_TypeVariableKey)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonReflectTypeResolver")
