//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/XSLOutputAttributes.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerXSLOutputAttributes")
#ifdef RESTRICT_OrgApacheXmlSerializerXSLOutputAttributes
#define INCLUDE_ALL_OrgApacheXmlSerializerXSLOutputAttributes 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerXSLOutputAttributes 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerXSLOutputAttributes

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlSerializerXSLOutputAttributes_) && (INCLUDE_ALL_OrgApacheXmlSerializerXSLOutputAttributes || defined(INCLUDE_OrgApacheXmlSerializerXSLOutputAttributes))
#define OrgApacheXmlSerializerXSLOutputAttributes_

@class JavaUtilVector;

/*!
 @brief This interface has methods associated with the XSLT xsl:output attribues
  specified in the stylesheet that effect the format of the document output.
 In an XSLT stylesheet these attributes appear for example as: 
 @code

   <xsl:output method="xml" omit-xml-declaration="no" indent="yes"/>  
  
@endcode
  The xsl:output attributes covered in this interface are: 
 @code

  version
  encoding
  omit-xml-declarations
  standalone
  doctype-public
  doctype-system
  cdata-section-elements
  indent
  media-type 
  
@endcode
  
  The one attribute not covered in this interface is <code>method</code> as
  this value is implicitly chosen by the serializer that is created, for
  example ToXMLStream vs. ToHTMLStream or another one. 
  This interface is only used internally within Xalan.
 */
@protocol OrgApacheXmlSerializerXSLOutputAttributes < JavaObject >

/*!
 @brief Returns the previously set value of the value to be used as the public
  identifier in the document type declaration (DTD).
 @return the public identifier to be used in the DOCTYPE declaration in the
  output document.
 */
- (NSString *)getDoctypePublic;

/*!
 @brief Returns the previously set value of the value to be used
  as the system identifier in the document type declaration (DTD).
 @return the system identifier to be used in the DOCTYPE declaration in
  the output document.
 */
- (NSString *)getDoctypeSystem;

/*!
 @return the character encoding to be used in the output document.
 */
- (NSString *)getEncoding;

/*!
 @return true if the output document should be indented to visually
  indicate its structure.
 */
- (jboolean)getIndent;

/*!
 @return the number of spaces to indent for each indentation level.
 */
- (jint)getIndentAmount;

/*!
 @return the mediatype the media-type or MIME type associated with the
  output document.
 */
- (NSString *)getMediaType;

/*!
 @return true if the XML declaration is to be omitted from the output
  document.
 */
- (jboolean)getOmitXMLDeclaration;

/*!
 @return a value of "yes" if the <code>standalone</code> delaration is to
  be included in the output document.
 */
- (NSString *)getStandalone;

/*!
 @return the version of the output format.
 */
- (NSString *)getVersion;

/*!
 @brief Sets the value coming from the xsl:output cdata-section-elements
  stylesheet property.
 This sets the elements whose text elements are to be output as CDATA
  sections.
 @param URI_and_localNames pairs of namespace URI and local names that  identify elements whose text elements are to be output as CDATA sections.
   The namespace of the local element must be the given URI to match. The
   qName is not given because the prefix does not matter, only the namespace
   URI to which that prefix would map matters, so the prefix itself is not
   relevant in specifying which elements have their text to be output as
   CDATA sections.
 */
- (void)setCdataSectionElementsWithJavaUtilVector:(JavaUtilVector *)URI_and_localNames;

/*!
 @brief Set the value coming from the xsl:output doctype-public and doctype-system stylesheet properties
 @param system the system identifier to be used in the DOCTYPE declaration  in the output document.
 @param pub the public identifier to be used in the DOCTYPE declaration in  the output document.
 */
- (void)setDoctypeWithNSString:(NSString *)system
                  withNSString:(NSString *)pub;

/*!
 @brief Set the value coming from the xsl:output doctype-public stylesheet attribute.
 @param doctype the public identifier to be used in the DOCTYPE  declaration in the output document.
 */
- (void)setDoctypePublicWithNSString:(NSString *)doctype;

/*!
 @brief Set the value coming from the xsl:output doctype-system stylesheet attribute.
 @param doctype the system identifier to be used in the DOCTYPE  declaration in the output document.
 */
- (void)setDoctypeSystemWithNSString:(NSString *)doctype;

/*!
 @brief Sets the character encoding coming from the xsl:output encoding stylesheet attribute.
 @param encoding the character encoding
 */
- (void)setEncodingWithNSString:(NSString *)encoding;

/*!
 @brief Sets the value coming from the xsl:output indent stylesheet
  attribute.
 @param indent true if the output document should be indented to visually  indicate its structure.
 */
- (void)setIndentWithBoolean:(jboolean)indent;

/*!
 @brief Sets the value coming from the xsl:output media-type stylesheet attribute.
 @param mediatype the media-type or MIME type associated with the output  document.
 */
- (void)setMediaTypeWithNSString:(NSString *)mediatype;

/*!
 @brief Sets the value coming from the xsl:output omit-xml-declaration stylesheet attribute
 @param b true if the XML declaration is to be omitted from the output  document.
 */
- (void)setOmitXMLDeclarationWithBoolean:(jboolean)b;

/*!
 @brief Sets the value coming from the xsl:output standalone stylesheet attribute.
 @param standalone a value of "yes" indicates that the  
  <code> standalone </code>  delaration is to be included in the output  document.
 */
- (void)setStandaloneWithNSString:(NSString *)standalone;

/*!
 @brief Sets the value coming from the xsl:output version attribute.
 @param version_ the version of the output format.
 */
- (void)setVersionWithNSString:(NSString *)version_;

/*!
 @brief Get the value for a property that affects seraialization,
  if a property was set return that value, otherwise return
  the default value, otherwise return null.
 @param name The name of the property, which is just the local name  if it is in no namespace, but is the URI in curly braces followed by
   the local name if it is in a namespace, for example:
    <ul>   <li>
   "encoding"
    <li>  "method"   <li>
   "{http://xml.apache.org/xalan}indent-amount"
    <li>  "{http://xml.apache.org/xalan}line-separator"
    </ul>
 @return The value of the parameter
 */
- (NSString *)getOutputPropertyWithNSString:(NSString *)name;

/*!
 @brief Get the default value for a property that affects seraialization,
  or null if there is none.It is possible that a non-default value
  was set for the property, however the value returned by this method
  is unaffected by any non-default settings.
 @param name The name of the property.
 @return The default value of the parameter, or null if there is no default value.
 */
- (NSString *)getOutputPropertyDefaultWithNSString:(NSString *)name;

/*!
 @brief Set the non-default value for a property that affects seraialization.
 @param name The name of the property, which is just the local name  if it is in no namespace, but is the URI in curly braces followed by
   the local name if it is in a namespace, for example:
    <ul>   <li>
   "encoding"
    <li>  "method"   <li>
   "{http://xml.apache.org/xalan}indent-amount"
    <li>  "{http://xml.apache.org/xalan}line-separator"
    </ul>
 */
- (void)setOutputPropertyWithNSString:(NSString *)name
                         withNSString:(NSString *)val;

/*!
 @brief Set the default value for a property that affects seraialization.
 @param name The name of the property, which is just the local name  if it is in no namespace, but is the URI in curly braces followed by
   the local name if it is in a namespace, for example:
    <ul>   <li>
   "encoding"
    <li>  "method"   <li>
   "{http://xml.apache.org/xalan}indent-amount"
    <li>  "{http://xml.apache.org/xalan}line-separator"
    </ul>
 */
- (void)setOutputPropertyDefaultWithNSString:(NSString *)name
                                withNSString:(NSString *)val;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerXSLOutputAttributes)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerXSLOutputAttributes)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerXSLOutputAttributes")
