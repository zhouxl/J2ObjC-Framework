//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/javax/xml/transform/TransformerFactory.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxXmlTransformTransformerFactory")
#ifdef RESTRICT_JavaxXmlTransformTransformerFactory
#define INCLUDE_ALL_JavaxXmlTransformTransformerFactory 0
#else
#define INCLUDE_ALL_JavaxXmlTransformTransformerFactory 1
#endif
#undef RESTRICT_JavaxXmlTransformTransformerFactory

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxXmlTransformTransformerFactory_) && (INCLUDE_ALL_JavaxXmlTransformTransformerFactory || defined(INCLUDE_JavaxXmlTransformTransformerFactory))
#define JavaxXmlTransformTransformerFactory_

@class JavaLangClassLoader;
@class JavaxXmlTransformTransformer;
@protocol JavaxXmlTransformErrorListener;
@protocol JavaxXmlTransformSource;
@protocol JavaxXmlTransformTemplates;
@protocol JavaxXmlTransformURIResolver;

/*!
 @brief <p>A TransformerFactory instance can be used to create 
 <code>javax.xml.transform.Transformer</code> and 
 <code>javax.xml.transform.Templates</code> objects.
 </p>
  
 <p>The system property that determines which Factory implementation
  to create is named <code>"javax.xml.transform.TransformerFactory"</code>.
  This property names a concrete subclass of the 
 <code>TransformerFactory</code> abstract class. If the property is not
  defined, a platform default is be used.</p>
 @author <a href="mailto:Jeff.Suttor@@Sun.com">Jeff Suttor</a>
 */
@interface JavaxXmlTransformTransformerFactory : NSObject

#pragma mark Public

/*!
 @brief <p>Get the stylesheet specification(s) associated with the
  XML <code>Source</code> document via the 
 <a href="http://www.w3.org/TR/xml-stylesheet/">
  xml-stylesheet processing instruction</a> that match the given criteria.
 Note that it is possible to return several stylesheets, in which case
  they are applied as if they were a list of imports or cascades in a
  single stylesheet.</p>
 @param source The XML source document.
 @param media The media attribute to be matched.  May be null, in which       case the preferred templates will be used (i.e. alternate = no).
 @param title The value of the title attribute to match.  May be null.
 @param charset The value of the charset attribute to match.  May be null.
 @return A <code>Source</code> <code>Object</code> suitable for passing
    to the <code>TransformerFactory</code>.
 @throw TransformerConfigurationExceptionAn <code>Exception</code>
    is thrown if an error occurs during parsing of the   
 <code>source</code>.
 - seealso: <a href="http://www.w3.org/TR/xml-stylesheet/">
    Associating Style Sheets with XML documents Version 1.0</a>
 */
- (id<JavaxXmlTransformSource>)getAssociatedStylesheetWithJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)source
                                                                     withNSString:(NSString *)media
                                                                     withNSString:(NSString *)title
                                                                     withNSString:(NSString *)charset;

/*!
 @brief Allows the user to retrieve specific attributes on the underlying
  implementation.
 An <code>IllegalArgumentException</code> is thrown if the underlying
  implementation doesn't recognize the attribute.
 @param name The name of the attribute.
 @return value The value of the attribute.
 */
- (id)getAttributeWithNSString:(NSString *)name;

/*!
 @brief Get the error event handler for the TransformerFactory.
 @return The current error handler, which should never be null.
 */
- (id<JavaxXmlTransformErrorListener>)getErrorListener;

/*!
 @brief Look up the value of a feature.
 <p>
  Feature names are fully qualified <code>java.net.URI</code>s.
  Implementations may define their own features. 
 <code>false</code> is returned if this <code>TransformerFactory</code> or the 
 <code>Transformer</code>s or <code>Template</code>s it creates cannot support the feature.
  It is possible for an <code>TransformerFactory</code> to expose a feature value but be unable to change its state. 
 </p>
 @param name Feature name.
 @return The current state of the feature, <code>true</code> or <code>false</code>.
 @throw NullPointerExceptionIf the <code>name</code> parameter is null.
 */
- (jboolean)getFeatureWithNSString:(NSString *)name;

/*!
 @brief Get the object that is used by default during the transformation
  to resolve URIs used in document(), xsl:import, or xsl:include.
 @return The URIResolver that was set with setURIResolver.
 */
- (id<JavaxXmlTransformURIResolver>)getURIResolver;

/*!
 @brief Returns Android's implementation of <code>TransformerFactory</code>.Unlike
  other Java implementations, this method does not consult system
  properties, properties files, or the services API.
 @throw TransformerFactoryConfigurationErrornever. Included for API
      compatibility with other Java implementations.
 */
+ (JavaxXmlTransformTransformerFactory *)newInstance OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns an instance of the named implementation of <code>TransformerFactory</code>.
 @throw TransformerFactoryConfigurationErrorif <code>factoryClassName</code> is not available or
      cannot be instantiated.
 @since 1.6
 */
+ (JavaxXmlTransformTransformerFactory *)newInstanceWithNSString:(NSString *)factoryClassName
                                         withJavaLangClassLoader:(JavaLangClassLoader *)classLoader OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Process the Source into a Templates object, which is a
  a compiled representation of the source.This Templates object
  may then be used concurrently across multiple threads.
 Creating
  a Templates object allows the TransformerFactory to do detailed
  performance optimization of transformation instructions, without
  penalizing runtime transformation.
 @param source An object that holds a URL, input stream, etc.
 @return A Templates object capable of being used for transformation
  purposes, never null.
 @throw TransformerConfigurationExceptionMay throw this during the
  parse when it is constructing the Templates object and fails.
 */
- (id<JavaxXmlTransformTemplates>)newTemplatesWithJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)source OBJC_METHOD_FAMILY_NONE;

/*!
 @brief <p>Create a new <code>Transformer</code> that performs a copy
  of the <code>Source</code> to the <code>Result</code>.
 i.e. the "<em>identity transform</em>".</p>
 @return A Transformer object that may be used to perform a transformation
  in a single thread, never null.
 @throw TransformerConfigurationExceptionThrown if it is not
    possible to create a <code>Transformer</code> instance.
 */
- (JavaxXmlTransformTransformer *)newTransformer OBJC_METHOD_FAMILY_NONE;

/*!
 @brief <p>Process the <code>Source</code> into a <code>Transformer</code>
  <code>Object</code>.
 The <code>Source</code> is an XSLT document that
  conforms to <a href="http://www.w3.org/TR/xslt">
  XSL Transformations (XSLT) Version 1.0</a>.  Care must
  be taken not to use this <code>Transformer</code> in multiple 
 <code>Thread</code>s running concurrently.
  Different <code>TransformerFactories</code> can be used concurrently by
  different <code>Thread</code>s.</p>
 @param source <code> Source  </code>  of XSLT document used to create
      <code> Transformer </code> .
     Examples of XML  <code> Source </code> s include    
 <code>StreamSource</code> ,    <code>SAXSource</code>
   and    <code>DOMSource</code>
  .
 @return A <code>Transformer</code> object that may be used to perform
    a transformation in a single <code>Thread</code>, never
    <code>null</code>.
 @throw TransformerConfigurationExceptionThrown if there are errors when
     parsing the <code>Source</code> or it is not possible to create a
    <code>Transformer</code> instance.
 - seealso: <a href="http://www.w3.org/TR/xslt">
    XSL Transformations (XSLT) Version 1.0</a>
 */
- (JavaxXmlTransformTransformer *)newTransformerWithJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)source OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Allows the user to set specific attributes on the underlying
  implementation.An attribute in this context is defined to
  be an option that the implementation provides.
 An <code>IllegalArgumentException</code> is thrown if the underlying
  implementation doesn't recognize the attribute.
 @param name The name of the attribute.
 @param value The value of the attribute.
 */
- (void)setAttributeWithNSString:(NSString *)name
                          withId:(id)value;

/*!
 @brief Set the error event listener for the TransformerFactory, which
  is used for the processing of transformation instructions,
  and not for the transformation itself.
 An <code>IllegalArgumentException</code> is thrown if the 
 <code>ErrorListener</code> listener is <code>null</code>.
 @param listener The new error listener.
 */
- (void)setErrorListenerWithJavaxXmlTransformErrorListener:(id<JavaxXmlTransformErrorListener>)listener;

/*!
 @brief <p>Set a feature for this <code>TransformerFactory</code> and <code>Transformer</code>s
  or <code>Template</code>s created by this factory.
 </p>
  
 <p>
  Feature names are fully qualified <code>java.net.URI</code>s.
  Implementations may define their own features.
  An <code>TransformerConfigurationException</code> is thrown if this <code>TransformerFactory</code> or the 
 <code>Transformer</code>s or <code>Template</code>s it creates cannot support the feature.
  It is possible for an <code>TransformerFactory</code> to expose a feature value but be unable to change its state. 
 </p>
  
 <p>All implementations are required to support the <code>javax.xml.XMLConstants</code> feature.
  When the feature is:</p>
  <ul>
    <li>
      <code>true</code>: the implementation will limit XML processing to conform to implementation limits
      and behave in a secure fashion as defined by the implementation.
      Examples include resolving user defined style sheets and functions.
      If XML processing is limited for security reasons, it will be reported via a call to the registered     
 <code>exception)</code>.
      See <code>listener)</code>.
    </li>
    <li>
      <code>false</code>: the implementation will processing XML according to the XML specifications without
      regard to possible implementation limits.   
 </li>
  </ul>
 @param name Feature name.
 @param value Is feature state  <code> true </code>  or  <code> false </code>
  .
 @throw TransformerConfigurationExceptionif this <code>TransformerFactory</code>
    or the <code>Transformer</code>s or <code>Template</code>s it creates cannot support this feature.
 @throw NullPointerExceptionIf the <code>name</code> parameter is null.
 */
- (void)setFeatureWithNSString:(NSString *)name
                   withBoolean:(jboolean)value;

/*!
 @brief Set an object that is used by default during the transformation
  to resolve URIs used in document(), xsl:import, or xsl:include.
 @param resolver An object that implements the URIResolver interface,  or null.
 */
- (void)setURIResolverWithJavaxXmlTransformURIResolver:(id<JavaxXmlTransformURIResolver>)resolver;

#pragma mark Protected

/*!
 @brief Default constructor is protected on purpose.
 */
- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformTransformerFactory)

FOUNDATION_EXPORT void JavaxXmlTransformTransformerFactory_init(JavaxXmlTransformTransformerFactory *self);

FOUNDATION_EXPORT JavaxXmlTransformTransformerFactory *JavaxXmlTransformTransformerFactory_newInstance(void);

FOUNDATION_EXPORT JavaxXmlTransformTransformerFactory *JavaxXmlTransformTransformerFactory_newInstanceWithNSString_withJavaLangClassLoader_(NSString *factoryClassName, JavaLangClassLoader *classLoader);

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformTransformerFactory)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxXmlTransformTransformerFactory")
