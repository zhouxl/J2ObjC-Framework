//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/WhitespaceStrippingElementMatcher.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathWhitespaceStrippingElementMatcher")
#ifdef RESTRICT_OrgApacheXpathWhitespaceStrippingElementMatcher
#define INCLUDE_ALL_OrgApacheXpathWhitespaceStrippingElementMatcher 0
#else
#define INCLUDE_ALL_OrgApacheXpathWhitespaceStrippingElementMatcher 1
#endif
#undef RESTRICT_OrgApacheXpathWhitespaceStrippingElementMatcher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathWhitespaceStrippingElementMatcher_) && (INCLUDE_ALL_OrgApacheXpathWhitespaceStrippingElementMatcher || defined(INCLUDE_OrgApacheXpathWhitespaceStrippingElementMatcher))
#define OrgApacheXpathWhitespaceStrippingElementMatcher_

@class OrgApacheXpathXPathContext;
@protocol OrgW3cDomElement;

/*!
 @brief A class that implements this interface can tell if a given element should 
  strip whitespace nodes from it's children.
 */
@protocol OrgApacheXpathWhitespaceStrippingElementMatcher < JavaObject >

/*!
 @brief Get information about whether or not an element should strip whitespace.
 - seealso: <a href="http://www.w3.org/TR/xslt#strip">strip in XSLT Specification</a>
 @param support The XPath runtime state.
 @param targetElement Element to check
 @return true if the whitespace should be stripped.
 @throw TransformerException
 */
- (jboolean)shouldStripWhiteSpaceWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)support
                                           withOrgW3cDomElement:(id<OrgW3cDomElement>)targetElement;

/*!
 @brief Get information about whether or not whitespace can be stripped.
 - seealso: <a href="http://www.w3.org/TR/xslt#strip">strip in XSLT Specification</a>
 @return true if the whitespace can be stripped.
 */
- (jboolean)canStripWhiteSpace;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathWhitespaceStrippingElementMatcher)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathWhitespaceStrippingElementMatcher)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathWhitespaceStrippingElementMatcher")
