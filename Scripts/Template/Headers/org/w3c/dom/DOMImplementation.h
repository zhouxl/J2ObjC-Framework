//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/w3c/dom/DOMImplementation.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgW3cDomDOMImplementation")
#ifdef RESTRICT_OrgW3cDomDOMImplementation
#define INCLUDE_ALL_OrgW3cDomDOMImplementation 0
#else
#define INCLUDE_ALL_OrgW3cDomDOMImplementation 1
#endif
#undef RESTRICT_OrgW3cDomDOMImplementation

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgW3cDomDOMImplementation_) && (INCLUDE_ALL_OrgW3cDomDOMImplementation || defined(INCLUDE_OrgW3cDomDOMImplementation))
#define OrgW3cDomDOMImplementation_

@protocol OrgW3cDomDocument;
@protocol OrgW3cDomDocumentType;

/*!
 @brief The <code>DOMImplementation</code> interface provides a number of methods
  for performing operations that are independent of any particular instance
  of the document object model.
 <p>See also the <a href='http://www.w3.org/TR/2004/REC-DOM-Level-3-Core-20040407'>Document Object Model (DOM) Level 3 Core Specification</a>.
 */
@protocol OrgW3cDomDOMImplementation < JavaObject >

/*!
 @brief Test if the DOM implementation implements a specific feature and
  version, as specified in .
 @param feature The name of the feature to test.
 @param version_ This is the version number of the feature to test.
 @return <code>true</code> if the feature is implemented in the
    specified version, <code>false</code> otherwise.
 */
- (jboolean)hasFeatureWithNSString:(NSString *)feature
                      withNSString:(NSString *)version_;

/*!
 @brief Creates an empty <code>DocumentType</code> node.Entity declarations
  and notations are not made available.
 Entity reference expansions and
  default attribute additions do not occur..
 @param qualifiedName The qualified name of the document type to be    created.
 @param publicId The external subset public identifier.
 @param systemId The external subset system identifier.
 @return A new <code>DocumentType</code> node with
    <code>Node.ownerDocument</code> set to <code>null</code>.
 @throw DOMException
 INVALID_CHARACTER_ERR: Raised if the specified qualified name is not
    an XML name according to [<a href='http://www.w3.org/TR/2004/REC-xml-20040204'>XML 1.0</a>].
    <br>NAMESPACE_ERR: Raised if the <code>qualifiedName</code> is
    malformed.   
 <br>NOT_SUPPORTED_ERR: May be raised if the implementation does not
    support the feature "XML" and the language exposed through the
    Document does not support XML Namespaces (such as [<a href='http://www.w3.org/TR/1999/REC-html401-19991224/'>HTML 4.01</a>]).
 @since DOM Level 2
 */
- (id<OrgW3cDomDocumentType>)createDocumentTypeWithNSString:(NSString *)qualifiedName
                                               withNSString:(NSString *)publicId
                                               withNSString:(NSString *)systemId;

/*!
 @brief Creates a DOM Document object of the specified type with its document
  element.
 <br>Note that based on the <code>DocumentType</code> given to create
  the document, the implementation may instantiate specialized 
 <code>Document</code> objects that support additional features than
  the "Core", such as "HTML" [<a href='http://www.w3.org/TR/2003/REC-DOM-Level-2-HTML-20030109'>DOM Level 2 HTML</a>]
  . On the other hand, setting the <code>DocumentType</code> after the
  document was created makes this very unlikely to happen.
  Alternatively, specialized <code>Document</code> creation methods,
  such as <code>createHTMLDocument</code> [<a href='http://www.w3.org/TR/2003/REC-DOM-Level-2-HTML-20030109'>DOM Level 2 HTML</a>]
  , can be used to obtain specific types of <code>Document</code>
  objects.
 @param namespaceURI The namespace URI of the document element to    create or 
  <code> null </code> .
 @param qualifiedName The qualified name of the document element to be    created or 
  <code> null </code> .
 @param doctype The type of document to be created or  <code> null </code>
  .    When  <code> doctype </code>  is not  <code> null </code> , its
      <code> Node.ownerDocument </code>  attribute is set to the document
     being created.
 @return A new <code>Document</code> object with its document element.
    If the <code>NamespaceURI</code>, <code>qualifiedName</code>, and
    <code>doctype</code> are <code>null</code>, the returned
    <code>Document</code> is empty with no document element.
 @throw DOMException
 INVALID_CHARACTER_ERR: Raised if the specified qualified name is not
    an XML name according to [<a href='http://www.w3.org/TR/2004/REC-xml-20040204'>XML 1.0</a>].
    <br>NAMESPACE_ERR: Raised if the <code>qualifiedName</code> is
    malformed, if the <code>qualifiedName</code> has a prefix and the
    <code>namespaceURI</code> is <code>null</code>, or if the
    <code>qualifiedName</code> is <code>null</code> and the
    <code>namespaceURI</code> is different from <code>null</code>, or
    if the <code>qualifiedName</code> has a prefix that is "xml" and
    the <code>namespaceURI</code> is different from "<a href='http://www.w3.org/XML/1998/namespace'>
    http://www.w3.org/XML/1998/namespace</a>" [<a href='http://www.w3.org/TR/1999/REC-xml-names-19990114/'>XML Namespaces</a>]
    , or if the DOM implementation does not support the   
 <code>"XML"</code> feature but a non-null namespace URI was
    provided, since namespaces were defined by XML.   
 <br>WRONG_DOCUMENT_ERR: Raised if <code>doctype</code> has already
    been used with a different document or was created from a different
    implementation.   
 <br>NOT_SUPPORTED_ERR: May be raised if the implementation does not
    support the feature "XML" and the language exposed through the
    Document does not support XML Namespaces (such as [<a href='http://www.w3.org/TR/1999/REC-html401-19991224/'>HTML 4.01</a>]).
 @since DOM Level 2
 */
- (id<OrgW3cDomDocument>)createDocumentWithNSString:(NSString *)namespaceURI
                                       withNSString:(NSString *)qualifiedName
                          withOrgW3cDomDocumentType:(id<OrgW3cDomDocumentType>)doctype;

/*!
 @brief This method returns a specialized object which implements the
  specialized APIs of the specified feature and version, as specified
  in .The specialized object may also be obtained by using
  binding-specific casting methods but is not necessarily expected to,
  as discussed in .
 This method also allow the implementation to
  provide specialized objects which do not support the 
 <code>DOMImplementation</code> interface.
 @param feature The name of the feature requested. Note that any plus    sign "+" prepended to the name of the feature will be ignored since
     it is not significant in the context of this method.
 @param version_ This is the version number of the feature to test.
 @return Returns an object which implements the specialized APIs of
    the specified feature and version, if any, or <code>null</code> if
    there is no object which implements interfaces associated with that
    feature. If the <code>DOMObject</code> returned by this method
    implements the <code>DOMImplementation</code> interface, it must
    delegate to the primary core <code>DOMImplementation</code> and not
    return results inconsistent with the primary core   
 <code>DOMImplementation</code> such as <code>hasFeature</code>,
    <code>getFeature</code>, etc.
 @since DOM Level 3
 */
- (id)getFeatureWithNSString:(NSString *)feature
                withNSString:(NSString *)version_;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomDOMImplementation)

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomDOMImplementation)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgW3cDomDOMImplementation")
