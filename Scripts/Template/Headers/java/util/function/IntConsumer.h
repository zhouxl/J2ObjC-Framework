//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/function/IntConsumer.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFunctionIntConsumer")
#ifdef RESTRICT_JavaUtilFunctionIntConsumer
#define INCLUDE_ALL_JavaUtilFunctionIntConsumer 0
#else
#define INCLUDE_ALL_JavaUtilFunctionIntConsumer 1
#endif
#undef RESTRICT_JavaUtilFunctionIntConsumer

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilFunctionIntConsumer_) && (INCLUDE_ALL_JavaUtilFunctionIntConsumer || defined(INCLUDE_JavaUtilFunctionIntConsumer))
#define JavaUtilFunctionIntConsumer_

/*!
 @brief Represents an operation that accepts a single <code>int</code>-valued argument and
  returns no result.This is the primitive type specialization of 
 <code>Consumer</code> for <code>int</code>.
 Unlike most other functional interfaces, 
 <code>IntConsumer</code> is expected to operate via side-effects. 
 <p>This is a <a href="package-summary.html">functional interface</a>
  whose functional method is <code>accept(int)</code>.
 - seealso: Consumer
 @since 1.8
 */
@protocol JavaUtilFunctionIntConsumer < JavaObject >

/*!
 @brief Performs this operation on the given argument.
 @param value the input argument
 */
- (void)acceptWithInt:(jint)value;

/*!
 @brief Returns a composed <code>IntConsumer</code> that performs, in sequence, this
  operation followed by the <code>after</code> operation.If performing either
  operation throws an exception, it is relayed to the caller of the
  composed operation.
 If performing this operation throws an exception,
  the <code>after</code> operation will not be performed.
 @param after the operation to perform after this operation
 @return a composed <code>IntConsumer</code> that performs in sequence this
  operation followed by the <code>after</code> operation
 @throw NullPointerExceptionif <code>after</code> is null
 */
- (id<JavaUtilFunctionIntConsumer>)andThenWithJavaUtilFunctionIntConsumer:(id<JavaUtilFunctionIntConsumer>)after;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFunctionIntConsumer)

FOUNDATION_EXPORT id<JavaUtilFunctionIntConsumer> JavaUtilFunctionIntConsumer_andThenWithJavaUtilFunctionIntConsumer_(id<JavaUtilFunctionIntConsumer> self, id<JavaUtilFunctionIntConsumer> after);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFunctionIntConsumer)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilFunctionIntConsumer")
