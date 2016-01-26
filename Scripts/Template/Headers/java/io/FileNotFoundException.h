//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/FileNotFoundException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaIoFileNotFoundException_INCLUDE_ALL")
#ifdef JavaIoFileNotFoundException_RESTRICT
#define JavaIoFileNotFoundException_INCLUDE_ALL 0
#else
#define JavaIoFileNotFoundException_INCLUDE_ALL 1
#endif
#undef JavaIoFileNotFoundException_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoFileNotFoundException_) && (JavaIoFileNotFoundException_INCLUDE_ALL || defined(JavaIoFileNotFoundException_INCLUDE))
#define JavaIoFileNotFoundException_

#define JavaIoIOException_RESTRICT 1
#define JavaIoIOException_INCLUDE 1
#include "../../java/io/IOException.h"

/*!
 @brief Thrown when a file specified by a program cannot be found.
 */
@interface JavaIoFileNotFoundException : JavaIoIOException

#pragma mark Public

/*!
 @brief Constructs a new <code>FileNotFoundException</code> with its stack trace
 filled in.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>FileNotFoundException</code> with its stack trace and
 detail message filled in.
 @param detailMessage
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoFileNotFoundException)

FOUNDATION_EXPORT void JavaIoFileNotFoundException_init(JavaIoFileNotFoundException *self);

FOUNDATION_EXPORT JavaIoFileNotFoundException *new_JavaIoFileNotFoundException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaIoFileNotFoundException_initWithNSString_(JavaIoFileNotFoundException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaIoFileNotFoundException *new_JavaIoFileNotFoundException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoFileNotFoundException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaIoFileNotFoundException_INCLUDE_ALL")
