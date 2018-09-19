//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/transformer/SerializerSwitcher.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTransformerSerializerSwitcher")
#ifdef RESTRICT_OrgApacheXalanTransformerSerializerSwitcher
#define INCLUDE_ALL_OrgApacheXalanTransformerSerializerSwitcher 0
#else
#define INCLUDE_ALL_OrgApacheXalanTransformerSerializerSwitcher 1
#endif
#undef RESTRICT_OrgApacheXalanTransformerSerializerSwitcher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanTransformerSerializerSwitcher_) && (INCLUDE_ALL_OrgApacheXalanTransformerSerializerSwitcher || defined(INCLUDE_OrgApacheXalanTransformerSerializerSwitcher))
#define OrgApacheXalanTransformerSerializerSwitcher_

@class JavaUtilProperties;
@class OrgApacheXalanTransformerTransformerImpl;
@protocol OrgApacheXmlSerializerSerializer;

/*!
 @brief This is a helper class that decides if Xalan needs to switch
  serializers, based on the first output element.
 */
@interface OrgApacheXalanTransformerSerializerSwitcher : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Switch to HTML serializer if element is HTML
 @param ns Namespace URI of the element
 @param localName Local part of name of element
 @throw TransformerException
 @return new contentHandler.
 */
+ (id<OrgApacheXmlSerializerSerializer>)switchSerializerIfHTMLWithNSString:(NSString *)ns
                                                              withNSString:(NSString *)localName
                                                    withJavaUtilProperties:(JavaUtilProperties *)props
                                      withOrgApacheXmlSerializerSerializer:(id<OrgApacheXmlSerializerSerializer>)oldSerializer;

/*!
 @brief Switch to HTML serializer if element is HTML
 @param transformer Non-null transformer instance
 @param ns Namespace URI of the element
 @param localName Local part of name of element
 @throw TransformerException
 */
+ (void)switchSerializerIfHTMLWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer
                                                              withNSString:(NSString *)ns
                                                              withNSString:(NSString *)localName;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTransformerSerializerSwitcher)

FOUNDATION_EXPORT void OrgApacheXalanTransformerSerializerSwitcher_init(OrgApacheXalanTransformerSerializerSwitcher *self);

FOUNDATION_EXPORT OrgApacheXalanTransformerSerializerSwitcher *new_OrgApacheXalanTransformerSerializerSwitcher_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTransformerSerializerSwitcher *create_OrgApacheXalanTransformerSerializerSwitcher_init(void);

FOUNDATION_EXPORT void OrgApacheXalanTransformerSerializerSwitcher_switchSerializerIfHTMLWithOrgApacheXalanTransformerTransformerImpl_withNSString_withNSString_(OrgApacheXalanTransformerTransformerImpl *transformer, NSString *ns, NSString *localName);

FOUNDATION_EXPORT id<OrgApacheXmlSerializerSerializer> OrgApacheXalanTransformerSerializerSwitcher_switchSerializerIfHTMLWithNSString_withNSString_withJavaUtilProperties_withOrgApacheXmlSerializerSerializer_(NSString *ns, NSString *localName, JavaUtilProperties *props, id<OrgApacheXmlSerializerSerializer> oldSerializer);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTransformerSerializerSwitcher)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTransformerSerializerSwitcher")
