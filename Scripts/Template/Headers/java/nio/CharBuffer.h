//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/CharBuffer.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioCharBuffer")
#ifdef RESTRICT_JavaNioCharBuffer
#define INCLUDE_ALL_JavaNioCharBuffer 0
#else
#define INCLUDE_ALL_JavaNioCharBuffer 1
#endif
#undef RESTRICT_JavaNioCharBuffer

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioCharBuffer_) && (INCLUDE_ALL_JavaNioCharBuffer || defined(INCLUDE_JavaNioCharBuffer))
#define JavaNioCharBuffer_

#define RESTRICT_JavaNioBuffer 1
#define INCLUDE_JavaNioBuffer 1
#include "java/nio/Buffer.h"

#define RESTRICT_JavaLangComparable 1
#define INCLUDE_JavaLangComparable 1
#include "java/lang/Comparable.h"

#define RESTRICT_JavaLangAppendable 1
#define INCLUDE_JavaLangAppendable 1
#include "java/lang/Appendable.h"

#define RESTRICT_JavaLangCharSequence 1
#define INCLUDE_JavaLangCharSequence 1
#include "java/lang/CharSequence.h"

#define RESTRICT_JavaLangReadable 1
#define INCLUDE_JavaLangReadable 1
#include "java/lang/Readable.h"

@class IOSCharArray;
@class JavaNioByteOrder;
@protocol JavaUtilStreamIntStream;

/*!
 @brief A char buffer.
 <p> This class defines four categories of operations upon
  char buffers: 
 <ul>
  
 <li><p> Absolute and relative <code></code><i>get</i><code></code> and 
 <code></code><i>put</i><code></code> methods that read and write
  single chars; </p></li>
  
 <li><p> Relative <code>get</i><code></code>
  methods that transfer contiguous sequences of chars from this buffer
  into an array; and</p></li>
  
 <li><p> Relative <code>put</i><code></code>
  methods that transfer contiguous sequences of chars from a
  char array,&#32;a&#32;string, or some other char
  buffer into this buffer;&#32;and </p></li>
  
 <li><p> Methods for <code></code>compacting<code></code>, <code></code>duplicating<code></code>
 , and <code></code>slicing<code></code>
  a char buffer.  </p></li>
  
 </ul>
  
 <p> Char buffers can be created either by <code></code><i>allocation</i><code></code>
 , which allocates space for the buffer's
  content, by <code></code><i>wrapping</i><code></code> an existing
  char array or&#32;string into a buffer, or by creating a 
 <a href="ByteBuffer.html#views"><i>view</i></a> of an existing byte buffer. 
 <p> Like a byte buffer, a char buffer is either <a href="ByteBuffer.html#direct">
 <i>direct</i> or <i>non-direct</i></a>.  A
  char buffer created via the <tt>wrap</tt> methods of this class will
  be non-direct.  A char buffer created as a view of a byte buffer will
  be direct if, and only if, the byte buffer itself is direct.  Whether or not
  a char buffer is direct may be determined by invoking the <code>isDirect</code>
  method.  </p>
  
 <p> This class implements the <code>CharSequence</code> interface so that
  character buffers may be used wherever character sequences are accepted, for
  example in the regular-expression package <tt><code>java.util.regex</code></tt>.
  </p>
  
 <p> Methods in this class that do not otherwise have a value to return are
  specified to return the buffer upon which they are invoked.  This allows
  method invocations to be chained.
  The sequence of statements 
 <blockquote>@code

  cb.put("text/");
  cb.put(subtype);
  cb.put("; charset=");
  cb.put(enc);
@endcode</blockquote>
  can, for example, be replaced by the single statement 
 <blockquote>@code

  cb.put("text/").put(subtype).put("; charset=").put(enc);
@endcode</blockquote>
 @author Mark Reinhold
 @author JSR-51 Expert Group
 @since 1.4
 */
@interface JavaNioCharBuffer : JavaNioBuffer < JavaLangComparable, JavaLangAppendable, JavaLangCharSequence, JavaLangReadable > {
 @public
  IOSCharArray *hb_;
  jint offset_;
  jboolean isReadOnly_;
}

#pragma mark Public

/*!
 @brief Allocates a new char buffer.
 <p> The new buffer's position will be zero, its limit will be its
  capacity, its mark will be undefined, and each of its elements will be
  initialized to zero.  It will have a <code>array<code></code>
 , and its <code>offset<code></code>
  will be zero.
 @param capacity The new buffer's capacity, in chars
 @return The new char buffer
 @throw IllegalArgumentExceptionIf the <tt>capacity</tt> is a negative integer
 */
+ (JavaNioCharBuffer *)allocateWithInt:(jint)capacity OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Appends the specified char  to this
  buffer&nbsp;&nbsp;<i>(optional operation)</i>.
 <p> An invocation of this method of the form <tt>dst.append(c)</tt>
  behaves in exactly the same way as the invocation 
 @code

      dst.put(c) 
@endcode
 @param c The 16-bit char to append
 @return This buffer
 @throw BufferOverflowExceptionIf there is insufficient space in this buffer
 @throw ReadOnlyBufferExceptionIf this buffer is read-only
 @since 1.5
 */
- (JavaNioCharBuffer *)appendWithChar:(jchar)c;

/*!
 @brief Appends the specified character sequence  to this
  buffer&nbsp;&nbsp;<i>(optional operation)</i>.
 <p> An invocation of this method of the form <tt>dst.append(csq)</tt>
  behaves in exactly the same way as the invocation 
 @code

      dst.put(csq.toString()) 
@endcode
  
 <p> Depending on the specification of <tt>toString</tt> for the
  character sequence <tt>csq</tt>, the entire sequence may not be
  appended.  For instance, invoking the <code>toString</code>
  method of a character buffer will return a subsequence whose
  content depends upon the buffer's position and limit.
 @param csq The character sequence to append.  If  <tt> csq </tt>  is
               <tt> null </tt> , then the four characters  <tt> "null" </tt>
   are             appended to this character buffer.
 @return This buffer
 @throw BufferOverflowExceptionIf there is insufficient space in this buffer
 @throw ReadOnlyBufferExceptionIf this buffer is read-only
 @since 1.5
 */
- (JavaNioCharBuffer *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq;

/*!
 @brief Appends a subsequence of the  specified character sequence  to this
  buffer&nbsp;&nbsp;<i>(optional operation)</i>.
 <p> An invocation of this method of the form <tt>dst.append(csq, start,
  end)</tt> when <tt>csq</tt> is not <tt>null</tt>, behaves in exactly the
  same way as the invocation 
 @code

      dst.put(csq.subSequence(start, end).toString()) 
@endcode
 @param csq The character sequence from which a subsequence will be             appended.  If 
  <tt> csq </tt>  is  <tt> null </tt> , then characters
              will be appended as if  <tt> csq </tt>  contained the four             characters 
  <tt> "null" </tt> .
 @return This buffer
 @throw BufferOverflowExceptionIf there is insufficient space in this buffer
 @throw IndexOutOfBoundsExceptionIf <tt>start</tt> or <tt>end</tt> are negative,
                                    <tt>start</tt>
                                    is greater than <tt>end</tt>, or <tt>end</tt> is greater
                                    than                                   
 <tt>csq.length()</tt>
 @throw ReadOnlyBufferExceptionIf this buffer is read-only
 @since 1.5
 */
- (JavaNioCharBuffer *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq
                                              withInt:(jint)start
                                              withInt:(jint)end;

/*!
 @brief Returns the char array that backs this
  buffer&nbsp;&nbsp;<i>(optional operation)</i>.
 <p> Modifications to this buffer's content will cause the returned
  array's content to be modified, and vice versa. 
 <p> Invoke the <code>hasArray</code> method before invoking this
  method in order to ensure that this buffer has an accessible backing
  array.  </p>
 @return The array that backs this buffer
 @throw ReadOnlyBufferExceptionIf this buffer is backed by an array but is read-only
 @throw UnsupportedOperationExceptionIf this buffer is not backed by an accessible array
 */
- (IOSCharArray *)array;

/*!
 @brief Returns the offset within this buffer's backing array of the first
  element of the buffer&nbsp;&nbsp;<i>(optional operation)</i>.
 <p> If this buffer is backed by an array then buffer position <i>p</i>
  corresponds to array index <i>p</i>&nbsp;+&nbsp;<tt>arrayOffset()</tt>.
  
 <p> Invoke the <code>hasArray</code> method before invoking this
  method in order to ensure that this buffer has an accessible backing
  array.  </p>
 @return The offset within this buffer's array
  of the first element of the buffer
 @throw ReadOnlyBufferExceptionIf this buffer is backed by an array but is read-only
 @throw UnsupportedOperationExceptionIf this buffer is not backed by an accessible array
 */
- (jint)arrayOffset;

/*!
 @brief Creates a new, read-only char buffer that shares this buffer's
  content.
 <p> The content of the new buffer will be that of this buffer.  Changes
  to this buffer's content will be visible in the new buffer; the new
  buffer itself, however, will be read-only and will not allow the shared
  content to be modified.  The two buffers' position, limit, and mark
  values will be independent. 
 <p> The new buffer's capacity, limit, position, and mark values will be
  identical to those of this buffer. 
 <p> If this buffer is itself read-only then this method behaves in
  exactly the same way as the <code>duplicate</code> method.  </p>
 @return The new, read-only char buffer
 */
- (JavaNioCharBuffer *)asReadOnlyBuffer;

/*!
 @brief Reads the character at the given index relative to the current
  position.
 </p>
 @param index The index of the character to be read, relative to the position;               must be non-negative and smaller than 
  <tt> remaining() </tt>
 @return The character at index 
 <tt>position()&nbsp;+&nbsp;index</tt>
 @throw IndexOutOfBoundsExceptionIf the preconditions on <tt>index</tt> do not hold
 */
- (jchar)charAtWithInt:(jint)index;

- (id<JavaUtilStreamIntStream>)chars;

/*!
 @brief Compacts this buffer&nbsp;&nbsp;<i>(optional operation)</i>.
 <p> The chars between the buffer's current position and its limit,
  if any, are copied to the beginning of the buffer.  That is, the
  char at index <i>p</i>&nbsp;=&nbsp;<tt>position()</tt> is copied
  to index zero, the char at index <i>p</i>&nbsp;+&nbsp;1 is copied
  to index one, and so forth until the char at index 
 <tt>limit()</tt>&nbsp;-&nbsp;1 is copied to index 
 <i>n</i>&nbsp;=&nbsp;<tt>limit()</tt>&nbsp;-&nbsp;<tt>1</tt>&nbsp;-&nbsp;<i>p</i>.
  The buffer's position is then set to <i>n+1</i> and its limit is set to
  its capacity.  The mark, if defined, is discarded. 
 <p> The buffer's position is set to the number of chars copied,
  rather than to zero, so that an invocation of this method can be
  followed immediately by an invocation of another relative <i>put</i>
  method. </p>
 @return This buffer
 @throw ReadOnlyBufferExceptionIf this buffer is read-only
 */
- (JavaNioCharBuffer *)compact;

/*!
 @brief Compares this buffer to another.
 <p> Two char buffers are compared by comparing their sequences of
  remaining elements lexicographically, without regard to the starting
  position of each sequence within its corresponding buffer.
  Pairs of <code>char</code> elements are compared as if by invoking 
 <code>char)</code>.
  
 <p> A char buffer is not comparable to any other type of object.
 @return A negative integer, zero, or a positive integer as this buffer
  is less than, equal to, or greater than the given buffer
 */
- (jint)compareToWithId:(JavaNioCharBuffer *)that;

/*!
 @brief Creates a new char buffer that shares this buffer's content.
 <p> The content of the new buffer will be that of this buffer.  Changes
  to this buffer's content will be visible in the new buffer, and vice
  versa; the two buffers' position, limit, and mark values will be
  independent. 
 <p> The new buffer's capacity, limit, position, and mark values will be
  identical to those of this buffer.  The new buffer will be direct if,
  and only if, this buffer is direct, and it will be read-only if, and
  only if, this buffer is read-only.  </p>
 @return The new char buffer
 */
- (JavaNioCharBuffer *)duplicate;

/*!
 @brief Tells whether or not this buffer is equal to another object.
 <p> Two char buffers are equal if, and only if, 
 <p><ol>
  
 <li><p> They have the same element type,  </p></li>
  
 <li><p> They have the same number of remaining elements, and 
 </p></li>
  
 <li><p> The two sequences of remaining elements, considered
  independently of their starting positions, are pointwise equal. 
 </p></li>
  
 </ol>
  
 <p> A char buffer is not equal to any other type of object.  </p>
 @param ob The object to which this buffer is to be compared
 @return <tt>true</tt> if, and only if, this buffer is equal to the
  given object
 */
- (jboolean)isEqual:(id)ob;

/*!
 @brief Relative <i>get</i> method.Reads the char at this buffer's
  current position, and then increments the position.
 </p>
 @return The char at the buffer's current position
 @throw BufferUnderflowExceptionIf the buffer's current position is not smaller than its
                                   limit
 */
- (jchar)get;

/*!
 @brief Relative bulk <i>get</i> method.
 <p> This method transfers chars from this buffer into the given
  destination array.  An invocation of this method of the form 
 <tt>src.get(a)</tt> behaves in exactly the same way as the invocation 
 @code

      src.get(a, 0, a.length) 
@endcode
 @return This buffer
 @throw BufferUnderflowExceptionIf there are fewer than <tt>length</tt> chars
                                   remaining in this buffer
 */
- (JavaNioCharBuffer *)getWithCharArray:(IOSCharArray *)dst;

/*!
 @brief Relative bulk <i>get</i> method.
 <p> This method transfers chars from this buffer into the given
  destination array.  If there are fewer chars remaining in the
  buffer than are required to satisfy the request, that is, if 
 <tt>length</tt>&nbsp;<tt>&gt;</tt>&nbsp;<tt>remaining()</tt>, then no
  chars are transferred and a <code>BufferUnderflowException</code> is
  thrown. 
 <p> Otherwise, this method copies <tt>length</tt> chars from this
  buffer into the given array, starting at the current position of this
  buffer and at the given offset in the array.  The position of this
  buffer is then incremented by <tt>length</tt>.
  
 <p> In other words, an invocation of this method of the form 
 <tt>src.get(dst,&nbsp;off,&nbsp;len)</tt> has exactly the same effect as
  the loop 
 @code

      for (int i = off; i < off + len; i++)
          dst[i] = src.get(); 
@endcode
  except that it first checks that there are sufficient chars in
  this buffer and it is potentially much more efficient. </p>
 @param dst The array into which chars are to be written
 @param offset The offset within the array of the first char to be                written; must be non-negative and no larger than
                 
  <tt> dst.length </tt>
 @param length The maximum number of chars to be written to the given                array; must be non-negative and no larger than
                 
  <tt> dst.length - offset </tt>
 @return This buffer
 @throw BufferUnderflowExceptionIf there are fewer than <tt>length</tt> chars
                                    remaining in this buffer
 @throw IndexOutOfBoundsExceptionIf the preconditions on the <tt>offset</tt> and
                                    <tt>length</tt>
                                    parameters do not hold
 */
- (JavaNioCharBuffer *)getWithCharArray:(IOSCharArray *)dst
                                withInt:(jint)offset
                                withInt:(jint)length;

/*!
 @brief Absolute <i>get</i> method.Reads the char at the given
  index.
 </p>
 @param index The index from which the char will be read
 @return The char at the given index
 @throw IndexOutOfBoundsExceptionIf <tt>index</tt> is negative
                                    or not smaller than the buffer's limit
 */
- (jchar)getWithInt:(jint)index;

/*!
 @brief Tells whether or not this buffer is backed by an accessible char
  array.
 <p> If this method returns <tt>true</tt> then the <code>array</code>
  and <code>arrayOffset</code> methods may safely be invoked. 
 </p>
 @return <tt>true</tt> if, and only if, this buffer
  is backed by an array and is not read-only
 */
- (jboolean)hasArray;

/*!
 @brief Returns the current hash code of this buffer.
 <p> The hash code of a char buffer depends only upon its remaining
  elements; that is, upon the elements from <tt>position()</tt> up to, and
  including, the element at <tt>limit()</tt>&nbsp;-&nbsp;<tt>1</tt>.
  
 <p> Because buffer hash codes are content-dependent, it is inadvisable
  to use buffers as keys in hash maps or similar data structures unless it
  is known that their contents will not change.  </p>
 @return The current hash code of this buffer
 */
- (NSUInteger)hash;

/*!
 @brief Tells whether or not this char buffer is direct.
 </p>
 @return <tt>true</tt> if, and only if, this buffer is direct
 */
- (jboolean)isDirect;

/*!
 @brief Returns the length of this character buffer.
 <p> When viewed as a character sequence, the length of a character
  buffer is simply the number of characters between the position
  (inclusive) and the limit (exclusive); that is, it is equivalent to 
 <tt>remaining()</tt>. </p>
 @return The length of this character buffer
 */
- (jint)java_length;

/*!
 @brief Retrieves this buffer's byte order.
 <p> The byte order of a char buffer created by allocation or by
  wrapping an existing <tt>char</tt> array is the <code>order<code></code>
  of the underlying
  hardware.  The byte order of a char buffer created as a <a href="ByteBuffer.html#views">
 view</a> of a byte buffer is that of the
  byte buffer at the moment that the view is created.  </p>
 @return This buffer's byte order
 */
- (JavaNioByteOrder *)order;

/*!
 @brief Relative <i>put</i> method&nbsp;&nbsp;<i>(optional operation)</i>.
 <p> Writes the given char into this buffer at the current
  position, and then increments the position. </p>
 @param c The char to be written
 @return This buffer
 @throw BufferOverflowExceptionIf this buffer's current position is not smaller than its
                                  limit
 @throw ReadOnlyBufferExceptionIf this buffer is read-only
 */
- (JavaNioCharBuffer *)putWithChar:(jchar)c;

/*!
 @brief Relative bulk <i>put</i> method&nbsp;&nbsp;<i>(optional operation)</i>.
 <p> This method transfers the entire content of the given source
  char array into this buffer.  An invocation of this method of the
  form <tt>dst.put(a)</tt> behaves in exactly the same way as the
  invocation 
 @code

      dst.put(a, 0, a.length) 
@endcode
 @return This buffer
 @throw BufferOverflowExceptionIf there is insufficient space in this buffer
 @throw ReadOnlyBufferExceptionIf this buffer is read-only
 */
- (JavaNioCharBuffer *)putWithCharArray:(IOSCharArray *)src;

/*!
 @brief Relative bulk <i>put</i> method&nbsp;&nbsp;<i>(optional operation)</i>.
 <p> This method transfers chars into this buffer from the given
  source array.  If there are more chars to be copied from the array
  than remain in this buffer, that is, if 
 <tt>length</tt>&nbsp;<tt>&gt;</tt>&nbsp;<tt>remaining()</tt>, then no
  chars are transferred and a <code>BufferOverflowException</code> is
  thrown. 
 <p> Otherwise, this method copies <tt>length</tt> chars from the
  given array into this buffer, starting at the given offset in the array
  and at the current position of this buffer.  The position of this buffer
  is then incremented by <tt>length</tt>.
  
 <p> In other words, an invocation of this method of the form 
 <tt>dst.put(src,&nbsp;off,&nbsp;len)</tt> has exactly the same effect as
  the loop 
 @code

      for (int i = off; i < off + len; i++)
          dst.put(a[i]); 
@endcode
  except that it first checks that there is sufficient space in this
  buffer and it is potentially much more efficient. </p>
 @param src The array from which chars are to be read
 @param offset The offset within the array of the first char to be read;                must be non-negative and no larger than 
  <tt> array.length </tt>
 @param length The number of chars to be read from the given array;                must be non-negative and no larger than
                 
  <tt> array.length - offset </tt>
 @return This buffer
 @throw BufferOverflowExceptionIf there is insufficient space in this buffer
 @throw IndexOutOfBoundsExceptionIf the preconditions on the <tt>offset</tt> and
                                    <tt>length</tt>
                                    parameters do not hold
 @throw ReadOnlyBufferExceptionIf this buffer is read-only
 */
- (JavaNioCharBuffer *)putWithCharArray:(IOSCharArray *)src
                                withInt:(jint)offset
                                withInt:(jint)length;

/*!
 @brief Relative bulk <i>put</i> method&nbsp;&nbsp;<i>(optional operation)</i>.
 <p> This method transfers the chars remaining in the given source
  buffer into this buffer.  If there are more chars remaining in the
  source buffer than in this buffer, that is, if 
 <tt>src.remaining()</tt>&nbsp;<tt>&gt;</tt>&nbsp;<tt>remaining()</tt>,
  then no chars are transferred and a <code>BufferOverflowException</code>
  is thrown. 
 <p> Otherwise, this method copies 
 <i>n</i>&nbsp;=&nbsp;<tt>src.remaining()</tt> chars from the given
  buffer into this buffer, starting at each buffer's current position.
  The positions of both buffers are then incremented by <i>n</i>.
  
 <p> In other words, an invocation of this method of the form 
 <tt>dst.put(src)</tt> has exactly the same effect as the loop 
 @code

      while (src.hasRemaining())
          dst.put(src.get()); 
@endcode
  except that it first checks that there is sufficient space in this
  buffer and it is potentially much more efficient. </p>
 @param src The source buffer from which chars are to be read;             must not be this buffer
 @return This buffer
 @throw BufferOverflowExceptionIf there is insufficient space in this buffer
                                   for the remaining chars in the source buffer
 @throw IllegalArgumentExceptionIf the source buffer is this buffer
 @throw ReadOnlyBufferExceptionIf this buffer is read-only
 */
- (JavaNioCharBuffer *)putWithJavaNioCharBuffer:(JavaNioCharBuffer *)src;

/*!
 @brief Absolute <i>put</i> method&nbsp;&nbsp;<i>(optional operation)</i>.
 <p> Writes the given char into this buffer at the given
  index. </p>
 @param index The index at which the char will be written
 @param c The char value to be written
 @return This buffer
 @throw IndexOutOfBoundsExceptionIf <tt>index</tt> is negative
                                    or not smaller than the buffer's limit
 @throw ReadOnlyBufferExceptionIf this buffer is read-only
 */
- (JavaNioCharBuffer *)putWithInt:(jint)index
                         withChar:(jchar)c;

/*!
 @brief Relative bulk <i>put</i> method&nbsp;&nbsp;<i>(optional operation)</i>.
 <p> This method transfers the entire content of the given source string
  into this buffer.  An invocation of this method of the form 
 <tt>dst.put(s)</tt> behaves in exactly the same way as the invocation 
 @code

      dst.put(s, 0, s.length()) 
@endcode
 @return This buffer
 @throw BufferOverflowExceptionIf there is insufficient space in this buffer
 @throw ReadOnlyBufferExceptionIf this buffer is read-only
 */
- (JavaNioCharBuffer *)putWithNSString:(NSString *)src;

/*!
 @brief Relative bulk <i>put</i> method&nbsp;&nbsp;<i>(optional operation)</i>.
 <p> This method transfers chars from the given string into this
  buffer.  If there are more chars to be copied from the string than
  remain in this buffer, that is, if 
 <tt>end&nbsp;-&nbsp;start</tt>&nbsp;<tt>&gt;</tt>&nbsp;<tt>remaining()</tt>,
  then no chars are transferred and a <code>BufferOverflowException</code>
  is thrown. 
 <p> Otherwise, this method copies 
 <i>n</i>&nbsp;=&nbsp;<tt>end</tt>&nbsp;-&nbsp;<tt>start</tt> chars
  from the given string into this buffer, starting at the given 
 <tt>start</tt> index and at the current position of this buffer.  The
  position of this buffer is then incremented by <i>n</i>.
  
 <p> In other words, an invocation of this method of the form 
 <tt>dst.put(src,&nbsp;start,&nbsp;end)</tt> has exactly the same effect
  as the loop 
 @code

      for (int i = start; i < end; i++)
          dst.put(src.charAt(i)); 
@endcode
  except that it first checks that there is sufficient space in this
  buffer and it is potentially much more efficient. </p>
 @param src The string from which chars are to be read
 @param start The offset within the string of the first char to be read;               must be non-negative and no larger than
                
  <tt> string.length() </tt>
 @param end The offset within the string of the last char to be read,               plus one; must be non-negative and no larger than
                
  <tt> string.length() </tt>
 @return This buffer
 @throw BufferOverflowExceptionIf there is insufficient space in this buffer
 @throw IndexOutOfBoundsExceptionIf the preconditions on the <tt>start</tt> and
                                    <tt>end</tt>
                                    parameters do not hold
 @throw ReadOnlyBufferExceptionIf this buffer is read-only
 */
- (JavaNioCharBuffer *)putWithNSString:(NSString *)src
                               withInt:(jint)start
                               withInt:(jint)end;

/*!
 @brief Attempts to read characters into the specified character buffer.
 The buffer is used as a repository of characters as-is: the only
  changes made are the results of a put operation. No flipping or
  rewinding of the buffer is performed.
 @param target the buffer to read characters into
 @return The number of characters added to the buffer, or
  -1 if this source of characters is at its end
 @throw IOExceptionif an I/O error occurs
 @throw NullPointerExceptionif target is null
 @throw ReadOnlyBufferExceptionif target is a read only buffer
 @since 1.5
 */
- (jint)readWithJavaNioCharBuffer:(JavaNioCharBuffer *)target;

/*!
 @brief Creates a new char buffer whose content is a shared subsequence of
  this buffer's content.
 <p> The content of the new buffer will start at this buffer's current
  position.  Changes to this buffer's content will be visible in the new
  buffer, and vice versa; the two buffers' position, limit, and mark
  values will be independent. 
 <p> The new buffer's position will be zero, its capacity and its limit
  will be the number of chars remaining in this buffer, and its mark
  will be undefined.  The new buffer will be direct if, and only if, this
  buffer is direct, and it will be read-only if, and only if, this buffer
  is read-only.  </p>
 @return The new char buffer
 */
- (JavaNioCharBuffer *)slice;

/*!
 @brief Creates a new character buffer that represents the specified subsequence
  of this buffer, relative to the current position.
 <p> The new buffer will share this buffer's content; that is, if the
  content of this buffer is mutable then modifications to one buffer will
  cause the other to be modified.  The new buffer's capacity will be that
  of this buffer, its position will be 
 <tt>position()</tt>&nbsp;+&nbsp;<tt>start</tt>, and its limit will be 
 <tt>position()</tt>&nbsp;+&nbsp;<tt>end</tt>.  The new buffer will be
  direct if, and only if, this buffer is direct, and it will be read-only
  if, and only if, this buffer is read-only.  </p>
 @param start The index, relative to the current position, of the first               character in the subsequence; must be non-negative and no larger
                than 
  <tt> remaining() </tt>
 @param end The index, relative to the current position, of the character               following the last character in the subsequence; must be no
                smaller than 
  <tt> start </tt>  and no larger than               
  <tt> remaining() </tt>
 @return The new character buffer
 @throw IndexOutOfBoundsExceptionIf the preconditions on <tt>start</tt> and <tt>end</tt>
                                    do not hold
 */
- (JavaNioCharBuffer *)subSequenceFrom:(jint)start
                                    to:(jint)end;

/*!
 @brief Returns a string containing the characters in this buffer.
 <p> The first character of the resulting string will be the character at
  this buffer's position, while the last character will be the character
  at index <tt>limit()</tt>&nbsp;-&nbsp;1.  Invoking this method does not
  change the buffer's position. </p>
 @return The specified string
 */
- (NSString *)description;

/*!
 @brief Wraps a char array into a buffer.
 <p> The new buffer will be backed by the given char array;
  that is, modifications to the buffer will cause the array to be modified
  and vice versa.  The new buffer's capacity and limit will be 
 <tt>array.length</tt>, its position will be zero, and its mark will be
  undefined.  Its <code>array<code></code> will be the
  given array, and its <code>offset<code></code> will
  be zero.  </p>
 @param array The array that will back this buffer
 @return The new char buffer
 */
+ (JavaNioCharBuffer *)wrapWithCharArray:(IOSCharArray *)array;

/*!
 @brief Wraps a char array into a buffer.
 <p> The new buffer will be backed by the given char array;
  that is, modifications to the buffer will cause the array to be modified
  and vice versa.  The new buffer's capacity will be 
 <tt>array.length</tt>, its position will be <tt>offset</tt>, its limit
  will be <tt>offset + length</tt>, and its mark will be undefined.  Its 
 <code>array<code></code> will be the given array, and
  its <code>offset<code></code> will be zero.  </p>
 @param array The array that will back the new buffer
 @param offset The offset of the subarray to be used; must be non-negative and                no larger than 
  <tt> array.length </tt> .  The new buffer's position                will be set to this value.
 @param length The length of the subarray to be used;                must be non-negative and no larger than
                 
  <tt> array.length - offset </tt> .                The new buffer's limit will be set to 
  <tt> offset + length </tt> .
 @return The new char buffer
 @throw IndexOutOfBoundsExceptionIf the preconditions on the <tt>offset</tt> and
                                    <tt>length</tt>
                                    parameters do not hold
 */
+ (JavaNioCharBuffer *)wrapWithCharArray:(IOSCharArray *)array
                                 withInt:(jint)offset
                                 withInt:(jint)length;

/*!
 @brief Wraps a character sequence into a buffer.
 <p> The content of the new, read-only buffer will be the content of the
  given character sequence.  The new buffer's capacity and limit will be 
 <tt>csq.length()</tt>, its position will be zero, and its mark will be
  undefined.  </p>
 @param csq The character sequence from which the new character buffer is to             be created
 @return The new character buffer
 */
+ (JavaNioCharBuffer *)wrapWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq;

/*!
 @brief Wraps a character sequence into a buffer.
 <p> The content of the new, read-only buffer will be the content of the
  given character sequence.  The buffer's capacity will be 
 <tt>csq.length()</tt>, its position will be <tt>start</tt>, its limit
  will be <tt>end</tt>, and its mark will be undefined.  </p>
 @param csq The character sequence from which the new character buffer is to               be created
 @param start The index of the first character to be used;               must be non-negative and no larger than 
  <tt> csq.length() </tt> .               The new buffer's position will be set to this value.
 @param end The index of the character following the last character to be               used; must be no smaller than 
  <tt> start </tt>  and no larger               than 
  <tt> csq.length() </tt> .               The new buffer's limit will be set to this value.
 @return The new character buffer
 @throw IndexOutOfBoundsExceptionIf the preconditions on the <tt>start</tt> and
                                    <tt>end</tt>
                                    parameters do not hold
 */
+ (JavaNioCharBuffer *)wrapWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq
                                            withInt:(jint)start
                                            withInt:(jint)end;

#pragma mark Package-Private

- (instancetype __nonnull)initWithInt:(jint)mark
                              withInt:(jint)pos
                              withInt:(jint)lim
                              withInt:(jint)cap;

- (instancetype __nonnull)initWithInt:(jint)mark
                              withInt:(jint)pos
                              withInt:(jint)lim
                              withInt:(jint)cap
                        withCharArray:(IOSCharArray *)hb
                              withInt:(jint)offset;

/*!
 @brief Absolute <i>get</i> method.Reads the char at the given
  index without any validation of the index.
 @param index The index from which the char will be read
 @return The char at the given index
 */
- (jchar)getUncheckedWithInt:(jint)index;

- (NSString *)toStringWithInt:(jint)start
                      withInt:(jint)end;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioCharBuffer)

J2OBJC_FIELD_SETTER(JavaNioCharBuffer, hb_, IOSCharArray *)

FOUNDATION_EXPORT void JavaNioCharBuffer_initWithInt_withInt_withInt_withInt_withCharArray_withInt_(JavaNioCharBuffer *self, jint mark, jint pos, jint lim, jint cap, IOSCharArray *hb, jint offset);

FOUNDATION_EXPORT void JavaNioCharBuffer_initWithInt_withInt_withInt_withInt_(JavaNioCharBuffer *self, jint mark, jint pos, jint lim, jint cap);

FOUNDATION_EXPORT JavaNioCharBuffer *JavaNioCharBuffer_allocateWithInt_(jint capacity);

FOUNDATION_EXPORT JavaNioCharBuffer *JavaNioCharBuffer_wrapWithCharArray_withInt_withInt_(IOSCharArray *array, jint offset, jint length);

FOUNDATION_EXPORT JavaNioCharBuffer *JavaNioCharBuffer_wrapWithCharArray_(IOSCharArray *array);

FOUNDATION_EXPORT JavaNioCharBuffer *JavaNioCharBuffer_wrapWithJavaLangCharSequence_withInt_withInt_(id<JavaLangCharSequence> csq, jint start, jint end);

FOUNDATION_EXPORT JavaNioCharBuffer *JavaNioCharBuffer_wrapWithJavaLangCharSequence_(id<JavaLangCharSequence> csq);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioCharBuffer)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioCharBuffer")
