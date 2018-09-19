//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/CharArrayWriter.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoCharArrayWriter")
#ifdef RESTRICT_JavaIoCharArrayWriter
#define INCLUDE_ALL_JavaIoCharArrayWriter 0
#else
#define INCLUDE_ALL_JavaIoCharArrayWriter 1
#endif
#undef RESTRICT_JavaIoCharArrayWriter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaIoCharArrayWriter_) && (INCLUDE_ALL_JavaIoCharArrayWriter || defined(INCLUDE_JavaIoCharArrayWriter))
#define JavaIoCharArrayWriter_

#define RESTRICT_JavaIoWriter 1
#define INCLUDE_JavaIoWriter 1
#include "../../java/io/Writer.h"

@class IOSCharArray;
@protocol JavaLangCharSequence;

/*!
 @brief This class implements a character buffer that can be used as an Writer.
 The buffer automatically grows when data is written to the stream.  The data
  can be retrieved using toCharArray() and toString(). 
 <P>
  Note: Invoking close() on this class has no effect, and methods
  of this class can be called after the stream has closed
  without generating an IOException.
 @author Herb Jellinek
 @since JDK1.1
 */
@interface JavaIoCharArrayWriter : JavaIoWriter {
 @public
  /*!
   @brief The buffer where data is stored.
   */
  IOSCharArray *buf_;
  /*!
   @brief The number of chars in the buffer.
   */
  jint count_;
}

#pragma mark Public

/*!
 @brief Creates a new CharArrayWriter.
 */
- (instancetype __nonnull)init;

/*!
 @brief Creates a new CharArrayWriter with the specified initial size.
 @param initialSize an int specifying the initial buffer size.
 @throw IllegalArgumentExceptionif initialSize is negative
 */
- (instancetype __nonnull)initWithInt:(jint)initialSize;

/*!
 @brief Appends the specified character to this writer.
 <p> An invocation of this method of the form <tt>out.append(c)</tt>
  behaves in exactly the same way as the invocation 
 @code

      out.write(c) 
@endcode
 @param c The 16-bit character to append
 @return This writer
 @since 1.5
 */
- (JavaIoCharArrayWriter *)appendWithChar:(jchar)c;

/*!
 @brief Appends the specified character sequence to this writer.
 <p> An invocation of this method of the form <tt>out.append(csq)</tt>
  behaves in exactly the same way as the invocation 
 @code

      out.write(csq.toString()) 
@endcode
  
 <p> Depending on the specification of <tt>toString</tt> for the
  character sequence <tt>csq</tt>, the entire sequence may not be
  appended. For instance, invoking the <tt>toString</tt> method of a
  character buffer will return a subsequence whose content depends upon
  the buffer's position and limit.
 @param csq The character sequence to append.  If 
  <tt> csq </tt>  is           <tt>
  null </tt> , then the four characters  <tt> "null" </tt>  are          appended to this writer.
 @return This writer
 @since 1.5
 */
- (JavaIoCharArrayWriter *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq;

/*!
 @brief Appends a subsequence of the specified character sequence to this writer.
 <p> An invocation of this method of the form <tt>out.append(csq, start,
  end)</tt> when <tt>csq</tt> is not <tt>null</tt>, behaves in
  exactly the same way as the invocation 
 @code

      out.write(csq.subSequence(start, end).toString()) 
@endcode
 @param csq The character sequence from which a subsequence will be
           appended.  If 
  <tt> csq </tt>  is  <tt> null </tt> , then characters          will be appended as if 
  <tt> csq </tt>  contained the four          characters 
  <tt> "null" </tt> .
 @param start The index of the first character in the subsequence
 @param end The index of the character following the last character in the
           subsequence
 @return This writer
 @throw IndexOutOfBoundsException
 If <tt>start</tt> or <tt>end</tt> are negative, <tt>start</tt>
           is greater than <tt>end</tt>, or <tt>end</tt> is greater than
           <tt>csq.length()</tt>
 @since 1.5
 */
- (JavaIoCharArrayWriter *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq
                                                  withInt:(jint)start
                                                  withInt:(jint)end;

/*!
 @brief Close the stream.This method does not release the buffer, since its
  contents might still be required.
 Note: Invoking this method in this class
  will have no effect.
 */
- (void)close;

/*!
 @brief Flush the stream.
 */
- (void)flush;

/*!
 @brief Resets the buffer so that you can use it again without
  throwing away the already allocated buffer.
 */
- (void)reset;

/*!
 @brief Returns the current size of the buffer.
 @return an int representing the current size of the buffer.
 */
- (jint)size;

/*!
 @brief Returns a copy of the input data.
 @return an array of chars copied from the input data.
 */
- (IOSCharArray *)toCharArray;

/*!
 @brief Converts input data to a string.
 @return the string.
 */
- (NSString *)description;

/*!
 @brief Writes characters to the buffer.
 @param c the data to be written
 @param off the start offset in the data
 @param len the number of chars that are written
 */
- (void)writeWithCharArray:(IOSCharArray *)c
                   withInt:(jint)off
                   withInt:(jint)len;

/*!
 @brief Writes a character to the buffer.
 */
- (void)writeWithInt:(jint)c;

/*!
 @brief Write a portion of a string to the buffer.
 @param str String to be written from
 @param off Offset from which to start reading characters
 @param len Number of characters to be written
 */
- (void)writeWithNSString:(NSString *)str
                  withInt:(jint)off
                  withInt:(jint)len;

/*!
 @brief Writes the contents of the buffer to another character stream.
 @param outArg the output stream to write to
 @throw IOExceptionIf an I/O error occurs.
 */
- (void)writeToWithJavaIoWriter:(JavaIoWriter *)outArg;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithId:(id)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoCharArrayWriter)

J2OBJC_FIELD_SETTER(JavaIoCharArrayWriter, buf_, IOSCharArray *)

FOUNDATION_EXPORT void JavaIoCharArrayWriter_init(JavaIoCharArrayWriter *self);

FOUNDATION_EXPORT JavaIoCharArrayWriter *new_JavaIoCharArrayWriter_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoCharArrayWriter *create_JavaIoCharArrayWriter_init(void);

FOUNDATION_EXPORT void JavaIoCharArrayWriter_initWithInt_(JavaIoCharArrayWriter *self, jint initialSize);

FOUNDATION_EXPORT JavaIoCharArrayWriter *new_JavaIoCharArrayWriter_initWithInt_(jint initialSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoCharArrayWriter *create_JavaIoCharArrayWriter_initWithInt_(jint initialSize);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoCharArrayWriter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoCharArrayWriter")
