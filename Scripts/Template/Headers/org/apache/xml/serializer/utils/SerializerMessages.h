//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/utils/SerializerMessages.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerUtilsSerializerMessages")
#ifdef RESTRICT_OrgApacheXmlSerializerUtilsSerializerMessages
#define INCLUDE_ALL_OrgApacheXmlSerializerUtilsSerializerMessages 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerUtilsSerializerMessages 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerUtilsSerializerMessages

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlSerializerUtilsSerializerMessages_) && (INCLUDE_ALL_OrgApacheXmlSerializerUtilsSerializerMessages || defined(INCLUDE_OrgApacheXmlSerializerUtilsSerializerMessages))
#define OrgApacheXmlSerializerUtilsSerializerMessages_

#define RESTRICT_JavaUtilListResourceBundle 1
#define INCLUDE_JavaUtilListResourceBundle 1
#include "java/util/ListResourceBundle.h"

@class IOSObjectArray;

/*!
 @brief An instance of this class is a ListResourceBundle that
  has the required getContents() method that returns
  an array of message-key/message associations.
 <p>
  The message keys are defined in <code>MsgKey</code>. The
  messages that those keys map to are defined here. 
 <p>
  The messages in the English version are intended to be
  translated.  
  This class is not a public API, it is only public because it is 
  used in the serializer.
 */
@interface OrgApacheXmlSerializerUtilsSerializerMessages : JavaUtilListResourceBundle

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief The lookup table for error messages.
 */
- (IOSObjectArray *)getContents;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerUtilsSerializerMessages)

FOUNDATION_EXPORT void OrgApacheXmlSerializerUtilsSerializerMessages_init(OrgApacheXmlSerializerUtilsSerializerMessages *self);

FOUNDATION_EXPORT OrgApacheXmlSerializerUtilsSerializerMessages *new_OrgApacheXmlSerializerUtilsSerializerMessages_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerUtilsSerializerMessages *create_OrgApacheXmlSerializerUtilsSerializerMessages_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerUtilsSerializerMessages)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerUtilsSerializerMessages")
