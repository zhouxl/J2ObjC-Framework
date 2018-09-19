//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/PrefixResolver.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsPrefixResolver")
#ifdef RESTRICT_OrgApacheXmlUtilsPrefixResolver
#define INCLUDE_ALL_OrgApacheXmlUtilsPrefixResolver 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsPrefixResolver 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsPrefixResolver

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlUtilsPrefixResolver_) && (INCLUDE_ALL_OrgApacheXmlUtilsPrefixResolver || defined(INCLUDE_OrgApacheXmlUtilsPrefixResolver))
#define OrgApacheXmlUtilsPrefixResolver_

@protocol OrgW3cDomNode;

/*!
 @brief The class that implements this interface can resolve prefixes to
  namespaces.Examples would include resolving the meaning of a
  prefix at a particular point in a document, or mapping the prefixes
  used in an XPath expression.
 */
@protocol OrgApacheXmlUtilsPrefixResolver < JavaObject >

/*!
 @brief Given a namespace, get the corrisponding prefix.This assumes that
  the PrefixResolver holds its own namespace context, or is a namespace
  context itself.
 @param prefix The prefix to look up, which may be an empty string ("") for the default Namespace.
 @return The associated Namespace URI, or null if the prefix
          is undeclared in this context.
 */
- (NSString *)getNamespaceForPrefixWithNSString:(NSString *)prefix;

/*!
 @brief Given a namespace, get the corresponding prefix, based on the context node.
 @param prefix The prefix to look up, which may be an empty string ("") for the default Namespace.
 @param context The node context from which to look up the URI.
 @return The associated Namespace URI as a string, or null if the prefix
          is undeclared in this context.
 */
- (NSString *)getNamespaceForPrefixWithNSString:(NSString *)prefix
                              withOrgW3cDomNode:(id<OrgW3cDomNode>)context;

/*!
 @brief Return the base identifier.
 @return The base identifier from where relative URIs should be absolutized, or null 
  if the base ID is unknown. 
 <p>
  CAVEAT: Note that the base URI in an XML document may vary with where
  you are in the document, if part of the doc's contents were brought in
  via an external entity reference or if mechanisms such as xml:base have
  been used. Unless this PrefixResolver is bound to a specific portion of
  the document, or has been kept up to date via some other mechanism, it
  may not accurately reflect that context information.
 */
- (NSString *)getBaseIdentifier;

- (jboolean)handlesNullPrefixes;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsPrefixResolver)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsPrefixResolver)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsPrefixResolver")
