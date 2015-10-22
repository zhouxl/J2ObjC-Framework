//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/URISyntaxException.java
//

#ifndef _JavaNetURISyntaxException_H_
#define _JavaNetURISyntaxException_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/lang/Exception.h>

/*!
 @brief A <code>URISyntaxException</code> will be thrown if some information could not be parsed
 while creating a URI.
 */
@interface JavaNetURISyntaxException : JavaLangException

#pragma mark Public

/*!
 @brief Constructs a new <code>URISyntaxException</code> instance containing the
 string that caused the exception and a description of the problem.
 @param input
 the string that caused the exception.
 @param reason
 the reason why the exception occurred.
 @throws NullPointerException
 if one of the arguments <code>input</code> or <code>reason</code> is
 <code>null</code>.
 */
- (instancetype)initWithNSString:(NSString *)input
                    withNSString:(NSString *)reason;

/*!
 @brief Constructs a new <code>URISyntaxException</code> instance containing the
 string that caused the exception, a description of the problem and the
 index at which the error occurred.
 @param input
 the string that caused the exception.
 @param reason
 the reason why the exception occurred.
 @param index
 the position where the exception occurred.
 @throws NullPointerException
 if one of the arguments <code>input</code> or <code>reason</code> is
 <code>null</code>.
 @throws IllegalArgumentException
 if the value for <code>index</code> is lesser than <code>-1</code>.
 */
- (instancetype)initWithNSString:(NSString *)input
                    withNSString:(NSString *)reason
                         withInt:(jint)index;

/*!
 @brief Gets the index at which the syntax error was found or <code>-1</code> if the
 index is unknown/unavailable.
 @return the index of the syntax error.
 */
- (jint)getIndex;

/*!
 @brief Gets the initial string that contains an invalid syntax.
 @return the string that caused the exception.
 */
- (NSString *)getInput;

/*!
 @brief Gets a description of the exception, including the reason, the string
 that caused the syntax error and the position of the syntax error if
 available.
 @return a sting containing information about the exception.
 */
- (NSString *)getMessage;

/*!
 @brief Gets a description of the syntax error.
 @return the string describing the syntax error.
 */
- (NSString *)getReason;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetURISyntaxException)

FOUNDATION_EXPORT void JavaNetURISyntaxException_initWithNSString_withNSString_withInt_(JavaNetURISyntaxException *self, NSString *input, NSString *reason, jint index);

FOUNDATION_EXPORT JavaNetURISyntaxException *new_JavaNetURISyntaxException_initWithNSString_withNSString_withInt_(NSString *input, NSString *reason, jint index) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetURISyntaxException_initWithNSString_withNSString_(JavaNetURISyntaxException *self, NSString *input, NSString *reason);

FOUNDATION_EXPORT JavaNetURISyntaxException *new_JavaNetURISyntaxException_initWithNSString_withNSString_(NSString *input, NSString *reason) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNetURISyntaxException)

#endif // _JavaNetURISyntaxException_H_