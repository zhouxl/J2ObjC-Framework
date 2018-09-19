//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/QName.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsQName")
#ifdef RESTRICT_OrgApacheXmlUtilsQName
#define INCLUDE_ALL_OrgApacheXmlUtilsQName 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsQName 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsQName

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlUtilsQName_) && (INCLUDE_ALL_OrgApacheXmlUtilsQName || defined(INCLUDE_OrgApacheXmlUtilsQName))
#define OrgApacheXmlUtilsQName_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../java/io/Serializable.h"

@class JavaUtilStack;
@protocol OrgApacheXmlUtilsPrefixResolver;
@protocol OrgW3cDomElement;

/*!
 @brief Class to represent a qualified name: "The name of an internal XSLT object,
  specifically a named template (see [7 Named Templates]), a mode (see [6.7 Modes]),
  an attribute set (see [8.1.4 Named Attribute Sets]), a key (see [14.2 Keys]),
  a locale (see [14.3 Number Formatting]), a variable or a parameter (see
  [12 Variables and Parameters]) is specified as a QName.If it has a prefix,
  then the prefix is expanded into a URI reference using the namespace declarations
  in effect on the attribute in which the name occurs.
 The expanded name
  consisting of the local part of the name and the possibly null URI reference
  is used as the name of the object. The default namespace is not used for
  unprefixed names."
 */
@interface OrgApacheXmlUtilsQName : NSObject < JavaIoSerializable > {
 @public
  /*!
   @brief The local name.
   */
  NSString *_localName_;
  /*!
   @brief The namespace URI.
   */
  NSString *_namespaceURI_;
  /*!
   @brief The namespace prefix.
   */
  NSString *_prefix_;
}

+ (jlong)serialVersionUID;

+ (NSString *)S_XMLNAMESPACEURI;

#pragma mark Public

/*!
 @brief Constructs an empty QName.
 20001019: Try making this public, to support Serializable?
 -- JKESS
 */
- (instancetype)init;

/*!
 @brief Construct a QName from a string, without namespace resolution.Good
  for a few odd cases.
 @param localName Local part of qualified name
 */
- (instancetype)initWithNSString:(NSString *)localName;

/*!
 @brief Construct a QName from a string, without namespace resolution.Good
  for a few odd cases.
 @param localName Local part of qualified name
 @param validate If true the new QName will be validated and an IllegalArgumentException will                  be thrown if it is invalid.
 */
- (instancetype)initWithNSString:(NSString *)localName
                     withBoolean:(jboolean)validate;

/*!
 @brief Construct a QName from a string, resolving the prefix
  using the given namespace context and prefix resolver.
 The default namespace is not resolved.
 @param qname Qualified name to resolve
 @param namespaceContext Namespace Context to use
 @param resolver Prefix resolver for this context
 */
- (instancetype)initWithNSString:(NSString *)qname
            withOrgW3cDomElement:(id<OrgW3cDomElement>)namespaceContext
withOrgApacheXmlUtilsPrefixResolver:(id<OrgApacheXmlUtilsPrefixResolver>)resolver;

/*!
 @brief Construct a QName from a string, resolving the prefix
  using the given namespace context and prefix resolver.
 The default namespace is not resolved.
 @param qname Qualified name to resolve
 @param namespaceContext Namespace Context to use
 @param resolver Prefix resolver for this context
 @param validate If true the new QName will be validated and an IllegalArgumentException will                  be thrown if it is invalid.
 */
- (instancetype)initWithNSString:(NSString *)qname
            withOrgW3cDomElement:(id<OrgW3cDomElement>)namespaceContext
withOrgApacheXmlUtilsPrefixResolver:(id<OrgApacheXmlUtilsPrefixResolver>)resolver
                     withBoolean:(jboolean)validate;

/*!
 @brief Construct a QName from a string, resolving the prefix
  using the given namespace stack.The default namespace is
  not resolved.
 @param qname Qualified name to resolve
 @param resolver Prefix resolver for this context
 */
- (instancetype)initWithNSString:(NSString *)qname
withOrgApacheXmlUtilsPrefixResolver:(id<OrgApacheXmlUtilsPrefixResolver>)resolver;

/*!
 @brief Construct a QName from a string, resolving the prefix
  using the given namespace stack.The default namespace is
  not resolved.
 @param qname Qualified name to resolve
 @param resolver Prefix resolver for this context
 @param validate If true the new QName will be validated and an IllegalArgumentException will                  be thrown if it is invalid.
 */
- (instancetype)initWithNSString:(NSString *)qname
withOrgApacheXmlUtilsPrefixResolver:(id<OrgApacheXmlUtilsPrefixResolver>)resolver
                     withBoolean:(jboolean)validate;

/*!
 @brief Construct a QName from a string, resolving the prefix
  using the given namespace stack.The default namespace is
  not resolved.
 @param qname Qualified name to resolve
 @param namespaces Namespace stack to use to resolve namespace
 */
- (instancetype)initWithNSString:(NSString *)qname
               withJavaUtilStack:(JavaUtilStack *)namespaces;

/*!
 @brief Construct a QName from a string, resolving the prefix
  using the given namespace stack.The default namespace is
  not resolved.
 @param qname Qualified name to resolve
 @param namespaces Namespace stack to use to resolve namespace
 @param validate If true the new QName will be validated and an IllegalArgumentException will                  be thrown if it is invalid.
 */
- (instancetype)initWithNSString:(NSString *)qname
               withJavaUtilStack:(JavaUtilStack *)namespaces
                     withBoolean:(jboolean)validate;

/*!
 @brief Constructs a new QName with the specified namespace URI and
  local name.
 @param namespaceURI The namespace URI if known, or null
 @param localName The local name
 */
- (instancetype)initWithNSString:(NSString *)namespaceURI
                    withNSString:(NSString *)localName;

/*!
 @brief Constructs a new QName with the specified namespace URI and
  local name.
 @param namespaceURI The namespace URI if known, or null
 @param localName The local name
 @param validate If true the new QName will be validated and an IllegalArgumentException will                  be thrown if it is invalid.
 */
- (instancetype)initWithNSString:(NSString *)namespaceURI
                    withNSString:(NSString *)localName
                     withBoolean:(jboolean)validate;

/*!
 @brief Constructs a new QName with the specified namespace URI, prefix
  and local name.
 @param namespaceURI The namespace URI if known, or null
 @param prefix The namespace prefix is known, or null
 @param localName The local name
 */
- (instancetype)initWithNSString:(NSString *)namespaceURI
                    withNSString:(NSString *)prefix
                    withNSString:(NSString *)localName;

/*!
 @brief Constructs a new QName with the specified namespace URI, prefix
  and local name.
 @param namespaceURI The namespace URI if known, or null
 @param prefix The namespace prefix is known, or null
 @param localName The local name
 @param validate If true the new QName will be validated and an IllegalArgumentException will                  be thrown if it is invalid.
 */
- (instancetype)initWithNSString:(NSString *)namespaceURI
                    withNSString:(NSString *)prefix
                    withNSString:(NSString *)localName
                     withBoolean:(jboolean)validate;

/*!
 @brief Override equals and agree that we're equal if
  the passed object is a QName and it matches
  the name of the arg.
 @return True if the qualified names are equal
 */
- (jboolean)isEqual:(id)object;

/*!
 @brief Override equals and agree that we're equal if
  the passed object is a string and it matches
  the name of the arg.
 @param ns Namespace URI to compare to
 @param localPart Local part of qualified name to compare to
 @return True if the local name and uri match
 */
- (jboolean)equalsWithNSString:(NSString *)ns
                  withNSString:(NSString *)localPart;

/*!
 @brief Returns the local part of the qualified name.
 @return The local part of the qualified name
 */
- (NSString *)getLocalName;

/*!
 @brief Get the local part of the qualified name.
 @return the local part of the qualified name
 */
- (NSString *)getLocalPart;

/*!
 @brief Returns the local name of the given node.
 @param qname Input name
 @return Local part of the name if prefixed, or the given name if not
 */
+ (NSString *)getLocalPartWithNSString:(NSString *)qname;

/*!
 @brief Get the namespace of the qualified name.
 @return the namespace URI of the qualified name
 */
- (NSString *)getNamespace;

/*!
 @brief Returns the namespace URI.Returns null if the namespace URI
  is not known.
 @return The namespace URI, or null
 */
- (NSString *)getNamespaceURI;

/*!
 @brief Returns the namespace prefix.Returns null if the namespace
  prefix is not known.
 @return The namespace prefix, or null
 */
- (NSString *)getPrefix;

/*!
 @brief This function tells if a raw attribute name is a
  xmlns attribute.
 @param attRawName Raw name of attribute
 @return Prefix of attribute
 */
+ (NSString *)getPrefixFromXMLNSDeclWithNSString:(NSString *)attRawName;

/*!
 @brief Returns the local name of the given node.
 @param qname Input name
 @return Prefix of name or empty string if none there
 */
+ (NSString *)getPrefixPartWithNSString:(NSString *)qname;

/*!
 @brief Given a string, create and return a QName object
 @param name String to use to create QName
 @return a QName object
 */
+ (OrgApacheXmlUtilsQName *)getQNameFromStringWithNSString:(NSString *)name;

/*!
 @brief Return the cached hashcode of the qualified name.
 @return the cached hashcode of the qualified name
 */
- (NSUInteger)hash;

/*!
 @brief This function tells if a raw attribute name is a
  xmlns attribute.
 @param attRawName Raw name of attribute
 @return True if the attribute starts with or is equal to xmlns
 */
+ (jboolean)isXMLNSDeclWithNSString:(NSString *)attRawName;

/*!
 @brief Return the string representation of the qualified name using the 
  the '{ns}foo' notation.Performs
  string concatenation, so beware of performance issues.
 @return the string representation of the namespace
 */
- (NSString *)toNamespacedString;

/*!
 @brief Return the string representation of the qualified name, using the 
  prefix if available, or the '{ns}foo' notation if not.Performs
  string concatenation, so beware of performance issues.
 @return the string representation of the namespace
 */
- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsQName)

J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsQName, _localName_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsQName, _namespaceURI_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsQName, _prefix_, NSString *)

inline jlong OrgApacheXmlUtilsQName_get_serialVersionUID(void);
#define OrgApacheXmlUtilsQName_serialVersionUID 467434581652829920LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlUtilsQName, serialVersionUID, jlong)

/*!
 @brief The XML namespace.
 */
inline NSString *OrgApacheXmlUtilsQName_get_S_XMLNAMESPACEURI(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsQName_S_XMLNAMESPACEURI;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsQName, S_XMLNAMESPACEURI, NSString *)

FOUNDATION_EXPORT void OrgApacheXmlUtilsQName_init(OrgApacheXmlUtilsQName *self);

FOUNDATION_EXPORT OrgApacheXmlUtilsQName *new_OrgApacheXmlUtilsQName_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsQName *create_OrgApacheXmlUtilsQName_init(void);

FOUNDATION_EXPORT void OrgApacheXmlUtilsQName_initWithNSString_withNSString_(OrgApacheXmlUtilsQName *self, NSString *namespaceURI, NSString *localName);

FOUNDATION_EXPORT OrgApacheXmlUtilsQName *new_OrgApacheXmlUtilsQName_initWithNSString_withNSString_(NSString *namespaceURI, NSString *localName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsQName *create_OrgApacheXmlUtilsQName_initWithNSString_withNSString_(NSString *namespaceURI, NSString *localName);

FOUNDATION_EXPORT void OrgApacheXmlUtilsQName_initWithNSString_withNSString_withBoolean_(OrgApacheXmlUtilsQName *self, NSString *namespaceURI, NSString *localName, jboolean validate);

FOUNDATION_EXPORT OrgApacheXmlUtilsQName *new_OrgApacheXmlUtilsQName_initWithNSString_withNSString_withBoolean_(NSString *namespaceURI, NSString *localName, jboolean validate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsQName *create_OrgApacheXmlUtilsQName_initWithNSString_withNSString_withBoolean_(NSString *namespaceURI, NSString *localName, jboolean validate);

FOUNDATION_EXPORT void OrgApacheXmlUtilsQName_initWithNSString_withNSString_withNSString_(OrgApacheXmlUtilsQName *self, NSString *namespaceURI, NSString *prefix, NSString *localName);

FOUNDATION_EXPORT OrgApacheXmlUtilsQName *new_OrgApacheXmlUtilsQName_initWithNSString_withNSString_withNSString_(NSString *namespaceURI, NSString *prefix, NSString *localName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsQName *create_OrgApacheXmlUtilsQName_initWithNSString_withNSString_withNSString_(NSString *namespaceURI, NSString *prefix, NSString *localName);

FOUNDATION_EXPORT void OrgApacheXmlUtilsQName_initWithNSString_withNSString_withNSString_withBoolean_(OrgApacheXmlUtilsQName *self, NSString *namespaceURI, NSString *prefix, NSString *localName, jboolean validate);

FOUNDATION_EXPORT OrgApacheXmlUtilsQName *new_OrgApacheXmlUtilsQName_initWithNSString_withNSString_withNSString_withBoolean_(NSString *namespaceURI, NSString *prefix, NSString *localName, jboolean validate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsQName *create_OrgApacheXmlUtilsQName_initWithNSString_withNSString_withNSString_withBoolean_(NSString *namespaceURI, NSString *prefix, NSString *localName, jboolean validate);

FOUNDATION_EXPORT void OrgApacheXmlUtilsQName_initWithNSString_(OrgApacheXmlUtilsQName *self, NSString *localName);

FOUNDATION_EXPORT OrgApacheXmlUtilsQName *new_OrgApacheXmlUtilsQName_initWithNSString_(NSString *localName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsQName *create_OrgApacheXmlUtilsQName_initWithNSString_(NSString *localName);

FOUNDATION_EXPORT void OrgApacheXmlUtilsQName_initWithNSString_withBoolean_(OrgApacheXmlUtilsQName *self, NSString *localName, jboolean validate);

FOUNDATION_EXPORT OrgApacheXmlUtilsQName *new_OrgApacheXmlUtilsQName_initWithNSString_withBoolean_(NSString *localName, jboolean validate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsQName *create_OrgApacheXmlUtilsQName_initWithNSString_withBoolean_(NSString *localName, jboolean validate);

FOUNDATION_EXPORT void OrgApacheXmlUtilsQName_initWithNSString_withJavaUtilStack_(OrgApacheXmlUtilsQName *self, NSString *qname, JavaUtilStack *namespaces);

FOUNDATION_EXPORT OrgApacheXmlUtilsQName *new_OrgApacheXmlUtilsQName_initWithNSString_withJavaUtilStack_(NSString *qname, JavaUtilStack *namespaces) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsQName *create_OrgApacheXmlUtilsQName_initWithNSString_withJavaUtilStack_(NSString *qname, JavaUtilStack *namespaces);

FOUNDATION_EXPORT void OrgApacheXmlUtilsQName_initWithNSString_withJavaUtilStack_withBoolean_(OrgApacheXmlUtilsQName *self, NSString *qname, JavaUtilStack *namespaces, jboolean validate);

FOUNDATION_EXPORT OrgApacheXmlUtilsQName *new_OrgApacheXmlUtilsQName_initWithNSString_withJavaUtilStack_withBoolean_(NSString *qname, JavaUtilStack *namespaces, jboolean validate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsQName *create_OrgApacheXmlUtilsQName_initWithNSString_withJavaUtilStack_withBoolean_(NSString *qname, JavaUtilStack *namespaces, jboolean validate);

FOUNDATION_EXPORT void OrgApacheXmlUtilsQName_initWithNSString_withOrgW3cDomElement_withOrgApacheXmlUtilsPrefixResolver_(OrgApacheXmlUtilsQName *self, NSString *qname, id<OrgW3cDomElement> namespaceContext, id<OrgApacheXmlUtilsPrefixResolver> resolver);

FOUNDATION_EXPORT OrgApacheXmlUtilsQName *new_OrgApacheXmlUtilsQName_initWithNSString_withOrgW3cDomElement_withOrgApacheXmlUtilsPrefixResolver_(NSString *qname, id<OrgW3cDomElement> namespaceContext, id<OrgApacheXmlUtilsPrefixResolver> resolver) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsQName *create_OrgApacheXmlUtilsQName_initWithNSString_withOrgW3cDomElement_withOrgApacheXmlUtilsPrefixResolver_(NSString *qname, id<OrgW3cDomElement> namespaceContext, id<OrgApacheXmlUtilsPrefixResolver> resolver);

FOUNDATION_EXPORT void OrgApacheXmlUtilsQName_initWithNSString_withOrgW3cDomElement_withOrgApacheXmlUtilsPrefixResolver_withBoolean_(OrgApacheXmlUtilsQName *self, NSString *qname, id<OrgW3cDomElement> namespaceContext, id<OrgApacheXmlUtilsPrefixResolver> resolver, jboolean validate);

FOUNDATION_EXPORT OrgApacheXmlUtilsQName *new_OrgApacheXmlUtilsQName_initWithNSString_withOrgW3cDomElement_withOrgApacheXmlUtilsPrefixResolver_withBoolean_(NSString *qname, id<OrgW3cDomElement> namespaceContext, id<OrgApacheXmlUtilsPrefixResolver> resolver, jboolean validate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsQName *create_OrgApacheXmlUtilsQName_initWithNSString_withOrgW3cDomElement_withOrgApacheXmlUtilsPrefixResolver_withBoolean_(NSString *qname, id<OrgW3cDomElement> namespaceContext, id<OrgApacheXmlUtilsPrefixResolver> resolver, jboolean validate);

FOUNDATION_EXPORT void OrgApacheXmlUtilsQName_initWithNSString_withOrgApacheXmlUtilsPrefixResolver_(OrgApacheXmlUtilsQName *self, NSString *qname, id<OrgApacheXmlUtilsPrefixResolver> resolver);

FOUNDATION_EXPORT OrgApacheXmlUtilsQName *new_OrgApacheXmlUtilsQName_initWithNSString_withOrgApacheXmlUtilsPrefixResolver_(NSString *qname, id<OrgApacheXmlUtilsPrefixResolver> resolver) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsQName *create_OrgApacheXmlUtilsQName_initWithNSString_withOrgApacheXmlUtilsPrefixResolver_(NSString *qname, id<OrgApacheXmlUtilsPrefixResolver> resolver);

FOUNDATION_EXPORT void OrgApacheXmlUtilsQName_initWithNSString_withOrgApacheXmlUtilsPrefixResolver_withBoolean_(OrgApacheXmlUtilsQName *self, NSString *qname, id<OrgApacheXmlUtilsPrefixResolver> resolver, jboolean validate);

FOUNDATION_EXPORT OrgApacheXmlUtilsQName *new_OrgApacheXmlUtilsQName_initWithNSString_withOrgApacheXmlUtilsPrefixResolver_withBoolean_(NSString *qname, id<OrgApacheXmlUtilsPrefixResolver> resolver, jboolean validate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsQName *create_OrgApacheXmlUtilsQName_initWithNSString_withOrgApacheXmlUtilsPrefixResolver_withBoolean_(NSString *qname, id<OrgApacheXmlUtilsPrefixResolver> resolver, jboolean validate);

FOUNDATION_EXPORT OrgApacheXmlUtilsQName *OrgApacheXmlUtilsQName_getQNameFromStringWithNSString_(NSString *name);

FOUNDATION_EXPORT jboolean OrgApacheXmlUtilsQName_isXMLNSDeclWithNSString_(NSString *attRawName);

FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsQName_getPrefixFromXMLNSDeclWithNSString_(NSString *attRawName);

FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsQName_getLocalPartWithNSString_(NSString *qname);

FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsQName_getPrefixPartWithNSString_(NSString *qname);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsQName)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsQName")
