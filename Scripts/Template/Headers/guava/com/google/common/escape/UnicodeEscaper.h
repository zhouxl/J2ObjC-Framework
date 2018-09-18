//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/escape/UnicodeEscaper.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonEscapeUnicodeEscaper")
#ifdef RESTRICT_ComGoogleCommonEscapeUnicodeEscaper
#define INCLUDE_ALL_ComGoogleCommonEscapeUnicodeEscaper 0
#else
#define INCLUDE_ALL_ComGoogleCommonEscapeUnicodeEscaper 1
#endif
#undef RESTRICT_ComGoogleCommonEscapeUnicodeEscaper

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonEscapeUnicodeEscaper_) && (INCLUDE_ALL_ComGoogleCommonEscapeUnicodeEscaper || defined(INCLUDE_ComGoogleCommonEscapeUnicodeEscaper))
#define ComGoogleCommonEscapeUnicodeEscaper_

#define RESTRICT_ComGoogleCommonEscapeEscaper 1
#define INCLUDE_ComGoogleCommonEscapeEscaper 1
#include "com/google/common/escape/Escaper.h"

@class IOSCharArray;
@protocol JavaLangCharSequence;

/*!
 @brief An <code>Escaper</code> that converts literal text into a format safe for inclusion in a particular
  context (such as an XML document).Typically (but not always), the inverse process of
  "unescaping" the text is performed automatically by the relevant parser.
 <p>For example, an XML escaper would convert the literal string <code>"Foo<Bar>"</code> into <code>"Foo&lt;Bar&gt;"</code>
  to prevent <code>"<Bar>"</code> from being confused with an XML tag. When the
  resulting XML document is parsed, the parser API will return this text as the original literal
  string <code>"Foo<Bar>"</code>.
  
 <p><b>Note:</b> This class is similar to <code>CharEscaper</code> but with one very important
  difference. A CharEscaper can only process Java <a href="http://en.wikipedia.org/wiki/UTF-16">
 UTF16</a> characters in isolation and may not cope
  when it encounters surrogate pairs. This class facilitates the correct escaping of all Unicode
  characters. 
 <p>As there are important reasons, including potential security issues, to handle Unicode
  correctly if you are considering implementing a new escaper you should favor using UnicodeEscaper
  wherever possible. 
 <p>A <code>UnicodeEscaper</code> instance is required to be stateless, and safe when used concurrently
  by multiple threads. 
 <p>Popular escapers are defined as constants in classes like <code>com.google.common.html.HtmlEscapers</code>
  and <code>com.google.common.xml.XmlEscapers</code>. To create
  your own escapers extend this class and implement the <code>escape(int)</code> method.
 @author David Beaumont
 @since 15.0
 */
@interface ComGoogleCommonEscapeUnicodeEscaper : ComGoogleCommonEscapeEscaper

#pragma mark Public

/*!
 @brief Returns the escaped form of a given literal string.
 <p>If you are escaping input in arbitrary successive chunks, then it is not generally safe to
  use this method. If an input string ends with an unmatched high surrogate character, then this
  method will throw <code>IllegalArgumentException</code>. You should ensure your input is valid <a href="http://en.wikipedia.org/wiki/UTF-16">
 UTF-16</a> before calling this method. 
 <p><b>Note:</b> When implementing an escaper it is a good idea to override this method for
  efficiency by inlining the implementation of <code>int, int)</code>
  directly. Doing this for <code>com.google.common.net.PercentEscaper</code> more than doubled the
  performance for unescaped strings (as measured by <code>CharEscapersBenchmark</code>).
 @param string the literal string to be escaped
 @return the escaped form of <code>string</code>
 @throw NullPointerExceptionif <code>string</code> is null
 @throw IllegalArgumentExceptionif invalid surrogate characters are encountered
 */
- (NSString *)escapeWithNSString:(NSString *)string;

#pragma mark Protected

/*!
 @brief Constructor for use by subclasses.
 */
- (instancetype __nonnull)init;

/*!
 @brief Returns the Unicode code point of the character at the given index.
 <p>Unlike <code>int)</code> or <code>String.codePointAt(int)</code>
  this method will never fail silently when encountering an invalid surrogate pair. 
 <p>The behaviour of this method is as follows: 
 <ol>
    <li>If <code>index >= end</code>, <code>IndexOutOfBoundsException</code> is thrown.
    <li><b>If the character at the specified index is not a surrogate, it is returned.</b>
    <li>If the first character was a high surrogate value, then an attempt is made to read the
        next character.       
 <ol>
          <li><b>If the end of the sequence was reached, the negated value of the trailing high
              surrogate is returned.</b>
          <li><b>If the next character was a valid low surrogate, the code point value of the
              high/low surrogate pair is returned.</b>
          <li>If the next character was not a low surrogate value, then <code>IllegalArgumentException</code>
  is thrown.
        </ol>
    <li>If the first character was a low surrogate value, <code>IllegalArgumentException</code> is
        thrown. 
 </ol>
 @param seq the sequence of characters from which to decode the code point
 @param index the index of the first character to decode
 @param end the index beyond the last valid character to decode
 @return the Unicode code point for the given index or the negated value of the trailing high
      surrogate character at the end of the sequence
 */
+ (jint)codePointAtWithJavaLangCharSequence:(id<JavaLangCharSequence>)seq
                                    withInt:(jint)index
                                    withInt:(jint)end;

/*!
 @brief Returns the escaped form of the given Unicode code point, or <code>null</code> if this code point
  does not need to be escaped.When called as part of an escaping operation, the given code point
  is guaranteed to be in the range <code>0 <= cp <= Character#MAX_CODE_POINT</code>.
 <p>If an empty array is returned, this effectively strips the input character from the
  resulting text. 
 <p>If the character does not need to be escaped, this method should return <code>null</code>, rather
  than an array containing the character representation of the code point. This enables the
  escaping algorithm to perform more efficiently. 
 <p>If the implementation of this method cannot correctly handle a particular code point then it
  should either throw an appropriate runtime exception or return a suitable replacement
  character. It must never silently discard invalid input as this may constitute a security risk.
 @param cp the Unicode code point to escape if necessary
 @return the replacement characters, or <code>null</code> if no escaping was needed
 */
- (IOSCharArray *)escapeWithInt:(jint)cp;

/*!
 @brief Returns the escaped form of a given literal string, starting at the given index.This method is
  called by the <code>escape(String)</code> method when it discovers that escaping is required.
 It is
  protected to allow subclasses to override the fastpath escaping function to inline their
  escaping test. See <code>CharEscaperBuilder</code> for an example usage. 
 <p>This method is not reentrant and may only be invoked by the top level <code>escape(String)</code>
  method.
 @param s the literal string to be escaped
 @param index the index to start escaping from
 @return the escaped form of <code>string</code>
 @throw NullPointerExceptionif <code>string</code> is null
 @throw IllegalArgumentExceptionif invalid surrogate characters are encountered
 */
- (NSString *)escapeSlowWithNSString:(NSString *)s
                             withInt:(jint)index;

/*!
 @brief Scans a sub-sequence of characters from a given <code>CharSequence</code>, returning the index of
  the next character that requires escaping.
 <p><b>Note:</b> When implementing an escaper, it is a good idea to override this method for
  efficiency. The base class implementation determines successive Unicode code points and invokes 
 <code>escape(int)</code> for each of them. If the semantics of your escaper are such that code
  points in the supplementary range are either all escaped or all unescaped, this method can be
  implemented more efficiently using <code>CharSequence.charAt(int)</code>.
  
 <p>Note however that if your escaper does not escape characters in the supplementary range, you
  should either continue to validate the correctness of any surrogate characters encountered or
  provide a clear warning to users that your escaper does not validate its input. 
 <p>See <code>com.google.common.net.PercentEscaper</code> for an example.
 @param csq a sequence of characters
 @param start the index of the first character to be scanned
 @param end the index immediately after the last character to be scanned
 @throw IllegalArgumentExceptionif the scanned sub-sequence of <code>csq</code> contains invalid
      surrogate pairs
 */
- (jint)nextEscapeIndexWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq
                                        withInt:(jint)start
                                        withInt:(jint)end;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonEscapeUnicodeEscaper)

FOUNDATION_EXPORT void ComGoogleCommonEscapeUnicodeEscaper_init(ComGoogleCommonEscapeUnicodeEscaper *self);

FOUNDATION_EXPORT jint ComGoogleCommonEscapeUnicodeEscaper_codePointAtWithJavaLangCharSequence_withInt_withInt_(id<JavaLangCharSequence> seq, jint index, jint end);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonEscapeUnicodeEscaper)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonEscapeUnicodeEscaper")
