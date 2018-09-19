//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/primitives/UnsignedBytes.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesUnsignedBytes")
#ifdef RESTRICT_ComGoogleCommonPrimitivesUnsignedBytes
#define INCLUDE_ALL_ComGoogleCommonPrimitivesUnsignedBytes 0
#else
#define INCLUDE_ALL_ComGoogleCommonPrimitivesUnsignedBytes 1
#endif
#undef RESTRICT_ComGoogleCommonPrimitivesUnsignedBytes

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonPrimitivesUnsignedBytes_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesUnsignedBytes || defined(INCLUDE_ComGoogleCommonPrimitivesUnsignedBytes))
#define ComGoogleCommonPrimitivesUnsignedBytes_

@class IOSByteArray;
@protocol JavaUtilComparator;

/*!
 @brief Static utility methods pertaining to <code>byte</code> primitives that interpret values as 
 <i>unsigned</i> (that is, any negative value <code>b</code> is treated as the positive value <code>256 + b</code>
 ).The corresponding methods that treat the values as signed are found in <code>SignedBytes</code>
 , and the methods for which signedness is not an issue are in <code>Bytes</code>.
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/PrimitivesExplained">
 primitive utilities</a>.
 @author Kevin Bourrillion
 @author Martin Buchholz
 @author Hiroshi Yamauchi
 @author Louis Wasserman
 @since 1.0
 */
@interface ComGoogleCommonPrimitivesUnsignedBytes : NSObject
@property (readonly, class) jbyte MAX_POWER_OF_TWO NS_SWIFT_NAME(MAX_POWER_OF_TWO);
@property (readonly, class) jbyte MAX_VALUE NS_SWIFT_NAME(MAX_VALUE);

+ (jbyte)MAX_POWER_OF_TWO;

+ (jbyte)MAX_VALUE;

#pragma mark Public

/*!
 @brief Returns the <code>byte</code> value that, when treated as unsigned, is equal to <code>value</code>, if
  possible.
 @param value a value between 0 and 255 inclusive
 @return the <code>byte</code> value that, when treated as unsigned, equals <code>value</code>
 @throw IllegalArgumentExceptionif <code>value</code> is negative or greater than 255
 */
+ (jbyte)checkedCastWithLong:(jlong)value;

/*!
 @brief Compares the two specified <code>byte</code> values, treating them as unsigned values between 0 and
  255 inclusive.For example, <code>(byte) -127</code> is considered greater than <code>(byte) 127</code>
  because it is seen as having the value of positive <code>129</code>.
 @param a the first <code>byte</code>  to compare
 @param b the second <code>byte</code>  to compare
 @return a negative value if <code>a</code> is less than <code>b</code>; a positive value if <code>a</code> is
      greater than <code>b</code>; or zero if they are equal
 */
+ (jint)compareWithByte:(jbyte)a
               withByte:(jbyte)b;

/*!
 @brief Returns a string containing the supplied <code>byte</code> values separated by <code>separator</code>.
 For example, <code>join(":", (byte) 1, (byte) 2, (byte) 255)</code> returns the string <code>"1:2:255"</code>
 .
 @param separator the text that should appear between consecutive values in the resulting string      (but not at the start or end)
 @param array an array of <code>byte</code>  values, possibly empty
 */
+ (NSString *)joinWithNSString:(NSString *)separator
                 withByteArray:(IOSByteArray *)array;

/*!
 @brief Returns a comparator that compares two <code>byte</code> arrays <a href="http://en.wikipedia.org/wiki/Lexicographical_order">
 lexicographically</a>.That is, it
  compares, using <code>byte)</code>), the first pair of values that follow any common
  prefix, or when one array is a prefix of the other, treats the shorter array as the lesser.
 For
  example, <code>[] < [0x01] < [0x01, 0x7F] < [0x01, 0x80] < [0x02]</code>. Values are treated as
  unsigned. 
 <p>The returned comparator is inconsistent with <code>Object.equals(Object)</code> (since arrays
  support only identity equality), but it is consistent with <code>java.util.Arrays</code>
 .
 @since 2.0
 */
+ (id<JavaUtilComparator>)lexicographicalComparator;

/*!
 @brief Returns the greatest value present in <code>array</code>.
 @param array a  <i> nonempty </i>  array of <code>byte</code>  values
 @return the value present in <code>array</code> that is greater than or equal to every other value
      in the array
 @throw IllegalArgumentExceptionif <code>array</code> is empty
 */
+ (jbyte)maxWithByteArray:(IOSByteArray *)array;

/*!
 @brief Returns the least value present in <code>array</code>.
 @param array a  <i> nonempty </i>  array of <code>byte</code>  values
 @return the value present in <code>array</code> that is less than or equal to every other value in
      the array
 @throw IllegalArgumentExceptionif <code>array</code> is empty
 */
+ (jbyte)minWithByteArray:(IOSByteArray *)array;

/*!
 @brief Returns the unsigned <code>byte</code> value represented by the given decimal string.
 @throw NumberFormatExceptionif the string does not contain a valid unsigned <code>byte</code>
      value
 @throw NullPointerExceptionif <code>string</code> is null (in contrast to <code>Byte.parseByte(String)</code>
 )
 @since 13.0
 */
+ (jbyte)parseUnsignedByteWithNSString:(NSString *)string;

/*!
 @brief Returns the unsigned <code>byte</code> value represented by a string with the given radix.
 @param string the string containing the unsigned <code>byte</code>  representation to be parsed.
 @param radix the radix to use while parsing <code>string</code>
 @throw NumberFormatExceptionif the string does not contain a valid unsigned <code>byte</code> with
      the given radix, or if <code>radix</code> is not between <code>Character.MIN_RADIX</code> and <code>Character.MAX_RADIX</code>
 .
 @throw NullPointerExceptionif <code>string</code> is null (in contrast to <code>Byte.parseByte(String)</code>
 )
 @since 13.0
 */
+ (jbyte)parseUnsignedByteWithNSString:(NSString *)string
                               withInt:(jint)radix;

/*!
 @brief Returns the <code>byte</code> value that, when treated as unsigned, is nearest in value to <code>value</code>
 .
 @param value any <code>long</code>  value
 @return <code>(byte) 255</code> if <code>value >= 255</code>, <code>(byte) 0</code> if <code>value <= 0</code>, and
      <code>value</code> cast to <code>byte</code> otherwise
 */
+ (jbyte)saturatedCastWithLong:(jlong)value;

/*!
 @brief Sorts the array, treating its elements as unsigned bytes.
 @since 23.1
 */
+ (void)sortWithByteArray:(IOSByteArray *)array;

/*!
 @brief Sorts the array between <code>fromIndex</code> inclusive and <code>toIndex</code> exclusive, treating its
  elements as unsigned bytes.
 @since 23.1
 */
+ (void)sortWithByteArray:(IOSByteArray *)array
                  withInt:(jint)fromIndex
                  withInt:(jint)toIndex;

/*!
 @brief Sorts the elements of <code>array</code> in descending order, interpreting them as unsigned 8-bit
  integers.
 @since 23.1
 */
+ (void)sortDescendingWithByteArray:(IOSByteArray *)array;

/*!
 @brief Sorts the elements of <code>array</code> between <code>fromIndex</code> inclusive and <code>toIndex</code>
  exclusive in descending order, interpreting them as unsigned 8-bit integers.
 @since 23.1
 */
+ (void)sortDescendingWithByteArray:(IOSByteArray *)array
                            withInt:(jint)fromIndex
                            withInt:(jint)toIndex;

/*!
 @brief Returns the value of the given byte as an integer, when treated as unsigned.That is, returns 
 <code>value + 256</code> if <code>value</code> is negative; <code>value</code> itself otherwise.
 <p><b>Java 8 users:</b> use <code>Byte.toUnsignedInt(byte)</code> instead.
 @since 6.0
 */
+ (jint)toIntWithByte:(jbyte)value;

/*!
 @brief Returns a string representation of x, where x is treated as unsigned.
 @since 13.0
 */
+ (NSString *)toStringWithByte:(jbyte)x;

/*!
 @brief Returns a string representation of <code>x</code> for the given radix, where <code>x</code> is treated as
  unsigned.
 @param x the value to convert to a string.
 @param radix the radix to use while working with <code>x</code>
 @throw IllegalArgumentExceptionif <code>radix</code> is not between <code>Character.MIN_RADIX</code>
      and <code>Character.MAX_RADIX</code>.
 @since 13.0
 */
+ (NSString *)toStringWithByte:(jbyte)x
                       withInt:(jint)radix;

#pragma mark Package-Private

+ (id<JavaUtilComparator>)lexicographicalComparatorJavaImpl;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonPrimitivesUnsignedBytes)

/*!
 @brief The largest power of two that can be represented as an unsigned <code>byte</code>.
 @since 10.0
 */
inline jbyte ComGoogleCommonPrimitivesUnsignedBytes_get_MAX_POWER_OF_TWO(void);
#define ComGoogleCommonPrimitivesUnsignedBytes_MAX_POWER_OF_TWO -128
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonPrimitivesUnsignedBytes, MAX_POWER_OF_TWO, jbyte)

/*!
 @brief The largest value that fits into an unsigned byte.
 @since 13.0
 */
inline jbyte ComGoogleCommonPrimitivesUnsignedBytes_get_MAX_VALUE(void);
#define ComGoogleCommonPrimitivesUnsignedBytes_MAX_VALUE -1
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonPrimitivesUnsignedBytes, MAX_VALUE, jbyte)

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedBytes_toIntWithByte_(jbyte value);

FOUNDATION_EXPORT jbyte ComGoogleCommonPrimitivesUnsignedBytes_checkedCastWithLong_(jlong value);

FOUNDATION_EXPORT jbyte ComGoogleCommonPrimitivesUnsignedBytes_saturatedCastWithLong_(jlong value);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedBytes_compareWithByte_withByte_(jbyte a, jbyte b);

FOUNDATION_EXPORT jbyte ComGoogleCommonPrimitivesUnsignedBytes_minWithByteArray_(IOSByteArray *array);

FOUNDATION_EXPORT jbyte ComGoogleCommonPrimitivesUnsignedBytes_maxWithByteArray_(IOSByteArray *array);

FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesUnsignedBytes_toStringWithByte_(jbyte x);

FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesUnsignedBytes_toStringWithByte_withInt_(jbyte x, jint radix);

FOUNDATION_EXPORT jbyte ComGoogleCommonPrimitivesUnsignedBytes_parseUnsignedByteWithNSString_(NSString *string);

FOUNDATION_EXPORT jbyte ComGoogleCommonPrimitivesUnsignedBytes_parseUnsignedByteWithNSString_withInt_(NSString *string, jint radix);

FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesUnsignedBytes_joinWithNSString_withByteArray_(NSString *separator, IOSByteArray *array);

FOUNDATION_EXPORT id<JavaUtilComparator> ComGoogleCommonPrimitivesUnsignedBytes_lexicographicalComparator(void);

FOUNDATION_EXPORT id<JavaUtilComparator> ComGoogleCommonPrimitivesUnsignedBytes_lexicographicalComparatorJavaImpl(void);

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesUnsignedBytes_sortWithByteArray_(IOSByteArray *array);

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesUnsignedBytes_sortWithByteArray_withInt_withInt_(IOSByteArray *array, jint fromIndex, jint toIndex);

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesUnsignedBytes_sortDescendingWithByteArray_(IOSByteArray *array);

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesUnsignedBytes_sortDescendingWithByteArray_withInt_withInt_(IOSByteArray *array, jint fromIndex, jint toIndex);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesUnsignedBytes)

#endif

#if !defined (ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesUnsignedBytes || defined(INCLUDE_ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder))
#define ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_

@protocol JavaUtilComparator;

/*!
 @brief Provides a lexicographical comparator implementation; either a Java implementation or a faster
  implementation based on <code>Unsafe</code>.
 <p>Uses reflection to gracefully fall back to the Java implementation if <code>Unsafe</code> isn't
  available.
 */
@interface ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder : NSObject
@property (readonly, copy, class) NSString *UNSAFE_COMPARATOR_NAME NS_SWIFT_NAME(UNSAFE_COMPARATOR_NAME);
@property (readonly, class, strong) id<JavaUtilComparator> BEST_COMPARATOR NS_SWIFT_NAME(BEST_COMPARATOR);

+ (NSString *)UNSAFE_COMPARATOR_NAME;

+ (id<JavaUtilComparator>)BEST_COMPARATOR;

#pragma mark Package-Private

- (instancetype __nonnull)init;

/*!
 @brief Returns the Unsafe-using Comparator, or falls back to the pure-Java implementation if unable
  to do so.
 */
+ (id<JavaUtilComparator>)getBestComparator;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder)

inline NSString *ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_get_UNSAFE_COMPARATOR_NAME(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_UNSAFE_COMPARATOR_NAME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder, UNSAFE_COMPARATOR_NAME, NSString *)

inline id<JavaUtilComparator> ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_get_BEST_COMPARATOR(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<JavaUtilComparator> ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_BEST_COMPARATOR;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder, BEST_COMPARATOR, id<JavaUtilComparator>)

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_init(ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder *self);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder *new_ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder *create_ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_init(void);

FOUNDATION_EXPORT id<JavaUtilComparator> ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_getBestComparator(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder)

#endif

#if !defined (ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_UnsafeComparator_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesUnsignedBytes || defined(INCLUDE_ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_UnsafeComparator))
#define ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_UnsafeComparator_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "../../../../../java/lang/Enum.h"

#define RESTRICT_JavaUtilComparator 1
#define INCLUDE_JavaUtilComparator 1
#include "../../../../../java/util/Comparator.h"

@class IOSByteArray;
@class IOSObjectArray;
@class SunMiscUnsafe;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilFunctionToDoubleFunction;
@protocol JavaUtilFunctionToIntFunction;
@protocol JavaUtilFunctionToLongFunction;

typedef NS_ENUM(NSUInteger, ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_UnsafeComparator_Enum) {
  ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_UnsafeComparator_Enum_INSTANCE = 0,
};

@interface ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_UnsafeComparator : JavaLangEnum < JavaUtilComparator >
@property (readonly, class) jboolean BIG_ENDIAN_ NS_SWIFT_NAME(BIG_ENDIAN_);
@property (readonly, class, strong) SunMiscUnsafe *theUnsafe NS_SWIFT_NAME(theUnsafe);
@property (readonly, class) jint BYTE_ARRAY_BASE_OFFSET NS_SWIFT_NAME(BYTE_ARRAY_BASE_OFFSET);

@property (readonly, class, nonnull) ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_UnsafeComparator *INSTANCE NS_SWIFT_NAME(INSTANCE);
+ (jboolean)BIG_ENDIAN_;

+ (SunMiscUnsafe *)theUnsafe;

+ (jint)BYTE_ARRAY_BASE_OFFSET;

+ (ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_UnsafeComparator * __nonnull)INSTANCE;

#pragma mark Public

- (jint)compareWithId:(IOSByteArray *)left
               withId:(IOSByteArray *)right;

- (NSString *)description;

+ (ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_UnsafeComparator *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_UnsafeComparator_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_UnsafeComparator)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_UnsafeComparator *ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_UnsafeComparator_values_[];

inline ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_UnsafeComparator *ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_UnsafeComparator_get_INSTANCE(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_UnsafeComparator, INSTANCE)

inline jboolean ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_UnsafeComparator_get_BIG_ENDIAN(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT jboolean ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_UnsafeComparator_BIG_ENDIAN;
J2OBJC_STATIC_FIELD_PRIMITIVE_FINAL(ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_UnsafeComparator, BIG_ENDIAN, jboolean)

inline SunMiscUnsafe *ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_UnsafeComparator_get_theUnsafe(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT SunMiscUnsafe *ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_UnsafeComparator_theUnsafe;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_UnsafeComparator, theUnsafe, SunMiscUnsafe *)

/*!
 @brief The offset to the first element in a byte array.
 */
inline jint ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_UnsafeComparator_get_BYTE_ARRAY_BASE_OFFSET(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_UnsafeComparator_BYTE_ARRAY_BASE_OFFSET;
J2OBJC_STATIC_FIELD_PRIMITIVE_FINAL(ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_UnsafeComparator, BYTE_ARRAY_BASE_OFFSET, jint)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_UnsafeComparator_values(void);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_UnsafeComparator *ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_UnsafeComparator_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_UnsafeComparator *ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_UnsafeComparator_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_UnsafeComparator)

#endif

#if !defined (ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_PureJavaComparator_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesUnsignedBytes || defined(INCLUDE_ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_PureJavaComparator))
#define ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_PureJavaComparator_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "../../../../../java/lang/Enum.h"

#define RESTRICT_JavaUtilComparator 1
#define INCLUDE_JavaUtilComparator 1
#include "../../../../../java/util/Comparator.h"

@class IOSByteArray;
@class IOSObjectArray;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilFunctionToDoubleFunction;
@protocol JavaUtilFunctionToIntFunction;
@protocol JavaUtilFunctionToLongFunction;

typedef NS_ENUM(NSUInteger, ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_PureJavaComparator_Enum) {
  ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_PureJavaComparator_Enum_INSTANCE = 0,
};

@interface ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_PureJavaComparator : JavaLangEnum < JavaUtilComparator >

@property (readonly, class, nonnull) ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_PureJavaComparator *INSTANCE NS_SWIFT_NAME(INSTANCE);
+ (ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_PureJavaComparator * __nonnull)INSTANCE;

#pragma mark Public

- (jint)compareWithId:(IOSByteArray *)left
               withId:(IOSByteArray *)right;

- (NSString *)description;

+ (ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_PureJavaComparator *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_PureJavaComparator_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_PureJavaComparator)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_PureJavaComparator *ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_PureJavaComparator_values_[];

inline ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_PureJavaComparator *ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_PureJavaComparator_get_INSTANCE(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_PureJavaComparator, INSTANCE)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_PureJavaComparator_values(void);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_PureJavaComparator *ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_PureJavaComparator_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_PureJavaComparator *ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_PureJavaComparator_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesUnsignedBytes_LexicographicalComparatorHolder_PureJavaComparator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesUnsignedBytes")
