//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/function/ObjIntConsumer.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFunctionObjIntConsumer")
#ifdef RESTRICT_JavaUtilFunctionObjIntConsumer
#define INCLUDE_ALL_JavaUtilFunctionObjIntConsumer 0
#else
#define INCLUDE_ALL_JavaUtilFunctionObjIntConsumer 1
#endif
#undef RESTRICT_JavaUtilFunctionObjIntConsumer

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilFunctionObjIntConsumer_) && (INCLUDE_ALL_JavaUtilFunctionObjIntConsumer || defined(INCLUDE_JavaUtilFunctionObjIntConsumer))
#define JavaUtilFunctionObjIntConsumer_

/*!
 @brief Represents an operation that accepts an object-valued and a 
 <code>int</code>-valued argument, and returns no result.This is the 
 <code>(reference, int)</code> specialization of <code>BiConsumer</code>.
 Unlike most other functional interfaces, <code>ObjIntConsumer</code> is
  expected to operate via side-effects. 
 <p>This is a <a href="package-summary.html">functional interface</a>
  whose functional method is <code>int)</code>.
 - seealso: BiConsumer
 @since 1.8
 */
@protocol JavaUtilFunctionObjIntConsumer < JavaObject >

/*!
 @brief Performs this operation on the given arguments.
 @param t the first input argument
 @param value the second input argument
 */
- (void)acceptWithId:(id)t
             withInt:(jint)value;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFunctionObjIntConsumer)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFunctionObjIntConsumer)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilFunctionObjIntConsumer")