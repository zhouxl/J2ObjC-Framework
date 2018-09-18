//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/operations/Operation.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathOperationsOperation")
#ifdef RESTRICT_OrgApacheXpathOperationsOperation
#define INCLUDE_ALL_OrgApacheXpathOperationsOperation 0
#else
#define INCLUDE_ALL_OrgApacheXpathOperationsOperation 1
#endif
#undef RESTRICT_OrgApacheXpathOperationsOperation

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathOperationsOperation_) && (INCLUDE_ALL_OrgApacheXpathOperationsOperation || defined(INCLUDE_OrgApacheXpathOperationsOperation))
#define OrgApacheXpathOperationsOperation_

#define RESTRICT_OrgApacheXpathExpression 1
#define INCLUDE_OrgApacheXpathExpression 1
#include "org/apache/xpath/Expression.h"

#define RESTRICT_OrgApacheXpathExpressionOwner 1
#define INCLUDE_OrgApacheXpathExpressionOwner 1
#include "org/apache/xpath/ExpressionOwner.h"

@class JavaUtilVector;
@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;
@class OrgApacheXpathXPathVisitor;

/*!
 @brief The baseclass for a binary operation.
 */
@interface OrgApacheXpathOperationsOperation : OrgApacheXpathExpression < OrgApacheXpathExpressionOwner > {
 @public
  /*!
   @brief The left operand expression.
   */
  OrgApacheXpathExpression *m_left_;
  /*!
   @brief The right operand expression.
   */
  OrgApacheXpathExpression *m_right_;
}
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 - seealso: org.apache.xpath.XPathVisitable
 */
- (void)callVisitorsWithOrgApacheXpathExpressionOwner:(id<OrgApacheXpathExpressionOwner>)owner
                       withOrgApacheXpathXPathVisitor:(OrgApacheXpathXPathVisitor *)visitor;

/*!
 @brief Tell if this expression or it's subexpressions can traverse outside
  the current subtree.
 @return true if traversal outside the context node's subtree can occur.
 */
- (jboolean)canTraverseOutsideSubtree;

/*!
 - seealso: Expression#deepEquals(Expression)
 */
- (jboolean)deepEqualsWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)expr;

/*!
 @brief Execute a binary operation by calling execute on each of the operands,
  and then calling the operate method on the derived class.
 @param xctxt The runtime execution context.
 @return The XObject result of the operation.
 @throw javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief This function is used to fixup variables from QNames to stack frame 
  indexes at stylesheet build time.
 @param vars List of QNames that correspond to variables.  This list   should be searched backwards for the first qualified name that 
   corresponds to the variable reference qname.  The position of the 
   QName in the vector from the start of the vector will be its position 
   in the stack frame (but variables above the globalsTop value will need 
   to be offset to the current stack frame).
 */
- (void)fixupVariablesWithJavaUtilVector:(JavaUtilVector *)vars
                                 withInt:(jint)globalsSize;

/*!
 - seealso: ExpressionOwner#getExpression()
 */
- (OrgApacheXpathExpression *)getExpression;

/*!
 @return the left operand of binary operation, as an Expression.
 */
- (OrgApacheXpathExpression *)getLeftOperand;

/*!
 @return the right operand of binary operation, as an Expression.
 */
- (OrgApacheXpathExpression *)getRightOperand;

/*!
 @brief Apply the operation to two operands, and return the result.
 @param left non-null reference to the evaluated left operand.
 @param right non-null reference to the evaluated right operand.
 @return non-null reference to the XObject that represents the result of the operation.
 @throw javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)operateWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)left
                                         withOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)right;

/*!
 - seealso: ExpressionOwner#setExpression(Expression)
 */
- (void)setExpressionWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)exp;

/*!
 @brief Set the left and right operand expressions for this operation.
 @param l The left expression operand.
 @param r The right expression operand.
 */
- (void)setLeftRightWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)l
                    withOrgApacheXpathExpression:(OrgApacheXpathExpression *)r;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathOperationsOperation)

J2OBJC_FIELD_SETTER(OrgApacheXpathOperationsOperation, m_left_, OrgApacheXpathExpression *)
J2OBJC_FIELD_SETTER(OrgApacheXpathOperationsOperation, m_right_, OrgApacheXpathExpression *)

inline jlong OrgApacheXpathOperationsOperation_get_serialVersionUID(void);
#define OrgApacheXpathOperationsOperation_serialVersionUID -3037139537171050430LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathOperationsOperation, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathOperationsOperation_init(OrgApacheXpathOperationsOperation *self);

FOUNDATION_EXPORT OrgApacheXpathOperationsOperation *new_OrgApacheXpathOperationsOperation_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathOperationsOperation *create_OrgApacheXpathOperationsOperation_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathOperationsOperation)

#endif

#if !defined (OrgApacheXpathOperationsOperation_LeftExprOwner_) && (INCLUDE_ALL_OrgApacheXpathOperationsOperation || defined(INCLUDE_OrgApacheXpathOperationsOperation_LeftExprOwner))
#define OrgApacheXpathOperationsOperation_LeftExprOwner_

#define RESTRICT_OrgApacheXpathExpressionOwner 1
#define INCLUDE_OrgApacheXpathExpressionOwner 1
#include "org/apache/xpath/ExpressionOwner.h"

@class OrgApacheXpathExpression;
@class OrgApacheXpathOperationsOperation;

@interface OrgApacheXpathOperationsOperation_LeftExprOwner : NSObject < OrgApacheXpathExpressionOwner >

#pragma mark Public

/*!
 - seealso: ExpressionOwner#getExpression()
 */
- (OrgApacheXpathExpression *)getExpression;

/*!
 - seealso: ExpressionOwner#setExpression(Expression)
 */
- (void)setExpressionWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)exp;

#pragma mark Package-Private

- (instancetype __nonnull)initWithOrgApacheXpathOperationsOperation:(OrgApacheXpathOperationsOperation *)outer$;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathOperationsOperation_LeftExprOwner)

FOUNDATION_EXPORT void OrgApacheXpathOperationsOperation_LeftExprOwner_initWithOrgApacheXpathOperationsOperation_(OrgApacheXpathOperationsOperation_LeftExprOwner *self, OrgApacheXpathOperationsOperation *outer$);

FOUNDATION_EXPORT OrgApacheXpathOperationsOperation_LeftExprOwner *new_OrgApacheXpathOperationsOperation_LeftExprOwner_initWithOrgApacheXpathOperationsOperation_(OrgApacheXpathOperationsOperation *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathOperationsOperation_LeftExprOwner *create_OrgApacheXpathOperationsOperation_LeftExprOwner_initWithOrgApacheXpathOperationsOperation_(OrgApacheXpathOperationsOperation *outer$);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathOperationsOperation_LeftExprOwner)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathOperationsOperation")
