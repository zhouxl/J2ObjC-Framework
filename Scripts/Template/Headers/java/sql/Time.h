//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/sql/Time.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSqlTime")
#ifdef RESTRICT_JavaSqlTime
#define INCLUDE_ALL_JavaSqlTime 0
#else
#define INCLUDE_ALL_JavaSqlTime 1
#endif
#undef RESTRICT_JavaSqlTime

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSqlTime_) && (INCLUDE_ALL_JavaSqlTime || defined(INCLUDE_JavaSqlTime))
#define JavaSqlTime_

#define RESTRICT_JavaUtilDate 1
#define INCLUDE_JavaUtilDate 1
#include "java/util/Date.h"

/*!
 @brief <P>A thin wrapper around the <code>java.util.Date</code> class that allows the JDBC
  API to identify this as an SQL <code>TIME</code> value.
 The <code>Time</code>
  class adds formatting and
  parsing operations to support the JDBC escape syntax for time
  values. 
 <p>The date components should be set to the "zero epoch"
  value of January 1, 1970 and should not be accessed.
 */
@interface JavaSqlTime : JavaUtilDate
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Constructs a <code>Time</code> object initialized with the
  given values for the hour, minute, and second.
 The driver sets the date components to January 1, 1970.
  Any method that attempts to access the date components of a 
 <code>Time</code> object will throw a 
 <code>java.lang.IllegalArgumentException</code>.
  <P>
  The result is undefined if a given argument is out of bounds.
 @param hour 0 to 23
 @param minute 0 to 59
 @param second 0 to 59
 */
- (instancetype __nonnull)initWithInt:(jint)hour
                              withInt:(jint)minute
                              withInt:(jint)second __attribute__((deprecated));

/*!
 @brief Constructs a <code>Time</code> object using a milliseconds time value.
 @param time milliseconds since January 1, 1970, 00:00:00 GMT;              a negative number is milliseconds before
                 January 1, 1970, 00:00:00 GMT
 */
- (instancetype __nonnull)initWithLong:(jlong)time;

/*!
 @throw java.lang.IllegalArgumentExceptionif this
            method is invoked
 - seealso: #setDate
 */
- (jint)getDate __attribute__((deprecated));

/*!
 @throw java.lang.IllegalArgumentExceptionif this
            method is invoked
 */
- (jint)getDay __attribute__((deprecated));

/*!
 @throw java.lang.IllegalArgumentExceptionif this
            method is invoked
 - seealso: #setMonth
 */
- (jint)getMonth __attribute__((deprecated));

/*!
 @throw java.lang.IllegalArgumentExceptionif this
            method is invoked
 - seealso: #setYear
 */
- (jint)getYear __attribute__((deprecated));

/*!
 @throw java.lang.IllegalArgumentExceptionif this
            method is invoked
 - seealso: #getDate
 */
- (void)setDateWithInt:(jint)i __attribute__((deprecated));

/*!
 @throw java.lang.IllegalArgumentExceptionif this
            method is invoked
 - seealso: #getMonth
 */
- (void)setMonthWithInt:(jint)i __attribute__((deprecated));

/*!
 @brief Sets a <code>Time</code> object using a milliseconds time value.
 @param time milliseconds since January 1, 1970, 00:00:00 GMT;              a negative number is milliseconds before
                 January 1, 1970, 00:00:00 GMT
 */
- (void)setTimeWithLong:(jlong)time;

/*!
 @throw java.lang.IllegalArgumentExceptionif this
            method is invoked
 - seealso: #getYear
 */
- (void)setYearWithInt:(jint)i __attribute__((deprecated));

/*!
 @brief Formats a time in JDBC time escape format.
 @return a <code>String</code> in hh:mm:ss format
 */
- (NSString *)description;

/*!
 @brief Converts a string in JDBC time escape format to a <code>Time</code> value.
 @param s time in format "hh:mm:ss"
 @return a corresponding <code>Time</code> object
 */
+ (JavaSqlTime *)valueOfWithNSString:(NSString *)s;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithInt:(jint)arg0
                              withInt:(jint)arg1
                              withInt:(jint)arg2
                              withInt:(jint)arg3
                              withInt:(jint)arg4 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithInt:(jint)arg0
                              withInt:(jint)arg1
                              withInt:(jint)arg2
                              withInt:(jint)arg3
                              withInt:(jint)arg4
                              withInt:(jint)arg5 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlTime)

/*!
 @brief Private serial version unique ID to ensure serialization
  compatibility.
 */
inline jlong JavaSqlTime_get_serialVersionUID(void);
#define JavaSqlTime_serialVersionUID 8397324403548013681LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTime, serialVersionUID, jlong)

FOUNDATION_EXPORT void JavaSqlTime_initWithInt_withInt_withInt_(JavaSqlTime *self, jint hour, jint minute, jint second);

FOUNDATION_EXPORT JavaSqlTime *new_JavaSqlTime_initWithInt_withInt_withInt_(jint hour, jint minute, jint second) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlTime *create_JavaSqlTime_initWithInt_withInt_withInt_(jint hour, jint minute, jint second);

FOUNDATION_EXPORT void JavaSqlTime_initWithLong_(JavaSqlTime *self, jlong time);

FOUNDATION_EXPORT JavaSqlTime *new_JavaSqlTime_initWithLong_(jlong time) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlTime *create_JavaSqlTime_initWithLong_(jlong time);

FOUNDATION_EXPORT JavaSqlTime *JavaSqlTime_valueOfWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlTime)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSqlTime")
