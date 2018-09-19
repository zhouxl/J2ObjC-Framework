//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/axes/OneStepIteratorForward.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathAxesOneStepIteratorForward")
#ifdef RESTRICT_OrgApacheXpathAxesOneStepIteratorForward
#define INCLUDE_ALL_OrgApacheXpathAxesOneStepIteratorForward 0
#else
#define INCLUDE_ALL_OrgApacheXpathAxesOneStepIteratorForward 1
#endif
#undef RESTRICT_OrgApacheXpathAxesOneStepIteratorForward

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathAxesOneStepIteratorForward_) && (INCLUDE_ALL_OrgApacheXpathAxesOneStepIteratorForward || defined(INCLUDE_OrgApacheXpathAxesOneStepIteratorForward))
#define OrgApacheXpathAxesOneStepIteratorForward_

#define RESTRICT_OrgApacheXpathAxesChildTestIterator 1
#define INCLUDE_OrgApacheXpathAxesChildTestIterator 1
#include "../../../../org/apache/xpath/axes/ChildTestIterator.h"

@class OrgApacheXmlDtmDTMAxisTraverser;
@class OrgApacheXpathCompilerCompiler;
@class OrgApacheXpathExpression;

/*!
 @brief This class implements a general iterator for
  those LocationSteps with only one step, and perhaps a predicate, 
  that only go forward (i.e.it can not be used with ancestors, 
  preceding, etc.)
 - seealso: org.apache.xpath.axes
 */
@interface OrgApacheXpathAxesOneStepIteratorForward : OrgApacheXpathAxesChildTestIterator {
 @public
  /*!
   @brief The traversal axis from where the nodes will be filtered.
   */
  jint m_axis_;
}

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Create a OneStepIterator object that will just traverse the self axes.
 @param axis One of the org.apache.xml.dtm.Axis integers.
 @throw javax.xml.transform.TransformerException
 */
- (instancetype)initWithInt:(jint)axis;

/*!
 - seealso: Expression#deepEquals(Expression)
 */
- (jboolean)deepEqualsWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)expr;

/*!
 @brief Returns the axis being iterated, if it is known.
 @return Axis.CHILD, etc., or -1 if the axis is not known or is of multiple 
  types.
 */
- (jint)getAxis;

/*!
 @brief Initialize the context values for this expression
  after it is cloned.
 @param context The XPath runtime context for this  transformation.
 */
- (void)setRootWithInt:(jint)context
                withId:(id)environment;

#pragma mark Protected

/*!
 @brief Get the next node via getFirstAttribute && getNextAttribute.
 */
- (jint)getNextNode;

#pragma mark Package-Private

/*!
 @brief Create a OneStepIterator object.
 @param compiler A reference to the Compiler that contains the op map.
 @param opPos The position within the op map, which contains the  location path expression for this itterator.
 @throw javax.xml.transform.TransformerException
 */
- (instancetype)initWithOrgApacheXpathCompilerCompiler:(OrgApacheXpathCompilerCompiler *)compiler
                                               withInt:(jint)opPos
                                               withInt:(jint)analysis;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithOrgApacheXmlDtmDTMAxisTraverser:(OrgApacheXmlDtmDTMAxisTraverser *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathAxesOneStepIteratorForward)

inline jlong OrgApacheXpathAxesOneStepIteratorForward_get_serialVersionUID(void);
#define OrgApacheXpathAxesOneStepIteratorForward_serialVersionUID -1576936606178190566LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathAxesOneStepIteratorForward, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathAxesOneStepIteratorForward_initWithOrgApacheXpathCompilerCompiler_withInt_withInt_(OrgApacheXpathAxesOneStepIteratorForward *self, OrgApacheXpathCompilerCompiler *compiler, jint opPos, jint analysis);

FOUNDATION_EXPORT OrgApacheXpathAxesOneStepIteratorForward *new_OrgApacheXpathAxesOneStepIteratorForward_initWithOrgApacheXpathCompilerCompiler_withInt_withInt_(OrgApacheXpathCompilerCompiler *compiler, jint opPos, jint analysis) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathAxesOneStepIteratorForward *create_OrgApacheXpathAxesOneStepIteratorForward_initWithOrgApacheXpathCompilerCompiler_withInt_withInt_(OrgApacheXpathCompilerCompiler *compiler, jint opPos, jint analysis);

FOUNDATION_EXPORT void OrgApacheXpathAxesOneStepIteratorForward_initWithInt_(OrgApacheXpathAxesOneStepIteratorForward *self, jint axis);

FOUNDATION_EXPORT OrgApacheXpathAxesOneStepIteratorForward *new_OrgApacheXpathAxesOneStepIteratorForward_initWithInt_(jint axis) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathAxesOneStepIteratorForward *create_OrgApacheXpathAxesOneStepIteratorForward_initWithInt_(jint axis);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathAxesOneStepIteratorForward)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathAxesOneStepIteratorForward")
