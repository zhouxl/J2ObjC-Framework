//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/validation/SchemaFactoryFinder.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaxXmlValidationSchemaFactoryFinder_INCLUDE_ALL")
#ifdef JavaxXmlValidationSchemaFactoryFinder_RESTRICT
#define JavaxXmlValidationSchemaFactoryFinder_INCLUDE_ALL 0
#else
#define JavaxXmlValidationSchemaFactoryFinder_INCLUDE_ALL 1
#endif
#undef JavaxXmlValidationSchemaFactoryFinder_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxXmlValidationSchemaFactoryFinder_) && (JavaxXmlValidationSchemaFactoryFinder_INCLUDE_ALL || defined(JavaxXmlValidationSchemaFactoryFinder_INCLUDE))
#define JavaxXmlValidationSchemaFactoryFinder_

@class JavaLangClassLoader;
@class JavaxXmlValidationSchemaFactory;

/*!
 @brief Implementation of <code>SchemaFactory.newInstance(String)</code>.
 @author <a href="Kohsuke.Kawaguchi@@Sun.com">Kohsuke Kawaguchi</a>
 @version $Revision: 727367 $, $Date: 2008-12-17 05:05:26 -0800 (Wed, 17 Dec 2008) $
 @since 1.5
 */
@interface JavaxXmlValidationSchemaFactoryFinder : NSObject

#pragma mark Public

/*!
 @brief <p>Constructor that specifies <code>ClassLoader</code> to use
 to find <code>SchemaFactory</code>.
 </p>
 @param loader
 to be used to load resource, <code>SchemaFactory</code>, and
 <code>SchemaFactoryLoader</code> implementations during
 the resolution process.
 If this parameter is null, the default system class loader
 will be used.
 */
- (instancetype)initWithJavaLangClassLoader:(JavaLangClassLoader *)loader;

/*!
 @brief <p>Creates a new <code>SchemaFactory</code> object for the specified
 schema language.
 </p>
 @param schemaLanguage
 See <code>Schema Language</code> table in <code>SchemaFactory</code>
 for the list of available schema languages.
 @return <code>null</code> if the callee fails to create one.
 @throws NullPointerException
 If the <tt>schemaLanguage</tt> parameter is null.
 */
- (JavaxXmlValidationSchemaFactory *)newFactoryWithNSString:(NSString *)schemaLanguage OBJC_METHOD_FAMILY_NONE;

#pragma mark Package-Private

/*!
 @brief <p>Creates an instance of the specified and returns it.
 </p>
 @param className_
 fully qualified class name to be instantiated.
 @return null
 if it fails. Error messages will be printed by this method.
 */
- (JavaxXmlValidationSchemaFactory *)createInstanceWithNSString:(NSString *)className_;

@end

J2OBJC_STATIC_INIT(JavaxXmlValidationSchemaFactoryFinder)

FOUNDATION_EXPORT void JavaxXmlValidationSchemaFactoryFinder_initWithJavaLangClassLoader_(JavaxXmlValidationSchemaFactoryFinder *self, JavaLangClassLoader *loader);

FOUNDATION_EXPORT JavaxXmlValidationSchemaFactoryFinder *new_JavaxXmlValidationSchemaFactoryFinder_initWithJavaLangClassLoader_(JavaLangClassLoader *loader) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlValidationSchemaFactoryFinder)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaxXmlValidationSchemaFactoryFinder_INCLUDE_ALL")
