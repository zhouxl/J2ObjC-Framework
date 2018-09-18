//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/FileReader.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoFileReader")
#ifdef RESTRICT_JavaIoFileReader
#define INCLUDE_ALL_JavaIoFileReader 0
#else
#define INCLUDE_ALL_JavaIoFileReader 1
#endif
#undef RESTRICT_JavaIoFileReader

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaIoFileReader_) && (INCLUDE_ALL_JavaIoFileReader || defined(INCLUDE_JavaIoFileReader))
#define JavaIoFileReader_

#define RESTRICT_JavaIoInputStreamReader 1
#define INCLUDE_JavaIoInputStreamReader 1
#include "java/io/InputStreamReader.h"

@class JavaIoFile;
@class JavaIoFileDescriptor;
@class JavaIoInputStream;
@class JavaNioCharsetCharset;
@class JavaNioCharsetCharsetDecoder;

/*!
 @brief A specialized <code>Reader</code> that reads from a file in the file system.
 All read requests made by calling methods in this class are directly
  forwarded to the equivalent function of the underlying operating system.
  Since this may induce some performance penalty, in particular if many small
  read requests are made, a FileReader is often wrapped by a
  BufferedReader.
 - seealso: BufferedReader
 - seealso: FileWriter
 */
@interface JavaIoFileReader : JavaIoInputStreamReader

#pragma mark Public

/*!
 @brief Constructs a new FileReader on the given <code>file</code>.
 @param file a File to be opened for reading characters from.
 @throw FileNotFoundException
 if <code>file</code> does not exist.
 */
- (instancetype __nonnull)initWithJavaIoFile:(JavaIoFile *)file;

/*!
 @brief Construct a new FileReader on the given FileDescriptor <code>fd</code>.Since
  a previously opened FileDescriptor is passed as an argument, no
  FileNotFoundException can be thrown.
 @param fd the previously opened file descriptor.
 */
- (instancetype __nonnull)initWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;

/*!
 @brief Construct a new FileReader on the given file named <code>filename</code>.
 @param filename an absolute or relative path specifying the file to open.
 @throw FileNotFoundException
 if there is no file named <code>filename</code>.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)filename;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)arg0
                          withJavaNioCharsetCharset:(JavaNioCharsetCharset *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)arg0
                   withJavaNioCharsetCharsetDecoder:(JavaNioCharsetCharsetDecoder *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)arg0
                                       withNSString:(NSString *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoFileReader)

FOUNDATION_EXPORT void JavaIoFileReader_initWithJavaIoFile_(JavaIoFileReader *self, JavaIoFile *file);

FOUNDATION_EXPORT JavaIoFileReader *new_JavaIoFileReader_initWithJavaIoFile_(JavaIoFile *file) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoFileReader *create_JavaIoFileReader_initWithJavaIoFile_(JavaIoFile *file);

FOUNDATION_EXPORT void JavaIoFileReader_initWithJavaIoFileDescriptor_(JavaIoFileReader *self, JavaIoFileDescriptor *fd);

FOUNDATION_EXPORT JavaIoFileReader *new_JavaIoFileReader_initWithJavaIoFileDescriptor_(JavaIoFileDescriptor *fd) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoFileReader *create_JavaIoFileReader_initWithJavaIoFileDescriptor_(JavaIoFileDescriptor *fd);

FOUNDATION_EXPORT void JavaIoFileReader_initWithNSString_(JavaIoFileReader *self, NSString *filename);

FOUNDATION_EXPORT JavaIoFileReader *new_JavaIoFileReader_initWithNSString_(NSString *filename) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoFileReader *create_JavaIoFileReader_initWithNSString_(NSString *filename);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoFileReader)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoFileReader")
