//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/axes/ReverseAxesWalker.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathAxesReverseAxesWalker")
#ifdef RESTRICT_OrgApacheXpathAxesReverseAxesWalker
#define INCLUDE_ALL_OrgApacheXpathAxesReverseAxesWalker 0
#else
#define INCLUDE_ALL_OrgApacheXpathAxesReverseAxesWalker 1
#endif
#undef RESTRICT_OrgApacheXpathAxesReverseAxesWalker

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathAxesReverseAxesWalker_) && (INCLUDE_ALL_OrgApacheXpathAxesReverseAxesWalker || defined(INCLUDE_OrgApacheXpathAxesReverseAxesWalker))
#define OrgApacheXpathAxesReverseAxesWalker_

#define RESTRICT_OrgApacheXpathAxesAxesWalker 1
#define INCLUDE_OrgApacheXpathAxesAxesWalker 1
#include "../../../../org/apache/xpath/axes/AxesWalker.h"

@class OrgApacheXpathAxesLocPathIterator;
@class OrgApacheXpathXPathContext;
@protocol OrgApacheXmlDtmDTMAxisIterator;

/*!
 @brief Walker for a reverse axes.
 - seealso: <a href="http://www.w3.org/TR/xpath#predicates">XPath 2.4 Predicates</a>
 */
@interface OrgApacheXpathAxesReverseAxesWalker : OrgApacheXpathAxesAxesWalker {
 @public
  /*!
   @brief The DTM inner traversal class, that corresponds to the super axis.
   */
  id<OrgApacheXmlDtmDTMAxisIterator> m_iterator_;
}
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Detaches the walker from the set which it iterated over, releasing
  any computational resources and placing the iterator in the INVALID
  state.
 */
- (void)detach;

/*!
 @brief Get the number of nodes in this node list.The function is probably ill
  named?
 @param xctxt The XPath runtime context.
 @return the number of nodes in this node list.
 */
- (jint)getLastPosWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Returns true if all the nodes in the iteration well be returned in document 
  order.
 Warning: This can only be called after setRoot has been called!
 @return false.
 */
- (jboolean)isDocOrdered;

/*!
 @brief Tells if this is a reverse axes.Overrides AxesWalker#isReverseAxes.
 @return true for this class.
 */
- (jboolean)isReverseAxes;

/*!
 @brief Set the root node of the TreeWalker.
 (Not part of the DOM2 TreeWalker interface).
 @param root The context node of this step.
 */
- (void)setRootWithInt:(jint)root;

#pragma mark Protected

/*!
 @brief Count backwards one proximity position.
 @param i The predicate index.
 */
- (void)countProximityPositionWithInt:(jint)i;

/*!
 @brief Get the next node in document order on the axes.
 @return the next node in document order on the axes, or null.
 */
- (jint)getNextNode;

/*!
 @brief Get the current sub-context position.In order to do the
  reverse axes count, for the moment this re-searches the axes
  up to the predicate.
 An optimization on this is to cache
  the nodes searched, but, for the moment, this case is probably
  rare enough that the added complexity isn't worth it.
 @param predicateIndex The predicate index of the proximity position.
 @return The pridicate index, or -1.
 */
- (jint)getProximityPositionWithInt:(jint)predicateIndex;

#pragma mark Package-Private

/*!
 @brief Construct an AxesWalker using a LocPathIterator.
 @param locPathIterator The location path iterator that 'owns' this walker.
 */
- (instancetype __nonnull)initWithOrgApacheXpathAxesLocPathIterator:(OrgApacheXpathAxesLocPathIterator *)locPathIterator
                                                            withInt:(jint)axis;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathAxesReverseAxesWalker)

J2OBJC_FIELD_SETTER(OrgApacheXpathAxesReverseAxesWalker, m_iterator_, id<OrgApacheXmlDtmDTMAxisIterator>)

inline jlong OrgApacheXpathAxesReverseAxesWalker_get_serialVersionUID(void);
#define OrgApacheXpathAxesReverseAxesWalker_serialVersionUID 2847007647832768941LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathAxesReverseAxesWalker, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathAxesReverseAxesWalker_initWithOrgApacheXpathAxesLocPathIterator_withInt_(OrgApacheXpathAxesReverseAxesWalker *self, OrgApacheXpathAxesLocPathIterator *locPathIterator, jint axis);

FOUNDATION_EXPORT OrgApacheXpathAxesReverseAxesWalker *new_OrgApacheXpathAxesReverseAxesWalker_initWithOrgApacheXpathAxesLocPathIterator_withInt_(OrgApacheXpathAxesLocPathIterator *locPathIterator, jint axis) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathAxesReverseAxesWalker *create_OrgApacheXpathAxesReverseAxesWalker_initWithOrgApacheXpathAxesLocPathIterator_withInt_(OrgApacheXpathAxesLocPathIterator *locPathIterator, jint axis);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathAxesReverseAxesWalker)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathAxesReverseAxesWalker")
