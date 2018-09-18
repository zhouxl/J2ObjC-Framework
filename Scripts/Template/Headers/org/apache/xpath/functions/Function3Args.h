//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/Function3Args.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFunction3Args")
#ifdef RESTRICT_OrgApacheXpathFunctionsFunction3Args
#define INCLUDE_ALL_OrgApacheXpathFunctionsFunction3Args 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFunction3Args 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFunction3Args

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathFunctionsFunction3Args_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFunction3Args || defined(INCLUDE_OrgApacheXpathFunctionsFunction3Args))
#define OrgApacheXpathFunctionsFunction3Args_

#define RESTRICT_OrgApacheXpathFunctionsFunction2Args 1
#define INCLUDE_OrgApacheXpathFunctionsFunction2Args 1
#include "org/apache/xpath/functions/Function2Args.h"

@class JavaUtilVector;
@class OrgApacheXpathExpression;
@class OrgApacheXpathXPathVisitor;

/*!
 @brief Base class for functions that accept three arguments.
 */
@interface OrgApacheXpathFunctionsFunction3Args : OrgApacheXpathFunctionsFunction2Args {
 @public
  /*!
   @brief The third argument passed to the function (at index 2).
   */
  OrgApacheXpathExpression *m_arg2_;
}
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 - seealso: org.apache.xpath.XPathVisitable
 */
- (void)callArgVisitorsWithOrgApacheXpathXPathVisitor:(OrgApacheXpathXPathVisitor *)visitor;

/*!
 @brief Tell if this expression or it's subexpressions can traverse outside 
  the current subtree.
 @return true if traversal outside the context node's subtree can occur.
 */
- (jboolean)canTraverseOutsideSubtree;

/*!
 @brief Check that the number of arguments passed to this function is correct.
 @param argNum The number of arguments that is being passed to the function.
 @throw WrongNumberArgsException
 */
- (void)checkNumberArgsWithInt:(jint)argNum;

/*!
 - seealso: Expression#deepEquals(Expression)
 */
- (jboolean)deepEqualsWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)expr;

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
 @brief Return the third argument passed to the function (at index 2).
 @return An expression that represents the third argument passed to the 
          function.
 */
- (OrgApacheXpathExpression *)getArg2;

/*!
 @brief Set an argument expression for a function.This method is called by the 
  XPath compiler.
 @param arg non-null expression that represents the argument.
 @param argNum The argument number index.
 @throw WrongNumberArgsExceptionIf the argNum parameter is greater than 2.
 */
- (void)setArgWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)arg
                                   withInt:(jint)argNum;

#pragma mark Protected

/*!
 @brief Constructs and throws a WrongNumberArgException with the appropriate
  message for this function object.
 @throw WrongNumberArgsException
 */
- (void)reportWrongNumberArgs;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFunction3Args)

J2OBJC_FIELD_SETTER(OrgApacheXpathFunctionsFunction3Args, m_arg2_, OrgApacheXpathExpression *)

inline jlong OrgApacheXpathFunctionsFunction3Args_get_serialVersionUID(void);
#define OrgApacheXpathFunctionsFunction3Args_serialVersionUID 7915240747161506646LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFunction3Args, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFunction3Args_init(OrgApacheXpathFunctionsFunction3Args *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFunction3Args *new_OrgApacheXpathFunctionsFunction3Args_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFunction3Args *create_OrgApacheXpathFunctionsFunction3Args_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFunction3Args)

#endif

#if !defined (OrgApacheXpathFunctionsFunction3Args_Arg2Owner_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFunction3Args || defined(INCLUDE_OrgApacheXpathFunctionsFunction3Args_Arg2Owner))
#define OrgApacheXpathFunctionsFunction3Args_Arg2Owner_

#define RESTRICT_OrgApacheXpathExpressionOwner 1
#define INCLUDE_OrgApacheXpathExpressionOwner 1
#include "org/apache/xpath/ExpressionOwner.h"

@class OrgApacheXpathExpression;
@class OrgApacheXpathFunctionsFunction3Args;

@interface OrgApacheXpathFunctionsFunction3Args_Arg2Owner : NSObject < OrgApacheXpathExpressionOwner >

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

- (instancetype __nonnull)initWithOrgApacheXpathFunctionsFunction3Args:(OrgApacheXpathFunctionsFunction3Args *)outer$;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFunction3Args_Arg2Owner)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFunction3Args_Arg2Owner_initWithOrgApacheXpathFunctionsFunction3Args_(OrgApacheXpathFunctionsFunction3Args_Arg2Owner *self, OrgApacheXpathFunctionsFunction3Args *outer$);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFunction3Args_Arg2Owner *new_OrgApacheXpathFunctionsFunction3Args_Arg2Owner_initWithOrgApacheXpathFunctionsFunction3Args_(OrgApacheXpathFunctionsFunction3Args *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFunction3Args_Arg2Owner *create_OrgApacheXpathFunctionsFunction3Args_Arg2Owner_initWithOrgApacheXpathFunctionsFunction3Args_(OrgApacheXpathFunctionsFunction3Args *outer$);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFunction3Args_Arg2Owner)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFunction3Args")
