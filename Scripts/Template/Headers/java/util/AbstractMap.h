//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/AbstractMap.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaUtilAbstractMap_INCLUDE_ALL")
#ifdef JavaUtilAbstractMap_RESTRICT
#define JavaUtilAbstractMap_INCLUDE_ALL 0
#else
#define JavaUtilAbstractMap_INCLUDE_ALL 1
#endif
#undef JavaUtilAbstractMap_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilAbstractMap_) && (JavaUtilAbstractMap_INCLUDE_ALL || defined(JavaUtilAbstractMap_INCLUDE))
#define JavaUtilAbstractMap_

#define JavaUtilMap_RESTRICT 1
#define JavaUtilMap_INCLUDE 1
#include "../../java/util/Map.h"

@protocol JavaUtilCollection;
@protocol JavaUtilSet;

/*!
 @brief A base class for <code>Map</code> implementations.
 <p>Subclasses that permit new mappings to be added must override <code>put</code>
 .
 <p>The default implementations of many methods are inefficient for large
 maps. For example in the default implementation, each call to <code>get</code>
 performs a linear iteration of the entry set. Subclasses should override such
 methods to improve their performance.
 @since 1.2
 */
@interface JavaUtilAbstractMap : NSObject < JavaUtilMap > {
 @public
  id<JavaUtilSet> keySet_;
  id<JavaUtilCollection> valuesCollection_;
}

#pragma mark Public

/*!
 @brief 
 <p>This implementation calls <code>entrySet().clear()</code>.
 */
- (void)clear;

/*!
 @brief 
 <p>This implementation iterates its key set, looking for a key that
 <code>key</code> equals.
 */
- (jboolean)containsKeyWithId:(id)key;

/*!
 @brief 
 <p>This implementation iterates its entry set, looking for an entry with
 a value that <code>value</code> equals.
 */
- (jboolean)containsValueWithId:(id)value;

- (id<JavaUtilSet>)entrySet;

/*!
 @brief 
 <p>This implementation first checks the structure of <code>object</code>.
 If
 it is not a map or of a different size, this returns false. Otherwise it
 iterates its own entry set, looking up each entry's key in <code>object</code>
 . If any value does not equal the other map's value for the same
 key, this returns false. Otherwise it returns true.
 */
- (jboolean)isEqual:(id)object;

/*!
 @brief 
 <p>This implementation iterates its entry set, looking for an entry with
 a key that <code>key</code> equals.
 */
- (id)getWithId:(id)key;

/*!
 @brief 
 <p>This implementation iterates its entry set, summing the hashcodes of
 its entries.
 */
- (NSUInteger)hash;

/*!
 @brief 
 <p>This implementation compares <code>size()</code> to 0.
 */
- (jboolean)isEmpty;

/*!
 @brief 
 <p>This implementation returns a view that calls through this to map.
 Its
 iterator transforms this map's entry set iterator to return keys.
 */
- (id<JavaUtilSet>)keySet;

/*!
 @brief 
 <p>This base implementation throws <code>UnsupportedOperationException</code>.
 */
- (id)putWithId:(id)key
         withId:(id)value;

/*!
 @brief 
 <p>This implementation iterates through <code>map</code>'s entry set, calling
 <code>put()</code> for each.
 */
- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)map;

/*!
 @brief 
 <p>This implementation iterates its entry set, removing the entry with
 a key that <code>key</code> equals.
 */
- (id)removeWithId:(id)key;

/*!
 @brief 
 <p>This implementation returns its entry set's size.
 */
- (jint)size;

/*!
 @brief 
 <p>This implementation composes a string by iterating its entry set.
 If
 this map contains itself as a key or a value, the string "(this Map)"
 will appear in its place.
 */
- (NSString *)description;

/*!
 @brief 
 <p>This implementation returns a view that calls through this to map.
 Its
 iterator transforms this map's entry set iterator to return values.
 */
- (id<JavaUtilCollection>)values;

#pragma mark Protected

- (instancetype)init;

- (id)clone;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilAbstractMap)

J2OBJC_FIELD_SETTER(JavaUtilAbstractMap, keySet_, id<JavaUtilSet>)
J2OBJC_FIELD_SETTER(JavaUtilAbstractMap, valuesCollection_, id<JavaUtilCollection>)

FOUNDATION_EXPORT void JavaUtilAbstractMap_init(JavaUtilAbstractMap *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilAbstractMap)

#endif

#if !defined (JavaUtilAbstractMap_SimpleImmutableEntry_) && (JavaUtilAbstractMap_INCLUDE_ALL || defined(JavaUtilAbstractMap_SimpleImmutableEntry_INCLUDE))
#define JavaUtilAbstractMap_SimpleImmutableEntry_

#define JavaUtilMap_RESTRICT 1
#define JavaUtilMap_Entry_INCLUDE 1
#include "../../java/util/Map.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "../../java/io/Serializable.h"

/*!
 @brief An immutable key-value mapping.
 Despite the name, this class is non-final
 and its subclasses may be mutable.
 @since 1.6
 */
@interface JavaUtilAbstractMap_SimpleImmutableEntry : NSObject < JavaUtilMap_Entry, JavaIoSerializable >

#pragma mark Public

/*!
 @brief Constructs an instance with the key and value of <code>copyFrom</code>.
 */
- (instancetype)initWithJavaUtilMap_Entry:(id<JavaUtilMap_Entry>)copyFrom;

- (instancetype)initWithId:(id)theKey
                    withId:(id)theValue;

- (jboolean)isEqual:(id)object;

- (id)getKey;

- (id)getValue;

- (NSUInteger)hash;

/*!
 @brief This base implementation throws <code>UnsupportedOperationException</code>
 always.
 */
- (id)setValueWithId:(id)object;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilAbstractMap_SimpleImmutableEntry)

FOUNDATION_EXPORT void JavaUtilAbstractMap_SimpleImmutableEntry_initWithId_withId_(JavaUtilAbstractMap_SimpleImmutableEntry *self, id theKey, id theValue);

FOUNDATION_EXPORT JavaUtilAbstractMap_SimpleImmutableEntry *new_JavaUtilAbstractMap_SimpleImmutableEntry_initWithId_withId_(id theKey, id theValue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilAbstractMap_SimpleImmutableEntry_initWithJavaUtilMap_Entry_(JavaUtilAbstractMap_SimpleImmutableEntry *self, id<JavaUtilMap_Entry> copyFrom);

FOUNDATION_EXPORT JavaUtilAbstractMap_SimpleImmutableEntry *new_JavaUtilAbstractMap_SimpleImmutableEntry_initWithJavaUtilMap_Entry_(id<JavaUtilMap_Entry> copyFrom) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilAbstractMap_SimpleImmutableEntry)

#endif

#if !defined (JavaUtilAbstractMap_SimpleEntry_) && (JavaUtilAbstractMap_INCLUDE_ALL || defined(JavaUtilAbstractMap_SimpleEntry_INCLUDE))
#define JavaUtilAbstractMap_SimpleEntry_

#define JavaUtilMap_RESTRICT 1
#define JavaUtilMap_Entry_INCLUDE 1
#include "../../java/util/Map.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "../../java/io/Serializable.h"

/*!
 @brief A key-value mapping with mutable values.
 @since 1.6
 */
@interface JavaUtilAbstractMap_SimpleEntry : NSObject < JavaUtilMap_Entry, JavaIoSerializable >

#pragma mark Public

/*!
 @brief Constructs an instance with the key and value of <code>copyFrom</code>.
 */
- (instancetype)initWithJavaUtilMap_Entry:(id<JavaUtilMap_Entry>)copyFrom;

- (instancetype)initWithId:(id)theKey
                    withId:(id)theValue;

- (jboolean)isEqual:(id)object;

- (id)getKey;

- (id)getValue;

- (NSUInteger)hash;

- (id)setValueWithId:(id)object;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilAbstractMap_SimpleEntry)

FOUNDATION_EXPORT void JavaUtilAbstractMap_SimpleEntry_initWithId_withId_(JavaUtilAbstractMap_SimpleEntry *self, id theKey, id theValue);

FOUNDATION_EXPORT JavaUtilAbstractMap_SimpleEntry *new_JavaUtilAbstractMap_SimpleEntry_initWithId_withId_(id theKey, id theValue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilAbstractMap_SimpleEntry_initWithJavaUtilMap_Entry_(JavaUtilAbstractMap_SimpleEntry *self, id<JavaUtilMap_Entry> copyFrom);

FOUNDATION_EXPORT JavaUtilAbstractMap_SimpleEntry *new_JavaUtilAbstractMap_SimpleEntry_initWithJavaUtilMap_Entry_(id<JavaUtilMap_Entry> copyFrom) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilAbstractMap_SimpleEntry)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaUtilAbstractMap_INCLUDE_ALL")
