//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/transformer/TransformState.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTransformerTransformState")
#ifdef RESTRICT_OrgApacheXalanTransformerTransformState
#define INCLUDE_ALL_OrgApacheXalanTransformerTransformState 0
#else
#define INCLUDE_ALL_OrgApacheXalanTransformerTransformState 1
#endif
#undef RESTRICT_OrgApacheXalanTransformerTransformState

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanTransformerTransformState_) && (INCLUDE_ALL_OrgApacheXalanTransformerTransformState || defined(INCLUDE_OrgApacheXalanTransformerTransformState))
#define OrgApacheXalanTransformerTransformState_

#define RESTRICT_OrgApacheXmlSerializerTransformStateSetter 1
#define INCLUDE_OrgApacheXmlSerializerTransformStateSetter 1
#include "../../../../org/apache/xml/serializer/TransformStateSetter.h"

@class JavaxXmlTransformTransformer;
@class OrgApacheXalanTemplatesElemTemplate;
@class OrgApacheXalanTemplatesElemTemplateElement;
@protocol OrgW3cDomNode;
@protocol OrgW3cDomTraversalNodeIterator;

/*!
 @brief This interface is meant to be used by a consumer of
  SAX2 events produced by Xalan, and enables the consumer
  to get information about the state of the transform.It
  is primarily intended as a tooling interface.
 A content
  handler can get a reference to a TransformState by implementing
  the TransformerClient interface.  Xalan will check for
  that interface before it calls startDocument, and, if it
  is implemented, pass in a TransformState reference to the
  setTransformState method. 
 <p>Note that the current stylesheet and root stylesheet can
  be retrieved from the ElemTemplateElement obtained from
  either getCurrentElement() or getCurrentTemplate().</p>
  
  This interface contains only getter methods, any setters are in the interface
  TransformStateSetter which this interface extends.
 - seealso: org.apache.xml.serializer.TransformStateSetter
 */
@protocol OrgApacheXalanTransformerTransformState < OrgApacheXmlSerializerTransformStateSetter, JavaObject >

/*!
 @brief Retrieves the stylesheet element that produced
  the SAX event.
 <p>Please note that the ElemTemplateElement returned may
  be in a default template, and thus may not be
  defined in the stylesheet.</p>
 @return the stylesheet element that produced the SAX event.
 */
- (OrgApacheXalanTemplatesElemTemplateElement *)getCurrentElement;

/*!
 @brief This method retrieves the current context node
  in the source tree.
 @return the current context node in the source tree.
 */
- (id<OrgW3cDomNode>)getCurrentNode;

/*!
 @brief This method retrieves the xsl:template
  that is in effect, which may be a matched template
  or a named template.
 <p>Please note that the ElemTemplate returned may
  be a default template, and thus may not have a template
  defined in the stylesheet.</p>
 @return the xsl:template that is in effect
 */
- (OrgApacheXalanTemplatesElemTemplate *)getCurrentTemplate;

/*!
 @brief This method retrieves the xsl:template
  that was matched.Note that this may not be
  the same thing as the current template (which
  may be from getCurrentElement()), since a named
  template may be in effect.
 <p>Please note that the ElemTemplate returned may
  be a default template, and thus may not have a template
  defined in the stylesheet.</p>
 @return the xsl:template that was matched.
 */
- (OrgApacheXalanTemplatesElemTemplate *)getMatchedTemplate;

/*!
 @brief Retrieves the node in the source tree that matched
  the template obtained via getMatchedTemplate().
 @return the node in the source tree that matched
  the template obtained via getMatchedTemplate().
 */
- (id<OrgW3cDomNode>)getMatchedNode;

/*!
 @brief Get the current context node list.
 @return the current context node list.
 */
- (id<OrgW3cDomTraversalNodeIterator>)getContextNodeList;

/*!
 @brief Get the TrAX Transformer object in effect.
 @return the TrAX Transformer object in effect.
 */
- (JavaxXmlTransformTransformer *)getTransformer;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTransformerTransformState)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTransformerTransformState)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTransformerTransformState")
