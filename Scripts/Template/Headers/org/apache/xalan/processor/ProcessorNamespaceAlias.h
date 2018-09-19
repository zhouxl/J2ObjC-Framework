//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/processor/ProcessorNamespaceAlias.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorNamespaceAlias")
#ifdef RESTRICT_OrgApacheXalanProcessorProcessorNamespaceAlias
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorNamespaceAlias 0
#else
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorNamespaceAlias 1
#endif
#undef RESTRICT_OrgApacheXalanProcessorProcessorNamespaceAlias

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanProcessorProcessorNamespaceAlias_) && (INCLUDE_ALL_OrgApacheXalanProcessorProcessorNamespaceAlias || defined(INCLUDE_OrgApacheXalanProcessorProcessorNamespaceAlias))
#define OrgApacheXalanProcessorProcessorNamespaceAlias_

#define RESTRICT_OrgApacheXalanProcessorXSLTElementProcessor 1
#define INCLUDE_OrgApacheXalanProcessorXSLTElementProcessor 1
#include "../../../../org/apache/xalan/processor/XSLTElementProcessor.h"

@class OrgApacheXalanProcessorStylesheetHandler;
@protocol OrgXmlSaxAttributes;

/*!
 @brief TransformerFactory for xsl:namespace-alias markup.
 A stylesheet can use the xsl:namespace-alias element to
  declare that one namespace URI is an alias for another namespace URI. 
 @code

   <!ELEMENT xsl:namespace-alias EMPTY>
   <!ATTLIST xsl:namespace-alias
    stylesheet-prefix CDATA #REQUIRED
    result-prefix CDATA #REQUIRED 
  >
   
@endcode
 - seealso: <a href="http://www.w3.org/TR/xslt#dtd">XSLT DTD</a>
 - seealso: <a href="http://www.w3.org/TR/xslt#literal-result-element">literal-result-element in XSLT Specification</a>
 */
@interface OrgApacheXalanProcessorProcessorNamespaceAlias : OrgApacheXalanProcessorXSLTElementProcessor

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Receive notification of the start of an xsl:namespace-alias element.
 @param handler The calling StylesheetHandler/TemplatesBuilder.
 @param uri The Namespace URI, or the empty string if the         element has no Namespace URI or if Namespace
          processing is not being performed.
 @param localName The local name (without prefix), or the         empty string if Namespace processing is not being
          performed.
 @param rawName The raw XML 1.0 name (with prefix), or the         empty string if raw names are not available.
 @param attributes The attributes attached to the element.  If         there are no attributes, it shall be an empty
          Attributes object.
 */
- (void)startElementWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                                                    withNSString:(NSString *)uri
                                                    withNSString:(NSString *)localName
                                                    withNSString:(NSString *)rawName
                                         withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)attributes;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanProcessorProcessorNamespaceAlias)

inline jlong OrgApacheXalanProcessorProcessorNamespaceAlias_get_serialVersionUID(void);
#define OrgApacheXalanProcessorProcessorNamespaceAlias_serialVersionUID -6309867839007018964LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanProcessorProcessorNamespaceAlias, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanProcessorProcessorNamespaceAlias_init(OrgApacheXalanProcessorProcessorNamespaceAlias *self);

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorNamespaceAlias *new_OrgApacheXalanProcessorProcessorNamespaceAlias_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorNamespaceAlias *create_OrgApacheXalanProcessorProcessorNamespaceAlias_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanProcessorProcessorNamespaceAlias)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorNamespaceAlias")
