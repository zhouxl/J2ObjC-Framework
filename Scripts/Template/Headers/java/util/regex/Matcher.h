//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/regex/Matcher.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaUtilRegexMatcher_INCLUDE_ALL")
#ifdef JavaUtilRegexMatcher_RESTRICT
#define JavaUtilRegexMatcher_INCLUDE_ALL 0
#else
#define JavaUtilRegexMatcher_INCLUDE_ALL 1
#endif
#undef JavaUtilRegexMatcher_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilRegexMatcher_) && (JavaUtilRegexMatcher_INCLUDE_ALL || defined(JavaUtilRegexMatcher_INCLUDE))
#define JavaUtilRegexMatcher_

#define JavaUtilRegexMatchResult_RESTRICT 1
#define JavaUtilRegexMatchResult_INCLUDE 1
#include "../../../java/util/regex/MatchResult.h"

@class JavaLangStringBuffer;
@class JavaUtilRegexPattern;
@protocol JavaLangCharSequence;

/*!
 @brief The result of applying a <code>Pattern</code> to a given input.
 See <code>Pattern</code> for
 example uses.
 */
@interface JavaUtilRegexMatcher : NSObject < JavaUtilRegexMatchResult >

#pragma mark Public

/*!
 @brief Appends a literal part of the input plus a replacement for the current
 match to a given <code>StringBuffer</code>.
 The literal part is exactly the
 part of the input between the previous match and the current match. The
 method can be used in conjunction with <code>find()</code> and
 <code>appendTail(StringBuffer)</code> to walk through the input and replace
 all occurrences of the <code>Pattern</code> with something else.
 @param buffer
 the <code>StringBuffer</code> to append to.
 @param replacement
 the replacement text.
 @return the <code>Matcher</code> itself.
 @throws IllegalStateException
 if no successful match has been made.
 */
- (JavaUtilRegexMatcher *)appendReplacementWithJavaLangStringBuffer:(JavaLangStringBuffer *)buffer
                                                       withNSString:(NSString *)replacement;

/*!
 @brief Appends the (unmatched) remainder of the input to the given
 <code>StringBuffer</code>.
 The method can be used in conjunction with
 <code>find()</code> and <code>appendReplacement(StringBuffer,String)</code> to
 walk through the input and replace all matches of the <code>Pattern</code>
 with something else.
 @return the <code>StringBuffer</code>.
 @throws IllegalStateException
 if no successful match has been made.
 */
- (JavaLangStringBuffer *)appendTailWithJavaLangStringBuffer:(JavaLangStringBuffer *)buffer;

/*!
 
 @throws IllegalStateException if no successful match has been made.
 */
- (jint)end;

/*!
 
 @throws IllegalStateException if no successful match has been made.
 */
- (jint)endWithInt:(jint)group;

/*!
 @brief Moves to the next occurrence of the pattern in the input.
 If a
 previous match was successful, the method continues the search from the
 first character following that match in the input. Otherwise it searches
 either from the region start (if one has been set), or from position 0.
 @return true if (and only if) a match has been found.
 */
- (jboolean)find;

/*!
 @brief Returns true if there is another match in the input, starting
 from the given position.
 The region is ignored.
 @throws IndexOutOfBoundsException if <code>start < 0 || start > input.length()</code>
 */
- (jboolean)findWithInt:(jint)start;

/*!
 
 @throws IllegalStateException if no successful match has been made.
 */
- (NSString *)group;

/*!
 
 @throws IllegalStateException if no successful match has been made.
 */
- (NSString *)groupWithInt:(jint)group;

/*!
 
 */
- (jint)groupCount;

/*!
 @brief Returns true if this matcher has anchoring bounds enabled.
 When
 anchoring bounds are enabled, the start and end of the input match the
 '^' and '$' meta-characters, otherwise not. Anchoring bounds are enabled
 by default.
 */
- (jboolean)hasAnchoringBounds;

/*!
 @brief Returns true if this matcher has transparent bounds enabled.
 When
 transparent bounds are enabled, the parts of the input outside the region
 are subject to lookahead and lookbehind, otherwise they are not.
 Transparent bounds are disabled by default.
 */
- (jboolean)hasTransparentBounds;

/*!
 @brief Returns true if the most recent matching operation attempted to access
 additional text beyond the available input, meaning that additional input
 could change the results of the match.
 */
- (jboolean)hitEnd;

/*!
 @brief Tries to match the <code>Pattern</code>, starting from the beginning of the
 region (or the beginning of the input, if no region has been set).
 Doesn't require the <code>Pattern</code> to match against the whole region.
 @return true if (and only if) the <code>Pattern</code> matches.
 */
- (jboolean)lookingAt;

/*!
 @brief Tries to match the <code>Pattern</code> against the entire region (or the
 entire input, if no region has been set).
 @return true if (and only if) the <code>Pattern</code> matches the entire
 region.
 */
- (jboolean)matches;

/*!
 @brief Returns the <code>Pattern</code> instance used inside this matcher.
 */
- (JavaUtilRegexPattern *)pattern;

/*!
 @brief Returns a replacement string for the given one that has all backslashes
 and dollar signs escaped.
 */
+ (NSString *)quoteReplacementWithNSString:(NSString *)s;

/*!
 @brief Resets this matcher and sets a region.
 Only characters inside the region
 are considered for a match.
 @param start
 the first character of the region.
 @param end
 the first character after the end of the region.
 @return the <code>Matcher</code> itself.
 */
- (JavaUtilRegexMatcher *)regionWithInt:(jint)start
                                withInt:(jint)end;

/*!
 @brief Returns this matcher's region end, that is, the index of the first character that is
 not considered for a match.
 */
- (jint)regionEnd;

/*!
 @brief Returns this matcher's region start, that is, the index of the first character that is
 considered for a match.
 */
- (jint)regionStart;

/*!
 @brief Replaces all occurrences of this matcher's pattern in the input with a
 given string.
 @param replacement
 the replacement text.
 @return the modified input string.
 */
- (NSString *)replaceAllWithNSString:(NSString *)replacement;

/*!
 @brief Replaces the first occurrence of this matcher's pattern in the input with
 a given string.
 @param replacement
 the replacement text.
 @return the modified input string.
 */
- (NSString *)replaceFirstWithNSString:(NSString *)replacement;

/*!
 @brief Returns true if the most recent match succeeded and additional input could cause
 it to fail.
 If this method returns false and a match was found, then more input
 might change the match but the match won't be lost. If a match was not found,
 then requireEnd has no meaning.
 */
- (jboolean)requireEnd;

/*!
 @brief Resets the <code>Matcher</code>.
 This results in the region being set to the
 whole input. Results of a previous find get lost. The next attempt to
 find an occurrence of the <code>Pattern</code> in the string will start at the
 beginning of the input.
 @return the <code>Matcher</code> itself.
 */
- (JavaUtilRegexMatcher *)reset;

/*!
 @brief Provides a new input and resets the <code>Matcher</code>.
 This results in the
 region being set to the whole input. Results of a previous find get lost.
 The next attempt to find an occurrence of the <code>Pattern</code> in the
 string will start at the beginning of the input.
 @param input
 the new input sequence.
 @return the <code>Matcher</code> itself.
 */
- (JavaUtilRegexMatcher *)resetWithJavaLangCharSequence:(id<JavaLangCharSequence>)input;

/*!
 
 @throws IllegalStateException if no successful match has been made.
 */
- (jint)start;

/*!
 
 @throws IllegalStateException if no successful match has been made.
 */
- (jint)startWithInt:(jint)group;

/*!
 @brief Converts the current match into a separate <code>MatchResult</code> instance
 that is independent from this matcher.
 The new object is unaffected when
 the state of this matcher changes.
 @throws IllegalStateException
 if no successful match has been made.
 */
- (id<JavaUtilRegexMatchResult>)toMatchResult;

/*!
 @brief Returns a string representing this <code>Matcher</code>.
 The format of this string is unspecified.
 */
- (NSString *)description;

/*!
 @brief Determines whether this matcher has anchoring bounds enabled or not.
 When
 anchoring bounds are enabled, the start and end of the input match the
 '^' and '$' meta-characters, otherwise not. Anchoring bounds are enabled
 by default.
 @return the <code>Matcher</code> itself.
 */
- (JavaUtilRegexMatcher *)useAnchoringBoundsWithBoolean:(jboolean)value;

/*!
 @brief Sets a new pattern for the <code>Matcher</code>.
 Results of a previous find
 get lost. The next attempt to find an occurrence of the <code>Pattern</code>
 in the string will start at the beginning of the input.
 @param pattern
 the new <code>Pattern</code>.
 @return the <code>Matcher</code> itself.
 */
- (JavaUtilRegexMatcher *)usePatternWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern;

/*!
 @brief Determines whether this matcher has transparent bounds enabled or not.
 When transparent bounds are enabled, the parts of the input outside the
 region are subject to lookahead and lookbehind, otherwise they are not.
 Transparent bounds are disabled by default.
 @return the <code>Matcher</code> itself.
 */
- (JavaUtilRegexMatcher *)useTransparentBoundsWithBoolean:(jboolean)value;

#pragma mark Protected

- (void)dealloc;

#pragma mark Package-Private

/*!
 @brief Creates a matcher for a given combination of pattern and input.
 Both
 elements can be changed later on.
 @param pattern
 the pattern to use.
 @param input
 the input to use.
 */
- (instancetype)initWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern
                    withJavaLangCharSequence:(id<JavaLangCharSequence>)input;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilRegexMatcher)

FOUNDATION_EXPORT void JavaUtilRegexMatcher_initWithJavaUtilRegexPattern_withJavaLangCharSequence_(JavaUtilRegexMatcher *self, JavaUtilRegexPattern *pattern, id<JavaLangCharSequence> input);

FOUNDATION_EXPORT JavaUtilRegexMatcher *new_JavaUtilRegexMatcher_initWithJavaUtilRegexPattern_withJavaLangCharSequence_(JavaUtilRegexPattern *pattern, id<JavaLangCharSequence> input) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT NSString *JavaUtilRegexMatcher_quoteReplacementWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilRegexMatcher)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaUtilRegexMatcher_INCLUDE_ALL")
