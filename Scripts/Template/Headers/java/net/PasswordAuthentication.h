//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/PasswordAuthentication.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetPasswordAuthentication")
#ifdef RESTRICT_JavaNetPasswordAuthentication
#define INCLUDE_ALL_JavaNetPasswordAuthentication 0
#else
#define INCLUDE_ALL_JavaNetPasswordAuthentication 1
#endif
#undef RESTRICT_JavaNetPasswordAuthentication

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNetPasswordAuthentication_) && (INCLUDE_ALL_JavaNetPasswordAuthentication || defined(INCLUDE_JavaNetPasswordAuthentication))
#define JavaNetPasswordAuthentication_

@class IOSCharArray;

/*!
 @brief The class PasswordAuthentication is a data holder that is used by
  Authenticator.It is simply a repository for a user name and a password.
 - seealso: java.net.Authenticator
 - seealso: java.net.Authenticator
 @author Bill Foote
 @since 1.2
 */
@interface JavaNetPasswordAuthentication : NSObject

#pragma mark Public

/*!
 @brief Creates a new <code>PasswordAuthentication</code> object from the given
  user name and password.
 <p> Note that the given user password is cloned before it is stored in
  the new <code>PasswordAuthentication</code> object.
 @param userName the user name
 @param password the user's password
 */
- (instancetype)initWithNSString:(NSString *)userName
                   withCharArray:(IOSCharArray *)password;

/*!
 @brief Returns the user password.
 <p> Note that this method returns a reference to the password. It is
  the caller's responsibility to zero out the password information after
  it is no longer needed.
 @return the password
 */
- (IOSCharArray *)getPassword;

/*!
 @brief Returns the user name.
 @return the user name
 */
- (NSString *)getUserName;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetPasswordAuthentication)

FOUNDATION_EXPORT void JavaNetPasswordAuthentication_initWithNSString_withCharArray_(JavaNetPasswordAuthentication *self, NSString *userName, IOSCharArray *password);

FOUNDATION_EXPORT JavaNetPasswordAuthentication *new_JavaNetPasswordAuthentication_initWithNSString_withCharArray_(NSString *userName, IOSCharArray *password) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetPasswordAuthentication *create_JavaNetPasswordAuthentication_initWithNSString_withCharArray_(NSString *userName, IOSCharArray *password);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetPasswordAuthentication)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetPasswordAuthentication")
