//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/graph/NetworkBuilder.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphNetworkBuilder")
#ifdef RESTRICT_ComGoogleCommonGraphNetworkBuilder
#define INCLUDE_ALL_ComGoogleCommonGraphNetworkBuilder 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphNetworkBuilder 1
#endif
#undef RESTRICT_ComGoogleCommonGraphNetworkBuilder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphNetworkBuilder_) && (INCLUDE_ALL_ComGoogleCommonGraphNetworkBuilder || defined(INCLUDE_ComGoogleCommonGraphNetworkBuilder))
#define ComGoogleCommonGraphNetworkBuilder_

#define RESTRICT_ComGoogleCommonGraphAbstractGraphBuilder 1
#define INCLUDE_ComGoogleCommonGraphAbstractGraphBuilder 1
#include "../../../../../com/google/common/graph/AbstractGraphBuilder.h"

@class ComGoogleCommonBaseOptional;
@class ComGoogleCommonGraphElementOrder;
@protocol ComGoogleCommonGraphMutableNetwork;
@protocol ComGoogleCommonGraphNetwork;

/*!
 @brief A builder for constructing instances of <code>MutableNetwork</code> with user-defined properties.
 <p>A network built by this class will have the following properties by default: 
 <ul>
    <li>does not allow parallel edges
    <li>does not allow self-loops
    <li>orders <code>Network.nodes()</code> and <code>Network.edges()</code> in the order in which the
        elements were added 
 </ul>
  
 <p>Example of use: 
 @code
 MutableNetwork<String, Integer> flightNetwork =
      NetworkBuilder.directed().allowsParallelEdges(true).build();
  flightNetwork.addEdge("LAX", "ATL", 3025);
  flightNetwork.addEdge("LAX", "ATL", 1598);
  flightNetwork.addEdge("ATL", "LAX", 2450); 
 
@endcode
 @author James Sexton
 @author Joshua O'Madadhain
 @since 20.0
 */
@interface ComGoogleCommonGraphNetworkBuilder : ComGoogleCommonGraphAbstractGraphBuilder {
 @public
  jboolean allowsParallelEdges_;
  ComGoogleCommonGraphElementOrder *edgeOrder_;
  ComGoogleCommonBaseOptional *expectedEdgeCount_;
}

#pragma mark Public

/*!
 @brief Specifies whether the network will allow parallel edges.Attempting to add a parallel edge to a
  network that does not allow them will throw an <code>UnsupportedOperationException</code>.
 */
- (ComGoogleCommonGraphNetworkBuilder *)allowsParallelEdgesWithBoolean:(jboolean)allowsParallelEdges;

/*!
 @brief Specifies whether the network will allow self-loops (edges that connect a node to itself).
 Attempting to add a self-loop to a network that does not allow them will throw an <code>UnsupportedOperationException</code>
 .
 */
- (ComGoogleCommonGraphNetworkBuilder *)allowsSelfLoopsWithBoolean:(jboolean)allowsSelfLoops;

/*!
 @brief Returns an empty <code>MutableNetwork</code> with the properties of this <code>NetworkBuilder</code>.
 */
- (id<ComGoogleCommonGraphMutableNetwork>)build;

/*!
 @brief Returns a <code>NetworkBuilder</code> for building directed networks.
 */
+ (ComGoogleCommonGraphNetworkBuilder *)directed;

/*!
 @brief Specifies the order of iteration for the elements of <code>Network.edges()</code>.
 */
- (ComGoogleCommonGraphNetworkBuilder *)edgeOrderWithComGoogleCommonGraphElementOrder:(ComGoogleCommonGraphElementOrder *)edgeOrder;

/*!
 @brief Specifies the expected number of edges in the network.
 @throw IllegalArgumentExceptionif <code>expectedEdgeCount</code> is negative
 */
- (ComGoogleCommonGraphNetworkBuilder *)expectedEdgeCountWithInt:(jint)expectedEdgeCount;

/*!
 @brief Specifies the expected number of nodes in the network.
 @throw IllegalArgumentExceptionif <code>expectedNodeCount</code> is negative
 */
- (ComGoogleCommonGraphNetworkBuilder *)expectedNodeCountWithInt:(jint)expectedNodeCount;

/*!
 @brief Returns a <code>NetworkBuilder</code> initialized with all properties queryable from <code>network</code>
 .
 <p>The "queryable" properties are those that are exposed through the <code>Network</code> interface,
  such as <code>Network.isDirected()</code>. Other properties, such as <code>expectedNodeCount(int)</code>
 , are not set in the new builder.
 */
+ (ComGoogleCommonGraphNetworkBuilder *)fromWithComGoogleCommonGraphNetwork:(id<ComGoogleCommonGraphNetwork>)network;

/*!
 @brief Specifies the order of iteration for the elements of <code>Network.nodes()</code>.
 */
- (ComGoogleCommonGraphNetworkBuilder *)nodeOrderWithComGoogleCommonGraphElementOrder:(ComGoogleCommonGraphElementOrder *)nodeOrder;

/*!
 @brief Returns a <code>NetworkBuilder</code> for building undirected networks.
 */
+ (ComGoogleCommonGraphNetworkBuilder *)undirected;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphNetworkBuilder)

J2OBJC_FIELD_SETTER(ComGoogleCommonGraphNetworkBuilder, edgeOrder_, ComGoogleCommonGraphElementOrder *)
J2OBJC_FIELD_SETTER(ComGoogleCommonGraphNetworkBuilder, expectedEdgeCount_, ComGoogleCommonBaseOptional *)

FOUNDATION_EXPORT ComGoogleCommonGraphNetworkBuilder *ComGoogleCommonGraphNetworkBuilder_directed(void);

FOUNDATION_EXPORT ComGoogleCommonGraphNetworkBuilder *ComGoogleCommonGraphNetworkBuilder_undirected(void);

FOUNDATION_EXPORT ComGoogleCommonGraphNetworkBuilder *ComGoogleCommonGraphNetworkBuilder_fromWithComGoogleCommonGraphNetwork_(id<ComGoogleCommonGraphNetwork> network);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphNetworkBuilder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphNetworkBuilder")
