//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/extensions/ExpressionContext.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanExtensionsExpressionContext")
#ifdef RESTRICT_OrgApacheXalanExtensionsExpressionContext
#define INCLUDE_ALL_OrgApacheXalanExtensionsExpressionContext 0
#else
#define INCLUDE_ALL_OrgApacheXalanExtensionsExpressionContext 1
#endif
#undef RESTRICT_OrgApacheXalanExtensionsExpressionContext

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanExtensionsExpressionContext_) && (INCLUDE_ALL_OrgApacheXalanExtensionsExpressionContext || defined(INCLUDE_OrgApacheXalanExtensionsExpressionContext))
#define OrgApacheXalanExtensionsExpressionContext_

@class OrgApacheXmlUtilsQName;
@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;
@protocol JavaxXmlTransformErrorListener;
@protocol OrgW3cDomNode;
@protocol OrgW3cDomTraversalNodeIterator;

/*!
 @brief An object that implements this interface can supply
  information about the current XPath expression context.
 */
@protocol OrgApacheXalanExtensionsExpressionContext < JavaObject >

/*!
 @brief Get the current context node.
 @return The current context node.
 */
- (id<OrgW3cDomNode>)getContextNode;

/*!
 @brief Get the current context node list.
 @return An iterator for the current context list, as
  defined in XSLT.
 */
- (id<OrgW3cDomTraversalNodeIterator>)getContextNodes;

/*!
 @brief Get the error listener.
 @return The registered error listener.
 */
- (id<JavaxXmlTransformErrorListener>)getErrorListener;

/*!
 @brief Get the value of a node as a number.
 @param n Node to be converted to a number.  May be null.
 @return value of n as a number.
 */
- (jdouble)toNumberWithOrgW3cDomNode:(id<OrgW3cDomNode>)n;

/*!
 @brief Get the value of a node as a string.
 @param n Node to be converted to a string.  May be null.
 @return value of n as a string, or an empty string if n is null.
 */
- (NSString *)toStringWithOrgW3cDomNode:(id<OrgW3cDomNode>)n;

/*!
 @brief Get a variable based on it's qualified name.
 @param qname The qualified name of the variable.
 @return The evaluated value of the variable.
 @throw javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)getVariableOrParamWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)qname;

/*!
 @brief Get the XPathContext that owns this ExpressionContext.
 Note: exslt:function requires the XPathContext to access
  the variable stack and TransformerImpl.
 @return The current XPathContext.
 @throw javax.xml.transform.TransformerException
 */
- (OrgApacheXpathXPathContext *)getXPathContext;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanExtensionsExpressionContext)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanExtensionsExpressionContext)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanExtensionsExpressionContext")
