//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/function/ToIntBiFunction.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFunctionToIntBiFunction")
#ifdef RESTRICT_JavaUtilFunctionToIntBiFunction
#define INCLUDE_ALL_JavaUtilFunctionToIntBiFunction 0
#else
#define INCLUDE_ALL_JavaUtilFunctionToIntBiFunction 1
#endif
#undef RESTRICT_JavaUtilFunctionToIntBiFunction

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilFunctionToIntBiFunction_) && (INCLUDE_ALL_JavaUtilFunctionToIntBiFunction || defined(INCLUDE_JavaUtilFunctionToIntBiFunction))
#define JavaUtilFunctionToIntBiFunction_

/*!
 @brief Represents a function that accepts two arguments and produces an int-valued
  result.This is the <code>int</code>-producing primitive specialization for 
 <code>BiFunction</code>.
 <p>This is a <a href="package-summary.html">functional interface</a>
  whose functional method is <code>Object)</code>.
 - seealso: BiFunction
 @since 1.8
 */
@protocol JavaUtilFunctionToIntBiFunction < JavaObject >

/*!
 @brief Applies this function to the given arguments.
 @param t the first function argument
 @param u the second function argument
 @return the function result
 */
- (jint)applyAsIntWithId:(id)t
                  withId:(id)u;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFunctionToIntBiFunction)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFunctionToIntBiFunction)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilFunctionToIntBiFunction")
