//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/graph/DirectedNetworkConnections.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphDirectedNetworkConnections")
#ifdef RESTRICT_ComGoogleCommonGraphDirectedNetworkConnections
#define INCLUDE_ALL_ComGoogleCommonGraphDirectedNetworkConnections 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphDirectedNetworkConnections 1
#endif
#undef RESTRICT_ComGoogleCommonGraphDirectedNetworkConnections

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphDirectedNetworkConnections_) && (INCLUDE_ALL_ComGoogleCommonGraphDirectedNetworkConnections || defined(INCLUDE_ComGoogleCommonGraphDirectedNetworkConnections))
#define ComGoogleCommonGraphDirectedNetworkConnections_

#define RESTRICT_ComGoogleCommonGraphAbstractDirectedNetworkConnections 1
#define INCLUDE_ComGoogleCommonGraphAbstractDirectedNetworkConnections 1
#include "../../../../../com/google/common/graph/AbstractDirectedNetworkConnections.h"

@protocol JavaUtilMap;
@protocol JavaUtilSet;

/*!
 @brief An implementation of <code>NetworkConnections</code> for directed networks.
 @author James Sexton
 */
@interface ComGoogleCommonGraphDirectedNetworkConnections : ComGoogleCommonGraphAbstractDirectedNetworkConnections

#pragma mark Public

- (id<JavaUtilSet>)edgesConnectingWithId:(id)node;

- (id<JavaUtilSet>)predecessors;

- (id<JavaUtilSet>)successors;

#pragma mark Protected

- (instancetype __nonnull)initWithJavaUtilMap:(id<JavaUtilMap>)inEdgeMap
                              withJavaUtilMap:(id<JavaUtilMap>)outEdgeMap
                                      withInt:(jint)selfLoopCount;

#pragma mark Package-Private

+ (ComGoogleCommonGraphDirectedNetworkConnections *)of;

+ (ComGoogleCommonGraphDirectedNetworkConnections *)ofImmutableWithJavaUtilMap:(id<JavaUtilMap>)inEdges
                                                               withJavaUtilMap:(id<JavaUtilMap>)outEdges
                                                                       withInt:(jint)selfLoopCount;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphDirectedNetworkConnections)

FOUNDATION_EXPORT void ComGoogleCommonGraphDirectedNetworkConnections_initWithJavaUtilMap_withJavaUtilMap_withInt_(ComGoogleCommonGraphDirectedNetworkConnections *self, id<JavaUtilMap> inEdgeMap, id<JavaUtilMap> outEdgeMap, jint selfLoopCount);

FOUNDATION_EXPORT ComGoogleCommonGraphDirectedNetworkConnections *new_ComGoogleCommonGraphDirectedNetworkConnections_initWithJavaUtilMap_withJavaUtilMap_withInt_(id<JavaUtilMap> inEdgeMap, id<JavaUtilMap> outEdgeMap, jint selfLoopCount) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonGraphDirectedNetworkConnections *create_ComGoogleCommonGraphDirectedNetworkConnections_initWithJavaUtilMap_withJavaUtilMap_withInt_(id<JavaUtilMap> inEdgeMap, id<JavaUtilMap> outEdgeMap, jint selfLoopCount);

FOUNDATION_EXPORT ComGoogleCommonGraphDirectedNetworkConnections *ComGoogleCommonGraphDirectedNetworkConnections_of(void);

FOUNDATION_EXPORT ComGoogleCommonGraphDirectedNetworkConnections *ComGoogleCommonGraphDirectedNetworkConnections_ofImmutableWithJavaUtilMap_withJavaUtilMap_withInt_(id<JavaUtilMap> inEdges, id<JavaUtilMap> outEdges, jint selfLoopCount);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphDirectedNetworkConnections)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphDirectedNetworkConnections")
