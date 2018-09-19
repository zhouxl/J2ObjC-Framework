//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/w3c/dom/ls/LSOutput.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgW3cDomLsLSOutput")
#ifdef RESTRICT_OrgW3cDomLsLSOutput
#define INCLUDE_ALL_OrgW3cDomLsLSOutput 0
#else
#define INCLUDE_ALL_OrgW3cDomLsLSOutput 1
#endif
#undef RESTRICT_OrgW3cDomLsLSOutput

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgW3cDomLsLSOutput_) && (INCLUDE_ALL_OrgW3cDomLsLSOutput || defined(INCLUDE_OrgW3cDomLsLSOutput))
#define OrgW3cDomLsLSOutput_

@class JavaIoOutputStream;
@class JavaIoWriter;

/*!
 @brief This interface represents an output destination for data.
 <p> This interface allows an application to encapsulate information about
  an output destination in a single object, which may include a URI, a byte
  stream (possibly with a specified encoding), a base URI, and/or a
  character stream. 
 <p> The exact definitions of a byte stream and a character stream are
  binding dependent. 
 <p> The application is expected to provide objects that implement this
  interface whenever such objects are needed. The application can either
  provide its own objects that implement this interface, or it can use the
  generic factory method <code>DOMImplementationLS.createLSOutput()</code>
  to create objects that implement this interface. 
 <p> The <code>LSSerializer</code> will use the <code>LSOutput</code> object
  to determine where to serialize the output to. The 
 <code>LSSerializer</code> will look at the different outputs specified in the 
 <code>LSOutput</code> in the following order to know which one to
  output to, the first one that is not null and not an empty string will be
  used: 
 <ol>
  <li> <code>LSOutput.characterStream</code>
  </li>
  <li>
  <code>LSOutput.byteStream</code>
  </li>
  <li> <code>LSOutput.systemId</code>
  </li>
  </ol>
  <p> <code>LSOutput</code> objects belong to the application. The DOM
  implementation will never modify them (though it may make copies and
  modify the copies, if necessary). 
 <p>See also the <a href='http://www.w3.org/TR/2004/REC-DOM-Level-3-LS-20040407'>Document Object Model (DOM) Level 3 Load
 and Save Specification</a>.
 */
@protocol OrgW3cDomLsLSOutput < JavaObject >

/*!
 @brief An attribute of a language and binding dependent type that represents
  a writable stream to which 16-bit units can be output.
 */
- (JavaIoWriter *)getCharacterStream;

/*!
 @brief An attribute of a language and binding dependent type that represents
  a writable stream to which 16-bit units can be output.
 */
- (void)setCharacterStreamWithJavaIoWriter:(JavaIoWriter *)characterStream;

/*!
 @brief An attribute of a language and binding dependent type that represents
  a writable stream of bytes.
 */
- (JavaIoOutputStream *)getByteStream;

/*!
 @brief An attribute of a language and binding dependent type that represents
  a writable stream of bytes.
 */
- (void)setByteStreamWithJavaIoOutputStream:(JavaIoOutputStream *)byteStream;

/*!
 @brief The system identifier, a URI reference [<a href='http://www.ietf.org/rfc/rfc2396.txt'>IETF RFC 2396</a>], for this
  output destination.
 <br> If the system ID is a relative URI reference (see section 5 in [<a href='http://www.ietf.org/rfc/rfc2396.txt'>IETF RFC 2396</a>]), the
  behavior is implementation dependent.
 */
- (NSString *)getSystemId;

/*!
 @brief The system identifier, a URI reference [<a href='http://www.ietf.org/rfc/rfc2396.txt'>IETF RFC 2396</a>], for this
  output destination.
 <br> If the system ID is a relative URI reference (see section 5 in [<a href='http://www.ietf.org/rfc/rfc2396.txt'>IETF RFC 2396</a>]), the
  behavior is implementation dependent.
 */
- (void)setSystemIdWithNSString:(NSString *)systemId;

/*!
 @brief The character encoding to use for the output.The encoding must be a
  string acceptable for an XML encoding declaration ([<a href='http://www.w3.org/TR/2004/REC-xml-20040204'>XML 1.0</a>] section
  4.3.3 "Character Encoding in Entities"), it is recommended that
  character encodings registered (as charsets) with the Internet
  Assigned Numbers Authority [<a href='ftp://ftp.isi.edu/in-notes/iana/assignments/character-sets'>IANA-CHARSETS</a>]
   should be referred to using their registered names.
 */
- (NSString *)getEncoding;

/*!
 @brief The character encoding to use for the output.The encoding must be a
  string acceptable for an XML encoding declaration ([<a href='http://www.w3.org/TR/2004/REC-xml-20040204'>XML 1.0</a>] section
  4.3.3 "Character Encoding in Entities"), it is recommended that
  character encodings registered (as charsets) with the Internet
  Assigned Numbers Authority [<a href='ftp://ftp.isi.edu/in-notes/iana/assignments/character-sets'>IANA-CHARSETS</a>]
   should be referred to using their registered names.
 */
- (void)setEncodingWithNSString:(NSString *)encoding;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomLsLSOutput)

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomLsLSOutput)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgW3cDomLsLSOutput")
