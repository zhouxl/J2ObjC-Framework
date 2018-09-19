//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/axes/ChildIterator.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathAxesChildIterator")
#ifdef RESTRICT_OrgApacheXpathAxesChildIterator
#define INCLUDE_ALL_OrgApacheXpathAxesChildIterator 0
#else
#define INCLUDE_ALL_OrgApacheXpathAxesChildIterator 1
#endif
#undef RESTRICT_OrgApacheXpathAxesChildIterator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathAxesChildIterator_) && (INCLUDE_ALL_OrgApacheXpathAxesChildIterator || defined(INCLUDE_OrgApacheXpathAxesChildIterator))
#define OrgApacheXpathAxesChildIterator_

#define RESTRICT_OrgApacheXpathAxesLocPathIterator 1
#define INCLUDE_OrgApacheXpathAxesLocPathIterator 1
#include "../../../../org/apache/xpath/axes/LocPathIterator.h"

@class OrgApacheXpathCompilerCompiler;
@class OrgApacheXpathXPathContext;
@protocol OrgApacheXmlUtilsPrefixResolver;

/*!
 @brief This class implements an optimized iterator for
  "node()" patterns, that is, any children of the
  context node.
 - seealso: org.apache.xpath.axes.LocPathIterator
 */
@interface OrgApacheXpathAxesChildIterator : OrgApacheXpathAxesLocPathIterator

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Return the first node out of the nodeset, if this expression is 
  a nodeset expression.This is the default implementation for 
  nodesets.
 <p>WARNING: Do not mutate this class from this function!</p>
 @param xctxt The XPath runtime context.
 @return the first node out of the nodeset, or DTM.NULL.
 */
- (jint)asNodeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Returns the axis being iterated, if it is known.
 @return Axis.CHILD, etc., or -1 if the axis is not known or is of multiple 
  types.
 */
- (jint)getAxis;

/*!
 @brief Returns the next node in the set and advances the position of the
  iterator in the set.After a NodeIterator is created, the first call
  to nextNode() returns the first node in the set.
 @return The next <code>Node</code> in the set being iterated over, or
    <code>null</code> if there are no more members in that set.
 */
- (jint)nextNode;

#pragma mark Package-Private

/*!
 @brief Create a ChildIterator object.
 @param compiler A reference to the Compiler that contains the op map.
 @param opPos The position within the op map, which contains the  location path expression for this itterator.
 @param analysis Analysis bits of the entire pattern.
 @throw javax.xml.transform.TransformerException
 */
- (instancetype)initWithOrgApacheXpathCompilerCompiler:(OrgApacheXpathCompilerCompiler *)compiler
                                               withInt:(jint)opPos
                                               withInt:(jint)analysis;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithOrgApacheXmlUtilsPrefixResolver:(id<OrgApacheXmlUtilsPrefixResolver>)arg0 NS_UNAVAILABLE;

- (instancetype)initWithOrgApacheXpathCompilerCompiler:(OrgApacheXpathCompilerCompiler *)arg0
                                               withInt:(jint)arg1
                                               withInt:(jint)arg2
                                           withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathAxesChildIterator)

inline jlong OrgApacheXpathAxesChildIterator_get_serialVersionUID(void);
#define OrgApacheXpathAxesChildIterator_serialVersionUID -6935428015142993583LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathAxesChildIterator, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathAxesChildIterator_initWithOrgApacheXpathCompilerCompiler_withInt_withInt_(OrgApacheXpathAxesChildIterator *self, OrgApacheXpathCompilerCompiler *compiler, jint opPos, jint analysis);

FOUNDATION_EXPORT OrgApacheXpathAxesChildIterator *new_OrgApacheXpathAxesChildIterator_initWithOrgApacheXpathCompilerCompiler_withInt_withInt_(OrgApacheXpathCompilerCompiler *compiler, jint opPos, jint analysis) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathAxesChildIterator *create_OrgApacheXpathAxesChildIterator_initWithOrgApacheXpathCompilerCompiler_withInt_withInt_(OrgApacheXpathCompilerCompiler *compiler, jint opPos, jint analysis);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathAxesChildIterator)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathAxesChildIterator")
