//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/PrintStream.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaIoPrintStream_INCLUDE_ALL")
#ifdef JavaIoPrintStream_RESTRICT
#define JavaIoPrintStream_INCLUDE_ALL 0
#else
#define JavaIoPrintStream_INCLUDE_ALL 1
#endif
#undef JavaIoPrintStream_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoPrintStream_) && (JavaIoPrintStream_INCLUDE_ALL || defined(JavaIoPrintStream_INCLUDE))
#define JavaIoPrintStream_

#define JavaIoFilterOutputStream_RESTRICT 1
#define JavaIoFilterOutputStream_INCLUDE 1
#include "../../java/io/FilterOutputStream.h"

#define JavaLangAppendable_RESTRICT 1
#define JavaLangAppendable_INCLUDE 1
#include "../../java/lang/Appendable.h"

#define JavaIoCloseable_RESTRICT 1
#define JavaIoCloseable_INCLUDE 1
#include "../../java/io/Closeable.h"

@class IOSByteArray;
@class IOSCharArray;
@class IOSObjectArray;
@class JavaIoFile;
@class JavaIoOutputStream;
@class JavaUtilLocale;
@protocol JavaLangCharSequence;

/*!
 @brief Wraps an existing <code>OutputStream</code> and provides convenience methods for
 writing common data types in a human readable format.
 This is not to be
 confused with DataOutputStream which is used for encoding common data types
 so that they can be read back in. No <code>IOException</code> is thrown by this
 class. Instead, callers should use <code>checkError()</code> to see if a problem
 has occurred in this stream.
 */
@interface JavaIoPrintStream : JavaIoFilterOutputStream < JavaLangAppendable, JavaIoCloseable >

#pragma mark Public

/*!
 @brief Constructs a new <code>PrintStream</code> with <code>file</code> as its target.
 The
 VM's default character set is used for character encoding.
 @param file
 the target file. If the file already exists, its contents are
 removed, otherwise a new file is created.
 @throws FileNotFoundException
 if an error occurs while opening or creating the target file.
 */
- (instancetype)initWithJavaIoFile:(JavaIoFile *)file;

/*!
 @brief Constructs a new <code>PrintStream</code> with <code>file</code> as its target.
 The
 character set named <code>charsetName</code> is used for character encoding.
 @param file
 the target file. If the file already exists, its contents are
 removed, otherwise a new file is created.
 @param charsetName
 the name of the character set used for character encoding.
 @throws FileNotFoundException
 if an error occurs while opening or creating the target file.
 @throws NullPointerException
 if <code>charsetName</code> is <code>null</code>.
 @throws UnsupportedEncodingException
 if the encoding specified by <code>charsetName</code> is not supported.
 */
- (instancetype)initWithJavaIoFile:(JavaIoFile *)file
                      withNSString:(NSString *)charsetName;

/*!
 @brief Constructs a new <code>PrintStream</code> with <code>out</code> as its target
 stream.
 By default, the new print stream does not automatically flush its
 contents to the target stream when a newline is encountered.
 @param outArg
 the target output stream.
 @throws NullPointerException
 if <code>out</code> is <code>null</code>.
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg;

/*!
 @brief Constructs a new <code>PrintStream</code> with <code>out</code> as its target
 stream.
 The parameter <code>autoFlush</code> determines if the print stream
 automatically flushes its contents to the target stream when a newline is
 encountered.
 @param outArg
 the target output stream.
 @param autoFlush
 indicates whether to flush contents upon encountering a
 newline sequence.
 @throws NullPointerException
 if <code>out</code> is <code>null</code>.
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                               withBoolean:(jboolean)autoFlush;

/*!
 @brief Constructs a new <code>PrintStream</code> with <code>out</code> as its target
 stream and using the character encoding <code>charsetName</code> while writing.
 The
 parameter <code>autoFlush</code> determines if the print stream automatically
 flushes its contents to the target stream when a newline is encountered.
 @param outArg
 the target output stream.
 @param autoFlush
 indicates whether or not to flush contents upon encountering a
 newline sequence.
 @param charsetName
 the non-null string describing the desired character encoding.
 @throws NullPointerException
 if <code>out</code> or <code>charsetName</code> are <code>null</code>.
 @throws UnsupportedEncodingException
 if the encoding specified by <code>charsetName</code> is not supported.
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                               withBoolean:(jboolean)autoFlush
                              withNSString:(NSString *)charsetName;

/*!
 @brief Constructs a new <code>PrintStream</code> with the file identified by
 <code>fileName</code> as its target.
 The VM's default character
 set is used for character encoding.
 @param fileName
 the target file's name. If the file already exists, its
 contents are removed, otherwise a new file is created.
 @throws FileNotFoundException
 if an error occurs while opening or creating the target file.
 */
- (instancetype)initWithNSString:(NSString *)fileName;

/*!
 @brief Constructs a new <code>PrintStream</code> with the file identified by
 <code>fileName</code> as its target.
 The character set named <code>charsetName</code> is
 used for character encoding.
 @param fileName
 the target file's name. If the file already exists, its
 contents are removed, otherwise a new file is created.
 @param charsetName
 the name of the character set used for character encoding.
 @throws FileNotFoundException
 if an error occurs while opening or creating the target file.
 @throws NullPointerException
 if <code>charsetName</code> is <code>null</code>.
 @throws UnsupportedEncodingException
 if the encoding specified by <code>charsetName</code> is not supported.
 */
- (instancetype)initWithNSString:(NSString *)fileName
                    withNSString:(NSString *)charsetName;

/*!
 @brief Appends the char <code>c</code>.
 @return this stream.
 */
- (JavaIoPrintStream *)appendWithChar:(jchar)c;

/*!
 @brief Appends the CharSequence <code>charSequence</code>, or <code>"null"</code>.
 @return this stream.
 */
- (JavaIoPrintStream *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)charSequence;

/*!
 @brief Appends a subsequence of CharSequence <code>charSequence</code>, or <code>"null"</code>.
 @param charSequence
 the character sequence appended to the target stream.
 @param start
 the index of the first char in the character sequence appended
 to the target stream.
 @param end
 the index of the character following the last character of the
 subsequence appended to the target stream.
 @return this stream.
 @throws IndexOutOfBoundsException
 if <code>start > end</code>, <code>start < 0</code>, <code>end < 0</code> or
 either <code>start</code> or <code>end</code> are greater or equal than
 the length of <code>charSequence</code>.
 */
- (JavaIoPrintStream *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)charSequence
                                              withInt:(jint)start
                                              withInt:(jint)end;

/*!
 @brief Flushes this stream and returns the value of the error flag.
 @return <code>true</code> if either an <code>IOException</code> has been thrown
 previously or if <code>setError()</code> has been called;
 <code>false</code> otherwise.
 - seealso: #setError()
 */
- (jboolean)checkError;

/*!
 @brief Closes this print stream.
 Flushes this stream and then closes the target
 stream. If an I/O error occurs, this stream's error state is set to
 <code>true</code>.
 */
- (void)close;

/*!
 @brief Ensures that all pending data is sent out to the target stream.
 It also
 flushes the target stream. If an I/O error occurs, this stream's error
 state is set to <code>true</code>.
 */
- (void)flush;

/*!
 @brief Writes a string formatted by an intermediate <code>Formatter</code> to this
 stream using the specified locale, format string and arguments.
 @param l
 the locale used in the method. No localization will be applied
 if <code>l</code> is <code>null</code>.
 @param format the format string (see <code>java.util.Formatter.format</code>)
 @param args
 the list of arguments passed to the formatter. If there are
 more arguments than required by <code>format</code>,
 additional arguments are ignored.
 @return this stream.
 @throws IllegalFormatException
 if the format string is illegal or incompatible with the
 arguments, if there are not enough arguments or if any other
 error regarding the format string or arguments is detected.
 @throws NullPointerException if <code>format == null</code>
 */
- (JavaIoPrintStream *)formatWithJavaUtilLocale:(JavaUtilLocale *)l
                                   withNSString:(NSString *)format
                              withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief Formats <code>args</code> according to the format string <code>format</code>, and writes the result
 to this stream.
 This method uses the user's default locale.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 @param format the format string (see <code>java.util.Formatter.format</code>)
 @param args
 the list of arguments passed to the formatter. If there are
 more arguments than required by <code>format</code>,
 additional arguments are ignored.
 @return this stream.
 @throws IllegalFormatException
 if the format string is illegal or incompatible with the
 arguments, if there are not enough arguments or if any other
 error regarding the format string or arguments is detected.
 @throws NullPointerException if <code>format == null</code>
 */
- (JavaIoPrintStream *)formatWithNSString:(NSString *)format
                        withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief Prints the string representation of the boolean <code>b</code>.
 */
- (void)printWithBoolean:(jboolean)b;

/*!
 @brief Prints the string representation of the char <code>c</code>.
 */
- (void)printWithChar:(jchar)c;

/*!
 @brief Prints the string representation of the character array <code>chars</code>.
 */
- (void)printWithCharArray:(IOSCharArray *)chars;

/*!
 @brief Prints the string representation of the double <code>d</code>.
 */
- (void)printWithDouble:(jdouble)d;

/*!
 @brief Prints the string representation of the float <code>f</code>.
 */
- (void)printWithFloat:(jfloat)f;

/*!
 @brief Prints the string representation of the int <code>i</code>.
 */
- (void)printWithInt:(jint)i;

/*!
 @brief Prints the string representation of the long <code>l</code>.
 */
- (void)printWithLong:(jlong)l;

/*!
 @brief Prints the string representation of the Object <code>o</code>, or <code>"null"</code>.
 */
- (void)printWithId:(id)o;

/*!
 @brief Prints a string to the target stream.
 The string is converted to an array
 of bytes using the encoding chosen during the construction of this
 stream. The bytes are then written to the target stream with
 <code>write(int)</code>.
 <p>If an I/O error occurs, this stream's error state is set to <code>true</code>.
 @param str
 the string to print to the target stream.
 - seealso: #write(int)
 */
- (void)printWithNSString:(NSString *)str;

/*!
 @brief Prints a formatted string.
 The behavior of this method is the same as
 this stream's <code>#format(Locale, String, Object...)</code> method.
 @param l
 the locale used in the method. No localization will be applied
 if <code>l</code> is <code>null</code>.
 @param format the format string (see <code>java.util.Formatter.format</code>)
 @param args
 the list of arguments passed to the formatter. If there are
 more arguments than required by <code>format</code>,
 additional arguments are ignored.
 @return this stream.
 @throws IllegalFormatException
 if the format string is illegal or incompatible with the
 arguments, if there are not enough arguments or if any other
 error regarding the format string or arguments is detected.
 @throws NullPointerException if <code>format == null</code>.
 */
- (JavaIoPrintStream *)printfWithJavaUtilLocale:(JavaUtilLocale *)l
                                   withNSString:(NSString *)format
                              withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief Prints a formatted string.
 The behavior of this method is the same as
 this stream's <code>#format(String, Object...)</code> method.
 <p>The <code>Locale</code> used is the user's default locale.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 @param format the format string (see <code>java.util.Formatter.format</code>)
 @param args
 the list of arguments passed to the formatter. If there are
 more arguments than required by <code>format</code>,
 additional arguments are ignored.
 @return this stream.
 @throws IllegalFormatException
 if the format string is illegal or incompatible with the
 arguments, if there are not enough arguments or if any other
 error regarding the format string or arguments is detected.
 @throws NullPointerException if <code>format == null</code>
 */
- (JavaIoPrintStream *)printfWithNSString:(NSString *)format
                        withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief Prints a newline.
 */
- (void)println;

/*!
 @brief Prints the string representation of the boolean <code>b</code> followed by a newline.
 */
- (void)printlnWithBoolean:(jboolean)b;

/*!
 @brief Prints the string representation of the char <code>c</code> followed by a newline.
 */
- (void)printlnWithChar:(jchar)c;

/*!
 @brief Prints the string representation of the character array <code>chars</code> followed by a newline.
 */
- (void)printlnWithCharArray:(IOSCharArray *)chars;

/*!
 @brief Prints the string representation of the double <code>d</code> followed by a newline.
 */
- (void)printlnWithDouble:(jdouble)d;

/*!
 @brief Prints the string representation of the float <code>f</code> followed by a newline.
 */
- (void)printlnWithFloat:(jfloat)f;

/*!
 @brief Prints the string representation of the int <code>i</code> followed by a newline.
 */
- (void)printlnWithInt:(jint)i;

/*!
 @brief Prints the string representation of the long <code>l</code> followed by a newline.
 */
- (void)printlnWithLong:(jlong)l;

/*!
 @brief Prints the string representation of the Object <code>o</code>, or <code>"null"</code>,
 followed by a newline.
 */
- (void)printlnWithId:(id)o;

/*!
 @brief Prints a string followed by a newline.
 The string is converted to an array of bytes using
 the encoding chosen during the construction of this stream. The bytes are
 then written to the target stream with <code>write(int)</code>.
 <p>If an I/O error occurs, this stream's error state is set to <code>true</code>.
 @param str
 the string to print to the target stream.
 - seealso: #write(int)
 */
- (void)printlnWithNSString:(NSString *)str;

/*!
 @brief Writes <code>count</code> bytes from <code>buffer</code> starting at <code>offset</code>
 to the target stream.
 If autoFlush is set, this stream gets flushed after
 writing the buffer.
 <p>This stream's error flag is set to <code>true</code> if this stream is closed
 or an I/O error occurs.
 @param buffer
 the buffer to be written.
 @param offset
 the index of the first byte in <code>buffer</code> to write.
 @param length
 the number of bytes in <code>buffer</code> to write.
 @throws IndexOutOfBoundsException
 if <code>offset < 0</code> or <code>count < 0</code>, or if <code>offset + count</code>
  is bigger than the length of <code>buffer</code>.
 - seealso: #flush()
 */
- (void)writeWithByteArray:(IOSByteArray *)buffer
                   withInt:(jint)offset
                   withInt:(jint)length;

/*!
 @brief Writes one byte to the target stream.
 Only the least significant byte of
 the integer <code>oneByte</code> is written. This stream is flushed if
 <code>oneByte</code> is equal to the character <code>'\n'</code> and this stream is
 set to autoFlush.
 <p>
 This stream's error flag is set to <code>true</code> if it is closed or an I/O
 error occurs.
 @param oneByte
 the byte to be written
 */
- (void)writeWithInt:(jint)oneByte;

#pragma mark Protected

/*!
 @brief Sets the error state of the stream to false.
 @since 1.6
 */
- (void)clearError;

/*!
 @brief Sets the error flag of this print stream to true.
 */
- (void)setError;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoPrintStream)

FOUNDATION_EXPORT void JavaIoPrintStream_initWithJavaIoOutputStream_(JavaIoPrintStream *self, JavaIoOutputStream *outArg);

FOUNDATION_EXPORT JavaIoPrintStream *new_JavaIoPrintStream_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaIoPrintStream_initWithJavaIoOutputStream_withBoolean_(JavaIoPrintStream *self, JavaIoOutputStream *outArg, jboolean autoFlush);

FOUNDATION_EXPORT JavaIoPrintStream *new_JavaIoPrintStream_initWithJavaIoOutputStream_withBoolean_(JavaIoOutputStream *outArg, jboolean autoFlush) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaIoPrintStream_initWithJavaIoOutputStream_withBoolean_withNSString_(JavaIoPrintStream *self, JavaIoOutputStream *outArg, jboolean autoFlush, NSString *charsetName);

FOUNDATION_EXPORT JavaIoPrintStream *new_JavaIoPrintStream_initWithJavaIoOutputStream_withBoolean_withNSString_(JavaIoOutputStream *outArg, jboolean autoFlush, NSString *charsetName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaIoPrintStream_initWithJavaIoFile_(JavaIoPrintStream *self, JavaIoFile *file);

FOUNDATION_EXPORT JavaIoPrintStream *new_JavaIoPrintStream_initWithJavaIoFile_(JavaIoFile *file) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaIoPrintStream_initWithJavaIoFile_withNSString_(JavaIoPrintStream *self, JavaIoFile *file, NSString *charsetName);

FOUNDATION_EXPORT JavaIoPrintStream *new_JavaIoPrintStream_initWithJavaIoFile_withNSString_(JavaIoFile *file, NSString *charsetName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaIoPrintStream_initWithNSString_(JavaIoPrintStream *self, NSString *fileName);

FOUNDATION_EXPORT JavaIoPrintStream *new_JavaIoPrintStream_initWithNSString_(NSString *fileName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaIoPrintStream_initWithNSString_withNSString_(JavaIoPrintStream *self, NSString *fileName, NSString *charsetName);

FOUNDATION_EXPORT JavaIoPrintStream *new_JavaIoPrintStream_initWithNSString_withNSString_(NSString *fileName, NSString *charsetName) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoPrintStream)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaIoPrintStream_INCLUDE_ALL")
