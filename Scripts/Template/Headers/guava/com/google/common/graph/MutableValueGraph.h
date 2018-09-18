//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/graph/MutableValueGraph.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphMutableValueGraph")
#ifdef RESTRICT_ComGoogleCommonGraphMutableValueGraph
#define INCLUDE_ALL_ComGoogleCommonGraphMutableValueGraph 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphMutableValueGraph 1
#endif
#undef RESTRICT_ComGoogleCommonGraphMutableValueGraph

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphMutableValueGraph_) && (INCLUDE_ALL_ComGoogleCommonGraphMutableValueGraph || defined(INCLUDE_ComGoogleCommonGraphMutableValueGraph))
#define ComGoogleCommonGraphMutableValueGraph_

#define RESTRICT_ComGoogleCommonGraphValueGraph 1
#define INCLUDE_ComGoogleCommonGraphValueGraph 1
#include "com/google/common/graph/ValueGraph.h"

/*!
 @brief A subinterface of <code>ValueGraph</code> which adds mutation methods.When mutation is not required,
  users should prefer the <code>ValueGraph</code> interface.
 @author James Sexton
 @since 20.0
 */
@protocol ComGoogleCommonGraphMutableValueGraph < ComGoogleCommonGraphValueGraph, JavaObject >

/*!
 @brief Adds <code>node</code> if it is not already present.
 <p><b>Nodes must be unique</b>, just as <code>Map</code> keys must be. They must also be non-null.
 @return <code>true</code> if the graph was modified as a result of this call
 */
- (jboolean)addNodeWithId:(id)node;

/*!
 @brief Adds an edge connecting <code>nodeU</code> to <code>nodeV</code> if one is not already present; associate
  that edge with <code>value</code>.In an undirected graph, the edge will also connect <code>nodeV</code>
  to <code>nodeU</code>.
 <p>Values do not have to be unique. However, values must be non-null. 
 <p>If <code>nodeU</code> and <code>nodeV</code> are not already present in this graph, this method will
  silently <code>add</code> <code>nodeU</code> and <code>nodeV</code> to the graph.
 @return the value previously associated with the edge connecting <code>nodeU</code> to <code>nodeV</code>
 , or null if there was no such edge.
 @throw IllegalArgumentExceptionif the introduction of the edge would violate <code>allowsSelfLoops()</code>
 */
- (id)putEdgeValueWithId:(id)nodeU
                  withId:(id)nodeV
                  withId:(id)value;

/*!
 @brief Removes <code>node</code> if it is present; all edges incident to <code>node</code> will also be removed.
 @return <code>true</code> if the graph was modified as a result of this call
 */
- (jboolean)removeNodeWithId:(id)node;

/*!
 @brief Removes the edge connecting <code>nodeU</code> to <code>nodeV</code>, if it is present.
 @return the value previously associated with the edge connecting <code>nodeU</code> to <code>nodeV</code>
 , or null if there was no such edge.
 */
- (id)removeEdgeWithId:(id)nodeU
                withId:(id)nodeV;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphMutableValueGraph)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphMutableValueGraph)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphMutableValueGraph")
