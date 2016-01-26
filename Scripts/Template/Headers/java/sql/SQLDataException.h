//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/SQLDataException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaSqlSQLDataException_INCLUDE_ALL")
#ifdef JavaSqlSQLDataException_RESTRICT
#define JavaSqlSQLDataException_INCLUDE_ALL 0
#else
#define JavaSqlSQLDataException_INCLUDE_ALL 1
#endif
#undef JavaSqlSQLDataException_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSqlSQLDataException_) && (JavaSqlSQLDataException_INCLUDE_ALL || defined(JavaSqlSQLDataException_INCLUDE))
#define JavaSqlSQLDataException_

#define JavaSqlSQLNonTransientException_RESTRICT 1
#define JavaSqlSQLNonTransientException_INCLUDE 1
#include "../../java/sql/SQLNonTransientException.h"

@class JavaLangThrowable;

/*!
 @brief An exception, which is subclass of SQLException, is thrown when various data
 errors arise.
 These errors including division by 0 and invalid arguments to
 functions
 */
@interface JavaSqlSQLDataException : JavaSqlSQLNonTransientException

#pragma mark Public

/*!
 @brief Creates an SQLDataException object.
 The Reason string is set to null, the
 SQLState string is set to null and the Error Code is set to 0.
 */
- (instancetype)init;

/*!
 @brief Creates an SQLDataException object.
 The Reason string is set to the given
 reason string, the SQLState string is set to null and the Error Code is
 set to 0.
 @param reason
 the string to use as the Reason string
 */
- (instancetype)initWithNSString:(NSString *)reason;

/*!
 @brief Creates an SQLDataException object.
 The Reason string is set to the given
 reason string, the SQLState string is set to the given SQLState string
 and the Error Code is set to 0.
 @param reason
 the string to use as the Reason string
 @param sqlState
 the string to use as the SQLState string
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState;

/*!
 @brief Creates an SQLDataException object.
 The Reason string is set to the given
 reason string, the SQLState string is set to the given SQLState string
 and the Error Code is set to the given error code value.
 @param reason
 the string to use as the Reason string
 @param sqlState
 the string to use as the SQLState string
 @param vendorCode
 the integer value for the error code
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                         withInt:(jint)vendorCode;

/*!
 @brief Creates an SQLDataException object.
 The Reason string is set to the given
 reason string, the SQLState string is set to the given SQLState string ,
 the Error Code is set to the given error code value, and the cause
 Throwable object is set to the given cause Throwable object.
 @param reason
 the string to use as the Reason string
 @param sqlState
 the string to use as the SQLState string
 @param vendorCode
 the integer value for the error code
 @param cause
 the Throwable object for the underlying reason this
 SQLException
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                         withInt:(jint)vendorCode
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Creates an SQLDataException object.
 The Reason string is set to the given
 reason string, the SQLState string is set to the given SQLState string
 and the cause Throwable object is set to the given cause Throwable
 object.
 @param reason
 the string to use as the Reason string
 @param sqlState
 the string to use as the SQLState string
 @param cause
 the Throwable object for the underlying reason this
 SQLException
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Creates an SQLDataException object.
 The Reason string is set to the given
 and the cause Throwable object is set to the given cause Throwable
 object.
 @param reason
 the string to use as the Reason string
 @param cause
 the Throwable object for the underlying reason this
 SQLException
 */
- (instancetype)initWithNSString:(NSString *)reason
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Creates an SQLDataException object.
 The Reason string is set to the null
 if cause == null or cause.toString() if cause!=null,and the cause
 Throwable object is set to the given cause Throwable object.
 @param cause
 the Throwable object for the underlying reason this
 SQLException
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlSQLDataException)

FOUNDATION_EXPORT void JavaSqlSQLDataException_init(JavaSqlSQLDataException *self);

FOUNDATION_EXPORT JavaSqlSQLDataException *new_JavaSqlSQLDataException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLDataException_initWithNSString_(JavaSqlSQLDataException *self, NSString *reason);

FOUNDATION_EXPORT JavaSqlSQLDataException *new_JavaSqlSQLDataException_initWithNSString_(NSString *reason) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLDataException_initWithNSString_withNSString_(JavaSqlSQLDataException *self, NSString *reason, NSString *sqlState);

FOUNDATION_EXPORT JavaSqlSQLDataException *new_JavaSqlSQLDataException_initWithNSString_withNSString_(NSString *reason, NSString *sqlState) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLDataException_initWithNSString_withNSString_withInt_(JavaSqlSQLDataException *self, NSString *reason, NSString *sqlState, jint vendorCode);

FOUNDATION_EXPORT JavaSqlSQLDataException *new_JavaSqlSQLDataException_initWithNSString_withNSString_withInt_(NSString *reason, NSString *sqlState, jint vendorCode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLDataException_initWithJavaLangThrowable_(JavaSqlSQLDataException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLDataException *new_JavaSqlSQLDataException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLDataException_initWithNSString_withJavaLangThrowable_(JavaSqlSQLDataException *self, NSString *reason, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLDataException *new_JavaSqlSQLDataException_initWithNSString_withJavaLangThrowable_(NSString *reason, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLDataException_initWithNSString_withNSString_withJavaLangThrowable_(JavaSqlSQLDataException *self, NSString *reason, NSString *sqlState, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLDataException *new_JavaSqlSQLDataException_initWithNSString_withNSString_withJavaLangThrowable_(NSString *reason, NSString *sqlState, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLDataException_initWithNSString_withNSString_withInt_withJavaLangThrowable_(JavaSqlSQLDataException *self, NSString *reason, NSString *sqlState, jint vendorCode, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLDataException *new_JavaSqlSQLDataException_initWithNSString_withNSString_withInt_withJavaLangThrowable_(NSString *reason, NSString *sqlState, jint vendorCode, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSQLDataException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaSqlSQLDataException_INCLUDE_ALL")
