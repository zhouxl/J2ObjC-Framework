//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/Date.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaUtilDate_INCLUDE_ALL")
#ifdef JavaUtilDate_RESTRICT
#define JavaUtilDate_INCLUDE_ALL 0
#else
#define JavaUtilDate_INCLUDE_ALL 1
#endif
#undef JavaUtilDate_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilDate_) && (JavaUtilDate_INCLUDE_ALL || defined(JavaUtilDate_INCLUDE))
#define JavaUtilDate_

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "../../java/io/Serializable.h"

#define JavaLangComparable_RESTRICT 1
#define JavaLangComparable_INCLUDE 1
#include "../../java/lang/Comparable.h"

/*!
 @brief A specific moment in time, with millisecond precision.
 Values typically come
 from <code>System.currentTimeMillis</code>, and are always UTC, regardless of the
 system's time zone. This is often called "Unix time" or "epoch time".
 <p>Instances of this class are suitable for comparison, but little else.
 Use <code>java.text.DateFormat</code> to format a <code>Date</code> for display to a human.
 Use <code>Calendar</code> to break down a <code>Date</code> if you need to extract fields such
 as the current month or day of week, or to construct a <code>Date</code> from a broken-down
 time. That is: this class' deprecated display-related functionality is now provided
 by <code>DateFormat</code>, and this class' deprecated computational functionality is
 now provided by <code>Calendar</code>. Both of these other classes (and their subclasses)
 allow you to interpret a <code>Date</code> in a given time zone.
 <p>Note that, surprisingly, instances of this class are mutable.
 */
@interface JavaUtilDate : NSObject < JavaIoSerializable, NSCopying, JavaLangComparable >

#pragma mark Public

/*!
 @brief Initializes this <code>Date</code> instance to the current time.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>Date</code> initialized to midnight in the default <code>TimeZone</code> on
 the specified date.
 @param year
 the year, 0 is 1900.
 @param month
 the month, 0 - 11.
 @param day
 the day of the month, 1 - 31.
 */
- (instancetype)initWithInt:(jint)year
                    withInt:(jint)month
                    withInt:(jint)day __attribute__((deprecated));

/*!
 @brief Constructs a new <code>Date</code> initialized to the specified date and time in the
 default <code>TimeZone</code>.
 @param year
 the year, 0 is 1900.
 @param month
 the month, 0 - 11.
 @param day
 the day of the month, 1 - 31.
 @param hour
 the hour of day, 0 - 23.
 @param minute
 the minute of the hour, 0 - 59.
 */
- (instancetype)initWithInt:(jint)year
                    withInt:(jint)month
                    withInt:(jint)day
                    withInt:(jint)hour
                    withInt:(jint)minute __attribute__((deprecated));

/*!
 @brief Constructs a new <code>Date</code> initialized to the specified date and time in the
 default <code>TimeZone</code>.
 @param year
 the year, 0 is 1900.
 @param month
 the month, 0 - 11.
 @param day
 the day of the month, 1 - 31.
 @param hour
 the hour of day, 0 - 23.
 @param minute
 the minute of the hour, 0 - 59.
 @param second
 the second of the minute, 0 - 59.
 */
- (instancetype)initWithInt:(jint)year
                    withInt:(jint)month
                    withInt:(jint)day
                    withInt:(jint)hour
                    withInt:(jint)minute
                    withInt:(jint)second __attribute__((deprecated));

/*!
 @brief Initializes this <code>Date</code> instance using the specified millisecond value.
 The
 value is the number of milliseconds since Jan. 1, 1970 GMT.
 @param milliseconds
 the number of milliseconds since Jan. 1, 1970 GMT.
 */
- (instancetype)initWithLong:(jlong)milliseconds;

/*!
 @brief Constructs a new <code>Date</code> initialized to the date and time parsed from the
 specified String.
 @param string
 the String to parse.
 */
- (instancetype)initWithNSString:(NSString *)string __attribute__((deprecated));

/*!
 @brief Returns if this <code>Date</code> is after the specified Date.
 @param date
 a Date instance to compare.
 @return <code>true</code> if this <code>Date</code> is after the specified <code>Date</code>,
 <code>false</code> otherwise.
 */
- (jboolean)afterWithJavaUtilDate:(JavaUtilDate *)date;

/*!
 @brief Returns if this <code>Date</code> is before the specified Date.
 @param date
 a <code>Date</code> instance to compare.
 @return <code>true</code> if this <code>Date</code> is before the specified <code>Date</code>,
 <code>false</code> otherwise.
 */
- (jboolean)beforeWithJavaUtilDate:(JavaUtilDate *)date;

/*!
 @brief Returns a new <code>Date</code> with the same millisecond value as this <code>Date</code>.
 @return a shallow copy of this <code>Date</code>.
 - seealso: java.lang.Cloneable
 */
- (id)clone;

/*!
 @brief Compare the receiver to the specified <code>Date</code> to determine the relative
 ordering.
 @param date
 a <code>Date</code> to compare against.
 @return an <code>int < 0</code> if this <code>Date</code> is less than the specified <code>Date</code>, <code>0</code> if
 they are equal, and an <code>int > 0</code> if this <code>Date</code> is greater.
 */
- (jint)compareToWithId:(JavaUtilDate *)date;

/*!
 @brief Compares the specified object to this <code>Date</code> and returns if they are equal.
 To be equal, the object must be an instance of <code>Date</code> and have the same millisecond
 value.
 @param object
 the object to compare with this object.
 @return <code>true</code> if the specified object is equal to this <code>Date</code>, <code>false</code>
 otherwise.
 - seealso: #hashCode
 */
- (jboolean)isEqual:(id)object;

/*!
 @brief Returns the gregorian calendar day of the month for this <code>Date</code> object.
 @return the day of the month.
 */
- (jint)getDate __attribute__((deprecated));

/*!
 @brief Returns the gregorian calendar day of the week for this <code>Date</code> object.
 @return the day of the week.
 */
- (jint)getDay __attribute__((deprecated));

/*!
 @brief Returns the gregorian calendar hour of the day for this <code>Date</code> object.
 @return the hour of the day.
 */
- (jint)getHours __attribute__((deprecated));

/*!
 @brief Returns the gregorian calendar minute of the hour for this <code>Date</code> object.
 @return the minutes.
 */
- (jint)getMinutes __attribute__((deprecated));

/*!
 @brief Returns the gregorian calendar month for this <code>Date</code> object.
 @return the month.
 */
- (jint)getMonth __attribute__((deprecated));

/*!
 @brief Returns the gregorian calendar second of the minute for this <code>Date</code> object.
 @return the seconds.
 */
- (jint)getSeconds __attribute__((deprecated));

/*!
 @brief Returns this <code>Date</code> as a millisecond value.
 The value is the number of
 milliseconds since Jan. 1, 1970, midnight GMT.
 @return the number of milliseconds since Jan. 1, 1970, midnight GMT.
 */
- (jlong)getTime;

/*!
 @brief Returns the timezone offset in minutes of the default <code>TimeZone</code>.
 @return the timezone offset in minutes of the default <code>TimeZone</code>.
 */
- (jint)getTimezoneOffset __attribute__((deprecated));

/*!
 @brief Returns the gregorian calendar year since 1900 for this <code>Date</code> object.
 @return the year - 1900.
 */
- (jint)getYear __attribute__((deprecated));

/*!
 @brief Returns an integer hash code for the receiver.
 Objects which are equal
 return the same value for this method.
 @return this <code>Date</code>'s hash.
 - seealso: #equals
 */
- (NSUInteger)hash;

/*!
 @brief Returns the millisecond value of the date and time parsed from the
 specified <code>String</code>.
 Many date/time formats are recognized, including IETF
 standard syntax, i.e. Tue, 22 Jun 1999 12:16:00 GMT-0500
 @param string
 the String to parse.
 @return the millisecond value parsed from the String.
 */
+ (jlong)parseWithNSString:(NSString *)string __attribute__((deprecated));

/*!
 @brief Sets the gregorian calendar day of the month for this <code>Date</code> object.
 @param day
 the day of the month.
 */
- (void)setDateWithInt:(jint)day __attribute__((deprecated));

/*!
 @brief Sets the gregorian calendar hour of the day for this <code>Date</code> object.
 @param hour
 the hour of the day.
 */
- (void)setHoursWithInt:(jint)hour __attribute__((deprecated));

/*!
 @brief Sets the gregorian calendar minute of the hour for this <code>Date</code> object.
 @param minute
 the minutes.
 */
- (void)setMinutesWithInt:(jint)minute __attribute__((deprecated));

/*!
 @brief Sets the gregorian calendar month for this <code>Date</code> object.
 @param month
 the month.
 */
- (void)setMonthWithInt:(jint)month __attribute__((deprecated));

/*!
 @brief Sets the gregorian calendar second of the minute for this <code>Date</code> object.
 @param second
 the seconds.
 */
- (void)setSecondsWithInt:(jint)second __attribute__((deprecated));

/*!
 @brief Sets this <code>Date</code> to the specified millisecond value.
 The value is the
 number of milliseconds since Jan. 1, 1970 GMT.
 @param milliseconds
 the number of milliseconds since Jan. 1, 1970 GMT.
 */
- (void)setTimeWithLong:(jlong)milliseconds;

/*!
 @brief Sets the gregorian calendar year since 1900 for this <code>Date</code> object.
 @param year
 the year since 1900.
 */
- (void)setYearWithInt:(jint)year __attribute__((deprecated));

/*!
 @brief Returns the string representation of this <code>Date</code> in GMT in the format
 <code>"22 Jun 1999 13:02:00 GMT"</code>.
 */
- (NSString *)toGMTString __attribute__((deprecated));

/*!
 @brief Returns the string representation of this <code>Date</code> for the default <code>Locale</code>.
 */
- (NSString *)toLocaleString __attribute__((deprecated));

/*!
 @brief Returns a string representation of this <code>Date</code>.
 The formatting is equivalent to using a <code>SimpleDateFormat</code> with
 the format string "EEE MMM dd HH:mm:ss zzz yyyy", which looks something
 like "Tue Jun 22 13:07:00 PDT 1999". The current default time zone and
 locale are used. If you need control over the time zone or locale,
 use <code>SimpleDateFormat</code> instead.
 */
- (NSString *)description;

/*!
 @brief Returns the millisecond value of the specified date and time in GMT.
 @param year
 the year, 0 is 1900.
 @param month
 the month, 0 - 11.
 @param day
 the day of the month, 1 - 31.
 @param hour
 the hour of day, 0 - 23.
 @param minute
 the minute of the hour, 0 - 59.
 @param second
 the second of the minute, 0 - 59.
 @return the date and time in GMT in milliseconds.
 */
+ (jlong)UTCWithInt:(jint)year
            withInt:(jint)month
            withInt:(jint)day
            withInt:(jint)hour
            withInt:(jint)minute
            withInt:(jint)second __attribute__((deprecated));

@end

J2OBJC_STATIC_INIT(JavaUtilDate)

FOUNDATION_EXPORT void JavaUtilDate_init(JavaUtilDate *self);

FOUNDATION_EXPORT JavaUtilDate *new_JavaUtilDate_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilDate_initWithInt_withInt_withInt_(JavaUtilDate *self, jint year, jint month, jint day);

FOUNDATION_EXPORT JavaUtilDate *new_JavaUtilDate_initWithInt_withInt_withInt_(jint year, jint month, jint day) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilDate_initWithInt_withInt_withInt_withInt_withInt_(JavaUtilDate *self, jint year, jint month, jint day, jint hour, jint minute);

FOUNDATION_EXPORT JavaUtilDate *new_JavaUtilDate_initWithInt_withInt_withInt_withInt_withInt_(jint year, jint month, jint day, jint hour, jint minute) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilDate_initWithInt_withInt_withInt_withInt_withInt_withInt_(JavaUtilDate *self, jint year, jint month, jint day, jint hour, jint minute, jint second);

FOUNDATION_EXPORT JavaUtilDate *new_JavaUtilDate_initWithInt_withInt_withInt_withInt_withInt_withInt_(jint year, jint month, jint day, jint hour, jint minute, jint second) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilDate_initWithLong_(JavaUtilDate *self, jlong milliseconds);

FOUNDATION_EXPORT JavaUtilDate *new_JavaUtilDate_initWithLong_(jlong milliseconds) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilDate_initWithNSString_(JavaUtilDate *self, NSString *string);

FOUNDATION_EXPORT JavaUtilDate *new_JavaUtilDate_initWithNSString_(NSString *string) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT jlong JavaUtilDate_parseWithNSString_(NSString *string);

FOUNDATION_EXPORT jlong JavaUtilDate_UTCWithInt_withInt_withInt_withInt_withInt_withInt_(jint year, jint month, jint day, jint hour, jint minute, jint second);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilDate)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaUtilDate_INCLUDE_ALL")
