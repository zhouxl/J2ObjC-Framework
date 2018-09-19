//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/MessageDigestSpi.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityMessageDigestSpi")
#ifdef RESTRICT_JavaSecurityMessageDigestSpi
#define INCLUDE_ALL_JavaSecurityMessageDigestSpi 0
#else
#define INCLUDE_ALL_JavaSecurityMessageDigestSpi 1
#endif
#undef RESTRICT_JavaSecurityMessageDigestSpi

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityMessageDigestSpi_) && (INCLUDE_ALL_JavaSecurityMessageDigestSpi || defined(INCLUDE_JavaSecurityMessageDigestSpi))
#define JavaSecurityMessageDigestSpi_

@class IOSByteArray;
@class JavaNioByteBuffer;

/*!
 @brief This class defines the <i>Service Provider Interface</i> (<b>SPI</b>)
  for the <code>MessageDigest</code> class, which provides the functionality
  of a message digest algorithm, such as MD5 or SHA.Message digests are
  secure one-way hash functions that take arbitrary-sized data and output a
  fixed-length hash value.
 <p> All the abstract methods in this class must be implemented by a
  cryptographic service provider who wishes to supply the implementation
  of a particular message digest algorithm. 
 <p> Implementations are free to implement the Cloneable interface.
 @author Benjamin Renaud
 - seealso: MessageDigest
 */
@interface JavaSecurityMessageDigestSpi : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Returns a clone if the implementation is cloneable.
 @return a clone if the implementation is cloneable.
 @throw CloneNotSupportedExceptionif this is called on an
  implementation that does not support <code>Cloneable</code>.
 */
- (id)java_clone;

#pragma mark Protected

/*!
 @brief Completes the hash computation by performing final
  operations such as padding.Once <code>engineDigest</code> has
  been called, the engine should be reset (see 
 <code>engineReset</code>).
 Resetting is the responsibility of the
  engine implementor.
 @return the array of bytes for the resulting hash value.
 */
- (IOSByteArray *)engineDigest;

/*!
 @brief Completes the hash computation by performing final
  operations such as padding.Once <code>engineDigest</code> has
  been called, the engine should be reset (see 
 <code>engineReset</code>).
 Resetting is the responsibility of the
  engine implementor.
  This method should be abstract, but we leave it concrete for
  binary compatibility.  Knowledgeable providers should override this
  method.
 @param buf the output buffer in which to store the digest
 @param offset offset to start from in the output buffer
 @param len number of bytes within buf allotted for the digest.  Both this default implementation and the SUN provider do not
   return partial digests.  The presence of this parameter is solely
   for consistency in our API's.  If the value of this parameter is less
   than the actual digest length, the method will throw a DigestException.
   This parameter is ignored if its value is greater than or equal to
   the actual digest length.
 @return the length of the digest stored in the output buffer.
 @throw DigestExceptionif an error occurs.
 @since 1.2
 */
- (jint)engineDigestWithByteArray:(IOSByteArray *)buf
                          withInt:(jint)offset
                          withInt:(jint)len;

/*!
 @brief Returns the digest length in bytes.
 <p>This concrete method has been added to this previously-defined
  abstract class. (For backwards compatibility, it cannot be abstract.) 
 <p>The default behavior is to return 0. 
 <p>This method may be overridden by a provider to return the digest
  length.
 @return the digest length in bytes.
 @since 1.2
 */
- (jint)engineGetDigestLength;

/*!
 @brief Resets the digest for further use.
 */
- (void)engineReset;

/*!
 @brief Updates the digest using the specified byte.
 @param input the byte to use for the update.
 */
- (void)engineUpdateWithByte:(jbyte)input;

/*!
 @brief Updates the digest using the specified array of bytes,
  starting at the specified offset.
 @param input the array of bytes to use for the update.
 @param offset the offset to start from in the array of bytes.
 @param len the number of bytes to use, starting at  
  <code> offset </code> .
 */
- (void)engineUpdateWithByteArray:(IOSByteArray *)input
                          withInt:(jint)offset
                          withInt:(jint)len;

/*!
 @brief Update the digest using the specified ByteBuffer.The digest is
  updated using the <code>input.remaining()</code> bytes starting
  at <code>input.position()</code>.
 Upon return, the buffer's position will be equal to its limit;
  its limit will not have changed.
 @param input the ByteBuffer
 @since 1.5
 */
- (void)engineUpdateWithJavaNioByteBuffer:(JavaNioByteBuffer *)input;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityMessageDigestSpi)

FOUNDATION_EXPORT void JavaSecurityMessageDigestSpi_init(JavaSecurityMessageDigestSpi *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityMessageDigestSpi)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityMessageDigestSpi")
