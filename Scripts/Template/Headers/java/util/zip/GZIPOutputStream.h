//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/zip/GZIPOutputStream.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilZipGZIPOutputStream")
#ifdef RESTRICT_JavaUtilZipGZIPOutputStream
#define INCLUDE_ALL_JavaUtilZipGZIPOutputStream 0
#else
#define INCLUDE_ALL_JavaUtilZipGZIPOutputStream 1
#endif
#undef RESTRICT_JavaUtilZipGZIPOutputStream

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilZipGZIPOutputStream_) && (INCLUDE_ALL_JavaUtilZipGZIPOutputStream || defined(INCLUDE_JavaUtilZipGZIPOutputStream))
#define JavaUtilZipGZIPOutputStream_

#define RESTRICT_JavaUtilZipDeflaterOutputStream 1
#define INCLUDE_JavaUtilZipDeflaterOutputStream 1
#include "../../../java/util/zip/DeflaterOutputStream.h"

@class IOSByteArray;
@class JavaIoOutputStream;
@class JavaUtilZipCRC32;
@class JavaUtilZipDeflater;

/*!
 @brief This class implements a stream filter for writing compressed data in
  the GZIP file format.
 @author David Connelly
 */
@interface JavaUtilZipGZIPOutputStream : JavaUtilZipDeflaterOutputStream {
 @public
  /*!
   @brief CRC-32 of uncompressed data.
   */
  JavaUtilZipCRC32 *crc_;
}

#pragma mark Public

/*!
 @brief Creates a new output stream with a default buffer size.
 <p>The new output stream instance is created as if by invoking
  the 2-argument constructor GZIPOutputStream(out, false).
 @param outArg the output stream
 @throw IOExceptionIf an I/O error has occurred.
 */
- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg;

/*!
 @brief Creates a new output stream with a default buffer size and
  the specified flush mode.
 @param outArg the output stream
 @param syncFlush if 
 <code>true</code>  invocation of the inherited         <code>flush()</code>
   method of         this instance flushes the compressor with flush mode
          <code>Deflater.SYNC_FLUSH</code>
   before flushing the output         stream, otherwise only flushes the output stream
 @throw IOExceptionIf an I/O error has occurred.
 @since 1.7
 */
- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                                         withBoolean:(jboolean)syncFlush;

/*!
 @brief Creates a new output stream with the specified buffer size.
 <p>The new output stream instance is created as if by invoking
  the 3-argument constructor GZIPOutputStream(out, size, false).
 @param outArg the output stream
 @param size the output buffer size
 @throw IOExceptionIf an I/O error has occurred.
 @throw IllegalArgumentExceptionif size is <= 0
 */
- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                                             withInt:(jint)size;

/*!
 @brief Creates a new output stream with the specified buffer size and
  flush mode.
 @param outArg the output stream
 @param size the output buffer size
 @param syncFlush if 
 <code>true</code>  invocation of the inherited         <code>flush()</code>
   method of         this instance flushes the compressor with flush mode
          <code>Deflater.SYNC_FLUSH</code>
   before flushing the output         stream, otherwise only flushes the output stream
 @throw IOExceptionIf an I/O error has occurred.
 @throw IllegalArgumentExceptionif size is <= 0
 @since 1.7
 */
- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                                             withInt:(jint)size
                                         withBoolean:(jboolean)syncFlush;

/*!
 @brief Finishes writing compressed data to the output stream without closing
  the underlying stream.Use this method when applying multiple filters
  in succession to the same output stream.
 @throw IOExceptionif an I/O error has occurred
 */
- (void)finish;

/*!
 @brief Writes array of bytes to the compressed output stream.This method
  will block until all the bytes are written.
 @param buf the data to be written
 @param off the start offset of the data
 @param len the length of the data
 @throw IOExceptionIf an I/O error has occurred.
 */
- (void)writeWithByteArray:(IOSByteArray *)buf
                   withInt:(jint)off
                   withInt:(jint)len;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)arg0
                             withJavaUtilZipDeflater:(JavaUtilZipDeflater *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)arg0
                             withJavaUtilZipDeflater:(JavaUtilZipDeflater *)arg1
                                         withBoolean:(jboolean)arg2 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)arg0
                             withJavaUtilZipDeflater:(JavaUtilZipDeflater *)arg1
                                             withInt:(jint)arg2 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)arg0
                             withJavaUtilZipDeflater:(JavaUtilZipDeflater *)arg1
                                             withInt:(jint)arg2
                                         withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipGZIPOutputStream)

J2OBJC_FIELD_SETTER(JavaUtilZipGZIPOutputStream, crc_, JavaUtilZipCRC32 *)

FOUNDATION_EXPORT void JavaUtilZipGZIPOutputStream_initWithJavaIoOutputStream_withInt_(JavaUtilZipGZIPOutputStream *self, JavaIoOutputStream *outArg, jint size);

FOUNDATION_EXPORT JavaUtilZipGZIPOutputStream *new_JavaUtilZipGZIPOutputStream_initWithJavaIoOutputStream_withInt_(JavaIoOutputStream *outArg, jint size) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipGZIPOutputStream *create_JavaUtilZipGZIPOutputStream_initWithJavaIoOutputStream_withInt_(JavaIoOutputStream *outArg, jint size);

FOUNDATION_EXPORT void JavaUtilZipGZIPOutputStream_initWithJavaIoOutputStream_withInt_withBoolean_(JavaUtilZipGZIPOutputStream *self, JavaIoOutputStream *outArg, jint size, jboolean syncFlush);

FOUNDATION_EXPORT JavaUtilZipGZIPOutputStream *new_JavaUtilZipGZIPOutputStream_initWithJavaIoOutputStream_withInt_withBoolean_(JavaIoOutputStream *outArg, jint size, jboolean syncFlush) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipGZIPOutputStream *create_JavaUtilZipGZIPOutputStream_initWithJavaIoOutputStream_withInt_withBoolean_(JavaIoOutputStream *outArg, jint size, jboolean syncFlush);

FOUNDATION_EXPORT void JavaUtilZipGZIPOutputStream_initWithJavaIoOutputStream_(JavaUtilZipGZIPOutputStream *self, JavaIoOutputStream *outArg);

FOUNDATION_EXPORT JavaUtilZipGZIPOutputStream *new_JavaUtilZipGZIPOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipGZIPOutputStream *create_JavaUtilZipGZIPOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg);

FOUNDATION_EXPORT void JavaUtilZipGZIPOutputStream_initWithJavaIoOutputStream_withBoolean_(JavaUtilZipGZIPOutputStream *self, JavaIoOutputStream *outArg, jboolean syncFlush);

FOUNDATION_EXPORT JavaUtilZipGZIPOutputStream *new_JavaUtilZipGZIPOutputStream_initWithJavaIoOutputStream_withBoolean_(JavaIoOutputStream *outArg, jboolean syncFlush) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipGZIPOutputStream *create_JavaUtilZipGZIPOutputStream_initWithJavaIoOutputStream_withBoolean_(JavaIoOutputStream *outArg, jboolean syncFlush);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipGZIPOutputStream)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilZipGZIPOutputStream")
