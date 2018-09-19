//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/reflect/ParameterizedType.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangReflectParameterizedType")
#ifdef RESTRICT_JavaLangReflectParameterizedType
#define INCLUDE_ALL_JavaLangReflectParameterizedType 0
#else
#define INCLUDE_ALL_JavaLangReflectParameterizedType 1
#endif
#undef RESTRICT_JavaLangReflectParameterizedType

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangReflectParameterizedType_) && (INCLUDE_ALL_JavaLangReflectParameterizedType || defined(INCLUDE_JavaLangReflectParameterizedType))
#define JavaLangReflectParameterizedType_

#define RESTRICT_JavaLangReflectType 1
#define INCLUDE_JavaLangReflectType 1
#include "../../../java/lang/reflect/Type.h"

@class IOSObjectArray;

/*!
 @brief ParameterizedType represents a parameterized type such as
  Collection&lt;String&gt;.
 <p>A parameterized type is created the first time it is needed by a
  reflective method, as specified in this package. When a
  parameterized type p is created, the generic type declaration that
  p instantiates is resolved, and all type arguments of p are created
  recursively. See <code>TypeVariable</code>
  for details on the creation process for type
  variables. Repeated creation of a parameterized type has no effect. 
 <p>Instances of classes that implement this interface must implement
  an equals() method that equates any two instances that share the
  same generic type declaration and have equal type parameters.
 @since 1.5
 */
@protocol JavaLangReflectParameterizedType < JavaLangReflectType, JavaObject >

/*!
 @brief Returns an array of <code>Type</code> objects representing the actual type
  arguments to this type.
 <p>Note that in some cases, the returned array be empty. This can occur
  if this type represents a non-parameterized type nested within
  a parameterized type.
 @return an array of <code>Type</code> objects representing the actual type
      arguments to this type
 @throw TypeNotPresentExceptionif any of the
      actual type arguments refers to a non-existent type declaration
 @throw MalformedParameterizedTypeExceptionif any of the
      actual type parameters refer to a parameterized type that cannot
      be instantiated for any reason
 @since 1.5
 */
- (IOSObjectArray * __nonnull)getActualTypeArguments;

/*!
 @brief Returns the <code>Type</code> object representing the class or interface
  that declared this type.
 @return the <code>Type</code> object representing the class or interface
      that declared this type
 @since 1.5
 */
- (id<JavaLangReflectType> __nonnull)getRawType;

/*!
 @brief Returns a <code>Type</code> object representing the type that this type
  is a member of.For example, if this type is <code>O<T>.I<S></code>,
  return a representation of <code>O<T></code>.
 <p>If this type is a top-level type, <code>null</code> is returned.
 @return a <code>Type</code> object representing the type that
      this type is a member of. If this type is a top-level type,     
 <code>null</code> is returned
 @throw TypeNotPresentExceptionif the owner type
      refers to a non-existent type declaration
 @throw MalformedParameterizedTypeExceptionif the owner type
      refers to a parameterized type that cannot be instantiated
      for any reason
 @since 1.5
 */
- (id<JavaLangReflectType>)getOwnerType;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangReflectParameterizedType)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReflectParameterizedType)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangReflectParameterizedType")
