//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/Base64.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilBase64")
#ifdef RESTRICT_JavaUtilBase64
#define INCLUDE_ALL_JavaUtilBase64 0
#else
#define INCLUDE_ALL_JavaUtilBase64 1
#endif
#undef RESTRICT_JavaUtilBase64

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilBase64_) && (INCLUDE_ALL_JavaUtilBase64 || defined(INCLUDE_JavaUtilBase64))
#define JavaUtilBase64_

@class IOSByteArray;
@class JavaUtilBase64_Decoder;
@class JavaUtilBase64_Encoder;

/*!
 @brief This class consists exclusively of static methods for obtaining
  encoders and decoders for the Base64 encoding scheme.The
  implementation of this class supports the following types of Base64
  as specified in 
 <a href="http://www.ietf.org/rfc/rfc4648.txt">RFC 4648</a> and 
 <a href="http://www.ietf.org/rfc/rfc2045.txt">RFC 2045</a>.
 <ul>
  <li><a name="basic"><b>Basic</b></a>
  <p> Uses "The Base64 Alphabet" as specified in Table 1 of
      RFC 4648 and RFC 2045 for encoding and decoding operation.
      The encoder does not add any line feed (line separator)
      character. The decoder rejects data that contains characters
      outside the base64 alphabet.</p></li>
  
 <li><a name="url"><b>URL and Filename safe</b></a>
  <p> Uses the "URL and Filename safe Base64 Alphabet" as specified
      in Table 2 of RFC 4648 for encoding and decoding. The
      encoder does not add any line feed (line separator) character.
      The decoder rejects data that contains characters outside the
      base64 alphabet.</p></li>
  
 <li><a name="mime"><b>MIME</b></a>
  <p> Uses the "The Base64 Alphabet" as specified in Table 1 of
      RFC 2045 for encoding and decoding operation. The encoded output
      must be represented in lines of no more than 76 characters each
      and uses a carriage return <code>'\r'</code> followed immediately by
      a linefeed <code>'\n'</code> as the line separator. No line separator
      is added to the end of the encoded output. All line separators
      or other characters not found in the base64 alphabet table are
      ignored in decoding operation.</p></li>
  </ul>
  
 <p> Unless otherwise noted, passing a <code>null</code> argument to a
  method of this class will cause a <code>NullPointerException</code>
  to be thrown.
 @author Xueming Shen
 @since 1.8
 */
@interface JavaUtilBase64 : NSObject

#pragma mark Public

/*!
 @brief Returns a <code>Decoder</code> that decodes using the 
 <a href="#basic">Basic</a> type base64 encoding scheme.
 @return A Base64 decoder.
 */
+ (JavaUtilBase64_Decoder *)getDecoder;

/*!
 @brief Returns a <code>Encoder</code> that encodes using the 
 <a href="#basic">Basic</a> type base64 encoding scheme.
 @return A Base64 encoder.
 */
+ (JavaUtilBase64_Encoder *)getEncoder;

/*!
 @brief Returns a <code>Decoder</code> that decodes using the 
 <a href="#mime">MIME</a> type base64 decoding scheme.
 @return A Base64 decoder.
 */
+ (JavaUtilBase64_Decoder *)getMimeDecoder;

/*!
 @brief Returns a <code>Encoder</code> that encodes using the 
 <a href="#mime">MIME</a> type base64 encoding scheme.
 @return A Base64 encoder.
 */
+ (JavaUtilBase64_Encoder *)getMimeEncoder;

/*!
 @brief Returns a <code>Encoder</code> that encodes using the 
 <a href="#mime">MIME</a> type base64 encoding scheme
  with specified line length and line separators.
 @param lineLength the length of each output line (rounded down to nearest multiple
            of 4). If 
 <code>lineLength <= 0</code>  the output will not be separated           in lines
 @param lineSeparator the line separator for each output line
 @return A Base64 encoder.
 @throw IllegalArgumentExceptionif <code>lineSeparator</code> includes any
           character of "The Base64 Alphabet" as specified in Table 1 of
           RFC 2045.
 */
+ (JavaUtilBase64_Encoder *)getMimeEncoderWithInt:(jint)lineLength
                                    withByteArray:(IOSByteArray *)lineSeparator;

/*!
 @brief Returns a <code>Decoder</code> that decodes using the 
 <a href="#url">URL and Filename safe</a> type base64
  encoding scheme.
 @return A Base64 decoder.
 */
+ (JavaUtilBase64_Decoder *)getUrlDecoder;

/*!
 @brief Returns a <code>Encoder</code> that encodes using the 
 <a href="#url">URL and Filename safe</a> type base64
  encoding scheme.
 @return A Base64 encoder.
 */
+ (JavaUtilBase64_Encoder *)getUrlEncoder;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilBase64)

FOUNDATION_EXPORT JavaUtilBase64_Encoder *JavaUtilBase64_getEncoder(void);

FOUNDATION_EXPORT JavaUtilBase64_Encoder *JavaUtilBase64_getUrlEncoder(void);

FOUNDATION_EXPORT JavaUtilBase64_Encoder *JavaUtilBase64_getMimeEncoder(void);

FOUNDATION_EXPORT JavaUtilBase64_Encoder *JavaUtilBase64_getMimeEncoderWithInt_withByteArray_(jint lineLength, IOSByteArray *lineSeparator);

FOUNDATION_EXPORT JavaUtilBase64_Decoder *JavaUtilBase64_getDecoder(void);

FOUNDATION_EXPORT JavaUtilBase64_Decoder *JavaUtilBase64_getUrlDecoder(void);

FOUNDATION_EXPORT JavaUtilBase64_Decoder *JavaUtilBase64_getMimeDecoder(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilBase64)

#endif

#if !defined (JavaUtilBase64_Encoder_) && (INCLUDE_ALL_JavaUtilBase64 || defined(INCLUDE_JavaUtilBase64_Encoder))
#define JavaUtilBase64_Encoder_

@class IOSByteArray;
@class JavaIoOutputStream;
@class JavaNioByteBuffer;

/*!
 @brief This class implements an encoder for encoding byte data using
  the Base64 encoding scheme as specified in RFC 4648 and RFC 2045.
 <p> Instances of <code>Encoder</code> class are safe for use by
  multiple concurrent threads. 
 <p> Unless otherwise noted, passing a <code>null</code> argument to
  a method of this class will cause a 
 <code>NullPointerException</code> to
  be thrown.
 - seealso: Decoder
 @since 1.8
 */
@interface JavaUtilBase64_Encoder : NSObject
@property (readonly, class, strong) JavaUtilBase64_Encoder *RFC4648 NS_SWIFT_NAME(RFC4648);
@property (readonly, class, strong) JavaUtilBase64_Encoder *RFC4648_URLSAFE NS_SWIFT_NAME(RFC4648_URLSAFE);
@property (readonly, class, strong) JavaUtilBase64_Encoder *RFC2045 NS_SWIFT_NAME(RFC2045);

+ (JavaUtilBase64_Encoder *)RFC4648;

+ (JavaUtilBase64_Encoder *)RFC4648_URLSAFE;

+ (JavaUtilBase64_Encoder *)RFC2045;

#pragma mark Public

/*!
 @brief Encodes all bytes from the specified byte array into a newly-allocated
  byte array using the <code>Base64</code> encoding scheme.The returned byte
  array is of the length of the resulting bytes.
 @param src the byte array to encode
 @return A newly-allocated byte array containing the resulting
           encoded bytes.
 */
- (IOSByteArray *)encodeWithByteArray:(IOSByteArray *)src;

/*!
 @brief Encodes all bytes from the specified byte array using the 
 <code>Base64</code> encoding scheme, writing the resulting bytes to the
  given output byte array, starting at offset 0.
 <p> It is the responsibility of the invoker of this method to make
  sure the output byte array <code>dst</code> has enough space for encoding
  all bytes from the input byte array. No bytes will be written to the
  output byte array if the output byte array is not big enough.
 @param src the byte array to encode
 @param dst the output byte array
 @return The number of bytes written to the output byte array
 @throw IllegalArgumentExceptionif <code>dst</code> does not have enough
           space for encoding all input bytes.
 */
- (jint)encodeWithByteArray:(IOSByteArray *)src
              withByteArray:(IOSByteArray *)dst;

/*!
 @brief Encodes all remaining bytes from the specified byte buffer into
  a newly-allocated ByteBuffer using the <code>Base64</code> encoding
  scheme.
 Upon return, the source buffer's position will be updated to
  its limit; its limit will not have been changed. The returned
  output buffer's position will be zero and its limit will be the
  number of resulting encoded bytes.
 @param buffer the source ByteBuffer to encode
 @return A newly-allocated byte buffer containing the encoded bytes.
 */
- (JavaNioByteBuffer *)encodeWithJavaNioByteBuffer:(JavaNioByteBuffer *)buffer;

/*!
 @brief Encodes the specified byte array into a String using the <code>Base64</code>
  encoding scheme.
 <p> This method first encodes all input bytes into a base64 encoded
  byte array and then constructs a new String by using the encoded byte
  array and the <code>ISO-8859-1</code>
  charset. 
 <p> In other words, an invocation of this method has exactly the same
  effect as invoking 
 <code>new String(encode(src), StandardCharsets.ISO_8859_1)</code>.
 @param src the byte array to encode
 @return A String containing the resulting Base64 encoded characters
 */
- (NSString *)encodeToStringWithByteArray:(IOSByteArray *)src;

/*!
 @brief Returns an encoder instance that encodes equivalently to this one,
  but without adding any padding character at the end of the encoded
  byte data.
 <p> The encoding scheme of this encoder instance is unaffected by
  this invocation. The returned encoder instance should be used for
  non-padding encoding operation.
 @return an equivalent encoder that encodes without adding any
          padding character at the end
 */
- (JavaUtilBase64_Encoder *)withoutPadding;

/*!
 @brief Wraps an output stream for encoding byte data using the <code>Base64</code>
  encoding scheme.
 <p> It is recommended to promptly close the returned output stream after
  use, during which it will flush all possible leftover bytes to the underlying
  output stream. Closing the returned output stream will close the underlying output stream.
 @param os the output stream.
 @return the output stream for encoding the byte data into the
           specified Base64 encoded format
 */
- (JavaIoOutputStream *)wrapWithJavaIoOutputStream:(JavaIoOutputStream *)os;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaUtilBase64_Encoder)

inline JavaUtilBase64_Encoder *JavaUtilBase64_Encoder_get_RFC4648(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaUtilBase64_Encoder *JavaUtilBase64_Encoder_RFC4648;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilBase64_Encoder, RFC4648, JavaUtilBase64_Encoder *)

inline JavaUtilBase64_Encoder *JavaUtilBase64_Encoder_get_RFC4648_URLSAFE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaUtilBase64_Encoder *JavaUtilBase64_Encoder_RFC4648_URLSAFE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilBase64_Encoder, RFC4648_URLSAFE, JavaUtilBase64_Encoder *)

inline JavaUtilBase64_Encoder *JavaUtilBase64_Encoder_get_RFC2045(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaUtilBase64_Encoder *JavaUtilBase64_Encoder_RFC2045;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilBase64_Encoder, RFC2045, JavaUtilBase64_Encoder *)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilBase64_Encoder)

#endif

#if !defined (JavaUtilBase64_Decoder_) && (INCLUDE_ALL_JavaUtilBase64 || defined(INCLUDE_JavaUtilBase64_Decoder))
#define JavaUtilBase64_Decoder_

@class IOSByteArray;
@class JavaIoInputStream;
@class JavaNioByteBuffer;

/*!
 @brief This class implements a decoder for decoding byte data using the
  Base64 encoding scheme as specified in RFC 4648 and RFC 2045.
 <p> The Base64 padding character <code>'='</code> is accepted and
  interpreted as the end of the encoded byte data, but is not
  required. So if the final unit of the encoded byte data only has
  two or three Base64 characters (without the corresponding padding
  character(s) padded), they are decoded as if followed by padding
  character(s). If there is a padding character present in the
  final unit, the correct number of padding character(s) must be
  present, otherwise <code>IllegalArgumentException</code> ( 
 <code>IOException</code> when reading from a Base64 stream) is thrown
  during decoding. 
 <p> Instances of <code>Decoder</code> class are safe for use by
  multiple concurrent threads. 
 <p> Unless otherwise noted, passing a <code>null</code> argument to
  a method of this class will cause a 
 <code>NullPointerException</code> to
  be thrown.
 - seealso: Encoder
 @since 1.8
 */
@interface JavaUtilBase64_Decoder : NSObject
@property (readonly, class, strong) JavaUtilBase64_Decoder *RFC4648 NS_SWIFT_NAME(RFC4648);
@property (readonly, class, strong) JavaUtilBase64_Decoder *RFC4648_URLSAFE NS_SWIFT_NAME(RFC4648_URLSAFE);
@property (readonly, class, strong) JavaUtilBase64_Decoder *RFC2045 NS_SWIFT_NAME(RFC2045);

+ (JavaUtilBase64_Decoder *)RFC4648;

+ (JavaUtilBase64_Decoder *)RFC4648_URLSAFE;

+ (JavaUtilBase64_Decoder *)RFC2045;

#pragma mark Public

/*!
 @brief Decodes all bytes from the input byte array using the <code>Base64</code>
  encoding scheme, writing the results into a newly-allocated output
  byte array.The returned byte array is of the length of the resulting
  bytes.
 @param src the byte array to decode
 @return A newly-allocated byte array containing the decoded bytes.
 @throw IllegalArgumentException
 if <code>src</code> is not in valid Base64 scheme
 */
- (IOSByteArray *)decodeWithByteArray:(IOSByteArray *)src;

/*!
 @brief Decodes all bytes from the input byte array using the <code>Base64</code>
  encoding scheme, writing the results into the given output byte array,
  starting at offset 0.
 <p> It is the responsibility of the invoker of this method to make
  sure the output byte array <code>dst</code> has enough space for decoding
  all bytes from the input byte array. No bytes will be be written to
  the output byte array if the output byte array is not big enough. 
 <p> If the input byte array is not in valid Base64 encoding scheme
  then some bytes may have been written to the output byte array before
  IllegalargumentException is thrown.
 @param src the byte array to decode
 @param dst the output byte array
 @return The number of bytes written to the output byte array
 @throw IllegalArgumentException
 if <code>src</code> is not in valid Base64 scheme, or <code>dst</code>
           does not have enough space for decoding all input bytes.
 */
- (jint)decodeWithByteArray:(IOSByteArray *)src
              withByteArray:(IOSByteArray *)dst;

/*!
 @brief Decodes all bytes from the input byte buffer using the <code>Base64</code>
  encoding scheme, writing the results into a newly-allocated ByteBuffer.
 <p> Upon return, the source buffer's position will be updated to
  its limit; its limit will not have been changed. The returned
  output buffer's position will be zero and its limit will be the
  number of resulting decoded bytes 
 <p> <code>IllegalArgumentException</code> is thrown if the input buffer
  is not in valid Base64 encoding scheme. The position of the input
  buffer will not be advanced in this case.
 @param buffer the ByteBuffer to decode
 @return A newly-allocated byte buffer containing the decoded bytes
 @throw IllegalArgumentException
 if <code>src</code> is not in valid Base64 scheme.
 */
- (JavaNioByteBuffer *)decodeWithJavaNioByteBuffer:(JavaNioByteBuffer *)buffer;

/*!
 @brief Decodes a Base64 encoded String into a newly-allocated byte array
  using the <code>Base64</code> encoding scheme.
 <p> An invocation of this method has exactly the same effect as invoking 
 <code>decode(src.getBytes(StandardCharsets.ISO_8859_1))</code>
 @param src the string to decode
 @return A newly-allocated byte array containing the decoded bytes.
 @throw IllegalArgumentException
 if <code>src</code> is not in valid Base64 scheme
 */
- (IOSByteArray *)decodeWithNSString:(NSString *)src;

/*!
 @brief Returns an input stream for decoding <code>Base64</code> encoded byte stream.
 <p> The <code>read</code>  methods of the returned <code>InputStream</code> will
  throw <code>IOException</code> when reading bytes that cannot be decoded. 
 <p> Closing the returned input stream will close the underlying
  input stream.
 @param is the input stream
 @return the input stream for decoding the specified Base64 encoded
           byte stream
 */
- (JavaIoInputStream *)wrapWithJavaIoInputStream:(JavaIoInputStream *)is;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaUtilBase64_Decoder)

inline JavaUtilBase64_Decoder *JavaUtilBase64_Decoder_get_RFC4648(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaUtilBase64_Decoder *JavaUtilBase64_Decoder_RFC4648;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilBase64_Decoder, RFC4648, JavaUtilBase64_Decoder *)

inline JavaUtilBase64_Decoder *JavaUtilBase64_Decoder_get_RFC4648_URLSAFE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaUtilBase64_Decoder *JavaUtilBase64_Decoder_RFC4648_URLSAFE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilBase64_Decoder, RFC4648_URLSAFE, JavaUtilBase64_Decoder *)

inline JavaUtilBase64_Decoder *JavaUtilBase64_Decoder_get_RFC2045(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaUtilBase64_Decoder *JavaUtilBase64_Decoder_RFC2045;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilBase64_Decoder, RFC2045, JavaUtilBase64_Decoder *)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilBase64_Decoder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilBase64")
