//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/org/xml/sax/ext/Attributes2Impl.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgXmlSaxExtAttributes2Impl")
#ifdef RESTRICT_OrgXmlSaxExtAttributes2Impl
#define INCLUDE_ALL_OrgXmlSaxExtAttributes2Impl 0
#else
#define INCLUDE_ALL_OrgXmlSaxExtAttributes2Impl 1
#endif
#undef RESTRICT_OrgXmlSaxExtAttributes2Impl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgXmlSaxExtAttributes2Impl_) && (INCLUDE_ALL_OrgXmlSaxExtAttributes2Impl || defined(INCLUDE_OrgXmlSaxExtAttributes2Impl))
#define OrgXmlSaxExtAttributes2Impl_

#define RESTRICT_OrgXmlSaxHelpersAttributesImpl 1
#define INCLUDE_OrgXmlSaxHelpersAttributesImpl 1
#include "../../../../org/xml/sax/helpers/AttributesImpl.h"

#define RESTRICT_OrgXmlSaxExtAttributes2 1
#define INCLUDE_OrgXmlSaxExtAttributes2 1
#include "../../../../org/xml/sax/ext/Attributes2.h"

@protocol OrgXmlSaxAttributes;

/*!
 @brief SAX2 extension helper for additional Attributes information,
  implementing the <code>Attributes2</code> interface.
 <blockquote>
  <em>This module, both source code and documentation, is in the
  Public Domain, and comes with <strong>NO WARRANTY</strong>.</em>
  </blockquote>
  
 <p>This is not part of core-only SAX2 distributions.</p>
  
 <p>The <em>specified</em> flag for each attribute will always
  be true, unless it has been set to false in the copy constructor
  or using <code>setSpecified</code>.
  Similarly, the <em>declared</em> flag for each attribute will
  always be false, except for defaulted attributes (<em>specified</em>
  is false), non-CDATA attributes, or when it is set to true using 
 <code>setDeclared</code>.
  If you change an attribute's type by hand, you may need to modify
  its <em>declared</em> flag to match. 
 </p>
 @since SAX 2.0 (extensions 1.1 alpha)
 @author David Brownell
 @version TBS
 */
@interface OrgXmlSaxExtAttributes2Impl : OrgXmlSaxHelpersAttributesImpl < OrgXmlSaxExtAttributes2 >

#pragma mark Public

/*!
 @brief Construct a new, empty Attributes2Impl object.
 */
- (instancetype __nonnull)init;

/*!
 @brief Copy an existing Attributes or Attributes2 object.
 If the object implements Attributes2, values of the 
 <em>specified</em> and <em>declared</em> flags for each
  attribute are copied.
  Otherwise the flag values are defaulted to assume no DTD was used,
  unless there is evidence to the contrary (such as attributes with
  type other than CDATA, which must have been <em>declared</em>).
  
 <p>This constructor is especially useful inside a 
 <code>startElement</code> event.</p>
 @param atts The existing Attributes object.
 */
- (instancetype __nonnull)initWithOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)atts;

/*!
 @brief Add an attribute to the end of the list, setting its
  "specified" flag to true.To set that flag's value
  to false, use <code>setSpecified</code>.
 <p>Unless the attribute <em>type</em> is CDATA, this attribute
  is marked as being declared in the DTD.  To set that flag's value
  to true for CDATA attributes, use <code>setDeclared</code>.
 @param uri The Namespace URI, or the empty string if         none is available or Namespace processing is not
          being performed.
 @param localName The local name, or the empty string if         Namespace processing is not being performed.
 @param qName The qualified (prefixed) name, or the empty string         if qualified names are not available.
 @param type The attribute type as a string.
 @param value The attribute value.
 - seealso: AttributesImpl#addAttribute
 */
- (void)addAttributeWithNSString:(NSString *)uri
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)qName
                    withNSString:(NSString *)type
                    withNSString:(NSString *)value;

- (jboolean)isDeclaredWithInt:(jint)index;

- (jboolean)isDeclaredWithNSString:(NSString *)qName;

- (jboolean)isDeclaredWithNSString:(NSString *)uri
                      withNSString:(NSString *)localName;

/*!
 @brief Returns the current value of an attribute's "specified" flag.
 @param index The attribute index (zero-based).
 @return current flag value
 @throw java.lang.ArrayIndexOutOfBoundsExceptionWhen the
             supplied index does not identify an attribute.
 */
- (jboolean)isSpecifiedWithInt:(jint)index;

/*!
 @brief Returns the current value of an attribute's "specified" flag.
 @param qName The XML qualified (prefixed) name.
 @return current flag value
 @throw java.lang.IllegalArgumentExceptionWhen the
             supplied name does not identify an attribute.
 */
- (jboolean)isSpecifiedWithNSString:(NSString *)qName;

/*!
 @brief Returns the current value of an attribute's "specified" flag.
 @param uri The Namespace URI, or the empty string if         the name has no Namespace URI.
 @param localName The attribute's local name.
 @return current flag value
 @throw java.lang.IllegalArgumentExceptionWhen the
             supplied names do not identify an attribute.
 */
- (jboolean)isSpecifiedWithNSString:(NSString *)uri
                       withNSString:(NSString *)localName;

- (void)removeAttributeWithInt:(jint)index;

/*!
 @brief Copy an entire Attributes object.The "specified" flags are
  assigned as true, and "declared" flags as false (except when
  an attribute's type is not CDATA),
  unless the object is an Attributes2 object.
 In that case those flag values are all copied.
 @param atts The attributes to copy.
 - seealso: AttributesImpl#setAttributes
 */
- (void)setAttributesWithOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)atts;

/*!
 @brief Assign a value to the "declared" flag of a specific attribute.
 This is normally needed only for attributes of type CDATA,
  including attributes whose type is changed to or from CDATA.
 @param index The index of the attribute (zero-based).
 @param value The desired flag value.
 @throw java.lang.ArrayIndexOutOfBoundsExceptionWhen the
             supplied index does not identify an attribute.
 - seealso: #setType
 */
- (void)setDeclaredWithInt:(jint)index
               withBoolean:(jboolean)value;

/*!
 @brief Assign a value to the "specified" flag of a specific attribute.
 This is the only way this flag can be cleared, except clearing
  by initialization with the copy constructor.
 @param index The index of the attribute (zero-based).
 @param value The desired flag value.
 @throw java.lang.ArrayIndexOutOfBoundsExceptionWhen the
             supplied index does not identify an attribute.
 */
- (void)setSpecifiedWithInt:(jint)index
                withBoolean:(jboolean)value;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxExtAttributes2Impl)

FOUNDATION_EXPORT void OrgXmlSaxExtAttributes2Impl_init(OrgXmlSaxExtAttributes2Impl *self);

FOUNDATION_EXPORT OrgXmlSaxExtAttributes2Impl *new_OrgXmlSaxExtAttributes2Impl_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlSaxExtAttributes2Impl *create_OrgXmlSaxExtAttributes2Impl_init(void);

FOUNDATION_EXPORT void OrgXmlSaxExtAttributes2Impl_initWithOrgXmlSaxAttributes_(OrgXmlSaxExtAttributes2Impl *self, id<OrgXmlSaxAttributes> atts);

FOUNDATION_EXPORT OrgXmlSaxExtAttributes2Impl *new_OrgXmlSaxExtAttributes2Impl_initWithOrgXmlSaxAttributes_(id<OrgXmlSaxAttributes> atts) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlSaxExtAttributes2Impl *create_OrgXmlSaxExtAttributes2Impl_initWithOrgXmlSaxAttributes_(id<OrgXmlSaxAttributes> atts);

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxExtAttributes2Impl)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgXmlSaxExtAttributes2Impl")
