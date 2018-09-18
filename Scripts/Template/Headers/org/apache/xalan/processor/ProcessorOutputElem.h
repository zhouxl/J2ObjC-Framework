//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/processor/ProcessorOutputElem.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorOutputElem")
#ifdef RESTRICT_OrgApacheXalanProcessorProcessorOutputElem
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorOutputElem 0
#else
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorOutputElem 1
#endif
#undef RESTRICT_OrgApacheXalanProcessorProcessorOutputElem

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanProcessorProcessorOutputElem_) && (INCLUDE_ALL_OrgApacheXalanProcessorProcessorOutputElem || defined(INCLUDE_OrgApacheXalanProcessorProcessorOutputElem))
#define OrgApacheXalanProcessorProcessorOutputElem_

#define RESTRICT_OrgApacheXalanProcessorXSLTElementProcessor 1
#define INCLUDE_OrgApacheXalanProcessorXSLTElementProcessor 1
#include "org/apache/xalan/processor/XSLTElementProcessor.h"

@class JavaUtilVector;
@class OrgApacheXalanProcessorStylesheetHandler;
@class OrgApacheXmlUtilsQName;
@protocol OrgXmlSaxAttributes;

/*!
 @brief TransformerFactory for xsl:output markup.
 - seealso: <a href="http://www.w3.org/TR/xslt#dtd">XSLT DTD</a>
 - seealso: <a href="http://www.w3.org/TR/xslt#output">output in XSLT Specification</a>
 */
@interface OrgApacheXalanProcessorProcessorOutputElem : OrgApacheXalanProcessorXSLTElementProcessor
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Set a foreign property from the attribute value.
 @param newValue non-null reference to attribute value.
 */
- (void)addLiteralResultAttributeWithNSString:(NSString *)attrUri
                                 withNSString:(NSString *)attrLocalName
                                 withNSString:(NSString *)attrRawName
                                 withNSString:(NSString *)attrValue;

/*!
 @brief Set the cdata-section-elements property from the attribute value.
 - seealso: javax.xml.transform.OutputKeys
 @param newValue non-null reference to processed attribute value.
 */
- (void)setCdataSectionElementsWithJavaUtilVector:(JavaUtilVector *)newValue;

/*!
 @brief Set the doctype-public property from the attribute value.
 - seealso: javax.xml.transform.OutputKeys
 @param newValue non-null reference to processed attribute value.
 */
- (void)setDoctypePublicWithNSString:(NSString *)newValue;

/*!
 @brief Set the doctype-system property from the attribute value.
 - seealso: javax.xml.transform.OutputKeys
 @param newValue non-null reference to processed attribute value.
 */
- (void)setDoctypeSystemWithNSString:(NSString *)newValue;

/*!
 @brief Set the encoding property from the attribute value.
 - seealso: javax.xml.transform.OutputKeys
 @param newValue non-null reference to processed attribute value.
 */
- (void)setEncodingWithNSString:(NSString *)newValue;

/*!
 @brief Set a foreign property from the attribute value.
 @param newValue non-null reference to attribute value.
 */
- (void)setForeignAttrWithNSString:(NSString *)attrUri
                      withNSString:(NSString *)attrLocalName
                      withNSString:(NSString *)attrRawName
                      withNSString:(NSString *)attrValue;

/*!
 @brief Set the indent property from the attribute value.
 - seealso: javax.xml.transform.OutputKeys
 @param newValue non-null reference to processed attribute value.
 */
- (void)setIndentWithBoolean:(jboolean)newValue;

/*!
 @brief Set the media type property from the attribute value.
 - seealso: javax.xml.transform.OutputKeys
 @param newValue non-null reference to processed attribute value.
 */
- (void)setMediaTypeWithNSString:(NSString *)newValue;

/*!
 @brief Set the method property from the attribute value.
 - seealso: javax.xml.transform.OutputKeys
 @param newValue non-null reference to processed attribute value.
 */
- (void)setMethodWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)newValue;

/*!
 @brief Set the omit-xml-declaration property from the attribute value.
 - seealso: javax.xml.transform.OutputKeys
 @param newValue processed attribute value.
 */
- (void)setOmitXmlDeclarationWithBoolean:(jboolean)newValue;

/*!
 @brief Set the standalone property from the attribute value.
 - seealso: javax.xml.transform.OutputKeys
 @param newValue processed attribute value.
 */
- (void)setStandaloneWithBoolean:(jboolean)newValue;

/*!
 @brief Set the version property from the attribute value.
 - seealso: javax.xml.transform.OutputKeys
 @param newValue non-null reference to processed attribute value.
 */
- (void)setVersionWithNSString:(NSString *)newValue;

/*!
 @brief Receive notification of the start of an xsl:output element.
 @param handler The calling StylesheetHandler/TemplatesBuilder.
 @param uri The Namespace URI, or the empty string if the         element has no Namespace URI or if Namespace
          processing is not being performed.
 @param localName The local name (without prefix), or the         empty string if Namespace processing is not being
          performed.
 @param rawName The raw XML 1.0 name (with prefix), or the         empty string if raw names are not available.
 @param attributes The attributes attached to the element.  If         there are no attributes, it shall be an empty
          Attributes object.
 @throw org.xml.sax.SAXException
 */
- (void)startElementWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                                                    withNSString:(NSString *)uri
                                                    withNSString:(NSString *)localName
                                                    withNSString:(NSString *)rawName
                                         withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)attributes;

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanProcessorProcessorOutputElem)

inline jlong OrgApacheXalanProcessorProcessorOutputElem_get_serialVersionUID(void);
#define OrgApacheXalanProcessorProcessorOutputElem_serialVersionUID 3513742319582547590LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanProcessorProcessorOutputElem, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanProcessorProcessorOutputElem_init(OrgApacheXalanProcessorProcessorOutputElem *self);

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorOutputElem *new_OrgApacheXalanProcessorProcessorOutputElem_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorOutputElem *create_OrgApacheXalanProcessorProcessorOutputElem_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanProcessorProcessorOutputElem)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorOutputElem")
