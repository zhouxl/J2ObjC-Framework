//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/LineNumberReader.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoLineNumberReader")
#ifdef RESTRICT_JavaIoLineNumberReader
#define INCLUDE_ALL_JavaIoLineNumberReader 0
#else
#define INCLUDE_ALL_JavaIoLineNumberReader 1
#endif
#undef RESTRICT_JavaIoLineNumberReader

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaIoLineNumberReader_) && (INCLUDE_ALL_JavaIoLineNumberReader || defined(INCLUDE_JavaIoLineNumberReader))
#define JavaIoLineNumberReader_

#define RESTRICT_JavaIoBufferedReader 1
#define INCLUDE_JavaIoBufferedReader 1
#include "../../java/io/BufferedReader.h"

@class IOSCharArray;
@class JavaIoReader;

/*!
 @brief A buffered character-input stream that keeps track of line numbers.This
  class defines methods <code>setLineNumber(int)</code> and <code>getLineNumber()</code>
  for setting and getting the current line number
  respectively.
 <p> By default, line numbering begins at 0. This number increments at every 
 <a href="#lt">line terminator</a> as the data is read, and can be changed
  with a call to <tt>setLineNumber(int)</tt>.  Note however, that 
 <tt>setLineNumber(int)</tt> does not actually change the current position in
  the stream; it only changes the value that will be returned by 
 <tt>getLineNumber()</tt>.
  
 <p> A line is considered to be <a name="lt">terminated</a> by any one of a
  line feed ('\n'), a carriage return ('\r'), or a carriage return followed
  immediately by a linefeed.
 @author Mark Reinhold
 @since JDK1.1
 */
@interface JavaIoLineNumberReader : JavaIoBufferedReader

#pragma mark Public

/*!
 @brief Create a new line-numbering reader, using the default input-buffer
  size.
 @param inArg A Reader object to provide the underlying stream
 */
- (instancetype __nonnull)initWithJavaIoReader:(JavaIoReader *)inArg;

/*!
 @brief Create a new line-numbering reader, reading characters into a buffer of
  the given size.
 @param inArg A Reader object to provide the underlying stream
 @param sz An int specifying the size of the buffer
 */
- (instancetype __nonnull)initWithJavaIoReader:(JavaIoReader *)inArg
                                       withInt:(jint)sz;

/*!
 @brief Get the current line number.
 @return The current line number
 - seealso: #setLineNumber
 */
- (jint)getLineNumber;

/*!
 @brief Mark the present position in the stream.Subsequent calls to reset()
  will attempt to reposition the stream to this point, and will also reset
  the line number appropriately.
 @param readAheadLimit Limit on the number of characters that may be read while still
           preserving the mark.  After reading this many characters,
           attempting to reset the stream may fail.
 @throw IOException
 If an I/O error occurs
 */
- (void)markWithInt:(jint)readAheadLimit;

/*!
 @brief Read a single character.
 <a href="#lt">Line terminators</a> are
  compressed into single newline ('\n') characters.  Whenever a line
  terminator is read the current line number is incremented.
 @return The character read, or -1 if the end of the stream has been
           reached
 @throw IOException
 If an I/O error occurs
 */
- (jint)read;

/*!
 @brief Read characters into a portion of an array.Whenever a <a href="#lt">
 line terminator</a> is read the current line number is
  incremented.
 @param cbuf Destination buffer
 @param off Offset at which to start storing characters
 @param len Maximum number of characters to read
 @return The number of bytes read, or -1 if the end of the stream has
           already been reached
 @throw IOException
 If an I/O error occurs
 */
- (jint)readWithCharArray:(IOSCharArray *)cbuf
                  withInt:(jint)off
                  withInt:(jint)len;

/*!
 @brief Read a line of text.Whenever a <a href="#lt">line terminator</a> is
  read the current line number is incremented.
 @return A String containing the contents of the line, not including
           any <a href="#lt">line termination characters</a>, or
           <tt>null</tt> if the end of the stream has been reached
 @throw IOException
 If an I/O error occurs
 */
- (NSString *)readLine;

/*!
 @brief Reset the stream to the most recent mark.
 @throw IOException
 If the stream has not been marked, or if the mark has been
           invalidated
 */
- (void)reset;

/*!
 @brief Set the current line number.
 @param lineNumber An int specifying the line number
 - seealso: #getLineNumber
 */
- (void)setLineNumberWithInt:(jint)lineNumber;

/*!
 @brief Skip characters.
 @param n The number of characters to skip
 @return The number of characters actually skipped
 @throw IOException
 If an I/O error occurs
 @throw IllegalArgumentException
 If <tt>n</tt> is negative
 */
- (jlong)skipWithLong:(jlong)n;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoLineNumberReader)

FOUNDATION_EXPORT void JavaIoLineNumberReader_initWithJavaIoReader_(JavaIoLineNumberReader *self, JavaIoReader *inArg);

FOUNDATION_EXPORT JavaIoLineNumberReader *new_JavaIoLineNumberReader_initWithJavaIoReader_(JavaIoReader *inArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoLineNumberReader *create_JavaIoLineNumberReader_initWithJavaIoReader_(JavaIoReader *inArg);

FOUNDATION_EXPORT void JavaIoLineNumberReader_initWithJavaIoReader_withInt_(JavaIoLineNumberReader *self, JavaIoReader *inArg, jint sz);

FOUNDATION_EXPORT JavaIoLineNumberReader *new_JavaIoLineNumberReader_initWithJavaIoReader_withInt_(JavaIoReader *inArg, jint sz) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoLineNumberReader *create_JavaIoLineNumberReader_initWithJavaIoReader_withInt_(JavaIoReader *inArg, jint sz);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoLineNumberReader)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoLineNumberReader")
