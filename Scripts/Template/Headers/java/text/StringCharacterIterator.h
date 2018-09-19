//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/text/StringCharacterIterator.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaTextStringCharacterIterator")
#ifdef RESTRICT_JavaTextStringCharacterIterator
#define INCLUDE_ALL_JavaTextStringCharacterIterator 0
#else
#define INCLUDE_ALL_JavaTextStringCharacterIterator 1
#endif
#undef RESTRICT_JavaTextStringCharacterIterator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaTextStringCharacterIterator_) && (INCLUDE_ALL_JavaTextStringCharacterIterator || defined(INCLUDE_JavaTextStringCharacterIterator))
#define JavaTextStringCharacterIterator_

#define RESTRICT_JavaTextCharacterIterator 1
#define INCLUDE_JavaTextCharacterIterator 1
#include "../../java/text/CharacterIterator.h"

/*!
 @brief An implementation of <code>CharacterIterator</code> for strings.
 */
@interface JavaTextStringCharacterIterator : NSObject < JavaTextCharacterIterator > {
 @public
  NSString *string_;
  jint start_;
  jint end_;
  jint offset_;
}

#pragma mark Public

/*!
 @brief Constructs a new <code>StringCharacterIterator</code> on the specified string.
 The begin and current indices are set to the beginning of the string, the
  end index is set to the length of the string.
 @param value the source string to iterate over.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)value;

/*!
 @brief Constructs a new <code>StringCharacterIterator</code> on the specified string
  with the current index set to the specified value.The begin index is set
  to the beginning of the string, the end index is set to the length of the
  string.
 @param value the source string to iterate over.
 @param location the current index.
 @throw IllegalArgumentException
 if <code>location</code> is negative or greater than the length
             of the source string.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)value
                                   withInt:(jint)location;

/*!
 @brief Constructs a new <code>StringCharacterIterator</code> on the specified string
  with the begin, end and current index set to the specified values.
 @param value the source string to iterate over.
 @param start the index of the first character to iterate.
 @param end the index one past the last character to iterate.
 @param location the current index.
 @throw IllegalArgumentException
 if <code>start < 0</code>, <code>start > end</code>, <code>location <
             start</code>
 , <code>location > end</code> or if <code>end</code> is greater
             than the length of <code>value</code>.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)value
                                   withInt:(jint)start
                                   withInt:(jint)end
                                   withInt:(jint)location;

/*!
 @brief Returns a new <code>StringCharacterIterator</code> with the same source
  string, begin, end, and current index as this iterator.
 @return a shallow copy of this iterator.
 - seealso: java.lang.Cloneable
 */
- (id)java_clone;

/*!
 @brief Returns the character at the current index in the source string.
 @return the current character, or <code>DONE</code> if the current index is
          past the end.
 */
- (jchar)current;

/*!
 @brief Compares the specified object with this <code>StringCharacterIterator</code>
  and indicates if they are equal.In order to be equal, <code>object</code>
  must be an instance of <code>StringCharacterIterator</code> that iterates over
  the same sequence of characters with the same index.
 @param object the object to compare with this object.
 @return <code>true</code> if the specified object is equal to this
          <code>StringCharacterIterator</code>; <code>false</code> otherwise.
 - seealso: #hashCode
 */
- (jboolean)isEqual:(id)object;

/*!
 @brief Sets the current position to the begin index and returns the character at
  the new position in the source string.
 @return the character at the begin index or <code>DONE</code> if the begin
          index is equal to the end index.
 */
- (jchar)first;

/*!
 @brief Returns the begin index in the source string.
 @return the index of the first character of the iteration.
 */
- (jint)getBeginIndex;

/*!
 @brief Returns the end index in the source string.
 @return the index one past the last character of the iteration.
 */
- (jint)getEndIndex;

/*!
 @brief Returns the current index in the source string.
 @return the current index.
 */
- (jint)getIndex;

- (NSUInteger)hash;

/*!
 @brief Sets the current position to the end index - 1 and returns the character
  at the new position.
 @return the character before the end index or <code>DONE</code> if the begin
          index is equal to the end index.
 */
- (jchar)last;

/*!
 @brief Increments the current index and returns the character at the new index.
 @return the character at the next index, or <code>DONE</code> if the next
          index would be past the end.
 */
- (jchar)next;

/*!
 @brief Decrements the current index and returns the character at the new index.
 @return the character at the previous index, or <code>DONE</code> if the
          previous index would be past the beginning.
 */
- (jchar)previous;

/*!
 @brief Sets the current index in the source string.
 @param location the index the current position is set to.
 @return the character at the new index, or <code>DONE</code> if
          <code>location</code> is set to the end index.
 @throw IllegalArgumentException
 if <code>location</code> is smaller than the begin index or greater
             than the end index.
 */
- (jchar)setIndexWithInt:(jint)location;

/*!
 @brief Sets the source string to iterate over.The begin and end positions are
  set to the start and end of this string.
 @param value the new source string.
 */
- (void)setTextWithNSString:(NSString *)value;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTextStringCharacterIterator)

J2OBJC_FIELD_SETTER(JavaTextStringCharacterIterator, string_, NSString *)

FOUNDATION_EXPORT void JavaTextStringCharacterIterator_initWithNSString_(JavaTextStringCharacterIterator *self, NSString *value);

FOUNDATION_EXPORT JavaTextStringCharacterIterator *new_JavaTextStringCharacterIterator_initWithNSString_(NSString *value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTextStringCharacterIterator *create_JavaTextStringCharacterIterator_initWithNSString_(NSString *value);

FOUNDATION_EXPORT void JavaTextStringCharacterIterator_initWithNSString_withInt_(JavaTextStringCharacterIterator *self, NSString *value, jint location);

FOUNDATION_EXPORT JavaTextStringCharacterIterator *new_JavaTextStringCharacterIterator_initWithNSString_withInt_(NSString *value, jint location) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTextStringCharacterIterator *create_JavaTextStringCharacterIterator_initWithNSString_withInt_(NSString *value, jint location);

FOUNDATION_EXPORT void JavaTextStringCharacterIterator_initWithNSString_withInt_withInt_withInt_(JavaTextStringCharacterIterator *self, NSString *value, jint start, jint end, jint location);

FOUNDATION_EXPORT JavaTextStringCharacterIterator *new_JavaTextStringCharacterIterator_initWithNSString_withInt_withInt_withInt_(NSString *value, jint start, jint end, jint location) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTextStringCharacterIterator *create_JavaTextStringCharacterIterator_initWithNSString_withInt_withInt_withInt_(NSString *value, jint start, jint end, jint location);

J2OBJC_TYPE_LITERAL_HEADER(JavaTextStringCharacterIterator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaTextStringCharacterIterator")
