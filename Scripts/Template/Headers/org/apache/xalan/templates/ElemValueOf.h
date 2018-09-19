//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemValueOf.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemValueOf")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemValueOf
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemValueOf 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemValueOf 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemValueOf

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanTemplatesElemValueOf_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemValueOf || defined(INCLUDE_OrgApacheXalanTemplatesElemValueOf))
#define OrgApacheXalanTemplatesElemValueOf_

#define RESTRICT_OrgApacheXalanTemplatesElemTemplateElement 1
#define INCLUDE_OrgApacheXalanTemplatesElemTemplateElement 1
#include "../../../../org/apache/xalan/templates/ElemTemplateElement.h"

@class OrgApacheXalanTemplatesStylesheetRoot;
@class OrgApacheXalanTemplatesXSLTVisitor;
@class OrgApacheXalanTransformerTransformerImpl;
@class OrgApacheXpathXPath;

/*!
 @brief Implement xsl:value-of.
 @code

   <!ELEMENT xsl:value-of EMPTY>
   <!ATTLIST xsl:value-of
    select %expr; #REQUIRED
    disable-output-escaping (yes|no) "no" 
  >
   
@endcode
 - seealso: <a href="http://www.w3.org/TR/xslt#value-of">value-of in XSLT Specification</a>
 */
@interface OrgApacheXalanTemplatesElemValueOf : OrgApacheXalanTemplatesElemTemplateElement
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Add a child to the child list.
 @param newChild Child to add to children list
 @return Child just added to children list
 @throw DOMException
 */
- (OrgApacheXalanTemplatesElemTemplateElement *)appendChildWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)newChild;

/*!
 @brief This function is called after everything else has been
  recomposed, and allows the template to set remaining
  values that may be based on some other property that
  depends on recomposition.
 NEEDSDOC @@param sroot
 @throw TransformerException
 */
- (void)composeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)sroot;

/*!
 @brief Execute the string expression and copy the text to the
  result tree.
 The required select attribute is an expression; this expression
  is evaluated and the resulting object is converted to a string
  as if by a call to the string function. The string specifies
  the string-value of the created text node. If the string is
  empty, no text node will be created. The created text node will
  be merged with any adjacent text nodes.
 - seealso: <a href="http://www.w3.org/TR/xslt#value-of">value-of in XSLT Specification</a>
 @param transformer non-null reference to the the current transform-time state.
 @throw TransformerException
 */
- (void)executeWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

/*!
 @brief Get the "disable-output-escaping" attribute.
 Normally, the xml output method escapes & and < (and
  possibly other characters) when outputting text nodes.
  This ensures that the output is well-formed XML. However,
  it is sometimes convenient to be able to produce output
  that is almost, but not quite well-formed XML; for
  example, the output may include ill-formed sections
  which are intended to be transformed into well-formed
  XML by a subsequent non-XML aware process. For this reason,
  XSLT provides a mechanism for disabling output escaping.
  An xsl:value-of or xsl:text element may have a
  disable-output-escaping attribute; the allowed values
  are yes or no; the default is no; if the value is yes,
  then a text node generated by instantiating the xsl:value-of
  or xsl:text element should be output without any escaping.
 - seealso: <a href="http://www.w3.org/TR/xslt#disable-output-escaping">disable-output-escaping in XSLT Specification</a>
 @return The value of the "disable-output-escaping" attribute.
 */
- (jboolean)getDisableOutputEscaping;

/*!
 @brief Return the node name.
 @return The node name
 */
- (NSString *)getNodeName;

/*!
 @brief Get the "select" attribute.
 The required select attribute is an expression; this expression
  is evaluated and the resulting object is converted to a
  string as if by a call to the string function.
 @return The value of the "select" attribute.
 */
- (OrgApacheXpathXPath *)getSelect;

/*!
 @brief Get an integer representation of the element type.
 @return An integer representation of the element, defined in the
      Constants class.
 - seealso: org.apache.xalan.templates.Constants
 */
- (jint)getXSLToken;

/*!
 @brief Set the "disable-output-escaping" attribute.
 Normally, the xml output method escapes & and < (and
  possibly other characters) when outputting text nodes.
  This ensures that the output is well-formed XML. However,
  it is sometimes convenient to be able to produce output
  that is almost, but not quite well-formed XML; for
  example, the output may include ill-formed sections
  which are intended to be transformed into well-formed
  XML by a subsequent non-XML aware process. For this reason,
  XSLT provides a mechanism for disabling output escaping.
  An xsl:value-of or xsl:text element may have a
  disable-output-escaping attribute; the allowed values
  are yes or no; the default is no; if the value is yes,
  then a text node generated by instantiating the xsl:value-of
  or xsl:text element should be output without any escaping.
 - seealso: <a href="http://www.w3.org/TR/xslt#disable-output-escaping">disable-output-escaping in XSLT Specification</a>
 @param v The value to set for the "disable-output-escaping" attribute.
 */
- (void)setDisableOutputEscapingWithBoolean:(jboolean)v;

/*!
 @brief Set the "select" attribute.
 The required select attribute is an expression; this expression
  is evaluated and the resulting object is converted to a
  string as if by a call to the string function.
 @param v The value to set for the "select" attribute.
 */
- (void)setSelectWithOrgApacheXpathXPath:(OrgApacheXpathXPath *)v;

#pragma mark Protected

/*!
 @brief Call the children visitors.
 @param visitor The visitor whose appropriate method will be called.
 */
- (void)callChildVisitorsWithOrgApacheXalanTemplatesXSLTVisitor:(OrgApacheXalanTemplatesXSLTVisitor *)visitor
                                                    withBoolean:(jboolean)callAttrs;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemValueOf)

inline jlong OrgApacheXalanTemplatesElemValueOf_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesElemValueOf_serialVersionUID 3490728458007586786LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemValueOf, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemValueOf_init(OrgApacheXalanTemplatesElemValueOf *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemValueOf *new_OrgApacheXalanTemplatesElemValueOf_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemValueOf *create_OrgApacheXalanTemplatesElemValueOf_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemValueOf)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemValueOf")
