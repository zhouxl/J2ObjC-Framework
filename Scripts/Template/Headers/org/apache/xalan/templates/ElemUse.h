//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemUse.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemUse")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemUse
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemUse 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemUse 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemUse

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTemplatesElemUse_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemUse || defined(INCLUDE_OrgApacheXalanTemplatesElemUse))
#define OrgApacheXalanTemplatesElemUse_

#define RESTRICT_OrgApacheXalanTemplatesElemTemplateElement 1
#define INCLUDE_OrgApacheXalanTemplatesElemTemplateElement 1
#include "../../../../org/apache/xalan/templates/ElemTemplateElement.h"

@class IOSObjectArray;
@class JavaUtilVector;
@class OrgApacheXalanTemplatesStylesheetRoot;
@class OrgApacheXalanTransformerTransformerImpl;

/*!
 @brief Implement xsl:use.
 This acts as a superclass for ElemCopy, ElemAttributeSet,
  ElemElement, and ElemLiteralResult, on order to implement
  shared behavior the use-attribute-sets attribute.
 - seealso: <a href="http://www.w3.org/TR/xslt#attribute-sets">attribute-sets in XSLT Specification</a>
 */
@interface OrgApacheXalanTemplatesElemUse : OrgApacheXalanTemplatesElemTemplateElement

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)init;

/*!
 @brief Add the attributes from the named attribute sets to the attribute list.
 TODO: Error handling for: "It is an error if there are two attribute sets
  with the same expanded-name and with equal import precedence and that both
  contain the same attribute unless there is a definition of the attribute
  set with higher import precedence that also contains the attribute."
 @param transformer non-null reference to the the current transform-time state.
 @param stylesheet The owning root stylesheet
 @throw TransformerException
 */
- (void)applyAttrSetsWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer
                        withOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)stylesheet;

/*!
 @brief Copy attributes specified by use-attribute-sets to the result tree.
 Specifying a use-attribute-sets attribute is equivalent to adding
  xsl:attribute elements for each of the attributes in each of the
  named attribute sets to the beginning of the content of the element
  with the use-attribute-sets attribute, in the same order in which
  the names of the attribute sets are specified in the use-attribute-sets
  attribute. It is an error if use of use-attribute-sets attributes
  on xsl:attribute-set elements causes an attribute set to directly
  or indirectly use itself.
 @param transformer non-null reference to the the current transform-time state.
 @throw TransformerException
 */
- (void)executeWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

/*!
 @brief Get the "use-attribute-sets" attribute.
 Attribute sets are used by specifying a use-attribute-sets
  attribute on xsl:element, xsl:copy (see [7.5 Copying]) or
  xsl:attribute-set elements, or a xsl:use-attribute-sets attribute on
  Literal Result Elements.
  The value of the use-attribute-sets
  attribute is a whitespace-separated list of names of attribute
  sets. Each name is specified as a QName, which is expanded as
  described in [2.4 Qualified Names].
 @return The value of the "use-attribute-sets" attribute.
 */
- (IOSObjectArray *)getUseAttributeSets;

/*!
 @brief Set the "use-attribute-sets" attribute.
 Attribute sets are used by specifying a use-attribute-sets
  attribute on xsl:element, xsl:copy (see [7.5 Copying]) or
  xsl:attribute-set elements. The value of the use-attribute-sets
  attribute is a whitespace-separated list of names of attribute
  sets. Each name is specified as a QName, which is expanded as
  described in [2.4 Qualified Names].
 @param v The value to set for the "use-attribute-sets" attribute.
 */
- (void)setUseAttributeSetsWithOrgApacheXmlUtilsQNameArray:(IOSObjectArray *)v;

/*!
 @brief Set the "use-attribute-sets" attribute.
 Attribute sets are used by specifying a use-attribute-sets
  attribute on xsl:element, xsl:copy (see [7.5 Copying]) or
  xsl:attribute-set elements. The value of the use-attribute-sets
  attribute is a whitespace-separated list of names of attribute
  sets. Each name is specified as a QName, which is expanded as
  described in [2.4 Qualified Names].
 @param v The value to set for the "use-attribute-sets" attribute.
 */
- (void)setUseAttributeSetsWithJavaUtilVector:(JavaUtilVector *)v;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemUse)

inline jlong OrgApacheXalanTemplatesElemUse_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesElemUse_serialVersionUID 5830057200289299736LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemUse, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemUse_init(OrgApacheXalanTemplatesElemUse *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemUse *new_OrgApacheXalanTemplatesElemUse_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemUse *create_OrgApacheXalanTemplatesElemUse_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemUse)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemUse")
