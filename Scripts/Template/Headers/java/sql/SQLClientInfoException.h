//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/sql/SQLClientInfoException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSqlSQLClientInfoException")
#ifdef RESTRICT_JavaSqlSQLClientInfoException
#define INCLUDE_ALL_JavaSqlSQLClientInfoException 0
#else
#define INCLUDE_ALL_JavaSqlSQLClientInfoException 1
#endif
#undef RESTRICT_JavaSqlSQLClientInfoException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSqlSQLClientInfoException_) && (INCLUDE_ALL_JavaSqlSQLClientInfoException || defined(INCLUDE_JavaSqlSQLClientInfoException))
#define JavaSqlSQLClientInfoException_

#define RESTRICT_JavaSqlSQLException 1
#define INCLUDE_JavaSqlSQLException 1
#include "../../java/sql/SQLException.h"

@class JavaLangThrowable;
@protocol JavaUtilMap;

/*!
 @brief The subclass of <code>SQLException</code> is thrown when one or more client info properties
  could not be set on a <code>Connection</code>.In addition to the information provided
  by <code>SQLException</code>, a <code>SQLClientInfoException</code> provides a list of client info
  properties that were not set.
 Some databases do not allow multiple client info properties to be set
  atomically.  For those databases, it is possible that some of the client
  info properties had been set even though the <code>Connection.setClientInfo</code>
  method threw an exception.  An application can use the <code>getFailedProperties </code>
  method to retrieve a list of client info properties that were not set.  The
  properties are identified by passing a 
 <code>Map&lt;String,ClientInfoStatus&gt;</code> to
  the appropriate <code>SQLClientInfoException</code> constructor. 
 <p>
 - seealso: ClientInfoStatus
 - seealso: Connection#setClientInfo
 @since 1.6
 */
@interface JavaSqlSQLClientInfoException : JavaSqlSQLException

#pragma mark Public

/*!
 @brief Constructs a <code>SQLClientInfoException</code>  Object.
 The <code>reason</code>,
  <code>SQLState</code>, and failedProperties list are initialized to 
 <code> null</code> and the vendor code is initialized to 0.
  The <code>cause</code> is not initialized, and may subsequently be
  initialized by a call to the 
 <code>Throwable.initCause(java.lang.Throwable)</code> method. 
 <p>
 @since 1.6
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a <code>SQLClientInfoException</code> object initialized with a
  given <code>failedProperties</code>.
 The <code>reason</code> and <code>SQLState</code> are initialized
  to <code>null</code> and the vendor code is initialized to 0.
  The <code>cause</code> is not initialized, and may subsequently be
  initialized by a call to the 
 <code>Throwable.initCause(java.lang.Throwable)</code> method. 
 <p>
 @param failedProperties A Map containing the property values that could not                                   be set.  The keys in the Map
                                    contain the names of the client info
                                    properties that could not be set and
                                    the values contain one of the reason codes
                                    defined in 
  <code> ClientInfoStatus </code>   <p>
 @since 1.6
 */
- (instancetype __nonnull)initWithJavaUtilMap:(id<JavaUtilMap>)failedProperties;

/*!
 @brief Constructs a <code>SQLClientInfoException</code> object initialized with
  a given <code>cause</code> and <code>failedProperties</code>.
 The <code>reason</code>  is initialized to <code>null</code> if 
 <code>cause==null</code> or to <code>cause.toString()</code> if 
 <code>cause!=null</code> and the vendor code is initialized to 0. 
 <p>
 @param failedProperties A Map containing the property values that could not                                   be set.  The keys in the Map
                                    contain the names of the client info
                                    properties that could not be set and
                                    the values contain one of the reason codes
                                    defined in 
  <code> ClientInfoStatus </code>
 @param cause the (which is saved for later retrieval by the  <code> getCause() </code>  method); may be null indicating      the cause is non-existent or unknown.
    <p>
 @since 1.6
 */
- (instancetype __nonnull)initWithJavaUtilMap:(id<JavaUtilMap>)failedProperties
                        withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs a <code>SQLClientInfoException</code> object initialized with a
  given <code>reason</code> and <code>failedProperties</code>.
 The <code>SQLState</code> is initialized
  to <code>null</code> and the vendor code is initialized to 0.
  The <code>cause</code> is not initialized, and may subsequently be
  initialized by a call to the 
 <code>Throwable.initCause(java.lang.Throwable)</code> method. 
 <p>
 @param reason a description of the exception
 @param failedProperties A Map containing the property values that could not                                   be set.  The keys in the Map
                                    contain the names of the client info
                                    properties that could not be set and
                                    the values contain one of the reason codes
                                    defined in 
  <code> ClientInfoStatus </code>   <p>
 @since 1.6
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason
                           withJavaUtilMap:(id<JavaUtilMap>)failedProperties;

/*!
 @brief Constructs a <code>SQLClientInfoException</code> object initialized with a
  given <code>reason</code>, <code>cause</code> and 
 <code>failedProperties</code>.
 The  <code>SQLState</code> is initialized
  to <code>null</code> and the vendor code is initialized to 0. 
 <p>
 @param reason a description of the exception
 @param failedProperties A Map containing the property values that could not                                   be set.  The keys in the Map
                                    contain the names of the client info
                                    properties that could not be set and
                                    the values contain one of the reason codes
                                    defined in 
  <code> ClientInfoStatus </code>
 @param cause the underlying reason for this  <code> SQLException </code>  (which is saved for later retrieval by the  <code> getCause() </code>  method); may be null indicating      the cause is non-existent or unknown.
    <p>
 @since 1.6
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason
                           withJavaUtilMap:(id<JavaUtilMap>)failedProperties
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs a <code>SQLClientInfoException</code> object initialized with a
  given  <code>reason</code>, <code>SQLState</code>,
  <code>vendorCode</code>  and <code>failedProperties</code>.
 The <code>cause</code> is not initialized, and may subsequently be
  initialized by a call to the 
 <code>Throwable.initCause(java.lang.Throwable)</code> method. 
 <p>
 @param reason a description of the exception
 @param SQLState an XOPEN or SQL:2003 code identifying the exception
 @param vendorCode a database vendor-specific exception code
 @param failedProperties A Map containing the property values that could not                                   be set.  The keys in the Map
                                    contain the names of the client info
                                    properties that could not be set and
                                    the values contain one of the reason codes
                                    defined in 
  <code> ClientInfoStatus </code>   <p>
 @since 1.6
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason
                              withNSString:(NSString *)SQLState
                                   withInt:(jint)vendorCode
                           withJavaUtilMap:(id<JavaUtilMap>)failedProperties;

/*!
 @brief Constructs a <code>SQLClientInfoException</code> object initialized with a
  given  <code>reason</code>, <code>SQLState</code>,
  <code>cause</code>, <code>vendorCode</code> and 
 <code>failedProperties</code>.
 <p>
 @param reason a description of the exception
 @param SQLState an XOPEN or SQL:2003 code identifying the exception
 @param vendorCode a database vendor-specific exception code
 @param failedProperties A Map containing the property values that could not                                   be set.  The keys in the Map
                                    contain the names of the client info
                                    properties that could not be set and
                                    the values contain one of the reason codes
                                    defined in 
  <code> ClientInfoStatus </code>
 @param cause the underlying reason for this  <code> SQLException </code>  (which is saved for later retrieval by the  <code> getCause() </code>  method); may be null indicating      the cause is non-existent or unknown.
    <p>
 @since 1.6
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason
                              withNSString:(NSString *)SQLState
                                   withInt:(jint)vendorCode
                           withJavaUtilMap:(id<JavaUtilMap>)failedProperties
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs a <code>SQLClientInfoException</code> object initialized with a
  given  <code>reason</code>, <code>SQLState</code>  and 
 <code>failedProperties</code>.
 The <code>cause</code> is not initialized, and may subsequently be
  initialized by a call to the 
 <code>Throwable.initCause(java.lang.Throwable)</code> method. The vendor code
  is initialized to 0. 
 <p>
 @param reason a description of the exception
 @param SQLState an XOPEN or SQL:2003 code identifying the exception
 @param failedProperties A Map containing the property values that could not                                   be set.  The keys in the Map
                                    contain the names of the client info
                                    properties that could not be set and
                                    the values contain one of the reason codes
                                    defined in 
  <code> ClientInfoStatus </code>   <p>
 @since 1.6
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason
                              withNSString:(NSString *)SQLState
                           withJavaUtilMap:(id<JavaUtilMap>)failedProperties;

/*!
 @brief Constructs a <code>SQLClientInfoException</code> object initialized with a
  given  <code>reason</code>, <code>SQLState</code>, <code>cause</code>
  and <code>failedProperties</code>.The vendor code is initialized to 0.
 <p>
 @param reason a description of the exception
 @param SQLState an XOPEN or SQL:2003 code identifying the exception
 @param failedProperties A Map containing the property values that could not                                   be set.  The keys in the Map
                                    contain the names of the client info
                                    properties that could not be set and
                                    the values contain one of the reason codes
                                    defined in 
  <code> ClientInfoStatus </code>
 @param cause the underlying reason for this  <code> SQLException </code>  (which is saved for later retrieval by the  <code> getCause() </code>  method); may be null indicating      the cause is non-existent or unknown.
    <p>
 @since 1.6
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason
                              withNSString:(NSString *)SQLState
                           withJavaUtilMap:(id<JavaUtilMap>)failedProperties
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Returns the list of client info properties that could not be set.The
  keys in the Map  contain the names of the client info
  properties that could not be set and the values contain one of the
  reason codes defined in <code>ClientInfoStatus</code>
  <p>
 @return Map list containing the client info properties that could
  not be set 
 <p>
 @since 1.6
 */
- (id<JavaUtilMap>)getFailedProperties;

#pragma mark Package-Private

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                              withNSString:(NSString *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                              withNSString:(NSString *)arg1
                                   withInt:(jint)arg2 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                              withNSString:(NSString *)arg1
                                   withInt:(jint)arg2
                     withJavaLangThrowable:(JavaLangThrowable *)arg3 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                              withNSString:(NSString *)arg1
                     withJavaLangThrowable:(JavaLangThrowable *)arg2 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlSQLClientInfoException)

FOUNDATION_EXPORT void JavaSqlSQLClientInfoException_init(JavaSqlSQLClientInfoException *self);

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *new_JavaSqlSQLClientInfoException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *create_JavaSqlSQLClientInfoException_init(void);

FOUNDATION_EXPORT void JavaSqlSQLClientInfoException_initWithJavaUtilMap_(JavaSqlSQLClientInfoException *self, id<JavaUtilMap> failedProperties);

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *new_JavaSqlSQLClientInfoException_initWithJavaUtilMap_(id<JavaUtilMap> failedProperties) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *create_JavaSqlSQLClientInfoException_initWithJavaUtilMap_(id<JavaUtilMap> failedProperties);

FOUNDATION_EXPORT void JavaSqlSQLClientInfoException_initWithJavaUtilMap_withJavaLangThrowable_(JavaSqlSQLClientInfoException *self, id<JavaUtilMap> failedProperties, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *new_JavaSqlSQLClientInfoException_initWithJavaUtilMap_withJavaLangThrowable_(id<JavaUtilMap> failedProperties, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *create_JavaSqlSQLClientInfoException_initWithJavaUtilMap_withJavaLangThrowable_(id<JavaUtilMap> failedProperties, JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaSqlSQLClientInfoException_initWithNSString_withJavaUtilMap_(JavaSqlSQLClientInfoException *self, NSString *reason, id<JavaUtilMap> failedProperties);

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *new_JavaSqlSQLClientInfoException_initWithNSString_withJavaUtilMap_(NSString *reason, id<JavaUtilMap> failedProperties) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *create_JavaSqlSQLClientInfoException_initWithNSString_withJavaUtilMap_(NSString *reason, id<JavaUtilMap> failedProperties);

FOUNDATION_EXPORT void JavaSqlSQLClientInfoException_initWithNSString_withJavaUtilMap_withJavaLangThrowable_(JavaSqlSQLClientInfoException *self, NSString *reason, id<JavaUtilMap> failedProperties, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *new_JavaSqlSQLClientInfoException_initWithNSString_withJavaUtilMap_withJavaLangThrowable_(NSString *reason, id<JavaUtilMap> failedProperties, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *create_JavaSqlSQLClientInfoException_initWithNSString_withJavaUtilMap_withJavaLangThrowable_(NSString *reason, id<JavaUtilMap> failedProperties, JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaSqlSQLClientInfoException_initWithNSString_withNSString_withJavaUtilMap_(JavaSqlSQLClientInfoException *self, NSString *reason, NSString *SQLState, id<JavaUtilMap> failedProperties);

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *new_JavaSqlSQLClientInfoException_initWithNSString_withNSString_withJavaUtilMap_(NSString *reason, NSString *SQLState, id<JavaUtilMap> failedProperties) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *create_JavaSqlSQLClientInfoException_initWithNSString_withNSString_withJavaUtilMap_(NSString *reason, NSString *SQLState, id<JavaUtilMap> failedProperties);

FOUNDATION_EXPORT void JavaSqlSQLClientInfoException_initWithNSString_withNSString_withJavaUtilMap_withJavaLangThrowable_(JavaSqlSQLClientInfoException *self, NSString *reason, NSString *SQLState, id<JavaUtilMap> failedProperties, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *new_JavaSqlSQLClientInfoException_initWithNSString_withNSString_withJavaUtilMap_withJavaLangThrowable_(NSString *reason, NSString *SQLState, id<JavaUtilMap> failedProperties, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *create_JavaSqlSQLClientInfoException_initWithNSString_withNSString_withJavaUtilMap_withJavaLangThrowable_(NSString *reason, NSString *SQLState, id<JavaUtilMap> failedProperties, JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaSqlSQLClientInfoException_initWithNSString_withNSString_withInt_withJavaUtilMap_(JavaSqlSQLClientInfoException *self, NSString *reason, NSString *SQLState, jint vendorCode, id<JavaUtilMap> failedProperties);

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *new_JavaSqlSQLClientInfoException_initWithNSString_withNSString_withInt_withJavaUtilMap_(NSString *reason, NSString *SQLState, jint vendorCode, id<JavaUtilMap> failedProperties) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *create_JavaSqlSQLClientInfoException_initWithNSString_withNSString_withInt_withJavaUtilMap_(NSString *reason, NSString *SQLState, jint vendorCode, id<JavaUtilMap> failedProperties);

FOUNDATION_EXPORT void JavaSqlSQLClientInfoException_initWithNSString_withNSString_withInt_withJavaUtilMap_withJavaLangThrowable_(JavaSqlSQLClientInfoException *self, NSString *reason, NSString *SQLState, jint vendorCode, id<JavaUtilMap> failedProperties, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *new_JavaSqlSQLClientInfoException_initWithNSString_withNSString_withInt_withJavaUtilMap_withJavaLangThrowable_(NSString *reason, NSString *SQLState, jint vendorCode, id<JavaUtilMap> failedProperties, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *create_JavaSqlSQLClientInfoException_initWithNSString_withNSString_withInt_withJavaUtilMap_withJavaLangThrowable_(NSString *reason, NSString *SQLState, jint vendorCode, id<JavaUtilMap> failedProperties, JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSQLClientInfoException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSqlSQLClientInfoException")
