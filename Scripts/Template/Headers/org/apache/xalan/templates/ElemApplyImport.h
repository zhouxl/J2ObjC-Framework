//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemApplyImport.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemApplyImport")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemApplyImport
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemApplyImport 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemApplyImport 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemApplyImport

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTemplatesElemApplyImport_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemApplyImport || defined(INCLUDE_OrgApacheXalanTemplatesElemApplyImport))
#define OrgApacheXalanTemplatesElemApplyImport_

#define RESTRICT_OrgApacheXalanTemplatesElemTemplateElement 1
#define INCLUDE_OrgApacheXalanTemplatesElemTemplateElement 1
#include "../../../../org/apache/xalan/templates/ElemTemplateElement.h"

@class OrgApacheXalanTransformerTransformerImpl;

/*!
 @brief Implement xsl:apply-imports.
 @code

   <!ELEMENT xsl:apply-imports EMPTY>
   
@endcode
 - seealso: <a href="http://www.w3.org/TR/xslt#apply-imports">apply-imports in XSLT Specification</a>
 */
@interface OrgApacheXalanTemplatesElemApplyImport : OrgApacheXalanTemplatesElemTemplateElement

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)init;

/*!
 @brief Add a child to the child list
 .
 <!ELEMENT xsl:apply-imports EMPTY>
 @param newChild New element to append to this element's children list
 @return null, xsl:apply-Imports cannot have children
 */
- (OrgApacheXalanTemplatesElemTemplateElement *)appendChildWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)newChild;

/*!
 @brief Execute the xsl:apply-imports transformation.
 @param transformer non-null reference to the the current transform-time state.
 @throw TransformerException
 */
- (void)executeWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

/*!
 @brief Return the node name.
 @return Element name
 */
- (NSString *)getNodeName;

/*!
 @brief Get an int constant identifying the type of element.
 - seealso: org.apache.xalan.templates.Constants
 @return Token ID for xsl:apply-imports element types
 */
- (jint)getXSLToken;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemApplyImport)

inline jlong OrgApacheXalanTemplatesElemApplyImport_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesElemApplyImport_serialVersionUID 3764728663373024038LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemApplyImport, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemApplyImport_init(OrgApacheXalanTemplatesElemApplyImport *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemApplyImport *new_OrgApacheXalanTemplatesElemApplyImport_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemApplyImport *create_OrgApacheXalanTemplatesElemApplyImport_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemApplyImport)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemApplyImport")
