//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/SerializerFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerSerializerFactory")
#ifdef RESTRICT_OrgApacheXmlSerializerSerializerFactory
#define INCLUDE_ALL_OrgApacheXmlSerializerSerializerFactory 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerSerializerFactory 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerSerializerFactory

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlSerializerSerializerFactory_) && (INCLUDE_ALL_OrgApacheXmlSerializerSerializerFactory || defined(INCLUDE_OrgApacheXmlSerializerSerializerFactory))
#define OrgApacheXmlSerializerSerializerFactory_

@class JavaUtilProperties;
@protocol OrgApacheXmlSerializerSerializer;

/*!
 @brief This class is a public API, it is a factory for creating serializers.
 The properties object passed to the getSerializer() method should be created by
  the OutputPropertiesFactory. Although the properties object
  used to create a serializer does not need to be obtained 
  from OutputPropertiesFactory,
  using this factory ensures that the default key/value properties
  are set for the given output "method".  
 <p>
  The standard property keys supported are: "method", "version", "encoding",
  "omit-xml-declaration", "standalone", doctype-public",
  "doctype-system", "cdata-section-elements", "indent", "media-type". 
  These property keys and their values are described in the XSLT recommendation,
  see {@@link <a href="http://www.w3.org/TR/1999/REC-xslt-19991116"> XSLT 1.0 recommendation</a>}
   
 <p>
  The value of the "cdata-section-elements" property key is a whitespace
  separated list of elements. If the element is in a namespace then 
  value is passed in this format: {uri}localName  
 <p>
  The non-standard property keys supported are defined in <code>OutputPropertiesFactory</code>.
 - seealso: OutputPropertiesFactory
 - seealso: Method
 - seealso: Serializer
 */
@interface OrgApacheXmlSerializerSerializerFactory : NSObject

#pragma mark Public

/*!
 @brief Returns a serializer for the specified output method.The output method
  is specified by the value of the property associated with the "method" key.
 If no implementation exists that supports the specified output method
  an exception of some type will be thrown.
  For a list of the output "method" key values see <code>Method</code>.
 @param format The output format, minimally the "method" property must be set.
 @return A suitable serializer.
 @throw IllegalArgumentExceptionif method is
  null or an appropriate serializer can't be found
 @throw Exceptionif the class for the serializer is found but does not
  implement ContentHandler.
 @throw WrappedRuntimeExceptionif an exception is thrown while trying to find serializer
 */
+ (id<OrgApacheXmlSerializerSerializer>)getSerializerWithJavaUtilProperties:(JavaUtilProperties *)format;

@end

J2OBJC_STATIC_INIT(OrgApacheXmlSerializerSerializerFactory)

FOUNDATION_EXPORT id<OrgApacheXmlSerializerSerializer> OrgApacheXmlSerializerSerializerFactory_getSerializerWithJavaUtilProperties_(JavaUtilProperties *format);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerSerializerFactory)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerSerializerFactory")
