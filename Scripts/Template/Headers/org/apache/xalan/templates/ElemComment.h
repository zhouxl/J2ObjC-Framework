//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemComment.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemComment")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemComment
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemComment 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemComment 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemComment

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanTemplatesElemComment_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemComment || defined(INCLUDE_OrgApacheXalanTemplatesElemComment))
#define OrgApacheXalanTemplatesElemComment_

#define RESTRICT_OrgApacheXalanTemplatesElemTemplateElement 1
#define INCLUDE_OrgApacheXalanTemplatesElemTemplateElement 1
#include "org/apache/xalan/templates/ElemTemplateElement.h"

@class OrgApacheXalanTransformerTransformerImpl;

/*!
 @brief Implement xsl:comment.
 @code

   <!ELEMENT xsl:comment %char-template;>
   <!ATTLIST xsl:comment %space-att;>
   
@endcode
 - seealso: <a href="http://www.w3.org/TR/xslt#section-Creating-Comments">section-Creating-Comments in XSLT Specification</a>
 */
@interface OrgApacheXalanTemplatesElemComment : OrgApacheXalanTemplatesElemTemplateElement
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Add a child to the child list.
 @param newChild Child to add to this node's child list
 @return Child that was just added to child list
 @throw DOMException
 */
- (OrgApacheXalanTemplatesElemTemplateElement *)appendChildWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)newChild;

/*!
 @brief Execute the xsl:comment transformation
 @param transformer non-null reference to the the current transform-time state.
 @throw TransformerException
 */
- (void)executeWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

/*!
 @brief Return the node name.
 @return This element's name
 */
- (NSString *)getNodeName;

/*!
 @brief Get an int constant identifying the type of element.
 - seealso: org.apache.xalan.templates.Constants
 @return The token ID for this element
 */
- (jint)getXSLToken;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemComment)

inline jlong OrgApacheXalanTemplatesElemComment_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesElemComment_serialVersionUID -8813199122875770142LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemComment, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemComment_init(OrgApacheXalanTemplatesElemComment *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemComment *new_OrgApacheXalanTemplatesElemComment_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemComment *create_OrgApacheXalanTemplatesElemComment_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemComment)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemComment")
