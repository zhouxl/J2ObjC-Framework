//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/reflect/Invokable.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonReflectInvokable")
#ifdef RESTRICT_ComGoogleCommonReflectInvokable
#define INCLUDE_ALL_ComGoogleCommonReflectInvokable 0
#else
#define INCLUDE_ALL_ComGoogleCommonReflectInvokable 1
#endif
#undef RESTRICT_ComGoogleCommonReflectInvokable
#ifdef INCLUDE_ComGoogleCommonReflectInvokable_ConstructorInvokable
#define INCLUDE_ComGoogleCommonReflectInvokable 1
#endif
#ifdef INCLUDE_ComGoogleCommonReflectInvokable_MethodInvokable
#define INCLUDE_ComGoogleCommonReflectInvokable 1
#endif

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonReflectInvokable_) && (INCLUDE_ALL_ComGoogleCommonReflectInvokable || defined(INCLUDE_ComGoogleCommonReflectInvokable))
#define ComGoogleCommonReflectInvokable_

#define RESTRICT_ComGoogleCommonReflectElement 1
#define INCLUDE_ComGoogleCommonReflectElement 1
#include "../../../../../com/google/common/reflect/Element.h"

#define RESTRICT_JavaLangReflectGenericDeclaration 1
#define INCLUDE_JavaLangReflectGenericDeclaration 1
#include "../../../../../java/lang/reflect/GenericDeclaration.h"

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonReflectTypeToken;
@class IOSClass;
@class IOSObjectArray;
@class JavaLangReflectAccessibleObject;
@class JavaLangReflectConstructor;
@class JavaLangReflectMethod;
@protocol JavaLangReflectAnnotatedType;
@protocol JavaLangReflectMember;
@protocol JavaLangReflectType;

/*!
 @brief Wrapper around either a <code>Method</code> or a <code>Constructor</code>.Convenience API is provided to
  make common reflective operation easier to deal with, such as <code>isPublic</code>, <code>getParameters</code>
  etc.
 <p>In addition to convenience methods, <code>TypeToken.method</code> and <code>TypeToken.constructor</code>
  will resolve the type parameters of the method or constructor in the context of the owner type,
  which may be a subtype of the declaring class. For example: 
 @code
 Method getMethod = List.class.getMethod("get", int.class);
  Invokable<List<String>, ?> invokable = new TypeToken<List<String>>() {}.method(getMethod);
  assertEquals(TypeToken.of(String.class), invokable.getReturnType()); // Not Object.class!
  assertEquals(new TypeToken<List<String>>() {}, invokable.getOwnerType()); 
 
@endcode
 @author Ben Yu
 @since 14.0
 */
@interface ComGoogleCommonReflectInvokable : ComGoogleCommonReflectElement < JavaLangReflectGenericDeclaration >

#pragma mark Public

/*!
 @brief Returns <code>Invokable</code> of <code>constructor</code>.
 */
+ (ComGoogleCommonReflectInvokable *)fromWithJavaLangReflectConstructor:(JavaLangReflectConstructor *)constructor;

/*!
 @brief Returns <code>Invokable</code> of <code>method</code>.
 */
+ (ComGoogleCommonReflectInvokable *)fromWithJavaLangReflectMethod:(JavaLangReflectMethod *)method;

- (id<JavaLangReflectAnnotatedType>)getAnnotatedReturnType;

- (IOSClass *)getDeclaringClass;

/*!
 @brief Returns all declared exception types of this <code>Invokable</code>.
 */
- (ComGoogleCommonCollectImmutableList *)getExceptionTypes;

/*!
 @brief Returns the type of <code>T</code>.
 */
- (ComGoogleCommonReflectTypeToken *)getOwnerType;

/*!
 @brief Returns all declared parameters of this <code>Invokable</code>.Note that if this is a constructor
  of a non-static inner class, unlike <code>Constructor.getParameterTypes</code>, the hidden <code>this</code>
  parameter of the enclosing class is excluded from the returned parameters.
 */
- (ComGoogleCommonCollectImmutableList *)getParameters;

/*!
 @brief Returns the return type of this <code>Invokable</code>.
 */
- (ComGoogleCommonReflectTypeToken *)getReturnType;

/*!
 @brief Invokes with <code>receiver</code> as 'this' and <code>args</code> passed to the underlying method and
  returns the return value; or calls the underlying constructor with <code>args</code> and returns the
  constructed instance.
 @throw IllegalAccessExceptionif this <code>Constructor</code> object enforces Java language access
      control and the underlying method or constructor is inaccessible.
 @throw IllegalArgumentExceptionif the number of actual and formal parameters differ; if an
      unwrapping conversion for primitive arguments fails; or if, after possible unwrapping, a
      parameter value cannot be converted to the corresponding formal parameter type by a method
      invocation conversion.
 @throw InvocationTargetExceptionif the underlying method or constructor throws an exception.
 */
- (id)invokeWithId:(id)receiver
 withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief Returns <code>true</code> if this is an overridable method.Constructors, private, static or final
  methods, or methods declared by final classes are not overridable.
 */
- (jboolean)isOverridable;

/*!
 @brief Returns <code>true</code> if this was declared to take a variable number of arguments.
 */
- (jboolean)isVarArgs;

/*!
 @brief Explicitly specifies the return type of this <code>Invokable</code>.For example: 
 @code
 Method factoryMethod = Person.class.getMethod("create");
  Invokable<?
 , Person> factory = Invokable.of(getNameMethod).returning(Person.class); 
 
@endcode
 */
- (ComGoogleCommonReflectInvokable *)returningWithIOSClass:(IOSClass *)returnType;

/*!
 @brief Explicitly specifies the return type of this <code>Invokable</code>.
 */
- (ComGoogleCommonReflectInvokable *)returningWithComGoogleCommonReflectTypeToken:(ComGoogleCommonReflectTypeToken *)returnType;

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaLangReflectAccessibleObject:(JavaLangReflectAccessibleObject<JavaLangReflectMember> *)member;

- (IOSObjectArray *)getAnnotatedParameterTypes;

/*!
 @brief This should never return a type that's not a subtype of Throwable.
 */
- (IOSObjectArray *)getGenericExceptionTypes;

- (IOSObjectArray *)getGenericParameterTypes;

- (id<JavaLangReflectType>)getGenericReturnType;

- (IOSObjectArray *)getParameterAnnotations;

- (id)invokeInternalWithId:(id __nullable)receiver
         withNSObjectArray:(IOSObjectArray *)args;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonReflectInvokable)

FOUNDATION_EXPORT void ComGoogleCommonReflectInvokable_initWithJavaLangReflectAccessibleObject_(ComGoogleCommonReflectInvokable *self, JavaLangReflectAccessibleObject<JavaLangReflectMember> *member);

FOUNDATION_EXPORT ComGoogleCommonReflectInvokable *ComGoogleCommonReflectInvokable_fromWithJavaLangReflectMethod_(JavaLangReflectMethod *method);

FOUNDATION_EXPORT ComGoogleCommonReflectInvokable *ComGoogleCommonReflectInvokable_fromWithJavaLangReflectConstructor_(JavaLangReflectConstructor *constructor);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectInvokable)

#endif

#if !defined (ComGoogleCommonReflectInvokable_MethodInvokable_) && (INCLUDE_ALL_ComGoogleCommonReflectInvokable || defined(INCLUDE_ComGoogleCommonReflectInvokable_MethodInvokable))
#define ComGoogleCommonReflectInvokable_MethodInvokable_

@class IOSObjectArray;
@class JavaLangReflectAccessibleObject;
@class JavaLangReflectMethod;
@protocol JavaLangReflectAnnotatedType;
@protocol JavaLangReflectMember;
@protocol JavaLangReflectType;

@interface ComGoogleCommonReflectInvokable_MethodInvokable : ComGoogleCommonReflectInvokable {
 @public
  JavaLangReflectMethod *method_;
}

#pragma mark Public

- (id<JavaLangReflectAnnotatedType>)getAnnotatedReturnType;

- (IOSObjectArray *)getTypeParameters;

- (jboolean)isOverridable;

- (jboolean)isVarArgs;

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaLangReflectMethod:(JavaLangReflectMethod *)method;

- (IOSObjectArray *)getAnnotatedParameterTypes;

- (IOSObjectArray *)getGenericExceptionTypes;

- (IOSObjectArray *)getGenericParameterTypes;

- (id<JavaLangReflectType>)getGenericReturnType;

- (IOSObjectArray *)getParameterAnnotations;

- (id)invokeInternalWithId:(id __nullable)receiver
         withNSObjectArray:(IOSObjectArray *)args;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangReflectAccessibleObject:(JavaLangReflectAccessibleObject<JavaLangReflectMember> *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonReflectInvokable_MethodInvokable)

J2OBJC_FIELD_SETTER(ComGoogleCommonReflectInvokable_MethodInvokable, method_, JavaLangReflectMethod *)

FOUNDATION_EXPORT void ComGoogleCommonReflectInvokable_MethodInvokable_initWithJavaLangReflectMethod_(ComGoogleCommonReflectInvokable_MethodInvokable *self, JavaLangReflectMethod *method);

FOUNDATION_EXPORT ComGoogleCommonReflectInvokable_MethodInvokable *new_ComGoogleCommonReflectInvokable_MethodInvokable_initWithJavaLangReflectMethod_(JavaLangReflectMethod *method) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonReflectInvokable_MethodInvokable *create_ComGoogleCommonReflectInvokable_MethodInvokable_initWithJavaLangReflectMethod_(JavaLangReflectMethod *method);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectInvokable_MethodInvokable)

#endif

#if !defined (ComGoogleCommonReflectInvokable_ConstructorInvokable_) && (INCLUDE_ALL_ComGoogleCommonReflectInvokable || defined(INCLUDE_ComGoogleCommonReflectInvokable_ConstructorInvokable))
#define ComGoogleCommonReflectInvokable_ConstructorInvokable_

@class IOSObjectArray;
@class JavaLangReflectAccessibleObject;
@class JavaLangReflectConstructor;
@protocol JavaLangReflectAnnotatedType;
@protocol JavaLangReflectMember;
@protocol JavaLangReflectType;

@interface ComGoogleCommonReflectInvokable_ConstructorInvokable : ComGoogleCommonReflectInvokable {
 @public
  JavaLangReflectConstructor *constructor_;
}

#pragma mark Public

- (id<JavaLangReflectAnnotatedType>)getAnnotatedReturnType;

/*!
 @brief <p><code>[<E>]</code> will be returned for ArrayList's constructor.
 When both the class and the
  constructor have type parameters, the class parameters are prepended before those of the
  constructor's. This is an arbitrary rule since no existing language spec mandates one way or
  the other. From the declaration syntax, the class type parameter appears first, but the call
  syntax may show up in opposite order such as <code>new <A>Foo<B>()</code>.
 */
- (IOSObjectArray *)getTypeParameters;

- (jboolean)isOverridable;

- (jboolean)isVarArgs;

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaLangReflectConstructor:(JavaLangReflectConstructor *)constructor;

- (IOSObjectArray *)getAnnotatedParameterTypes;

- (IOSObjectArray *)getGenericExceptionTypes;

- (IOSObjectArray *)getGenericParameterTypes;

/*!
 @brief If the class is parameterized, such as <code>ArrayList</code>, this returns 
 <code>ArrayList<E></code>.
 */
- (id<JavaLangReflectType>)getGenericReturnType;

- (IOSObjectArray *)getParameterAnnotations;

- (id)invokeInternalWithId:(id __nullable)receiver
         withNSObjectArray:(IOSObjectArray *)args;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangReflectAccessibleObject:(JavaLangReflectAccessibleObject<JavaLangReflectMember> *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonReflectInvokable_ConstructorInvokable)

J2OBJC_FIELD_SETTER(ComGoogleCommonReflectInvokable_ConstructorInvokable, constructor_, JavaLangReflectConstructor *)

FOUNDATION_EXPORT void ComGoogleCommonReflectInvokable_ConstructorInvokable_initWithJavaLangReflectConstructor_(ComGoogleCommonReflectInvokable_ConstructorInvokable *self, JavaLangReflectConstructor *constructor);

FOUNDATION_EXPORT ComGoogleCommonReflectInvokable_ConstructorInvokable *new_ComGoogleCommonReflectInvokable_ConstructorInvokable_initWithJavaLangReflectConstructor_(JavaLangReflectConstructor *constructor) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonReflectInvokable_ConstructorInvokable *create_ComGoogleCommonReflectInvokable_ConstructorInvokable_initWithJavaLangReflectConstructor_(JavaLangReflectConstructor *constructor);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectInvokable_ConstructorInvokable)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonReflectInvokable")
