//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/zip/GZIPInputStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilZipGZIPInputStream")
#ifdef RESTRICT_JavaUtilZipGZIPInputStream
#define INCLUDE_ALL_JavaUtilZipGZIPInputStream 0
#else
#define INCLUDE_ALL_JavaUtilZipGZIPInputStream 1
#endif
#undef RESTRICT_JavaUtilZipGZIPInputStream

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilZipGZIPInputStream_) && (INCLUDE_ALL_JavaUtilZipGZIPInputStream || defined(INCLUDE_JavaUtilZipGZIPInputStream))
#define JavaUtilZipGZIPInputStream_

#define RESTRICT_JavaUtilZipInflaterInputStream 1
#define INCLUDE_JavaUtilZipInflaterInputStream 1
#include "java/util/zip/InflaterInputStream.h"

@class IOSByteArray;
@class JavaIoInputStream;
@class JavaUtilZipCRC32;
@class JavaUtilZipInflater;

/*!
 @brief This class implements a stream filter for reading compressed data in
  the GZIP file format.
 - seealso: InflaterInputStream
 @author David Connelly
 */
@interface JavaUtilZipGZIPInputStream : JavaUtilZipInflaterInputStream {
 @public
  /*!
   @brief CRC-32 for uncompressed data.
   */
  JavaUtilZipCRC32 *crc_;
  /*!
   @brief Indicates end of input stream.
   */
  jboolean eos_;
}
@property (readonly, class) jint GZIP_MAGIC NS_SWIFT_NAME(GZIP_MAGIC);

+ (jint)GZIP_MAGIC;

#pragma mark Public

/*!
 @brief Creates a new input stream with a default buffer size.
 @param inArg the input stream
 @throw ZipExceptionif a GZIP format error has occurred or the
                          compression method used is unsupported
 @throw IOExceptionif an I/O error has occurred
 */
- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)inArg;

/*!
 @brief Creates a new input stream with the specified buffer size.
 @param inArg the input stream
 @param size the input buffer size
 @throw ZipExceptionif a GZIP format error has occurred or the
                          compression method used is unsupported
 @throw IOExceptionif an I/O error has occurred
 @throw IllegalArgumentExceptionif size is <= 0
 */
- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)inArg
                                            withInt:(jint)size;

/*!
 @brief Closes this input stream and releases any system resources associated
  with the stream.
 @throw IOExceptionif an I/O error has occurred
 */
- (void)close;

/*!
 @brief Reads uncompressed data into an array of bytes.If <code>len</code> is not
  zero, the method will block until some input can be decompressed; otherwise,
  no bytes are read and <code>0</code> is returned.
 @param buf the buffer into which the data is read
 @param off the start offset in the destination array  <code> b </code>
 @param len the maximum number of bytes read
 @return the actual number of bytes read, or -1 if the end of the
           compressed input stream is reached
 @throw NullPointerExceptionIf <code>buf</code> is <code>null</code>.
 @throw IndexOutOfBoundsExceptionIf <code>off</code> is negative, 
 <code>len</code> is negative, or <code>len</code> is greater than 
 <code>buf.length - off</code>
 @throw ZipExceptionif the compressed input data is corrupt.
 @throw IOExceptionif an I/O error has occurred.
 */
- (jint)readWithByteArray:(IOSByteArray *)buf
                  withInt:(jint)off
                  withInt:(jint)len;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)arg0
                            withJavaUtilZipInflater:(JavaUtilZipInflater *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)arg0
                            withJavaUtilZipInflater:(JavaUtilZipInflater *)arg1
                                            withInt:(jint)arg2 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipGZIPInputStream)

J2OBJC_FIELD_SETTER(JavaUtilZipGZIPInputStream, crc_, JavaUtilZipCRC32 *)

/*!
 @brief GZIP header magic number.
 */
inline jint JavaUtilZipGZIPInputStream_get_GZIP_MAGIC(void);
#define JavaUtilZipGZIPInputStream_GZIP_MAGIC 35615
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilZipGZIPInputStream, GZIP_MAGIC, jint)

FOUNDATION_EXPORT void JavaUtilZipGZIPInputStream_initWithJavaIoInputStream_withInt_(JavaUtilZipGZIPInputStream *self, JavaIoInputStream *inArg, jint size);

FOUNDATION_EXPORT JavaUtilZipGZIPInputStream *new_JavaUtilZipGZIPInputStream_initWithJavaIoInputStream_withInt_(JavaIoInputStream *inArg, jint size) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipGZIPInputStream *create_JavaUtilZipGZIPInputStream_initWithJavaIoInputStream_withInt_(JavaIoInputStream *inArg, jint size);

FOUNDATION_EXPORT void JavaUtilZipGZIPInputStream_initWithJavaIoInputStream_(JavaUtilZipGZIPInputStream *self, JavaIoInputStream *inArg);

FOUNDATION_EXPORT JavaUtilZipGZIPInputStream *new_JavaUtilZipGZIPInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipGZIPInputStream *create_JavaUtilZipGZIPInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipGZIPInputStream)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilZipGZIPInputStream")
