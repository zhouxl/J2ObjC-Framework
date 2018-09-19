//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/DataOutputStream.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoDataOutputStream")
#ifdef RESTRICT_JavaIoDataOutputStream
#define INCLUDE_ALL_JavaIoDataOutputStream 0
#else
#define INCLUDE_ALL_JavaIoDataOutputStream 1
#endif
#undef RESTRICT_JavaIoDataOutputStream

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaIoDataOutputStream_) && (INCLUDE_ALL_JavaIoDataOutputStream || defined(INCLUDE_JavaIoDataOutputStream))
#define JavaIoDataOutputStream_

#define RESTRICT_JavaIoFilterOutputStream 1
#define INCLUDE_JavaIoFilterOutputStream 1
#include "../../java/io/FilterOutputStream.h"

#define RESTRICT_JavaIoDataOutput 1
#define INCLUDE_JavaIoDataOutput 1
#include "../../java/io/DataOutput.h"

@class IOSByteArray;
@class JavaIoOutputStream;

/*!
 @brief Wraps an existing <code>OutputStream</code> and writes big-endian typed data to it.
 Typically, this stream can be read in by DataInputStream. Types that can be
  written include byte, 16-bit short, 32-bit int, 32-bit float, 64-bit long,
  64-bit double, byte strings, and <code>MUTF-8</code> encoded strings.
 - seealso: DataInputStream
 */
@interface JavaIoDataOutputStream : JavaIoFilterOutputStream < JavaIoDataOutput > {
 @public
  /*!
   @brief The number of bytes written out so far.
   */
  jint written_;
}

#pragma mark Public

/*!
 @brief Constructs a new <code>DataOutputStream</code> on the <code>OutputStream</code>
  <code>out</code>.Note that data written by this stream is not in a human
  readable form but can be reconstructed by using a <code>DataInputStream</code>
  on the resulting output.
 @param outArg the target stream for writing.
 */
- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg;

/*!
 @brief Flushes this stream to ensure all pending data is sent out to the target
  stream.This implementation then also flushes the target stream.
 @throw IOException
 if an error occurs attempting to flush this stream.
 */
- (void)flush;

/*!
 @brief Returns the total number of bytes written to the target stream so far.
 @return the number of bytes written to the target stream.
 */
- (jint)size;

/*!
 @brief Writes <code>count</code> bytes from the byte array <code>buffer</code> starting at 
 <code>offset</code> to the target stream.
 @param buffer the buffer to write to the target stream.
 @param offset the index of the first byte in 
 <code>buffer</code>  to write.
 @param count the number of bytes from the 
 <code>buffer</code>  to write.
 @throw IOException
 if an error occurs while writing to the target stream.
 @throw NullPointerException
 if <code>buffer</code> is <code>null</code>.
 */
- (void)writeWithByteArray:(IOSByteArray *)buffer
                   withInt:(jint)offset
                   withInt:(jint)count;

/*!
 @brief Writes a byte to the target stream.Only the least significant byte of
  the integer <code>oneByte</code> is written.
 @param oneByte the byte to write to the target stream.
 @throw IOException
 if an error occurs while writing to the target stream.
 - seealso: DataInputStream#readByte()
 */
- (void)writeWithInt:(jint)oneByte;

/*!
 @brief Writes a boolean to the target stream.
 @param val the boolean value to write to the target stream.
 @throw IOException
 if an error occurs while writing to the target stream.
 - seealso: DataInputStream#readBoolean()
 */
- (void)writeBooleanWithBoolean:(jboolean)val;

/*!
 @brief Writes an 8-bit byte to the target stream.Only the least significant
  byte of the integer <code>val</code> is written.
 @param val the byte value to write to the target stream.
 @throw IOException
 if an error occurs while writing to the target stream.
 - seealso: DataInputStream#readByte()
 - seealso: DataInputStream#readUnsignedByte()
 */
- (void)writeByteWithInt:(jint)val;

- (void)writeBytesWithNSString:(NSString *)str;

- (void)writeCharWithInt:(jint)val;

- (void)writeCharsWithNSString:(NSString *)str;

- (void)writeDoubleWithDouble:(jdouble)val;

- (void)writeFloatWithFloat:(jfloat)val;

- (void)writeIntWithInt:(jint)val;

- (void)writeLongWithLong:(jlong)val;

- (void)writeShortWithInt:(jint)val;

- (void)writeUTFWithNSString:(NSString *)str;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoDataOutputStream)

FOUNDATION_EXPORT void JavaIoDataOutputStream_initWithJavaIoOutputStream_(JavaIoDataOutputStream *self, JavaIoOutputStream *outArg);

FOUNDATION_EXPORT JavaIoDataOutputStream *new_JavaIoDataOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoDataOutputStream *create_JavaIoDataOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoDataOutputStream)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoDataOutputStream")
