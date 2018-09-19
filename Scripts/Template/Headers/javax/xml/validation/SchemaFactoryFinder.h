//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/javax/xml/validation/SchemaFactoryFinder.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxXmlValidationSchemaFactoryFinder")
#ifdef RESTRICT_JavaxXmlValidationSchemaFactoryFinder
#define INCLUDE_ALL_JavaxXmlValidationSchemaFactoryFinder 0
#else
#define INCLUDE_ALL_JavaxXmlValidationSchemaFactoryFinder 1
#endif
#undef RESTRICT_JavaxXmlValidationSchemaFactoryFinder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxXmlValidationSchemaFactoryFinder_) && (INCLUDE_ALL_JavaxXmlValidationSchemaFactoryFinder || defined(INCLUDE_JavaxXmlValidationSchemaFactoryFinder))
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
 @param loader to be used to load resource, 
 <code>SchemaFactory</code> , and       <code>SchemaFactoryLoader</code>
   implementations during       the resolution process.
        If this parameter is null, the default system class loader
        will be used.
 */
- (instancetype __nonnull)initWithJavaLangClassLoader:(JavaLangClassLoader *)loader;

/*!
 @brief <p>Creates a new <code>SchemaFactory</code> object for the specified
  schema language.
 </p>
 @param schemaLanguage See 
 <code>Language</code>  table in  <code> SchemaFactory </code>       for the list of available schema languages.
 @return <code>null</code> if the callee fails to create one.
 @throw NullPointerException
 If the <tt>schemaLanguage</tt> parameter is null.
 */
- (JavaxXmlValidationSchemaFactory *)newFactoryWithNSString:(NSString *)schemaLanguage OBJC_METHOD_FAMILY_NONE;

#pragma mark Package-Private

/*!
 @brief <p>Creates an instance of the specified and returns it.
 </p>
 @param className_ fully qualified class name to be instantiated.
 @return null
       if it fails. Error messages will be printed by this method.
 */
- (JavaxXmlValidationSchemaFactory *)createInstanceWithNSString:(NSString *)className_;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaxXmlValidationSchemaFactoryFinder)

FOUNDATION_EXPORT void JavaxXmlValidationSchemaFactoryFinder_initWithJavaLangClassLoader_(JavaxXmlValidationSchemaFactoryFinder *self, JavaLangClassLoader *loader);

FOUNDATION_EXPORT JavaxXmlValidationSchemaFactoryFinder *new_JavaxXmlValidationSchemaFactoryFinder_initWithJavaLangClassLoader_(JavaLangClassLoader *loader) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlValidationSchemaFactoryFinder *create_JavaxXmlValidationSchemaFactoryFinder_initWithJavaLangClassLoader_(JavaLangClassLoader *loader);

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlValidationSchemaFactoryFinder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxXmlValidationSchemaFactoryFinder")
