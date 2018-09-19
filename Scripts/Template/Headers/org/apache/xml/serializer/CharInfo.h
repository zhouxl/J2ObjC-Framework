//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/CharInfo.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerCharInfo")
#ifdef RESTRICT_OrgApacheXmlSerializerCharInfo
#define INCLUDE_ALL_OrgApacheXmlSerializerCharInfo 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerCharInfo 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerCharInfo

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlSerializerCharInfo_) && (INCLUDE_ALL_OrgApacheXmlSerializerCharInfo || defined(INCLUDE_OrgApacheXmlSerializerCharInfo))
#define OrgApacheXmlSerializerCharInfo_

/*!
 @brief This class provides services that tell if a character should have
  special treatement, such as entity reference substitution or normalization
  of a newline character.It also provides character to entity reference
  lookup.
 DEVELOPERS: See Known Issue in the constructor.
 */
@interface OrgApacheXmlSerializerCharInfo : NSObject {
 @public
  /*!
   @brief This flag is an optimization for HTML entities.It false if entities 
  other than quot (34), amp (38), lt (60) and gt (62) are defined
  in the range 0 to 127.
   */
  jboolean onlyQuotAmpLtGt_;
}

+ (NSString *)HTML_ENTITIES_RESOURCE;

+ (NSString *)XML_ENTITIES_RESOURCE;

+ (jchar)S_HORIZONAL_TAB;

+ (jchar)S_LINEFEED;

+ (jchar)S_CARRIAGERETURN;

+ (jchar)S_SPACE;

+ (jchar)S_QUOTE;

+ (jchar)S_LT;

+ (jchar)S_GT;

+ (jchar)S_NEL;

+ (jchar)S_LINE_SEPARATOR;

+ (jint)ASCII_MAX;

#pragma mark Package-Private

/*!
 @brief Call this method to register a char to String mapping, for example
  to map '<' to "&lt;".
 @param outputString The String to map to.
 @param inputChar The char to map from.
 @return true if the mapping is not one of: 
 <ul>
  <li> '<' to "&lt;"
  <li> '>' to "&gt;"
  <li> '&' to "&amp;"
  <li> '"' to "&quot;"
  </ul>
 */
- (jboolean)defineChar2StringMappingWithNSString:(NSString *)outputString
                                        withChar:(jchar)inputChar;

/*!
 @brief Factory that reads in a resource file that describes the mapping of
  characters to entity references.
 Resource files must be encoded in UTF-8 and have a format like: 
 @code

  # First char # is a comment
  Entity numericValue
  quot 34
  amp 38 
  
@endcode
  (Note: Why don't we just switch to .properties files? Oct-01 -sc)
 @param entitiesResource Name of entities resource file that should  be loaded, which describes that mapping of characters to entity references.
 @param method the output method type, which should be one of "xml", "html", "text"...
 */
+ (OrgApacheXmlSerializerCharInfo *)getCharInfoWithNSString:(NSString *)entitiesFileName
                                               withNSString:(NSString *)method;

/*!
 @brief Map a character to a String.For example given
  the character '>' this method would return the fully decorated
  entity name "&lt;".
 Strings for entity references are loaded from a properties file,
  but additional mappings defined through calls to defineChar2String()
  are possible. Such entity reference mappings could be over-ridden.
  This is reusing a stored key object, in an effort to avoid
  heap activity. Unfortunately, that introduces a threading risk.
  Simplest fix for now is to make it a synchronized method, or to give
  up the reuse; I see very little performance difference between them.
  Long-term solution would be to replace the hashtable with a sparse array
  keyed directly from the character's integer value; see DTM's
  string pool for a related solution.
 @param value The character that should be resolved to  a String, e.g. resolve '
  > ' to  " &lt; ".
 @return The String that the character is mapped to, or null if not found.
 */
- (NSString *)getOutputStringForCharWithChar:(jchar)value;

/*!
 @brief Tell if the character argument that is from
  an attribute value has a mapping to a String.
 @param value the value of a character that is in an attribute value
 @return true if the character should have any special treatment, 
  such as when writing out entity references.
 */
- (jboolean)shouldMapAttrCharWithInt:(jint)value;

/*!
 @brief Tell if the character argument that is from a 
  text node has a mapping to a String, for example
  to map '<' to "&lt;".
 @param value the value of a character that is in a text node
 @return true if the character has a mapping to a String, 
  such as when writing out entity references.
 */
- (jboolean)shouldMapTextCharWithInt:(jint)value;

@end

J2OBJC_STATIC_INIT(OrgApacheXmlSerializerCharInfo)

/*!
 @brief The name of the HTML entities file.
 If specified, the file will be resource loaded with the default class loader.
 */
inline NSString *OrgApacheXmlSerializerCharInfo_get_HTML_ENTITIES_RESOURCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlSerializerCharInfo_HTML_ENTITIES_RESOURCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlSerializerCharInfo, HTML_ENTITIES_RESOURCE, NSString *)

/*!
 @brief The name of the XML entities file.
 If specified, the file will be resource loaded with the default class loader.
 */
inline NSString *OrgApacheXmlSerializerCharInfo_get_XML_ENTITIES_RESOURCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlSerializerCharInfo_XML_ENTITIES_RESOURCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlSerializerCharInfo, XML_ENTITIES_RESOURCE, NSString *)

/*!
 @brief The horizontal tab character, which the parser should always normalize.
 */
inline jchar OrgApacheXmlSerializerCharInfo_get_S_HORIZONAL_TAB(void);
#define OrgApacheXmlSerializerCharInfo_S_HORIZONAL_TAB 0x0009
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerCharInfo, S_HORIZONAL_TAB, jchar)

/*!
 @brief The linefeed character, which the parser should always normalize.
 */
inline jchar OrgApacheXmlSerializerCharInfo_get_S_LINEFEED(void);
#define OrgApacheXmlSerializerCharInfo_S_LINEFEED 0x000a
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerCharInfo, S_LINEFEED, jchar)

/*!
 @brief The carriage return character, which the parser should always normalize.
 */
inline jchar OrgApacheXmlSerializerCharInfo_get_S_CARRIAGERETURN(void);
#define OrgApacheXmlSerializerCharInfo_S_CARRIAGERETURN 0x000d
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerCharInfo, S_CARRIAGERETURN, jchar)

inline jchar OrgApacheXmlSerializerCharInfo_get_S_SPACE(void);
#define OrgApacheXmlSerializerCharInfo_S_SPACE ' '
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerCharInfo, S_SPACE, jchar)

inline jchar OrgApacheXmlSerializerCharInfo_get_S_QUOTE(void);
#define OrgApacheXmlSerializerCharInfo_S_QUOTE '"'
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerCharInfo, S_QUOTE, jchar)

inline jchar OrgApacheXmlSerializerCharInfo_get_S_LT(void);
#define OrgApacheXmlSerializerCharInfo_S_LT '<'
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerCharInfo, S_LT, jchar)

inline jchar OrgApacheXmlSerializerCharInfo_get_S_GT(void);
#define OrgApacheXmlSerializerCharInfo_S_GT '>'
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerCharInfo, S_GT, jchar)

inline jchar OrgApacheXmlSerializerCharInfo_get_S_NEL(void);
#define OrgApacheXmlSerializerCharInfo_S_NEL 0x0085
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerCharInfo, S_NEL, jchar)

inline jchar OrgApacheXmlSerializerCharInfo_get_S_LINE_SEPARATOR(void);
#define OrgApacheXmlSerializerCharInfo_S_LINE_SEPARATOR 0x2028
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerCharInfo, S_LINE_SEPARATOR, jchar)

/*!
 @brief Copy the first 0,1 ...ASCII_MAX values into an array
 */
inline jint OrgApacheXmlSerializerCharInfo_get_ASCII_MAX(void);
#define OrgApacheXmlSerializerCharInfo_ASCII_MAX 128
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerCharInfo, ASCII_MAX, jint)

FOUNDATION_EXPORT OrgApacheXmlSerializerCharInfo *OrgApacheXmlSerializerCharInfo_getCharInfoWithNSString_withNSString_(NSString *entitiesFileName, NSString *method);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerCharInfo)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerCharInfo")