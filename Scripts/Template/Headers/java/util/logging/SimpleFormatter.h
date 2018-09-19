//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/logging/SimpleFormatter.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilLoggingSimpleFormatter")
#ifdef RESTRICT_JavaUtilLoggingSimpleFormatter
#define INCLUDE_ALL_JavaUtilLoggingSimpleFormatter 0
#else
#define INCLUDE_ALL_JavaUtilLoggingSimpleFormatter 1
#endif
#undef RESTRICT_JavaUtilLoggingSimpleFormatter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilLoggingSimpleFormatter_) && (INCLUDE_ALL_JavaUtilLoggingSimpleFormatter || defined(INCLUDE_JavaUtilLoggingSimpleFormatter))
#define JavaUtilLoggingSimpleFormatter_

#define RESTRICT_JavaUtilLoggingFormatter 1
#define INCLUDE_JavaUtilLoggingFormatter 1
#include "../../../java/util/logging/Formatter.h"

@class JavaUtilLoggingLogRecord;

/*!
 @brief Print a brief summary of the <code>LogRecord</code> in a human readable
  format.The summary will typically be 1 or 2 lines.
 <p>
  <a name="formatting">
  <b>Configuration:</b></a>
  The <code>SimpleFormatter</code> is initialized with the 
 <a href="../Formatter.html#syntax">format string</a>
  specified in the <code>java.util.logging.SimpleFormatter.format</code>
  property to format the log messages.
  This property can be defined
  in the properties
  configuration file
  or as a system property.  If this property is set in both
  the logging properties and system properties,
  the format string specified in the system property will be used.
  If this property is not defined or the given format string is 
 illegal,
  the default format is implementation-specific.
 @since 1.4
 - seealso: java.util.Formatter
 */
@interface JavaUtilLoggingSimpleFormatter : JavaUtilLoggingFormatter

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Format the given LogRecord.
 <p>
  The formatting can be customized by specifying the 
 <a href="../Formatter.html#syntax">format string</a>
  in the <a href="#formatting">
  <code>java.util.logging.SimpleFormatter.format</code></a> property.
  The given <code>LogRecord</code> will be formatted as if by calling: 
 @code

     <code>String.format</code>(format, date, source, logger, level, message, thrown); 
  
@endcode
  where the arguments are:<br>
  <ol>
  <li><code>format</code> - the <code>java.util.Formatter</code>
  format string specified in the
      <code>java.util.logging.SimpleFormatter.format</code> property
      or the default format.</li>
  <li><code>date</code> - a <code>Date</code> object representing
      time of the log record.</li>
  <li><code>source</code> - a string representing the caller, if available;
      otherwise, the logger's name.</li>
  <li><code>logger</code> - the logger's name.</li>
  <li><code>level</code> - the level
 .</li>
  <li><code>message</code> - the formatted log message
      returned from the <code>Formatter.formatMessage(LogRecord)</code>
      method.  It uses <code>java.text</code>
      formatting and does not use the <code>java.util.Formatter
      format</code>
  argument.</li>
  <li><code>thrown</code> - a string representing
      the throwable
      associated with the log record and its backtrace
      beginning with a newline character, if any;
      otherwise, an empty string.</li>
  </ol>
  
 <p>Some example formats:<br>
  <ul>
  <li> <code>java.util.logging.SimpleFormatter.format="%4$s: %5$s [%1$tc]%n"</code>
      <p>This prints 1 line with the log level (<code>4$</code>),
      the log message (<code>5$</code>) and the timestamp (<code>1$</code>) in
      a square bracket.     
 @code

      WARNING: warning message [Tue Mar 22 13:11:31 PDT 2011]     
     
@endcode</li>
  <li> <code>java.util.logging.SimpleFormatter.format="%1$tc %2$s%n%4$s: %5$s%6$s%n"</code>
      <p>This prints 2 lines where the first line includes
      the timestamp (<code>1$</code>) and the source (<code>2$</code>);
      the second line includes the log level (<code>4$</code>) and
      the log message (<code>5$</code>) followed with the throwable
      and its backtrace (<code>6$</code>), if any:
      @code

      Tue Mar 22 13:11:31 PDT 2011 MyClass fatal
      SEVERE: several message with an exception
      java.lang.IllegalArgumentException: invalid argument
              at MyClass.mash(MyClass.java:9)
              at MyClass.crunch(MyClass.java:6)
              at MyClass.main(MyClass.java:3)     
     
@endcode</li>
  <li> <code>java.util.logging.SimpleFormatter.format="%1$tb %1$td, %1$tY %1$tl:%1$tM:%1$tS %1$Tp %2$s%n%4$s: %5$s%n"</code>
       <p>This prints 2 lines similar to the example above
          with a different date/time formatting and does not print
          the throwable and its backtrace:     
 @code

      Mar 22, 2011 1:11:31 PM MyClass fatal
      SEVERE: several message with an exception     
     
@endcode</li>
  </ul>
  <p>This method can also be overridden in a subclass.
  It is recommended to use the <code>Formatter.formatMessage</code>
  convenience method to localize and format the message field.
 @param record the log record to be formatted.
 @return a formatted log record
 */
- (NSString *)formatWithJavaUtilLoggingLogRecord:(JavaUtilLoggingLogRecord *)record;

@end

J2OBJC_STATIC_INIT(JavaUtilLoggingSimpleFormatter)

FOUNDATION_EXPORT void JavaUtilLoggingSimpleFormatter_init(JavaUtilLoggingSimpleFormatter *self);

FOUNDATION_EXPORT JavaUtilLoggingSimpleFormatter *new_JavaUtilLoggingSimpleFormatter_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilLoggingSimpleFormatter *create_JavaUtilLoggingSimpleFormatter_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLoggingSimpleFormatter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilLoggingSimpleFormatter")
