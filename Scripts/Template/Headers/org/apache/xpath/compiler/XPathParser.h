//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/compiler/XPathParser.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathCompilerXPathParser")
#ifdef RESTRICT_OrgApacheXpathCompilerXPathParser
#define INCLUDE_ALL_OrgApacheXpathCompilerXPathParser 0
#else
#define INCLUDE_ALL_OrgApacheXpathCompilerXPathParser 1
#endif
#undef RESTRICT_OrgApacheXpathCompilerXPathParser

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathCompilerXPathParser_) && (INCLUDE_ALL_OrgApacheXpathCompilerXPathParser || defined(INCLUDE_OrgApacheXpathCompilerXPathParser))
#define OrgApacheXpathCompilerXPathParser_

@class IOSObjectArray;
@class OrgApacheXpathCompilerCompiler;
@protocol JavaxXmlTransformErrorListener;
@protocol JavaxXmlTransformSourceLocator;
@protocol OrgApacheXmlUtilsPrefixResolver;

/*!
 @brief Tokenizes and parses XPath expressions.This should really be named
  XPathParserImpl, and may be renamed in the future.
 */
@interface OrgApacheXpathCompilerXPathParser : NSObject {
 @public
  /*!
   @brief The next token in the pattern.
   */
  NSString *m_token_;
  /*!
   @brief The first char in m_token, the theory being that this
  is an optimization because we won't have to do charAt(0) as
  often.
   */
  jchar m_tokenChar_;
  /*!
   @brief The position in the token queue is tracked by m_queueMark.
   */
  jint m_queueMark_;
  /*!
   @brief The prefix resolver to map prefixes to namespaces in the OpMap.
   */
  id<OrgApacheXmlUtilsPrefixResolver> m_namespaceContext_;
  /*!
   @brief The source location of the XPath.
   */
  id<JavaxXmlTransformSourceLocator> m_sourceLocator_;
}
@property (readonly, copy, class) NSString *CONTINUE_AFTER_FATAL_ERROR NS_SWIFT_NAME(CONTINUE_AFTER_FATAL_ERROR);
@property (readonly, class) jint FILTER_MATCH_FAILED NS_SWIFT_NAME(FILTER_MATCH_FAILED);
@property (readonly, class) jint FILTER_MATCH_PRIMARY NS_SWIFT_NAME(FILTER_MATCH_PRIMARY);
@property (readonly, class) jint FILTER_MATCH_PREDICATES NS_SWIFT_NAME(FILTER_MATCH_PREDICATES);

+ (NSString *)CONTINUE_AFTER_FATAL_ERROR;

+ (jint)FILTER_MATCH_FAILED;

+ (jint)FILTER_MATCH_PRIMARY;

+ (jint)FILTER_MATCH_PREDICATES;

#pragma mark Public

/*!
 @brief The parser constructor.
 */
- (instancetype __nonnull)initWithJavaxXmlTransformErrorListener:(id<JavaxXmlTransformErrorListener>)errorListener
                              withJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)sourceLocator;

/*!
 @brief Return the current error listener.
 @return The error listener, which should not normally be null, but may be.
 */
- (id<JavaxXmlTransformErrorListener>)getErrorListener;

/*!
 @brief Given an string, init an XPath object for pattern matches,
  in order that a parse doesn't
  have to be done each time the expression is evaluated.
 @param compiler The XPath object to be initialized.
 @param expression A String representing the XPath.
 @param namespaceContext An object that is able to resolve prefixes in  the XPath to namespaces.
 @throw javax.xml.transform.TransformerException
 */
- (void)initMatchPatternWithOrgApacheXpathCompilerCompiler:(OrgApacheXpathCompilerCompiler *)compiler
                                              withNSString:(NSString *)expression
                       withOrgApacheXmlUtilsPrefixResolver:(id<OrgApacheXmlUtilsPrefixResolver>)namespaceContext OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Given an string, init an XPath object for selections,
  in order that a parse doesn't
  have to be done each time the expression is evaluated.
 @param compiler The compiler object.
 @param expression A string conforming to the XPath grammar.
 @param namespaceContext An object that is able to resolve prefixes in  the XPath to namespaces.
 @throw javax.xml.transform.TransformerException
 */
- (void)initXPathWithOrgApacheXpathCompilerCompiler:(OrgApacheXpathCompilerCompiler *)compiler
                                       withNSString:(NSString *)expression
                withOrgApacheXmlUtilsPrefixResolver:(id<OrgApacheXmlUtilsPrefixResolver>)namespaceContext OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Allow an application to register an error event handler, where syntax 
  errors will be sent.If the error listener is not set, syntax errors 
  will be sent to System.err.
 @param handler Reference to error listener where syntax errors will be                  sent.
 */
- (void)setErrorHandlerWithJavaxXmlTransformErrorListener:(id<JavaxXmlTransformErrorListener>)handler;

#pragma mark Protected

/*!
 @brief AbbreviatedNodeTestStep    ::=    '@@'?
 NodeTest Predicate
 @param isLeadingSlashPermitted a boolean indicating whether a slash can         appear at the start of this step
 @return boolean indicating whether a slash following the step was consumed
 @throw javax.xml.transform.TransformerException
 */
- (jboolean)AbbreviatedNodeTestStepWithBoolean:(jboolean)isLeadingSlashPermitted;

/*!
 @brief This has to handle construction of the operations so that they are evaluated
  in pre-fix order.So, for 9+7-6, instead of |+|9|-|7|6|, this needs to be
  evaluated as |-|+|9|7|6|.
 AdditiveExpr  ::=  MultiplicativeExpr
  | AdditiveExpr '+' MultiplicativeExpr
  | AdditiveExpr '-' MultiplicativeExpr
 @param addPos Position where expression is to be added, or -1 for append.
 @return the position at the end of the equality expression.
 @throw javax.xml.transform.TransformerException
 */
- (jint)AdditiveExprWithInt:(jint)addPos;

/*!
 @brief AndExpr  ::=  EqualityExpr
  | AndExpr 'and' EqualityExpr
 @throw javax.xml.transform.TransformerException
 */
- (void)AndExpr;

/*!
 @brief Argument    ::=    Expr
 @throw javax.xml.transform.TransformerException
 */
- (void)Argument;

/*!
 @brief Basis    ::=    AxisName '::' NodeTest
  | AbbreviatedBasis
 @return FROM_XXX axes type, found in <code>org.apache.xpath.compiler.Keywords</code>.
 @throw javax.xml.transform.TransformerException
 */
- (jint)AxisName;

/*!
 @brief Basis    ::=    AxisName '::' NodeTest
  | AbbreviatedBasis
 @throw javax.xml.transform.TransformerException
 */
- (void)Basis;

/*!
 @brief StringExpr  ::=  Expr
 @throw javax.xml.transform.TransformerException
 */
- (void)BooleanExpr;

/*!
 @brief Dump the remaining token queue.
 Thanks to Craig for this.
 @return A dump of the remaining token queue, which may be appended to 
          an error message.
 */
- (NSString *)dumpRemainingTokenQueue;

/*!
 @param addPos Position where expression is to be added, or -1 for append.
 @return the position at the end of the equality expression.
 @throw javax.xml.transform.TransformerException
 */
- (jint)EqualityExprWithInt:(jint)addPos;

/*!
 @brief Expr  ::=  OrExpr
 @throw javax.xml.transform.TransformerException
 */
- (void)Expr;

/*!
 @brief FilterExpr  ::=  PrimaryExpr
  | FilterExpr Predicate
 @throw XSLProcessorExceptionthrown if the active ProblemListener and XPathContext decide
  the error condition is severe enough to halt processing.
 @return FILTER_MATCH_PREDICATES, if this method successfully matched a
           FilterExpr with one or more Predicates;
           FILTER_MATCH_PRIMARY, if this method successfully matched a
           FilterExpr that was just a PrimaryExpr; or
           FILTER_MATCH_FAILED, if this method did not match a FilterExpr
 @throw javax.xml.transform.TransformerException
 */
- (jint)FilterExpr;

/*!
 @brief FunctionCall    ::=    FunctionName '(' ( Argument ( ',' Argument)*)?
 ')'
 @return true if, and only if, a FunctionCall was matched
 @throw javax.xml.transform.TransformerException
 */
- (jboolean)FunctionCall;

/*!
 @brief IdKeyPattern  ::=  'id' '(' Literal ')'
  | 'key' '(' Literal ',' Literal ')'
  (Also handle doc())
 @throw javax.xml.transform.TransformerException
 */
- (void)IdKeyPattern;

/*!
 @brief The value of the Literal is the sequence of characters inside
  the " or ' characters>.
 Literal  ::=  '"' [^"]* '"'
  | "'" [^']* "'"
 @throw javax.xml.transform.TransformerException
 */
- (void)Literal;

/*!
 @brief LocationPath ::= RelativeLocationPath
  | AbsoluteLocationPath
 @throw javax.xml.transform.TransformerException
 */
- (void)LocationPath;

/*!
 @brief LocationPathPattern  ::=  '/' RelativePathPattern?
 | IdKeyPattern (('/' | '//') RelativePathPattern)?
  | '//'? RelativePathPattern
 @throw javax.xml.transform.TransformerException
 */
- (void)LocationPathPattern;

/*!
 @brief This has to handle construction of the operations so that they are evaluated
  in pre-fix order.So, for 9+7-6, instead of |+|9|-|7|6|, this needs to be
  evaluated as |-|+|9|7|6|.
 MultiplicativeExpr  ::=  UnaryExpr
  | MultiplicativeExpr MultiplyOperator UnaryExpr
  | MultiplicativeExpr 'div' UnaryExpr
  | MultiplicativeExpr 'mod' UnaryExpr
  | MultiplicativeExpr 'quo' UnaryExpr
 @param addPos Position where expression is to be added, or -1 for append.
 @return the position at the end of the equality expression.
 @throw javax.xml.transform.TransformerException
 */
- (jint)MultiplicativeExprWithInt:(jint)addPos;

/*!
 @brief NCName ::=  (Letter | '_') (NCNameChar)
  NCNameChar ::=  Letter | Digit | '.' | '-' | '_' | CombiningChar | Extender
 */
- (void)NCName;

/*!
 @brief NodeTest    ::=    WildcardName
  | NodeType '(' ')'
  | 'processing-instruction' '(' Literal ')'
 @param axesType FROM_XXX axes type, found in <code>org.apache.xpath.compiler.Keywords</code> .
 @throw javax.xml.transform.TransformerException
 */
- (void)NodeTestWithInt:(jint)axesType;

/*!
 @brief Number ::= [0-9]+('
 .'[0-9]+)? | '.'[0-9]+
 @throw javax.xml.transform.TransformerException
 */
- (void)Number;

/*!
 @brief NumberExpr  ::=  Expr
 @throw javax.xml.transform.TransformerException
 */
- (void)NumberExpr;

/*!
 @brief OrExpr  ::=  AndExpr
  | OrExpr 'or' AndExpr
 @throw javax.xml.transform.TransformerException
 */
- (void)OrExpr;

/*!
 @brief PathExpr  ::=  LocationPath
  | FilterExpr
  | FilterExpr '/' RelativeLocationPath
  | FilterExpr '//' RelativeLocationPath
 @throw XSLProcessorExceptionthrown if the active ProblemListener and XPathContext decide
  the error condition is severe enough to halt processing.
 @throw javax.xml.transform.TransformerException
 */
- (void)PathExpr;

/*!
 @brief Pattern  ::=  LocationPathPattern
  | Pattern '|' LocationPathPattern
 @throw javax.xml.transform.TransformerException
 */
- (void)Pattern;

/*!
 @brief Predicate ::= '[' PredicateExpr ']'
 @throw javax.xml.transform.TransformerException
 */
- (void)Predicate;

/*!
 @brief PredicateExpr ::= Expr
 @throw javax.xml.transform.TransformerException
 */
- (void)PredicateExpr;

/*!
 @brief PrimaryExpr  ::=  VariableReference
  | '(' Expr ')'
  | Literal
  | Number
  | FunctionCall
 @return true if this method successfully matched a PrimaryExpr
 @throw javax.xml.transform.TransformerException
 */
- (jboolean)PrimaryExpr;

/*!
 @brief QName ::=  (Prefix ':')?
 LocalPart
  Prefix ::=  NCName
  LocalPart ::=  NCName
 @throw javax.xml.transform.TransformerException
 */
- (void)QName;

/*!
 @brief .
 @param addPos Position where expression is to be added, or -1 for append.
 @return the position at the end of the relational expression.
 @throw javax.xml.transform.TransformerException
 */
- (jint)RelationalExprWithInt:(jint)addPos;

/*!
 @brief RelativeLocationPath ::= Step
  | RelativeLocationPath '/' Step
  | AbbreviatedRelativeLocationPath
 @throw javax.xml.transform.TransformerException
 */
- (jboolean)RelativeLocationPath;

/*!
 @brief RelativePathPattern  ::=  StepPattern
  | RelativePathPattern '/' StepPattern
  | RelativePathPattern '//' StepPattern
 @throw javax.xml.transform.TransformerException
 */
- (void)RelativePathPattern;

/*!
 @brief Step    ::=    Basis Predicate
  | AbbreviatedStep
 @throw javax.xml.transform.TransformerException
 */
- (jboolean)Step;

/*!
 @brief StepPattern  ::=  AbbreviatedNodeTestStep
 @param isLeadingSlashPermitted a boolean indicating whether a slash can         appear at the start of this step
 @return boolean indicating whether a slash following the step was consumed
 @throw javax.xml.transform.TransformerException
 */
- (jboolean)StepPatternWithBoolean:(jboolean)isLeadingSlashPermitted;

/*!
 @brief StringExpr  ::=  Expr
 @throw javax.xml.transform.TransformerException
 */
- (void)StringExpr;

/*!
 @brief UnaryExpr  ::=  UnionExpr
  | '-' UnaryExpr
 @throw javax.xml.transform.TransformerException
 */
- (void)UnaryExpr;

/*!
 @brief The context of the right hand side expressions is the context of the
  left hand side expression.The results of the right hand side expressions
  are node sets.
 The result of the left hand side UnionExpr is the union
  of the results of the right hand side expressions.
  UnionExpr    ::=    PathExpr
  | UnionExpr '|' PathExpr
 @throw javax.xml.transform.TransformerException
 */
- (void)UnionExpr;

#pragma mark Package-Private

/*!
 @brief Insert room for operation.This WILL set
  the length value of the operation, and will update
  the length value for the total expression.
 @param length The length of the operation.
 @param op The op code to the inserted.
 */
- (void)appendOpWithInt:(jint)length
                withInt:(jint)op;

/*!
 @brief Notify the user of an error, and probably throw an
  exception.
 @param msg An error msgkey that corresponds to one of the constants found              in 
 <code>org.apache.xpath.res.XPATHErrorResources</code> , which is              a key for a format string.
 @param args An array of arguments represented in the format string, which               may be null.
 @throw TransformerExceptionif the current ErrorListoner determines to 
                               throw an exception.
 */
- (void)errorWithNSString:(NSString *)msg
        withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief This method is added to support DOM 3 XPath API.
 <p>
  This method is exactly like error(String, Object[]); except that
  the underlying TransformerException is 
  XpathStylesheetDOM3Exception (which extends TransformerException). 
 <p>
  So older XPath code in Xalan is not affected by this. To older XPath code
  the behavior of whether error() or errorForDOM3() is called because it is
  always catching TransformerException objects and is oblivious to
  the new subclass of XPathStylesheetDOM3Exception. Older XPath code 
  runs as before. 
 <p>
  However, newer DOM3 XPath code upon catching a TransformerException can
  can check if the exception is an instance of XPathStylesheetDOM3Exception
  and take appropriate action.
 @param msg An error msgkey that corresponds to one of the constants found              in 
 <code>org.apache.xpath.res.XPATHErrorResources</code> , which is              a key for a format string.
 @param args An array of arguments represented in the format string, which               may be null.
 @throw TransformerExceptionif the current ErrorListoner determines to 
                               throw an exception.
 */
- (void)errorForDOM3WithNSString:(NSString *)msg
               withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief Given a string, return the corresponding function token.
 @param key A local name of a function.
 @return The function ID, which may correspond to one of the FUNC_XXX 
     values found in <code>org.apache.xpath.compiler.FunctionTable</code>, but may 
     be a value installed by an external module.
 */
- (jint)getFunctionTokenWithNSString:(NSString *)key;

/*!
 @brief Insert room for operation.This will NOT set
  the length value of the operation, but will update
  the length value for the total expression.
 @param pos The position where the op is to be inserted.
 @param length The length of the operation space in the op map.
 @param op The op code to the inserted.
 */
- (void)insertOpWithInt:(jint)pos
                withInt:(jint)length
                withInt:(jint)op;

/*!
 @brief Look ahead of the current token in order to
  make a branching decision.
 @param c the character to be tested for.
 @param n number of tokens to look ahead.  Must be  greater than 1.
 @return true if the next token matches the character argument.
 */
- (jboolean)lookaheadWithChar:(jchar)c
                      withInt:(jint)n;

/*!
 @brief Check whether m_tokenChar==c.
 @param c A character to be tested.
 @return If m_token is null, returns false, or return true if c matches 
          the current token.
 */
- (jboolean)tokenIsWithChar:(jchar)c;

/*!
 @brief Check whether m_token matches the target string.
 @param s A string reference or null.
 @return If m_token is null, returns false (or true if s is also null), or 
  return true if the current token matches the string, else false.
 */
- (jboolean)tokenIsWithNSString:(NSString *)s;

/*!
 @brief Warn the user of a problem.
 @param msg An error msgkey that corresponds to one of the constants found              in 
 <code>org.apache.xpath.res.XPATHErrorResources</code> , which is              a key for a format string.
 @param args An array of arguments represented in the format string, which               may be null.
 @throw TransformerExceptionif the current ErrorListoner determines to 
                               throw an exception.
 */
- (void)warnWithNSString:(NSString *)msg
       withNSObjectArray:(IOSObjectArray *)args;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathCompilerXPathParser)

J2OBJC_FIELD_SETTER(OrgApacheXpathCompilerXPathParser, m_token_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXpathCompilerXPathParser, m_namespaceContext_, id<OrgApacheXmlUtilsPrefixResolver>)
J2OBJC_FIELD_SETTER(OrgApacheXpathCompilerXPathParser, m_sourceLocator_, id<JavaxXmlTransformSourceLocator>)

inline NSString *OrgApacheXpathCompilerXPathParser_get_CONTINUE_AFTER_FATAL_ERROR(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerXPathParser_CONTINUE_AFTER_FATAL_ERROR;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerXPathParser, CONTINUE_AFTER_FATAL_ERROR, NSString *)

/*!
 @brief Results from checking FilterExpr syntax
 */
inline jint OrgApacheXpathCompilerXPathParser_get_FILTER_MATCH_FAILED(void);
#define OrgApacheXpathCompilerXPathParser_FILTER_MATCH_FAILED 0
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerXPathParser, FILTER_MATCH_FAILED, jint)

inline jint OrgApacheXpathCompilerXPathParser_get_FILTER_MATCH_PRIMARY(void);
#define OrgApacheXpathCompilerXPathParser_FILTER_MATCH_PRIMARY 1
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerXPathParser, FILTER_MATCH_PRIMARY, jint)

inline jint OrgApacheXpathCompilerXPathParser_get_FILTER_MATCH_PREDICATES(void);
#define OrgApacheXpathCompilerXPathParser_FILTER_MATCH_PREDICATES 2
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerXPathParser, FILTER_MATCH_PREDICATES, jint)

FOUNDATION_EXPORT void OrgApacheXpathCompilerXPathParser_initWithJavaxXmlTransformErrorListener_withJavaxXmlTransformSourceLocator_(OrgApacheXpathCompilerXPathParser *self, id<JavaxXmlTransformErrorListener> errorListener, id<JavaxXmlTransformSourceLocator> sourceLocator);

FOUNDATION_EXPORT OrgApacheXpathCompilerXPathParser *new_OrgApacheXpathCompilerXPathParser_initWithJavaxXmlTransformErrorListener_withJavaxXmlTransformSourceLocator_(id<JavaxXmlTransformErrorListener> errorListener, id<JavaxXmlTransformSourceLocator> sourceLocator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathCompilerXPathParser *create_OrgApacheXpathCompilerXPathParser_initWithJavaxXmlTransformErrorListener_withJavaxXmlTransformSourceLocator_(id<JavaxXmlTransformErrorListener> errorListener, id<JavaxXmlTransformSourceLocator> sourceLocator);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathCompilerXPathParser)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathCompilerXPathParser")
