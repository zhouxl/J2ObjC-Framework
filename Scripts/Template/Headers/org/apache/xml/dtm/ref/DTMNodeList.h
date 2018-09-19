//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/dtm/ref/DTMNodeList.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlDtmRefDTMNodeList")
#ifdef RESTRICT_OrgApacheXmlDtmRefDTMNodeList
#define INCLUDE_ALL_OrgApacheXmlDtmRefDTMNodeList 0
#else
#define INCLUDE_ALL_OrgApacheXmlDtmRefDTMNodeList 1
#endif
#undef RESTRICT_OrgApacheXmlDtmRefDTMNodeList

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlDtmRefDTMNodeList_) && (INCLUDE_ALL_OrgApacheXmlDtmRefDTMNodeList || defined(INCLUDE_OrgApacheXmlDtmRefDTMNodeList))
#define OrgApacheXmlDtmRefDTMNodeList_

#define RESTRICT_OrgApacheXmlDtmRefDTMNodeListBase 1
#define INCLUDE_OrgApacheXmlDtmRefDTMNodeListBase 1
#include "../../../../../org/apache/xml/dtm/ref/DTMNodeListBase.h"

@protocol OrgApacheXmlDtmDTMIterator;
@protocol OrgW3cDomNode;

/*!
 @brief <code>DTMNodeList</code> gives us an implementation of the DOM's
  NodeList interface wrapped around a DTM Iterator.The author
  considers this something of an abominations, since NodeList was not
  intended to be a general purpose "list of nodes" API and is
  generally considered by the DOM WG to have be a mistake... but I'm
  told that some of the XPath/XSLT folks say they must have this
  solution.
 Please note that this is not necessarily equivlaent to a DOM
  NodeList operating over the same document. In particular: 
 <ul>
  
 <li>If there are several Text nodes in logical succession (ie,
  across CDATASection and EntityReference boundaries), we will return
  only the first; the caller is responsible for stepping through
  them.
  (%REVIEW% Provide a convenience routine here to assist, pending
  proposed DOM Level 3 getAdjacentText() operation?) </li>
  
 <li>Since the whole XPath/XSLT architecture assumes that the source
  document is not altered while we're working with it, we do not
  promise to implement the DOM NodeList's "live view" response to
  document mutation. </li>
  
 </ul>
  
 <p>State: In progress!!</p>
 */
@interface OrgApacheXmlDtmRefDTMNodeList : OrgApacheXmlDtmRefDTMNodeListBase

#pragma mark Public

/*!
 @brief Public constructor: Wrap a DTMNodeList around an existing
  and preconfigured DTMIterator
  WARNING: THIS HAS THE SIDE EFFECT OF ISSUING setShouldCacheNodes(true)
  AGAINST THE DTMIterator.
 */
- (instancetype __nonnull)initWithOrgApacheXmlDtmDTMIterator:(id<OrgApacheXmlDtmDTMIterator>)dtmIterator;

/*!
 @brief Access the wrapped DTMIterator.I'm not sure whether anyone will
  need this or not, but let's write it and think about it.
 */
- (id<OrgApacheXmlDtmDTMIterator>)getDTMIterator;

/*!
 @brief The number of nodes in the list.The range of valid child node indices 
  is 0 to <code>length-1</code> inclusive.
 */
- (jint)getLength;

/*!
 @brief Returns the <code>index</code>th item in the collection.If  
 <code>index</code> is greater than or equal to the number of nodes in 
  the list, this returns <code>null</code>.
 @param index Index into the collection.
 @return The node at the <code>index</code>th position in the 
    <code>NodeList</code>, or <code>null</code> if that is not a valid 
    index.
 */
- (id<OrgW3cDomNode>)itemWithInt:(jint)index;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlDtmRefDTMNodeList)

FOUNDATION_EXPORT void OrgApacheXmlDtmRefDTMNodeList_initWithOrgApacheXmlDtmDTMIterator_(OrgApacheXmlDtmRefDTMNodeList *self, id<OrgApacheXmlDtmDTMIterator> dtmIterator);

FOUNDATION_EXPORT OrgApacheXmlDtmRefDTMNodeList *new_OrgApacheXmlDtmRefDTMNodeList_initWithOrgApacheXmlDtmDTMIterator_(id<OrgApacheXmlDtmDTMIterator> dtmIterator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmRefDTMNodeList *create_OrgApacheXmlDtmRefDTMNodeList_initWithOrgApacheXmlDtmDTMIterator_(id<OrgApacheXmlDtmDTMIterator> dtmIterator);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmRefDTMNodeList)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlDtmRefDTMNodeList")
