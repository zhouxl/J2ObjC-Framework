//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/PropertyResourceBundle.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaUtilPropertyResourceBundle_INCLUDE_ALL")
#ifdef JavaUtilPropertyResourceBundle_RESTRICT
#define JavaUtilPropertyResourceBundle_INCLUDE_ALL 0
#else
#define JavaUtilPropertyResourceBundle_INCLUDE_ALL 1
#endif
#undef JavaUtilPropertyResourceBundle_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilPropertyResourceBundle_) && (JavaUtilPropertyResourceBundle_INCLUDE_ALL || defined(JavaUtilPropertyResourceBundle_INCLUDE))
#define JavaUtilPropertyResourceBundle_

#define JavaUtilResourceBundle_RESTRICT 1
#define JavaUtilResourceBundle_INCLUDE 1
#include "../../java/util/ResourceBundle.h"

@class JavaIoInputStream;
@class JavaIoReader;
@class JavaUtilProperties;
@protocol JavaUtilEnumeration;
@protocol JavaUtilSet;

/*!
 @brief <code>PropertyResourceBundle</code> loads resources from an <code>InputStream</code>.
 All resources are
 Strings. The resources must be of the form <code>key=value</code>, one
 resource per line (see Properties).
 - seealso: ResourceBundle
 - seealso: Properties
 @since 1.1
 */
@interface JavaUtilPropertyResourceBundle : JavaUtilResourceBundle {
 @public
  JavaUtilProperties *resources_;
}

#pragma mark Public

/*!
 @brief Constructs a new instance of <code>PropertyResourceBundle</code> and loads the
 properties file from the specified <code>InputStream</code>.
 @param stream
 the <code>InputStream</code>.
 @throws IOException
 if an error occurs during a read operation on the
 <code>InputStream</code>.
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)stream;

/*!
 @brief Constructs a new resource bundle with properties read from <code>reader</code>.
 @param reader the <code>Reader</code>
 @throws IOException
 @since 1.6
 */
- (instancetype)initWithJavaIoReader:(JavaIoReader *)reader;

- (id<JavaUtilEnumeration>)getKeys;

- (id)handleGetObjectWithNSString:(NSString *)key;

#pragma mark Protected

- (id<JavaUtilSet>)handleKeySet;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilPropertyResourceBundle)

J2OBJC_FIELD_SETTER(JavaUtilPropertyResourceBundle, resources_, JavaUtilProperties *)

FOUNDATION_EXPORT void JavaUtilPropertyResourceBundle_initWithJavaIoInputStream_(JavaUtilPropertyResourceBundle *self, JavaIoInputStream *stream);

FOUNDATION_EXPORT JavaUtilPropertyResourceBundle *new_JavaUtilPropertyResourceBundle_initWithJavaIoInputStream_(JavaIoInputStream *stream) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilPropertyResourceBundle_initWithJavaIoReader_(JavaUtilPropertyResourceBundle *self, JavaIoReader *reader);

FOUNDATION_EXPORT JavaUtilPropertyResourceBundle *new_JavaUtilPropertyResourceBundle_initWithJavaIoReader_(JavaIoReader *reader) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilPropertyResourceBundle)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaUtilPropertyResourceBundle_INCLUDE_ALL")
