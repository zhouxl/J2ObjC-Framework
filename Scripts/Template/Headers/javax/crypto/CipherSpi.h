//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/crypto/CipherSpi.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxCryptoCipherSpi")
#ifdef RESTRICT_JavaxCryptoCipherSpi
#define INCLUDE_ALL_JavaxCryptoCipherSpi 0
#else
#define INCLUDE_ALL_JavaxCryptoCipherSpi 1
#endif
#undef RESTRICT_JavaxCryptoCipherSpi

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxCryptoCipherSpi_) && (INCLUDE_ALL_JavaxCryptoCipherSpi || defined(INCLUDE_JavaxCryptoCipherSpi))
#define JavaxCryptoCipherSpi_

@class IOSByteArray;
@class JavaNioByteBuffer;
@class JavaSecurityAlgorithmParameters;
@class JavaSecuritySecureRandom;
@protocol JavaSecurityKey;
@protocol JavaSecuritySpecAlgorithmParameterSpec;

/*!
 @brief This class defines the <i>Service Provider Interface</i> (<b>SPI</b>)
  for the <code>Cipher</code> class.
 All the abstract methods in this class must be implemented by each
  cryptographic service provider who wishes to supply the implementation
  of a particular cipher algorithm. 
 <p>In order to create an instance of <code>Cipher</code>, which
  encapsulates an instance of this <code>CipherSpi</code> class, an
  application calls one of the 
 <code>getInstance</code>
  factory methods of the 
 <code>Cipher</code> engine class and specifies the requested 
 <i>transformation</i>.
  Optionally, the application may also specify the name of a provider. 
 <p>A <i>transformation</i> is a string that describes the operation (or
  set of operations) to be performed on the given input, to produce some
  output. A transformation always includes the name of a cryptographic
  algorithm (e.g., <i>DES</i>), and may be followed by a feedback mode and
  padding scheme. 
 <p> A transformation is of the form:<p>
  
 <ul>
  <li>"<i>algorithm/mode/padding</i>" or 
 <p>
  <li>"<i>algorithm</i>"
  </ul>
  
 <P> (in the latter case,
  provider-specific default values for the mode and padding scheme are used).
  For example, the following is a valid transformation:<p>
  
 @code

      Cipher c = Cipher.getInstance("<i>DES/CBC/PKCS5Padding</i>");
   
@endcode
  
 <p>A provider may supply a separate class for each combination
  of <i>algorithm/mode/padding</i>, or may decide to provide more generic
  classes representing sub-transformations corresponding to 
 <i>algorithm</i> or <i>algorithm/mode</i> or <i>algorithm//padding</i>
  (note the double slashes),
  in which case the requested mode and/or padding are set automatically by the 
 <code>getInstance</code> methods of <code>Cipher</code>, which invoke
  the <code>engineSetMode</code> and 
 <code>engineSetPadding</code>
  methods of the provider's subclass of <code>CipherSpi</code>.
  
 <p>A <code>Cipher</code> property in a provider master class may have one of
  the following formats: 
 <ul>
  
 <li>
  @code

      // provider's subclass of "CipherSpi" implements "algName" with
      // pluggable mode and padding     
     <code>Cipher.</code><i>algName</i>
   
@endcode
  
 <li>
  @code

      // provider's subclass of "CipherSpi" implements "algName" in the
      // specified "mode", with pluggable padding     
     <code>Cipher.</code><i>algName/mode</i>
   
@endcode
  
 <li>
  @code

      // provider's subclass of "CipherSpi" implements "algName" with the
      // specified "padding", with pluggable mode     
     <code>Cipher.</code><i>algName//padding</i>
   
@endcode
  
 <li>
  @code

      // provider's subclass of "CipherSpi" implements "algName" with the
      // specified "mode" and "padding"     
     <code>Cipher.</code><i>algName/mode/padding</i>
   
@endcode
  
 </ul>
  
 <p>For example, a provider may supply a subclass of <code>CipherSpi</code>
  that implements <i>DES/ECB/PKCS5Padding</i>, one that implements 
 <i>DES/CBC/PKCS5Padding</i>, one that implements 
 <i>DES/CFB/PKCS5Padding</i>, and yet another one that implements 
 <i>DES/OFB/PKCS5Padding</i>. That provider would have the following 
 <code>Cipher</code> properties in its master class:<p>
  
 <ul>
  
 <li>
  @code

          <code>Cipher.</code><i>DES/ECB/PKCS5Padding</i>
   
@endcode
  
 <li>
  @code

          <code>Cipher.</code><i>DES/CBC/PKCS5Padding</i>
   
@endcode
  
 <li>
  @code

          <code>Cipher.</code><i>DES/CFB/PKCS5Padding</i>
   
@endcode
  
 <li>
  @code

          <code>Cipher.</code><i>DES/OFB/PKCS5Padding</i>
   
@endcode
  
 </ul>
  
 <p>Another provider may implement a class for each of the above modes
  (i.e., one class for <i>ECB</i>, one for <i>CBC</i>, one for <i>CFB</i>,
  and one for <i>OFB</i>), one class for <i>PKCS5Padding</i>,
  and a generic <i>DES</i> class that subclasses from <code>CipherSpi</code>.
  That provider would have the following 
 <code>Cipher</code> properties in its master class:<p>
  
 <ul>
  
 <li>
  @code

          <code>Cipher.</code><i>DES</i>
   
@endcode
  
 </ul>
  
 <p>The <code>getInstance</code> factory method of the <code>Cipher</code>
  engine class follows these rules in order to instantiate a provider's
  implementation of <code>CipherSpi</code> for a
  transformation of the form "<i>algorithm</i>":
  
 <ol>
  <li>
  Check if the provider has registered a subclass of <code>CipherSpi</code>
  for the specified "<i>algorithm</i>".
  <p>If the answer is YES, instantiate this
  class, for whose mode and padding scheme default values (as supplied by
  the provider) are used. 
 <p>If the answer is NO, throw a <code>NoSuchAlgorithmException</code>
  exception. 
 </ol>
  
 <p>The <code>getInstance</code> factory method of the <code>Cipher</code>
  engine class follows these rules in order to instantiate a provider's
  implementation of <code>CipherSpi</code> for a
  transformation of the form "<i>algorithm/mode/padding</i>":
  
 <ol>
  <li>
  Check if the provider has registered a subclass of <code>CipherSpi</code>
  for the specified "<i>algorithm/mode/padding</i>" transformation. 
 <p>If the answer is YES, instantiate it. 
 <p>If the answer is NO, go to the next step.<p>
  <li>
  Check if the provider has registered a subclass of <code>CipherSpi</code>
  for the sub-transformation "<i>algorithm/mode</i>".
  <p>If the answer is YES, instantiate it, and call 
 <code>engineSetPadding(<i>padding</i>)</code> on the new instance. 
 <p>If the answer is NO, go to the next step.<p>
  <li>
  Check if the provider has registered a subclass of <code>CipherSpi</code>
  for the sub-transformation "<i>algorithm//padding</i>" (note the double
  slashes). 
 <p>If the answer is YES, instantiate it, and call 
 <code>engineSetMode(<i>mode</i>)</code> on the new instance. 
 <p>If the answer is NO, go to the next step.<p>
  <li>
  Check if the provider has registered a subclass of <code>CipherSpi</code>
  for the sub-transformation "<i>algorithm</i>".
  <p>If the answer is YES, instantiate it, and call 
 <code>engineSetMode(<i>mode</i>)</code> and 
 <code>engineSetPadding(<i>padding</i>)</code> on the new instance. 
 <p>If the answer is NO, throw a <code>NoSuchAlgorithmException</code>
  exception. 
 </ol>
 @author Jan Luehe
 - seealso: KeyGenerator
 - seealso: SecretKey
 @since 1.4
 */
@interface JavaxCryptoCipherSpi : NSObject

#pragma mark Public

- (instancetype)init;

#pragma mark Protected

/*!
 @brief Encrypts or decrypts data in a single-part operation,
  or finishes a multiple-part operation.
 The data is encrypted or decrypted, depending on how this cipher was
  initialized. 
 <p>The first <code>inputLen</code> bytes in the <code>input</code>
  buffer, starting at <code>inputOffset</code> inclusive, and any input
  bytes that may have been buffered during a previous <code>update</code>
  operation, are processed, with padding (if requested) being applied.
  If an AEAD mode such as GCM/CCM is being used, the authentication
  tag is appended in the case of encryption, or verified in the
  case of decryption.
  The result is stored in a new buffer. 
 <p>Upon finishing, this method resets this cipher object to the state
  it was in when previously initialized via a call to 
 <code>engineInit</code>.
  That is, the object is reset and available to encrypt or decrypt
  (depending on the operation mode that was specified in the call to 
 <code>engineInit</code>) more data. 
 <p>Note: if any exception is thrown, this cipher object may need to
  be reset before it can be used again.
 @param input the input buffer
 @param inputOffset the offset in  <code> input </code>  where the input
   starts
 @param inputLen the input length
 @return the new buffer with the result
 @throw IllegalBlockSizeExceptionif this cipher is a block cipher,
  no padding has been requested (only in encryption mode), and the total
  input length of the data processed by this cipher is not a multiple of
  block size; or if this encryption algorithm is unable to
  process the input data provided.
 @throw BadPaddingExceptionif this cipher is in decryption mode,
  and (un)padding has been requested, but the decrypted data is not
  bounded by the appropriate padding bytes
 @throw AEADBadTagExceptionif this cipher is decrypting in an
  AEAD mode (such as GCM/CCM), and the received authentication tag
  does not match the calculated value
 */
- (IOSByteArray *)engineDoFinalWithByteArray:(IOSByteArray *)input
                                     withInt:(jint)inputOffset
                                     withInt:(jint)inputLen;

/*!
 @brief Encrypts or decrypts data in a single-part operation,
  or finishes a multiple-part operation.
 The data is encrypted or decrypted, depending on how this cipher was
  initialized. 
 <p>The first <code>inputLen</code> bytes in the <code>input</code>
  buffer, starting at <code>inputOffset</code> inclusive, and any input
  bytes that may have been buffered during a previous <code>update</code>
  operation, are processed, with padding (if requested) being applied.
  If an AEAD mode such as GCM/CCM is being used, the authentication
  tag is appended in the case of encryption, or verified in the
  case of decryption.
  The result is stored in the <code>output</code> buffer, starting at 
 <code>outputOffset</code> inclusive. 
 <p>If the <code>output</code> buffer is too small to hold the result,
  a <code>ShortBufferException</code> is thrown. 
 <p>Upon finishing, this method resets this cipher object to the state
  it was in when previously initialized via a call to 
 <code>engineInit</code>.
  That is, the object is reset and available to encrypt or decrypt
  (depending on the operation mode that was specified in the call to 
 <code>engineInit</code>) more data. 
 <p>Note: if any exception is thrown, this cipher object may need to
  be reset before it can be used again.
 @param input the input buffer
 @param inputOffset the offset in  <code> input </code>  where the input
   starts
 @param inputLen the input length
 @param output the buffer for the result
 @param outputOffset the offset in  <code> output </code>  where the result
   is stored
 @return the number of bytes stored in <code>output</code>
 @throw IllegalBlockSizeExceptionif this cipher is a block cipher,
  no padding has been requested (only in encryption mode), and the total
  input length of the data processed by this cipher is not a multiple of
  block size; or if this encryption algorithm is unable to
  process the input data provided.
 @throw ShortBufferExceptionif the given output buffer is too small
  to hold the result
 @throw BadPaddingExceptionif this cipher is in decryption mode,
  and (un)padding has been requested, but the decrypted data is not
  bounded by the appropriate padding bytes
 @throw AEADBadTagExceptionif this cipher is decrypting in an
  AEAD mode (such as GCM/CCM), and the received authentication tag
  does not match the calculated value
 */
- (jint)engineDoFinalWithByteArray:(IOSByteArray *)input
                           withInt:(jint)inputOffset
                           withInt:(jint)inputLen
                     withByteArray:(IOSByteArray *)output
                           withInt:(jint)outputOffset;

/*!
 @brief Encrypts or decrypts data in a single-part operation,
  or finishes a multiple-part operation.
 The data is encrypted or decrypted, depending on how this cipher was
  initialized. 
 <p>All <code>input.remaining()</code> bytes starting at 
 <code>input.position()</code> are processed.
  If an AEAD mode such as GCM/CCM is being used, the authentication
  tag is appended in the case of encryption, or verified in the
  case of decryption.
  The result is stored in the output buffer.
  Upon return, the input buffer's position will be equal
  to its limit; its limit will not have changed. The output buffer's
  position will have advanced by n, where n is the value returned
  by this method; the output buffer's limit will not have changed. 
 <p>If <code>output.remaining()</code> bytes are insufficient to
  hold the result, a <code>ShortBufferException</code> is thrown. 
 <p>Upon finishing, this method resets this cipher object to the state
  it was in when previously initialized via a call to 
 <code>engineInit</code>.
  That is, the object is reset and available to encrypt or decrypt
  (depending on the operation mode that was specified in the call to 
 <code>engineInit</code>) more data. 
 <p>Note: if any exception is thrown, this cipher object may need to
  be reset before it can be used again. 
 <p>Subclasses should consider overriding this method if they can
  process ByteBuffers more efficiently than byte arrays.
 @param input the input ByteBuffer
 @param output the output ByteByffer
 @return the number of bytes stored in <code>output</code>
 @throw IllegalBlockSizeExceptionif this cipher is a block cipher,
  no padding has been requested (only in encryption mode), and the total
  input length of the data processed by this cipher is not a multiple of
  block size; or if this encryption algorithm is unable to
  process the input data provided.
 @throw ShortBufferExceptionif there is insufficient space in the
  output buffer
 @throw BadPaddingExceptionif this cipher is in decryption mode,
  and (un)padding has been requested, but the decrypted data is not
  bounded by the appropriate padding bytes
 @throw AEADBadTagExceptionif this cipher is decrypting in an
  AEAD mode (such as GCM/CCM), and the received authentication tag
  does not match the calculated value
 @throw NullPointerExceptionif either parameter is <CODE>null</CODE>
 @since 1.5
 */
- (jint)engineDoFinalWithJavaNioByteBuffer:(JavaNioByteBuffer *)input
                     withJavaNioByteBuffer:(JavaNioByteBuffer *)output;

/*!
 @brief Returns the block size (in bytes).
 @return the block size (in bytes), or 0 if the underlying algorithm is
  not a block cipher
 */
- (jint)engineGetBlockSize;

/*!
 @brief Returns the initialization vector (IV) in a new buffer.
 <p> This is useful in the context of password-based encryption or
  decryption, where the IV is derived from a user-provided passphrase.
 @return the initialization vector in a new buffer, or null if the
  underlying algorithm does not use an IV, or if the IV has not yet
  been set.
 */
- (IOSByteArray *)engineGetIV;

/*!
 @brief Returns the key size of the given key object in bits.
 <p>This concrete method has been added to this previously-defined
  abstract class. It throws an <code>UnsupportedOperationException</code>
  if it is not overridden by the provider.
 @param key the key object.
 @return the key size of the given key object.
 @throw InvalidKeyExceptionif <code>key</code> is invalid.
 */
- (jint)engineGetKeySizeWithJavaSecurityKey:(id<JavaSecurityKey>)key;

/*!
 @brief Returns the length in bytes that an output buffer would
  need to be in order to hold the result of the next <code>update</code>
  or <code>doFinal</code> operation, given the input length 
 <code>inputLen</code> (in bytes).
 <p>This call takes into account any unprocessed (buffered) data from a
  previous <code>update</code> call, padding, and AEAD tagging. 
 <p>The actual output length of the next <code>update</code> or 
 <code>doFinal</code> call may be smaller than the length returned by
  this method.
 @param inputLen the input length (in bytes)
 @return the required output buffer size (in bytes)
 */
- (jint)engineGetOutputSizeWithInt:(jint)inputLen;

/*!
 @brief Returns the parameters used with this cipher.
 <p>The returned parameters may be the same that were used to initialize
  this cipher, or may contain a combination of default and random
  parameter values used by the underlying cipher implementation if this
  cipher requires algorithm parameters but was not initialized with any.
 @return the parameters used with this cipher, or null if this cipher
  does not use any parameters.
 */
- (JavaSecurityAlgorithmParameters *)engineGetParameters;

/*!
 @brief Initializes this cipher with a key, a set of
  algorithm parameters, and a source of randomness.
 <p>The cipher is initialized for one of the following four operations:
  encryption, decryption, key wrapping or key unwrapping, depending on
  the value of <code>opmode</code>.
  
 <p>If this cipher requires any algorithm parameters and 
 <code>params</code> is null, the underlying cipher implementation is
  supposed to generate the required parameters itself (using
  provider-specific default or random values) if it is being
  initialized for encryption or key wrapping, and raise an 
 <code>InvalidAlgorithmParameterException</code> if it is being
  initialized for decryption or key unwrapping.
  The generated parameters can be retrieved using 
 <code>engineGetParameters</code> or 
 <code>engineGetIV</code> (if the parameter is an IV). 
 <p>If this cipher requires algorithm parameters that cannot be
  derived from the input parameters, and there are no reasonable
  provider-specific default values, initialization will
  necessarily fail. 
 <p>If this cipher (including its underlying feedback or padding scheme)
  requires any random bytes (e.g., for parameter generation), it will get
  them from <code>random</code>.
  
 <p>Note that when a Cipher object is initialized, it loses all
  previously-acquired state. In other words, initializing a Cipher is
  equivalent to creating a new instance of that Cipher and initializing
  it.
 @param opmode the operation mode of this cipher (this is one of  the following:
    <code>
  ENCRYPT_MODE </code> ,  <code> DECRYPT_MODE </code> ,   <code>
  WRAP_MODE </code>  or  <code> UNWRAP_MODE </code> )
 @param key the encryption key
 @param params the algorithm parameters
 @param random the source of randomness
 @throw InvalidKeyExceptionif the given key is inappropriate for
  initializing this cipher
 @throw InvalidAlgorithmParameterExceptionif the given algorithm
  parameters are inappropriate for this cipher,
  or if this cipher requires
  algorithm parameters and <code>params</code> is null.
 */
- (void)engineInitWithInt:(jint)opmode
      withJavaSecurityKey:(id<JavaSecurityKey>)key
withJavaSecurityAlgorithmParameters:(JavaSecurityAlgorithmParameters *)params
withJavaSecuritySecureRandom:(JavaSecuritySecureRandom *)random;

/*!
 @brief Initializes this cipher with a key, a set of
  algorithm parameters, and a source of randomness.
 <p>The cipher is initialized for one of the following four operations:
  encryption, decryption, key wrapping or key unwrapping, depending on
  the value of <code>opmode</code>.
  
 <p>If this cipher requires any algorithm parameters and 
 <code>params</code> is null, the underlying cipher implementation is
  supposed to generate the required parameters itself (using
  provider-specific default or random values) if it is being
  initialized for encryption or key wrapping, and raise an 
 <code>InvalidAlgorithmParameterException</code> if it is being
  initialized for decryption or key unwrapping.
  The generated parameters can be retrieved using 
 <code>engineGetParameters</code> or 
 <code>engineGetIV</code> (if the parameter is an IV). 
 <p>If this cipher requires algorithm parameters that cannot be
  derived from the input parameters, and there are no reasonable
  provider-specific default values, initialization will
  necessarily fail. 
 <p>If this cipher (including its underlying feedback or padding scheme)
  requires any random bytes (e.g., for parameter generation), it will get
  them from <code>random</code>.
  
 <p>Note that when a Cipher object is initialized, it loses all
  previously-acquired state. In other words, initializing a Cipher is
  equivalent to creating a new instance of that Cipher and initializing
  it.
 @param opmode the operation mode of this cipher (this is one of  the following:
    <code>
  ENCRYPT_MODE </code> ,  <code> DECRYPT_MODE </code> ,   <code>
  WRAP_MODE </code>  or  <code> UNWRAP_MODE </code> )
 @param key the encryption key
 @param params the algorithm parameters
 @param random the source of randomness
 @throw InvalidKeyExceptionif the given key is inappropriate for
  initializing this cipher
 @throw InvalidAlgorithmParameterExceptionif the given algorithm
  parameters are inappropriate for this cipher,
  or if this cipher requires
  algorithm parameters and <code>params</code> is null.
 */
- (void)engineInitWithInt:(jint)opmode
      withJavaSecurityKey:(id<JavaSecurityKey>)key
withJavaSecuritySpecAlgorithmParameterSpec:(id<JavaSecuritySpecAlgorithmParameterSpec>)params
withJavaSecuritySecureRandom:(JavaSecuritySecureRandom *)random;

/*!
 @brief Initializes this cipher with a key and a source
  of randomness.
 <p>The cipher is initialized for one of the following four operations:
  encryption, decryption, key wrapping or key unwrapping, depending on
  the value of <code>opmode</code>.
  
 <p>If this cipher requires any algorithm parameters that cannot be
  derived from the given <code>key</code>, the underlying cipher
  implementation is supposed to generate the required parameters itself
  (using provider-specific default or random values) if it is being
  initialized for encryption or key wrapping, and raise an 
 <code>InvalidKeyException</code> if it is being
  initialized for decryption or key unwrapping.
  The generated parameters can be retrieved using 
 <code>engineGetParameters</code> or 
 <code>engineGetIV</code> (if the parameter is an IV). 
 <p>If this cipher requires algorithm parameters that cannot be
  derived from the input parameters, and there are no reasonable
  provider-specific default values, initialization will
  necessarily fail. 
 <p>If this cipher (including its underlying feedback or padding scheme)
  requires any random bytes (e.g., for parameter generation), it will get
  them from <code>random</code>.
  
 <p>Note that when a Cipher object is initialized, it loses all
  previously-acquired state. In other words, initializing a Cipher is
  equivalent to creating a new instance of that Cipher and initializing
  it.
 @param opmode the operation mode of this cipher (this is one of  the following:
    <code>
  ENCRYPT_MODE </code> ,  <code> DECRYPT_MODE </code> ,   <code>
  WRAP_MODE </code>  or  <code> UNWRAP_MODE </code> )
 @param key the encryption key
 @param random the source of randomness
 @throw InvalidKeyExceptionif the given key is inappropriate for
  initializing this cipher, or requires
  algorithm parameters that cannot be
  determined from the given key.
 */
- (void)engineInitWithInt:(jint)opmode
      withJavaSecurityKey:(id<JavaSecurityKey>)key
withJavaSecuritySecureRandom:(JavaSecuritySecureRandom *)random;

/*!
 @brief Sets the mode of this cipher.
 @param mode the cipher mode
 @throw NoSuchAlgorithmExceptionif the requested cipher mode does
  not exist
 */
- (void)engineSetModeWithNSString:(NSString *)mode;

/*!
 @brief Sets the padding mechanism of this cipher.
 @param padding the padding mechanism
 @throw NoSuchPaddingExceptionif the requested padding mechanism
  does not exist
 */
- (void)engineSetPaddingWithNSString:(NSString *)padding;

/*!
 @brief Unwrap a previously wrapped key.
 <p>This concrete method has been added to this previously-defined
  abstract class. (For backwards compatibility, it cannot be abstract.)
  It may be overridden by a provider to unwrap a previously wrapped key.
  Such an override is expected to throw an InvalidKeyException if
  the given wrapped key cannot be unwrapped.
  If this method is not overridden, it always throws an
  UnsupportedOperationException.
 @param wrappedKey the key to be unwrapped.
 @param wrappedKeyAlgorithm the algorithm associated with the wrapped  key.
 @param wrappedKeyType the type of the wrapped key. This is one of  
  <code> SECRET_KEY </code> ,  <code> PRIVATE_KEY </code> , or
    <code> PUBLIC_KEY </code> .
 @return the unwrapped key.
 @throw NoSuchAlgorithmExceptionif no installed providers
  can create keys of type <code>wrappedKeyType</code> for the 
 <code>wrappedKeyAlgorithm</code>.
 @throw InvalidKeyExceptionif <code>wrappedKey</code> does not
  represent a wrapped key of type <code>wrappedKeyType</code> for
  the <code>wrappedKeyAlgorithm</code>.
 */
- (id<JavaSecurityKey>)engineUnwrapWithByteArray:(IOSByteArray *)wrappedKey
                                    withNSString:(NSString *)wrappedKeyAlgorithm
                                         withInt:(jint)wrappedKeyType;

/*!
 @brief Continues a multiple-part encryption or decryption operation
  (depending on how this cipher was initialized), processing another data
  part.
 <p>The first <code>inputLen</code> bytes in the <code>input</code>
  buffer, starting at <code>inputOffset</code> inclusive, are processed,
  and the result is stored in a new buffer.
 @param input the input buffer
 @param inputOffset the offset in  <code> input </code>  where the input
   starts
 @param inputLen the input length
 @return the new buffer with the result, or null if the underlying
  cipher is a block cipher and the input data is too short to result in a
  new block.
 */
- (IOSByteArray *)engineUpdateWithByteArray:(IOSByteArray *)input
                                    withInt:(jint)inputOffset
                                    withInt:(jint)inputLen;

/*!
 @brief Continues a multiple-part encryption or decryption operation
  (depending on how this cipher was initialized), processing another data
  part.
 <p>The first <code>inputLen</code> bytes in the <code>input</code>
  buffer, starting at <code>inputOffset</code> inclusive, are processed,
  and the result is stored in the <code>output</code> buffer, starting at 
 <code>outputOffset</code> inclusive. 
 <p>If the <code>output</code> buffer is too small to hold the result,
  a <code>ShortBufferException</code> is thrown.
 @param input the input buffer
 @param inputOffset the offset in  <code> input </code>  where the input
   starts
 @param inputLen the input length
 @param output the buffer for the result
 @param outputOffset the offset in  <code> output </code>  where the result
   is stored
 @return the number of bytes stored in <code>output</code>
 @throw ShortBufferExceptionif the given output buffer is too small
  to hold the result
 */
- (jint)engineUpdateWithByteArray:(IOSByteArray *)input
                          withInt:(jint)inputOffset
                          withInt:(jint)inputLen
                    withByteArray:(IOSByteArray *)output
                          withInt:(jint)outputOffset;

/*!
 @brief Continues a multiple-part encryption or decryption operation
  (depending on how this cipher was initialized), processing another data
  part.
 <p>All <code>input.remaining()</code> bytes starting at 
 <code>input.position()</code> are processed. The result is stored
  in the output buffer.
  Upon return, the input buffer's position will be equal
  to its limit; its limit will not have changed. The output buffer's
  position will have advanced by n, where n is the value returned
  by this method; the output buffer's limit will not have changed. 
 <p>If <code>output.remaining()</code> bytes are insufficient to
  hold the result, a <code>ShortBufferException</code> is thrown. 
 <p>Subclasses should consider overriding this method if they can
  process ByteBuffers more efficiently than byte arrays.
 @param input the input ByteBuffer
 @param output the output ByteByffer
 @return the number of bytes stored in <code>output</code>
 @throw ShortBufferExceptionif there is insufficient space in the
  output buffer
 @throw NullPointerExceptionif either parameter is <CODE>null</CODE>
 @since 1.5
 */
- (jint)engineUpdateWithJavaNioByteBuffer:(JavaNioByteBuffer *)input
                    withJavaNioByteBuffer:(JavaNioByteBuffer *)output;

/*!
 @brief Continues a multi-part update of the Additional Authentication
  Data (AAD), using a subset of the provided buffer.
 <p>
  Calls to this method provide AAD to the cipher when operating in
  modes such as AEAD (GCM/CCM).  If this cipher is operating in
  either GCM or CCM mode, all AAD must be supplied before beginning
  operations on the ciphertext (via the <code>update</code> and <code>doFinal</code>
  methods).
 @param src the buffer containing the AAD
 @param offset the offset in <code>src</code>  where the AAD input starts
 @param len the number of AAD bytes
 @throw IllegalStateExceptionif this cipher is in a wrong state
  (e.g., has not been initialized), does not accept AAD, or if
  operating in either GCM or CCM mode and one of the <code>update</code>
  methods has already been called for the active
  encryption/decryption operation
 @throw UnsupportedOperationExceptionif this method
  has not been overridden by an implementation
 @since 1.7
 */
- (void)engineUpdateAADWithByteArray:(IOSByteArray *)src
                             withInt:(jint)offset
                             withInt:(jint)len;

/*!
 @brief Continues a multi-part update of the Additional Authentication
  Data (AAD).
 <p>
  Calls to this method provide AAD to the cipher when operating in
  modes such as AEAD (GCM/CCM).  If this cipher is operating in
  either GCM or CCM mode, all AAD must be supplied before beginning
  operations on the ciphertext (via the <code>update</code> and <code>doFinal</code>
  methods). 
 <p>
  All <code>src.remaining()</code> bytes starting at 
 <code>src.position()</code> are processed.
  Upon return, the input buffer's position will be equal
  to its limit; its limit will not have changed.
 @param src the buffer containing the AAD
 @throw IllegalStateExceptionif this cipher is in a wrong state
  (e.g., has not been initialized), does not accept AAD, or if
  operating in either GCM or CCM mode and one of the <code>update</code>
  methods has already been called for the active
  encryption/decryption operation
 @throw UnsupportedOperationExceptionif this method
  has not been overridden by an implementation
 @since 1.7
 */
- (void)engineUpdateAADWithJavaNioByteBuffer:(JavaNioByteBuffer *)src;

/*!
 @brief Wrap a key.
 <p>This concrete method has been added to this previously-defined
  abstract class. (For backwards compatibility, it cannot be abstract.)
  It may be overridden by a provider to wrap a key.
  Such an override is expected to throw an IllegalBlockSizeException or
  InvalidKeyException (under the specified circumstances),
  if the given key cannot be wrapped.
  If this method is not overridden, it always throws an
  UnsupportedOperationException.
 @param key the key to be wrapped.
 @return the wrapped key.
 @throw IllegalBlockSizeExceptionif this cipher is a block cipher,
  no padding has been requested, and the length of the encoding of the
  key to be wrapped is not a multiple of the block size.
 @throw InvalidKeyExceptionif it is impossible or unsafe to
  wrap the key with this cipher (e.g., a hardware protected key is
  being passed to a software-only cipher).
 */
- (IOSByteArray *)engineWrapWithJavaSecurityKey:(id<JavaSecurityKey>)key;

#pragma mark Package-Private

+ (jint)getTempArraySizeWithInt:(jint)totalSize;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxCryptoCipherSpi)

FOUNDATION_EXPORT void JavaxCryptoCipherSpi_init(JavaxCryptoCipherSpi *self);

FOUNDATION_EXPORT jint JavaxCryptoCipherSpi_getTempArraySizeWithInt_(jint totalSize);

J2OBJC_TYPE_LITERAL_HEADER(JavaxCryptoCipherSpi)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxCryptoCipherSpi")
