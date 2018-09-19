//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/graph/ForwardingValueGraph.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphForwardingValueGraph")
#ifdef RESTRICT_ComGoogleCommonGraphForwardingValueGraph
#define INCLUDE_ALL_ComGoogleCommonGraphForwardingValueGraph 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphForwardingValueGraph 1
#endif
#undef RESTRICT_ComGoogleCommonGraphForwardingValueGraph

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphForwardingValueGraph_) && (INCLUDE_ALL_ComGoogleCommonGraphForwardingValueGraph || defined(INCLUDE_ComGoogleCommonGraphForwardingValueGraph))
#define ComGoogleCommonGraphForwardingValueGraph_

#define RESTRICT_ComGoogleCommonGraphAbstractValueGraph 1
#define INCLUDE_ComGoogleCommonGraphAbstractValueGraph 1
#include "../../../../../com/google/common/graph/AbstractValueGraph.h"

@class ComGoogleCommonGraphElementOrder;
@class JavaUtilOptional;
@protocol ComGoogleCommonGraphValueGraph;
@protocol JavaUtilSet;

/*!
 @brief A class to allow <code>ValueGraph</code> implementations to be backed by a provided delegate.This is
  not currently planned to be released as a general-purpose forwarding class.
 @author James Sexton
 @author Joshua O'Madadhain
 */
@interface ComGoogleCommonGraphForwardingValueGraph : ComGoogleCommonGraphAbstractValueGraph

#pragma mark Public

- (id<JavaUtilSet>)adjacentNodesWithId:(id)node;

- (jboolean)allowsSelfLoops;

- (jint)degreeWithId:(id)node;

- (JavaUtilOptional *)edgeValueWithId:(id)nodeU
                               withId:(id)nodeV;

- (id)edgeValueOrDefaultWithId:(id)nodeU
                        withId:(id)nodeV
                        withId:(id)defaultValue;

- (jboolean)hasEdgeConnectingWithId:(id)nodeU
                             withId:(id)nodeV;

- (jint)inDegreeWithId:(id)node;

- (jboolean)isDirected;

- (ComGoogleCommonGraphElementOrder *)nodeOrder;

- (id<JavaUtilSet>)nodes;

- (jint)outDegreeWithId:(id)node;

- (id<JavaUtilSet>)predecessorsWithId:(id)node;

- (id<JavaUtilSet>)successorsWithId:(id)node;

#pragma mark Protected

- (id<ComGoogleCommonGraphValueGraph>)delegate;

/*!
 @brief Defer to <code>AbstractValueGraph.edges()</code> (based on <code>successors(Object)</code>) for full
  edges() implementation.
 */
- (jlong)edgeCount;

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphForwardingValueGraph)

FOUNDATION_EXPORT void ComGoogleCommonGraphForwardingValueGraph_init(ComGoogleCommonGraphForwardingValueGraph *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphForwardingValueGraph)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphForwardingValueGraph")