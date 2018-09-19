//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/sun/misc/Unsafe.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_SunMiscUnsafe")
#ifdef RESTRICT_SunMiscUnsafe
#define INCLUDE_ALL_SunMiscUnsafe 0
#else
#define INCLUDE_ALL_SunMiscUnsafe 1
#endif
#undef RESTRICT_SunMiscUnsafe

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (SunMiscUnsafe_) && (INCLUDE_ALL_SunMiscUnsafe || defined(INCLUDE_SunMiscUnsafe))
#define SunMiscUnsafe_

@class IOSClass;
@class JavaLangReflectField;

/*!
 @brief A collection of methods for performing low-level, unsafe operations.
 Although the class and all methods are public, use of this class is
  limited because only trusted code can obtain instances of it.
 @author John R. Rose
 - seealso: #getUnsafe
 */
@interface SunMiscUnsafe : NSObject
@property (readonly, class) jint INVALID_FIELD_OFFSET NS_SWIFT_NAME(INVALID_FIELD_OFFSET);

+ (jint)INVALID_FIELD_OFFSET;

#pragma mark Public

- (jint)addressSize;

/*!
 @brief Allocates an instance of the given class without running the constructor.
 The class' <clinit> will be run, if necessary.
 */
- (id)allocateInstanceWithIOSClass:(IOSClass *)c OBJC_METHOD_FAMILY_NONE;

- (jlong)allocateMemoryWithLong:(jlong)bytes OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Gets the offset from the start of an array object's memory to
  the memory used to store its initial (zeroeth) element.
 @param clazz non-null; class in question; must be an array class
 @return the offset to the initial element
 */
- (jint)arrayBaseOffsetWithIOSClass:(IOSClass *)clazz;

/*!
 @brief Gets the size of each element of the given array class.
 @param clazz non-null; class in question; must be an array class
 @return &gt; 0; the size of each element of the array
 */
- (jint)arrayIndexScaleWithIOSClass:(IOSClass *)clazz;

/*!
 @brief Performs a compare-and-set operation on an <code>int</code>
  field within the given object.
 @param obj non-null; object containing the field
 @param offset offset to the field within  <code> obj </code>
 @param expectedValue expected value of the field
 @param newValue new value to store in the field if the contents are  as expected
 @return <code>true</code> if the new value was in fact stored, and 
 <code>false</code> if not
 */
- (jboolean)compareAndSwapIntWithId:(id)obj
                           withLong:(jlong)offset
                            withInt:(jint)expectedValue
                            withInt:(jint)newValue;

/*!
 @brief Performs a compare-and-set operation on a <code>long</code>
  field within the given object.
 @param obj non-null; object containing the field
 @param offset offset to the field within  <code> obj </code>
 @param expectedValue expected value of the field
 @param newValue new value to store in the field if the contents are  as expected
 @return <code>true</code> if the new value was in fact stored, and 
 <code>false</code> if not
 */
- (jboolean)compareAndSwapLongWithId:(id)obj
                            withLong:(jlong)offset
                            withLong:(jlong)expectedValue
                            withLong:(jlong)newValue;

/*!
 @brief Performs a compare-and-set operation on an <code>Object</code>
  field (that is, a reference field) within the given object.
 @param obj non-null; object containing the field
 @param offset offset to the field within  <code> obj </code>
 @param expectedValue expected value of the field
 @param newValue new value to store in the field if the contents are  as expected
 @return <code>true</code> if the new value was in fact stored, and 
 <code>false</code> if not
 */
- (jboolean)compareAndSwapObjectWithId:(id)obj
                              withLong:(jlong)offset
                                withId:(id)expectedValue
                                withId:(id)newValue;

- (void)copyMemoryWithLong:(jlong)srcAddr
                  withLong:(jlong)dstAddr
                  withLong:(jlong)bytes OBJC_METHOD_FAMILY_NONE;

- (void)copyMemoryWithId:(id)srcBase
                withLong:(jlong)srcOffset
                  withId:(id)destBase
                withLong:(jlong)destOffset
                withLong:(jlong)bytes OBJC_METHOD_FAMILY_NONE;

- (void)freeMemoryWithLong:(jlong)address;

/*!
 @brief Ensures that loads and stores before the fence will not be reordered
  with loads and stores after the fence.Implies the effects of both
  loadFence() and storeFence(), and in addition, the effect of a StoreLoad
  barrier.
 Corresponds to C11 atomic_thread_fence(memory_order_seq_cst).
 @since 1.8
 */
- (void)fullFence;

/*!
 @brief Atomically adds the given value to the current value of a field
  or array element within the given object <code>o</code>
  at the given <code>offset</code>.
 @param o object/array to update the field/element in
 @param offset field/element offset
 @param delta the value to add
 @return the previous value
 @since 1.8
 */
- (jint)getAndAddIntWithId:(id)o
                  withLong:(jlong)offset
                   withInt:(jint)delta;

/*!
 @brief Atomically adds the given value to the current value of a field
  or array element within the given object <code>o</code>
  at the given <code>offset</code>.
 @param o object/array to update the field/element in
 @param offset field/element offset
 @param delta the value to add
 @return the previous value
 @since 1.8
 */
- (jlong)getAndAddLongWithId:(id)o
                    withLong:(jlong)offset
                    withLong:(jlong)delta;

/*!
 @brief Atomically exchanges the given value with the current value of
  a field or array element within the given object <code>o</code>
  at the given <code>offset</code>.
 @param o object/array to update the field/element in
 @param offset field/element offset
 @param newValue new value
 @return the previous value
 @since 1.8
 */
- (jint)getAndSetIntWithId:(id)o
                  withLong:(jlong)offset
                   withInt:(jint)newValue;

/*!
 @brief Atomically exchanges the given value with the current value of
  a field or array element within the given object <code>o</code>
  at the given <code>offset</code>.
 @param o object/array to update the field/element in
 @param offset field/element offset
 @param newValue new value
 @return the previous value
 @since 1.8
 */
- (jlong)getAndSetLongWithId:(id)o
                    withLong:(jlong)offset
                    withLong:(jlong)newValue;

/*!
 @brief Atomically exchanges the given reference value with the current
  reference value of a field or array element within the given
  object <code>o</code> at the given <code>offset</code>.
 @param o object/array to update the field/element in
 @param offset field/element offset
 @param newValue new value
 @return the previous value
 @since 1.8
 */
- (id)getAndSetObjectWithId:(id)o
                   withLong:(jlong)offset
                     withId:(id)newValue;

- (jboolean)getBooleanWithId:(id)obj
                    withLong:(jlong)offset;

/*!
 @brief Gets a <code>boolean</code> field from the given object,
  using <code>volatile</code> semantics.
 @param obj non-null; object containing the field
 @param offset offset to the field within  <code> obj </code>
 @return the retrieved value
 */
- (jboolean)getBooleanVolatileWithId:(id)obj
                            withLong:(jlong)offset;

- (jbyte)getByteWithLong:(jlong)address;

- (jbyte)getByteWithId:(id)obj
              withLong:(jlong)offset;

/*!
 @brief Gets a <code>byte</code> field from the given object,
  using <code>volatile</code> semantics.
 @param obj non-null; object containing the field
 @param offset offset to the field within  <code> obj </code>
 @return the retrieved value
 */
- (jbyte)getByteVolatileWithId:(id)obj
                      withLong:(jlong)offset;

- (jchar)getCharWithLong:(jlong)address;

- (jchar)getCharWithId:(id)obj
              withLong:(jlong)offset;

/*!
 @brief Gets a <code>char</code> field from the given object,
  using <code>volatile</code> semantics.
 @param obj non-null; object containing the field
 @param offset offset to the field within  <code> obj </code>
 @return the retrieved value
 */
- (jchar)getCharVolatileWithId:(id)obj
                      withLong:(jlong)offset;

- (jdouble)getDoubleWithLong:(jlong)address;

- (jdouble)getDoubleWithId:(id)obj
                  withLong:(jlong)offset;

/*!
 @brief Gets a <code>double</code> field from the given object,
  using <code>volatile</code> semantics.
 @param obj non-null; object containing the field
 @param offset offset to the field within  <code> obj </code>
 @return the retrieved value
 */
- (jdouble)getDoubleVolatileWithId:(id)obj
                          withLong:(jlong)offset;

- (jfloat)getFloatWithLong:(jlong)address;

- (jfloat)getFloatWithId:(id)obj
                withLong:(jlong)offset;

/*!
 @brief Gets a <code>float</code> field from the given object,
  using <code>volatile</code> semantics.
 @param obj non-null; object containing the field
 @param offset offset to the field within  <code> obj </code>
 @return the retrieved value
 */
- (jfloat)getFloatVolatileWithId:(id)obj
                        withLong:(jlong)offset;

- (jint)getIntWithLong:(jlong)address;

/*!
 @brief Gets an <code>int</code> field from the given object.
 @param obj non-null; object containing the field
 @param offset offset to the field within  <code> obj </code>
 @return the retrieved value
 */
- (jint)getIntWithId:(id)obj
            withLong:(jlong)offset;

/*!
 @brief Gets an <code>int</code> field from the given object,
  using <code>volatile</code> semantics.
 @param obj non-null; object containing the field
 @param offset offset to the field within  <code> obj </code>
 @return the retrieved value
 */
- (jint)getIntVolatileWithId:(id)obj
                    withLong:(jlong)offset;

- (jlong)getLongWithLong:(jlong)address;

/*!
 @brief Gets a <code>long</code> field from the given object.
 @param obj non-null; object containing the field
 @param offset offset to the field within  <code> obj </code>
 @return the retrieved value
 */
- (jlong)getLongWithId:(id)obj
              withLong:(jlong)offset;

/*!
 @brief Gets a <code>long</code> field from the given object,
  using <code>volatile</code> semantics.
 @param obj non-null; object containing the field
 @param offset offset to the field within  <code> obj </code>
 @return the retrieved value
 */
- (jlong)getLongVolatileWithId:(id)obj
                      withLong:(jlong)offset;

/*!
 @brief Gets an <code>Object</code> field from the given object.
 @param obj non-null; object containing the field
 @param offset offset to the field within  <code> obj </code>
 @return the retrieved value
 */
- (id)getObjectWithId:(id)obj
             withLong:(jlong)offset;

/*!
 @brief Gets an <code>Object</code> field from the given object,
  using <code>volatile</code> semantics.
 @param obj non-null; object containing the field
 @param offset offset to the field within  <code> obj </code>
 @return the retrieved value
 */
- (id)getObjectVolatileWithId:(id)obj
                     withLong:(jlong)offset;

- (jshort)getShortWithLong:(jlong)address;

- (jshort)getShortWithId:(id)obj
                withLong:(jlong)offset;

/*!
 @brief Gets a <code>short</code> field from the given object,
  using <code>volatile</code> semantics.
 @param obj non-null; object containing the field
 @param offset offset to the field within  <code> obj </code>
 @return the retrieved value
 */
- (jshort)getShortVolatileWithId:(id)obj
                        withLong:(jlong)offset;

/*!
 @brief Gets the unique instance of this class.This is only allowed in
  very limited situations.
 */
+ (SunMiscUnsafe *)getUnsafe;

/*!
 @brief Ensures that loads before the fence will not be reordered with loads and
  stores after the fence; a "LoadLoad plus LoadStore barrier".
 Corresponds to C11 atomic_thread_fence(memory_order_acquire)
  (an "acquire fence").
  A pure LoadLoad fence is not provided, since the addition of LoadStore
  is almost always desired, and most current hardware instructions that
  provide a LoadLoad barrier also provide a LoadStore barrier for free.
 @since 1.8
 */
- (void)loadFence;

/*!
 @brief Gets the raw byte offset from the start of an object's memory to
  the memory used to store the indicated instance field.
 @param field non-null; the field in question, which must be an  instance field
 @return the offset to the field
 */
- (jlong)objectFieldOffsetWithJavaLangReflectField:(JavaLangReflectField *)field;

- (jint)pageSize;

/*!
 @brief Parks the calling thread for the specified amount of time,
  unless the "permit" for the thread is already available (due to
  a previous call to <code>unpark</code>.This method may also return
  spuriously (that is, without the thread being told to unpark
  and without the indicated amount of time elapsing).
 <p>See <code>java.util.concurrent.locks.LockSupport</code> for more
  in-depth information of the behavior of this method.</p>
 @param absolute whether the given time value is absolute  milliseconds-since-the-epoch (
  <code> true </code> ) or relative  nanoseconds-from-now (
  <code> false </code> )
 @param time the (absolute millis or relative nanos) time value
 */
- (void)parkWithBoolean:(jboolean)absolute
               withLong:(jlong)time;

- (void)putBooleanWithId:(id)obj
                withLong:(jlong)offset
             withBoolean:(jboolean)newValue;

/*!
 @brief Stores a <code>boolean</code> field into the given object,
  using <code>volatile</code> semantics.
 @param obj non-null; object containing the field
 @param offset offset to the field within  <code> obj </code>
 @param newValue the value to store
 */
- (void)putBooleanVolatileWithId:(id)obj
                        withLong:(jlong)offset
                     withBoolean:(jboolean)newValue;

- (void)putByteWithLong:(jlong)address
               withByte:(jbyte)x;

- (void)putByteWithId:(id)obj
             withLong:(jlong)offset
             withByte:(jbyte)newValue;

/*!
 @brief Stores a <code>byte</code> field into the given object,
  using <code>volatile</code> semantics.
 @param obj non-null; object containing the field
 @param offset offset to the field within  <code> obj </code>
 @param newValue the value to store
 */
- (void)putByteVolatileWithId:(id)obj
                     withLong:(jlong)offset
                     withByte:(jbyte)newValue;

- (void)putCharWithLong:(jlong)address
               withChar:(jchar)x;

- (void)putCharWithId:(id)obj
             withLong:(jlong)offset
             withChar:(jchar)newValue;

/*!
 @brief Stores a <code>char</code> field into the given object,
  using <code>volatile</code> semantics.
 @param obj non-null; object containing the field
 @param offset offset to the field within  <code> obj </code>
 @param newValue the value to store
 */
- (void)putCharVolatileWithId:(id)obj
                     withLong:(jlong)offset
                     withChar:(jchar)newValue;

- (void)putDoubleWithLong:(jlong)address
               withDouble:(jdouble)x;

- (void)putDoubleWithId:(id)obj
               withLong:(jlong)offset
             withDouble:(jdouble)newValue;

/*!
 @brief Stores a <code>double</code> field into the given object,
  using <code>volatile</code> semantics.
 @param obj non-null; object containing the field
 @param offset offset to the field within  <code> obj </code>
 @param newValue the value to store
 */
- (void)putDoubleVolatileWithId:(id)obj
                       withLong:(jlong)offset
                     withDouble:(jdouble)newValue;

- (void)putFloatWithLong:(jlong)address
               withFloat:(jfloat)x;

- (void)putFloatWithId:(id)obj
              withLong:(jlong)offset
             withFloat:(jfloat)newValue;

/*!
 @brief Stores a <code>float</code> field into the given object,
  using <code>volatile</code> semantics.
 @param obj non-null; object containing the field
 @param offset offset to the field within  <code> obj </code>
 @param newValue the value to store
 */
- (void)putFloatVolatileWithId:(id)obj
                      withLong:(jlong)offset
                     withFloat:(jfloat)newValue;

- (void)putIntWithLong:(jlong)address
               withInt:(jint)x;

/*!
 @brief Stores an <code>int</code> field into the given object.
 @param obj non-null; object containing the field
 @param offset offset to the field within  <code> obj </code>
 @param newValue the value to store
 */
- (void)putIntWithId:(id)obj
            withLong:(jlong)offset
             withInt:(jint)newValue;

/*!
 @brief Stores an <code>int</code> field into the given object,
  using <code>volatile</code> semantics.
 @param obj non-null; object containing the field
 @param offset offset to the field within  <code> obj </code>
 @param newValue the value to store
 */
- (void)putIntVolatileWithId:(id)obj
                    withLong:(jlong)offset
                     withInt:(jint)newValue;

- (void)putLongWithLong:(jlong)address
               withLong:(jlong)x;

/*!
 @brief Stores a <code>long</code> field into the given object.
 @param obj non-null; object containing the field
 @param offset offset to the field within  <code> obj </code>
 @param newValue the value to store
 */
- (void)putLongWithId:(id)obj
             withLong:(jlong)offset
             withLong:(jlong)newValue;

/*!
 @brief Stores a <code>long</code> field into the given object,
  using <code>volatile</code> semantics.
 @param obj non-null; object containing the field
 @param offset offset to the field within  <code> obj </code>
 @param newValue the value to store
 */
- (void)putLongVolatileWithId:(id)obj
                     withLong:(jlong)offset
                     withLong:(jlong)newValue;

/*!
 @brief Stores an <code>Object</code> field into the given object.
 @param obj non-null; object containing the field
 @param offset offset to the field within  <code> obj </code>
 @param newValue the value to store
 */
- (void)putObjectWithId:(id)obj
               withLong:(jlong)offset
                 withId:(id)newValue;

/*!
 @brief Stores an <code>Object</code> field into the given object,
  using <code>volatile</code> semantics.
 @param obj non-null; object containing the field
 @param offset offset to the field within  <code> obj </code>
 @param newValue the value to store
 */
- (void)putObjectVolatileWithId:(id)obj
                       withLong:(jlong)offset
                         withId:(id)newValue;

/*!
 @brief Lazy set an int field.
 */
- (void)putOrderedIntWithId:(id)obj
                   withLong:(jlong)offset
                    withInt:(jint)newValue;

/*!
 @brief Lazy set a long field.
 */
- (void)putOrderedLongWithId:(id)obj
                    withLong:(jlong)offset
                    withLong:(jlong)newValue;

/*!
 @brief Lazy set an object field.
 */
- (void)putOrderedObjectWithId:(id)obj
                      withLong:(jlong)offset
                        withId:(id)newValue;

- (void)putShortWithLong:(jlong)address
               withShort:(jshort)x;

- (void)putShortWithId:(id)obj
              withLong:(jlong)offset
             withShort:(jshort)newValue;

/*!
 @brief Stores a <code>short</code> field into the given object,
  using <code>volatile</code> semantics.
 @param obj non-null; object containing the field
 @param offset offset to the field within  <code> obj </code>
 @param newValue the value to store
 */
- (void)putShortVolatileWithId:(id)obj
                      withLong:(jlong)offset
                     withShort:(jshort)newValue;

- (void)setMemoryWithLong:(jlong)address
                 withLong:(jlong)bytes
                 withByte:(jbyte)value;

+ (id)staticFieldBaseWithJavaLangReflectField:(JavaLangReflectField *)f;

+ (jlong)staticFieldOffsetWithJavaLangReflectField:(JavaLangReflectField *)f;

/*!
 @brief Ensures that loads and stores before the fence will not be reordered with
  stores after the fence; a "StoreStore plus LoadStore barrier".
 Corresponds to C11 atomic_thread_fence(memory_order_release)
  (a "release fence").
  A pure StoreStore fence is not provided, since the addition of LoadStore
  is almost always desired, and most current hardware instructions that
  provide a StoreStore barrier also provide a LoadStore barrier for free.
 @since 1.8
 */
- (void)storeFence;

/*!
 @brief Unparks the given object, which must be a <code>Thread</code>.
 <p>See <code>java.util.concurrent.locks.LockSupport</code> for more
  in-depth information of the behavior of this method.</p>
 @param obj non-null; the object to unpark
 */
- (void)unparkWithId:(id)obj;

@end

J2OBJC_STATIC_INIT(SunMiscUnsafe)

inline jint SunMiscUnsafe_get_INVALID_FIELD_OFFSET(void);
#define SunMiscUnsafe_INVALID_FIELD_OFFSET -1
J2OBJC_STATIC_FIELD_CONSTANT(SunMiscUnsafe, INVALID_FIELD_OFFSET, jint)

FOUNDATION_EXPORT SunMiscUnsafe *SunMiscUnsafe_getUnsafe(void);

FOUNDATION_EXPORT jlong SunMiscUnsafe_staticFieldOffsetWithJavaLangReflectField_(JavaLangReflectField *f);

FOUNDATION_EXPORT id SunMiscUnsafe_staticFieldBaseWithJavaLangReflectField_(JavaLangReflectField *f);

J2OBJC_TYPE_LITERAL_HEADER(SunMiscUnsafe)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_SunMiscUnsafe")
