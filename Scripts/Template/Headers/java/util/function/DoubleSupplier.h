//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/function/DoubleSupplier.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFunctionDoubleSupplier")
#ifdef RESTRICT_JavaUtilFunctionDoubleSupplier
#define INCLUDE_ALL_JavaUtilFunctionDoubleSupplier 0
#else
#define INCLUDE_ALL_JavaUtilFunctionDoubleSupplier 1
#endif
#undef RESTRICT_JavaUtilFunctionDoubleSupplier

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilFunctionDoubleSupplier_) && (INCLUDE_ALL_JavaUtilFunctionDoubleSupplier || defined(INCLUDE_JavaUtilFunctionDoubleSupplier))
#define JavaUtilFunctionDoubleSupplier_

/*!
 @brief Represents a supplier of <code>double</code>-valued results.This is the 
 <code>double</code>-producing primitive specialization of <code>Supplier</code>.
 <p>There is no requirement that a distinct result be returned each
  time the supplier is invoked. 
 <p>This is a <a href="package-summary.html">functional interface</a>
  whose functional method is <code>getAsDouble()</code>.
 - seealso: Supplier
 @since 1.8
 */
@protocol JavaUtilFunctionDoubleSupplier < JavaObject >

/*!
 @brief Gets a result.
 @return a result
 */
- (jdouble)getAsDouble;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFunctionDoubleSupplier)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFunctionDoubleSupplier)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilFunctionDoubleSupplier")
