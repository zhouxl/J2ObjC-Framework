//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/function/BiPredicate.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFunctionBiPredicate")
#ifdef RESTRICT_JavaUtilFunctionBiPredicate
#define INCLUDE_ALL_JavaUtilFunctionBiPredicate 0
#else
#define INCLUDE_ALL_JavaUtilFunctionBiPredicate 1
#endif
#undef RESTRICT_JavaUtilFunctionBiPredicate

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilFunctionBiPredicate_) && (INCLUDE_ALL_JavaUtilFunctionBiPredicate || defined(INCLUDE_JavaUtilFunctionBiPredicate))
#define JavaUtilFunctionBiPredicate_

/*!
 @brief Represents a predicate (boolean-valued function) of two arguments.This is
  the two-arity specialization of <code>Predicate</code>.
 <p>This is a <a href="package-summary.html">functional interface</a>
  whose functional method is <code>Object)</code>.
 - seealso: Predicate
 @since 1.8
 */
@protocol JavaUtilFunctionBiPredicate < JavaObject >

/*!
 @brief Evaluates this predicate on the given arguments.
 @param t the first input argument
 @param u the second input argument
 @return <code>true</code> if the input arguments match the predicate,
  otherwise <code>false</code>
 */
- (jboolean)testWithId:(id)t
                withId:(id)u;

/*!
 @brief Returns a composed predicate that represents a short-circuiting logical
  AND of this predicate and another.When evaluating the composed
  predicate, if this predicate is <code>false</code>, then the <code>other</code>
  predicate is not evaluated.
 <p>Any exceptions thrown during evaluation of either predicate are relayed
  to the caller; if evaluation of this predicate throws an exception, the 
 <code>other</code> predicate will not be evaluated.
 @param other a predicate that will be logically-ANDed with this               predicate
 @return a composed predicate that represents the short-circuiting logical
  AND of this predicate and the <code>other</code> predicate
 @throw NullPointerExceptionif other is null
 */
- (id<JavaUtilFunctionBiPredicate>)and__WithJavaUtilFunctionBiPredicate:(id<JavaUtilFunctionBiPredicate>)other;

/*!
 @brief Returns a predicate that represents the logical negation of this
  predicate.
 @return a predicate that represents the logical negation of this predicate
 */
- (id<JavaUtilFunctionBiPredicate>)negate;

/*!
 @brief Returns a composed predicate that represents a short-circuiting logical
  OR of this predicate and another.When evaluating the composed
  predicate, if this predicate is <code>true</code>, then the <code>other</code>
  predicate is not evaluated.
 <p>Any exceptions thrown during evaluation of either predicate are relayed
  to the caller; if evaluation of this predicate throws an exception, the 
 <code>other</code> predicate will not be evaluated.
 @param other a predicate that will be logically-ORed with this               predicate
 @return a composed predicate that represents the short-circuiting logical
  OR of this predicate and the <code>other</code> predicate
 @throw NullPointerExceptionif other is null
 */
- (id<JavaUtilFunctionBiPredicate>)or__WithJavaUtilFunctionBiPredicate:(id<JavaUtilFunctionBiPredicate>)other;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFunctionBiPredicate)

FOUNDATION_EXPORT id<JavaUtilFunctionBiPredicate> JavaUtilFunctionBiPredicate_and__WithJavaUtilFunctionBiPredicate_(id<JavaUtilFunctionBiPredicate> self, id<JavaUtilFunctionBiPredicate> other);

FOUNDATION_EXPORT id<JavaUtilFunctionBiPredicate> JavaUtilFunctionBiPredicate_negate(id<JavaUtilFunctionBiPredicate> self);

FOUNDATION_EXPORT id<JavaUtilFunctionBiPredicate> JavaUtilFunctionBiPredicate_or__WithJavaUtilFunctionBiPredicate_(id<JavaUtilFunctionBiPredicate> self, id<JavaUtilFunctionBiPredicate> other);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFunctionBiPredicate)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilFunctionBiPredicate")
