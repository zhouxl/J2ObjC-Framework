//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/graph/ConfigurableValueGraph.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphConfigurableValueGraph")
#ifdef RESTRICT_ComGoogleCommonGraphConfigurableValueGraph
#define INCLUDE_ALL_ComGoogleCommonGraphConfigurableValueGraph 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphConfigurableValueGraph 1
#endif
#undef RESTRICT_ComGoogleCommonGraphConfigurableValueGraph

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphConfigurableValueGraph_) && (INCLUDE_ALL_ComGoogleCommonGraphConfigurableValueGraph || defined(INCLUDE_ComGoogleCommonGraphConfigurableValueGraph))
#define ComGoogleCommonGraphConfigurableValueGraph_

#define RESTRICT_ComGoogleCommonGraphAbstractValueGraph 1
#define INCLUDE_ComGoogleCommonGraphAbstractValueGraph 1
#include "../../../../../com/google/common/graph/AbstractValueGraph.h"

@class ComGoogleCommonGraphAbstractGraphBuilder;
@class ComGoogleCommonGraphElementOrder;
@class ComGoogleCommonGraphMapIteratorCache;
@protocol ComGoogleCommonGraphGraphConnections;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

/*!
 @brief Configurable implementation of <code>ValueGraph</code> that supports the options supplied by <code>AbstractGraphBuilder</code>
 .
 <p>This class maintains a map of nodes to <code>GraphConnections</code>.
  
 <p>Collection-returning accessors return unmodifiable views: the view returned will reflect
  changes to the graph (if the graph is mutable) but may not be modified by the user. 
 <p>The time complexity of all collection-returning accessors is O(1), since views are returned.
 @author James Sexton
 @author Joshua O'Madadhain
 @author Omar Darwish
 */
@interface ComGoogleCommonGraphConfigurableValueGraph : ComGoogleCommonGraphAbstractValueGraph {
 @public
  ComGoogleCommonGraphMapIteratorCache *nodeConnections_;
  jlong edgeCount_;
}

#pragma mark Public

- (id<JavaUtilSet>)adjacentNodesWithId:(id)node;

- (jboolean)allowsSelfLoops;

- (id)edgeValueOrDefaultWithId:(id)nodeU
                        withId:(id)nodeV
                        withId:(id)defaultValue;

- (jboolean)hasEdgeConnectingWithId:(id)nodeU
                             withId:(id)nodeV;

- (jboolean)isDirected;

- (ComGoogleCommonGraphElementOrder *)nodeOrder;

- (id<JavaUtilSet>)nodes;

- (id<JavaUtilSet>)predecessorsWithId:(id)node;

- (id<JavaUtilSet>)successorsWithId:(id)node;

#pragma mark Protected

- (id<ComGoogleCommonGraphGraphConnections>)checkedConnectionsWithId:(id)node;

- (jboolean)containsNodeWithId:(id)node;

- (jlong)edgeCount;

#pragma mark Package-Private

/*!
 @brief Constructs a graph with the properties specified in <code>builder</code>.
 */
- (instancetype __nonnull)initWithComGoogleCommonGraphAbstractGraphBuilder:(ComGoogleCommonGraphAbstractGraphBuilder *)builder;

/*!
 @brief Constructs a graph with the properties specified in <code>builder</code>, initialized with the given
  node map.
 */
- (instancetype __nonnull)initWithComGoogleCommonGraphAbstractGraphBuilder:(ComGoogleCommonGraphAbstractGraphBuilder *)builder
                                                           withJavaUtilMap:(id<JavaUtilMap>)nodeConnections
                                                                  withLong:(jlong)edgeCount;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphConfigurableValueGraph)

J2OBJC_FIELD_SETTER(ComGoogleCommonGraphConfigurableValueGraph, nodeConnections_, ComGoogleCommonGraphMapIteratorCache *)

FOUNDATION_EXPORT void ComGoogleCommonGraphConfigurableValueGraph_initWithComGoogleCommonGraphAbstractGraphBuilder_(ComGoogleCommonGraphConfigurableValueGraph *self, ComGoogleCommonGraphAbstractGraphBuilder *builder);

FOUNDATION_EXPORT ComGoogleCommonGraphConfigurableValueGraph *new_ComGoogleCommonGraphConfigurableValueGraph_initWithComGoogleCommonGraphAbstractGraphBuilder_(ComGoogleCommonGraphAbstractGraphBuilder *builder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonGraphConfigurableValueGraph *create_ComGoogleCommonGraphConfigurableValueGraph_initWithComGoogleCommonGraphAbstractGraphBuilder_(ComGoogleCommonGraphAbstractGraphBuilder *builder);

FOUNDATION_EXPORT void ComGoogleCommonGraphConfigurableValueGraph_initWithComGoogleCommonGraphAbstractGraphBuilder_withJavaUtilMap_withLong_(ComGoogleCommonGraphConfigurableValueGraph *self, ComGoogleCommonGraphAbstractGraphBuilder *builder, id<JavaUtilMap> nodeConnections, jlong edgeCount);

FOUNDATION_EXPORT ComGoogleCommonGraphConfigurableValueGraph *new_ComGoogleCommonGraphConfigurableValueGraph_initWithComGoogleCommonGraphAbstractGraphBuilder_withJavaUtilMap_withLong_(ComGoogleCommonGraphAbstractGraphBuilder *builder, id<JavaUtilMap> nodeConnections, jlong edgeCount) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonGraphConfigurableValueGraph *create_ComGoogleCommonGraphConfigurableValueGraph_initWithComGoogleCommonGraphAbstractGraphBuilder_withJavaUtilMap_withLong_(ComGoogleCommonGraphAbstractGraphBuilder *builder, id<JavaUtilMap> nodeConnections, jlong edgeCount);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphConfigurableValueGraph)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphConfigurableValueGraph")