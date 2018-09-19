//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/OutputStreamWriter.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoOutputStreamWriter")
#ifdef RESTRICT_JavaIoOutputStreamWriter
#define INCLUDE_ALL_JavaIoOutputStreamWriter 0
#else
#define INCLUDE_ALL_JavaIoOutputStreamWriter 1
#endif
#undef RESTRICT_JavaIoOutputStreamWriter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaIoOutputStreamWriter_) && (INCLUDE_ALL_JavaIoOutputStreamWriter || defined(INCLUDE_JavaIoOutputStreamWriter))
#define JavaIoOutputStreamWriter_

#define RESTRICT_JavaIoWriter 1
#define INCLUDE_JavaIoWriter 1
#include "../../java/io/Writer.h"

@class IOSCharArray;
@class JavaIoOutputStream;
@class JavaNioCharsetCharset;
@class JavaNioCharsetCharsetEncoder;

/*!
 @brief A class for turning a character stream into a byte stream.Data written to
  the target input stream is converted into bytes by either a default or a
  provided character converter.
 The default encoding is taken from the
  "file.encoding" system property. <code>OutputStreamWriter</code> contains a buffer
  of bytes to be written to target stream and converts these into characters as
  needed. The buffer size is 8K.
 - seealso: InputStreamReader
 */
@interface JavaIoOutputStreamWriter : JavaIoWriter

#pragma mark Public

/*!
 @brief Constructs a new OutputStreamWriter using <code>out</code> as the target
  stream to write converted characters to.The default character encoding
  is used.
 @param outArg the non-null target stream to write converted bytes to.
 */
- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg;

/*!
 @brief Constructs a new OutputStreamWriter using <code>out</code> as the target
  stream to write converted characters to and <code>cs</code> as the character
  encoding.
 @param outArg the target stream to write converted bytes to.
 @param cs the 
 <code>Charset</code>  that specifies the character encoding.
 */
- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                           withJavaNioCharsetCharset:(JavaNioCharsetCharset *)cs;

/*!
 @brief Constructs a new OutputStreamWriter using <code>out</code> as the target
  stream to write converted characters to and <code>charsetEncoder</code> as the character
  encoder.
 @param outArg the target stream to write converted bytes to.
 @param charsetEncoder the character encoder used for character conversion.
 */
- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                    withJavaNioCharsetCharsetEncoder:(JavaNioCharsetCharsetEncoder *)charsetEncoder;

/*!
 @brief Constructs a new OutputStreamWriter using <code>out</code> as the target
  stream to write converted characters to and <code>charsetName</code> as the character
  encoding.If the encoding cannot be found, an
  UnsupportedEncodingException error is thrown.
 @param outArg the target stream to write converted bytes to.
 @param charsetName the string describing the desired character encoding.
 @throw NullPointerException
 if <code>charsetName</code> is <code>null</code>.
 @throw UnsupportedEncodingException
 if the encoding specified by <code>charsetName</code> cannot be found.
 */
- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                                        withNSString:(NSString *)charsetName;

/*!
 @brief Closes this writer.This implementation flushes the buffer as well as the
  target stream.
 The target stream is then closed and the resources for the
  buffer and converter are released. 
 <p>Only the first invocation of this method has any effect. Subsequent calls
  do nothing.
 @throw IOException
 if an error occurs while closing this writer.
 */
- (void)close;

/*!
 @brief Flushes this writer.This implementation ensures that all buffered bytes
  are written to the target stream.
 After writing the bytes, the target
  stream is flushed as well.
 @throw IOException
 if an error occurs while flushing this writer.
 */
- (void)flush;

/*!
 @brief Returns the canonical name of the encoding used by this writer to convert characters to
  bytes, or null if this writer has been closed.Most callers should probably keep
  track of the String or Charset they passed in; this method may not return the same
  name.
 */
- (NSString *)getEncoding;

/*!
 @brief Writes <code>count</code> characters starting at <code>offset</code> in <code>buf</code>
  to this writer.The characters are immediately converted to bytes by the
  character converter and stored in a local buffer.
 If the buffer gets full
  as a result of the conversion, this writer is flushed.
 @param buffer the array containing characters to write.
 @param offset the index of the first character in 
 <code>buf</code>  to write.
 @param count the maximum number of characters to write.
 @throw IndexOutOfBoundsException
 if <code>offset < 0</code> or <code>count < 0</code>, or if
              <code>offset + count</code> is greater than the size of
              <code>buf</code>.
 @throw IOException
 if this writer has already been closed or another I/O error
              occurs.
 */
- (void)writeWithCharArray:(IOSCharArray *)buffer
                   withInt:(jint)offset
                   withInt:(jint)count;

/*!
 @brief Writes the character <code>oneChar</code> to this writer.The lowest two bytes
  of the integer <code>oneChar</code> are immediately converted to bytes by the
  character converter and stored in a local buffer.
 If the buffer gets full
  by converting this character, this writer is flushed.
 @param oneChar the character to write.
 @throw IOException
 if this writer is closed or another I/O error occurs.
 */
- (void)writeWithInt:(jint)oneChar;

/*!
 @brief Writes <code>count</code> characters starting at <code>offset</code> in <code>str</code>
  to this writer.The characters are immediately converted to bytes by the
  character converter and stored in a local buffer.
 If the buffer gets full
  as a result of the conversion, this writer is flushed.
 @param str the string containing characters to write.
 @param offset the start position in 
 <code>str</code>  for retrieving characters.
 @param count the maximum number of characters to write.
 @throw IOException
 if this writer has already been closed or another I/O error
              occurs.
 @throw IndexOutOfBoundsException
 if <code>offset < 0</code> or <code>count < 0</code>, or if
              <code>offset + count</code> is bigger than the length of
              <code>str</code>.
 */
- (void)writeWithNSString:(NSString *)str
                  withInt:(jint)offset
                  withInt:(jint)count;

#pragma mark Package-Private

- (void)flushBuffer;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithId:(id)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoOutputStreamWriter)

FOUNDATION_EXPORT void JavaIoOutputStreamWriter_initWithJavaIoOutputStream_(JavaIoOutputStreamWriter *self, JavaIoOutputStream *outArg);

FOUNDATION_EXPORT JavaIoOutputStreamWriter *new_JavaIoOutputStreamWriter_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoOutputStreamWriter *create_JavaIoOutputStreamWriter_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg);

FOUNDATION_EXPORT void JavaIoOutputStreamWriter_initWithJavaIoOutputStream_withNSString_(JavaIoOutputStreamWriter *self, JavaIoOutputStream *outArg, NSString *charsetName);

FOUNDATION_EXPORT JavaIoOutputStreamWriter *new_JavaIoOutputStreamWriter_initWithJavaIoOutputStream_withNSString_(JavaIoOutputStream *outArg, NSString *charsetName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoOutputStreamWriter *create_JavaIoOutputStreamWriter_initWithJavaIoOutputStream_withNSString_(JavaIoOutputStream *outArg, NSString *charsetName);

FOUNDATION_EXPORT void JavaIoOutputStreamWriter_initWithJavaIoOutputStream_withJavaNioCharsetCharset_(JavaIoOutputStreamWriter *self, JavaIoOutputStream *outArg, JavaNioCharsetCharset *cs);

FOUNDATION_EXPORT JavaIoOutputStreamWriter *new_JavaIoOutputStreamWriter_initWithJavaIoOutputStream_withJavaNioCharsetCharset_(JavaIoOutputStream *outArg, JavaNioCharsetCharset *cs) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoOutputStreamWriter *create_JavaIoOutputStreamWriter_initWithJavaIoOutputStream_withJavaNioCharsetCharset_(JavaIoOutputStream *outArg, JavaNioCharsetCharset *cs);

FOUNDATION_EXPORT void JavaIoOutputStreamWriter_initWithJavaIoOutputStream_withJavaNioCharsetCharsetEncoder_(JavaIoOutputStreamWriter *self, JavaIoOutputStream *outArg, JavaNioCharsetCharsetEncoder *charsetEncoder);

FOUNDATION_EXPORT JavaIoOutputStreamWriter *new_JavaIoOutputStreamWriter_initWithJavaIoOutputStream_withJavaNioCharsetCharsetEncoder_(JavaIoOutputStream *outArg, JavaNioCharsetCharsetEncoder *charsetEncoder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoOutputStreamWriter *create_JavaIoOutputStreamWriter_initWithJavaIoOutputStream_withJavaNioCharsetCharsetEncoder_(JavaIoOutputStream *outArg, JavaNioCharsetCharsetEncoder *charsetEncoder);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoOutputStreamWriter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoOutputStreamWriter")
