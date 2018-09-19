//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/dtm/ref/dom2dtm/DOM2DTMdefaultNamespaceDeclarationNode.java
//

#include "../../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlDtmRefDom2dtmDOM2DTMdefaultNamespaceDeclarationNode")
#ifdef RESTRICT_OrgApacheXmlDtmRefDom2dtmDOM2DTMdefaultNamespaceDeclarationNode
#define INCLUDE_ALL_OrgApacheXmlDtmRefDom2dtmDOM2DTMdefaultNamespaceDeclarationNode 0
#else
#define INCLUDE_ALL_OrgApacheXmlDtmRefDom2dtmDOM2DTMdefaultNamespaceDeclarationNode 1
#endif
#undef RESTRICT_OrgApacheXmlDtmRefDom2dtmDOM2DTMdefaultNamespaceDeclarationNode

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlDtmRefDom2dtmDOM2DTMdefaultNamespaceDeclarationNode_) && (INCLUDE_ALL_OrgApacheXmlDtmRefDom2dtmDOM2DTMdefaultNamespaceDeclarationNode || defined(INCLUDE_OrgApacheXmlDtmRefDom2dtmDOM2DTMdefaultNamespaceDeclarationNode))
#define OrgApacheXmlDtmRefDom2dtmDOM2DTMdefaultNamespaceDeclarationNode_

#define RESTRICT_OrgW3cDomAttr 1
#define INCLUDE_OrgW3cDomAttr 1
#include "../../../../../../org/w3c/dom/Attr.h"

#define RESTRICT_OrgW3cDomTypeInfo 1
#define INCLUDE_OrgW3cDomTypeInfo 1
#include "../../../../../../org/w3c/dom/TypeInfo.h"

@protocol OrgW3cDomDocument;
@protocol OrgW3cDomElement;
@protocol OrgW3cDomNamedNodeMap;
@protocol OrgW3cDomNode;
@protocol OrgW3cDomNodeList;
@protocol OrgW3cDomUserDataHandler;

/*!
 @brief This is a kluge to let us shove a declaration for xml: into the
  DOM2DTM model.Basically, it creates a proxy node in DOM space to
  carry the additional information.
 This is _NOT_ a full DOM
  implementation, and shouldn't be one since it sits alongside the
  DOM rather than becoming part of the DOM model. 
  (This used to be an internal class within DOM2DTM. Moved out because
  I need to perform an instanceof operation on it to support a temporary
  workaround in DTMManagerDefault.) 
  %REVIEW% What if the DOM2DTM was built around a DocumentFragment and
  there isn't a single root element? I think this fails that case... 
  %REVIEW% An alternative solution would be to create the node _only_
  in DTM space, but given how DOM2DTM is currently written I think
  this is simplest.
 */
@interface OrgApacheXmlDtmRefDom2dtmDOM2DTMdefaultNamespaceDeclarationNode : NSObject < OrgW3cDomAttr, OrgW3cDomTypeInfo > {
 @public
  NSString *NOT_SUPPORTED_ERR_;
  id<OrgW3cDomElement> pseudoparent_;
  NSString *prefix_;
  NSString *uri_;
  NSString *nodename_;
  jint handle_;
}

#pragma mark Public

- (id<OrgW3cDomNode>)appendChildWithOrgW3cDomNode:(id<OrgW3cDomNode>)a;

- (id<OrgW3cDomNode>)cloneNodeWithBoolean:(jboolean)deep;

/*!
 @brief Compares a node with this node with regard to their position in the
  document.
 @param other The node to compare against this node.
 @return Returns how the given node is positioned relatively to this
    node.
 @since DOM Level 3
 */
- (jshort)compareDocumentPositionWithOrgW3cDomNode:(id<OrgW3cDomNode>)other;

- (id<OrgW3cDomNamedNodeMap>)getAttributes;

/*!
 @brief The absolute base URI of this node or <code>null</code> if undefined.
 This value is computed according to . However, when the 
 <code>Document</code> supports the feature "HTML" , the base URI is
  computed using first the value of the href attribute of the HTML BASE
  element if any, and the value of the <code>documentURI</code>
  attribute from the <code>Document</code> interface otherwise. 
 <br> When the node is an <code>Element</code>, a <code>Document</code>
  or a a <code>ProcessingInstruction</code>, this attribute represents
  the properties [base URI] defined in . When the node is a 
 <code>Notation</code>, an <code>Entity</code>, or an 
 <code>EntityReference</code>, this attribute represents the
  properties [declaration base URI] in the . How will this be affected
  by resolution of relative namespace URIs issue?It's not.Should this
  only be on Document, Element, ProcessingInstruction, Entity, and
  Notation nodes, according to the infoset? If not, what is it equal to
  on other nodes? Null? An empty string? I think it should be the
  parent's.No.Should this be read-only and computed or and actual
  read-write attribute?Read-only and computed (F2F 19 Jun 2000 and
  teleconference 30 May 2001).If the base HTML element is not yet
  attached to a document, does the insert change the Document.baseURI?
  Yes. (F2F 26 Sep 2001)
 @since DOM Level 3
 */
- (NSString *)getBaseURI;

- (id<OrgW3cDomNodeList>)getChildNodes;

/*!
 @brief This method returns a specialized object which implements the
  specialized APIs of the specified feature and version.The
  specialized object may also be obtained by using binding-specific
  casting methods but is not necessarily expected to, as discussed in Mixed DOM implementations.
 @param feature The name of the feature requested (case-insensitive).
 @param version_ This is the version number of the feature to test. If    the version is 
  <code> null </code>  or the empty string, supporting    any version of the feature will cause the method to return an
     object that supports at least one version of the feature.
 @return Returns an object which implements the specialized APIs of
    the specified feature and version, if any, or <code>null</code> if
    there is no object which implements interfaces associated with that
    feature. If the <code>DOMObject</code> returned by this method
    implements the <code>Node</code> interface, it must delegate to the
    primary core <code>Node</code> and not return results inconsistent
    with the primary core <code>Node</code> such as attributes,
    childNodes, etc.
 @since DOM Level 3
 */
- (id)getFeatureWithNSString:(NSString *)feature
                withNSString:(NSString *)version_;

- (id<OrgW3cDomNode>)getFirstChild;

/*!
 @brief Non-DOM method, part of the temporary kluge
  %REVIEW% This would be a pruning problem, but since it will always be
  added to the root element and we prune on elements, we shouldn't have 
  to worry.
 */
- (jint)getHandleOfNode;

- (id<OrgW3cDomNode>)getLastChild;

- (NSString *)getLocalName;

- (NSString *)getName;

- (NSString *)getNamespaceURI;

- (id<OrgW3cDomNode>)getNextSibling;

- (NSString *)getNodeName;

- (jshort)getNodeType;

- (NSString *)getNodeValue;

- (id<OrgW3cDomDocument>)getOwnerDocument;

- (id<OrgW3cDomElement>)getOwnerElement;

- (id<OrgW3cDomNode>)getParentNode;

- (NSString *)getPrefix;

- (id<OrgW3cDomNode>)getPreviousSibling;

- (id<OrgW3cDomTypeInfo>)getSchemaTypeInfo;

- (jboolean)getSpecified;

/*!
 @brief This attribute returns the text content of this node and its
  descendants.When it is defined to be null, setting it has no effect.
 When set, any possible children this node may have are removed and
  replaced by a single <code>Text</code> node containing the string
  this attribute is set to. On getting, no serialization is performed,
  the returned string does not contain any markup. No whitespace
  normalization is performed, the returned string does not contain the
  element content whitespaces . Similarly, on setting, no parsing is
  performed either, the input string is taken as pure textual content. 
 <br>The string returned is made of the text content of this node
  depending on its type, as defined below: 
 <table border='1'>
  <tr>
  <th>Node type</th>
  <th>Content</th>
  </tr>
  <tr>
  <td valign='top' rowspan='1' colspan='1'>
  ELEMENT_NODE, ENTITY_NODE, ENTITY_REFERENCE_NODE,
  DOCUMENT_FRAGMENT_NODE</td>
  <td valign='top' rowspan='1' colspan='1'>concatenation of the <code>textContent</code>
  attribute value of every child node, excluding COMMENT_NODE and
  PROCESSING_INSTRUCTION_NODE nodes</td>
  </tr>
  <tr>
  <td valign='top' rowspan='1' colspan='1'>ATTRIBUTE_NODE, TEXT_NODE,
  CDATA_SECTION_NODE, COMMENT_NODE, PROCESSING_INSTRUCTION_NODE</td>
  <td valign='top' rowspan='1' colspan='1'>
  <code>nodeValue</code></td>
  </tr>
  <tr>
  <td valign='top' rowspan='1' colspan='1'>DOCUMENT_NODE, DOCUMENT_TYPE_NODE, NOTATION_NODE</td>
  <td valign='top' rowspan='1' colspan='1'>
  null</td>
  </tr>
  </table>
 @throw DOMException
 NO_MODIFICATION_ALLOWED_ERR: Raised when the node is readonly.
 @throw DOMException
 DOMSTRING_SIZE_ERR: Raised when it would return more characters than
    fit in a <code>DOMString</code> variable on the implementation
    platform.
 @since DOM Level 3
 */
- (NSString *)getTextContent;

/*!
 - seealso: org.w3c.dom.TypeInfo
 */
- (NSString *)getTypeName;

/*!
 - seealso: org.w3c.dom.TypeInfo
 */
- (NSString *)getTypeNamespace;

/*!
 @brief Retrieves the object associated to a key on a this node.The object
  must first have been set to this node by calling 
 <code>setUserData</code> with the same key.
 @param key The key the object is associated to.
 @return Returns the <code>DOMObject</code> associated to the given key
    on this node, or <code>null</code> if there was none.
 @since DOM Level 3
 */
- (id)getUserDataWithNSString:(NSString *)key;

- (NSString *)getValue;

- (jboolean)hasAttributes;

- (jboolean)hasChildNodes;

- (id<OrgW3cDomNode>)insertBeforeWithOrgW3cDomNode:(id<OrgW3cDomNode>)a
                                 withOrgW3cDomNode:(id<OrgW3cDomNode>)b;

/*!
 @brief DOM Level 3: Experimental
   This method checks if the specified <code>namespaceURI</code> is the
   default namespace or not.
 @param namespaceURI The namespace URI to look for.
 @return <code>true</code> if the specified <code>namespaceURI</code>
    is the default namespace, <code>false</code> otherwise.
 @since DOM Level 3
 */
- (jboolean)isDefaultNamespaceWithNSString:(NSString *)namespaceURI;

/*!
 - seealso: or.gw3c.dom.TypeInfo
 */
- (jboolean)isDerivedFromWithNSString:(NSString *)ns
                         withNSString:(NSString *)localName
                              withInt:(jint)derivationMethod;

/*!
 @brief Tests whether two nodes are equal.
 <br>This method tests for equality of nodes, not sameness (i.e.,
  whether the two nodes are references to the same object) which can be
  tested with <code>Node.isSameNode</code>. All nodes that are the same
  will also be equal, though the reverse may not be true. 
 <br>Two nodes are equal if and only if the following conditions are
  satisfied: The two nodes are of the same type.The following string
  attributes are equal: <code>nodeName</code>, <code>localName</code>,
  <code>namespaceURI</code>, <code>prefix</code>, <code>nodeValue</code>
  , <code>baseURI</code>. This is: they are both <code>null</code>, or
  they have the same length and are character for character identical.
  The <code>attributes</code> <code>NamedNodeMaps</code> are equal.
  This is: they are both <code>null</code>, or they have the same
  length and for each node that exists in one map there is a node that
  exists in the other map and is equal, although not necessarily at the
  same index.The <code>childNodes</code> <code>NodeLists</code> are
  equal. This is: they are both <code>null</code>, or they have the
  same length and contain equal nodes at the same index. This is true
  for <code>Attr</code> nodes as for any other type of node. Note that
  normalization can affect equality; to avoid this, nodes should be
  normalized before being compared. 
 <br>For two <code>DocumentType</code> nodes to be equal, the following
  conditions must also be satisfied: The following string attributes
  are equal: <code>publicId</code>, <code>systemId</code>,
  <code>internalSubset</code>.The <code>entities</code>
  <code>NamedNodeMaps</code> are equal.The <code>notations</code>
  <code>NamedNodeMaps</code> are equal. 
 <br>On the other hand, the following do not affect equality: the 
 <code>ownerDocument</code> attribute, the <code>specified</code>
  attribute for <code>Attr</code> nodes, the 
 <code>isWhitespaceInElementContent</code> attribute for 
 <code>Text</code> nodes, as well as any user data or event listeners
  registered on the nodes.
 @param arg The node to compare equality with.
 @param deep If  <code> true </code> , recursively compare the subtrees; if
      <code> false </code> , compare only the nodes themselves (and its
     attributes, if it is an  <code> Element </code> ).
 @return If the nodes, and possibly subtrees are equal,
    <code>true</code> otherwise <code>false</code>.
 @since DOM Level 3
 */
- (jboolean)isEqualNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)arg;

- (jboolean)isId;

/*!
 @brief Returns whether this node is the same node as the given one.
 <br>This method provides a way to determine whether two 
 <code>Node</code> references returned by the implementation reference
  the same object. When two <code>Node</code> references are references
  to the same object, even if through a proxy, the references may be
  used completely interchangably, such that all attributes have the
  same values and calling the same DOM method on either reference
  always has exactly the same effect.
 @param other The node to test against.
 @return Returns <code>true</code> if the nodes are the same,
    <code>false</code> otherwise.
 @since DOM Level 3
 */
- (jboolean)isSameNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)other;

- (jboolean)isSupportedWithNSString:(NSString *)feature
                       withNSString:(NSString *)version_;

/*!
 @brief DOM Level 3 - Experimental:
  Look up the namespace URI associated to the given prefix, starting from this node.
 Use lookupNamespaceURI(null) to lookup the default namespace
 @param namespaceURI
 @return th URI for the namespace
 @since DOM Level 3
 */
- (NSString *)lookupNamespaceURIWithNSString:(NSString *)specifiedPrefix;

/*!
 @brief DOM Level 3 - Experimental:
  Look up the prefix associated to the given namespace URI, starting from this node.
 @param namespaceURI
 @return the prefix for the namespace
 */
- (NSString *)lookupPrefixWithNSString:(NSString *)namespaceURI;

- (void)normalize;

- (id<OrgW3cDomNode>)removeChildWithOrgW3cDomNode:(id<OrgW3cDomNode>)a;

- (id<OrgW3cDomNode>)replaceChildWithOrgW3cDomNode:(id<OrgW3cDomNode>)a
                                 withOrgW3cDomNode:(id<OrgW3cDomNode>)b;

- (void)setNodeValueWithNSString:(NSString *)value;

- (void)setPrefixWithNSString:(NSString *)value;

/*!
 @brief This attribute returns the text content of this node and its
  descendants.When it is defined to be null, setting it has no effect.
 When set, any possible children this node may have are removed and
  replaced by a single <code>Text</code> node containing the string
  this attribute is set to. On getting, no serialization is performed,
  the returned string does not contain any markup. No whitespace
  normalization is performed, the returned string does not contain the
  element content whitespaces . Similarly, on setting, no parsing is
  performed either, the input string is taken as pure textual content. 
 <br>The string returned is made of the text content of this node
  depending on its type, as defined below: 
 <table border='1'>
  <tr>
  <th>Node type</th>
  <th>Content</th>
  </tr>
  <tr>
  <td valign='top' rowspan='1' colspan='1'>
  ELEMENT_NODE, ENTITY_NODE, ENTITY_REFERENCE_NODE,
  DOCUMENT_FRAGMENT_NODE</td>
  <td valign='top' rowspan='1' colspan='1'>concatenation of the <code>textContent</code>
  attribute value of every child node, excluding COMMENT_NODE and
  PROCESSING_INSTRUCTION_NODE nodes</td>
  </tr>
  <tr>
  <td valign='top' rowspan='1' colspan='1'>ATTRIBUTE_NODE, TEXT_NODE,
  CDATA_SECTION_NODE, COMMENT_NODE, PROCESSING_INSTRUCTION_NODE</td>
  <td valign='top' rowspan='1' colspan='1'>
  <code>nodeValue</code></td>
  </tr>
  <tr>
  <td valign='top' rowspan='1' colspan='1'>DOCUMENT_NODE, DOCUMENT_TYPE_NODE, NOTATION_NODE</td>
  <td valign='top' rowspan='1' colspan='1'>
  null</td>
  </tr>
  </table>
 @throw DOMException
 NO_MODIFICATION_ALLOWED_ERR: Raised when the node is readonly.
 @throw DOMException
 DOMSTRING_SIZE_ERR: Raised when it would return more characters than
    fit in a <code>DOMString</code> variable on the implementation
    platform.
 @since DOM Level 3
 */
- (void)setTextContentWithNSString:(NSString *)textContent;

/*!
 @brief Associate an object to a key on this node.The object can later be
  retrieved from this node by calling <code>getUserData</code> with the
  same key.
 @param key The key to associate the object to.
 @param data The object to associate to the given key, or    
  <code> null </code>  to remove any existing association to that key.
 @param handler The handler to associate to that key, or    
  <code> null </code> .
 @return Returns the <code>DOMObject</code> previously associated to
    the given key on this node, or <code>null</code> if there was none.
 @since DOM Level 3
 */
- (id)setUserDataWithNSString:(NSString *)key
                       withId:(id)data
 withOrgW3cDomUserDataHandler:(id<OrgW3cDomUserDataHandler>)handler;

- (void)setValueWithNSString:(NSString *)value;

#pragma mark Package-Private

- (instancetype)initWithOrgW3cDomElement:(id<OrgW3cDomElement>)pseudoparent
                            withNSString:(NSString *)prefix
                            withNSString:(NSString *)uri
                                 withInt:(jint)handle;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlDtmRefDom2dtmDOM2DTMdefaultNamespaceDeclarationNode)

J2OBJC_FIELD_SETTER(OrgApacheXmlDtmRefDom2dtmDOM2DTMdefaultNamespaceDeclarationNode, NOT_SUPPORTED_ERR_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXmlDtmRefDom2dtmDOM2DTMdefaultNamespaceDeclarationNode, pseudoparent_, id<OrgW3cDomElement>)
J2OBJC_FIELD_SETTER(OrgApacheXmlDtmRefDom2dtmDOM2DTMdefaultNamespaceDeclarationNode, prefix_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXmlDtmRefDom2dtmDOM2DTMdefaultNamespaceDeclarationNode, uri_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXmlDtmRefDom2dtmDOM2DTMdefaultNamespaceDeclarationNode, nodename_, NSString *)

FOUNDATION_EXPORT void OrgApacheXmlDtmRefDom2dtmDOM2DTMdefaultNamespaceDeclarationNode_initWithOrgW3cDomElement_withNSString_withNSString_withInt_(OrgApacheXmlDtmRefDom2dtmDOM2DTMdefaultNamespaceDeclarationNode *self, id<OrgW3cDomElement> pseudoparent, NSString *prefix, NSString *uri, jint handle);

FOUNDATION_EXPORT OrgApacheXmlDtmRefDom2dtmDOM2DTMdefaultNamespaceDeclarationNode *new_OrgApacheXmlDtmRefDom2dtmDOM2DTMdefaultNamespaceDeclarationNode_initWithOrgW3cDomElement_withNSString_withNSString_withInt_(id<OrgW3cDomElement> pseudoparent, NSString *prefix, NSString *uri, jint handle) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmRefDom2dtmDOM2DTMdefaultNamespaceDeclarationNode *create_OrgApacheXmlDtmRefDom2dtmDOM2DTMdefaultNamespaceDeclarationNode_initWithOrgW3cDomElement_withNSString_withNSString_withInt_(id<OrgW3cDomElement> pseudoparent, NSString *prefix, NSString *uri, jint handle);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmRefDom2dtmDOM2DTMdefaultNamespaceDeclarationNode)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlDtmRefDom2dtmDOM2DTMdefaultNamespaceDeclarationNode")
