//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/graph/ConfigurableMutableGraph.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphConfigurableMutableGraph")
#ifdef RESTRICT_ComGoogleCommonGraphConfigurableMutableGraph
#define INCLUDE_ALL_ComGoogleCommonGraphConfigurableMutableGraph 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphConfigurableMutableGraph 1
#endif
#undef RESTRICT_ComGoogleCommonGraphConfigurableMutableGraph

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphConfigurableMutableGraph_) && (INCLUDE_ALL_ComGoogleCommonGraphConfigurableMutableGraph || defined(INCLUDE_ComGoogleCommonGraphConfigurableMutableGraph))
#define ComGoogleCommonGraphConfigurableMutableGraph_

#define RESTRICT_ComGoogleCommonGraphForwardingGraph 1
#define INCLUDE_ComGoogleCommonGraphForwardingGraph 1
#include "../../../../../com/google/common/graph/ForwardingGraph.h"

#define RESTRICT_ComGoogleCommonGraphMutableGraph 1
#define INCLUDE_ComGoogleCommonGraphMutableGraph 1
#include "../../../../../com/google/common/graph/MutableGraph.h"

@class ComGoogleCommonGraphAbstractGraphBuilder;
@protocol ComGoogleCommonGraphBaseGraph;

/*!
 @brief Configurable implementation of <code>MutableGraph</code> that supports both directed and undirected
  graphs.Instances of this class should be constructed with <code>GraphBuilder</code>.
 <p>Time complexities for mutation methods are all O(1) except for <code>removeNode(N node)</code>,
  which is in O(d_node) where d_node is the degree of <code>node</code>.
 @author James Sexton
 */
@interface ComGoogleCommonGraphConfigurableMutableGraph : ComGoogleCommonGraphForwardingGraph < ComGoogleCommonGraphMutableGraph >

#pragma mark Public

- (jboolean)addNodeWithId:(id)node;

- (jboolean)putEdgeWithId:(id)nodeU
                   withId:(id)nodeV;

- (jboolean)removeEdgeWithId:(id)nodeU
                      withId:(id)nodeV;

- (jboolean)removeNodeWithId:(id)node;

#pragma mark Protected

- (id<ComGoogleCommonGraphBaseGraph>)delegate;

#pragma mark Package-Private

/*!
 @brief Constructs a <code>MutableGraph</code> with the properties specified in <code>builder</code>.
 */
- (instancetype __nonnull)initWithComGoogleCommonGraphAbstractGraphBuilder:(ComGoogleCommonGraphAbstractGraphBuilder *)builder;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphConfigurableMutableGraph)

FOUNDATION_EXPORT void ComGoogleCommonGraphConfigurableMutableGraph_initWithComGoogleCommonGraphAbstractGraphBuilder_(ComGoogleCommonGraphConfigurableMutableGraph *self, ComGoogleCommonGraphAbstractGraphBuilder *builder);

FOUNDATION_EXPORT ComGoogleCommonGraphConfigurableMutableGraph *new_ComGoogleCommonGraphConfigurableMutableGraph_initWithComGoogleCommonGraphAbstractGraphBuilder_(ComGoogleCommonGraphAbstractGraphBuilder *builder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonGraphConfigurableMutableGraph *create_ComGoogleCommonGraphConfigurableMutableGraph_initWithComGoogleCommonGraphAbstractGraphBuilder_(ComGoogleCommonGraphAbstractGraphBuilder *builder);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphConfigurableMutableGraph)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphConfigurableMutableGraph")
