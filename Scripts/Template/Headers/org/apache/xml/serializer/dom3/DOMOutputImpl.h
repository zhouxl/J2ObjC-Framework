//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/dom3/DOMOutputImpl.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerDom3DOMOutputImpl")
#ifdef RESTRICT_OrgApacheXmlSerializerDom3DOMOutputImpl
#define INCLUDE_ALL_OrgApacheXmlSerializerDom3DOMOutputImpl 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerDom3DOMOutputImpl 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerDom3DOMOutputImpl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlSerializerDom3DOMOutputImpl_) && (INCLUDE_ALL_OrgApacheXmlSerializerDom3DOMOutputImpl || defined(INCLUDE_OrgApacheXmlSerializerDom3DOMOutputImpl))
#define OrgApacheXmlSerializerDom3DOMOutputImpl_

#define RESTRICT_OrgW3cDomLsLSOutput 1
#define INCLUDE_OrgW3cDomLsLSOutput 1
#include "../../../../../org/w3c/dom/ls/LSOutput.h"

@class JavaIoOutputStream;
@class JavaIoWriter;

/*!
 @brief This is a copy of the Xerces-2J class org.apache.xerces.dom.DOMOutputImpl.java 
  This class represents an output destination for data.
 This interface allows an application to encapsulate information about an
  output destination in a single object, which may include a URI, a byte stream
  (possibly with a specifiedencoding), a base URI, and/or a character stream.
  The exact definitions of a byte stream and a character stream are binding
  dependent.
  The application is expected to provide objects that implement this interface
  whenever such objects are needed. The application can either provide its
  own objects that implement this interface, or it can use the generic factory
  method DOMImplementationLS.createLSOutput() to create objects that
  implement this interface.
  The DOMSerializer will use the LSOutput object to determine where to
  serialize the output to. The DOMSerializer will look at the different
  outputs specified in the LSOutput in the following order to know which one
  to output to, the first one that data can be output to will be used:
  1.LSOutput.characterStream
  2.LSOutput.byteStream
  3.LSOutput.systemId
  LSOutput objects belong to the application. The DOM implementation will
  never modify them (though it may make copies and modify the copies,
  if necessary).
 @author Arun Yadav, Sun Microsytems
 @author Gopal Sharma, Sun Microsystems
 @version $Id :
 */
@interface OrgApacheXmlSerializerDom3DOMOutputImpl : NSObject < OrgW3cDomLsLSOutput >

#pragma mark Public

/*!
 @brief Depending on the language binding in use, this attribute may not be
  available.An attribute of a language and binding dependent type that
  represents a writable stream to which 16-bit units can be output.
 The
  application must encode the stream using UTF-16 (defined in [Unicode] and
   Amendment 1 of [ISO/IEC 10646]).
 */
- (JavaIoOutputStream *)getByteStream;

/*!
 @brief An attribute of a language and binding dependent type that represents a
  writable stream of bytes.If the application knows the character encoding
  of the byte stream, it should set the encoding attribute.
 Setting the
  encoding in this way will override any encoding specified in an XML
  declaration in the data.
 */
- (JavaIoWriter *)getCharacterStream;

/*!
 @brief The character encoding, if known.The encoding must be a string
  acceptable for an XML encoding declaration ([XML 1.0] section 4.3.3
  "Character Encoding in Entities").
 This attribute has no effect when the
  application provides a character stream or string data. For other sources
  of input, an encoding specified by means of this attribute will override
  any encoding specified in the XML declaration or the Text declaration, or
  an encoding obtained from a higher level protocol, such as HTTP
  [IETF RFC 2616].
 */
- (NSString *)getEncoding;

/*!
 @brief The system identifier, a URI reference [IETF RFC 2396], for this output
   destination.If the application knows the character encoding of the
   object pointed to by the system identifier, it can set the encoding
   using the encoding attribute.
 If the system ID is a relative URI
   reference (see section 5 in [IETF RFC 2396]), the behavior is
   implementation dependent.
 */
- (NSString *)getSystemId;

/*!
 @brief Depending on the language binding in use, this attribute may not be
  available.An attribute of a language and binding dependent type that
  represents a writable stream to which 16-bit units can be output.
 The
  application must encode the stream using UTF-16 (defined in [Unicode] and
   Amendment 1 of [ISO/IEC 10646]).
 */
- (void)setByteStreamWithJavaIoOutputStream:(JavaIoOutputStream *)byteStream;

/*!
 @brief An attribute of a language and binding dependent type that represents a
  writable stream of bytes.If the application knows the character encoding
  of the byte stream, it should set the encoding attribute.
 Setting the
  encoding in this way will override any encoding specified in an XML
  declaration in the data.
 */
- (void)setCharacterStreamWithJavaIoWriter:(JavaIoWriter *)characterStream;

/*!
 @brief The character encoding, if known.The encoding must be a string
  acceptable for an XML encoding declaration ([XML 1.0] section 4.3.3
  "Character Encoding in Entities").
 This attribute has no effect when the
  application provides a character stream or string data. For other sources
  of input, an encoding specified by means of this attribute will override
  any encoding specified in the XML declaration or the Text declaration, or
  an encoding obtained from a higher level protocol, such as HTTP
  [IETF RFC 2616].
 */
- (void)setEncodingWithNSString:(NSString *)encoding;

/*!
 @brief The system identifier, a URI reference [IETF RFC 2396], for this output
   destination.If the application knows the character encoding of the
   object pointed to by the system identifier, it can set the encoding
   using the encoding attribute.
 If the system ID is a relative URI
   reference (see section 5 in [IETF RFC 2396]), the behavior is
   implementation dependent.
 */
- (void)setSystemIdWithNSString:(NSString *)systemId;

#pragma mark Package-Private

/*!
 @brief Default Constructor
 */
- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerDom3DOMOutputImpl)

FOUNDATION_EXPORT void OrgApacheXmlSerializerDom3DOMOutputImpl_init(OrgApacheXmlSerializerDom3DOMOutputImpl *self);

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMOutputImpl *new_OrgApacheXmlSerializerDom3DOMOutputImpl_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMOutputImpl *create_OrgApacheXmlSerializerDom3DOMOutputImpl_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerDom3DOMOutputImpl)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerDom3DOMOutputImpl")
