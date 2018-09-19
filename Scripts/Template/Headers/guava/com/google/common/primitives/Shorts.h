//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/primitives/Shorts.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesShorts")
#ifdef RESTRICT_ComGoogleCommonPrimitivesShorts
#define INCLUDE_ALL_ComGoogleCommonPrimitivesShorts 0
#else
#define INCLUDE_ALL_ComGoogleCommonPrimitivesShorts 1
#endif
#undef RESTRICT_ComGoogleCommonPrimitivesShorts

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonPrimitivesShorts_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesShorts || defined(INCLUDE_ComGoogleCommonPrimitivesShorts))
#define ComGoogleCommonPrimitivesShorts_

@class ComGoogleCommonBaseConverter;
@class IOSByteArray;
@class IOSObjectArray;
@class IOSShortArray;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilList;

/*!
 @brief Static utility methods pertaining to <code>short</code> primitives, that are not already found in
  either <code>Short</code> or <code>Arrays</code>.
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/PrimitivesExplained">
 primitive utilities</a>.
 @author Kevin Bourrillion
 @since 1.0
 */
@interface ComGoogleCommonPrimitivesShorts : NSObject
@property (readonly, class) jint BYTES NS_SWIFT_NAME(BYTES);
@property (readonly, class) jshort MAX_POWER_OF_TWO NS_SWIFT_NAME(MAX_POWER_OF_TWO);

+ (jint)BYTES;

+ (jshort)MAX_POWER_OF_TWO;

#pragma mark Public

/*!
 @brief Returns a fixed-size list backed by the specified array, similar to <code>Arrays.asList(Object[])</code>
 .The list supports <code>Object)</code>, but any attempt to
  set a value to <code>null</code> will result in a <code>NullPointerException</code>.
 <p>The returned list maintains the values, but not the identities, of <code>Short</code> objects
  written to or read from it. For example, whether <code>list.get(0) == list.get(0)</code> is true for
  the returned list is unspecified.
 @param backingArray the array to back the list
 @return a list view of the array
 */
+ (id<JavaUtilList>)asListWithShortArray:(IOSShortArray *)backingArray;

/*!
 @brief Returns the <code>short</code> value that is equal to <code>value</code>, if possible.
 @param value any value in the range of the <code>short</code>  type
 @return the <code>short</code> value that equals <code>value</code>
 @throw IllegalArgumentExceptionif <code>value</code> is greater than <code>Short.MAX_VALUE</code> or
      less than <code>Short.MIN_VALUE</code>
 */
+ (jshort)checkedCastWithLong:(jlong)value;

/*!
 @brief Compares the two specified <code>short</code> values.The sign of the value returned is the same as
  that of <code>((Short) a).compareTo(b)</code>.
 <p><b>Note for Java 7 and later:</b> this method should be treated as deprecated; use the
  equivalent <code>Short.compare</code> method instead.
 @param a the first <code>short</code>  to compare
 @param b the second <code>short</code>  to compare
 @return a negative value if <code>a</code> is less than <code>b</code>; a positive value if <code>a</code> is
      greater than <code>b</code>; or zero if they are equal
 */
+ (jint)compareWithShort:(jshort)a
               withShort:(jshort)b;

/*!
 @brief Returns the values from each provided array combined into a single array.For example, <code>concat(new short[] {a, b}, new short[] {}, new short[] {c}</code>
  returns the array <code>{a, b,
  c}</code>
 .
 @param arrays zero or more <code>short</code>  arrays
 @return a single array containing all the values from the source arrays, in order
 */
+ (IOSShortArray *)concatWithShortArray2:(IOSObjectArray *)arrays;

/*!
 @brief Returns the value nearest to <code>value</code> which is within the closed range <code>[min..max]</code>.
 <p>If <code>value</code> is within the range <code>[min..max]</code>, <code>value</code> is returned
  unchanged. If <code>value</code> is less than <code>min</code>, <code>min</code> is returned, and if <code>value</code>
  is greater than <code>max</code>, <code>max</code> is returned.
 @param value the <code>short</code>  value to constrain
 @param min the lower bound (inclusive) of the range to constrain <code>value</code>  to
 @param max the upper bound (inclusive) of the range to constrain <code>value</code>  to
 @throw IllegalArgumentExceptionif <code>min > max</code>
 @since 21.0
 */
+ (jshort)constrainToRangeWithShort:(jshort)value
                          withShort:(jshort)min
                          withShort:(jshort)max;

/*!
 @brief Returns <code>true</code> if <code>target</code> is present as an element anywhere in <code>array</code>.
 @param array an array of <code>short</code>  values, possibly empty
 @param target a primitive <code>short</code>  value
 @return <code>true</code> if <code>array[i] == target</code> for some value of <code>i</code>
 */
+ (jboolean)containsWithShortArray:(IOSShortArray *)array
                         withShort:(jshort)target;

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
+ (IOSShortArray *)ensureCapacityWithShortArray:(IOSShortArray *)array
                                        withInt:(jint)minLength
                                        withInt:(jint)padding;

/*!
 @brief Returns the <code>short</code> value whose big-endian representation is stored in the first 2 bytes
  of <code>bytes</code>; equivalent to <code>ByteBuffer.wrap(bytes).getShort()</code>.For example, the
  input byte array <code>{0x54, 0x32}</code> would yield the <code>short</code> value <code>0x5432</code>.
 <p>Arguably, it's preferable to use <code>java.nio.ByteBuffer</code>; that library exposes much more
  flexibility at little cost in readability.
 @throw IllegalArgumentExceptionif <code>bytes</code> has fewer than 2 elements
 */
+ (jshort)fromByteArrayWithByteArray:(IOSByteArray *)bytes;

/*!
 @brief Returns the <code>short</code> value whose byte representation is the given 2 bytes, in big-endian
  order; equivalent to <code>Shorts.fromByteArray(new byte[] {b1, b2})</code>.
 @since 7.0
 */
+ (jshort)fromBytesWithByte:(jbyte)b1
                   withByte:(jbyte)b2;

/*!
 @brief Returns a hash code for <code>value</code>; equal to the result of invoking <code>((Short)
  value).hashCode()</code>
 .
 <p><b>Java 8 users:</b> use <code>Short.hashCode(short)</code> instead.
 @param value a primitive <code>short</code>  value
 @return a hash code for the value
 */
+ (jint)hashCodeWithShort:(jshort)value;

/*!
 @brief Returns the index of the first appearance of the value <code>target</code> in <code>array</code>.
 @param array an array of <code>short</code>  values, possibly empty
 @param target a primitive <code>short</code>  value
 @return the least index <code>i</code> for which <code>array[i] == target</code>, or <code>-1</code> if no
      such index exists.
 */
+ (jint)indexOfWithShortArray:(IOSShortArray *)array
                    withShort:(jshort)target;

/*!
 @brief Returns the start position of the first occurrence of the specified <code>target</code> within 
 <code>array</code>, or <code>-1</code> if there is no such occurrence.
 <p>More formally, returns the lowest index <code>i</code> such that <code>Arrays.copyOfRange(array,
  i, i + target.length)</code>
  contains exactly the same elements as <code>target</code>.
 @param array the array to search for the sequence <code>target</code>
 @param target the array to search for as a sub-sequence of <code>array</code>
 */
+ (jint)indexOfWithShortArray:(IOSShortArray *)array
               withShortArray:(IOSShortArray *)target;

/*!
 @brief Returns a string containing the supplied <code>short</code> values separated by <code>separator</code>.
 For example, <code>join("-", (short) 1, (short) 2, (short) 3)</code> returns the string <code>"1-2-3"</code>
 .
 @param separator the text that should appear between consecutive values in the resulting string      (but not at the start or end)
 @param array an array of <code>short</code>  values, possibly empty
 */
+ (NSString *)joinWithNSString:(NSString *)separator
                withShortArray:(IOSShortArray *)array;

/*!
 @brief Returns the index of the last appearance of the value <code>target</code> in <code>array</code>.
 @param array an array of <code>short</code>  values, possibly empty
 @param target a primitive <code>short</code>  value
 @return the greatest index <code>i</code> for which <code>array[i] == target</code>, or <code>-1</code> if no
      such index exists.
 */
+ (jint)lastIndexOfWithShortArray:(IOSShortArray *)array
                        withShort:(jshort)target;

/*!
 @brief Returns a comparator that compares two <code>short</code> arrays <a href="http://en.wikipedia.org/wiki/Lexicographical_order">
 lexicographically</a>.That is, it
  compares, using <code>short)</code>), the first pair of values that follow any
  common prefix, or when one array is a prefix of the other, treats the shorter array as the
  lesser.
 For example, <code>[] < [(short) 1] < [(short) 1, (short) 2] < [(short) 2]</code>.
  
 <p>The returned comparator is inconsistent with <code>Object.equals(Object)</code> (since arrays
  support only identity equality), but it is consistent with <code>short[])</code>
 .
 @since 2.0
 */
+ (id<JavaUtilComparator>)lexicographicalComparator;

/*!
 @brief Returns the greatest value present in <code>array</code>.
 @param array a  <i> nonempty </i>  array of <code>short</code>  values
 @return the value present in <code>array</code> that is greater than or equal to every other value
      in the array
 @throw IllegalArgumentExceptionif <code>array</code> is empty
 */
+ (jshort)maxWithShortArray:(IOSShortArray *)array;

/*!
 @brief Returns the least value present in <code>array</code>.
 @param array a  <i> nonempty </i>  array of <code>short</code>  values
 @return the value present in <code>array</code> that is less than or equal to every other value in
      the array
 @throw IllegalArgumentExceptionif <code>array</code> is empty
 */
+ (jshort)minWithShortArray:(IOSShortArray *)array;

/*!
 @brief Reverses the elements of <code>array</code>.This is equivalent to <code>Collections.reverse(Shorts.asList(array))</code>
 , but is likely to be more efficient.
 @since 23.1
 */
+ (void)reverseWithShortArray:(IOSShortArray *)array;

/*!
 @brief Reverses the elements of <code>array</code> between <code>fromIndex</code> inclusive and <code>toIndex</code>
  exclusive.This is equivalent to <code>Collections.reverse(Shorts.asList(array).subList(fromIndex, toIndex))</code>
 , but is likely to be
  more efficient.
 @throw IndexOutOfBoundsExceptionif <code>fromIndex < 0</code>, <code>toIndex > array.length</code>, or
      <code>toIndex > fromIndex</code>
 @since 23.1
 */
+ (void)reverseWithShortArray:(IOSShortArray *)array
                      withInt:(jint)fromIndex
                      withInt:(jint)toIndex;

/*!
 @brief Returns the <code>short</code> nearest in value to <code>value</code>.
 @param value any <code>long</code>  value
 @return the same value cast to <code>short</code> if it is in the range of the <code>short</code> type,
      <code>Short.MAX_VALUE</code> if it is too large, or <code>Short.MIN_VALUE</code> if it is too small
 */
+ (jshort)saturatedCastWithLong:(jlong)value;

/*!
 @brief Sorts the elements of <code>array</code> in descending order.
 @since 23.1
 */
+ (void)sortDescendingWithShortArray:(IOSShortArray *)array;

/*!
 @brief Sorts the elements of <code>array</code> between <code>fromIndex</code> inclusive and <code>toIndex</code>
  exclusive in descending order.
 @since 23.1
 */
+ (void)sortDescendingWithShortArray:(IOSShortArray *)array
                             withInt:(jint)fromIndex
                             withInt:(jint)toIndex;

/*!
 @brief Returns a serializable converter object that converts between strings and shorts using <code>Short.decode</code>
  and <code>Short.toString()</code>.The returned converter throws <code>NumberFormatException</code>
  if the input string is invalid.
 <p><b>Warning:</b> please see <code>Short.decode</code> to understand exactly how strings are
  parsed. For example, the string <code>"0123"</code> is treated as <i>octal</i> and converted to the
  value <code>83</code>.
 @since 16.0
 */
+ (ComGoogleCommonBaseConverter *)stringConverter;

/*!
 @brief Returns an array containing each value of <code>collection</code>, converted to a <code>short</code>
  value in the manner of <code>Number.shortValue</code>.
 <p>Elements are copied from the argument collection as if by <code>collection.toArray()</code>.
  Calling this method is as thread-safe as calling that method.
 @param collection a collection of <code>Number</code>  instances
 @return an array containing the same values as <code>collection</code>, in the same order, converted
      to primitives
 @throw NullPointerExceptionif <code>collection</code> or any of its elements is null
 @since 1.0 (parameter was <code>Collection<Short></code> before 12.0)
 */
+ (IOSShortArray *)toArrayWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Returns a big-endian representation of <code>value</code> in a 2-element byte array; equivalent to 
 <code>ByteBuffer.allocate(2).putShort(value).array()</code>.For example, the input value <code>(short) 0x1234</code>
  would yield the byte array <code>{0x12, 0x34}</code>.
 <p>If you need to convert and concatenate several values (possibly even of different types),
  use a shared <code>java.nio.ByteBuffer</code> instance, or use <code>com.google.common.io.ByteStreams</code>
  to get a growable buffer.
 */
+ (IOSByteArray *)toByteArrayWithShort:(jshort)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonPrimitivesShorts)

/*!
 @brief The number of bytes required to represent a primitive <code>short</code> value.
 <p><b>Java 8 users:</b> use <code>Short.BYTES</code> instead.
 */
inline jint ComGoogleCommonPrimitivesShorts_get_BYTES(void);
#define ComGoogleCommonPrimitivesShorts_BYTES 2
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonPrimitivesShorts, BYTES, jint)

/*!
 @brief The largest power of two that can be represented as a <code>short</code>.
 @since 10.0
 */
inline jshort ComGoogleCommonPrimitivesShorts_get_MAX_POWER_OF_TWO(void);
#define ComGoogleCommonPrimitivesShorts_MAX_POWER_OF_TWO 16384
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonPrimitivesShorts, MAX_POWER_OF_TWO, jshort)

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesShorts_hashCodeWithShort_(jshort value);

FOUNDATION_EXPORT jshort ComGoogleCommonPrimitivesShorts_checkedCastWithLong_(jlong value);

FOUNDATION_EXPORT jshort ComGoogleCommonPrimitivesShorts_saturatedCastWithLong_(jlong value);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesShorts_compareWithShort_withShort_(jshort a, jshort b);

FOUNDATION_EXPORT jboolean ComGoogleCommonPrimitivesShorts_containsWithShortArray_withShort_(IOSShortArray *array, jshort target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesShorts_indexOfWithShortArray_withShort_(IOSShortArray *array, jshort target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesShorts_indexOfWithShortArray_withShortArray_(IOSShortArray *array, IOSShortArray *target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesShorts_lastIndexOfWithShortArray_withShort_(IOSShortArray *array, jshort target);

FOUNDATION_EXPORT jshort ComGoogleCommonPrimitivesShorts_minWithShortArray_(IOSShortArray *array);

FOUNDATION_EXPORT jshort ComGoogleCommonPrimitivesShorts_maxWithShortArray_(IOSShortArray *array);

FOUNDATION_EXPORT jshort ComGoogleCommonPrimitivesShorts_constrainToRangeWithShort_withShort_withShort_(jshort value, jshort min, jshort max);

FOUNDATION_EXPORT IOSShortArray *ComGoogleCommonPrimitivesShorts_concatWithShortArray2_(IOSObjectArray *arrays);

FOUNDATION_EXPORT IOSByteArray *ComGoogleCommonPrimitivesShorts_toByteArrayWithShort_(jshort value);

FOUNDATION_EXPORT jshort ComGoogleCommonPrimitivesShorts_fromByteArrayWithByteArray_(IOSByteArray *bytes);

FOUNDATION_EXPORT jshort ComGoogleCommonPrimitivesShorts_fromBytesWithByte_withByte_(jbyte b1, jbyte b2);

FOUNDATION_EXPORT ComGoogleCommonBaseConverter *ComGoogleCommonPrimitivesShorts_stringConverter(void);

FOUNDATION_EXPORT IOSShortArray *ComGoogleCommonPrimitivesShorts_ensureCapacityWithShortArray_withInt_withInt_(IOSShortArray *array, jint minLength, jint padding);

FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesShorts_joinWithNSString_withShortArray_(NSString *separator, IOSShortArray *array);

FOUNDATION_EXPORT id<JavaUtilComparator> ComGoogleCommonPrimitivesShorts_lexicographicalComparator(void);

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesShorts_sortDescendingWithShortArray_(IOSShortArray *array);

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesShorts_sortDescendingWithShortArray_withInt_withInt_(IOSShortArray *array, jint fromIndex, jint toIndex);

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesShorts_reverseWithShortArray_(IOSShortArray *array);

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesShorts_reverseWithShortArray_withInt_withInt_(IOSShortArray *array, jint fromIndex, jint toIndex);

FOUNDATION_EXPORT IOSShortArray *ComGoogleCommonPrimitivesShorts_toArrayWithJavaUtilCollection_(id<JavaUtilCollection> collection);

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonPrimitivesShorts_asListWithShortArray_(IOSShortArray *backingArray);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesShorts)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesShorts")
