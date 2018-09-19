//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/reflect/TypeToken.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonReflectTypeToken")
#ifdef RESTRICT_ComGoogleCommonReflectTypeToken
#define INCLUDE_ALL_ComGoogleCommonReflectTypeToken 0
#else
#define INCLUDE_ALL_ComGoogleCommonReflectTypeToken 1
#endif
#undef RESTRICT_ComGoogleCommonReflectTypeToken

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonReflectTypeToken_) && (INCLUDE_ALL_ComGoogleCommonReflectTypeToken || defined(INCLUDE_ComGoogleCommonReflectTypeToken))
#define ComGoogleCommonReflectTypeToken_

#define RESTRICT_ComGoogleCommonReflectTypeCapture 1
#define INCLUDE_ComGoogleCommonReflectTypeCapture 1
#include "../../../../../com/google/common/reflect/TypeCapture.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../../java/io/Serializable.h"

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonReflectInvokable;
@class ComGoogleCommonReflectTypeParameter;
@class ComGoogleCommonReflectTypeToken_TypeSet;
@class IOSClass;
@class JavaLangReflectConstructor;
@class JavaLangReflectMethod;
@protocol JavaLangReflectType;

/*!
 @brief A <code>Type</code> with generics.
 <p>Operations that are otherwise only available in <code>Class</code> are implemented to support 
 <code>Type</code>, for example <code>isSubtypeOf</code>, <code>isArray</code> and <code>getComponentType</code>.
  It also provides additional utilities such as <code>getTypes</code>, <code>resolveType</code>, etc. 
 <p>There are three ways to get a <code>TypeToken</code> instance: 
 <ul>
    <li>Wrap a <code>Type</code> obtained via reflection. For example: <code>TypeToken.of(method.getGenericReturnType())</code>
 .
    <li>Capture a generic type with a (usually anonymous) subclass. For example:
        @code
 new TypeToken<List<String>>() {} 
 
@endcode
        <p>Note that it's critical that the actual type argument is carried by a subclass. The
        following code is wrong because it only captures the <code><T></code> type variable of the
        <code>listType()</code> method signature; while <code><String></code> is lost in erasure:
        @code
 class Util {
    static <T> TypeToken<List<T>> listType() {
      return new TypeToken<List<T>>() {};
    }  }
  TypeToken<List<String>> stringListType = Util.<String>listType(); 
 
@endcode
    <li>Capture a generic type with a (usually anonymous) subclass and resolve it against a context
        class that knows what the type parameters are. For example:       
 @code
 abstract class IKnowMyType<T> {
    TypeToken<T> type = new TypeToken<T>(getClass()) {};
  }
  new IKnowMyType<String>() {}.type => String 
 
@endcode
  </ul>
  
 <p><code>TypeToken</code> is serializable when no type variable is contained in the type. 
 <p>Note to Guice users: <code></code> TypeToken is similar to Guice's <code>TypeLiteral</code> class except
  that it is serializable and offers numerous additional utility methods.
 @author Bob Lee
 @author Sven Mawson
 @author Ben Yu
 @since 12.0
 */
@interface ComGoogleCommonReflectTypeToken : ComGoogleCommonReflectTypeCapture < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Returns the <code>Invokable</code> for <code>constructor</code>, which must be a member of <code>T</code>.
 @since 14.0
 */
- (ComGoogleCommonReflectInvokable *)constructorWithJavaLangReflectConstructor:(JavaLangReflectConstructor *)constructor;

/*!
 @brief Returns true if <code>o</code> is another <code>TypeToken</code> that represents the same <code>Type</code>.
 */
- (jboolean)isEqual:(id __nullable)o;

/*!
 @brief Returns the array component type if this type represents an array (<code>int[]</code>, <code>T[]</code>,
  <code><?
 extends Map<String, Integer>[]></code> etc.), or else <code>null</code> is returned.
 */
- (ComGoogleCommonReflectTypeToken * __nullable)getComponentType;

/*!
 @brief Returns the raw type of <code>T</code>.Formally speaking, if <code>T</code> is returned by <code>java.lang.reflect.Method</code>
 , the raw type is what's returned by <code>java.lang.reflect.Method</code>
  of the same method object.
 Specifically: 
 <ul>
    <li>If <code>T</code> is a <code>Class</code> itself, <code>T</code> itself is returned.
    <li>If <code>T</code> is a <code>ParameterizedType</code>, the raw type of the parameterized type is
        returned.   
 <li>If <code>T</code> is a <code>GenericArrayType</code>, the returned type is the corresponding array
        class. For example: <code>List<Integer>[] => List[]</code>.
    <li>If <code>T</code> is a type variable or a wildcard type, the raw type of the first upper bound
        is returned. For example: <code><X extends Foo> => Foo</code>.
  </ul>
 */
- (IOSClass *)getRawType;

/*!
 @brief Returns subtype of <code>this</code> with <code>subclass</code> as the raw class.For example, if this is 
 <code>Iterable<String></code> and <code>subclass</code> is <code>List</code>, <code>List<String></code> is
  returned.
 */
- (ComGoogleCommonReflectTypeToken *)getSubtypeWithIOSClass:(IOSClass *)subclass;

/*!
 @brief Returns the generic form of <code>superclass</code>.For example, if this is <code>ArrayList<String></code>
 , <code>Iterable<String></code> is returned given the input <code>Iterable.class</code>
 .
 */
- (ComGoogleCommonReflectTypeToken *)getSupertypeWithIOSClass:(IOSClass *)superclass_;

/*!
 @brief Returns the represented type.
 */
- (id<JavaLangReflectType>)getType;

/*!
 @brief Returns the set of interfaces and classes that this type is or is a subtype of.The returned
  types are parameterized with proper type arguments.
 <p>Subtypes are always listed before supertypes. But the reverse is not true. A type isn't
  necessarily a subtype of all the types following. Order between types without subtype
  relationship is arbitrary and not guaranteed. 
 <p>If this type is a type variable or wildcard, upper bounds that are themselves type variables
  aren't included (their super interfaces and superclasses are).
 */
- (ComGoogleCommonReflectTypeToken_TypeSet *)getTypes;

- (NSUInteger)hash;

/*!
 @brief Returns true if this type is known to be an array type, such as <code>int[]</code>, <code>T[]</code>,
  <code><?
 extends Map<String, Integer>[]></code> etc.
 */
- (jboolean)isArray;

/*!
 @brief Returns true if this type is one of the nine primitive types (including <code>void</code>).
 @since 15.0
 */
- (jboolean)isPrimitive;

/*!
 @brief Returns true if this type is a subtype of the given <code>type</code>."
 Subtype" is defined
  according to <a href="http://docs.oracle.com/javase/specs/jls/se8/html/jls-4.html#jls-4.5.1">
 the rules for type
  arguments</a> introduced with Java generics.
 @since 19.0
 */
- (jboolean)isSubtypeOfWithJavaLangReflectType:(id<JavaLangReflectType>)supertype;

/*!
 @brief Returns true if this type is a subtype of the given <code>type</code>."
 Subtype" is defined
  according to <a href="http://docs.oracle.com/javase/specs/jls/se8/html/jls-4.html#jls-4.5.1">
 the rules for type
  arguments</a> introduced with Java generics.
 @since 19.0
 */
- (jboolean)isSubtypeOfWithComGoogleCommonReflectTypeToken:(ComGoogleCommonReflectTypeToken *)type;

/*!
 @brief Returns true if this type is a supertype of the given <code>type</code>."
 Supertype" is defined
  according to <a href="http://docs.oracle.com/javase/specs/jls/se8/html/jls-4.html#jls-4.5.1">
 the rules for type
  arguments</a> introduced with Java generics.
 @since 19.0
 */
- (jboolean)isSupertypeOfWithJavaLangReflectType:(id<JavaLangReflectType>)type;

/*!
 @brief Returns true if this type is a supertype of the given <code>type</code>."
 Supertype" is defined
  according to <a href="http://docs.oracle.com/javase/specs/jls/se8/html/jls-4.html#jls-4.5.1">
 the rules for type
  arguments</a> introduced with Java generics.
 @since 19.0
 */
- (jboolean)isSupertypeOfWithComGoogleCommonReflectTypeToken:(ComGoogleCommonReflectTypeToken *)type;

/*!
 @brief Returns the <code>Invokable</code> for <code>method</code>, which must be a member of <code>T</code>.
 @since 14.0
 */
- (ComGoogleCommonReflectInvokable *)methodWithJavaLangReflectMethod:(JavaLangReflectMethod *)method;

/*!
 @brief Returns an instance of type token that wraps <code>type</code>.
 */
+ (ComGoogleCommonReflectTypeToken *)ofWithIOSClass:(IOSClass *)type;

/*!
 @brief Returns an instance of type token that wraps <code>type</code>.
 */
+ (ComGoogleCommonReflectTypeToken *)ofWithJavaLangReflectType:(id<JavaLangReflectType>)type;

/*!
 @brief Resolves the given <code>type</code> against the type context represented by this type.For example: 
 @code
 new TypeToken<List<String>>() {}.resolveType(
      List.class.getMethod("get", int.class).getGenericReturnType())
  => String.class 
 
@endcode
 */
- (ComGoogleCommonReflectTypeToken *)resolveTypeWithJavaLangReflectType:(id<JavaLangReflectType>)type;

- (NSString *)description;

/*!
 @brief Returns the corresponding primitive type if this is a wrapper type; otherwise returns <code>this</code>
  itself.Idempotent.
 @since 15.0
 */
- (ComGoogleCommonReflectTypeToken *)unwrap;

/*!
 @brief Returns a new <code>TypeToken</code> where type variables represented by <code>typeParam</code> are
  substituted by <code>typeArg</code>.For example, it can be used to construct <code>Map<K, V></code> for
  any <code>K</code> and <code>V</code> type: 
 @code
 static <K, V> TypeToken<Map<K, V>> mapOf(
      Class<K> keyType, Class<V> valueType) {
    return new TypeToken<Map<K, V>>() {}
        .where(new TypeParameter<K>() {}, keyType)
        .where(new TypeParameter<V>() {}, valueType);
  } 
 
@endcode
 @param typeParam the parameter type variable
 @param typeArg the actual type to substitute
 */
- (ComGoogleCommonReflectTypeToken *)whereWithComGoogleCommonReflectTypeParameter:(ComGoogleCommonReflectTypeParameter *)typeParam
                                                                     withIOSClass:(IOSClass *)typeArg;

/*!
 @brief Returns a new <code>TypeToken</code> where type variables represented by <code>typeParam</code> are
  substituted by <code>typeArg</code>.For example, it can be used to construct <code>Map<K, V></code> for
  any <code>K</code> and <code>V</code> type: 
 @code
 static <K, V> TypeToken<Map<K, V>> mapOf(
      TypeToken<K> keyType, TypeToken<V> valueType) {
    return new TypeToken<Map<K, V>>() {}
        .where(new TypeParameter<K>() {}, keyType)
        .where(new TypeParameter<V>() {}, valueType);
  } 
 
@endcode
 @param typeParam the parameter type variable
 @param typeArg the actual type to substitute
 */
- (ComGoogleCommonReflectTypeToken *)whereWithComGoogleCommonReflectTypeParameter:(ComGoogleCommonReflectTypeParameter *)typeParam
                                              withComGoogleCommonReflectTypeToken:(ComGoogleCommonReflectTypeToken *)typeArg;

/*!
 @brief Returns the corresponding wrapper type if this is a primitive type; otherwise returns <code>this</code>
  itself.Idempotent.
 @since 15.0
 */
- (ComGoogleCommonReflectTypeToken *)wrap;

#pragma mark Protected

/*!
 @brief Constructs a new type token of <code>T</code>.
 <p>Clients create an empty anonymous subclass. Doing so embeds the type parameter in the
  anonymous class's type hierarchy so we can reconstitute it at runtime despite erasure. 
 <p>For example: 
 @code
 TypeToken<List<String>> t = new TypeToken<List<String>>() {}; 
 
@endcode
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a new type token of <code>T</code> while resolving free type variables in the context of 
 <code>declaringClass</code>.
 <p>Clients create an empty anonymous subclass. Doing so embeds the type parameter in the
  anonymous class's type hierarchy so we can reconstitute it at runtime despite erasure. 
 <p>For example: 
 @code
 abstract class IKnowMyType<T> {
    TypeToken<T> getMyType() {
      return new TypeToken<T>(getClass()) {};
    }  }
  new IKnowMyType<String>() {}.getMyType() => String 
 
@endcode
 */
- (instancetype __nonnull)initWithIOSClass:(IOSClass *)declaringClass;

/*!
 @brief Implemented to support serialization of subclasses.
 */
- (id)writeReplace;

#pragma mark Package-Private

/*!
 @brief Returns the generic interfaces that this type directly <code>implements</code>.This method is
  similar but different from <code>Class.getGenericInterfaces()</code>.
 For example, <code>new
  TypeToken<List<String>>() {}.getGenericInterfaces()</code>
  will return a list that contains <code>new TypeToken<Iterable<String>>() {}</code>
 ; while <code>List.class.getGenericInterfaces()</code> will
  return an array that contains <code>Iterable<T></code>, where the <code>T</code> is the type variable
  declared by interface <code>Iterable</code>.
  
 <p>If this type is a type variable or wildcard, its upper bounds are examined and those that
  are either an interface or upper-bounded only by interfaces are returned. This means that the
  returned types could include type variables too.
 */
- (ComGoogleCommonCollectImmutableList *)getGenericInterfaces;

/*!
 @brief Returns the generic superclass of this type or <code>null</code> if the type represents <code>Object</code>
  or an interface.This method is similar but different from <code>Class.getGenericSuperclass</code>
 .
 For example, <code>new TypeToken<StringArrayList>()
  {}.getGenericSuperclass()</code>
  will return <code>new TypeToken<ArrayList<String>>() {}</code>; while 
 <code>StringArrayList.class.getGenericSuperclass()</code> will return <code>ArrayList<E></code>, where 
 <code>E</code> is the type variable declared by class <code>ArrayList</code>.
  
 <p>If this type is a type variable or wildcard, its first upper bound is examined and returned
  if the bound is a class or extends from a class. This means that the returned type could be a
  type variable too.
 */
- (ComGoogleCommonReflectTypeToken * __nullable)getGenericSuperclass;

/*!
 @brief Ensures that this type token doesn't contain type variables, which can cause unchecked type
  errors for callers like <code>TypeToInstanceMap</code>.
 */
- (ComGoogleCommonReflectTypeToken *)rejectTypeVariables;

/*!
 @brief Returns the type token representing the generic type declaration of <code>cls</code>.For example: 
 <code>TypeToken.getGenericType(Iterable.class)</code> returns <code>Iterable<T></code>.
 <p>If <code>cls</code> isn't parameterized and isn't a generic array, the type token of the class is
  returned.
 */
+ (ComGoogleCommonReflectTypeToken *)toGenericTypeWithIOSClass:(IOSClass *)cls;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonReflectTypeToken)

FOUNDATION_EXPORT void ComGoogleCommonReflectTypeToken_init(ComGoogleCommonReflectTypeToken *self);

FOUNDATION_EXPORT void ComGoogleCommonReflectTypeToken_initWithIOSClass_(ComGoogleCommonReflectTypeToken *self, IOSClass *declaringClass);

FOUNDATION_EXPORT ComGoogleCommonReflectTypeToken *ComGoogleCommonReflectTypeToken_ofWithIOSClass_(IOSClass *type);

FOUNDATION_EXPORT ComGoogleCommonReflectTypeToken *ComGoogleCommonReflectTypeToken_ofWithJavaLangReflectType_(id<JavaLangReflectType> type);

FOUNDATION_EXPORT ComGoogleCommonReflectTypeToken *ComGoogleCommonReflectTypeToken_toGenericTypeWithIOSClass_(IOSClass *cls);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectTypeToken)

#endif

#if !defined (ComGoogleCommonReflectTypeToken_TypeSet_) && (INCLUDE_ALL_ComGoogleCommonReflectTypeToken || defined(INCLUDE_ComGoogleCommonReflectTypeToken_TypeSet))
#define ComGoogleCommonReflectTypeToken_TypeSet_

#define RESTRICT_ComGoogleCommonCollectForwardingSet 1
#define INCLUDE_ComGoogleCommonCollectForwardingSet 1
#include "../../../../../com/google/common/collect/ForwardingSet.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../../java/io/Serializable.h"

@class ComGoogleCommonReflectTypeToken;
@protocol JavaUtilSet;

/*!
 @brief The set of interfaces and classes that <code>T</code> is or is a subtype of.
 <code>Object</code> is not
  included in the set if this type is an interface.
 @since 13.0
 */
@interface ComGoogleCommonReflectTypeToken_TypeSet : ComGoogleCommonCollectForwardingSet < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Returns the types that are classes.
 */
- (ComGoogleCommonReflectTypeToken_TypeSet *)classes;

/*!
 @brief Returns the types that are interfaces implemented by this type.
 */
- (ComGoogleCommonReflectTypeToken_TypeSet *)interfaces;

/*!
 @brief Returns the raw types of the types in this set, in the same order.
 */
- (id<JavaUtilSet>)rawTypes;

#pragma mark Protected

- (id<JavaUtilSet>)delegate;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonReflectTypeToken:(ComGoogleCommonReflectTypeToken *)outer$;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonReflectTypeToken_TypeSet)

FOUNDATION_EXPORT void ComGoogleCommonReflectTypeToken_TypeSet_initWithComGoogleCommonReflectTypeToken_(ComGoogleCommonReflectTypeToken_TypeSet *self, ComGoogleCommonReflectTypeToken *outer$);

FOUNDATION_EXPORT ComGoogleCommonReflectTypeToken_TypeSet *new_ComGoogleCommonReflectTypeToken_TypeSet_initWithComGoogleCommonReflectTypeToken_(ComGoogleCommonReflectTypeToken *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonReflectTypeToken_TypeSet *create_ComGoogleCommonReflectTypeToken_TypeSet_initWithComGoogleCommonReflectTypeToken_(ComGoogleCommonReflectTypeToken *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectTypeToken_TypeSet)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonReflectTypeToken")
