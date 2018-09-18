//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/AttList.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsAttList")
#ifdef RESTRICT_OrgApacheXmlUtilsAttList
#define INCLUDE_ALL_OrgApacheXmlUtilsAttList 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsAttList 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsAttList

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlUtilsAttList_) && (INCLUDE_ALL_OrgApacheXmlUtilsAttList || defined(INCLUDE_OrgApacheXmlUtilsAttList))
#define OrgApacheXmlUtilsAttList_

#define RESTRICT_OrgXmlSaxAttributes 1
#define INCLUDE_OrgXmlSaxAttributes 1
#include "org/xml/sax/Attributes.h"

@class OrgApacheXmlUtilsDOMHelper;
@protocol OrgW3cDomNamedNodeMap;

/*!
 @brief Wraps a DOM attribute list in a SAX Attributes.
 */
@interface OrgApacheXmlUtilsAttList : NSObject < OrgXmlSaxAttributes > {
 @public
  /*!
   @brief List of attribute nodes
   */
  id<OrgW3cDomNamedNodeMap> m_attrs_;
  /*!
   @brief Index of last attribute node
   */
  jint m_lastIndex_;
  /*!
   @brief Local reference to DOMHelper
   */
  OrgApacheXmlUtilsDOMHelper *m_dh_;
}

#pragma mark Public

/*!
 @brief Constructor AttList
 @param attrs List of attributes this will contain
 @param dh DOMHelper
 */
- (instancetype __nonnull)initWithOrgW3cDomNamedNodeMap:(id<OrgW3cDomNamedNodeMap>)attrs
                         withOrgApacheXmlUtilsDOMHelper:(OrgApacheXmlUtilsDOMHelper *)dh;

/*!
 @brief Look up the index of an attribute by raw XML 1.0 name.
 @param qName The qualified (prefixed) name.
 @return The index of the attribute, or -1 if it does not
          appear in the list.
 */
- (jint)getIndexWithNSString:(NSString *)qName;

/*!
 @brief Look up the index of an attribute by Namespace name.
 @param uri The Namespace URI, or the empty string if         the name has no Namespace URI.
 @param localPart The attribute's local name.
 @return The index of the attribute, or -1 if it does not
          appear in the list.
 */
- (jint)getIndexWithNSString:(NSString *)uri
                withNSString:(NSString *)localPart;

/*!
 @brief Get the number of attribute nodes in the list
 @return number of attribute nodes
 */
- (jint)getLength;

/*!
 @brief Look up an attribute's local name by index.
 @param index The attribute index (zero-based).
 @return The local name, or the empty string if Namespace
          processing is not being performed, or null
          if the index is out of range.
 */
- (NSString *)getLocalNameWithInt:(jint)index;

/*!
 @brief Look up an attribute's qualified name by index.
 @param i The attribute index (zero-based).
 @return The attribute's qualified name
 */
- (NSString *)getQNameWithInt:(jint)i;

/*!
 @brief Get the attribute's node type by index
 @param i The attribute index (zero-based)
 @return the attribute's node type
 */
- (NSString *)getTypeWithInt:(jint)i;

/*!
 @brief Get the attribute's node type by name
 @param name Attribute name
 @return the attribute's node type
 */
- (NSString *)getTypeWithNSString:(NSString *)name;

/*!
 @brief Look up an attribute's type by Namespace name.
 @param uri The Namespace URI, or the empty String if the         name has no Namespace URI.
 @param localName The local name of the attribute.
 @return The attribute type as a string, or null if the
          attribute is not in the list or if Namespace
          processing is not being performed.
 */
- (NSString *)getTypeWithNSString:(NSString *)uri
                     withNSString:(NSString *)localName;

/*!
 @brief Look up an attribute's Namespace URI by index.
 @param index The attribute index (zero-based).
 @return The Namespace URI, or the empty string if none
          is available, or null if the index is out of
          range.
 */
- (NSString *)getURIWithInt:(jint)index;

/*!
 @brief Get the attribute's node value by index
 @param i The attribute index (zero-based)
 @return the attribute's node value
 */
- (NSString *)getValueWithInt:(jint)i;

/*!
 @brief Look up an attribute's value by name.
 @param name The attribute node's name
 @return The attribute node's value
 */
- (NSString *)getValueWithNSString:(NSString *)name;

/*!
 @brief Look up an attribute's value by Namespace name.
 @param uri The Namespace URI, or the empty String if the         name has no Namespace URI.
 @param localName The local name of the attribute.
 @return The attribute value as a string, or null if the
          attribute is not in the list.
 */
- (NSString *)getValueWithNSString:(NSString *)uri
                      withNSString:(NSString *)localName;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsAttList)

J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsAttList, m_attrs_, id<OrgW3cDomNamedNodeMap>)
J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsAttList, m_dh_, OrgApacheXmlUtilsDOMHelper *)

FOUNDATION_EXPORT void OrgApacheXmlUtilsAttList_initWithOrgW3cDomNamedNodeMap_withOrgApacheXmlUtilsDOMHelper_(OrgApacheXmlUtilsAttList *self, id<OrgW3cDomNamedNodeMap> attrs, OrgApacheXmlUtilsDOMHelper *dh);

FOUNDATION_EXPORT OrgApacheXmlUtilsAttList *new_OrgApacheXmlUtilsAttList_initWithOrgW3cDomNamedNodeMap_withOrgApacheXmlUtilsDOMHelper_(id<OrgW3cDomNamedNodeMap> attrs, OrgApacheXmlUtilsDOMHelper *dh) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsAttList *create_OrgApacheXmlUtilsAttList_initWithOrgW3cDomNamedNodeMap_withOrgApacheXmlUtilsDOMHelper_(id<OrgW3cDomNamedNodeMap> attrs, OrgApacheXmlUtilsDOMHelper *dh);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsAttList)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsAttList")
