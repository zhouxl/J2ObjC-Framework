//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/patterns/FunctionPattern.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathPatternsFunctionPattern")
#ifdef RESTRICT_OrgApacheXpathPatternsFunctionPattern
#define INCLUDE_ALL_OrgApacheXpathPatternsFunctionPattern 0
#else
#define INCLUDE_ALL_OrgApacheXpathPatternsFunctionPattern 1
#endif
#undef RESTRICT_OrgApacheXpathPatternsFunctionPattern

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathPatternsFunctionPattern_) && (INCLUDE_ALL_OrgApacheXpathPatternsFunctionPattern || defined(INCLUDE_OrgApacheXpathPatternsFunctionPattern))
#define OrgApacheXpathPatternsFunctionPattern_

#define RESTRICT_OrgApacheXpathPatternsStepPattern 1
#define INCLUDE_OrgApacheXpathPatternsStepPattern 1
#include "../../../../org/apache/xpath/patterns/StepPattern.h"

@class JavaUtilVector;
@class OrgApacheXpathExpression;
@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;
@class OrgApacheXpathXPathVisitor;
@protocol OrgApacheXmlDtmDTM;

/*!
 @brief Match pattern step that contains a function.
 */
@interface OrgApacheXpathPatternsFunctionPattern : OrgApacheXpathPatternsStepPattern {
 @public
  /*!
   @brief Should be a <code>expression</code>.
   */
  OrgApacheXpathExpression *m_functionExpr_;
}
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Construct a FunctionPattern from a 
 <code>expression</code>.
 NEEDSDOC @@param expr
 */
- (instancetype __nonnull)initWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)expr
                                                   withInt:(jint)axis
                                                   withInt:(jint)predaxis;

/*!
 @brief Static calc of match score.
 */
- (void)calcScore;

/*!
 @brief Test a node to see if it matches the given node test.
 @param xctxt XPath runtime context.
 @return <code>org.apache.xpath.patterns.NodeTest</code>,
          <code>org.apache.xpath.patterns.NodeTest</code>,
          <code>org.apache.xpath.patterns.NodeTest</code>,
          <code>org.apache.xpath.patterns.NodeTest</code>, or
          <code>org.apache.xpath.patterns.NodeTest</code>.
 @throw javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Test a node to see if it matches the given node test.
 @param xctxt XPath runtime context.
 @return <code>org.apache.xpath.patterns.NodeTest</code>,
          <code>org.apache.xpath.patterns.NodeTest</code>,
          <code>org.apache.xpath.patterns.NodeTest</code>,
          <code>org.apache.xpath.patterns.NodeTest</code>, or
          <code>org.apache.xpath.patterns.NodeTest</code>.
 @throw javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                                withInt:(jint)context;

/*!
 @brief Test a node to see if it matches the given node test.
 @param xctxt XPath runtime context.
 @return <code>org.apache.xpath.patterns.NodeTest</code>,
          <code>org.apache.xpath.patterns.NodeTest</code>,
          <code>org.apache.xpath.patterns.NodeTest</code>,
          <code>org.apache.xpath.patterns.NodeTest</code>, or
          <code>org.apache.xpath.patterns.NodeTest</code>.
 @throw javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                                withInt:(jint)context
                                                 withOrgApacheXmlDtmDTM:(id<OrgApacheXmlDtmDTM>)dtm
                                                                withInt:(jint)expType;

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

#pragma mark Protected

/*!
 @brief Call the visitor for the function.
 */
- (void)callSubtreeVisitorsWithOrgApacheXpathXPathVisitor:(OrgApacheXpathXPathVisitor *)visitor;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithInt:(jint)arg0
                              withInt:(jint)arg1
                              withInt:(jint)arg2 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithInt:(jint)arg0
                         withNSString:(NSString *)arg1
                         withNSString:(NSString *)arg2
                              withInt:(jint)arg3
                              withInt:(jint)arg4 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathPatternsFunctionPattern)

J2OBJC_FIELD_SETTER(OrgApacheXpathPatternsFunctionPattern, m_functionExpr_, OrgApacheXpathExpression *)

inline jlong OrgApacheXpathPatternsFunctionPattern_get_serialVersionUID(void);
#define OrgApacheXpathPatternsFunctionPattern_serialVersionUID -5426793413091209944LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathPatternsFunctionPattern, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathPatternsFunctionPattern_initWithOrgApacheXpathExpression_withInt_withInt_(OrgApacheXpathPatternsFunctionPattern *self, OrgApacheXpathExpression *expr, jint axis, jint predaxis);

FOUNDATION_EXPORT OrgApacheXpathPatternsFunctionPattern *new_OrgApacheXpathPatternsFunctionPattern_initWithOrgApacheXpathExpression_withInt_withInt_(OrgApacheXpathExpression *expr, jint axis, jint predaxis) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathPatternsFunctionPattern *create_OrgApacheXpathPatternsFunctionPattern_initWithOrgApacheXpathExpression_withInt_withInt_(OrgApacheXpathExpression *expr, jint axis, jint predaxis);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathPatternsFunctionPattern)

#endif

#if !defined (OrgApacheXpathPatternsFunctionPattern_FunctionOwner_) && (INCLUDE_ALL_OrgApacheXpathPatternsFunctionPattern || defined(INCLUDE_OrgApacheXpathPatternsFunctionPattern_FunctionOwner))
#define OrgApacheXpathPatternsFunctionPattern_FunctionOwner_

#define RESTRICT_OrgApacheXpathExpressionOwner 1
#define INCLUDE_OrgApacheXpathExpressionOwner 1
#include "../../../../org/apache/xpath/ExpressionOwner.h"

@class OrgApacheXpathExpression;
@class OrgApacheXpathPatternsFunctionPattern;

@interface OrgApacheXpathPatternsFunctionPattern_FunctionOwner : NSObject < OrgApacheXpathExpressionOwner >

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

- (instancetype __nonnull)initWithOrgApacheXpathPatternsFunctionPattern:(OrgApacheXpathPatternsFunctionPattern *)outer$;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathPatternsFunctionPattern_FunctionOwner)

FOUNDATION_EXPORT void OrgApacheXpathPatternsFunctionPattern_FunctionOwner_initWithOrgApacheXpathPatternsFunctionPattern_(OrgApacheXpathPatternsFunctionPattern_FunctionOwner *self, OrgApacheXpathPatternsFunctionPattern *outer$);

FOUNDATION_EXPORT OrgApacheXpathPatternsFunctionPattern_FunctionOwner *new_OrgApacheXpathPatternsFunctionPattern_FunctionOwner_initWithOrgApacheXpathPatternsFunctionPattern_(OrgApacheXpathPatternsFunctionPattern *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathPatternsFunctionPattern_FunctionOwner *create_OrgApacheXpathPatternsFunctionPattern_FunctionOwner_initWithOrgApacheXpathPatternsFunctionPattern_(OrgApacheXpathPatternsFunctionPattern *outer$);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathPatternsFunctionPattern_FunctionOwner)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathPatternsFunctionPattern")
