//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/InputStreamReader.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoInputStreamReader")
#ifdef RESTRICT_JavaIoInputStreamReader
#define INCLUDE_ALL_JavaIoInputStreamReader 0
#else
#define INCLUDE_ALL_JavaIoInputStreamReader 1
#endif
#undef RESTRICT_JavaIoInputStreamReader

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaIoInputStreamReader_) && (INCLUDE_ALL_JavaIoInputStreamReader || defined(INCLUDE_JavaIoInputStreamReader))
#define JavaIoInputStreamReader_

#define RESTRICT_JavaIoReader 1
#define INCLUDE_JavaIoReader 1
#include "java/io/Reader.h"

@class IOSCharArray;
@class JavaIoInputStream;
@class JavaNioCharsetCharset;
@class JavaNioCharsetCharsetDecoder;

/*!
 @brief An InputStreamReader is a bridge from byte streams to character streams: It
  reads bytes and decodes them into characters using a specified <code><code>charset</code></code>
 .The charset that it uses
  may be specified by name or may be given explicitly, or the platform's
  default charset may be accepted.
 <p> Each invocation of one of an InputStreamReader's read() methods may
  cause one or more bytes to be read from the underlying byte-input stream.
  To enable the efficient conversion of bytes to characters, more bytes may
  be read ahead from the underlying stream than are necessary to satisfy the
  current read operation. 
 <p> For top efficiency, consider wrapping an InputStreamReader within a
  BufferedReader.  For example: 
 @code

  BufferedReader in
    = new BufferedReader(new InputStreamReader(System.in)); 
  
@endcode
 - seealso: BufferedReader
 - seealso: InputStream
 - seealso: java.nio.charset.Charset
 @author Mark Reinhold
 @since JDK1.1
 */
@interface JavaIoInputStreamReader : JavaIoReader

#pragma mark Public

/*!
 @brief Creates an InputStreamReader that uses the default charset.
 @param inArg An InputStream
 */
- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)inArg;

/*!
 @brief Creates an InputStreamReader that uses the given charset.
 </p>
 @param inArg An InputStream
 @param cs A charset
 @since 1.4
 */
- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)inArg
                          withJavaNioCharsetCharset:(JavaNioCharsetCharset *)cs;

/*!
 @brief Creates an InputStreamReader that uses the given charset decoder.
 </p>
 @param inArg An InputStream
 @param dec A charset decoder
 @since 1.4
 */
- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)inArg
                   withJavaNioCharsetCharsetDecoder:(JavaNioCharsetCharsetDecoder *)dec;

/*!
 @brief Creates an InputStreamReader that uses the named charset.
 @param inArg An InputStream
 @param charsetName The name of a supported
           <code></code>charset<code></code>
 @throw UnsupportedEncodingException
 If the named charset is not supported
 */
- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)inArg
                                       withNSString:(NSString *)charsetName;

- (void)close;

/*!
 @brief Returns the name of the character encoding being used by this stream.
 <p> If the encoding has an historical name then that name is returned;
  otherwise the encoding's canonical name is returned. 
 <p> If this instance was created with the <code>String)</code>
  constructor then the returned
  name, being unique for the encoding, may differ from the name passed to
  the constructor. This method will return <code>null</code> if the
  stream has been closed. 
 </p>
 @return The historical name of this encoding, or
          <code>null</code> if the stream has been closed
 - seealso: java.nio.charset.Charset
 */
- (NSString *)getEncoding;

/*!
 @brief Reads a single character.
 @return The character read, or -1 if the end of the stream has been
          reached
 @throw IOExceptionIf an I/O error occurs
 */
- (jint)read;

/*!
 @brief Reads characters into a portion of an array.
 @param cbuf Destination buffer
 @param offset Offset at which to start storing characters
 @param length Maximum number of characters to read
 @return The number of characters read, or -1 if the end of the
              stream has been reached
 @throw IOExceptionIf an I/O error occurs
 */
- (jint)readWithCharArray:(IOSCharArray *)cbuf
                  withInt:(jint)offset
                  withInt:(jint)length;

/*!
 @brief Tells whether this stream is ready to be read.An InputStreamReader is
  ready if its input buffer is not empty, or if bytes are available to be
  read from the underlying byte stream.
 @throw IOExceptionIf an I/O error occurs
 */
- (jboolean)ready;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithId:(id)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoInputStreamReader)

FOUNDATION_EXPORT void JavaIoInputStreamReader_initWithJavaIoInputStream_(JavaIoInputStreamReader *self, JavaIoInputStream *inArg);

FOUNDATION_EXPORT JavaIoInputStreamReader *new_JavaIoInputStreamReader_initWithJavaIoInputStream_(JavaIoInputStream *inArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoInputStreamReader *create_JavaIoInputStreamReader_initWithJavaIoInputStream_(JavaIoInputStream *inArg);

FOUNDATION_EXPORT void JavaIoInputStreamReader_initWithJavaIoInputStream_withNSString_(JavaIoInputStreamReader *self, JavaIoInputStream *inArg, NSString *charsetName);

FOUNDATION_EXPORT JavaIoInputStreamReader *new_JavaIoInputStreamReader_initWithJavaIoInputStream_withNSString_(JavaIoInputStream *inArg, NSString *charsetName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoInputStreamReader *create_JavaIoInputStreamReader_initWithJavaIoInputStream_withNSString_(JavaIoInputStream *inArg, NSString *charsetName);

FOUNDATION_EXPORT void JavaIoInputStreamReader_initWithJavaIoInputStream_withJavaNioCharsetCharset_(JavaIoInputStreamReader *self, JavaIoInputStream *inArg, JavaNioCharsetCharset *cs);

FOUNDATION_EXPORT JavaIoInputStreamReader *new_JavaIoInputStreamReader_initWithJavaIoInputStream_withJavaNioCharsetCharset_(JavaIoInputStream *inArg, JavaNioCharsetCharset *cs) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoInputStreamReader *create_JavaIoInputStreamReader_initWithJavaIoInputStream_withJavaNioCharsetCharset_(JavaIoInputStream *inArg, JavaNioCharsetCharset *cs);

FOUNDATION_EXPORT void JavaIoInputStreamReader_initWithJavaIoInputStream_withJavaNioCharsetCharsetDecoder_(JavaIoInputStreamReader *self, JavaIoInputStream *inArg, JavaNioCharsetCharsetDecoder *dec);

FOUNDATION_EXPORT JavaIoInputStreamReader *new_JavaIoInputStreamReader_initWithJavaIoInputStream_withJavaNioCharsetCharsetDecoder_(JavaIoInputStream *inArg, JavaNioCharsetCharsetDecoder *dec) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoInputStreamReader *create_JavaIoInputStreamReader_initWithJavaIoInputStream_withJavaNioCharsetCharsetDecoder_(JavaIoInputStream *inArg, JavaNioCharsetCharsetDecoder *dec);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoInputStreamReader)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoInputStreamReader")
