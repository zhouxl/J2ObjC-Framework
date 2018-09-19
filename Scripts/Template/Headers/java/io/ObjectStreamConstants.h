//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/ObjectStreamConstants.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoObjectStreamConstants")
#ifdef RESTRICT_JavaIoObjectStreamConstants
#define INCLUDE_ALL_JavaIoObjectStreamConstants 0
#else
#define INCLUDE_ALL_JavaIoObjectStreamConstants 1
#endif
#undef RESTRICT_JavaIoObjectStreamConstants

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaIoObjectStreamConstants_) && (INCLUDE_ALL_JavaIoObjectStreamConstants || defined(INCLUDE_JavaIoObjectStreamConstants))
#define JavaIoObjectStreamConstants_

@class JavaIoSerializablePermission;

/*!
 @brief A helper interface with constants used by the serialization implementation.
 */
@protocol JavaIoObjectStreamConstants < JavaObject >

@end

@interface JavaIoObjectStreamConstants : NSObject
@property (readonly, class) jshort STREAM_MAGIC NS_SWIFT_NAME(STREAM_MAGIC);
@property (readonly, class) jshort STREAM_VERSION NS_SWIFT_NAME(STREAM_VERSION);
@property (readonly, class) jbyte TC_BASE NS_SWIFT_NAME(TC_BASE);
@property (readonly, class) jbyte TC_NULL NS_SWIFT_NAME(TC_NULL);
@property (readonly, class) jbyte TC_REFERENCE NS_SWIFT_NAME(TC_REFERENCE);
@property (readonly, class) jbyte TC_CLASSDESC NS_SWIFT_NAME(TC_CLASSDESC);
@property (readonly, class) jbyte TC_OBJECT NS_SWIFT_NAME(TC_OBJECT);
@property (readonly, class) jbyte TC_STRING NS_SWIFT_NAME(TC_STRING);
@property (readonly, class) jbyte TC_ARRAY NS_SWIFT_NAME(TC_ARRAY);
@property (readonly, class) jbyte TC_CLASS NS_SWIFT_NAME(TC_CLASS);
@property (readonly, class) jbyte TC_BLOCKDATA NS_SWIFT_NAME(TC_BLOCKDATA);
@property (readonly, class) jbyte TC_ENDBLOCKDATA NS_SWIFT_NAME(TC_ENDBLOCKDATA);
@property (readonly, class) jbyte TC_RESET NS_SWIFT_NAME(TC_RESET);
@property (readonly, class) jbyte TC_BLOCKDATALONG NS_SWIFT_NAME(TC_BLOCKDATALONG);
@property (readonly, class) jbyte TC_EXCEPTION NS_SWIFT_NAME(TC_EXCEPTION);
@property (readonly, class) jbyte TC_LONGSTRING NS_SWIFT_NAME(TC_LONGSTRING);
@property (readonly, class) jbyte TC_PROXYCLASSDESC NS_SWIFT_NAME(TC_PROXYCLASSDESC);
@property (readonly, class) jbyte TC_MAX NS_SWIFT_NAME(TC_MAX);
@property (readonly, class) jint baseWireHandle NS_SWIFT_NAME(baseWireHandle);
@property (readonly, class) jint PROTOCOL_VERSION_1 NS_SWIFT_NAME(PROTOCOL_VERSION_1);
@property (readonly, class) jint PROTOCOL_VERSION_2 NS_SWIFT_NAME(PROTOCOL_VERSION_2);
@property (readonly, class, strong) JavaIoSerializablePermission *SUBCLASS_IMPLEMENTATION_PERMISSION NS_SWIFT_NAME(SUBCLASS_IMPLEMENTATION_PERMISSION);
@property (readonly, class, strong) JavaIoSerializablePermission *SUBSTITUTION_PERMISSION NS_SWIFT_NAME(SUBSTITUTION_PERMISSION);
@property (readonly, class) jbyte SC_WRITE_METHOD NS_SWIFT_NAME(SC_WRITE_METHOD);
@property (readonly, class) jbyte SC_SERIALIZABLE NS_SWIFT_NAME(SC_SERIALIZABLE);
@property (readonly, class) jbyte SC_EXTERNALIZABLE NS_SWIFT_NAME(SC_EXTERNALIZABLE);
@property (readonly, class) jbyte SC_BLOCK_DATA NS_SWIFT_NAME(SC_BLOCK_DATA);
@property (readonly, class) jbyte TC_ENUM NS_SWIFT_NAME(TC_ENUM);
@property (readonly, class) jbyte SC_ENUM NS_SWIFT_NAME(SC_ENUM);

+ (jshort)STREAM_MAGIC;

+ (jshort)STREAM_VERSION;

+ (jbyte)TC_BASE;

+ (jbyte)TC_NULL;

+ (jbyte)TC_REFERENCE;

+ (jbyte)TC_CLASSDESC;

+ (jbyte)TC_OBJECT;

+ (jbyte)TC_STRING;

+ (jbyte)TC_ARRAY;

+ (jbyte)TC_CLASS;

+ (jbyte)TC_BLOCKDATA;

+ (jbyte)TC_ENDBLOCKDATA;

+ (jbyte)TC_RESET;

+ (jbyte)TC_BLOCKDATALONG;

+ (jbyte)TC_EXCEPTION;

+ (jbyte)TC_LONGSTRING;

+ (jbyte)TC_PROXYCLASSDESC;

+ (jbyte)TC_MAX;

+ (jint)baseWireHandle;

+ (jint)PROTOCOL_VERSION_1;

+ (jint)PROTOCOL_VERSION_2;

+ (JavaIoSerializablePermission *)SUBCLASS_IMPLEMENTATION_PERMISSION;

+ (JavaIoSerializablePermission *)SUBSTITUTION_PERMISSION;

+ (jbyte)SC_WRITE_METHOD;

+ (jbyte)SC_SERIALIZABLE;

+ (jbyte)SC_EXTERNALIZABLE;

+ (jbyte)SC_BLOCK_DATA;

+ (jbyte)TC_ENUM;

+ (jbyte)SC_ENUM;

@end

J2OBJC_STATIC_INIT(JavaIoObjectStreamConstants)

/*!
 @brief The stream header's magic number.
 */
inline jshort JavaIoObjectStreamConstants_get_STREAM_MAGIC(void);
#define JavaIoObjectStreamConstants_STREAM_MAGIC -21267
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoObjectStreamConstants, STREAM_MAGIC, jshort)

/*!
 @brief The stream header's version number.
 */
inline jshort JavaIoObjectStreamConstants_get_STREAM_VERSION(void);
#define JavaIoObjectStreamConstants_STREAM_VERSION 5
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoObjectStreamConstants, STREAM_VERSION, jshort)

/*!
 @brief The minimum tag value.
 */
inline jbyte JavaIoObjectStreamConstants_get_TC_BASE(void);
#define JavaIoObjectStreamConstants_TC_BASE 112
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoObjectStreamConstants, TC_BASE, jbyte)

/*!
 @brief Tag to mark a <code>null</code> object reference.
 */
inline jbyte JavaIoObjectStreamConstants_get_TC_NULL(void);
#define JavaIoObjectStreamConstants_TC_NULL 112
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoObjectStreamConstants, TC_NULL, jbyte)

/*!
 @brief Tag to mark a reference to an object that has already been written to the
  stream.
 */
inline jbyte JavaIoObjectStreamConstants_get_TC_REFERENCE(void);
#define JavaIoObjectStreamConstants_TC_REFERENCE 113
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoObjectStreamConstants, TC_REFERENCE, jbyte)

/*!
 @brief Tag to mark a new class descriptor.
 */
inline jbyte JavaIoObjectStreamConstants_get_TC_CLASSDESC(void);
#define JavaIoObjectStreamConstants_TC_CLASSDESC 114
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoObjectStreamConstants, TC_CLASSDESC, jbyte)

/*!
 @brief Tag to mark a new object.
 */
inline jbyte JavaIoObjectStreamConstants_get_TC_OBJECT(void);
#define JavaIoObjectStreamConstants_TC_OBJECT 115
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoObjectStreamConstants, TC_OBJECT, jbyte)

/*!
 @brief Tag to mark a new string.
 */
inline jbyte JavaIoObjectStreamConstants_get_TC_STRING(void);
#define JavaIoObjectStreamConstants_TC_STRING 116
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoObjectStreamConstants, TC_STRING, jbyte)

/*!
 @brief Tag to mark a new array.
 */
inline jbyte JavaIoObjectStreamConstants_get_TC_ARRAY(void);
#define JavaIoObjectStreamConstants_TC_ARRAY 117
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoObjectStreamConstants, TC_ARRAY, jbyte)

/*!
 @brief Tag to mark a reference to a class.
 */
inline jbyte JavaIoObjectStreamConstants_get_TC_CLASS(void);
#define JavaIoObjectStreamConstants_TC_CLASS 118
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoObjectStreamConstants, TC_CLASS, jbyte)

/*!
 @brief Tag to mark a block of optional data.The byte following this tag
  indicates the size of the block.
 */
inline jbyte JavaIoObjectStreamConstants_get_TC_BLOCKDATA(void);
#define JavaIoObjectStreamConstants_TC_BLOCKDATA 119
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoObjectStreamConstants, TC_BLOCKDATA, jbyte)

/*!
 @brief Tag to mark the end of block data blocks for an object.
 */
inline jbyte JavaIoObjectStreamConstants_get_TC_ENDBLOCKDATA(void);
#define JavaIoObjectStreamConstants_TC_ENDBLOCKDATA 120
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoObjectStreamConstants, TC_ENDBLOCKDATA, jbyte)

/*!
 @brief Tag to mark a stream reset.
 */
inline jbyte JavaIoObjectStreamConstants_get_TC_RESET(void);
#define JavaIoObjectStreamConstants_TC_RESET 121
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoObjectStreamConstants, TC_RESET, jbyte)

/*!
 @brief Tag to mark a long block of data.The long following this tag
  indicates the size of the block.
 */
inline jbyte JavaIoObjectStreamConstants_get_TC_BLOCKDATALONG(void);
#define JavaIoObjectStreamConstants_TC_BLOCKDATALONG 122
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoObjectStreamConstants, TC_BLOCKDATALONG, jbyte)

/*!
 @brief Tag to mark an exception.
 */
inline jbyte JavaIoObjectStreamConstants_get_TC_EXCEPTION(void);
#define JavaIoObjectStreamConstants_TC_EXCEPTION 123
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoObjectStreamConstants, TC_EXCEPTION, jbyte)

/*!
 @brief Tag to mark a long string.
 */
inline jbyte JavaIoObjectStreamConstants_get_TC_LONGSTRING(void);
#define JavaIoObjectStreamConstants_TC_LONGSTRING 124
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoObjectStreamConstants, TC_LONGSTRING, jbyte)

/*!
 @brief Tag to mark a new proxy class descriptor.
 */
inline jbyte JavaIoObjectStreamConstants_get_TC_PROXYCLASSDESC(void);
#define JavaIoObjectStreamConstants_TC_PROXYCLASSDESC 125
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoObjectStreamConstants, TC_PROXYCLASSDESC, jbyte)

/*!
 @brief The maximum tag value.
 */
inline jbyte JavaIoObjectStreamConstants_get_TC_MAX(void);
#define JavaIoObjectStreamConstants_TC_MAX 126
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoObjectStreamConstants, TC_MAX, jbyte)

/*!
 @brief Handle for the first object that gets serialized.
 */
inline jint JavaIoObjectStreamConstants_get_baseWireHandle(void);
#define JavaIoObjectStreamConstants_baseWireHandle 8257536
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoObjectStreamConstants, baseWireHandle, jint)

/*!
 @brief Stream protocol version 1.
 */
inline jint JavaIoObjectStreamConstants_get_PROTOCOL_VERSION_1(void);
#define JavaIoObjectStreamConstants_PROTOCOL_VERSION_1 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoObjectStreamConstants, PROTOCOL_VERSION_1, jint)

/*!
 @brief Stream protocol version 2.
 */
inline jint JavaIoObjectStreamConstants_get_PROTOCOL_VERSION_2(void);
#define JavaIoObjectStreamConstants_PROTOCOL_VERSION_2 2
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoObjectStreamConstants, PROTOCOL_VERSION_2, jint)

/*!
 @brief Permission constant to enable subclassing of ObjectInputStream and
  ObjectOutputStream.
 */
inline JavaIoSerializablePermission *JavaIoObjectStreamConstants_get_SUBCLASS_IMPLEMENTATION_PERMISSION(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaIoSerializablePermission *JavaIoObjectStreamConstants_SUBCLASS_IMPLEMENTATION_PERMISSION;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaIoObjectStreamConstants, SUBCLASS_IMPLEMENTATION_PERMISSION, JavaIoSerializablePermission *)

/*!
 @brief Permission constant to enable object substitution during serialization
  and deserialization.
 */
inline JavaIoSerializablePermission *JavaIoObjectStreamConstants_get_SUBSTITUTION_PERMISSION(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaIoSerializablePermission *JavaIoObjectStreamConstants_SUBSTITUTION_PERMISSION;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaIoObjectStreamConstants, SUBSTITUTION_PERMISSION, JavaIoSerializablePermission *)

/*!
 @brief Bit mask for the <code>flag</code> field in ObjectStreamClass.Indicates
  that a serializable class has its own <code>writeObject</code> method.
 */
inline jbyte JavaIoObjectStreamConstants_get_SC_WRITE_METHOD(void);
#define JavaIoObjectStreamConstants_SC_WRITE_METHOD 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoObjectStreamConstants, SC_WRITE_METHOD, jbyte)

/*!
 @brief Bit mask for the <code>flag</code> field in ObjectStreamClass.Indicates
  that a class is serializable.
 */
inline jbyte JavaIoObjectStreamConstants_get_SC_SERIALIZABLE(void);
#define JavaIoObjectStreamConstants_SC_SERIALIZABLE 2
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoObjectStreamConstants, SC_SERIALIZABLE, jbyte)

/*!
 @brief Bit mask for the <code>flag</code> field in ObjectStreamClass.Indicates
  that a class is externalizable.
 */
inline jbyte JavaIoObjectStreamConstants_get_SC_EXTERNALIZABLE(void);
#define JavaIoObjectStreamConstants_SC_EXTERNALIZABLE 4
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoObjectStreamConstants, SC_EXTERNALIZABLE, jbyte)

/*!
 @brief Bit mask for the <code>flag</code> field in ObjectStreamClass.Indicates
  that an externalizable class is written in block data mode.
 */
inline jbyte JavaIoObjectStreamConstants_get_SC_BLOCK_DATA(void);
#define JavaIoObjectStreamConstants_SC_BLOCK_DATA 8
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoObjectStreamConstants, SC_BLOCK_DATA, jbyte)

/*!
 @brief Tag to mark a new enum.
 */
inline jbyte JavaIoObjectStreamConstants_get_TC_ENUM(void);
#define JavaIoObjectStreamConstants_TC_ENUM 126
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoObjectStreamConstants, TC_ENUM, jbyte)

/*!
 @brief Bit mask for the <code>flag</code> field in ObjectStreamClass.Indicates
  that a class is an enum type.
 */
inline jbyte JavaIoObjectStreamConstants_get_SC_ENUM(void);
#define JavaIoObjectStreamConstants_SC_ENUM 16
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoObjectStreamConstants, SC_ENUM, jbyte)

J2OBJC_TYPE_LITERAL_HEADER(JavaIoObjectStreamConstants)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoObjectStreamConstants")
