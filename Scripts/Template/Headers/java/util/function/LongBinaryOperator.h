//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/function/LongBinaryOperator.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFunctionLongBinaryOperator")
#ifdef RESTRICT_JavaUtilFunctionLongBinaryOperator
#define INCLUDE_ALL_JavaUtilFunctionLongBinaryOperator 0
#else
#define INCLUDE_ALL_JavaUtilFunctionLongBinaryOperator 1
#endif
#undef RESTRICT_JavaUtilFunctionLongBinaryOperator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilFunctionLongBinaryOperator_) && (INCLUDE_ALL_JavaUtilFunctionLongBinaryOperator || defined(INCLUDE_JavaUtilFunctionLongBinaryOperator))
#define JavaUtilFunctionLongBinaryOperator_

/*!
 @brief Represents an operation upon two <code>long</code>-valued operands and producing a 
 <code>long</code>-valued result.This is the primitive type specialization of 
 <code>BinaryOperator</code> for <code>long</code>.
 <p>This is a <a href="package-summary.html">functional interface</a>
  whose functional method is <code>long)</code>.
 - seealso: BinaryOperator
 - seealso: LongUnaryOperator
 @since 1.8
 */
@protocol JavaUtilFunctionLongBinaryOperator < JavaObject >

/*!
 @brief Applies this operator to the given operands.
 @param left the first operand
 @param right the second operand
 @return the operator result
 */
- (jlong)applyAsLongWithLong:(jlong)left
                    withLong:(jlong)right;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFunctionLongBinaryOperator)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFunctionLongBinaryOperator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilFunctionLongBinaryOperator")
