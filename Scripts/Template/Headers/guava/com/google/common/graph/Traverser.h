//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/graph/Traverser.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphTraverser")
#ifdef RESTRICT_ComGoogleCommonGraphTraverser
#define INCLUDE_ALL_ComGoogleCommonGraphTraverser 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphTraverser 1
#endif
#undef RESTRICT_ComGoogleCommonGraphTraverser

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphTraverser_) && (INCLUDE_ALL_ComGoogleCommonGraphTraverser || defined(INCLUDE_ComGoogleCommonGraphTraverser))
#define ComGoogleCommonGraphTraverser_

@protocol ComGoogleCommonGraphSuccessorsFunction;
@protocol JavaLangIterable;

/*!
 @brief An object that can traverse the nodes that are reachable from a specified (set of) start node(s)
  using a specified <code>SuccessorsFunction</code>.
 <p>There are two entry points for creating a <code>Traverser</code>: <code>forTree(SuccessorsFunction)</code>
  and <code>forGraph(SuccessorsFunction)</code>. You should choose one
  based on your answers to the following questions: 
 <ol>
    <li>Is there only one path to any node that's reachable from any start node? (If so, the
        graph to be traversed is a tree or forest even if it is a subgraph of a graph which is
        neither.)   
 <li>Are the node objects' implementations of <code>equals()</code>/<code>hashCode()</code> <a href="https://github.com/google/guava/wiki/GraphsExplained#non-recursiveness">
 recursive</a>?
  </ol>
  
 <p>If your answers are: 
 <ul>
    <li>(1) "no" and (2) "no", use <code>forGraph(SuccessorsFunction)</code>.
    <li>(1) "yes" and (2) "yes", use <code>forTree(SuccessorsFunction)</code>.
    <li>(1) "yes" and (2) "no", you can use either, but <code>forTree()</code> will be more efficient.
    <li>(1) "no" and (2) "yes", <b><i>neither will work</i></b>, but if you transform your node
        objects into a non-recursive form, you can use <code>forGraph()</code>.
  </ul>
 @author Jens Nyman
 @since 23.1
 */
@interface ComGoogleCommonGraphTraverser : NSObject

#pragma mark Public

/*!
 @brief Returns an unmodifiable <code>Iterable</code> over the nodes reachable from any of the <code>startNodes</code>
 , in the order of a breadth-first traversal.This is equivalent to a breadth-first
  traversal of a graph with an additional root node whose successors are the listed <code>startNodes</code>
 .
 @throw IllegalArgumentExceptionif any of <code>startNodes</code> is not an element of the graph
 - seealso: #breadthFirst(Object)
 @since 24.1
 */
- (id<JavaLangIterable>)breadthFirstWithJavaLangIterable:(id<JavaLangIterable>)startNodes;

/*!
 @brief Returns an unmodifiable <code>Iterable</code> over the nodes reachable from <code>startNode</code>, in
  the order of a breadth-first traversal.That is, all the nodes of depth 0 are returned, then
  depth 1, then 2, and so on.
 <p><b>Example:</b> The following graph with <code>startNode</code> <code>a</code> would return nodes in
  the order <code>abcdef</code> (assuming successors are returned in alphabetical order). 
 @code
 b ---- a ---- d
  |      | |      |
  e ---- c ---- f 
 
@endcode
  
 <p>The behavior of this method is undefined if the nodes, or the topology of the graph, change
  while iteration is in progress. 
 <p>The returned <code>Iterable</code> can be iterated over multiple times. Every iterator will
  compute its next element on the fly. It is thus possible to limit the traversal to a certain
  number of nodes as follows: 
 @code
 Iterables.limit(Traverser.forGraph(graph).breadthFirst(node), maxNumberOfNodes); 
 
@endcode
  
 <p>See <a href="https://en.wikipedia.org/wiki/Breadth-first_search">Wikipedia</a> for more
  info.
 @throw IllegalArgumentExceptionif <code>startNode</code> is not an element of the graph
 */
- (id<JavaLangIterable>)breadthFirstWithId:(id)startNode;

/*!
 @brief Returns an unmodifiable <code>Iterable</code> over the nodes reachable from any of the <code>startNodes</code>
 , in the order of a depth-first post-order traversal.This is equivalent to a
  depth-first post-order traversal of a graph with an additional root node whose successors are
  the listed <code>startNodes</code>.
 @throw IllegalArgumentExceptionif any of <code>startNodes</code> is not an element of the graph
 - seealso: #depthFirstPostOrder(Object)
 @since 24.1
 */
- (id<JavaLangIterable>)depthFirstPostOrderWithJavaLangIterable:(id<JavaLangIterable>)startNodes;

/*!
 @brief Returns an unmodifiable <code>Iterable</code> over the nodes reachable from <code>startNode</code>, in
  the order of a depth-first post-order traversal."
 Post-order" implies that nodes appear in the 
 <code>Iterable</code> in the order in which they are visited for the last time. 
 <p><b>Example:</b> The following graph with <code>startNode</code> <code>a</code> would return nodes in
  the order <code>fcebda</code> (assuming successors are returned in alphabetical order). 
 @code
 b ---- a ---- d
  |      | |      |
  e ---- c ---- f 
 
@endcode
  
 <p>The behavior of this method is undefined if the nodes, or the topology of the graph, change
  while iteration is in progress. 
 <p>The returned <code>Iterable</code> can be iterated over multiple times. Every iterator will
  compute its next element on the fly. It is thus possible to limit the traversal to a certain
  number of nodes as follows: 
 @code
 Iterables.limit(
      Traverser.forGraph(graph).depthFirstPostOrder(node), maxNumberOfNodes); 
 
@endcode
  
 <p>See <a href="https://en.wikipedia.org/wiki/Depth-first_search">Wikipedia</a> for more info.
 @throw IllegalArgumentExceptionif <code>startNode</code> is not an element of the graph
 */
- (id<JavaLangIterable>)depthFirstPostOrderWithId:(id)startNode;

/*!
 @brief Returns an unmodifiable <code>Iterable</code> over the nodes reachable from any of the <code>startNodes</code>
 , in the order of a depth-first pre-order traversal.This is equivalent to a
  depth-first pre-order traversal of a graph with an additional root node whose successors are
  the listed <code>startNodes</code>.
 @throw IllegalArgumentExceptionif any of <code>startNodes</code> is not an element of the graph
 - seealso: #depthFirstPreOrder(Object)
 @since 24.1
 */
- (id<JavaLangIterable>)depthFirstPreOrderWithJavaLangIterable:(id<JavaLangIterable>)startNodes;

/*!
 @brief Returns an unmodifiable <code>Iterable</code> over the nodes reachable from <code>startNode</code>, in
  the order of a depth-first pre-order traversal."
 Pre-order" implies that nodes appear in the 
 <code>Iterable</code> in the order in which they are first visited. 
 <p><b>Example:</b> The following graph with <code>startNode</code> <code>a</code> would return nodes in
  the order <code>abecfd</code> (assuming successors are returned in alphabetical order). 
 @code
 b ---- a ---- d
  |      | |      |
  e ---- c ---- f 
 
@endcode
  
 <p>The behavior of this method is undefined if the nodes, or the topology of the graph, change
  while iteration is in progress. 
 <p>The returned <code>Iterable</code> can be iterated over multiple times. Every iterator will
  compute its next element on the fly. It is thus possible to limit the traversal to a certain
  number of nodes as follows: 
 @code
 Iterables.limit(
      Traverser.forGraph(graph).depthFirstPreOrder(node), maxNumberOfNodes); 
 
@endcode
  
 <p>See <a href="https://en.wikipedia.org/wiki/Depth-first_search">Wikipedia</a> for more info.
 @throw IllegalArgumentExceptionif <code>startNode</code> is not an element of the graph
 */
- (id<JavaLangIterable>)depthFirstPreOrderWithId:(id)startNode;

/*!
 @brief Creates a new traverser for the given general <code>graph</code>.
 <p>Traversers created using this method are guaranteed to visit each node reachable from the
  start node(s) at most once. 
 <p>If you know that no node in <code>graph</code> is reachable by more than one path from the start
  node(s), consider using <code>forTree(SuccessorsFunction)</code> instead. 
 <p><b>Performance notes</b>
  
 <ul>
    <li>Traversals require <i>O(n)</i> time (where <i>n</i> is the number of nodes reachable from
        the start node), assuming that the node objects have <i>O(1)</i> <code>equals()</code> and
        <code>hashCode()</code> implementations. (See the <a href="https://github.com/google/guava/wiki/GraphsExplained#elements-must-be-useable-as-map-keys">
        notes on element objects</a> for more information.)
    <li>While traversing, the traverser will use <i>O(n)</i> space (where <i>n</i> is the number
        of nodes that have thus far been visited), plus <i>O(H)</i> space (where <i>H</i> is the
        number of nodes that have been seen but not yet visited, that is, the "horizon"). 
 </ul>
 @param graph<code>SuccessorsFunction</code>  representing a general graph that may have cycles.
 */
+ (ComGoogleCommonGraphTraverser *)forGraphWithComGoogleCommonGraphSuccessorsFunction:(id<ComGoogleCommonGraphSuccessorsFunction>)graph;

/*!
 @brief Creates a new traverser for a directed acyclic graph that has at most one path from the start
  node(s) to any node reachable from the start node(s), and has no paths from any start node to
  any other start node, such as a tree or forest.
 <p><code>forTree()</code> is especially useful (versus <code>forGraph()</code>) in cases where the data
  structure being traversed is, in addition to being a tree/forest, also defined <a href="https://github.com/google/guava/wiki/GraphsExplained#non-recursiveness">
 recursively</a>.
  This is because the <code>forTree()</code>-based implementations don't keep track of visited nodes,
  and therefore don't need to call `equals()` or `hashCode()` on the node objects; this saves
  both time and space versus traversing the same graph using <code>forGraph()</code>.
  
 <p>Providing a graph to be traversed for which there is more than one path from the start
  node(s) to any node may lead to: 
 <ul>
    <li>Traversal not terminating (if the graph has cycles)
    <li>Nodes being visited multiple times (if multiple paths exist from any start node to any
        node reachable from any start node) 
 </ul>
  
 <p><b>Performance notes</b>
  
 <ul>
    <li>Traversals require <i>O(n)</i> time (where <i>n</i> is the number of nodes reachable from
        the start node).   
 <li>While traversing, the traverser will use <i>O(H)</i> space (where <i>H</i> is the number
        of nodes that have been seen but not yet visited, that is, the "horizon"). 
 </ul>
  
 <p><b>Examples</b> (all edges are directed facing downwards) 
 <p>The graph below would be valid input with start nodes of <code>a, f, c</code>. However, if <code>b</code>
  were <i>also</i> a start node, then there would be multiple paths to reach <code>e</code> and 
 <code>h</code>.
  
 @code
   a     b      c
    / \   / \     |
   /   \ /   \    |
  d     e     f   g
        |       |
        h 
 
@endcode
  
 <p>.
  
 <p>The graph below would be a valid input with start nodes of <code>a, f</code>. However, if <code>b</code>
  were a start node, there would be multiple paths to <code>f</code>.
  
 @code
   a     b
    / \   / \
   /   \ /   \
  c     d     e
         \   /
          \ /
           f 
 
@endcode
  
 <p><b>Note on binary trees</b>
  
 <p>This method can be used to traverse over a binary tree. Given methods <code>leftChild(node)</code>
  and <code>rightChild(node)</code>, this method can be called as 
 @code
 Traverser.forTree(node -> ImmutableList.of(leftChild(node), rightChild(node))); 
 
@endcode
 @param tree<code>SuccessorsFunction</code>  representing a directed acyclic graph that has at most      one path between any two nodes
 */
+ (ComGoogleCommonGraphTraverser *)forTreeWithComGoogleCommonGraphSuccessorsFunction:(id<ComGoogleCommonGraphSuccessorsFunction>)tree;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphTraverser)

FOUNDATION_EXPORT ComGoogleCommonGraphTraverser *ComGoogleCommonGraphTraverser_forGraphWithComGoogleCommonGraphSuccessorsFunction_(id<ComGoogleCommonGraphSuccessorsFunction> graph);

FOUNDATION_EXPORT ComGoogleCommonGraphTraverser *ComGoogleCommonGraphTraverser_forTreeWithComGoogleCommonGraphSuccessorsFunction_(id<ComGoogleCommonGraphSuccessorsFunction> tree);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphTraverser)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphTraverser")
