//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/transformer/MsgMgr.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTransformerMsgMgr")
#ifdef RESTRICT_OrgApacheXalanTransformerMsgMgr
#define INCLUDE_ALL_OrgApacheXalanTransformerMsgMgr 0
#else
#define INCLUDE_ALL_OrgApacheXalanTransformerMsgMgr 1
#endif
#undef RESTRICT_OrgApacheXalanTransformerMsgMgr

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTransformerMsgMgr_) && (INCLUDE_ALL_OrgApacheXalanTransformerMsgMgr || defined(INCLUDE_OrgApacheXalanTransformerMsgMgr))
#define OrgApacheXalanTransformerMsgMgr_

@class IOSObjectArray;
@class JavaLangException;
@class OrgApacheXalanTransformerTransformerImpl;
@protocol JavaxXmlTransformSourceLocator;
@protocol OrgW3cDomNode;

/*!
 @brief This class will manage error messages, warning messages, and other types of
  message events.
 */
@interface OrgApacheXalanTransformerMsgMgr : NSObject

#pragma mark Public

/*!
 @brief Create a message manager object.
 @param transformer non transformer instance
 */
- (instancetype)initWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

/*!
 @brief Tell the user of an error, and probably throw an
  exception.
 @param styleNode Stylesheet node
 @param sourceNode Source tree node
 @param msg Message text to issue
 @throw XSLProcessorExceptionthrown if the active ProblemListener and XPathContext decide
  the error condition is severe enough to halt processing.
 @throw TransformerException
 */
- (void)errorWithJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)srcLctr
                              withOrgW3cDomNode:(id<OrgW3cDomNode>)styleNode
                              withOrgW3cDomNode:(id<OrgW3cDomNode>)sourceNode
                                   withNSString:(NSString *)msg;

/*!
 @brief Tell the user of an error, and probably throw an
  exception.
 @param styleNode Stylesheet node
 @param sourceNode Source tree node
 @param msg Message text to issue
 @param args Arguments to use in message
 @throw XSLProcessorExceptionthrown if the active ProblemListener and XPathContext decide
  the error condition is severe enough to halt processing.
 @throw TransformerException
 */
- (void)errorWithJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)srcLctr
                              withOrgW3cDomNode:(id<OrgW3cDomNode>)styleNode
                              withOrgW3cDomNode:(id<OrgW3cDomNode>)sourceNode
                                   withNSString:(NSString *)msg
                              withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief Tell the user of an error, and probably throw an
  exception.
 @param msg Message text to issue
 @throw XSLProcessorExceptionthrown if the active ProblemListener and XPathContext decide
  the error condition is severe enough to halt processing.
 @throw TransformerException
 */
- (void)errorWithJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)srcLctr
                                   withNSString:(NSString *)msg;

/*!
 @brief Tell the user of an error, and probably throw an
  exception.
 @param msg Message text to issue
 @param e Exception to throw
 @throw XSLProcessorExceptionthrown if the active ProblemListener and XPathContext decide
  the error condition is severe enough to halt processing.
 @throw TransformerException
 */
- (void)errorWithJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)srcLctr
                                   withNSString:(NSString *)msg
                          withJavaLangException:(JavaLangException *)e;

/*!
 @brief Tell the user of an error, and probably throw an
  exception.
 @param msg Message text to issue
 @param args Arguments to be passed to the message
 @throw XSLProcessorExceptionthrown if the active ProblemListener and XPathContext decide
  the error condition is severe enough to halt processing.
 @throw TransformerException
 */
- (void)errorWithJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)srcLctr
                                   withNSString:(NSString *)msg
                              withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief Tell the user of an error, and probably throw an
  exception.
 @param msg Message text to issue
 @param args Arguments to use in message
 @param e Exception to throw
 @throw XSLProcessorExceptionthrown if the active ProblemListener and XPathContext decide
  the error condition is severe enough to halt processing.
 @throw TransformerException
 */
- (void)errorWithJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)srcLctr
                                   withNSString:(NSString *)msg
                              withNSObjectArray:(IOSObjectArray *)args
                          withJavaLangException:(JavaLangException *)e;

/*!
 @brief Warn the user of a problem.
 This is public for access by extensions.
 @param msg The message text to issue
 @param terminate Flag indicating whether to terminate this process
 @throw XSLProcessorExceptionthrown if the active ProblemListener and XPathContext decide
  the error condition is severe enough to halt processing.
 @throw TransformerException
 */
- (void)messageWithJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)srcLctr
                                     withNSString:(NSString *)msg
                                      withBoolean:(jboolean)terminate;

/*!
 @brief Warn the user of a problem.
 @param styleNode Stylesheet node
 @param sourceNode Source tree node
 @param msg Message text to issue
 @throw XSLProcessorExceptionthrown if the active ProblemListener and XPathContext decide
  the error condition is severe enough to halt processing.
 @throw TransformerException
 */
- (void)warnWithJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)srcLctr
                             withOrgW3cDomNode:(id<OrgW3cDomNode>)styleNode
                             withOrgW3cDomNode:(id<OrgW3cDomNode>)sourceNode
                                  withNSString:(NSString *)msg;

/*!
 @brief Warn the user of a problem.
 @param styleNode Stylesheet node
 @param sourceNode Source tree node
 @param msg Message text to issue
 @param args Arguments to pass to the message
 @throw XSLProcessorExceptionthrown if the active ProblemListener and XPathContext decide
  the error condition is severe enough to halt processing.
 @throw TransformerException
 */
- (void)warnWithJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)srcLctr
                             withOrgW3cDomNode:(id<OrgW3cDomNode>)styleNode
                             withOrgW3cDomNode:(id<OrgW3cDomNode>)sourceNode
                                  withNSString:(NSString *)msg
                             withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief Warn the user of a problem.
 @param msg Message text to issue
 @throw XSLProcessorExceptionthrown if the active ProblemListener and XPathContext decide
  the error condition is severe enough to halt processing.
 @throw TransformerException
 */
- (void)warnWithJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)srcLctr
                                  withNSString:(NSString *)msg;

/*!
 @brief Warn the user of a problem.
 @param msg Message text to issue
 @param args Arguments to pass to the message
 @throw XSLProcessorExceptionthrown if the active ProblemListener and XPathContext decide
  the error condition is severe enough to halt processing.
 @throw TransformerException
 */
- (void)warnWithJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)srcLctr
                                  withNSString:(NSString *)msg
                             withNSObjectArray:(IOSObjectArray *)args;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTransformerMsgMgr)

FOUNDATION_EXPORT void OrgApacheXalanTransformerMsgMgr_initWithOrgApacheXalanTransformerTransformerImpl_(OrgApacheXalanTransformerMsgMgr *self, OrgApacheXalanTransformerTransformerImpl *transformer);

FOUNDATION_EXPORT OrgApacheXalanTransformerMsgMgr *new_OrgApacheXalanTransformerMsgMgr_initWithOrgApacheXalanTransformerTransformerImpl_(OrgApacheXalanTransformerTransformerImpl *transformer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTransformerMsgMgr *create_OrgApacheXalanTransformerMsgMgr_initWithOrgApacheXalanTransformerTransformerImpl_(OrgApacheXalanTransformerTransformerImpl *transformer);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTransformerMsgMgr)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTransformerMsgMgr")
