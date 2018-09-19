//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/transformer/NodeSorter.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTransformerNodeSorter")
#ifdef RESTRICT_OrgApacheXalanTransformerNodeSorter
#define INCLUDE_ALL_OrgApacheXalanTransformerNodeSorter 0
#else
#define INCLUDE_ALL_OrgApacheXalanTransformerNodeSorter 1
#endif
#undef RESTRICT_OrgApacheXalanTransformerNodeSorter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanTransformerNodeSorter_) && (INCLUDE_ALL_OrgApacheXalanTransformerNodeSorter || defined(INCLUDE_OrgApacheXalanTransformerNodeSorter))
#define OrgApacheXalanTransformerNodeSorter_

@class JavaUtilVector;
@class OrgApacheXalanTransformerNodeSorter_NodeCompareElem;
@class OrgApacheXpathXPathContext;
@protocol OrgApacheXmlDtmDTMIterator;

/*!
 @brief This class can sort vectors of DOM nodes according to a select pattern.
 */
@interface OrgApacheXalanTransformerNodeSorter : NSObject {
 @public
  /*!
   @brief Current XPath context
   */
  OrgApacheXpathXPathContext *m_execContext_;
  /*!
   @brief Vector of NodeSortKeys
   */
  JavaUtilVector *m_keys_;
}

#pragma mark Public

/*!
 @brief Construct a NodeSorter, passing in the XSL TransformerFactory
  so it can know how to get the node data according to
  the proper whitespace rules.
 @param p Xpath context to use
 */
- (instancetype __nonnull)initWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)p;

/*!
 @brief Given a vector of nodes, sort each node according to
  the criteria in the keys.
 @param v an vector of Nodes.
 @param keys a vector of NodeSortKeys.
 @param support XPath context to use
 @throw javax.xml.transform.TransformerException
 */
- (void)sortWithOrgApacheXmlDtmDTMIterator:(id<OrgApacheXmlDtmDTMIterator>)v
                        withJavaUtilVector:(JavaUtilVector *)keys
            withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)support;

#pragma mark Package-Private

/*!
 @brief Return the results of a compare of two nodes.
 TODO: Optimize compare -- cache the getStringExpr results, key by m_selectPat + hash of node.
 @param n1 First node to use in compare
 @param n2 Second node to use in compare
 @param kIndex Index of NodeSortKey to use for sort
 @param support XPath context to use
 @return The results of the compare of the two nodes.
 @throw TransformerException
 */
- (jint)compareWithOrgApacheXalanTransformerNodeSorter_NodeCompareElem:(OrgApacheXalanTransformerNodeSorter_NodeCompareElem *)n1
               withOrgApacheXalanTransformerNodeSorter_NodeCompareElem:(OrgApacheXalanTransformerNodeSorter_NodeCompareElem *)n2
                                                               withInt:(jint)kIndex
                                        withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)support;

/*!
 @brief This implements a standard Mergesort, as described in
  Robert Sedgewick's Algorithms book.This is a better
  sort for our purpose than the Quicksort because it
  maintains the original document order of the input if
  the order isn't changed by the sort.
 @param a First vector of nodes to compare
 @param b Second vector of  nodes to compare
 @param l Left boundary of  partition
 @param r Right boundary of  partition
 @param support XPath context to use
 @throw TransformerException
 */
- (void)mergesortWithJavaUtilVector:(JavaUtilVector *)a
                 withJavaUtilVector:(JavaUtilVector *)b
                            withInt:(jint)l
                            withInt:(jint)r
     withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)support;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTransformerNodeSorter)

J2OBJC_FIELD_SETTER(OrgApacheXalanTransformerNodeSorter, m_execContext_, OrgApacheXpathXPathContext *)
J2OBJC_FIELD_SETTER(OrgApacheXalanTransformerNodeSorter, m_keys_, JavaUtilVector *)

FOUNDATION_EXPORT void OrgApacheXalanTransformerNodeSorter_initWithOrgApacheXpathXPathContext_(OrgApacheXalanTransformerNodeSorter *self, OrgApacheXpathXPathContext *p);

FOUNDATION_EXPORT OrgApacheXalanTransformerNodeSorter *new_OrgApacheXalanTransformerNodeSorter_initWithOrgApacheXpathXPathContext_(OrgApacheXpathXPathContext *p) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTransformerNodeSorter *create_OrgApacheXalanTransformerNodeSorter_initWithOrgApacheXpathXPathContext_(OrgApacheXpathXPathContext *p);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTransformerNodeSorter)

#endif

#if !defined (OrgApacheXalanTransformerNodeSorter_NodeCompareElem_) && (INCLUDE_ALL_OrgApacheXalanTransformerNodeSorter || defined(INCLUDE_OrgApacheXalanTransformerNodeSorter_NodeCompareElem))
#define OrgApacheXalanTransformerNodeSorter_NodeCompareElem_

@class OrgApacheXalanTransformerNodeSorter;

/*!
 @brief This class holds the value(s) from executing the given
  node against the sort key(s).
 */
@interface OrgApacheXalanTransformerNodeSorter_NodeCompareElem : NSObject {
 @public
  /*!
   @brief Current node
   */
  jint m_node_;
  /*!
   @brief This maxkey value was chosen arbitrarily.We are assuming that the    
     // maxkey + 1 keys will only hit fairly rarely and therefore, we
     // will get the node values for those keys dynamically.
   */
  jint maxkey_;
  /*!
   @brief Value from first sort key
   */
  id m_key1Value_;
  /*!
   @brief Value from second sort key
   */
  id m_key2Value_;
}

#pragma mark Package-Private

/*!
 @brief Constructor NodeCompareElem
 @param node Current node
 @throw javax.xml.transform.TransformerException
 */
- (instancetype __nonnull)initWithOrgApacheXalanTransformerNodeSorter:(OrgApacheXalanTransformerNodeSorter *)outer$
                                                              withInt:(jint)node;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTransformerNodeSorter_NodeCompareElem)

J2OBJC_FIELD_SETTER(OrgApacheXalanTransformerNodeSorter_NodeCompareElem, m_key1Value_, id)
J2OBJC_FIELD_SETTER(OrgApacheXalanTransformerNodeSorter_NodeCompareElem, m_key2Value_, id)

FOUNDATION_EXPORT void OrgApacheXalanTransformerNodeSorter_NodeCompareElem_initWithOrgApacheXalanTransformerNodeSorter_withInt_(OrgApacheXalanTransformerNodeSorter_NodeCompareElem *self, OrgApacheXalanTransformerNodeSorter *outer$, jint node);

FOUNDATION_EXPORT OrgApacheXalanTransformerNodeSorter_NodeCompareElem *new_OrgApacheXalanTransformerNodeSorter_NodeCompareElem_initWithOrgApacheXalanTransformerNodeSorter_withInt_(OrgApacheXalanTransformerNodeSorter *outer$, jint node) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTransformerNodeSorter_NodeCompareElem *create_OrgApacheXalanTransformerNodeSorter_NodeCompareElem_initWithOrgApacheXalanTransformerNodeSorter_withInt_(OrgApacheXalanTransformerNodeSorter *outer$, jint node);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTransformerNodeSorter_NodeCompareElem)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTransformerNodeSorter")
