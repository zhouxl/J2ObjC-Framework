//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/ToTextStream.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerToTextStream")
#ifdef RESTRICT_OrgApacheXmlSerializerToTextStream
#define INCLUDE_ALL_OrgApacheXmlSerializerToTextStream 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerToTextStream 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerToTextStream

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlSerializerToTextStream_) && (INCLUDE_ALL_OrgApacheXmlSerializerToTextStream || defined(INCLUDE_OrgApacheXmlSerializerToTextStream))
#define OrgApacheXmlSerializerToTextStream_

#define RESTRICT_OrgApacheXmlSerializerToStream 1
#define INCLUDE_OrgApacheXmlSerializerToStream 1
#include "../../../../org/apache/xml/serializer/ToStream.h"

@class IOSCharArray;
@protocol OrgXmlSaxAttributes;

/*!
 @brief This class is not a public API.
 It is only public because it is used in other packages. 
  This class converts SAX or SAX-like calls to a 
  serialized document for xsl:output method of "text".
 */
@interface OrgApacheXmlSerializerToTextStream : OrgApacheXmlSerializerToStream

#pragma mark Public

/*!
 @brief Default constructor.
 */
- (instancetype __nonnull)init;

/*!
 @brief From XSLTC
 */
- (void)addAttributeWithNSString:(NSString *)name
                    withNSString:(NSString *)value;

/*!
 - seealso: ExtendedContentHandler#addAttribute(String, String, String, String, String)
 */
- (void)addAttributeWithNSString:(NSString *)uri
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)rawName
                    withNSString:(NSString *)type
                    withNSString:(NSString *)value
                     withBoolean:(jboolean)XSLAttribute;

/*!
 @brief Add a unique attribute
 */
- (void)addUniqueAttributeWithNSString:(NSString *)qName
                          withNSString:(NSString *)value
                               withInt:(jint)flags;

/*!
 @brief Receive notification of cdata.
 <p>The Parser will call this method to report each chunk of
  character data.  SAX parsers may return all contiguous character
  data in a single chunk, or they may split it into several
  chunks; however, all of the characters in any single event
  must come from the same external entity, so that the Locator
  provides useful information.</p>
  
 <p>The application must not attempt to read from the array
  outside of the specified range.</p>
  
 <p>Note that some parsers will report whitespace using the
  ignorableWhitespace() method rather than this one (validating
  parsers must do so).</p>
 @param ch The characters from the XML document.
 @param start The start position in the array.
 @param length The number of characters to read from the array.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: #ignorableWhitespace
 - seealso: org.xml.sax.Locator
 */
- (void)cdataWithCharArray:(IOSCharArray *)ch
                   withInt:(jint)start
                   withInt:(jint)length;

/*!
 @brief Receive notification of character data.
 <p>The Parser will call this method to report each chunk of
  character data.  SAX parsers may return all contiguous character
  data in a single chunk, or they may split it into several
  chunks; however, all of the characters in any single event
  must come from the same external entity, so that the Locator
  provides useful information.</p>
  
 <p>The application must not attempt to read from the array
  outside of the specified range.</p>
  
 <p>Note that some parsers will report whitespace using the
  ignorableWhitespace() method rather than this one (validating
  parsers must do so).</p>
 @param ch The characters from the XML document.
 @param start The start position in the array.
 @param length The number of characters to read from the array.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: #ignorableWhitespace
 - seealso: org.xml.sax.Locator
 */
- (void)charactersWithCharArray:(IOSCharArray *)ch
                        withInt:(jint)start
                        withInt:(jint)length;

/*!
 @brief From XSLTC
 */
- (void)charactersWithNSString:(NSString *)characters;

/*!
 @brief If available, when the disable-output-escaping attribute is used,
  output raw text without escaping.
 @param ch The characters from the XML document.
 @param start The start position in the array.
 @param length The number of characters to read from the array.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 */
- (void)charactersRawWithCharArray:(IOSCharArray *)ch
                           withInt:(jint)start
                           withInt:(jint)length;

/*!
 @brief Report an XML comment anywhere in the document.
 This callback will be used for comments inside or outside the
  document element, including comments in the external DTD
  subset (if read).
 @param ch An array holding the characters in the comment.
 @param start The starting position in the array.
 @param length The number of characters to use from the array.
 @throw org.xml.sax.SAXExceptionThe application may raise an exception.
 */
- (void)commentWithCharArray:(IOSCharArray *)ch
                     withInt:(jint)start
                     withInt:(jint)length;

/*!
 @brief Called when a Comment is to be constructed.
 Note that Xalan will normally invoke the other version of this method.
  %REVIEW% In fact, is this one ever needed, or was it a mistake?
 @param data The comment data.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 */
- (void)commentWithNSString:(NSString *)data;

/*!
 - seealso: org.xml.sax.ext.LexicalHandler
 */
- (void)endCDATA;

/*!
 @brief Receive notification of the end of a document.
 <p>The SAX parser will invoke this method only once, and it will
  be the last method invoked during the parse.  The parser shall
  not invoke this method until it has either abandoned parsing
  (because of an unrecoverable error) or reached the end of
  input.</p>
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 @throw org.xml.sax.SAXException
 */
- (void)endDocument;

/*!
 - seealso: ExtendedContentHandler#endElement(String)
 */
- (void)endElementWithNSString:(NSString *)elemName;

/*!
 @brief Receive notification of the end of an element.
 <p>The SAX parser will invoke this method at the end of every
  element in the XML document; there will be a corresponding
  startElement() event for every endElement() event (even when the
  element is empty).</p>
  
 <p>If the element name has a namespace prefix, the prefix will
  still be attached to the name.</p>
 @param namespaceURI The Namespace URI, or the empty string if the         element has no Namespace URI or if Namespace
          processing is not being performed.
 @param localName The local name (without prefix), or the         empty string if Namespace processing is not being
          performed.
 @param name The qualified name (with prefix), or the         empty string if qualified names are not available.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 @throw org.xml.sax.SAXException
 */
- (void)endElementWithNSString:(NSString *)namespaceURI
                  withNSString:(NSString *)localName
                  withNSString:(NSString *)name;

/*!
 @brief Receive notivication of a entityReference.
 @param name non-null reference to the name of the entity.
 @throw org.xml.sax.SAXException
 */
- (void)entityReferenceWithNSString:(NSString *)name;

- (void)flushPending;

/*!
 @brief Receive notification of ignorable whitespace in element content.
 <p>Validating Parsers must use this method to report each chunk
  of ignorable whitespace (see the W3C XML 1.0 recommendation,
  section 2.10): non-validating parsers may also use this method
  if they are capable of parsing and using content models.</p>
  
 <p>SAX parsers may return all contiguous whitespace in a single
  chunk, or they may split it into several chunks; however, all of
  the characters in any single event must come from the same
  external entity, so that the Locator provides useful
  information.</p>
  
 <p>The application must not attempt to read from the array
  outside of the specified range.</p>
 @param ch The characters from the XML document.
 @param start The start position in the array.
 @param length The number of characters to read from the array.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: #characters
 @throw org.xml.sax.SAXException
 */
- (void)ignorableWhitespaceWithCharArray:(IOSCharArray *)ch
                                 withInt:(jint)start
                                 withInt:(jint)length;

- (void)namespaceAfterStartElementWithNSString:(NSString *)prefix
                                  withNSString:(NSString *)uri;

/*!
 @brief Receive notification of a processing instruction.
 <p>The Parser will invoke this method once for each processing
  instruction found: note that processing instructions may occur
  before or after the main document element.</p>
  
 <p>A SAX parser should never report an XML declaration (XML 1.0,
  section 2.8) or a text declaration (XML 1.0, section 4.3.1)
  using this method.</p>
 @param target The processing instruction target.
 @param data The processing instruction data, or null if         none was supplied.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 @throw org.xml.sax.SAXException
 */
- (void)processingInstructionWithNSString:(NSString *)target
                             withNSString:(NSString *)data;

/*!
 @brief From XSLTC
 */
- (void)startElementWithNSString:(NSString *)elementNamespaceURI
                    withNSString:(NSString *)elementLocalName
                    withNSString:(NSString *)elementName;

/*!
 @brief Receive notification of the beginning of an element.
 <p>The Parser will invoke this method at the beginning of every
  element in the XML document; there will be a corresponding
  endElement() event for every startElement() event (even when the
  element is empty). All of the element's content will be
  reported, in order, before the corresponding endElement()
  event.</p>
  
 <p>If the element name has a namespace prefix, the prefix will
  still be attached.  Note that the attribute list provided will
  contain only attributes with explicit values (specified or
  defaulted): #IMPLIED attributes will be omitted.</p>
 @param namespaceURI The Namespace URI, or the empty string if the         element has no Namespace URI or if Namespace
          processing is not being performed.
 @param localName The local name (without prefix), or the         empty string if Namespace processing is not being
          performed.
 @param name The qualified name (with prefix), or the         empty string if qualified names are not available.
 @param atts The attributes attached to the element, if any.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: #endElement
 - seealso: org.xml.sax.AttributeList
 @throw org.xml.sax.SAXException
 */
- (void)startElementWithNSString:(NSString *)namespaceURI
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)name
         withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)atts;

- (void)startPrefixMappingWithNSString:(NSString *)prefix
                          withNSString:(NSString *)uri;

- (jboolean)startPrefixMappingWithNSString:(NSString *)prefix
                              withNSString:(NSString *)uri
                               withBoolean:(jboolean)shouldFlush;

#pragma mark Protected

/*!
 @brief Receive notification of the beginning of a document.
 <p>The SAX parser will invoke this method only once, before any
  other methods in this interface or in DTDHandler (except for
  setDocumentLocator).</p>
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 @throw org.xml.sax.SAXException
 */
- (void)startDocumentInternal;

#pragma mark Package-Private

/*!
 @brief Normalize the characters, but don't escape.Different from 
  SerializerToXML#writeNormalizedChars because it does not attempt to do 
  XML escaping at all.
 @param ch The characters from the XML document.
 @param start The start position in the array.
 @param length The number of characters to read from the array.
 @param useLineSep true if the operating systems   end-of-line separator should be output rather than a new-line character.
 @throw IOException
 @throw org.xml.sax.SAXException
 */
- (void)writeNormalizedCharsWithCharArray:(IOSCharArray *)ch
                                  withInt:(jint)start
                                  withInt:(jint)length
                              withBoolean:(jboolean)useLineSep;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerToTextStream)

FOUNDATION_EXPORT void OrgApacheXmlSerializerToTextStream_init(OrgApacheXmlSerializerToTextStream *self);

FOUNDATION_EXPORT OrgApacheXmlSerializerToTextStream *new_OrgApacheXmlSerializerToTextStream_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerToTextStream *create_OrgApacheXmlSerializerToTextStream_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerToTextStream)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerToTextStream")
