//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/XMLCharacterRecognizer.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsXMLCharacterRecognizer")
#ifdef RESTRICT_OrgApacheXmlUtilsXMLCharacterRecognizer
#define INCLUDE_ALL_OrgApacheXmlUtilsXMLCharacterRecognizer 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsXMLCharacterRecognizer 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsXMLCharacterRecognizer

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlUtilsXMLCharacterRecognizer_) && (INCLUDE_ALL_OrgApacheXmlUtilsXMLCharacterRecognizer || defined(INCLUDE_OrgApacheXmlUtilsXMLCharacterRecognizer))
#define OrgApacheXmlUtilsXMLCharacterRecognizer_

@class IOSCharArray;
@class JavaLangStringBuffer;

/*!
 @brief Class used to verify whether the specified <var>ch</var> 
  conforms to the XML 1.0 definition of whitespace.
 */
@interface OrgApacheXmlUtilsXMLCharacterRecognizer : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief Returns whether the specified <var>ch</var> conforms to the XML 1.0 definition
  of whitespace.Refer to <A href="http://www.w3.org/TR/1998/REC-xml-19980210#NT-S">
  the definition of <CODE>S</CODE></A> for details.
 @param ch Character to check as XML whitespace.
 @return =true if <var>ch</var> is XML whitespace; otherwise =false.
 */
+ (jboolean)isWhiteSpaceWithChar:(jchar)ch;

/*!
 @brief Tell if the string is whitespace.
 @param ch Character array to check as XML whitespace.
 @param start Start index of characters in the array
 @param length Number of characters in the array
 @return True if the characters in the array are 
  XML whitespace; otherwise, false.
 */
+ (jboolean)isWhiteSpaceWithCharArray:(IOSCharArray *)ch
                              withInt:(jint)start
                              withInt:(jint)length;

/*!
 @brief Tell if the string is whitespace.
 @param s String to check as XML whitespace.
 @return True if characters in buffer are XML whitespace, false otherwise
 */
+ (jboolean)isWhiteSpaceWithNSString:(NSString *)s;

/*!
 @brief Tell if the string is whitespace.
 @param buf StringBuffer to check as XML whitespace.
 @return True if characters in buffer are XML whitespace, false otherwise
 */
+ (jboolean)isWhiteSpaceWithJavaLangStringBuffer:(JavaLangStringBuffer *)buf;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsXMLCharacterRecognizer)

FOUNDATION_EXPORT void OrgApacheXmlUtilsXMLCharacterRecognizer_init(OrgApacheXmlUtilsXMLCharacterRecognizer *self);

FOUNDATION_EXPORT OrgApacheXmlUtilsXMLCharacterRecognizer *new_OrgApacheXmlUtilsXMLCharacterRecognizer_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsXMLCharacterRecognizer *create_OrgApacheXmlUtilsXMLCharacterRecognizer_init(void);

FOUNDATION_EXPORT jboolean OrgApacheXmlUtilsXMLCharacterRecognizer_isWhiteSpaceWithChar_(jchar ch);

FOUNDATION_EXPORT jboolean OrgApacheXmlUtilsXMLCharacterRecognizer_isWhiteSpaceWithCharArray_withInt_withInt_(IOSCharArray *ch, jint start, jint length);

FOUNDATION_EXPORT jboolean OrgApacheXmlUtilsXMLCharacterRecognizer_isWhiteSpaceWithJavaLangStringBuffer_(JavaLangStringBuffer *buf);

FOUNDATION_EXPORT jboolean OrgApacheXmlUtilsXMLCharacterRecognizer_isWhiteSpaceWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsXMLCharacterRecognizer)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsXMLCharacterRecognizer")
