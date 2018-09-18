//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/DOMSerializer.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerDOMSerializer")
#ifdef RESTRICT_OrgApacheXmlSerializerDOMSerializer
#define INCLUDE_ALL_OrgApacheXmlSerializerDOMSerializer 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerDOMSerializer 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerDOMSerializer

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlSerializerDOMSerializer_) && (INCLUDE_ALL_OrgApacheXmlSerializerDOMSerializer || defined(INCLUDE_OrgApacheXmlSerializerDOMSerializer))
#define OrgApacheXmlSerializerDOMSerializer_

@protocol OrgW3cDomNode;

/*!
 @brief Interface for a DOM serializer implementation.
 <p>
  The DOMSerializer is a facet of a serializer and is obtained from the
  asDOMSerializer() method of the (<code>Serializer</code>) interface. 
  A serializer may or may not support a DOM serializer, if it does not then the 
  return value from asDOMSerializer() is null. 
 <p>
  Example: 
 @code

  // Create a document to be serialized
  org.w3c.dom.Document doc = ...; 
  // Create a Serializer that will be used
  // to serialize the document  
  org.apache.xml.serializer.Serializer ser = ...;
  // Set the Writer to write output to, and 
  // serialize the DOM using that Serializer
  java.io.StringWriter sw = new java.io.StringWriter();
  ser.setWriter(sw);
  DOMSerialzier dser = ser.asDOMSerializer();
  dser.serialize(doc); 
  // Write out the serialized XML in the String.
  System.out.println(sw.toString()); 
  
@endcode
 - seealso: OutputPropertiesFactory
 - seealso: SerializerFactory
 - seealso: Serializer
 */
@protocol OrgApacheXmlSerializerDOMSerializer < JavaObject >

/*!
 @brief Serializes the DOM node.Throws an exception only if an I/O
  exception occured while serializing.
 This interface is a public API.
 @param node the DOM node to serialize
 @throw IOExceptionif an I/O exception occured while serializing
 */
- (void)serializeWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerDOMSerializer)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerDOMSerializer)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerDOMSerializer")
