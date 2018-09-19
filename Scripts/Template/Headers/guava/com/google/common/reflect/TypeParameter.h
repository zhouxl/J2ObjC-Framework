//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/reflect/TypeParameter.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonReflectTypeParameter")
#ifdef RESTRICT_ComGoogleCommonReflectTypeParameter
#define INCLUDE_ALL_ComGoogleCommonReflectTypeParameter 0
#else
#define INCLUDE_ALL_ComGoogleCommonReflectTypeParameter 1
#endif
#undef RESTRICT_ComGoogleCommonReflectTypeParameter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonReflectTypeParameter_) && (INCLUDE_ALL_ComGoogleCommonReflectTypeParameter || defined(INCLUDE_ComGoogleCommonReflectTypeParameter))
#define ComGoogleCommonReflectTypeParameter_

#define RESTRICT_ComGoogleCommonReflectTypeCapture 1
#define INCLUDE_ComGoogleCommonReflectTypeCapture 1
#include "../../../../../com/google/common/reflect/TypeCapture.h"

@protocol JavaLangReflectTypeVariable;

/*!
 @brief Captures a free type variable that can be used in <code>TypeToken.where</code>.For example: 
 @code
 static <T> TypeToken<List<T>> listOf(Class<T> elementType) {
    return new TypeToken<List<T>>() {}
        .where(new TypeParameter<T>() {}, elementType);
  } 
 
@endcode
 @author Ben Yu
 @since 12.0
 */
@interface ComGoogleCommonReflectTypeParameter : ComGoogleCommonReflectTypeCapture {
 @public
  id<JavaLangReflectTypeVariable> typeVariable_;
}

#pragma mark Public

- (jboolean)isEqual:(id __nullable)o;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Protected

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonReflectTypeParameter)

J2OBJC_FIELD_SETTER(ComGoogleCommonReflectTypeParameter, typeVariable_, id<JavaLangReflectTypeVariable>)

FOUNDATION_EXPORT void ComGoogleCommonReflectTypeParameter_init(ComGoogleCommonReflectTypeParameter *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectTypeParameter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonReflectTypeParameter")
