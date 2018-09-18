//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/primitives/Longs.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesLongs")
#ifdef RESTRICT_ComGoogleCommonPrimitivesLongs
#define INCLUDE_ALL_ComGoogleCommonPrimitivesLongs 0
#else
#define INCLUDE_ALL_ComGoogleCommonPrimitivesLongs 1
#endif
#undef RESTRICT_ComGoogleCommonPrimitivesLongs

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonPrimitivesLongs_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesLongs || defined(INCLUDE_ComGoogleCommonPrimitivesLongs))
#define ComGoogleCommonPrimitivesLongs_

@class ComGoogleCommonBaseConverter;
@class IOSByteArray;
@class IOSLongArray;
@class IOSObjectArray;
@class JavaLangLong;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilList;

/*!
 @brief Static utility methods pertaining to <code>long</code> primitives, that are not already found in
  either <code>Long</code> or <code>Arrays</code>.
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/PrimitivesExplained">
 primitive utilities</a>.
 @author Kevin Bourrillion
 @since 1.0
 */
@interface ComGoogleCommonPrimitivesLongs : NSObject
@property (readonly, class) jint BYTES NS_SWIFT_NAME(BYTES);
@property (readonly, class) jlong MAX_POWER_OF_TWO NS_SWIFT_NAME(MAX_POWER_OF_TWO);

+ (jint)BYTES;

+ (jlong)MAX_POWER_OF_TWO;

#pragma mark Public

/*!
 @brief Returns a fixed-size list backed by the specified array, similar to <code>Arrays.asList(Object[])</code>
 .The list supports <code>Object)</code>, but any attempt to
  set a value to <code>null</code> will result in a <code>NullPointerException</code>.
 <p>The returned list maintains the values, but not the identities, of <code>Long</code> objects
  written to or read from it. For example, whether <code>list.get(0) == list.get(0)</code> is true for
  the returned list is unspecified. 
 <p><b>Note:</b> when possible, you should represent your data as an <code>ImmutableLongArray</code>
  instead, which has an <code>asList</code> view.
 @param backingArray the array to back the list
 @return a list view of the array
 */
+ (id<JavaUtilList>)asListWithLongArray:(IOSLongArray *)backingArray;

/*!
 @brief Compares the two specified <code>long</code> values.The sign of the value returned is the same as
  that of <code>((Long) a).compareTo(b)</code>.
 <p><b>Note for Java 7 and later:</b> this method should be treated as deprecated; use the
  equivalent <code>Long.compare</code> method instead.
 @param a the first <code>long</code>  to compare
 @param b the second <code>long</code>  to compare
 @return a negative value if <code>a</code> is less than <code>b</code>; a positive value if <code>a</code> is
      greater than <code>b</code>; or zero if they are equal
 */
+ (jint)compareWithLong:(jlong)a
               withLong:(jlong)b;

/*!
 @brief Returns the values from each provided array combined into a single array.For example, <code>concat(new long[] {a, b}, new long[] {}, new long[] {c}</code>
  returns the array <code>{a, b, c}</code>.
 @param arrays zero or more <code>long</code>  arrays
 @return a single array containing all the values from the source arrays, in order
 */
+ (IOSLongArray *)concatWithLongArray2:(IOSObjectArray *)arrays;

/*!
 @brief Returns the value nearest to <code>value</code> which is within the closed range <code>[min..max]</code>.
 <p>If <code>value</code> is within the range <code>[min..max]</code>, <code>value</code> is returned
  unchanged. If <code>value</code> is less than <code>min</code>, <code>min</code> is returned, and if <code>value</code>
  is greater than <code>max</code>, <code>max</code> is returned.
 @param value the <code>long</code>  value to constrain
 @param min the lower bound (inclusive) of the range to constrain <code>value</code>  to
 @param max the upper bound (inclusive) of the range to constrain <code>value</code>  to
 @throw IllegalArgumentExceptionif <code>min > max</code>
 @since 21.0
 */
+ (jlong)constrainToRangeWithLong:(jlong)value
                         withLong:(jlong)min
                         withLong:(jlong)max;

/*!
 @brief Returns <code>true</code> if <code>target</code> is present as an element anywhere in <code>array</code>.
 @param array an array of <code>long</code>  values, possibly empty
 @param target a primitive <code>long</code>  value
 @return <code>true</code> if <code>array[i] == target</code> for some value of <code>i</code>
 */
+ (jboolean)containsWithLongArray:(IOSLongArray *)array
                         withLong:(jlong)target;

/*!
 @brief Returns an array containing the same values as <code>array</code>, but guaranteed to be of a
  specified minimum length.If <code>array</code> already has a length of at least <code>minLength</code>,
  it is returned directly.
 Otherwise, a new array of size <code>minLength + padding</code> is
  returned, containing the values of <code>array</code>, and zeroes in the remaining places.
 @param array the source array
 @param minLength the minimum length the returned array must guarantee
 @param padding an extra amount to "grow" the array by if growth is necessary
 @throw IllegalArgumentExceptionif <code>minLength</code> or <code>padding</code> is negative
 @return an array containing the values of <code>array</code>, with guaranteed minimum length <code>minLength</code>
 */
+ (IOSLongArray *)ensureCapacityWithLongArray:(IOSLongArray *)array
                                      withInt:(jint)minLength
                                      withInt:(jint)padding;

/*!
 @brief Returns the <code>long</code> value whose big-endian representation is stored in the first 8 bytes
  of <code>bytes</code>; equivalent to <code>ByteBuffer.wrap(bytes).getLong()</code>.For example, the
  input byte array <code>{0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19}</code> would yield the 
 <code>long</code> value <code>0x1213141516171819L</code>.
 <p>Arguably, it's preferable to use <code>java.nio.ByteBuffer</code>; that library exposes much more
  flexibility at little cost in readability.
 @throw IllegalArgumentExceptionif <code>bytes</code> has fewer than 8 elements
 */
+ (jlong)fromByteArrayWithByteArray:(IOSByteArray *)bytes;

/*!
 @brief Returns the <code>long</code> value whose byte representation is the given 8 bytes, in big-endian
  order; equivalent to <code>Longs.fromByteArray(new byte[] {b1, b2, b3, b4, b5, b6, b7, b8})</code>.
 @since 7.0
 */
+ (jlong)fromBytesWithByte:(jbyte)b1
                  withByte:(jbyte)b2
                  withByte:(jbyte)b3
                  withByte:(jbyte)b4
                  withByte:(jbyte)b5
                  withByte:(jbyte)b6
                  withByte:(jbyte)b7
                  withByte:(jbyte)b8;

/*!
 @brief Returns a hash code for <code>value</code>; equal to the result of invoking <code>((Long)
  value).hashCode()</code>
 .
 <p>This method always return the value specified by <code>Long.hashCode()</code> in java, which
  might be different from <code>((Long) value).hashCode()</code> in GWT because <code>Long.hashCode()</code>
  in GWT does not obey the JRE contract. 
 <p><b>Java 8 users:</b> use <code>Long.hashCode(long)</code> instead.
 @param value a primitive <code>long</code>  value
 @return a hash code for the value
 */
+ (jint)hashCodeWithLong:(jlong)value;

/*!
 @brief Returns the index of the first appearance of the value <code>target</code> in <code>array</code>.
 @param array an array of <code>long</code>  values, possibly empty
 @param target a primitive <code>long</code>  value
 @return the least index <code>i</code> for which <code>array[i] == target</code>, or <code>-1</code> if no
      such index exists.
 */
+ (jint)indexOfWithLongArray:(IOSLongArray *)array
                    withLong:(jlong)target;

/*!
 @brief Returns the start position of the first occurrence of the specified <code>target</code> within 
 <code>array</code>, or <code>-1</code> if there is no such occurrence.
 <p>More formally, returns the lowest index <code>i</code> such that <code>Arrays.copyOfRange(array,
  i, i + target.length)</code>
  contains exactly the same elements as <code>target</code>.
 @param array the array to search for the sequence <code>target</code>
 @param target the array to search for as a sub-sequence of <code>array</code>
 */
+ (jint)indexOfWithLongArray:(IOSLongArray *)array
               withLongArray:(IOSLongArray *)target;

/*!
 @brief Returns a string containing the supplied <code>long</code> values separated by <code>separator</code>.
 For example, <code>join("-", 1L, 2L, 3L)</code> returns the string <code>"1-2-3"</code>.
 @param separator the text that should appear between consecutive values in the resulting string      (but not at the start or end)
 @param array an array of <code>long</code>  values, possibly empty
 */
+ (NSString *)joinWithNSString:(NSString *)separator
                 withLongArray:(IOSLongArray *)array;

/*!
 @brief Returns the index of the last appearance of the value <code>target</code> in <code>array</code>.
 @param array an array of <code>long</code>  values, possibly empty
 @param target a primitive <code>long</code>  value
 @return the greatest index <code>i</code> for which <code>array[i] == target</code>, or <code>-1</code> if no
      such index exists.
 */
+ (jint)lastIndexOfWithLongArray:(IOSLongArray *)array
                        withLong:(jlong)target;

/*!
 @brief Returns a comparator that compares two <code>long</code> arrays <a href="http://en.wikipedia.org/wiki/Lexicographical_order">
 lexicographically</a>.That is, it
  compares, using <code>long)</code>), the first pair of values that follow any common
  prefix, or when one array is a prefix of the other, treats the shorter array as the lesser.
 For
  example, <code>[] < [1L] < [1L, 2L] < [2L]</code>.
  
 <p>The returned comparator is inconsistent with <code>Object.equals(Object)</code> (since arrays
  support only identity equality), but it is consistent with <code>long[])</code>
 .
 @since 2.0
 */
+ (id<JavaUtilComparator>)lexicographicalComparator;

/*!
 @brief Returns the greatest value present in <code>array</code>.
 @param array a  <i> nonempty </i>  array of <code>long</code>  values
 @return the value present in <code>array</code> that is greater than or equal to every other value
      in the array
 @throw IllegalArgumentExceptionif <code>array</code> is empty
 */
+ (jlong)maxWithLongArray:(IOSLongArray *)array;

/*!
 @brief Returns the least value present in <code>array</code>.
 @param array a  <i> nonempty </i>  array of <code>long</code>  values
 @return the value present in <code>array</code> that is less than or equal to every other value in
      the array
 @throw IllegalArgumentExceptionif <code>array</code> is empty
 */
+ (jlong)minWithLongArray:(IOSLongArray *)array;

/*!
 @brief Reverses the elements of <code>array</code>.This is equivalent to <code>Collections.reverse(Longs.asList(array))</code>
 , but is likely to be more efficient.
 @since 23.1
 */
+ (void)reverseWithLongArray:(IOSLongArray *)array;

/*!
 @brief Reverses the elements of <code>array</code> between <code>fromIndex</code> inclusive and <code>toIndex</code>
  exclusive.This is equivalent to <code>Collections.reverse(Longs.asList(array).subList(fromIndex, toIndex))</code>
 , but is likely to be more
  efficient.
 @throw IndexOutOfBoundsExceptionif <code>fromIndex < 0</code>, <code>toIndex > array.length</code>, or
      <code>toIndex > fromIndex</code>
 @since 23.1
 */
+ (void)reverseWithLongArray:(IOSLongArray *)array
                     withInt:(jint)fromIndex
                     withInt:(jint)toIndex;

/*!
 @brief Sorts the elements of <code>array</code> in descending order.
 @since 23.1
 */
+ (void)sortDescendingWithLongArray:(IOSLongArray *)array;

/*!
 @brief Sorts the elements of <code>array</code> between <code>fromIndex</code> inclusive and <code>toIndex</code>
  exclusive in descending order.
 @since 23.1
 */
+ (void)sortDescendingWithLongArray:(IOSLongArray *)array
                            withInt:(jint)fromIndex
                            withInt:(jint)toIndex;

/*!
 @brief Returns a serializable converter object that converts between strings and longs using <code>Long.decode</code>
  and <code>Long.toString()</code>.The returned converter throws <code>NumberFormatException</code>
  if the input string is invalid.
 <p><b>Warning:</b> please see <code>Long.decode</code> to understand exactly how strings are parsed.
  For example, the string <code>"0123"</code> is treated as <i>octal</i> and converted to the value 
 <code>83L</code>.
 @since 16.0
 */
+ (ComGoogleCommonBaseConverter *)stringConverter;

/*!
 @brief Returns an array containing each value of <code>collection</code>, converted to a <code>long</code> value
  in the manner of <code>Number.longValue</code>.
 <p>Elements are copied from the argument collection as if by <code>collection.toArray()</code>.
  Calling this method is as thread-safe as calling that method.
 @param collection a collection of <code>Number</code>  instances
 @return an array containing the same values as <code>collection</code>, in the same order, converted
      to primitives
 @throw NullPointerExceptionif <code>collection</code> or any of its elements is null
 @since 1.0 (parameter was <code>Collection<Long></code> before 12.0)
 */
+ (IOSLongArray *)toArrayWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Returns a big-endian representation of <code>value</code> in an 8-element byte array; equivalent to 
 <code>ByteBuffer.allocate(8).putLong(value).array()</code>.For example, the input value <code>0x1213141516171819L</code>
  would yield the byte array <code>{0x12, 0x13, 0x14, 0x15, 0x16, 0x17,
  0x18, 0x19}</code>
 .
 <p>If you need to convert and concatenate several values (possibly even of different types),
  use a shared <code>java.nio.ByteBuffer</code> instance, or use <code>com.google.common.io.ByteStreams</code>
  to get a growable buffer.
 */
+ (IOSByteArray *)toByteArrayWithLong:(jlong)value;

/*!
 @brief Parses the specified string as a signed decimal long value.The ASCII character <code>'-'</code> ( 
 <code>'&#92;u002D'</code>) is recognized as the minus sign.
 <p>Unlike <code>Long.parseLong(String)</code>, this method returns <code>null</code> instead of throwing
  an exception if parsing fails. Additionally, this method only accepts ASCII digits, and returns 
 <code>null</code> if non-ASCII digits are present in the string. 
 <p>Note that strings prefixed with ASCII <code>'+'</code> are rejected, even under JDK 7, despite
  the change to <code>Long.parseLong(String)</code> for that version.
 @param string the string representation of a long value
 @return the long value represented by <code>string</code>, or <code>null</code> if <code>string</code> has a
      length of zero or cannot be parsed as a long value
 @since 14.0
 */
+ (JavaLangLong * __nullable)tryParseWithNSString:(NSString *)string;

/*!
 @brief Parses the specified string as a signed long value using the specified radix.The ASCII
  character <code>'-'</code> (<code>'&#92;u002D'</code>) is recognized as the minus sign.
 <p>Unlike <code>int)</code>, this method returns <code>null</code> instead of
  throwing an exception if parsing fails. Additionally, this method only accepts ASCII digits,
  and returns <code>null</code> if non-ASCII digits are present in the string. 
 <p>Note that strings prefixed with ASCII <code>'+'</code> are rejected, even under JDK 7, despite
  the change to <code>int)</code> for that version.
 @param string the string representation of an long value
 @param radix the radix to use when parsing
 @return the long value represented by <code>string</code> using <code>radix</code>, or <code>null</code> if
      <code>string</code> has a length of zero or cannot be parsed as a long value
 @throw IllegalArgumentExceptionif <code>radix < Character.MIN_RADIX</code> or <code>radix >
      Character.MAX_RADIX</code>
 @since 19.0
 */
+ (JavaLangLong * __nullable)tryParseWithNSString:(NSString *)string
                                          withInt:(jint)radix;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonPrimitivesLongs)

/*!
 @brief The number of bytes required to represent a primitive <code>long</code> value.
 <p><b>Java 8 users:</b> use <code>Long.BYTES</code> instead.
 */
inline jint ComGoogleCommonPrimitivesLongs_get_BYTES(void);
#define ComGoogleCommonPrimitivesLongs_BYTES 8
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonPrimitivesLongs, BYTES, jint)

/*!
 @brief The largest power of two that can be represented as a <code>long</code>.
 @since 10.0
 */
inline jlong ComGoogleCommonPrimitivesLongs_get_MAX_POWER_OF_TWO(void);
#define ComGoogleCommonPrimitivesLongs_MAX_POWER_OF_TWO 4611686018427387904LL
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonPrimitivesLongs, MAX_POWER_OF_TWO, jlong)

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesLongs_hashCodeWithLong_(jlong value);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesLongs_compareWithLong_withLong_(jlong a, jlong b);

FOUNDATION_EXPORT jboolean ComGoogleCommonPrimitivesLongs_containsWithLongArray_withLong_(IOSLongArray *array, jlong target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesLongs_indexOfWithLongArray_withLong_(IOSLongArray *array, jlong target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesLongs_indexOfWithLongArray_withLongArray_(IOSLongArray *array, IOSLongArray *target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesLongs_lastIndexOfWithLongArray_withLong_(IOSLongArray *array, jlong target);

FOUNDATION_EXPORT jlong ComGoogleCommonPrimitivesLongs_minWithLongArray_(IOSLongArray *array);

FOUNDATION_EXPORT jlong ComGoogleCommonPrimitivesLongs_maxWithLongArray_(IOSLongArray *array);

FOUNDATION_EXPORT jlong ComGoogleCommonPrimitivesLongs_constrainToRangeWithLong_withLong_withLong_(jlong value, jlong min, jlong max);

FOUNDATION_EXPORT IOSLongArray *ComGoogleCommonPrimitivesLongs_concatWithLongArray2_(IOSObjectArray *arrays);

FOUNDATION_EXPORT IOSByteArray *ComGoogleCommonPrimitivesLongs_toByteArrayWithLong_(jlong value);

FOUNDATION_EXPORT jlong ComGoogleCommonPrimitivesLongs_fromByteArrayWithByteArray_(IOSByteArray *bytes);

FOUNDATION_EXPORT jlong ComGoogleCommonPrimitivesLongs_fromBytesWithByte_withByte_withByte_withByte_withByte_withByte_withByte_withByte_(jbyte b1, jbyte b2, jbyte b3, jbyte b4, jbyte b5, jbyte b6, jbyte b7, jbyte b8);

FOUNDATION_EXPORT JavaLangLong *ComGoogleCommonPrimitivesLongs_tryParseWithNSString_(NSString *string);

FOUNDATION_EXPORT JavaLangLong *ComGoogleCommonPrimitivesLongs_tryParseWithNSString_withInt_(NSString *string, jint radix);

FOUNDATION_EXPORT ComGoogleCommonBaseConverter *ComGoogleCommonPrimitivesLongs_stringConverter(void);

FOUNDATION_EXPORT IOSLongArray *ComGoogleCommonPrimitivesLongs_ensureCapacityWithLongArray_withInt_withInt_(IOSLongArray *array, jint minLength, jint padding);

FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesLongs_joinWithNSString_withLongArray_(NSString *separator, IOSLongArray *array);

FOUNDATION_EXPORT id<JavaUtilComparator> ComGoogleCommonPrimitivesLongs_lexicographicalComparator(void);

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesLongs_sortDescendingWithLongArray_(IOSLongArray *array);

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesLongs_sortDescendingWithLongArray_withInt_withInt_(IOSLongArray *array, jint fromIndex, jint toIndex);

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesLongs_reverseWithLongArray_(IOSLongArray *array);

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesLongs_reverseWithLongArray_withInt_withInt_(IOSLongArray *array, jint fromIndex, jint toIndex);

FOUNDATION_EXPORT IOSLongArray *ComGoogleCommonPrimitivesLongs_toArrayWithJavaUtilCollection_(id<JavaUtilCollection> collection);

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonPrimitivesLongs_asListWithLongArray_(IOSLongArray *backingArray);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesLongs)

#endif

#if !defined (ComGoogleCommonPrimitivesLongs_AsciiDigits_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesLongs || defined(INCLUDE_ComGoogleCommonPrimitivesLongs_AsciiDigits))
#define ComGoogleCommonPrimitivesLongs_AsciiDigits_

@interface ComGoogleCommonPrimitivesLongs_AsciiDigits : NSObject

#pragma mark Package-Private

+ (jint)digitWithChar:(jchar)c;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonPrimitivesLongs_AsciiDigits)

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesLongs_AsciiDigits_digitWithChar_(jchar c);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesLongs_AsciiDigits)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesLongs")
