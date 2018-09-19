//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/axes/ContextNodeList.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathAxesContextNodeList")
#ifdef RESTRICT_OrgApacheXpathAxesContextNodeList
#define INCLUDE_ALL_OrgApacheXpathAxesContextNodeList 0
#else
#define INCLUDE_ALL_OrgApacheXpathAxesContextNodeList 1
#endif
#undef RESTRICT_OrgApacheXpathAxesContextNodeList

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathAxesContextNodeList_) && (INCLUDE_ALL_OrgApacheXpathAxesContextNodeList || defined(INCLUDE_OrgApacheXpathAxesContextNodeList))
#define OrgApacheXpathAxesContextNodeList_

@protocol OrgW3cDomNode;
@protocol OrgW3cDomTraversalNodeIterator;

/*!
 @brief Classes who implement this interface can be a 
 <a href="http://www.w3.org/TR/xslt#dt-current-node-list">current node list</a>,
  also refered to here as a <term>context node list</term>.
 */
@protocol OrgApacheXpathAxesContextNodeList < JavaObject >

/*!
 @brief Get the <a href="http://www.w3.org/TR/xslt#dt-current-node">current node</a>.
 @return The current node, or null.
 */
- (id<OrgW3cDomNode>)getCurrentNode;

/*!
 @brief Get the current position, which is one less than
  the next nextNode() call will retrieve.i.e. if
  you call getCurrentPos() and the return is 0, the next
  fetch will take place at index 1.
 @return The position of the 
 <a href="http://www.w3.org/TR/xslt#dt-current-node">current node</a>
  in the  <a href="http://www.w3.org/TR/xslt#dt-current-node-list">current node list</a>.
 */
- (jint)getCurrentPos;

/*!
 @brief Reset the iterator.
 */
- (void)reset;

/*!
 @brief If setShouldCacheNodes(true) is called, then nodes will
  be cached.They are not cached by default.
 @param b true if the nodes should be cached.
 */
- (void)setShouldCacheNodesWithBoolean:(jboolean)b;

/*!
 @brief If an index is requested, NodeSetDTM will call this method
  to run the iterator to the index.By default this sets
  m_next to the index.
 If the index argument is -1, this
  signals that the iterator should be run to the end.
 @param index The index to run to, or -1 if the iterator should be run               to the end.
 */
- (void)runToWithInt:(jint)index;

/*!
 @brief Set the current position in the node set.
 @param i Must be a valid index.
 */
- (void)setCurrentPosWithInt:(jint)i;

/*!
 @brief Get the length of the list.
 @return The number of nodes in this node list.
 */
- (jint)size;

/*!
 @brief Tells if this NodeSetDTM is "fresh", in other words, if
  the first nextNode() that is called will return the
  first node in the set.
 @return true if the iteration of this list has not yet begun.
 */
- (jboolean)isFresh;

/*!
 @brief Get a cloned Iterator that is reset to the start of the iteration.
 @return A clone of this iteration that has been reset.
 @throw CloneNotSupportedException
 */
- (id<OrgW3cDomTraversalNodeIterator>)cloneWithReset;

/*!
 @brief Get a clone of this iterator.Be aware that this operation may be
  somewhat expensive.
 @return A clone of this object.
 @throw CloneNotSupportedException
 */
- (id)clone;

/*!
 @brief Get the index of the last node in this list.
 @return the index of the last node in this list.
 */
- (jint)getLast;

/*!
 @brief Set the index of the last node in this list.
 @param last the index of the last node in this list.
 */
- (void)setLastWithInt:(jint)last;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathAxesContextNodeList)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathAxesContextNodeList)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathAxesContextNodeList")
