//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/InterruptedIOException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoInterruptedIOException")
#ifdef RESTRICT_JavaIoInterruptedIOException
#define INCLUDE_ALL_JavaIoInterruptedIOException 0
#else
#define INCLUDE_ALL_JavaIoInterruptedIOException 1
#endif
#undef RESTRICT_JavaIoInterruptedIOException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoInterruptedIOException_) && (INCLUDE_ALL_JavaIoInterruptedIOException || defined(INCLUDE_JavaIoInterruptedIOException))
#define JavaIoInterruptedIOException_

#define RESTRICT_JavaIoIOException 1
#define INCLUDE_JavaIoIOException 1
#include "../../java/io/IOException.h"

@class JavaLangThrowable;

/*!
 @brief Signals that an I/O operation has been interrupted.An
  <code>InterruptedIOException</code> is thrown to indicate that an
  input or output transfer has been terminated because the thread
  performing it was interrupted.
 The field <code>bytesTransferred</code>
  indicates how many bytes were successfully transferred before
  the interruption occurred.
 @author unascribed
 - seealso: java.io.InputStream
 - seealso: java.io.OutputStream
 - seealso: java.lang.Thread
 @since JDK1.0
 */
@interface JavaIoInterruptedIOException : JavaIoIOException {
 @public
  /*!
   @brief Reports how many bytes had been transferred as part of the I/O
  operation before it was interrupted.
   */
  jint bytesTransferred_;
}

#pragma mark Public

/*!
 @brief Constructs an <code>InterruptedIOException</code> with 
 <code>null</code> as its error detail message.
 */
- (instancetype)init;

/*!
 @brief Constructs an <code>InterruptedIOException</code> with the
  specified detail message.The string <code>s</code> can be
  retrieved later by the 
 <code><code>java.lang.Throwable</code></code>
  method of class <code>java.lang.Throwable</code>.
 @param s the detail message.
 */
- (instancetype)initWithNSString:(NSString *)s;

/*!
 @brief Constructs a new instance with given detail message and cause.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoInterruptedIOException)

FOUNDATION_EXPORT void JavaIoInterruptedIOException_init(JavaIoInterruptedIOException *self);

FOUNDATION_EXPORT JavaIoInterruptedIOException *new_JavaIoInterruptedIOException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoInterruptedIOException *create_JavaIoInterruptedIOException_init(void);

FOUNDATION_EXPORT void JavaIoInterruptedIOException_initWithNSString_(JavaIoInterruptedIOException *self, NSString *s);

FOUNDATION_EXPORT JavaIoInterruptedIOException *new_JavaIoInterruptedIOException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoInterruptedIOException *create_JavaIoInterruptedIOException_initWithNSString_(NSString *s);

FOUNDATION_EXPORT void JavaIoInterruptedIOException_initWithJavaLangThrowable_(JavaIoInterruptedIOException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaIoInterruptedIOException *new_JavaIoInterruptedIOException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoInterruptedIOException *create_JavaIoInterruptedIOException_initWithJavaLangThrowable_(JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaIoInterruptedIOException_initWithNSString_withJavaLangThrowable_(JavaIoInterruptedIOException *self, NSString *detailMessage, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaIoInterruptedIOException *new_JavaIoInterruptedIOException_initWithNSString_withJavaLangThrowable_(NSString *detailMessage, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoInterruptedIOException *create_JavaIoInterruptedIOException_initWithNSString_withJavaLangThrowable_(NSString *detailMessage, JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoInterruptedIOException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoInterruptedIOException")
