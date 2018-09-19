//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/graph/AbstractNetwork.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphAbstractNetwork")
#ifdef RESTRICT_ComGoogleCommonGraphAbstractNetwork
#define INCLUDE_ALL_ComGoogleCommonGraphAbstractNetwork 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphAbstractNetwork 1
#endif
#undef RESTRICT_ComGoogleCommonGraphAbstractNetwork

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphAbstractNetwork_) && (INCLUDE_ALL_ComGoogleCommonGraphAbstractNetwork || defined(INCLUDE_ComGoogleCommonGraphAbstractNetwork))
#define ComGoogleCommonGraphAbstractNetwork_

#define RESTRICT_ComGoogleCommonGraphNetwork 1
#define INCLUDE_ComGoogleCommonGraphNetwork 1
#include "../../../../../com/google/common/graph/Network.h"

@class JavaUtilOptional;
@protocol ComGoogleCommonGraphGraph;
@protocol JavaUtilSet;

/*!
 @brief This class provides a skeletal implementation of <code>Network</code>.It is recommended to extend
  this class rather than implement <code>Network</code> directly.
 <p>The methods implemented in this class should not be overridden unless the subclass admits a
  more efficient implementation.
 @author James Sexton
 @since 20.0
 */
@interface ComGoogleCommonGraphAbstractNetwork : NSObject < ComGoogleCommonGraphNetwork >

#pragma mark Public

- (instancetype __nonnull)init;

- (id<JavaUtilSet>)adjacentEdgesWithId:(id)edge;

- (id<ComGoogleCommonGraphGraph>)asGraph;

- (jint)degreeWithId:(id)node;

- (JavaUtilOptional *)edgeConnectingWithId:(id)nodeU
                                    withId:(id)nodeV;

- (id)edgeConnectingOrNullWithId:(id)nodeU
                          withId:(id)nodeV;

- (id<JavaUtilSet>)edgesConnectingWithId:(id)nodeU
                                  withId:(id)nodeV;

- (jboolean)isEqual:(id __nullable)obj;

- (jboolean)hasEdgeConnectingWithId:(id)nodeU
                             withId:(id)nodeV;

- (NSUInteger)hash;

- (jint)inDegreeWithId:(id)node;

- (jint)outDegreeWithId:(id)node;

/*!
 @brief Returns a string representation of this network.
 */
- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphAbstractNetwork)

FOUNDATION_EXPORT void ComGoogleCommonGraphAbstractNetwork_init(ComGoogleCommonGraphAbstractNetwork *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphAbstractNetwork)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphAbstractNetwork")