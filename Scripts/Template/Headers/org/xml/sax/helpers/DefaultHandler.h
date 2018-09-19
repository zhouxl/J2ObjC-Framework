//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/org/xml/sax/helpers/DefaultHandler.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgXmlSaxHelpersDefaultHandler")
#ifdef RESTRICT_OrgXmlSaxHelpersDefaultHandler
#define INCLUDE_ALL_OrgXmlSaxHelpersDefaultHandler 0
#else
#define INCLUDE_ALL_OrgXmlSaxHelpersDefaultHandler 1
#endif
#undef RESTRICT_OrgXmlSaxHelpersDefaultHandler

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgXmlSaxHelpersDefaultHandler_) && (INCLUDE_ALL_OrgXmlSaxHelpersDefaultHandler || defined(INCLUDE_OrgXmlSaxHelpersDefaultHandler))
#define OrgXmlSaxHelpersDefaultHandler_

#define RESTRICT_OrgXmlSaxEntityResolver 1
#define INCLUDE_OrgXmlSaxEntityResolver 1
#include "../../../../org/xml/sax/EntityResolver.h"

#define RESTRICT_OrgXmlSaxDTDHandler 1
#define INCLUDE_OrgXmlSaxDTDHandler 1
#include "../../../../org/xml/sax/DTDHandler.h"

#define RESTRICT_OrgXmlSaxContentHandler 1
#define INCLUDE_OrgXmlSaxContentHandler 1
#include "../../../../org/xml/sax/ContentHandler.h"

#define RESTRICT_OrgXmlSaxErrorHandler 1
#define INCLUDE_OrgXmlSaxErrorHandler 1
#include "../../../../org/xml/sax/ErrorHandler.h"

@class IOSCharArray;
@class OrgXmlSaxInputSource;
@class OrgXmlSaxSAXParseException;
@protocol OrgXmlSaxAttributes;
@protocol OrgXmlSaxLocator;

/*!
 @brief Default base class for SAX2 event handlers.
 <blockquote>
  <em>This module, both source code and documentation, is in the
  Public Domain, and comes with <strong>NO WARRANTY</strong>.</em>
  See <a href='http://www.saxproject.org'>http://www.saxproject.org</a>
  for further information. 
 </blockquote>
  
 <p>This class is available as a convenience base class for SAX2
  applications: it provides default implementations for all of the
  callbacks in the four core SAX2 handler classes:</p>
  
 <ul>
  <li><code>EntityResolver</code></li>
  <li><code>DTDHandler</code></li>
  <li><code>ContentHandler</code></li>
  <li><code>ErrorHandler</code></li>
  </ul>
  
 <p>Application writers can extend this class when they need to
  implement only part of an interface; parser writers can
  instantiate this class to provide default handlers when the
  application has not supplied its own.</p>
  
 <p>This class replaces the deprecated SAX1 
 <code>HandlerBase</code> class.</p>
 @since SAX 2.0
 @author David Megginson,
 @version 2.0.1 (sax2r2)
 - seealso: org.xml.sax.EntityResolver
 - seealso: org.xml.sax.DTDHandler
 - seealso: org.xml.sax.ContentHandler
 - seealso: org.xml.sax.ErrorHandler
 */
@interface OrgXmlSaxHelpersDefaultHandler : NSObject < OrgXmlSaxEntityResolver, OrgXmlSaxDTDHandler, OrgXmlSaxContentHandler, OrgXmlSaxErrorHandler >

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Receive notification of character data inside an element.
 <p>By default, do nothing.  Application writers may override this
  method to take specific actions for each chunk of character data
  (such as adding the data to a node or buffer, or printing it to
  a file).</p>
 @param ch The characters.
 @param start The start position in the character array.
 @param length The number of characters to use from the                character array.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: org.xml.sax.ContentHandler
 */
- (void)charactersWithCharArray:(IOSCharArray *)ch
                        withInt:(jint)start
                        withInt:(jint)length;

/*!
 @brief Receive notification of the end of the document.
 <p>By default, do nothing.  Application writers may override this
  method in a subclass to take specific actions at the end
  of a document (such as finalising a tree or closing an output
  file).</p>
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: org.xml.sax.ContentHandler
 */
- (void)endDocument;

/*!
 @brief Receive notification of the end of an element.
 <p>By default, do nothing.  Application writers may override this
  method in a subclass to take specific actions at the end of
  each element (such as finalising a tree node or writing
  output to a file).</p>
 @param uri The Namespace URI, or the empty string if the         element has no Namespace URI or if Namespace
          processing is not being performed.
 @param localName The local name (without prefix), or the         empty string if Namespace processing is not being
          performed.
 @param qName The qualified name (with prefix), or the         empty string if qualified names are not available.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: org.xml.sax.ContentHandler
 */
- (void)endElementWithNSString:(NSString *)uri
                  withNSString:(NSString *)localName
                  withNSString:(NSString *)qName;

/*!
 @brief Receive notification of the end of a Namespace mapping.
 <p>By default, do nothing.  Application writers may override this
  method in a subclass to take specific actions at the end of
  each prefix mapping.</p>
 @param prefix The Namespace prefix being declared.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: org.xml.sax.ContentHandler
 */
- (void)endPrefixMappingWithNSString:(NSString *)prefix;

/*!
 @brief Receive notification of a recoverable parser error.
 <p>The default implementation does nothing.  Application writers
  may override this method in a subclass to take specific actions
  for each error, such as inserting the message in a log file or
  printing it to the console.</p>
 @param e The warning information encoded as an exception.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: org.xml.sax.ErrorHandler
 - seealso: org.xml.sax.SAXParseException
 */
- (void)errorWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)e;

/*!
 @brief Report a fatal XML parsing error.
 <p>The default implementation throws a SAXParseException.
  Application writers may override this method in a subclass if
  they need to take specific actions for each fatal error (such as
  collecting all of the errors into a single report): in any case,
  the application must stop all regular processing when this
  method is invoked, since the document is no longer reliable, and
  the parser may no longer report parsing events.</p>
 @param e The error information encoded as an exception.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: org.xml.sax.ErrorHandler
 - seealso: org.xml.sax.SAXParseException
 */
- (void)fatalErrorWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)e;

/*!
 @brief Receive notification of ignorable whitespace in element content.
 <p>By default, do nothing.  Application writers may override this
  method to take specific actions for each chunk of ignorable
  whitespace (such as adding data to a node or buffer, or printing
  it to a file).</p>
 @param ch The whitespace characters.
 @param start The start position in the character array.
 @param length The number of characters to use from the                character array.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: org.xml.sax.ContentHandler
 */
- (void)ignorableWhitespaceWithCharArray:(IOSCharArray *)ch
                                 withInt:(jint)start
                                 withInt:(jint)length;

/*!
 @brief Receive notification of a notation declaration.
 <p>By default, do nothing.  Application writers may override this
  method in a subclass if they wish to keep track of the notations
  declared in a document.</p>
 @param name The notation name.
 @param publicId The notation public identifier, or null if not                  available.
 @param systemId The notation system identifier.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: org.xml.sax.DTDHandler
 */
- (void)notationDeclWithNSString:(NSString *)name
                    withNSString:(NSString *)publicId
                    withNSString:(NSString *)systemId;

/*!
 @brief Receive notification of a processing instruction.
 <p>By default, do nothing.  Application writers may override this
  method in a subclass to take specific actions for each
  processing instruction, such as setting status variables or
  invoking other methods.</p>
 @param target The processing instruction target.
 @param data The processing instruction data, or null if              none is supplied.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: org.xml.sax.ContentHandler
 */
- (void)processingInstructionWithNSString:(NSString *)target
                             withNSString:(NSString *)data;

/*!
 @brief Resolve an external entity.
 <p>Always return null, so that the parser will use the system
  identifier provided in the XML document.  This method implements
  the SAX default behaviour: application writers can override it
  in a subclass to do special translations such as catalog lookups
  or URI redirection.</p>
 @param publicId The public identifer, or null if none is                  available.
 @param systemId The system identifier provided in the XML                  document.
 @return The new input source, or null to require the
          default behaviour.
 @throw java.io.IOExceptionIf there is an error setting
             up the new input source.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: org.xml.sax.EntityResolver
 */
- (OrgXmlSaxInputSource *)resolveEntityWithNSString:(NSString *)publicId
                                       withNSString:(NSString *)systemId;

/*!
 @brief Receive a Locator object for document events.
 <p>By default, do nothing.  Application writers may override this
  method in a subclass if they wish to store the locator for use
  with other document events.</p>
 @param locator A locator for all SAX document events.
 - seealso: org.xml.sax.ContentHandler
 - seealso: org.xml.sax.Locator
 */
- (void)setDocumentLocatorWithOrgXmlSaxLocator:(id<OrgXmlSaxLocator>)locator;

/*!
 @brief Receive notification of a skipped entity.
 <p>By default, do nothing.  Application writers may override this
  method in a subclass to take specific actions for each
  processing instruction, such as setting status variables or
  invoking other methods.</p>
 @param name The name of the skipped entity.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: org.xml.sax.ContentHandler
 */
- (void)skippedEntityWithNSString:(NSString *)name;

/*!
 @brief Receive notification of the beginning of the document.
 <p>By default, do nothing.  Application writers may override this
  method in a subclass to take specific actions at the beginning
  of a document (such as allocating the root node of a tree or
  creating an output file).</p>
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: org.xml.sax.ContentHandler
 */
- (void)startDocument;

/*!
 @brief Receive notification of the start of an element.
 <p>By default, do nothing.  Application writers may override this
  method in a subclass to take specific actions at the start of
  each element (such as allocating a new tree node or writing
  output to a file).</p>
 @param uri The Namespace URI, or the empty string if the         element has no Namespace URI or if Namespace
          processing is not being performed.
 @param localName The local name (without prefix), or the         empty string if Namespace processing is not being
          performed.
 @param qName The qualified name (with prefix), or the         empty string if qualified names are not available.
 @param attributes The attributes attached to the element.  If         there are no attributes, it shall be an empty
          Attributes object.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: org.xml.sax.ContentHandler
 */
- (void)startElementWithNSString:(NSString *)uri
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)qName
         withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)attributes;

/*!
 @brief Receive notification of the start of a Namespace mapping.
 <p>By default, do nothing.  Application writers may override this
  method in a subclass to take specific actions at the start of
  each Namespace prefix scope (such as storing the prefix mapping).</p>
 @param prefix The Namespace prefix being declared.
 @param uri The Namespace URI mapped to the prefix.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: org.xml.sax.ContentHandler
 */
- (void)startPrefixMappingWithNSString:(NSString *)prefix
                          withNSString:(NSString *)uri;

/*!
 @brief Receive notification of an unparsed entity declaration.
 <p>By default, do nothing.  Application writers may override this
  method in a subclass to keep track of the unparsed entities
  declared in a document.</p>
 @param name The entity name.
 @param publicId The entity public identifier, or null if not                  available.
 @param systemId The entity system identifier.
 @param notationName The name of the associated notation.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: org.xml.sax.DTDHandler
 */
- (void)unparsedEntityDeclWithNSString:(NSString *)name
                          withNSString:(NSString *)publicId
                          withNSString:(NSString *)systemId
                          withNSString:(NSString *)notationName;

/*!
 @brief Receive notification of a parser warning.
 <p>The default implementation does nothing.  Application writers
  may override this method in a subclass to take specific actions
  for each warning, such as inserting the message in a log file or
  printing it to the console.</p>
 @param e The warning information encoded as an exception.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: org.xml.sax.ErrorHandler
 - seealso: org.xml.sax.SAXParseException
 */
- (void)warningWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)e;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxHelpersDefaultHandler)

FOUNDATION_EXPORT void OrgXmlSaxHelpersDefaultHandler_init(OrgXmlSaxHelpersDefaultHandler *self);

FOUNDATION_EXPORT OrgXmlSaxHelpersDefaultHandler *new_OrgXmlSaxHelpersDefaultHandler_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlSaxHelpersDefaultHandler *create_OrgXmlSaxHelpersDefaultHandler_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxHelpersDefaultHandler)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgXmlSaxHelpersDefaultHandler")
