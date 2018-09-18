//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/processor/StylesheetHandler.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanProcessorStylesheetHandler")
#ifdef RESTRICT_OrgApacheXalanProcessorStylesheetHandler
#define INCLUDE_ALL_OrgApacheXalanProcessorStylesheetHandler 0
#else
#define INCLUDE_ALL_OrgApacheXalanProcessorStylesheetHandler 1
#endif
#undef RESTRICT_OrgApacheXalanProcessorStylesheetHandler

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanProcessorStylesheetHandler_) && (INCLUDE_ALL_OrgApacheXalanProcessorStylesheetHandler || defined(INCLUDE_OrgApacheXalanProcessorStylesheetHandler))
#define OrgApacheXalanProcessorStylesheetHandler_

#define RESTRICT_OrgXmlSaxHelpersDefaultHandler 1
#define INCLUDE_OrgXmlSaxHelpersDefaultHandler 1
#include "org/xml/sax/helpers/DefaultHandler.h"

#define RESTRICT_JavaxXmlTransformSaxTemplatesHandler 1
#define INCLUDE_JavaxXmlTransformSaxTemplatesHandler 1
#include "javax/xml/transform/sax/TemplatesHandler.h"

#define RESTRICT_OrgApacheXmlUtilsPrefixResolver 1
#define INCLUDE_OrgApacheXmlUtilsPrefixResolver 1
#include "org/apache/xml/utils/PrefixResolver.h"

#define RESTRICT_OrgApacheXmlUtilsNodeConsumer 1
#define INCLUDE_OrgApacheXmlUtilsNodeConsumer 1
#include "org/apache/xml/utils/NodeConsumer.h"

@class IOSCharArray;
@class IOSObjectArray;
@class JavaLangException;
@class JavaUtilStack;
@class OrgApacheXalanProcessorTransformerFactoryImpl;
@class OrgApacheXalanProcessorXSLTElementProcessor;
@class OrgApacheXalanProcessorXSLTSchema;
@class OrgApacheXalanTemplatesElemTemplateElement;
@class OrgApacheXalanTemplatesStylesheet;
@class OrgApacheXalanTemplatesStylesheetRoot;
@class OrgApacheXmlUtilsSAXSourceLocator;
@class OrgApacheXpathXPath;
@class OrgXmlSaxHelpersNamespaceSupport;
@class OrgXmlSaxInputSource;
@class OrgXmlSaxSAXParseException;
@protocol JavaxXmlTransformSource;
@protocol JavaxXmlTransformTemplates;
@protocol OrgW3cDomNode;
@protocol OrgXmlSaxAttributes;
@protocol OrgXmlSaxLocator;

/*!
 @brief Initializes and processes a stylesheet via SAX events.
 This class acts as essentially a state machine, maintaining
  a ContentHandler stack, and pushing appropriate content
  handlers as parse events occur.
 */
@interface OrgApacheXalanProcessorStylesheetHandler : OrgXmlSaxHelpersDefaultHandler < JavaxXmlTransformSaxTemplatesHandler, OrgApacheXmlUtilsPrefixResolver, OrgApacheXmlUtilsNodeConsumer > {
 @public
  /*!
   @brief The root stylesheet of the stylesheets tree.
   */
  OrgApacheXalanTemplatesStylesheetRoot *m_stylesheetRoot_;
  /*!
   @brief The last stylesheet that was popped off the stylesheets stack.
   */
  OrgApacheXalanTemplatesStylesheet *m_lastPoppedStylesheet_;
  /*!
   @brief This will act as a stack to keep track of the
  current include base.
   */
  JavaUtilStack *m_baseIdentifiers_;
  /*!
   @brief Stack of NamespaceSupport objects.
   */
  JavaUtilStack *m_nsSupportStack_;
}
@property (readonly, class) jint STYPE_ROOT NS_SWIFT_NAME(STYPE_ROOT);
@property (readonly, class) jint STYPE_INCLUDE NS_SWIFT_NAME(STYPE_INCLUDE);
@property (readonly, class) jint STYPE_IMPORT NS_SWIFT_NAME(STYPE_IMPORT);

+ (jint)STYPE_ROOT;

+ (jint)STYPE_INCLUDE;

+ (jint)STYPE_IMPORT;

#pragma mark Public

/*!
 @brief Create a StylesheetHandler object, creating a root stylesheet
  as the target.
 @param processor non-null reference to the transformer factory that owns this handler.
 @throw TransformerConfigurationExceptionif a StylesheetRoot
  can not be constructed for some reason.
 */
- (instancetype __nonnull)initWithOrgApacheXalanProcessorTransformerFactoryImpl:(OrgApacheXalanProcessorTransformerFactoryImpl *)processor;

/*!
 @brief Receive notification of character data inside an element.
 @param ch The characters.
 @param start The start position in the character array.
 @param length The number of characters to use from the                character array.
 - seealso: org.xml.sax.ContentHandler
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 */
- (void)charactersWithCharArray:(IOSCharArray *)ch
                        withInt:(jint)start
                        withInt:(jint)length;

/*!
 @brief Process an expression string into an XPath.
 Must be public for access by the AVT class.
 @param str A non-null reference to a valid or invalid XPath expression string.
 @return A non-null reference to an XPath object that represents the string argument.
 @throw javax.xml.transform.TransformerExceptionif the expression can not be processed.
 - seealso: <a href="http://www.w3.org/TR/xslt#section-Expressions">Section 4 Expressions in XSLT Specification</a>
 */
- (OrgApacheXpathXPath *)createXPathWithNSString:(NSString *)str
  withOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)owningTemplate;

/*!
 @brief Receive notification of the end of the document.
 - seealso: org.xml.sax.ContentHandler
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 */
- (void)endDocument;

/*!
 @brief Receive notification of the end of an element.
 @param uri The Namespace URI, or an empty string.
 @param localName The local name (without prefix), or empty string if not namespace processing.
 @param rawName The qualified name (with prefix).
 - seealso: org.xml.sax.ContentHandler
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 */
- (void)endElementWithNSString:(NSString *)uri
                  withNSString:(NSString *)localName
                  withNSString:(NSString *)rawName;

/*!
 @brief Receive notification of the end of a Namespace mapping.
 <p>By default, do nothing.  Application writers may override this
  method in a subclass to take specific actions at the start of
  each element (such as allocating a new tree node or writing
  output to a file).</p>
 @param prefix The Namespace prefix being declared.
 - seealso: org.xml.sax.ContentHandler
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 */
- (void)endPrefixMappingWithNSString:(NSString *)prefix;

/*!
 @brief Receive notification of a recoverable XSLT processing error.
 @param e The error information encoded as an exception.
 @throw org.xml.sax.SAXExceptionthat wraps a 
 <code>javax.xml.transform.TransformerException</code> if the current 
 <code>javax.xml.transform.ErrorListener</code>
  method chooses to flag this condition as an error.
 */
- (void)errorWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)e;

/*!
 @brief Report a fatal XSLT processing error.
 @param e The error information encoded as an exception.
 @throw org.xml.sax.SAXExceptionthat wraps a 
 <code>javax.xml.transform.TransformerException</code> if the current 
 <code>javax.xml.transform.ErrorListener</code>
  method chooses to flag this condition as an error.
 */
- (void)fatalErrorWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)e;

/*!
 @brief Return the base identifier.
 @return The base identifier of the current stylesheet.
 */
- (NSString *)getBaseIdentifier;

/*!
 @return Incremental flag
 */
- (jboolean)getIncremental;

/*!
 @brief Get the current stylesheet Locator object.
 @return non-null reference to the current locator object.
 */
- (OrgApacheXmlUtilsSAXSourceLocator *)getLocator;

/*!
 @brief Given a namespace, get the corrisponding prefix from the current
  namespace support context.
 @param prefix The prefix to look up, which may be an empty string ("") for the default Namespace.
 @return The associated Namespace URI, or null if the prefix
          is undeclared in this context.
 */
- (NSString *)getNamespaceForPrefixWithNSString:(NSString *)prefix;

/*!
 @brief Given a namespace, get the corrisponding prefix.This is here only
  to support the <code>org.apache.xml.utils.PrefixResolver</code> interface,
  and will throw an error if invoked on this object.
 @param prefix The prefix to look up, which may be an empty string ("") for the default Namespace.
 @param context The node context from which to look up the URI.
 @return The associated Namespace URI, or null if the prefix
          is undeclared in this context.
 */
- (NSString *)getNamespaceForPrefixWithNSString:(NSString *)prefix
                              withOrgW3cDomNode:(id<OrgW3cDomNode>)context;

/*!
 @return Optimization flag
 */
- (jboolean)getOptimize;

/*!
 @brief Set the node that is originating the SAX event.
 @return Reference to node that originated the current event.
 - seealso: org.apache.xml.utils.NodeConsumer
 */
- (id<OrgW3cDomNode>)getOriginatingNode;

/*!
 @brief Get the root of the XSLT Schema, which tells us how to
  transition content handlers, create elements, etc.
 @return The root XSLT Schema, which should never be null.
 */
- (OrgApacheXalanProcessorXSLTSchema *)getSchema;

/*!
 @return Source Location flag
 */
- (jboolean)getSource_location;

/*!
 @brief Get the XSLT TransformerFactoryImpl for needed services.
 TODO: This method should be renamed.
 @return The TransformerFactoryImpl that owns this handler.
 */
- (OrgApacheXalanProcessorTransformerFactoryImpl *)getStylesheetProcessor;

/*!
 @brief Return the stylesheet root that this handler is constructing.
 @return The root stylesheet of the stylesheets tree.
 */
- (OrgApacheXalanTemplatesStylesheetRoot *)getStylesheetRoot;

/*!
 @brief Get the base ID (URI or system ID) from where relative
  URLs will be resolved.
 @return The systemID that was set with <code>setSystemId</code>.
 */
- (NSString *)getSystemId;

/*!
 @brief When this object is used as a ContentHandler or ContentHandler, it will
  create a Templates object, which the caller can get once
  the SAX events have been completed.
 @return The stylesheet object that was created during
  the SAX event process, or null if no stylesheet has
  been created. 
  Author <a href="mailto:scott_boag@@lotus.com">Scott Boag</a>
 */
- (id<JavaxXmlTransformTemplates>)getTemplates;

/*!
 - seealso: PrefixResolver#handlesNullPrefixes()
 */
- (jboolean)handlesNullPrefixes;

/*!
 @brief Receive notification of ignorable whitespace in element content.
 @param ch The whitespace characters.
 @param start The start position in the character array.
 @param length The number of characters to use from the                character array.
 - seealso: org.xml.sax.ContentHandler
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 */
- (void)ignorableWhitespaceWithCharArray:(IOSCharArray *)ch
                                 withInt:(jint)start
                                 withInt:(jint)length;

/*!
 @brief Test whether the _last_ endDocument() has been processed.
 This is needed as guidance for stylesheet optimization
  and compilation engines, which generally don't want to start
  until all included and imported stylesheets have been fully
  parsed.
 @return true iff the complete stylesheet tree has been built.
 */
- (jboolean)isStylesheetParsingComplete;

/*!
 @brief Receive notification of a notation declaration.
 <p>By default, do nothing.  Application writers may override this
  method in a subclass if they wish to keep track of the notations
  declared in a document.</p>
 @param name The notation name.
 @param publicId The notation public identifier, or null if not                  available.
 @param systemId The notation system identifier.
 - seealso: org.xml.sax.DTDHandler
 */
- (void)notationDeclWithNSString:(NSString *)name
                    withNSString:(NSString *)publicId
                    withNSString:(NSString *)systemId;

/*!
 @brief Receive notification of a processing instruction.
 <p>The Parser will invoke this method once for each processing
  instruction found: note that processing instructions may occur
  before or after the main document element.</p>
  
 <p>A SAX parser should never report an XML declaration (XML 1.0,
  section 2.8) or a text declaration (XML 1.0, section 4.3.1)
  using this method.</p>
  
 <p>By default, do nothing.  Application writers may override this
  method in a subclass to take specific actions for each
  processing instruction, such as setting status variables or
  invoking other methods.</p>
 @param target The processing instruction target.
 @param data The processing instruction data, or null if              none is supplied.
 - seealso: org.xml.sax.ContentHandler
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 */
- (void)processingInstructionWithNSString:(NSString *)target
                             withNSString:(NSString *)data;

/*!
 @brief Push the current stylesheet being constructed.If no other stylesheets
  have been pushed onto the stack, assume the argument is a stylesheet
  root, and also set the stylesheet root member.
 @param s non-null reference to a stylesheet.
 */
- (void)pushStylesheetWithOrgApacheXalanTemplatesStylesheet:(OrgApacheXalanTemplatesStylesheet *)s;

/*!
 @brief Resolve an external entity.
 @param publicId The public identifer, or null if none is                  available.
 @param systemId The system identifier provided in the XML                  document.
 @return The new input source, or null to require the
          default behaviour.
 @throw org.xml.sax.SAXExceptionif the entity can not be resolved.
 */
- (OrgXmlSaxInputSource *)resolveEntityWithNSString:(NSString *)publicId
                                       withNSString:(NSString *)systemId;

/*!
 @brief Receive a Locator object for document events.
 This is called by the parser to push a locator for the
  stylesheet being parsed. The stack needs to be popped
  after the stylesheet has been parsed. We pop in
  popStylesheet.
 @param locator A locator for all SAX document events.
 - seealso: org.xml.sax.ContentHandler
 - seealso: org.xml.sax.Locator
 */
- (void)setDocumentLocatorWithOrgXmlSaxLocator:(id<OrgXmlSaxLocator>)locator;

/*!
 @brief Set the node that is originating the SAX event.
 @param n Reference to node that originated the current event.
 - seealso: org.apache.xml.utils.NodeConsumer
 */
- (void)setOriginatingNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)n;

/*!
 @brief Set the base ID (URL or system ID) for the stylesheet
  created by this builder.This must be set in order to
  resolve relative URLs in the stylesheet.
 @param baseID Base URL for this stylesheet.
 */
- (void)setSystemIdWithNSString:(NSString *)baseID;

/*!
 @brief Receive notification of a skipped entity.
 <p>By default, do nothing.  Application writers may override this
  method in a subclass to take specific actions for each
  processing instruction, such as setting status variables or
  invoking other methods.</p>
 @param name The name of the skipped entity.
 - seealso: org.xml.sax.ContentHandler
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 */
- (void)skippedEntityWithNSString:(NSString *)name;

/*!
 @brief Receive notification of the beginning of the document.
 - seealso: org.xml.sax.ContentHandler
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 */
- (void)startDocument;

/*!
 @brief Receive notification of the start of an element.
 @param uri The Namespace URI, or an empty string.
 @param localName The local name (without prefix), or empty string if not namespace processing.
 @param rawName The qualified name (with prefix).
 @param attributes The specified or defaulted attributes.
 @throw org.xml.sax.SAXException
 */
- (void)startElementWithNSString:(NSString *)uri
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)rawName
         withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)attributes;

/*!
 @brief Receive notification of the start of a Namespace mapping.
 <p>By default, do nothing.  Application writers may override this
  method in a subclass to take specific actions at the start of
  each element (such as allocating a new tree node or writing
  output to a file).</p>
 @param prefix The Namespace prefix being declared.
 @param uri The Namespace URI mapped to the prefix.
 - seealso: org.xml.sax.ContentHandler
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 */
- (void)startPrefixMappingWithNSString:(NSString *)prefix
                          withNSString:(NSString *)uri;

/*!
 @brief Receive notification of an unparsed entity declaration.
 @param name The entity name.
 @param publicId The entity public identifier, or null if not                  available.
 @param systemId The entity system identifier.
 @param notationName The name of the associated notation.
 - seealso: org.xml.sax.DTDHandler
 */
- (void)unparsedEntityDeclWithNSString:(NSString *)name
                          withNSString:(NSString *)publicId
                          withNSString:(NSString *)systemId
                          withNSString:(NSString *)notationName;

/*!
 @brief Warn the user of an problem.
 @param msg An key into the <code>org.apache.xalan.res.XSLTErrorResources</code>  table, that is one of the WG_ prefixed definitions.
 @param args An array of arguments for the given warning.
 @throw org.xml.sax.SAXExceptionthat wraps a 
 <code>javax.xml.transform.TransformerException</code> if the current 
 <code>javax.xml.transform.ErrorListener</code>
  method chooses to flag this condition as an error.
 */
- (void)warnWithNSString:(NSString *)msg
       withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief Receive notification of a XSLT processing warning.
 @param e The warning information encoded as an exception.
 @throw org.xml.sax.SAXExceptionthat wraps a 
 <code>javax.xml.transform.TransformerException</code> if the current 
 <code>javax.xml.transform.ErrorListener</code>
  method chooses to flag this condition as an error.
 */
- (void)warningWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)e;

#pragma mark Protected

/*!
 @brief Tell the user of an error, and probably throw an
  exception.
 @param msg An error message.
 @param e An error which the SAXException should wrap.
 @throw org.xml.sax.SAXExceptionthat wraps a 
 <code>javax.xml.transform.TransformerException</code> if the current 
 <code>javax.xml.transform.ErrorListener</code>
  method chooses to flag this condition as an error.
 */
- (void)errorWithNSString:(NSString *)msg
    withJavaLangException:(JavaLangException *)e;

/*!
 @brief Tell the user of an error, and probably throw an
  exception.
 @param msg A key into the <code>org.apache.xalan.res.XSLTErrorResources</code>  table, that is one of the WG_ prefixed definitions.
 @param args An array of arguments for the given warning.
 @param e An error which the SAXException should wrap.
 @throw org.xml.sax.SAXExceptionthat wraps a 
 <code>javax.xml.transform.TransformerException</code> if the current 
 <code>javax.xml.transform.ErrorListener</code>
  method chooses to flag this condition as an error.
 */
- (void)errorWithNSString:(NSString *)msg
        withNSObjectArray:(IOSObjectArray *)args
    withJavaLangException:(JavaLangException *)e;

#pragma mark Package-Private

/*!
 @brief Process an expression string into an XPath.
 @param str A non-null reference to a valid or invalid match pattern string.
 @return A non-null reference to an XPath object that represents the string argument.
 @throw javax.xml.transform.TransformerExceptionif the pattern can not be processed.
 - seealso: <a href="http://www.w3.org/TR/xslt#patterns">Section 5.2 Patterns in XSLT Specification</a>
 */
- (OrgApacheXpathXPath *)createMatchPatternXPathWithNSString:(NSString *)str
              withOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)owningTemplate;

/*!
 @brief Get the current XSLTElementProcessor at the top of the stack.
 @return Valid XSLTElementProcessor, which should never be null.
 */
- (OrgApacheXalanProcessorXSLTElementProcessor *)getCurrentProcessor;

/*!
 @brief Get the current ElemTemplateElement at the top of the stack.
 @return Valid ElemTemplateElement, which may be null.
 */
- (OrgApacheXalanTemplatesElemTemplateElement *)getElemTemplateElement;

/*!
 @brief Return the last stylesheet that was popped off the stylesheets stack.
 @return The last popped stylesheet, or null.
 */
- (OrgApacheXalanTemplatesStylesheet *)getLastPoppedStylesheet;

/*!
 @brief Get the current NamespaceSupport object.
 @return a non-null reference to the current NamespaceSupport object,
  which is the top of the namespace support stack.
 */
- (OrgXmlSaxHelpersNamespaceSupport *)getNamespaceSupport;

/*!
 @brief Given a namespace URI, and a local name or a node type, get the processor
  for the element, or return null if not allowed.
 @param uri The Namespace URI, or an empty string.
 @param localName The local name (without prefix), or empty string if not namespace processing.
 @param rawName The qualified name (with prefix).
 @return A non-null reference to a element processor.
 @throw org.xml.sax.SAXExceptionif the element is not allowed in the
  found position in the stylesheet.
 */
- (OrgApacheXalanProcessorXSLTElementProcessor *)getProcessorForWithNSString:(NSString *)uri
                                                                withNSString:(NSString *)localName
                                                                withNSString:(NSString *)rawName;

/*!
 @brief Return the stylesheet that this handler is constructing.
 @return The current stylesheet that is on top of the stylesheets stack,
   or null if no stylesheet is on the stylesheets stack.
 */
- (OrgApacheXalanTemplatesStylesheet *)getStylesheet;

/*!
 @brief Get the type of stylesheet that should be built
  or is being processed.
 @return one of STYPE_ROOT, STYPE_INCLUDE, or STYPE_IMPORT.
 */
- (jint)getStylesheetType;

/*!
 @brief See if the imported stylesheet stack already contains
  the given URL.Used to test for recursive imports.
 @param hrefUrl non-null reference to a URL string.
 @return true if the URL is on the import stack.
 */
- (jboolean)importStackContainsWithNSString:(NSString *)hrefUrl;

/*!
 @brief Do common initialization.
 @param processor non-null reference to the transformer factory that owns this handler.
 */
- (void)init__WithOrgApacheXalanProcessorTransformerFactoryImpl:(OrgApacheXalanProcessorTransformerFactoryImpl *)processor OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Return boolean value from the spacePreserve stack depending on the value 
  of xml:space=default/preserve.
 @return true if space should be preserved, false otherwise.
 */
- (jboolean)isSpacePreserve;

/*!
 @brief Returns the next m_docOrderCount number and increments the number for future use.
 */
- (jint)nextUid;

- (NSString *)peekImportURL;

- (id<JavaxXmlTransformSource>)peekSourceFromURIResolver;

/*!
 @brief Pop a base URI from the stack.
 @return baseIdentifier.
 */
- (NSString *)popBaseIndentifier;

/*!
 @brief Get the current XSLTElementProcessor from the top of the stack.
 @return the ElemTemplateElement which was popped.
 */
- (OrgApacheXalanTemplatesElemTemplateElement *)popElemTemplateElement;

/*!
 @brief Pop a Source from a user provided URIResolver, corresponding
  to the URL popped from the m_importStack.
 */
- (id<JavaxXmlTransformSource>)popImportSource;

/*!
 @brief Pop an import href from the stylesheet stack.
 @return non-null reference to the import URL that was popped.
 */
- (NSString *)popImportURL;

/*!
 @brief Pop the current NamespaceSupport object.
 */
- (void)popNamespaceSupport;

/*!
 @brief Pop the current XSLTElementProcessor from the top of the stack.
 @return the XSLTElementProcessor which was popped.
 */
- (OrgApacheXalanProcessorXSLTElementProcessor *)popProcessor;

/*!
 @brief Pop boolean value from the spacePreserve stack.
 */
- (void)popSpaceHandling;

/*!
 @brief Pop the last stylesheet pushed, and return the stylesheet that this
  handler is constructing, and set the last popped stylesheet member.
 Also pop the stylesheet locator stack.
 @return The stylesheet popped off the stack, or the last popped stylesheet.
 */
- (OrgApacheXalanTemplatesStylesheet *)popStylesheet;

/*!
 @brief Push a base identifier onto the base URI stack.
 @param baseID The current base identifier for this position in the  stylesheet, which may be a fragment identifier, or which may be null.
 - seealso: <a href="http://www.w3.org/TR/xslt#base-uri">
  Section 3.2 Base URI of XSLT specification.</a>
 */
- (void)pushBaseIndentifierWithNSString:(NSString *)baseID;

/*!
 @brief Push the current XSLTElementProcessor to the top of the stack.As a
  side-effect, set the document order index (simply because this is a
  convenient place to set it).
 @param elem Should be a non-null reference to the intended current  template element.
 */
- (void)pushElemTemplateElementWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)elem;

/*!
 @brief Push the Source of an import href onto the stylesheet stack,
  obtained from a URIResolver, null if there is no URIResolver,
  or if that resolver returned null.
 */
- (void)pushImportSourceWithJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)sourceFromURIResolver;

/*!
 @brief Push an import href onto the stylesheet stack.
 @param hrefUrl non-null reference to the URL for the current imported  stylesheet.
 */
- (void)pushImportURLWithNSString:(NSString *)hrefUrl;

/*!
 @brief Push a new NamespaceSupport instance.
 */
- (void)pushNewNamespaceSupport;

/*!
 @brief Push the current XSLTElementProcessor onto the top of the stack.
 @param processor non-null reference to the current element processor.
 */
- (void)pushProcessorWithOrgApacheXalanProcessorXSLTElementProcessor:(OrgApacheXalanProcessorXSLTElementProcessor *)processor;

/*!
 @brief Push boolean value on to the spacePreserve stack depending on the value 
  of xml:space=default/preserve.
 @param attrs list of attributes that were passed to startElement.
 */
- (void)pushSpaceHandlingWithOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)attrs;

/*!
 @brief Push boolean value on to the spacePreserve stack.
 @param b true if space should be preserved, false otherwise.
 */
- (void)pushSpaceHandlingWithBoolean:(jboolean)b;

/*!
 @brief Set the type of stylesheet that should be built
  or is being processed.
 @param type Must be one of STYPE_ROOT, STYPE_INCLUDE, or STYPE_IMPORT.
 */
- (void)setStylesheetTypeWithInt:(jint)type;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanProcessorStylesheetHandler)

J2OBJC_FIELD_SETTER(OrgApacheXalanProcessorStylesheetHandler, m_stylesheetRoot_, OrgApacheXalanTemplatesStylesheetRoot *)
J2OBJC_FIELD_SETTER(OrgApacheXalanProcessorStylesheetHandler, m_lastPoppedStylesheet_, OrgApacheXalanTemplatesStylesheet *)
J2OBJC_FIELD_SETTER(OrgApacheXalanProcessorStylesheetHandler, m_baseIdentifiers_, JavaUtilStack *)
J2OBJC_FIELD_SETTER(OrgApacheXalanProcessorStylesheetHandler, m_nsSupportStack_, JavaUtilStack *)

/*!
 @brief If getStylesheetType returns this value, the current stylesheet
   is a root stylesheet.
 */
inline jint OrgApacheXalanProcessorStylesheetHandler_get_STYPE_ROOT(void);
#define OrgApacheXalanProcessorStylesheetHandler_STYPE_ROOT 1
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanProcessorStylesheetHandler, STYPE_ROOT, jint)

/*!
 @brief If getStylesheetType returns this value, the current stylesheet
   is an included stylesheet.
 */
inline jint OrgApacheXalanProcessorStylesheetHandler_get_STYPE_INCLUDE(void);
#define OrgApacheXalanProcessorStylesheetHandler_STYPE_INCLUDE 2
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanProcessorStylesheetHandler, STYPE_INCLUDE, jint)

/*!
 @brief If getStylesheetType returns this value, the current stylesheet
   is an imported stylesheet.
 */
inline jint OrgApacheXalanProcessorStylesheetHandler_get_STYPE_IMPORT(void);
#define OrgApacheXalanProcessorStylesheetHandler_STYPE_IMPORT 3
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanProcessorStylesheetHandler, STYPE_IMPORT, jint)

FOUNDATION_EXPORT void OrgApacheXalanProcessorStylesheetHandler_initWithOrgApacheXalanProcessorTransformerFactoryImpl_(OrgApacheXalanProcessorStylesheetHandler *self, OrgApacheXalanProcessorTransformerFactoryImpl *processor);

FOUNDATION_EXPORT OrgApacheXalanProcessorStylesheetHandler *new_OrgApacheXalanProcessorStylesheetHandler_initWithOrgApacheXalanProcessorTransformerFactoryImpl_(OrgApacheXalanProcessorTransformerFactoryImpl *processor) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanProcessorStylesheetHandler *create_OrgApacheXalanProcessorStylesheetHandler_initWithOrgApacheXalanProcessorTransformerFactoryImpl_(OrgApacheXalanProcessorTransformerFactoryImpl *processor);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanProcessorStylesheetHandler)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanProcessorStylesheetHandler")
