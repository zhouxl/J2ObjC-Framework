//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/jar/JarException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaUtilJarJarException_INCLUDE_ALL")
#ifdef JavaUtilJarJarException_RESTRICT
#define JavaUtilJarJarException_INCLUDE_ALL 0
#else
#define JavaUtilJarJarException_INCLUDE_ALL 1
#endif
#undef JavaUtilJarJarException_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilJarJarException_) && (JavaUtilJarJarException_INCLUDE_ALL || defined(JavaUtilJarJarException_INCLUDE))
#define JavaUtilJarJarException_

#define JavaUtilZipZipException_RESTRICT 1
#define JavaUtilZipZipException_INCLUDE 1
#include "../../../java/util/zip/ZipException.h"

/*!
 @brief This runtime exception is thrown when a problem occurs while reading a JAR
 file.
 */
@interface JavaUtilJarJarException : JavaUtilZipZipException

#pragma mark Public

/*!
 @brief Constructs a new <code>JarException</code> instance.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>JarException</code> instance with the specified
 message.
 @param detailMessage
 the detail message for the exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilJarJarException)

FOUNDATION_EXPORT void JavaUtilJarJarException_init(JavaUtilJarJarException *self);

FOUNDATION_EXPORT JavaUtilJarJarException *new_JavaUtilJarJarException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilJarJarException_initWithNSString_(JavaUtilJarJarException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaUtilJarJarException *new_JavaUtilJarJarException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilJarJarException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaUtilJarJarException_INCLUDE_ALL")
