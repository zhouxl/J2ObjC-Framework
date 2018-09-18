//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/primitives/Ints.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesInts")
#ifdef RESTRICT_ComGoogleCommonPrimitivesInts
#define INCLUDE_ALL_ComGoogleCommonPrimitivesInts 0
#else
#define INCLUDE_ALL_ComGoogleCommonPrimitivesInts 1
#endif
#undef RESTRICT_ComGoogleCommonPrimitivesInts

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonPrimitivesInts_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesInts || defined(INCLUDE_ComGoogleCommonPrimitivesInts))
#define ComGoogleCommonPrimitivesInts_

@class ComGoogleCommonBaseConverter;
@class IOSByteArray;
@class IOSIntArray;
@class IOSObjectArray;
@class JavaLangInteger;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilList;

/*!
 @brief Static utility methods pertaining to <code>int</code> primitives, that are not already found in either 
 <code>Integer</code> or <code>Arrays</code>.
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/PrimitivesExplained">
 primitive utilities</a>.
 @author Kevin Bourrillion
 @since 1.0
 */
@interface ComGoogleCommonPrimitivesInts : NSObject
@property (readonly, class) jint BYTES NS_SWIFT_NAME(BYTES);
@property (readonly, class) jint MAX_POWER_OF_TWO NS_SWIFT_NAME(MAX_POWER_OF_TWO);

+ (jint)BYTES;

+ (jint)MAX_POWER_OF_TWO;

#pragma mark Public

/*!
 @brief Returns a fixed-size list backed by the specified array, similar to <code>Arrays.asList(Object[])</code>
 .The list supports <code>Object)</code>, but any attempt to
  set a value to <code>null</code> will result in a <code>NullPointerException</code>.
 <p>The returned list maintains the values, but not the identities, of <code>Integer</code> objects
  written to or read from it. For example, whether <code>list.get(0) == list.get(0)</code> is true for
  the returned list is unspecified. 
 <p><b>Note:</b> when possible, you should represent your data as an <code>ImmutableIntArray</code>
  instead, which has an <code>asList</code> view.
 @param backingArray the array to back the list
 @return a list view of the array
 */
+ (id<JavaUtilList>)asListWithIntArray:(IOSIntArray *)backingArray;

/*!
 @brief Returns the <code>int</code> value that is equal to <code>value</code>, if possible.
 @param value any value in the range of the <code>int</code>  type
 @return the <code>int</code> value that equals <code>value</code>
 @throw IllegalArgumentExceptionif <code>value</code> is greater than <code>Integer.MAX_VALUE</code> or
      less than <code>Integer.MIN_VALUE</code>
 */
+ (jint)checkedCastWithLong:(jlong)value;

/*!
 @brief Compares the two specified <code>int</code> values.The sign of the value returned is the same as
  that of <code>((Integer) a).compareTo(b)</code>.
 <p><b>Note for Java 7 and later:</b> this method should be treated as deprecated; use the
  equivalent <code>Integer.compare</code> method instead.
 @param a the first <code>int</code>  to compare
 @param b the second <code>int</code>  to compare
 @return a negative value if <code>a</code> is less than <code>b</code>; a positive value if <code>a</code> is
      greater than <code>b</code>; or zero if they are equal
 */
+ (jint)compareWithInt:(jint)a
               withInt:(jint)b;

/*!
 @brief Returns the values from each provided array combined into a single array.For example, <code>concat(new int[] {a, b}, new int[] {}, new int[] {c}</code>
  returns the array <code>{a, b, c}</code>.
 @param arrays zero or more <code>int</code>  arrays
 @return a single array containing all the values from the source arrays, in order
 */
+ (IOSIntArray *)concatWithIntArray2:(IOSObjectArray *)arrays;

/*!
 @brief Returns the value nearest to <code>value</code> which is within the closed range <code>[min..max]</code>.
 <p>If <code>value</code> is within the range <code>[min..max]</code>, <code>value</code> is returned
  unchanged. If <code>value</code> is less than <code>min</code>, <code>min</code> is returned, and if <code>value</code>
  is greater than <code>max</code>, <code>max</code> is returned.
 @param value the <code>int</code>  value to constrain
 @param min the lower bound (inclusive) of the range to constrain <code>value</code>  to
 @param max the upper bound (inclusive) of the range to constrain <code>value</code>  to
 @throw IllegalArgumentExceptionif <code>min > max</code>
 @since 21.0
 */
+ (jint)constrainToRangeWithInt:(jint)value
                        withInt:(jint)min
                        withInt:(jint)max;

/*!
 @brief Returns <code>true</code> if <code>target</code> is present as an element anywhere in <code>array</code>.
 @param array an array of <code>int</code>  values, possibly empty
 @param target a primitive <code>int</code>  value
 @return <code>true</code> if <code>array[i] == target</code> for some value of <code>i</code>
 */
+ (jboolean)containsWithIntArray:(IOSIntArray *)array
                         withInt:(jint)target;

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
+ (IOSIntArray *)ensureCapacityWithIntArray:(IOSIntArray *)array
                                    withInt:(jint)minLength
                                    withInt:(jint)padding;

/*!
 @brief Returns the <code>int</code> value whose big-endian representation is stored in the first 4 bytes of 
 <code>bytes</code>; equivalent to <code>ByteBuffer.wrap(bytes).getInt()</code>.For example, the input
  byte array <code>{0x12, 0x13, 0x14, 0x15, 0x33}</code> would yield the <code>int</code> value <code>0x12131415</code>
 .
 <p>Arguably, it's preferable to use <code>java.nio.ByteBuffer</code>; that library exposes much more
  flexibility at little cost in readability.
 @throw IllegalArgumentExceptionif <code>bytes</code> has fewer than 4 elements
 */
+ (jint)fromByteArrayWithByteArray:(IOSByteArray *)bytes;

/*!
 @brief Returns the <code>int</code> value whose byte representation is the given 4 bytes, in big-endian
  order; equivalent to <code>Ints.fromByteArray(new byte[] {b1, b2, b3, b4})</code>.
 @since 7.0
 */
+ (jint)fromBytesWithByte:(jbyte)b1
                 withByte:(jbyte)b2
                 withByte:(jbyte)b3
                 withByte:(jbyte)b4;

/*!
 @brief Returns a hash code for <code>value</code>; equal to the result of invoking <code>((Integer)
  value).hashCode()</code>
 .
 <p><b>Java 8 users:</b> use <code>Integer.hashCode(int)</code> instead.
 @param value a primitive <code>int</code>  value
 @return a hash code for the value
 */
+ (jint)hashCodeWithInt:(jint)value;

/*!
 @brief Returns the index of the first appearance of the value <code>target</code> in <code>array</code>.
 @param array an array of <code>int</code>  values, possibly empty
 @param target a primitive <code>int</code>  value
 @return the least index <code>i</code> for which <code>array[i] == target</code>, or <code>-1</code> if no
      such index exists.
 */
+ (jint)indexOfWithIntArray:(IOSIntArray *)array
                    withInt:(jint)target;

/*!
 @brief Returns the start position of the first occurrence of the specified <code>target</code> within 
 <code>array</code>, or <code>-1</code> if there is no such occurrence.
 <p>More formally, returns the lowest index <code>i</code> such that <code>Arrays.copyOfRange(array,
  i, i + target.length)</code>
  contains exactly the same elements as <code>target</code>.
 @param array the array to search for the sequence <code>target</code>
 @param target the array to search for as a sub-sequence of <code>array</code>
 */
+ (jint)indexOfWithIntArray:(IOSIntArray *)array
               withIntArray:(IOSIntArray *)target;

/*!
 @brief Returns a string containing the supplied <code>int</code> values separated by <code>separator</code>.For
  example, <code>join("-", 1, 2, 3)</code> returns the string <code>"1-2-3"</code>.
 @param separator the text that should appear between consecutive values in the resulting string      (but not at the start or end)
 @param array an array of <code>int</code>  values, possibly empty
 */
+ (NSString *)joinWithNSString:(NSString *)separator
                  withIntArray:(IOSIntArray *)array;

/*!
 @brief Returns the index of the last appearance of the value <code>target</code> in <code>array</code>.
 @param array an array of <code>int</code>  values, possibly empty
 @param target a primitive <code>int</code>  value
 @return the greatest index <code>i</code> for which <code>array[i] == target</code>, or <code>-1</code> if no
      such index exists.
 */
+ (jint)lastIndexOfWithIntArray:(IOSIntArray *)array
                        withInt:(jint)target;

/*!
 @brief Returns a comparator that compares two <code>int</code> arrays <a href="http://en.wikipedia.org/wiki/Lexicographical_order">
 lexicographically</a>.That is, it
  compares, using <code>int)</code>), the first pair of values that follow any common
  prefix, or when one array is a prefix of the other, treats the shorter array as the lesser.
 For
  example, <code>[] < [1] < [1, 2] < [2]</code>.
  
 <p>The returned comparator is inconsistent with <code>Object.equals(Object)</code> (since arrays
  support only identity equality), but it is consistent with <code>int[])</code>.
 @since 2.0
 */
+ (id<JavaUtilComparator>)lexicographicalComparator;

/*!
 @brief Returns the greatest value present in <code>array</code>.
 @param array a  <i> nonempty </i>  array of <code>int</code>  values
 @return the value present in <code>array</code> that is greater than or equal to every other value
      in the array
 @throw IllegalArgumentExceptionif <code>array</code> is empty
 */
+ (jint)maxWithIntArray:(IOSIntArray *)array;

/*!
 @brief Returns the least value present in <code>array</code>.
 @param array a  <i> nonempty </i>  array of <code>int</code>  values
 @return the value present in <code>array</code> that is less than or equal to every other value in
      the array
 @throw IllegalArgumentExceptionif <code>array</code> is empty
 */
+ (jint)minWithIntArray:(IOSIntArray *)array;

/*!
 @brief Reverses the elements of <code>array</code>.This is equivalent to <code>Collections.reverse(Ints.asList(array))</code>
 , but is likely to be more efficient.
 @since 23.1
 */
+ (void)reverseWithIntArray:(IOSIntArray *)array;

/*!
 @brief Reverses the elements of <code>array</code> between <code>fromIndex</code> inclusive and <code>toIndex</code>
  exclusive.This is equivalent to <code>Collections.reverse(Ints.asList(array).subList(fromIndex, toIndex))</code>
 , but is likely to be more
  efficient.
 @throw IndexOutOfBoundsExceptionif <code>fromIndex < 0</code>, <code>toIndex > array.length</code>, or
      <code>toIndex > fromIndex</code>
 @since 23.1
 */
+ (void)reverseWithIntArray:(IOSIntArray *)array
                    withInt:(jint)fromIndex
                    withInt:(jint)toIndex;

/*!
 @brief Returns the <code>int</code> nearest in value to <code>value</code>.
 @param value any <code>long</code>  value
 @return the same value cast to <code>int</code> if it is in the range of the <code>int</code> type,
      <code>Integer.MAX_VALUE</code> if it is too large, or <code>Integer.MIN_VALUE</code> if it is too
      small
 */
+ (jint)saturatedCastWithLong:(jlong)value;

/*!
 @brief Sorts the elements of <code>array</code> in descending order.
 @since 23.1
 */
+ (void)sortDescendingWithIntArray:(IOSIntArray *)array;

/*!
 @brief Sorts the elements of <code>array</code> between <code>fromIndex</code> inclusive and <code>toIndex</code>
  exclusive in descending order.
 @since 23.1
 */
+ (void)sortDescendingWithIntArray:(IOSIntArray *)array
                           withInt:(jint)fromIndex
                           withInt:(jint)toIndex;

/*!
 @brief Returns a serializable converter object that converts between strings and integers using <code>Integer.decode</code>
  and <code>Integer.toString()</code>.The returned converter throws <code>NumberFormatException</code>
  if the input string is invalid.
 <p><b>Warning:</b> please see <code>Integer.decode</code> to understand exactly how strings are
  parsed. For example, the string <code>"0123"</code> is treated as <i>octal</i> and converted to the
  value <code>83</code>.
 @since 16.0
 */
+ (ComGoogleCommonBaseConverter *)stringConverter;

/*!
 @brief Returns an array containing each value of <code>collection</code>, converted to a <code>int</code> value
  in the manner of <code>Number.intValue</code>.
 <p>Elements are copied from the argument collection as if by <code>collection.toArray()</code>.
  Calling this method is as thread-safe as calling that method.
 @param collection a collection of <code>Number</code>  instances
 @return an array containing the same values as <code>collection</code>, in the same order, converted
      to primitives
 @throw NullPointerExceptionif <code>collection</code> or any of its elements is null
 @since 1.0 (parameter was <code>Collection<Integer></code> before 12.0)
 */
+ (IOSIntArray *)toArrayWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Returns a big-endian representation of <code>value</code> in a 4-element byte array; equivalent to 
 <code>ByteBuffer.allocate(4).putInt(value).array()</code>.For example, the input value <code>0x12131415</code>
  would yield the byte array <code>{0x12, 0x13, 0x14, 0x15}</code>.
 <p>If you need to convert and concatenate several values (possibly even of different types),
  use a shared <code>java.nio.ByteBuffer</code> instance, or use <code>com.google.common.io.ByteStreams</code>
  to get a growable buffer.
 */
+ (IOSByteArray *)toByteArrayWithInt:(jint)value;

/*!
 @brief Parses the specified string as a signed decimal integer value.The ASCII character <code>'-'</code>
  (<code>'&#92;u002D'</code>) is recognized as the minus sign.
 <p>Unlike <code>Integer.parseInt(String)</code>, this method returns <code>null</code> instead of
  throwing an exception if parsing fails. Additionally, this method only accepts ASCII digits,
  and returns <code>null</code> if non-ASCII digits are present in the string. 
 <p>Note that strings prefixed with ASCII <code>'+'</code> are rejected, even under JDK 7, despite
  the change to <code>Integer.parseInt(String)</code> for that version.
 @param string the string representation of an integer value
 @return the integer value represented by <code>string</code>, or <code>null</code> if <code>string</code> has
      a length of zero or cannot be parsed as an integer value
 @since 11.0
 */
+ (JavaLangInteger * __nullable)tryParseWithNSString:(NSString *)string;

/*!
 @brief Parses the specified string as a signed integer value using the specified radix.The ASCII
  character <code>'-'</code> (<code>'&#92;u002D'</code>) is recognized as the minus sign.
 <p>Unlike <code>int)</code>, this method returns <code>null</code> instead of
  throwing an exception if parsing fails. Additionally, this method only accepts ASCII digits,
  and returns <code>null</code> if non-ASCII digits are present in the string. 
 <p>Note that strings prefixed with ASCII <code>'+'</code> are rejected, even under JDK 7, despite
  the change to <code>int)</code> for that version.
 @param string the string representation of an integer value
 @param radix the radix to use when parsing
 @return the integer value represented by <code>string</code> using <code>radix</code>, or <code>null</code> if
      <code>string</code> has a length of zero or cannot be parsed as an integer value
 @throw IllegalArgumentExceptionif <code>radix < Character.MIN_RADIX</code> or <code>radix >
      Character.MAX_RADIX</code>
 @since 19.0
 */
+ (JavaLangInteger * __nullable)tryParseWithNSString:(NSString *)string
                                             withInt:(jint)radix;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonPrimitivesInts)

/*!
 @brief The number of bytes required to represent a primitive <code>int</code> value.
 <p><b>Java 8 users:</b> use <code>Integer.BYTES</code> instead.
 */
inline jint ComGoogleCommonPrimitivesInts_get_BYTES(void);
#define ComGoogleCommonPrimitivesInts_BYTES 4
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonPrimitivesInts, BYTES, jint)

/*!
 @brief The largest power of two that can be represented as an <code>int</code>.
 @since 10.0
 */
inline jint ComGoogleCommonPrimitivesInts_get_MAX_POWER_OF_TWO(void);
#define ComGoogleCommonPrimitivesInts_MAX_POWER_OF_TWO 1073741824
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonPrimitivesInts, MAX_POWER_OF_TWO, jint)

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesInts_hashCodeWithInt_(jint value);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesInts_checkedCastWithLong_(jlong value);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesInts_saturatedCastWithLong_(jlong value);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesInts_compareWithInt_withInt_(jint a, jint b);

FOUNDATION_EXPORT jboolean ComGoogleCommonPrimitivesInts_containsWithIntArray_withInt_(IOSIntArray *array, jint target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesInts_indexOfWithIntArray_withInt_(IOSIntArray *array, jint target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesInts_indexOfWithIntArray_withIntArray_(IOSIntArray *array, IOSIntArray *target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesInts_lastIndexOfWithIntArray_withInt_(IOSIntArray *array, jint target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesInts_minWithIntArray_(IOSIntArray *array);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesInts_maxWithIntArray_(IOSIntArray *array);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesInts_constrainToRangeWithInt_withInt_withInt_(jint value, jint min, jint max);

FOUNDATION_EXPORT IOSIntArray *ComGoogleCommonPrimitivesInts_concatWithIntArray2_(IOSObjectArray *arrays);

FOUNDATION_EXPORT IOSByteArray *ComGoogleCommonPrimitivesInts_toByteArrayWithInt_(jint value);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesInts_fromByteArrayWithByteArray_(IOSByteArray *bytes);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesInts_fromBytesWithByte_withByte_withByte_withByte_(jbyte b1, jbyte b2, jbyte b3, jbyte b4);

FOUNDATION_EXPORT ComGoogleCommonBaseConverter *ComGoogleCommonPrimitivesInts_stringConverter(void);

FOUNDATION_EXPORT IOSIntArray *ComGoogleCommonPrimitivesInts_ensureCapacityWithIntArray_withInt_withInt_(IOSIntArray *array, jint minLength, jint padding);

FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesInts_joinWithNSString_withIntArray_(NSString *separator, IOSIntArray *array);

FOUNDATION_EXPORT id<JavaUtilComparator> ComGoogleCommonPrimitivesInts_lexicographicalComparator(void);

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesInts_sortDescendingWithIntArray_(IOSIntArray *array);

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesInts_sortDescendingWithIntArray_withInt_withInt_(IOSIntArray *array, jint fromIndex, jint toIndex);

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesInts_reverseWithIntArray_(IOSIntArray *array);

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesInts_reverseWithIntArray_withInt_withInt_(IOSIntArray *array, jint fromIndex, jint toIndex);

FOUNDATION_EXPORT IOSIntArray *ComGoogleCommonPrimitivesInts_toArrayWithJavaUtilCollection_(id<JavaUtilCollection> collection);

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonPrimitivesInts_asListWithIntArray_(IOSIntArray *backingArray);

FOUNDATION_EXPORT JavaLangInteger *ComGoogleCommonPrimitivesInts_tryParseWithNSString_(NSString *string);

FOUNDATION_EXPORT JavaLangInteger *ComGoogleCommonPrimitivesInts_tryParseWithNSString_withInt_(NSString *string, jint radix);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesInts)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesInts")
