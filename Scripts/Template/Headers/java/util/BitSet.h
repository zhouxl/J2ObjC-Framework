//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/BitSet.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilBitSet")
#ifdef RESTRICT_JavaUtilBitSet
#define INCLUDE_ALL_JavaUtilBitSet 0
#else
#define INCLUDE_ALL_JavaUtilBitSet 1
#endif
#undef RESTRICT_JavaUtilBitSet

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilBitSet_) && (INCLUDE_ALL_JavaUtilBitSet || defined(INCLUDE_JavaUtilBitSet))
#define JavaUtilBitSet_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../java/io/Serializable.h"

@class IOSByteArray;
@class IOSLongArray;
@class JavaNioByteBuffer;
@class JavaNioLongBuffer;
@protocol JavaUtilStreamIntStream;

/*!
 @brief This class implements a vector of bits that grows as needed.Each
  component of the bit set has a <code>boolean</code> value.
 The
  bits of a <code>BitSet</code> are indexed by nonnegative integers.
  Individual indexed bits can be examined, set, or cleared. One 
 <code>BitSet</code> may be used to modify the contents of another 
 <code>BitSet</code> through logical AND, logical inclusive OR, and
  logical exclusive OR operations. 
 <p>By default, all bits in the set initially have the value 
 <code>false</code>.
  
 <p>Every bit set has a current size, which is the number of bits
  of space currently in use by the bit set. Note that the size is
  related to the implementation of a bit set, so it may change with
  implementation. The length of a bit set relates to logical length
  of a bit set and is defined independently of implementation. 
 <p>Unless otherwise noted, passing a null parameter to any of the
  methods in a <code>BitSet</code> will result in a 
 <code>NullPointerException</code>.
  
 <p>A <code>BitSet</code> is not safe for multithreaded use without
  external synchronization.
 @author Arthur van Hoff
 @author Michael McCloskey
 @author Martin Buchholz
 @since JDK1.0
 */
@interface JavaUtilBitSet : NSObject < NSCopying, JavaIoSerializable >

#pragma mark Public

/*!
 @brief Creates a new bit set.All bits are initially <code>false</code>.
 */
- (instancetype __nonnull)init;

/*!
 @brief Creates a bit set whose initial size is large enough to explicitly
  represent bits with indices in the range <code>0</code> through 
 <code>nbits-1</code>.All bits are initially <code>false</code>.
 @param nbits the initial size of the bit set
 @throw NegativeArraySizeExceptionif the specified initial size
          is negative
 */
- (instancetype __nonnull)initWithInt:(jint)nbits;

/*!
 @brief Performs a logical <b>AND</b> of this target bit set with the
  argument bit set.This bit set is modified so that each bit in it
  has the value <code>true</code> if and only if it both initially
  had the value <code>true</code> and the corresponding bit in the
  bit set argument also had the value <code>true</code>.
 @param set a bit set
 */
- (void)and__WithJavaUtilBitSet:(JavaUtilBitSet *)set;

/*!
 @brief Clears all of the bits in this <code>BitSet</code> whose corresponding
  bit is set in the specified <code>BitSet</code>.
 @param set the <code>BitSet</code>  with which to mask this
           <code>BitSet</code>
 @since 1.2
 */
- (void)andNotWithJavaUtilBitSet:(JavaUtilBitSet *)set;

/*!
 @brief Returns the number of bits set to <code>true</code> in this <code>BitSet</code>.
 @return the number of bits set to <code>true</code> in this <code>BitSet</code>
 @since 1.4
 */
- (jint)cardinality;

/*!
 @brief Sets all of the bits in this BitSet to <code>false</code>.
 @since 1.4
 */
- (void)clear;

/*!
 @brief Sets the bit specified by the index to <code>false</code>.
 @param bitIndex the index of the bit to be cleared
 @throw IndexOutOfBoundsExceptionif the specified index is negative
 @since JDK1.0
 */
- (void)clearWithInt:(jint)bitIndex;

/*!
 @brief Sets the bits from the specified <code>fromIndex</code> (inclusive) to the
  specified <code>toIndex</code> (exclusive) to <code>false</code>.
 @param fromIndex index of the first bit to be cleared
 @param toIndex index after the last bit to be cleared
 @throw IndexOutOfBoundsExceptionif <code>fromIndex</code> is negative,
          or <code>toIndex</code> is negative, or <code>fromIndex</code> is
          larger than <code>toIndex</code>
 @since 1.4
 */
- (void)clearWithInt:(jint)fromIndex
             withInt:(jint)toIndex;

/*!
 @brief Cloning this <code>BitSet</code> produces a new <code>BitSet</code>
  that is equal to it.
 The clone of the bit set is another bit set that has exactly the
  same bits set to <code>true</code> as this bit set.
 @return a clone of this bit set
 - seealso: #size()
 */
- (id)java_clone;

/*!
 @brief Compares this object against the specified object.
 The result is <code>true</code> if and only if the argument is
  not <code>null</code> and is a <code>Bitset</code> object that has
  exactly the same set of bits set to <code>true</code> as this bit
  set. That is, for every nonnegative <code>int</code> index <code>k</code>,
  @code
((BitSet)obj).get(k) == this.get(k)
@endcode
  must be true. The current sizes of the two bit sets are not compared.
 @param obj the object to compare with
 @return <code>true</code> if the objects are the same;
          <code>false</code> otherwise
 - seealso: #size()
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Sets the bit at the specified index to the complement of its
  current value.
 @param bitIndex the index of the bit to flip
 @throw IndexOutOfBoundsExceptionif the specified index is negative
 @since 1.4
 */
- (void)flipWithInt:(jint)bitIndex;

/*!
 @brief Sets each bit from the specified <code>fromIndex</code> (inclusive) to the
  specified <code>toIndex</code> (exclusive) to the complement of its current
  value.
 @param fromIndex index of the first bit to flip
 @param toIndex index after the last bit to flip
 @throw IndexOutOfBoundsExceptionif <code>fromIndex</code> is negative,
          or <code>toIndex</code> is negative, or <code>fromIndex</code> is
          larger than <code>toIndex</code>
 @since 1.4
 */
- (void)flipWithInt:(jint)fromIndex
            withInt:(jint)toIndex;

/*!
 @brief Returns the value of the bit with the specified index.The value
  is <code>true</code> if the bit with the index <code>bitIndex</code>
  is currently set in this <code>BitSet</code>; otherwise, the result
  is <code>false</code>.
 @param bitIndex the bit index
 @return the value of the bit with the specified index
 @throw IndexOutOfBoundsExceptionif the specified index is negative
 */
- (jboolean)getWithInt:(jint)bitIndex;

/*!
 @brief Returns a new <code>BitSet</code> composed of bits from this <code>BitSet</code>
  from <code>fromIndex</code> (inclusive) to <code>toIndex</code> (exclusive).
 @param fromIndex index of the first bit to include
 @param toIndex index after the last bit to include
 @return a new <code>BitSet</code> from a range of this <code>BitSet</code>
 @throw IndexOutOfBoundsExceptionif <code>fromIndex</code> is negative,
          or <code>toIndex</code> is negative, or <code>fromIndex</code> is
          larger than <code>toIndex</code>
 @since 1.4
 */
- (JavaUtilBitSet *)getWithInt:(jint)fromIndex
                       withInt:(jint)toIndex;

/*!
 @brief Returns the hash code value for this bit set.The hash code depends
  only on which bits are set within this <code>BitSet</code>.
 <p>The hash code is defined to be the result of the following
  calculation:
   @code
  public int hashCode() {
      long h = 1234;
      long[] words = toLongArray();
      for (int i = words.length; --i >= 0; )
          h ^= words[i] * (i + 1);
      return (int)((h >> 32) ^ h);
  }
 
@endcode
  Note that the hash code changes if the set of bits is altered.
 @return the hash code value for this bit set
 */
- (NSUInteger)hash;

/*!
 @brief Returns true if the specified <code>BitSet</code> has any bits set to 
 <code>true</code> that are also set to <code>true</code> in this <code>BitSet</code>.
 @param set<code>BitSet</code>  to intersect with
 @return boolean indicating whether this <code>BitSet</code> intersects
          the specified <code>BitSet</code>
 @since 1.4
 */
- (jboolean)intersectsWithJavaUtilBitSet:(JavaUtilBitSet *)set;

/*!
 @brief Returns true if this <code>BitSet</code> contains no bits that are set
  to <code>true</code>.
 @return boolean indicating whether this <code>BitSet</code> is empty
 @since 1.4
 */
- (jboolean)isEmpty;

/*!
 @brief Returns the "logical size" of this <code>BitSet</code>: the index of
  the highest set bit in the <code>BitSet</code> plus one.Returns zero
  if the <code>BitSet</code> contains no set bits.
 @return the logical size of this <code>BitSet</code>
 @since 1.2
 */
- (jint)length;

/*!
 @brief Returns the index of the first bit that is set to <code>false</code>
  that occurs on or after the specified starting index.
 @param fromIndex the index to start checking from (inclusive)
 @return the index of the next clear bit
 @throw IndexOutOfBoundsExceptionif the specified index is negative
 @since 1.4
 */
- (jint)nextClearBitWithInt:(jint)fromIndex;

/*!
 @brief Returns the index of the first bit that is set to <code>true</code>
  that occurs on or after the specified starting index.If no such
  bit exists then <code>-1</code> is returned.
 <p>To iterate over the <code>true</code> bits in a <code>BitSet</code>,
  use the following loop:
   
 @code
  for (int i = bs.nextSetBit(0); i >= 0; i = bs.nextSetBit(i+1)) {
      // operate on index i here
  }
 
@endcode
 @param fromIndex the index to start checking from (inclusive)
 @return the index of the next set bit, or <code>-1</code> if there
          is no such bit
 @throw IndexOutOfBoundsExceptionif the specified index is negative
 @since 1.4
 */
- (jint)nextSetBitWithInt:(jint)fromIndex;

/*!
 @brief Performs a logical <b>OR</b> of this bit set with the bit set
  argument.This bit set is modified so that a bit in it has the
  value <code>true</code> if and only if it either already had the
  value <code>true</code> or the corresponding bit in the bit set
  argument has the value <code>true</code>.
 @param set a bit set
 */
- (void)or__WithJavaUtilBitSet:(JavaUtilBitSet *)set;

/*!
 @brief Returns the index of the nearest bit that is set to <code>false</code>
  that occurs on or before the specified starting index.
 If no such bit exists, or if <code>-1</code> is given as the
  starting index, then <code>-1</code> is returned.
 @param fromIndex the index to start checking from (inclusive)
 @return the index of the previous clear bit, or <code>-1</code> if there
          is no such bit
 @throw IndexOutOfBoundsExceptionif the specified index is less
          than <code>-1</code>
 @since 1.7
 */
- (jint)previousClearBitWithInt:(jint)fromIndex;

/*!
 @brief Returns the index of the nearest bit that is set to <code>true</code>
  that occurs on or before the specified starting index.
 If no such bit exists, or if <code>-1</code> is given as the
  starting index, then <code>-1</code> is returned. 
 <p>To iterate over the <code>true</code> bits in a <code>BitSet</code>,
  use the following loop:
   
 @code
  for (int i = bs.length(); (i = bs.previousSetBit(i-1)) >= 0; ) {
      // operate on index i here
  }
 
@endcode
 @param fromIndex the index to start checking from (inclusive)
 @return the index of the previous set bit, or <code>-1</code> if there
          is no such bit
 @throw IndexOutOfBoundsExceptionif the specified index is less
          than <code>-1</code>
 @since 1.7
 */
- (jint)previousSetBitWithInt:(jint)fromIndex;

/*!
 @brief Sets the bit at the specified index to <code>true</code>.
 @param bitIndex a bit index
 @throw IndexOutOfBoundsExceptionif the specified index is negative
 @since JDK1.0
 */
- (void)setWithInt:(jint)bitIndex;

/*!
 @brief Sets the bit at the specified index to the specified value.
 @param bitIndex a bit index
 @param value a boolean value to set
 @throw IndexOutOfBoundsExceptionif the specified index is negative
 @since 1.4
 */
- (void)setWithInt:(jint)bitIndex
       withBoolean:(jboolean)value;

/*!
 @brief Sets the bits from the specified <code>fromIndex</code> (inclusive) to the
  specified <code>toIndex</code> (exclusive) to <code>true</code>.
 @param fromIndex index of the first bit to be set
 @param toIndex index after the last bit to be set
 @throw IndexOutOfBoundsExceptionif <code>fromIndex</code> is negative,
          or <code>toIndex</code> is negative, or <code>fromIndex</code> is
          larger than <code>toIndex</code>
 @since 1.4
 */
- (void)setWithInt:(jint)fromIndex
           withInt:(jint)toIndex;

/*!
 @brief Sets the bits from the specified <code>fromIndex</code> (inclusive) to the
  specified <code>toIndex</code> (exclusive) to the specified value.
 @param fromIndex index of the first bit to be set
 @param toIndex index after the last bit to be set
 @param value value to set the selected bits to
 @throw IndexOutOfBoundsExceptionif <code>fromIndex</code> is negative,
          or <code>toIndex</code> is negative, or <code>fromIndex</code> is
          larger than <code>toIndex</code>
 @since 1.4
 */
- (void)setWithInt:(jint)fromIndex
           withInt:(jint)toIndex
       withBoolean:(jboolean)value;

/*!
 @brief Returns the number of bits of space actually in use by this 
 <code>BitSet</code> to represent bit values.
 The maximum element in the set is the size - 1st element.
 @return the number of bits currently in this bit set
 */
- (jint)size;

/*!
 @brief Returns a stream of indices for which this <code>BitSet</code>
  contains a bit in the set state.The indices are returned
  in order, from lowest to highest.
 The size of the stream
  is the number of bits in the set state, equal to the value
  returned by the <code>cardinality()</code> method. 
 <p>The bit set must remain constant during the execution of the
  terminal stream operation.  Otherwise, the result of the terminal
  stream operation is undefined.
 @return a stream of integers representing set indices
 @since 1.8
 */
- (id<JavaUtilStreamIntStream>)stream;

/*!
 @brief Returns a new byte array containing all the bits in this bit set.
 <p>More precisely, if 
 <br><code>byte[] bytes = s.toByteArray();</code>
  <br>then <code>bytes.length == (s.length()+7)/8</code> and 
 <br><code>s.get(n) == ((bytes[n/8] & (1<<(n%8))) != 0)</code>
  <br>for all <code>n < 8 * bytes.length</code>.
 @return a byte array containing a little-endian representation
          of all the bits in this bit set
 @since 1.7
 */
- (IOSByteArray *)toByteArray;

/*!
 @brief Returns a new long array containing all the bits in this bit set.
 <p>More precisely, if 
 <br><code>long[] longs = s.toLongArray();</code>
  <br>then <code>longs.length == (s.length()+63)/64</code> and 
 <br><code>s.get(n) == ((longs[n/64] & (1L<<(n%64))) != 0)</code>
  <br>for all <code>n < 64 * longs.length</code>.
 @return a long array containing a little-endian representation
          of all the bits in this bit set
 @since 1.7
 */
- (IOSLongArray *)toLongArray;

/*!
 @brief Returns a string representation of this bit set.For every index
  for which this <code>BitSet</code> contains a bit in the set
  state, the decimal representation of that index is included in
  the result.
 Such indices are listed in order from lowest to
  highest, separated by ",&nbsp;" (a comma and a space) and
  surrounded by braces, resulting in the usual mathematical
  notation for a set of integers. 
 <p>Example:
  @code

  BitSet drPepper = new BitSet();
@endcode
  Now <code>drPepper.toString()</code> returns "<code>{}</code>".<p>
  @code

  drPepper.set(2);
@endcode
  Now <code>drPepper.toString()</code> returns "<code>{2}</code>".<p>
  @code

  drPepper.set(4);
  drPepper.set(10);
@endcode
  Now <code>drPepper.toString()</code> returns "<code>{2, 4, 10}</code>".
 @return a string representation of this bit set
 */
- (NSString *)description;

/*!
 @brief Returns a new bit set containing all the bits in the given byte array.
 <p>More precisely, 
 <br><code>BitSet.valueOf(bytes).get(n) == ((bytes[n/8] & (1<<(n%8))) != 0)</code>
  <br>for all <code>n <  8 * bytes.length</code>.
  
 <p>This method is equivalent to 
 <code>BitSet.valueOf(ByteBuffer.wrap(bytes))</code>.
 @param bytes a byte array containing a little-endian         representation of a sequence of bits to be used as the
          initial bits of the new bit set
 @since 1.7
 */
+ (JavaUtilBitSet *)valueOfWithByteArray:(IOSByteArray *)bytes;

/*!
 @brief Returns a new bit set containing all the bits in the given byte
  buffer between its position and limit.
 <p>More precisely, 
 <br><code>BitSet.valueOf(bb).get(n) == ((bb.get(bb.position()+n/8) & (1<<(n%8))) != 0)</code>
  <br>for all <code>n < 8 * bb.remaining()</code>.
  
 <p>The byte buffer is not modified by this method, and no
  reference to the buffer is retained by the bit set.
 @param bb a byte buffer containing a little-endian representation         of a sequence of bits between its position and limit, to be
          used as the initial bits of the new bit set
 @since 1.7
 */
+ (JavaUtilBitSet *)valueOfWithJavaNioByteBuffer:(JavaNioByteBuffer *)bb;

/*!
 @brief Returns a new bit set containing all the bits in the given long array.
 <p>More precisely, 
 <br><code>BitSet.valueOf(longs).get(n) == ((longs[n/64] & (1L<<(n%64))) != 0)</code>
  <br>for all <code>n < 64 * longs.length</code>.
  
 <p>This method is equivalent to 
 <code>BitSet.valueOf(LongBuffer.wrap(longs))</code>.
 @param longs a long array containing a little-endian representation         of a sequence of bits to be used as the initial bits of the
          new bit set
 @since 1.7
 */
+ (JavaUtilBitSet *)valueOfWithLongArray:(IOSLongArray *)longs;

/*!
 @brief Returns a new bit set containing all the bits in the given long
  buffer between its position and limit.
 <p>More precisely, 
 <br><code>BitSet.valueOf(lb).get(n) == ((lb.get(lb.position()+n/64) & (1L<<(n%64))) != 0)</code>
  <br>for all <code>n < 64 * lb.remaining()</code>.
  
 <p>The long buffer is not modified by this method, and no
  reference to the buffer is retained by the bit set.
 @param lb a long buffer containing a little-endian representation         of a sequence of bits between its position and limit, to be
          used as the initial bits of the new bit set
 @since 1.7
 */
+ (JavaUtilBitSet *)valueOfWithJavaNioLongBuffer:(JavaNioLongBuffer *)lb;

/*!
 @brief Performs a logical <b>XOR</b> of this bit set with the bit set
  argument.This bit set is modified so that a bit in it has the
  value <code>true</code> if and only if one of the following
  statements holds: 
 <ul>
  <li>The bit initially has the value <code>true</code>, and the
      corresponding bit in the argument has the value <code>false</code>.
 <li>The bit initially has the value <code>false</code>, and the
      corresponding bit in the argument has the value <code>true</code>.
  </ul>
 @param set a bit set
 */
- (void)xor__WithJavaUtilBitSet:(JavaUtilBitSet *)set;

@end

J2OBJC_STATIC_INIT(JavaUtilBitSet)

FOUNDATION_EXPORT void JavaUtilBitSet_init(JavaUtilBitSet *self);

FOUNDATION_EXPORT JavaUtilBitSet *new_JavaUtilBitSet_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilBitSet *create_JavaUtilBitSet_init(void);

FOUNDATION_EXPORT void JavaUtilBitSet_initWithInt_(JavaUtilBitSet *self, jint nbits);

FOUNDATION_EXPORT JavaUtilBitSet *new_JavaUtilBitSet_initWithInt_(jint nbits) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilBitSet *create_JavaUtilBitSet_initWithInt_(jint nbits);

FOUNDATION_EXPORT JavaUtilBitSet *JavaUtilBitSet_valueOfWithLongArray_(IOSLongArray *longs);

FOUNDATION_EXPORT JavaUtilBitSet *JavaUtilBitSet_valueOfWithJavaNioLongBuffer_(JavaNioLongBuffer *lb);

FOUNDATION_EXPORT JavaUtilBitSet *JavaUtilBitSet_valueOfWithByteArray_(IOSByteArray *bytes);

FOUNDATION_EXPORT JavaUtilBitSet *JavaUtilBitSet_valueOfWithJavaNioByteBuffer_(JavaNioByteBuffer *bb);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilBitSet)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilBitSet")
