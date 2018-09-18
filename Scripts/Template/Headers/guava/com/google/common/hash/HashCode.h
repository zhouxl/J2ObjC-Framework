//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/hash/HashCode.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonHashHashCode")
#ifdef RESTRICT_ComGoogleCommonHashHashCode
#define INCLUDE_ALL_ComGoogleCommonHashHashCode 0
#else
#define INCLUDE_ALL_ComGoogleCommonHashHashCode 1
#endif
#undef RESTRICT_ComGoogleCommonHashHashCode

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonHashHashCode_) && (INCLUDE_ALL_ComGoogleCommonHashHashCode || defined(INCLUDE_ComGoogleCommonHashHashCode))
#define ComGoogleCommonHashHashCode_

@class IOSByteArray;

/*!
 @brief An immutable hash code of arbitrary bit length.
 @author Dimitris Andreou
 @author Kurt Alfred Kluever
 @since 11.0
 */
@interface ComGoogleCommonHashHashCode : NSObject

#pragma mark Public

/*!
 @brief Returns the value of this hash code as a byte array.The caller may modify the byte array;
  changes to it will <i>not</i> be reflected in this <code>HashCode</code> object or any other arrays
  returned by this method.
 */
- (IOSByteArray *)asBytes;

/*!
 @brief Returns the first four bytes of hashcode's bytes, converted to an 
 <code>int</code> value in little-endian order.
 @throw IllegalStateExceptionif <code>bits() < 32</code>
 */
- (jint)asInt;

/*!
 @brief Returns the first eight bytes of hashcode's bytes, converted to a 
 <code>long</code> value in little-endian order.
 @throw IllegalStateExceptionif <code>bits() < 64</code>
 */
- (jlong)asLong;

/*!
 @brief Returns the number of bits in this hash code; a positive multiple of 8.
 */
- (jint)bits;

/*!
 @brief Returns <code>true</code> if <code>object</code> is a <code>HashCode</code> instance with the identical byte
  representation to this hash code.
 <p><b>Security note:</b> this method uses a constant-time (not short-circuiting) implementation
  to protect against <a href="http://en.wikipedia.org/wiki/Timing_attack">timing attacks</a>.
 */
- (jboolean)isEqual:(id __nullable)object;

/*!
 @brief Creates a <code>HashCode</code> from a byte array.The array is defensively copied to preserve the
  immutability contract of <code>HashCode</code>.
 The array cannot be empty.
 @since 15.0 (since 12.0 in HashCodes)
 */
+ (ComGoogleCommonHashHashCode *)fromBytesWithByteArray:(IOSByteArray *)bytes;

/*!
 @brief Creates a 32-bit <code>HashCode</code> representation of the given int value.The underlying bytes
  are interpreted in little endian order.
 @since 15.0 (since 12.0 in HashCodes)
 */
+ (ComGoogleCommonHashHashCode *)fromIntWithInt:(jint)hash_;

/*!
 @brief Creates a 64-bit <code>HashCode</code> representation of the given long value.The underlying bytes
  are interpreted in little endian order.
 @since 15.0 (since 12.0 in HashCodes)
 */
+ (ComGoogleCommonHashHashCode *)fromLongWithLong:(jlong)hash_;

/*!
 @brief Creates a <code>HashCode</code> from a hexadecimal (<code>base 16</code>) encoded string.The string must
  be at least 2 characters long, and contain only valid, lower-cased hexadecimal characters.
 <p>This method accepts the exact format generated by <code>toString</code>. If you require more
  lenient <code>base 16</code> decoding, please use <code>com.google.common.io.BaseEncoding</code>
  (and pass the result to <code>fromBytes</code>).
 @since 15.0
 */
+ (ComGoogleCommonHashHashCode *)fromStringWithNSString:(NSString *)string;

/*!
 @brief Returns a "Java hash code" for this <code>HashCode</code> instance; this is well-defined (so, for
  example, you can safely put <code>HashCode</code> instances into a <code>HashSet</code>) but is otherwise
  probably not what you want to use.
 */
- (NSUInteger)hash;

/*!
 @brief If this hashcode has enough bits, returns <code>asLong()</code>, otherwise returns a <code>long</code>
  value with <code>asBytes()</code> as the least-significant bytes and <code>0x00</code> as the remaining
  most-significant bytes.
 @since 14.0 (since 11.0 as <code>Hashing.padToLong(HashCode)</code>)
 */
- (jlong)padToLong;

/*!
 @brief Returns a string containing each byte of <code>asBytes</code>, in order, as a two-digit unsigned
  hexadecimal number in lower case.
 <p>Note that if the output is considered to be a single hexadecimal number, this hash code's
  bytes are the <i>big-endian</i> representation of that number. This may be surprising since
  everything else in the hashing API uniformly treats multibyte values as little-endian. But this
  format conveniently matches that of utilities such as the UNIX <code>md5sum</code> command. 
 <p>To create a <code>HashCode</code> from its string representation, see <code>fromString</code>.
 */
- (NSString *)description;

/*!
 @brief Copies bytes from this hash code into <code>dest</code>.
 @param dest the byte array into which the hash code will be written
 @param offset the start offset in the data
 @param maxLength the maximum number of bytes to write
 @return the number of bytes written to <code>dest</code>
 @throw IndexOutOfBoundsExceptionif there is not enough room in <code>dest</code>
 */
- (jint)writeBytesToWithByteArray:(IOSByteArray *)dest
                          withInt:(jint)offset
                          withInt:(jint)maxLength;

#pragma mark Package-Private

- (instancetype __nonnull)init;

/*!
 @brief Returns whether this <code>HashCode</code> and that <code>HashCode</code> have the same value, given that
  they have the same number of bits.
 */
- (jboolean)equalsSameBitsWithComGoogleCommonHashHashCode:(ComGoogleCommonHashHashCode *)that;

/*!
 @brief Creates a <code>HashCode</code> from a byte array.The array is <i>not</i> copied defensively, so it
  must be handed-off so as to preserve the immutability contract of <code>HashCode</code>.
 */
+ (ComGoogleCommonHashHashCode *)fromBytesNoCopyWithByteArray:(IOSByteArray *)bytes;

/*!
 @brief Returns a mutable view of the underlying bytes for the given <code>HashCode</code> if it is a
  byte-based hashcode.Otherwise it returns <code>HashCode.asBytes</code>.
 Do <i>not</i> mutate this
  array or else you will break the immutability contract of <code>HashCode</code>.
 */
- (IOSByteArray *)getBytesInternal;

- (void)writeBytesToImplWithByteArray:(IOSByteArray *)dest
                              withInt:(jint)offset
                              withInt:(jint)maxLength;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonHashHashCode)

FOUNDATION_EXPORT void ComGoogleCommonHashHashCode_init(ComGoogleCommonHashHashCode *self);

FOUNDATION_EXPORT ComGoogleCommonHashHashCode *ComGoogleCommonHashHashCode_fromIntWithInt_(jint hash_);

FOUNDATION_EXPORT ComGoogleCommonHashHashCode *ComGoogleCommonHashHashCode_fromLongWithLong_(jlong hash_);

FOUNDATION_EXPORT ComGoogleCommonHashHashCode *ComGoogleCommonHashHashCode_fromBytesWithByteArray_(IOSByteArray *bytes);

FOUNDATION_EXPORT ComGoogleCommonHashHashCode *ComGoogleCommonHashHashCode_fromBytesNoCopyWithByteArray_(IOSByteArray *bytes);

FOUNDATION_EXPORT ComGoogleCommonHashHashCode *ComGoogleCommonHashHashCode_fromStringWithNSString_(NSString *string);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashHashCode)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonHashHashCode")
