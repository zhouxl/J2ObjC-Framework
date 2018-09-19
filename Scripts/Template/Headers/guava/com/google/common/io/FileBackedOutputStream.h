//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/io/FileBackedOutputStream.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonIoFileBackedOutputStream")
#ifdef RESTRICT_ComGoogleCommonIoFileBackedOutputStream
#define INCLUDE_ALL_ComGoogleCommonIoFileBackedOutputStream 0
#else
#define INCLUDE_ALL_ComGoogleCommonIoFileBackedOutputStream 1
#endif
#undef RESTRICT_ComGoogleCommonIoFileBackedOutputStream

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonIoFileBackedOutputStream_) && (INCLUDE_ALL_ComGoogleCommonIoFileBackedOutputStream || defined(INCLUDE_ComGoogleCommonIoFileBackedOutputStream))
#define ComGoogleCommonIoFileBackedOutputStream_

#define RESTRICT_JavaIoOutputStream 1
#define INCLUDE_JavaIoOutputStream 1
#include "../../../../../java/io/OutputStream.h"

@class ComGoogleCommonIoByteSource;
@class IOSByteArray;
@class JavaIoFile;

/*!
 @brief An <code>OutputStream</code> that starts buffering to a byte array, but switches to file buffering
  once the data reaches a configurable size.
 <p>This class is thread-safe.
 @author Chris Nokleberg
 @since 1.0
 */
@interface ComGoogleCommonIoFileBackedOutputStream : JavaIoOutputStream

#pragma mark Public

/*!
 @brief Creates a new instance that uses the given file threshold, and does not reset the data when the 
 <code>ByteSource</code> returned by <code>asByteSource</code> is finalized.
 @param fileThreshold the number of bytes before the stream should switch to buffering to a file
 */
- (instancetype __nonnull)initWithInt:(jint)fileThreshold;

/*!
 @brief Creates a new instance that uses the given file threshold, and optionally resets the data when the 
 <code>ByteSource</code> returned by <code>asByteSource</code> is finalized.
 @param fileThreshold the number of bytes before the stream should switch to buffering to a file
 @param resetOnFinalize if true, the <code>reset</code>  method will be called when the <code>ByteSource</code>
   returned by <code>asByteSource</code>  is finalized
 */
- (instancetype __nonnull)initWithInt:(jint)fileThreshold
                          withBoolean:(jboolean)resetOnFinalize;

/*!
 @brief Returns a readable <code>ByteSource</code> view of the data that has been written to this stream.
 @since 15.0
 */
- (ComGoogleCommonIoByteSource *)asByteSource;

- (void)close;

- (void)flush;

/*!
 @brief Calls <code>close</code> if not already closed, and then resets this object back to its initial
  state, for reuse.If data was buffered to a file, it will be deleted.
 @throw IOExceptionif an I/O error occurred while deleting the file buffer
 */
- (void)reset;

- (void)writeWithByteArray:(IOSByteArray *)b;

- (void)writeWithByteArray:(IOSByteArray *)b
                   withInt:(jint)off
                   withInt:(jint)len;

- (void)writeWithInt:(jint)b;

#pragma mark Package-Private

/*!
 @brief Returns the file holding the data (possibly null).
 */
- (JavaIoFile *)getFile;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoFileBackedOutputStream)

FOUNDATION_EXPORT void ComGoogleCommonIoFileBackedOutputStream_initWithInt_(ComGoogleCommonIoFileBackedOutputStream *self, jint fileThreshold);

FOUNDATION_EXPORT ComGoogleCommonIoFileBackedOutputStream *new_ComGoogleCommonIoFileBackedOutputStream_initWithInt_(jint fileThreshold) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonIoFileBackedOutputStream *create_ComGoogleCommonIoFileBackedOutputStream_initWithInt_(jint fileThreshold);

FOUNDATION_EXPORT void ComGoogleCommonIoFileBackedOutputStream_initWithInt_withBoolean_(ComGoogleCommonIoFileBackedOutputStream *self, jint fileThreshold, jboolean resetOnFinalize);

FOUNDATION_EXPORT ComGoogleCommonIoFileBackedOutputStream *new_ComGoogleCommonIoFileBackedOutputStream_initWithInt_withBoolean_(jint fileThreshold, jboolean resetOnFinalize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonIoFileBackedOutputStream *create_ComGoogleCommonIoFileBackedOutputStream_initWithInt_withBoolean_(jint fileThreshold, jboolean resetOnFinalize);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoFileBackedOutputStream)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonIoFileBackedOutputStream")
