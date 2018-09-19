//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/extensions/ExpressionVisitor.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanExtensionsExpressionVisitor")
#ifdef RESTRICT_OrgApacheXalanExtensionsExpressionVisitor
#define INCLUDE_ALL_OrgApacheXalanExtensionsExpressionVisitor 0
#else
#define INCLUDE_ALL_OrgApacheXalanExtensionsExpressionVisitor 1
#endif
#undef RESTRICT_OrgApacheXalanExtensionsExpressionVisitor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanExtensionsExpressionVisitor_) && (INCLUDE_ALL_OrgApacheXalanExtensionsExpressionVisitor || defined(INCLUDE_OrgApacheXalanExtensionsExpressionVisitor))
#define OrgApacheXalanExtensionsExpressionVisitor_

#define RESTRICT_OrgApacheXpathXPathVisitor 1
#define INCLUDE_OrgApacheXpathXPathVisitor 1
#include "../../../../org/apache/xpath/XPathVisitor.h"

@class OrgApacheXalanTemplatesStylesheetRoot;
@class OrgApacheXpathFunctionsFunction;
@protocol OrgApacheXpathExpressionOwner;

/*!
 @brief When <code>org.apache.xalan.processor.StylesheetHandler</code> creates 
  an <code>org.apache.xpath.XPath</code>, the ExpressionVisitor
  visits the XPath expression.For any extension functions it 
  encounters, it instructs StylesheetRoot to register the
  extension namespace.
 This mechanism is required to locate extension functions
  that may be embedded within an expression.
 */
@interface OrgApacheXalanExtensionsExpressionVisitor : OrgApacheXpathXPathVisitor

#pragma mark Public

/*!
 @brief The constructor sets the StylesheetRoot variable which
  is used to register extension namespaces.
 @param sroot the StylesheetRoot that is being constructed.
 */
- (instancetype __nonnull)initWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)sroot;

/*!
 @brief If the function is an extension function, register the namespace.
 @param owner The current XPath object that owns the expression.
 @param func The function currently being visited.
 @return true to continue the visit in the subtree, if any.
 */
- (jboolean)visitFunctionWithOrgApacheXpathExpressionOwner:(id<OrgApacheXpathExpressionOwner>)owner
                       withOrgApacheXpathFunctionsFunction:(OrgApacheXpathFunctionsFunction *)func;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanExtensionsExpressionVisitor)

FOUNDATION_EXPORT void OrgApacheXalanExtensionsExpressionVisitor_initWithOrgApacheXalanTemplatesStylesheetRoot_(OrgApacheXalanExtensionsExpressionVisitor *self, OrgApacheXalanTemplatesStylesheetRoot *sroot);

FOUNDATION_EXPORT OrgApacheXalanExtensionsExpressionVisitor *new_OrgApacheXalanExtensionsExpressionVisitor_initWithOrgApacheXalanTemplatesStylesheetRoot_(OrgApacheXalanTemplatesStylesheetRoot *sroot) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanExtensionsExpressionVisitor *create_OrgApacheXalanExtensionsExpressionVisitor_initWithOrgApacheXalanTemplatesStylesheetRoot_(OrgApacheXalanTemplatesStylesheetRoot *sroot);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanExtensionsExpressionVisitor)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanExtensionsExpressionVisitor")
