//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/security/auth/DestroyFailedException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaxSecurityAuthDestroyFailedException_INCLUDE_ALL")
#ifdef JavaxSecurityAuthDestroyFailedException_RESTRICT
#define JavaxSecurityAuthDestroyFailedException_INCLUDE_ALL 0
#else
#define JavaxSecurityAuthDestroyFailedException_INCLUDE_ALL 1
#endif
#undef JavaxSecurityAuthDestroyFailedException_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxSecurityAuthDestroyFailedException_) && (JavaxSecurityAuthDestroyFailedException_INCLUDE_ALL || defined(JavaxSecurityAuthDestroyFailedException_INCLUDE))
#define JavaxSecurityAuthDestroyFailedException_

#define JavaLangException_RESTRICT 1
#define JavaLangException_INCLUDE 1
#include "../../../java/lang/Exception.h"

/*!
 @brief Signals that the <code>Destroyable.destroy()</code> method failed.
 */
@interface JavaxSecurityAuthDestroyFailedException : JavaLangException

#pragma mark Public

/*!
 @brief Creates an exception of type <code>DestroyFailedException</code>.
 */
- (instancetype)init;

/*!
 @brief Creates an exception of type <code>DestroyFailedException</code>.
 @param message
 A detail message that describes the reason for this exception.
 */
- (instancetype)initWithNSString:(NSString *)message;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxSecurityAuthDestroyFailedException)

FOUNDATION_EXPORT void JavaxSecurityAuthDestroyFailedException_init(JavaxSecurityAuthDestroyFailedException *self);

FOUNDATION_EXPORT JavaxSecurityAuthDestroyFailedException *new_JavaxSecurityAuthDestroyFailedException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxSecurityAuthDestroyFailedException_initWithNSString_(JavaxSecurityAuthDestroyFailedException *self, NSString *message);

FOUNDATION_EXPORT JavaxSecurityAuthDestroyFailedException *new_JavaxSecurityAuthDestroyFailedException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxSecurityAuthDestroyFailedException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaxSecurityAuthDestroyFailedException_INCLUDE_ALL")
