//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/annotation/Annotation.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaLangAnnotationAnnotation_INCLUDE_ALL")
#ifdef JavaLangAnnotationAnnotation_RESTRICT
#define JavaLangAnnotationAnnotation_INCLUDE_ALL 0
#else
#define JavaLangAnnotationAnnotation_INCLUDE_ALL 1
#endif
#undef JavaLangAnnotationAnnotation_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangAnnotationAnnotation_) && (JavaLangAnnotationAnnotation_INCLUDE_ALL || defined(JavaLangAnnotationAnnotation_INCLUDE))
#define JavaLangAnnotationAnnotation_

@class IOSClass;

/*!
 @brief Defines the interface implemented by all annotations.
 Note that the interface
 itself is <i>not</i> an annotation, and neither is an interface that simply
 extends this one. Only the compiler is able to create proper annotation
 types.
 @since 1.5
 */
@protocol JavaLangAnnotationAnnotation < NSObject, JavaObject >

/*!
 @brief Returns the type of this annotation.
 @return A <code>Class</code> instance representing the annotation type.
 */
- (IOSClass *)annotationType;

/*!
 @brief Determines whether or not this annotation is equivalent to the annotation
 passed.
 This is determined according to the following rules:
 <ul>
 <li>
 Two annotations <code>x</code> and <code>y</code> are equal if and only if
 they are members of the same annotation type and all the member
 values of <code>x</code> are equal to the corresponding member values
 of <code>y</code>.
 </li>
 <li>
 The equality of primitive member values <code>x</code> and <code>y</code>
 is determined (in a way similar to) using the corresponding
 wrapper classes. For example,
 <code>Integer.valueOf(x).equals(Integer.valueOf(y)</code> is used for
 <code>int</code> values. Note: The behavior is identical to the
 <code>==</code> operator for all but the floating point type, so the
 implementation may as well use <code>==</code> in these cases for
 performance reasons. Only for the <code>float</code> and <code>double</code>
 types the result will be slightly different: <code>NaN</code> is equal
 to <code>NaN</code>, and <code>-0.0</code> is equal to <code>0.0</code>, both of
 which is normally not the case.
 </li>
 <li>
 The equality of two array member values <code>x</code> and <code>y</code>
 is determined using the corresponding <code>equals(x, y)</code>
 helper function in <code>java.util.Arrays</code>.
 </li>
 <li>
 The hash code for all other member values is determined by simply
 calling their <code>equals()</code> method.
 </li>
 </ul>
 @param obj
 The object to compare to.
 @return <code>true</code> if <code>obj</code> is equal to this annotation,
 <code>false</code> otherwise.
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Returns the hash code of this annotation.
 The hash code is determined
 according to the following rules:
 <ul>
 <li>
 The hash code of an annotation is the sum of the hash codes of
 its annotation members.
 </li>
 <li>
 The hash code of an annotation member is calculated as <code>(0x7f * n.hashCode()) ^ v.hashCode())</code>
 , where <code>n</code> is the
 name of the member (as a <code>String</code>) and <code>v</code> its value.
 </li>
 <li>
 The hash code for a primitive member value is determined using
 the corresponding wrapper type. For example, <code>Integer.valueOf(v).hashCode()</code>
  is used for an <code>int</code> value
 <code>v</code>.
 </li>
 <li>
 The hash code for an array member value <code>v</code> is determined
 using the corresponding <code>hashCode(v)</code> helper function in
 <code>java.util.Arrays</code>.
 </li>
 <li>
 The hash code for all other member values is determined by simply
 calling their <code>hashCode</code> method.
 </li>
 </ul>
 @return the hash code.
 */
- (NSUInteger)hash;

/*!
 @brief Returns a <code>String</code> representation of this annotation.
 It is not
 strictly defined what the representation has to look like, but it usually
 consists of the name of the annotation, preceded by a "@@". If the
 annotation contains field members, their names and values are also
 included in the result.
 @return the <code>String</code> that represents this annotation.
 */
- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangAnnotationAnnotation)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangAnnotationAnnotation)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaLangAnnotationAnnotation_INCLUDE_ALL")
