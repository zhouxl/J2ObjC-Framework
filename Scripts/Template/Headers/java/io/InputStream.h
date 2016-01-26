//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/InputStream.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaIoInputStream_INCLUDE_ALL")
#ifdef JavaIoInputStream_RESTRICT
#define JavaIoInputStream_INCLUDE_ALL 0
#else
#define JavaIoInputStream_INCLUDE_ALL 1
#endif
#undef JavaIoInputStream_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoInputStream_) && (JavaIoInputStream_INCLUDE_ALL || defined(JavaIoInputStream_INCLUDE))
#define JavaIoInputStream_

#define JavaIoCloseable_RESTRICT 1
#define JavaIoCloseable_INCLUDE 1
#include "../../java/io/Closeable.h"

@class IOSByteArray;

/*!
 @brief A readable source of bytes.
 <p>Most clients will use input streams that read data from the file system
 (<code>FileInputStream</code>), the network (<code>java.net.Socket.getInputStream()</code>/<code>java.net.HttpURLConnection.getInputStream()</code>
 ), or from an in-memory byte
 array (<code>ByteArrayInputStream</code>).
 <p>Use <code>InputStreamReader</code> to adapt a byte stream like this one into a
 character stream.
 <p>Most clients should wrap their input stream with <code>BufferedInputStream</code>
 . Callers that do only bulk reads may omit buffering.
 <p>Some implementations support marking a position in the input stream and
 resetting back to this position later. Implementations that don't return
 false from <code>markSupported()</code> and throw an <code>IOException</code> when
 <code>reset()</code> is called.
 <h3>Subclassing InputStream</h3>
 Subclasses that decorate another input stream should consider subclassing
 <code>FilterInputStream</code>, which delegates all calls to the source input
 stream.
 <p>All input stream subclasses should override <strong>both</strong> <code>read()</code>
  and <code>read(byte[],int,int)</code>. The
 three argument overload is necessary for bulk access to the data. This is
 much more efficient than byte-by-byte access.
 - seealso: OutputStream
 */
@interface JavaIoInputStream : NSObject < JavaIoCloseable >

#pragma mark Public

/*!
 @brief This constructor does nothing.
 It is provided for signature
 compatibility.
 */
- (instancetype)init;

/*!
 @brief Returns an estimated number of bytes that can be read or skipped without blocking for more
 input.
 <p>Note that this method provides such a weak guarantee that it is not very useful in
 practice.
 <p>Firstly, the guarantee is "without blocking for more input" rather than "without
 blocking": a read may still block waiting for I/O to complete&nbsp;&mdash; the guarantee is
 merely that it won't have to wait indefinitely for data to be written. The result of this
 method should not be used as a license to do I/O on a thread that shouldn't be blocked.
 <p>Secondly, the result is a
 conservative estimate and may be significantly smaller than the actual number of bytes
 available. In particular, an implementation that always returns 0 would be correct.
 In general, callers should only use this method if they'd be satisfied with
 treating the result as a boolean yes or no answer to the question "is there definitely
 data ready?".
 <p>Thirdly, the fact that a given number of bytes is "available" does not guarantee that a
 read or skip will actually read or skip that many bytes: they may read or skip fewer.
 <p>It is particularly important to realize that you <i>must not</i> use this method to
 size a container and assume that you can read the entirety of the stream without needing
 to resize the container. Such callers should probably write everything they read to a
 <code>ByteArrayOutputStream</code> and convert that to a byte array. Alternatively, if you're
 reading from a file, <code>File.length</code> returns the current length of the file (though
 assuming the file's length can't change may be incorrect, reading a file is inherently
 racy).
 <p>The default implementation of this method in <code>InputStream</code> always returns 0.
 Subclasses should override this method if they are able to indicate the number of bytes
 available.
 @return the estimated number of bytes available
 @throws IOException if this stream is closed or an error occurs
 */
- (jint)available;

/*!
 @brief Closes this stream.
 Concrete implementations of this class should free
 any resources during close. This implementation does nothing.
 @throws IOException
 if an error occurs while closing this stream.
 */
- (void)close;

/*!
 @brief Sets a mark position in this InputStream.
 The parameter <code>readlimit</code>
 indicates how many bytes can be read before the mark is invalidated.
 Sending <code>reset()</code> will reposition the stream back to the marked
 position provided <code>readLimit</code> has not been surpassed.
 <p>
 This default implementation does nothing and concrete subclasses must
 provide their own implementation.
 @param readlimit
 the number of bytes that can be read from this stream before
 the mark is invalidated.
 - seealso: #markSupported()
 - seealso: #reset()
 */
- (void)markWithInt:(jint)readlimit;

/*!
 @brief Indicates whether this stream supports the <code>mark()</code> and
 <code>reset()</code> methods.
 The default implementation returns <code>false</code>.
 @return always <code>false</code>.
 - seealso: #mark(int)
 - seealso: #reset()
 */
- (jboolean)markSupported;

/*!
 @brief Reads a single byte from this stream and returns it as an integer in the
 range from 0 to 255.
 Returns -1 if the end of the stream has been
 reached. Blocks until one byte has been read, the end of the source
 stream is detected or an exception is thrown.
 @throws IOException
 if the stream is closed or another IOException occurs.
 */
- (jint)read;

/*!
 @brief Equivalent to <code>read(buffer, 0, buffer.length)</code>.
 */
- (jint)readWithByteArray:(IOSByteArray *)buffer;

/*!
 @brief Reads up to <code>byteCount</code> bytes from this stream and stores them in
 the byte array <code>buffer</code> starting at <code>byteOffset</code>.
 Returns the number of bytes actually read or -1 if the end of the stream
 has been reached.
 @throws IndexOutOfBoundsException
 if <code>byteOffset < 0 || byteCount < 0 || byteOffset + byteCount > buffer.length</code>.
 @throws IOException
 if the stream is closed or another IOException occurs.
 */
- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)byteOffset
                  withInt:(jint)byteCount;

/*!
 @brief Resets this stream to the last marked location.
 Throws an
 <code>IOException</code> if the number of bytes read since the mark has been
 set is greater than the limit provided to <code>mark</code>, or if no mark
 has been set.
 <p>
 This implementation always throws an <code>IOException</code> and concrete
 subclasses should provide the proper implementation.
 @throws IOException
 if this stream is closed or another IOException occurs.
 */
- (void)reset;

/*!
 @brief Skips at most <code>byteCount</code> bytes in this stream.
 The number of actual
 bytes skipped may be anywhere between 0 and <code>byteCount</code>. If
 <code>byteCount</code> is negative, this method does nothing and returns 0, but
 some subclasses may throw.
 <p>Note the "at most" in the description of this method: this method may
 choose to skip fewer bytes than requested. Callers should <i>always</i>
 check the return value.
 <p>This default implementation reads bytes into a temporary buffer. Concrete
 subclasses should provide their own implementation.
 @return the number of bytes actually skipped.
 @throws IOException if this stream is closed or another IOException
 occurs.
 */
- (jlong)skipWithLong:(jlong)byteCount;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoInputStream)

FOUNDATION_EXPORT void JavaIoInputStream_init(JavaIoInputStream *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoInputStream)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaIoInputStream_INCLUDE_ALL")
