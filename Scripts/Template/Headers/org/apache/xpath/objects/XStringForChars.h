//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/objects/XStringForChars.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathObjectsXStringForChars")
#ifdef RESTRICT_OrgApacheXpathObjectsXStringForChars
#define INCLUDE_ALL_OrgApacheXpathObjectsXStringForChars 0
#else
#define INCLUDE_ALL_OrgApacheXpathObjectsXStringForChars 1
#endif
#undef RESTRICT_OrgApacheXpathObjectsXStringForChars

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathObjectsXStringForChars_) && (INCLUDE_ALL_OrgApacheXpathObjectsXStringForChars || defined(INCLUDE_OrgApacheXpathObjectsXStringForChars))
#define OrgApacheXpathObjectsXStringForChars_

#define RESTRICT_OrgApacheXpathObjectsXString 1
#define INCLUDE_OrgApacheXpathObjectsXString 1
#include "org/apache/xpath/objects/XString.h"

@class IOSCharArray;
@class OrgApacheXmlUtilsFastStringBuffer;
@protocol OrgXmlSaxContentHandler;
@protocol OrgXmlSaxExtLexicalHandler;

/*!
 @brief This class will wrap a FastStringBuffer and allow for
 */
@interface OrgApacheXpathObjectsXStringForChars : OrgApacheXpathObjectsXString {
 @public
  /*!
   @brief The start position in the fsb.
   */
  jint m_start_;
  /*!
   @brief The length of the string.
   */
  jint m_length_;
  NSString *m_strCache_;
}
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Construct a XNodeSet object.
 @param val FastStringBuffer object this will wrap, must be non-null.
 @param start The start position in the array.
 @param length The number of characters to read from the array.
 */
- (instancetype __nonnull)initWithCharArray:(IOSCharArray *)val
                                    withInt:(jint)start
                                    withInt:(jint)length;

/*!
 @brief Cast result object to a string.
 @return The string this wraps or the empty string if null
 */
- (void)appendToFsbWithOrgApacheXmlUtilsFastStringBuffer:(OrgApacheXmlUtilsFastStringBuffer *)fsb;

/*!
 @brief Returns the character at the specified index.An index ranges
  from <code>0</code> to <code>length() - 1</code>.
 The first character
  of the sequence is at index <code>0</code>, the next at index 
 <code>1</code>, and so on, as for array indexing.
 @param index the index of the character.
 @return the character at the specified index of this string.
              The first character is at index <code>0</code>.
 @throw IndexOutOfBoundsExceptionif the <code>index</code>
              argument is negative or not less than the length of this
              string.
 */
- (jchar)charAtWithInt:(jint)index;

/*!
 @brief Directly call the
  comment method on the passed LexicalHandler for the
  string-value.
 @param lh A non-null reference to a LexicalHandler.
 @throw org.xml.sax.SAXException
 */
- (void)dispatchAsCommentWithOrgXmlSaxExtLexicalHandler:(id<OrgXmlSaxExtLexicalHandler>)lh;

/*!
 @brief Directly call the
  characters method on the passed ContentHandler for the
  string-value.Multiple calls to the
  ContentHandler's characters methods may well occur for a single call to
  this method.
 @param ch A non-null reference to a ContentHandler.
 @throw org.xml.sax.SAXException
 */
- (void)dispatchCharactersEventsWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)ch;

/*!
 @brief Cast result object to a string.
 @return The string this wraps or the empty string if null
 */
- (OrgApacheXmlUtilsFastStringBuffer *)fsb;

/*!
 @brief Copies characters from this string into the destination character
  array.
 @param srcBegin index of the first character in the string                         to copy.
 @param srcEnd index after the last character in the string                         to copy.
 @param dst the destination array.
 @param dstBegin the start offset in the destination array.
 @throw IndexOutOfBoundsExceptionIf any of the following
             is true:            
 <ul><li><code>srcBegin</code> is negative.
             <li><code>srcBegin</code> is greater than <code>srcEnd</code>
             <li><code>srcEnd</code> is greater than the length of this
                 string            
 <li><code>dstBegin</code> is negative
             <li><code>dstBegin+(srcEnd-srcBegin)</code> is larger than
                 <code>dst.length</code></ul>
 @throw NullPointerExceptionif <code>dst</code> is <code>null</code>
 */
- (void)getCharsWithInt:(jint)srcBegin
                withInt:(jint)srcEnd
          withCharArray:(IOSCharArray *)dst
                withInt:(jint)dstBegin;

/*!
 @brief Tell if this object contains a java String object.
 @return true if this XMLString can return a string without creating one.
 */
- (jboolean)hasString;

/*!
 @brief Returns the length of this string.
 @return the length of the sequence of characters represented by this
           object.
 */
- (jint)length;

/*!
 @brief Since this object is incomplete without the length and the offset, we 
  have to convert to a string when this function is called.
 @return The java String representation of this object.
 */
- (id)object;

/*!
 @brief Cast result object to a string.
 @return The string this wraps or the empty string if null
 */
- (NSString *)str;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithId:(id)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathObjectsXStringForChars)

J2OBJC_FIELD_SETTER(OrgApacheXpathObjectsXStringForChars, m_strCache_, NSString *)

inline jlong OrgApacheXpathObjectsXStringForChars_get_serialVersionUID(void);
#define OrgApacheXpathObjectsXStringForChars_serialVersionUID -2235248887220850467LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathObjectsXStringForChars, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathObjectsXStringForChars_initWithCharArray_withInt_withInt_(OrgApacheXpathObjectsXStringForChars *self, IOSCharArray *val, jint start, jint length);

FOUNDATION_EXPORT OrgApacheXpathObjectsXStringForChars *new_OrgApacheXpathObjectsXStringForChars_initWithCharArray_withInt_withInt_(IOSCharArray *val, jint start, jint length) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXStringForChars *create_OrgApacheXpathObjectsXStringForChars_initWithCharArray_withInt_withInt_(IOSCharArray *val, jint start, jint length);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathObjectsXStringForChars)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathObjectsXStringForChars")
