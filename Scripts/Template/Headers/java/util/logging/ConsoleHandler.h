//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/logging/ConsoleHandler.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilLoggingConsoleHandler")
#ifdef RESTRICT_JavaUtilLoggingConsoleHandler
#define INCLUDE_ALL_JavaUtilLoggingConsoleHandler 0
#else
#define INCLUDE_ALL_JavaUtilLoggingConsoleHandler 1
#endif
#undef RESTRICT_JavaUtilLoggingConsoleHandler

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilLoggingConsoleHandler_) && (INCLUDE_ALL_JavaUtilLoggingConsoleHandler || defined(INCLUDE_JavaUtilLoggingConsoleHandler))
#define JavaUtilLoggingConsoleHandler_

#define RESTRICT_JavaUtilLoggingStreamHandler 1
#define INCLUDE_JavaUtilLoggingStreamHandler 1
#include "java/util/logging/StreamHandler.h"

@class JavaIoOutputStream;
@class JavaUtilLoggingFormatter;
@class JavaUtilLoggingLogRecord;

/*!
 @brief This <tt>Handler</tt> publishes log records to <tt>System.err</tt>.
 By default the <tt>SimpleFormatter</tt> is used to generate brief summaries. 
 <p>
  <b>Configuration:</b>
  By default each <tt>ConsoleHandler</tt> is initialized using the following 
 <tt>LogManager</tt> configuration properties.  If properties are not defined
  (or have invalid values) then the specified default values are used. 
 <ul>
  <li>   java.util.logging.ConsoleHandler.level
         specifies the default level for the <tt>Handler</tt>
         (defaults to <tt>Level.INFO</tt>).
  <li>   java.util.logging.ConsoleHandler.filter
         specifies the name of a <tt>Filter</tt> class to use
         (defaults to no <tt>Filter</tt>).
  <li>   java.util.logging.ConsoleHandler.formatter
         specifies the name of a <tt>Formatter</tt> class to use
         (defaults to <tt>java.util.logging.SimpleFormatter</tt>).
  <li>   java.util.logging.ConsoleHandler.encoding
         the name of the character set encoding to use (defaults to
         the default platform encoding). 
 </ul>
  <p>
 @since 1.4
 */
@interface JavaUtilLoggingConsoleHandler : JavaUtilLoggingStreamHandler

#pragma mark Public

/*!
 @brief Create a <tt>ConsoleHandler</tt> for <tt>System.err</tt>.
 <p>
  The <tt>ConsoleHandler</tt> is configured based on 
 <tt>LogManager</tt> properties (or their default values).
 */
- (instancetype __nonnull)init;

/*!
 @brief Override <tt>StreamHandler.close</tt> to do a flush but not
  to close the output stream.That is, we do <b>not</b>
  close <tt>System.err</tt>.
 */
- (void)close;

/*!
 @brief Publish a <tt>LogRecord</tt>.
 <p>
  The logging request was made initially to a <tt>Logger</tt> object,
  which initialized the <tt>LogRecord</tt> and forwarded it here. 
 <p>
 @param record description of the log event. A null record is                  silently ignored and is not published
 */
- (void)publishWithJavaUtilLoggingLogRecord:(JavaUtilLoggingLogRecord *)record;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)arg0
                        withJavaUtilLoggingFormatter:(JavaUtilLoggingFormatter *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilLoggingConsoleHandler)

FOUNDATION_EXPORT void JavaUtilLoggingConsoleHandler_init(JavaUtilLoggingConsoleHandler *self);

FOUNDATION_EXPORT JavaUtilLoggingConsoleHandler *new_JavaUtilLoggingConsoleHandler_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilLoggingConsoleHandler *create_JavaUtilLoggingConsoleHandler_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLoggingConsoleHandler)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilLoggingConsoleHandler")
