//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/OutputProperties.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesOutputProperties")
#ifdef RESTRICT_OrgApacheXalanTemplatesOutputProperties
#define INCLUDE_ALL_OrgApacheXalanTemplatesOutputProperties 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesOutputProperties 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesOutputProperties

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTemplatesOutputProperties_) && (INCLUDE_ALL_OrgApacheXalanTemplatesOutputProperties || defined(INCLUDE_OrgApacheXalanTemplatesOutputProperties))
#define OrgApacheXalanTemplatesOutputProperties_

#define RESTRICT_OrgApacheXalanTemplatesElemTemplateElement 1
#define INCLUDE_OrgApacheXalanTemplatesElemTemplateElement 1
#include "../../../../org/apache/xalan/templates/ElemTemplateElement.h"

@class JavaUtilProperties;
@class JavaUtilVector;
@class OrgApacheXalanTemplatesStylesheetRoot;
@class OrgApacheXmlUtilsQName;

/*!
 @brief This class provides information from xsl:output elements.It is mainly
  a wrapper for <code>java.util.Properties</code>, but can not extend that class
  because it must be part of the <code>org.apache.xalan.templates.ElemTemplateElement</code>
  heararchy.
 <p>An OutputProperties list can contain another OutputProperties list as
  its "defaults"; this second property list is searched if the property key
  is not found in the original property list.</p>
 - seealso: <a href="http://www.w3.org/TR/xslt#dtd">XSLT DTD</a>
 - seealso: <a href="http://www.w3.org/TR/xslt#output">xsl:output in XSLT Specification</a>
 */
@interface OrgApacheXalanTemplatesOutputProperties : OrgApacheXalanTemplatesElemTemplateElement < NSCopying >

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Creates an empty OutputProperties with no default values.
 */
- (instancetype)init;

/*!
 @brief Creates an empty OutputProperties with the specified defaults.
 @param defaults the defaults.
 */
- (instancetype)initWithJavaUtilProperties:(JavaUtilProperties *)defaults;

/*!
 @brief Creates an empty OutputProperties with the defaults specified by
  a property file.The method argument is used to construct a string of
  the form output_[method].properties (for instance, output_html.properties).
 The output_xml.properties file is always used as the base. 
 <p>At the moment, anything other than 'text', 'xml', and 'html', will
  use the output_xml.properties file.</p>
 @param method non-null reference to method name.
 */
- (instancetype)initWithNSString:(NSString *)method;

/*!
 @brief Clone this OutputProperties, including a clone of the wrapped Properties
  reference.
 @return A new OutputProperties reference, mutation of which should not
          effect this object.
 */
- (id)java_clone;

/*!
 @brief This function is called after everything else has been
  recomposed, and allows the template to set remaining
  values that may be based on some other property that
  depends on recomposition.
 */
- (void)composeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)sroot;

/*!
 @brief Copy the keys and values from the source to this object.This will
  not copy the default values.
 This is meant to be used by going from
  a higher precedence object to a lower precedence object, so that if a
  key already exists, this method will not reset it.
 @param opsrc non-null reference to an OutputProperties.
 */
- (void)copyFromWithOrgApacheXalanTemplatesOutputProperties:(OrgApacheXalanTemplatesOutputProperties *)opsrc OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Copy the keys and values from the source to this object.This will
  not copy the default values.
 This is meant to be used by going from
  a higher precedence object to a lower precedence object, so that if a
  key already exists, this method will not reset it.
 @param src non-null reference to the source properties.
 */
- (void)copyFromWithJavaUtilProperties:(JavaUtilProperties *)src OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Copy the keys and values from the source to this object.This will
  not copy the default values.
 This is meant to be used by going from
  a higher precedence object to a lower precedence object, so that if a
  key already exists, this method will not reset it.
 @param src non-null reference to the source properties.
 @param shouldResetDefaults true if the defaults should be reset based on                              the method property.
 */
- (void)copyFromWithJavaUtilProperties:(JavaUtilProperties *)src
                           withBoolean:(jboolean)shouldResetDefaults OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Searches for the boolean property with the specified key in the property list.
 If the key is not found in this property list, the default property list,
  and its defaults, recursively, are then checked. The method returns 
 <code>false</code> if the property is not found, or if the value is other
  than "yes".
 @param key the property key.
 @return the value in this property list as a boolean value, or false
  if null or not "yes".
 */
- (jboolean)getBooleanPropertyWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)key;

/*!
 @brief Searches for the boolean property with the specified key in the property list.
 If the key is not found in this property list, the default property list,
  and its defaults, recursively, are then checked. The method returns 
 <code>false</code> if the property is not found, or if the value is other
  than "yes".
 @param key the property key.
 @return the value in this property list as a boolean value, or false
  if null or not "yes".
 */
- (jboolean)getBooleanPropertyWithNSString:(NSString *)key;

/*!
 @brief Creates an empty OutputProperties with the defaults specified by
  a property file.The method argument is used to construct a string of
  the form output_[method].properties (for instance, output_html.properties).
 The output_xml.properties file is always used as the base. 
 <p>At the moment, anything other than 'text', 'xml', and 'html', will
  use the output_xml.properties file.</p>
 @param method non-null reference to method name.
 @return Properties object that holds the defaults for the given method.
 */
+ (JavaUtilProperties *)getDefaultMethodPropertiesWithNSString:(NSString *)method;

/*!
 @brief Searches for the int property with the specified key in the property list.
 If the key is not found in this property list, the default property list,
  and its defaults, recursively, are then checked. The method returns 
 <code>false</code> if the property is not found, or if the value is other
  than "yes".
 @param key the property key.
 @return the value in this property list as a int value, or false
  if null or not a number.
 */
- (jint)getIntPropertyWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)key;

/*!
 @brief Searches for the int property with the specified key in the property list.
 If the key is not found in this property list, the default property list,
  and its defaults, recursively, are then checked. The method returns 
 <code>false</code> if the property is not found, or if the value is other
  than "yes".
 @param key the property key.
 @return the value in this property list as a int value, or false
  if null or not a number.
 */
- (jint)getIntPropertyWithNSString:(NSString *)key;

/*!
 @brief Get the Properties object that this class wraps.
 @return non-null reference to Properties object.
 */
- (JavaUtilProperties *)getProperties;

/*!
 @brief Searches for the property with the specified key in the property list.
 If the key is not found in this property list, the default property list,
  and its defaults, recursively, are then checked. The method returns 
 <code>null</code> if the property is not found.
 @param key the property key.
 @return the value in this property list with the specified key value.
 */
- (NSString *)getPropertyWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)key;

/*!
 @brief Searches for the property with the specified key in the property list.
 If the key is not found in this property list, the default property list,
  and its defaults, recursively, are then checked. The method returns 
 <code>null</code> if the property is not found.
 @param key the property key.
 @return the value in this property list with the specified key value.
 */
- (NSString *)getPropertyWithNSString:(NSString *)key;

/*!
 @brief Searches for the list of qname properties with the specified key in
  the property list.
 If the key is not found in this property list, the default property list,
  and its defaults, recursively, are then checked. The method returns 
 <code>null</code> if the property is not found.
 @param key the property key.
 @return the value in this property list as a vector of QNames, or false
  if null or not "yes".
 */
- (JavaUtilVector *)getQNamePropertiesWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)key;

/*!
 @brief Searches for the list of qname properties with the specified key in
  the property list.
 If the key is not found in this property list, the default property list,
  and its defaults, recursively, are then checked. The method returns 
 <code>null</code> if the property is not found.
 @param key the property key.
 @return the value in this property list as a vector of QNames, or false
  if null or not "yes".
 */
- (JavaUtilVector *)getQNamePropertiesWithNSString:(NSString *)key;

/*!
 @brief Searches for the list of qname properties with the specified key in
  the property list.
 If the key is not found in this property list, the default property list,
  and its defaults, recursively, are then checked. The method returns 
 <code>null</code> if the property is not found.
 @param key the property key.
 @param props the list of properties to search in.
 @return the value in this property list as a vector of QNames, or false
  if null or not "yes".
 */
+ (JavaUtilVector *)getQNamePropertiesWithNSString:(NSString *)key
                            withJavaUtilProperties:(JavaUtilProperties *)props;

/*!
 @brief Searches for the qname property with the specified key in the property list.
 If the key is not found in this property list, the default property list,
  and its defaults, recursively, are then checked. The method returns 
 <code>null</code> if the property is not found.
 @param key the property key.
 @return the value in this property list as a QName value, or false
  if null or not "yes".
 */
- (OrgApacheXmlUtilsQName *)getQNamePropertyWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)key;

/*!
 @brief Searches for the qname property with the specified key in the property list.
 If the key is not found in this property list, the default property list,
  and its defaults, recursively, are then checked. The method returns 
 <code>null</code> if the property is not found.
 @param key the property key.
 @return the value in this property list as a QName value, or false
  if null or not "yes".
 */
- (OrgApacheXmlUtilsQName *)getQNamePropertyWithNSString:(NSString *)key;

/*!
 @brief Searches for the qname property with the specified key in the property list.
 If the key is not found in this property list, the default property list,
  and its defaults, recursively, are then checked. The method returns 
 <code>null</code> if the property is not found.
 @param key the property key.
 @param props the list of properties to search in.
 @return the value in this property list as a QName value, or false
  if null or not "yes".
 */
+ (OrgApacheXmlUtilsQName *)getQNamePropertyWithNSString:(NSString *)key
                                  withJavaUtilProperties:(JavaUtilProperties *)props;

/*!
 @brief Report if the key given as an argument is a legal xsl:output key.
 @param key non-null reference to key name.
 @return true if key is legal.
 */
+ (jboolean)isLegalPropertyKeyWithNSString:(NSString *)key;

/*!
 @brief This function is called to recompose all of the output format extended elements.
 @param root non-null reference to the stylesheet root object.
 */
- (void)recomposeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)root;

/*!
 @brief Set an output property.
 @param key the key to be placed into the property list.
 @param value the value corresponding to  <tt> key </tt>
  .
 - seealso: javax.xml.transform.OutputKeys
 */
- (void)setBooleanPropertyWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)key
                                         withBoolean:(jboolean)value;

/*!
 @brief Set an output property.
 @param key the key to be placed into the property list.
 @param value the value corresponding to  <tt> key </tt>
  .
 - seealso: javax.xml.transform.OutputKeys
 */
- (void)setBooleanPropertyWithNSString:(NSString *)key
                           withBoolean:(jboolean)value;

/*!
 @brief Set an output property.
 @param key the key to be placed into the property list.
 @param value the value corresponding to  <tt> key </tt>
  .
 - seealso: javax.xml.transform.OutputKeys
 */
- (void)setIntPropertyWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)key
                                         withInt:(jint)value;

/*!
 @brief Set an output property.
 @param key the key to be placed into the property list.
 @param value the value corresponding to  <tt> key </tt>
  .
 - seealso: javax.xml.transform.OutputKeys
 */
- (void)setIntPropertyWithNSString:(NSString *)key
                           withInt:(jint)value;

/*!
 @brief Reset the default properties based on the method.
 @param method the method value.
 - seealso: javax.xml.transform.OutputKeys
 */
- (void)setMethodDefaultsWithNSString:(NSString *)method;

/*!
 @brief Set an output property.
 @param key the key to be placed into the property list.
 @param value the value corresponding to  <tt> key </tt>
  .
 - seealso: javax.xml.transform.OutputKeys
 */
- (void)setPropertyWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)key
                                 withNSString:(NSString *)value;

/*!
 @brief Set an output property.
 @param key the key to be placed into the property list.
 @param value the value corresponding to  <tt> key </tt>
  .
 - seealso: javax.xml.transform.OutputKeys
 */
- (void)setPropertyWithNSString:(NSString *)key
                   withNSString:(NSString *)value;

/*!
 @brief Set an output property with a QName list value.The QNames will be turned
  into strings with the namespace in curly brackets.
 @param key the key to be placed into the property list.
 @param v non-null list of QNames corresponding to  <tt> key </tt>
  .
 - seealso: javax.xml.transform.OutputKeys
 */
- (void)setQNamePropertiesWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)key
                                  withJavaUtilVector:(JavaUtilVector *)v;

/*!
 @brief Set an output property with a QName list value.The QNames will be turned
  into strings with the namespace in curly brackets.
 @param key the key to be placed into the property list.
 @param v non-null list of QNames corresponding to  <tt> key </tt>
  .
 - seealso: javax.xml.transform.OutputKeys
 */
- (void)setQNamePropertiesWithNSString:(NSString *)key
                    withJavaUtilVector:(JavaUtilVector *)v;

/*!
 @brief Set an output property with a QName value.The QName will be turned
  into a string with the namespace in curly brackets.
 @param key the key to be placed into the property list.
 @param value the value corresponding to  <tt> key </tt>
  .
 - seealso: javax.xml.transform.OutputKeys
 */
- (void)setQNamePropertyWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)key
                        withOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)value;

/*!
 @brief Set an output property with a QName value.The QName will be turned
  into a string with the namespace in curly brackets.
 @param key the key to be placed into the property list.
 @param value the value corresponding to  <tt> key </tt>
  .
 - seealso: javax.xml.transform.OutputKeys
 */
- (void)setQNamePropertyWithNSString:(NSString *)key
          withOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)value;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesOutputProperties)

inline jlong OrgApacheXalanTemplatesOutputProperties_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesOutputProperties_serialVersionUID -6975274363881785488LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesOutputProperties, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesOutputProperties_init(OrgApacheXalanTemplatesOutputProperties *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesOutputProperties *new_OrgApacheXalanTemplatesOutputProperties_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesOutputProperties *create_OrgApacheXalanTemplatesOutputProperties_init(void);

FOUNDATION_EXPORT void OrgApacheXalanTemplatesOutputProperties_initWithJavaUtilProperties_(OrgApacheXalanTemplatesOutputProperties *self, JavaUtilProperties *defaults);

FOUNDATION_EXPORT OrgApacheXalanTemplatesOutputProperties *new_OrgApacheXalanTemplatesOutputProperties_initWithJavaUtilProperties_(JavaUtilProperties *defaults) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesOutputProperties *create_OrgApacheXalanTemplatesOutputProperties_initWithJavaUtilProperties_(JavaUtilProperties *defaults);

FOUNDATION_EXPORT void OrgApacheXalanTemplatesOutputProperties_initWithNSString_(OrgApacheXalanTemplatesOutputProperties *self, NSString *method);

FOUNDATION_EXPORT OrgApacheXalanTemplatesOutputProperties *new_OrgApacheXalanTemplatesOutputProperties_initWithNSString_(NSString *method) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesOutputProperties *create_OrgApacheXalanTemplatesOutputProperties_initWithNSString_(NSString *method);

FOUNDATION_EXPORT OrgApacheXmlUtilsQName *OrgApacheXalanTemplatesOutputProperties_getQNamePropertyWithNSString_withJavaUtilProperties_(NSString *key, JavaUtilProperties *props);

FOUNDATION_EXPORT JavaUtilVector *OrgApacheXalanTemplatesOutputProperties_getQNamePropertiesWithNSString_withJavaUtilProperties_(NSString *key, JavaUtilProperties *props);

FOUNDATION_EXPORT jboolean OrgApacheXalanTemplatesOutputProperties_isLegalPropertyKeyWithNSString_(NSString *key);

FOUNDATION_EXPORT JavaUtilProperties *OrgApacheXalanTemplatesOutputProperties_getDefaultMethodPropertiesWithNSString_(NSString *method);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesOutputProperties)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesOutputProperties")
