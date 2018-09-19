//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/NodeSet.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathNodeSet")
#ifdef RESTRICT_OrgApacheXpathNodeSet
#define INCLUDE_ALL_OrgApacheXpathNodeSet 0
#else
#define INCLUDE_ALL_OrgApacheXpathNodeSet 1
#endif
#undef RESTRICT_OrgApacheXpathNodeSet

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathNodeSet_) && (INCLUDE_ALL_OrgApacheXpathNodeSet || defined(INCLUDE_OrgApacheXpathNodeSet))
#define OrgApacheXpathNodeSet_

#define RESTRICT_OrgW3cDomNodeList 1
#define INCLUDE_OrgW3cDomNodeList 1
#include "../../../org/w3c/dom/NodeList.h"

#define RESTRICT_OrgW3cDomTraversalNodeIterator 1
#define INCLUDE_OrgW3cDomTraversalNodeIterator 1
#include "../../../org/w3c/dom/traversal/NodeIterator.h"

#define RESTRICT_OrgApacheXpathAxesContextNodeList 1
#define INCLUDE_OrgApacheXpathAxesContextNodeList 1
#include "../../../org/apache/xpath/axes/ContextNodeList.h"

@class IOSObjectArray;
@class OrgApacheXpathXPathContext;
@protocol OrgW3cDomNode;
@protocol OrgW3cDomTraversalNodeFilter;

/*!
 @brief <p>The NodeSet class can act as either a NodeVector,
  NodeList, or NodeIterator.
 However, in order for it to
  act as a NodeVector or NodeList, it's required that
  setShouldCacheNodes(true) be called before the first
  nextNode() is called, in order that nodes can be added
  as they are fetched.  Derived classes that implement iterators
  must override runTo(int index), in order that they may
  run the iteration to the given index. </p>
   
 <p>Note that we directly implement the DOM's NodeIterator
  interface. We do not emulate all the behavior of the
  standard NodeIterator. In particular, we do not guarantee
  to present a "live view" of the document ... but in XSLT,
  the source document should never be mutated, so this should
  never be an issue.</p>
   
 <p>Thought: Should NodeSet really implement NodeList and NodeIterator,
  or should there be specific subclasses of it which do so? The
  advantage of doing it all here is that all NodeSets will respond
  to the same calls; the disadvantage is that some of them may return
  less-than-enlightening results when you do so.</p>
 */
@interface OrgApacheXpathNodeSet : NSObject < OrgW3cDomNodeList, OrgW3cDomTraversalNodeIterator, NSCopying, OrgApacheXpathAxesContextNodeList > {
 @public
  /*!
   @brief If this node is being used as an iterator, the next index that nextNode()
   will return.
   */
  jint m_next_;
  /*!
   @brief True if this list can be mutated.
   */
  jboolean m_mutable_;
  /*!
   @brief True if this list is cached.
   */
  jboolean m_cacheNodes_;
  /*!
   @brief Array of nodes this points to.
   */
  IOSObjectArray *m_map_;
  /*!
   @brief Number of nodes in this NodeVector.
   */
  jint m_firstFree_;
}

#pragma mark Public

/*!
 @brief Create an empty nodelist.
 */
- (instancetype __nonnull)init;

/*!
 @brief Create an empty, using the given block size.
 @param blocksize Size of blocks to allocate
 */
- (instancetype __nonnull)initWithInt:(jint)blocksize;

/*!
 @brief Create a NodeSet which contains the given Node.
 @param node Single node to be added to the new set.
 */
- (instancetype __nonnull)initWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

/*!
 @brief Create a NodeSet, and copy the members of the
  given NodeIterator into it.
 @param ni Iterator which yields Nodes to be made members of the new set.
 */
- (instancetype __nonnull)initWithOrgW3cDomTraversalNodeIterator:(id<OrgW3cDomTraversalNodeIterator>)ni;

/*!
 @brief Create a NodeSet, and copy the members of the
  given nodelist into it.
 @param nodelist List of Nodes to be made members of the new set.
 */
- (instancetype __nonnull)initWithOrgW3cDomNodeList:(id<OrgW3cDomNodeList>)nodelist;

/*!
 @brief Create a NodeSet, and copy the members of the
  given NodeSet into it.
 @param nodelist Set of Nodes to be made members of the new set.
 */
- (instancetype __nonnull)initWithOrgApacheXpathNodeSet:(OrgApacheXpathNodeSet *)nodelist;

/*!
 @brief Append a Node onto the vector.
 @param value Node to add to the vector
 */
- (void)addElementWithOrgW3cDomNode:(id<OrgW3cDomNode>)value;

/*!
 @brief Add a node to the NodeSet.Not all types of NodeSets support this
  operation
 @param n Node to be added
 @throw RuntimeExceptionthrown if this NodeSet is not of 
  a mutable type.
 */
- (void)addNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)n;

/*!
 @brief Add the node into a vector of nodes where it should occur in
  document order.
 @param node The node to be added.
 @param test true if we should test for doc order
 @param support The XPath runtime context.
 @return insertIndex.
 @throw RuntimeExceptionthrown if this NodeSet is not of 
  a mutable type.
 */
- (jint)addNodeInDocOrderWithOrgW3cDomNode:(id<OrgW3cDomNode>)node
                               withBoolean:(jboolean)test
            withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)support;

/*!
 @brief Add the node into a vector of nodes where it should occur in
  document order.
 @param node The node to be added.
 @param support The XPath runtime context.
 @return The index where it was inserted.
 @throw RuntimeExceptionthrown if this NodeSet is not of 
  a mutable type.
 */
- (jint)addNodeInDocOrderWithOrgW3cDomNode:(id<OrgW3cDomNode>)node
            withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)support;

/*!
 @brief Copy NodeList members into this nodelist, adding in
  document order.Null references are not added.
 @param iterator NodeIterator which yields the nodes to be added.
 @throw RuntimeExceptionthrown if this NodeSet is not of 
  a mutable type.
 */
- (void)addNodesWithOrgW3cDomTraversalNodeIterator:(id<OrgW3cDomTraversalNodeIterator>)iterator;

/*!
 @brief Copy NodeList members into this nodelist, adding in
  document order.If a node is null, don't add it.
 @param nodelist List of nodes which should now be referenced by  this NodeSet.
 @throw RuntimeExceptionthrown if this NodeSet is not of 
  a mutable type.
 */
- (void)addNodesWithOrgW3cDomNodeList:(id<OrgW3cDomNodeList>)nodelist;

/*!
 @brief <p>Copy NodeList members into this nodelist, adding in
  document order.
 Only genuine node references will be copied;
  nulls appearing in the source NodeSet will
  not be added to this one. </p>
   
 <p> In case you're wondering why this function is needed: NodeSet
  implements both NodeIterator and NodeList. If this method isn't
  provided, Java can't decide which of those to use when addNodes()
  is invoked. Providing the more-explicit match avoids that
  ambiguity.)</p>
 @param ns NodeSet whose members should be merged into this NodeSet.
 @throw RuntimeExceptionthrown if this NodeSet is not of 
  a mutable type.
 */
- (void)addNodesWithOrgApacheXpathNodeSet:(OrgApacheXpathNodeSet *)ns;

/*!
 @brief Copy NodeList members into this nodelist, adding in
  document order.If a node is null, don't add it.
 @param iterator NodeIterator which yields the nodes to be added.
 @param support The XPath runtime context.
 @throw RuntimeExceptionthrown if this NodeSet is not of 
  a mutable type.
 */
- (void)addNodesInDocOrderWithOrgW3cDomTraversalNodeIterator:(id<OrgW3cDomTraversalNodeIterator>)iterator
                              withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)support;

/*!
 @brief Copy NodeList members into this nodelist, adding in
  document order.If a node is null, don't add it.
 @param nodelist List of nodes to be added
 @param support The XPath runtime context.
 @throw RuntimeExceptionthrown if this NodeSet is not of 
  a mutable type.
 */
- (void)addNodesInDocOrderWithOrgW3cDomNodeList:(id<OrgW3cDomNodeList>)nodelist
                 withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)support;

/*!
 @brief Append the nodes to the list.
 @param nodes NodeVector to append to this list
 */
- (void)appendNodesWithOrgApacheXpathNodeSet:(OrgApacheXpathNodeSet *)nodes;

/*!
 @brief Get a cloned LocPathIterator.
 @return A clone of this
 @throw CloneNotSupportedException
 */
- (id)java_clone;

/*!
 @brief Get a cloned Iterator, and reset its state to the beginning of the
  iteration.
 @return a new NodeSet of the same type, having the same state...
  except that the reset() operation has been called.
 @throw CloneNotSupportedExceptionif this subclass of NodeSet
  does not support the clone() operation.
 */
- (id<OrgW3cDomTraversalNodeIterator>)cloneWithReset;

/*!
 @brief Tell if the table contains the given node.
 @param s Node to look for
 @return True if the given node was found.
 */
- (jboolean)containsWithOrgW3cDomNode:(id<OrgW3cDomNode>)s;

/*!
 @brief Detaches the iterator from the set which it iterated over, releasing
  any computational resources and placing the iterator in the INVALID
  state.After<code>detach</code> has been invoked, calls to 
 <code>nextNode</code> or<code>previousNode</code> will raise the
  exception INVALID_STATE_ERR.
 <p>
  This operation is a no-op in NodeSet, and will not cause 
  INVALID_STATE_ERR to be raised by later operations. 
 </p>
 */
- (void)detach;

/*!
 @brief Get the nth element.
 @param i Index of node to get
 @return Node at specified index
 */
- (id<OrgW3cDomNode>)elementAtWithInt:(jint)i;

/*!
 @brief Return the last fetched node.Needed to support the UnionPathIterator.
 @return the last fetched node.
 @throw RuntimeExceptionthrown if this NodeSet is not of 
  a cached type, and thus doesn't permit indexed access.
 */
- (id<OrgW3cDomNode>)getCurrentNode;

/*!
 @brief Get the current position, which is one less than
  the next nextNode() call will retrieve.i.e. if
  you call getCurrentPos() and the return is 0, the next
  fetch will take place at index 1.
 @return The the current position index.
 */
- (jint)getCurrentPos;

/*!
 @brief The value of this flag determines whether the children of entity
  reference nodes are visible to the iterator.If false, they will be
  skipped over.
 <br> To produce a view of the document that has entity references
  expanded and does not expose the entity reference node itself, use the
  whatToShow flags to hide the entity reference node and set
  expandEntityReferences to true when creating the iterator. To produce
  a view of the document that has entity reference nodes but no entity
  expansion, use the whatToShow flags to show the entity reference node
  and set expandEntityReferences to false.
 @return true for all iterators based on NodeSet, meaning that the
  contents of EntityRefrence nodes may be returned (though whatToShow
  says that the EntityReferences themselves are not shown.)
 */
- (jboolean)getExpandEntityReferences;

/*!
 @brief The filter object used to screen nodes.Filters are applied to
  further reduce (and restructure) the NodeIterator's view of the
  document.
 In our case, we will be using hardcoded filters built
  into our iterators... but getFilter() is part of the DOM's 
  NodeIterator interface, so we have to support it.
 @return null, which is slightly misleading. True, there is no
  user-written filter object, but in fact we are doing some very
  sophisticated custom filtering. A DOM purist might suggest
  returning a placeholder object just to indicate that this is
  not going to return all nodes selected by whatToShow.
 */
- (id<OrgW3cDomTraversalNodeFilter>)getFilter;

- (jint)getLast;

/*!
 @brief The number of nodes in the list.The range of valid child node indices is
  0 to <code>length-1</code> inclusive.
 Note that this operation requires
  finding all the matching nodes, which may defeat attempts to defer
  that work.
 @return integer indicating how many nodes are represented by this list.
 */
- (jint)getLength;

/*!
 @return The root node of the Iterator, as specified when it was created.
  For non-Iterator NodeSets, this will be null.
 */
- (id<OrgW3cDomNode>)getRoot;

/*!
 @brief Get whether or not this is a cached node set.
 @return True if this list is cached.
 */
- (jboolean)getShouldCacheNodes;

/*!
 @brief This attribute determines which node types are presented via the
  iterator.The available set of constants is defined in the 
 <code>NodeFilter</code> interface.
 For NodeSets, the mask has been
  hardcoded to show all nodes except EntityReference nodes, which have
  no equivalent in the XPath data model.
 @return integer used as a bit-array, containing flags defined in
  the DOM's NodeFilter class. The value will be  
 <code>SHOW_ALL & ~SHOW_ENTITY_REFERENCE</code>, meaning that
  only entity references are suppressed.
 */
- (jint)getWhatToShow;

/*!
 @brief Searches for the first occurence of the given argument,
  beginning the search at index, and testing for equality
  using the equals method.
 @param elem Node to look for
 @return the index of the first occurrence of the object
  argument in this vector at position index or later in the
  vector; returns -1 if the object is not found.
 */
- (jint)indexOfWithOrgW3cDomNode:(id<OrgW3cDomNode>)elem;

/*!
 @brief Searches for the first occurence of the given argument,
  beginning the search at index, and testing for equality
  using the equals method.
 @param elem Node to look for
 @param index Index of where to start the search
 @return the index of the first occurrence of the object
  argument in this vector at position index or later in the
  vector; returns -1 if the object is not found.
 */
- (jint)indexOfWithOrgW3cDomNode:(id<OrgW3cDomNode>)elem
                         withInt:(jint)index;

/*!
 @brief Inserts the specified node in this vector at the specified index.
 Each component in this vector with an index greater or equal to
  the specified index is shifted upward to have an index one greater
  than the value it had previously.
 @param value Node to insert
 @param at Position where to insert
 */
- (void)insertElementAtWithOrgW3cDomNode:(id<OrgW3cDomNode>)value
                                 withInt:(jint)at;

/*!
 @brief Insert a node at a given position.
 @param n Node to be added
 @param pos Offset at which the node is to be inserted,  with 0 being the first position.
 @throw RuntimeExceptionthrown if this NodeSet is not of 
  a mutable type.
 */
- (void)insertNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)n
                            withInt:(jint)pos;

/*!
 @brief Tells if this NodeSet is "fresh", in other words, if
  the first nextNode() that is called will return the
  first node in the set.
 @return true if nextNode() would return the first node in the set,
  false if it would return a later one.
 */
- (jboolean)isFresh;

/*!
 @brief Returns the <code>index</code>th item in the collection.If
  <code>index</code> is greater than or equal to the number of nodes in
  the list, this returns <code>null</code>.
 TODO: What happens if index is out of range?
 @param index Index into the collection.
 @return The node at the <code>index</code>th position in the
    <code>NodeList</code>, or <code>null</code> if that is not a valid
    index.
 */
- (id<OrgW3cDomNode>)itemWithInt:(jint)index;

/*!
 @brief Returns the next node in the set and advances the position of the
  iterator in the set.After a NodeIterator is created, the first call
  to nextNode() returns the first node in the set.
 @return The next <code>Node</code> in the set being iterated over, or
    <code>null</code> if there are no more members in that set.
 @throw DOMException
 INVALID_STATE_ERR: Raised if this method is called after the
    <code>detach</code> method was invoked.
 */
- (id<OrgW3cDomNode>)nextNode;

/*!
 @brief Return the node at the top of the stack without popping the stack.
 Special purpose method for TransformerImpl, pushElemTemplateElement.
  Performance critical.
 @return Node at the top of the stack or null if stack is empty.
 */
- (id<OrgW3cDomNode>)peepOrNull;

/*!
 @brief Return the node at the tail of the vector without popping
  Special purpose method for TransformerImpl, pushElemTemplateElement.
 Performance critical.
 @return Node at the tail of the vector
 */
- (id<OrgW3cDomNode>)peepTail;

/*!
 @brief Return the node one position from the tail without popping.
 Special purpose method for TransformerImpl, pushElemTemplateElement.
  Performance critical.
 @return Node one away from the tail
 */
- (id<OrgW3cDomNode>)peepTailSub1;

/*!
 @brief Pop a node from the tail of the vector and return the result.
 @return the node at the tail of the vector
 */
- (id<OrgW3cDomNode>)pop;

/*!
 @brief Pop a node from the tail of the vector and return the
  top of the stack after the pop.
 @return The top of the stack after it's been popped
 */
- (id<OrgW3cDomNode>)popAndTop;

/*!
 @brief Pop a pair of nodes from the tail of the stack.
 Special purpose method for TransformerImpl, pushElemTemplateElement.
  Performance critical.
 */
- (void)popPair;

/*!
 @brief Pop a node from the tail of the vector.
 */
- (void)popQuick;

/*!
 @brief Returns the previous node in the set and moves the position of the
  iterator backwards in the set.
 @return The previous <code>Node</code> in the set being iterated over,
    or<code>null</code> if there are no more members in that set.
 @throw DOMException
 INVALID_STATE_ERR: Raised if this method is called after the
    <code>detach</code> method was invoked.
 @throw RuntimeExceptionthrown if this NodeSet is not of 
  a cached type, and hence doesn't know what the previous node was.
 */
- (id<OrgW3cDomNode>)previousNode;

/*!
 @brief Append a Node onto the vector.
 @param value Node to add to the vector
 */
- (void)pushWithOrgW3cDomNode:(id<OrgW3cDomNode>)value;

/*!
 @brief Push a pair of nodes into the stack.
 Special purpose method for TransformerImpl, pushElemTemplateElement.
  Performance critical.
 @param v1 First node to add to vector
 @param v2 Second node to add to vector
 */
- (void)pushPairWithOrgW3cDomNode:(id<OrgW3cDomNode>)v1
                withOrgW3cDomNode:(id<OrgW3cDomNode>)v2;

/*!
 @brief Inserts the specified node in this vector at the specified index.
 Each component in this vector with an index greater or equal to
  the specified index is shifted upward to have an index one greater
  than the value it had previously.
 */
- (void)removeAllElements;

/*!
 @brief Removes the first occurrence of the argument from this vector.
 If the object is found in this vector, each component in the vector
  with an index greater or equal to the object's index is shifted
  downward to have an index one smaller than the value it had
  previously.
 @param s Node to remove from the list
 @return True if the node was successfully removed
 */
- (jboolean)removeElementWithOrgW3cDomNode:(id<OrgW3cDomNode>)s;

/*!
 @brief Deletes the component at the specified index.Each component in
  this vector with an index greater or equal to the specified
  index is shifted downward to have an index one smaller than
  the value it had previously.
 @param i Index of node to remove
 */
- (void)removeElementAtWithInt:(jint)i;

/*!
 @brief Remove a node.
 @param n Node to be added
 @throw RuntimeExceptionthrown if this NodeSet is not of 
  a mutable type.
 */
- (void)removeNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)n;

/*!
 @brief Reset the iterator.May have no effect on non-iterator Nodesets.
 */
- (void)reset;

/*!
 @brief If an index is requested, NodeSet will call this method
  to run the iterator to the index.By default this sets
  m_next to the index.
 If the index argument is -1, this
  signals that the iterator should be run to the end.
 @param index Position to advance (or retreat) to, with  0 requesting the reset ("fresh") position and -1 (or indeed
   any out-of-bounds value) requesting the final position.
 @throw RuntimeExceptionthrown if this NodeSet is not
  one of the types which supports indexing/counting.
 */
- (void)runToWithInt:(jint)index;

/*!
 @brief Set the current position in the node set.
 @param i Must be a valid index.
 @throw RuntimeExceptionthrown if this NodeSet is not of 
  a cached type, and thus doesn't permit indexed access.
 */
- (void)setCurrentPosWithInt:(jint)i;

/*!
 @brief Sets the component at the specified index of this vector to be the
  specified object.The previous component at that position is discarded.
 The index must be a value greater than or equal to 0 and less
  than the current size of the vector.
 @param node Node to set
 @param index Index of where to set the node
 */
- (void)setElementAtWithOrgW3cDomNode:(id<OrgW3cDomNode>)node
                              withInt:(jint)index;

- (void)setLastWithInt:(jint)last;

/*!
 @brief If setShouldCacheNodes(true) is called, then nodes will
  be cached.They are not cached by default.
 This switch must
  be set before the first call to nextNode is made, to ensure
  that all nodes are cached.
 @param b true if this node set should be cached.
 @throw RuntimeExceptionthrown if an attempt is made to
  request caching after we've already begun stepping through the
  nodes in this set.
 */
- (void)setShouldCacheNodesWithBoolean:(jboolean)b;

/*!
 @brief Set the tail of the stack to the given node.
 Special purpose method for TransformerImpl, pushElemTemplateElement.
  Performance critical.
 @param n Node to set at the tail of vector
 */
- (void)setTailWithOrgW3cDomNode:(id<OrgW3cDomNode>)n;

/*!
 @brief Set the given node one position from the tail.
 Special purpose method for TransformerImpl, pushElemTemplateElement.
  Performance critical.
 @param n Node to set
 */
- (void)setTailSub1WithOrgW3cDomNode:(id<OrgW3cDomNode>)n;

/*!
 @brief Get the length of the list.
 @return Number of nodes in this NodeVector
 */
- (jint)size;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathNodeSet)

J2OBJC_FIELD_SETTER(OrgApacheXpathNodeSet, m_map_, IOSObjectArray *)

FOUNDATION_EXPORT void OrgApacheXpathNodeSet_init(OrgApacheXpathNodeSet *self);

FOUNDATION_EXPORT OrgApacheXpathNodeSet *new_OrgApacheXpathNodeSet_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathNodeSet *create_OrgApacheXpathNodeSet_init(void);

FOUNDATION_EXPORT void OrgApacheXpathNodeSet_initWithInt_(OrgApacheXpathNodeSet *self, jint blocksize);

FOUNDATION_EXPORT OrgApacheXpathNodeSet *new_OrgApacheXpathNodeSet_initWithInt_(jint blocksize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathNodeSet *create_OrgApacheXpathNodeSet_initWithInt_(jint blocksize);

FOUNDATION_EXPORT void OrgApacheXpathNodeSet_initWithOrgW3cDomNodeList_(OrgApacheXpathNodeSet *self, id<OrgW3cDomNodeList> nodelist);

FOUNDATION_EXPORT OrgApacheXpathNodeSet *new_OrgApacheXpathNodeSet_initWithOrgW3cDomNodeList_(id<OrgW3cDomNodeList> nodelist) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathNodeSet *create_OrgApacheXpathNodeSet_initWithOrgW3cDomNodeList_(id<OrgW3cDomNodeList> nodelist);

FOUNDATION_EXPORT void OrgApacheXpathNodeSet_initWithOrgApacheXpathNodeSet_(OrgApacheXpathNodeSet *self, OrgApacheXpathNodeSet *nodelist);

FOUNDATION_EXPORT OrgApacheXpathNodeSet *new_OrgApacheXpathNodeSet_initWithOrgApacheXpathNodeSet_(OrgApacheXpathNodeSet *nodelist) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathNodeSet *create_OrgApacheXpathNodeSet_initWithOrgApacheXpathNodeSet_(OrgApacheXpathNodeSet *nodelist);

FOUNDATION_EXPORT void OrgApacheXpathNodeSet_initWithOrgW3cDomTraversalNodeIterator_(OrgApacheXpathNodeSet *self, id<OrgW3cDomTraversalNodeIterator> ni);

FOUNDATION_EXPORT OrgApacheXpathNodeSet *new_OrgApacheXpathNodeSet_initWithOrgW3cDomTraversalNodeIterator_(id<OrgW3cDomTraversalNodeIterator> ni) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathNodeSet *create_OrgApacheXpathNodeSet_initWithOrgW3cDomTraversalNodeIterator_(id<OrgW3cDomTraversalNodeIterator> ni);

FOUNDATION_EXPORT void OrgApacheXpathNodeSet_initWithOrgW3cDomNode_(OrgApacheXpathNodeSet *self, id<OrgW3cDomNode> node);

FOUNDATION_EXPORT OrgApacheXpathNodeSet *new_OrgApacheXpathNodeSet_initWithOrgW3cDomNode_(id<OrgW3cDomNode> node) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathNodeSet *create_OrgApacheXpathNodeSet_initWithOrgW3cDomNode_(id<OrgW3cDomNode> node);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathNodeSet)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathNodeSet")
