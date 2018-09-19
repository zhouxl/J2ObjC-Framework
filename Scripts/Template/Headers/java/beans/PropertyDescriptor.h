//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/beans/src/main/java/java/beans/PropertyDescriptor.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaBeansPropertyDescriptor")
#ifdef RESTRICT_JavaBeansPropertyDescriptor
#define INCLUDE_ALL_JavaBeansPropertyDescriptor 0
#else
#define INCLUDE_ALL_JavaBeansPropertyDescriptor 1
#endif
#undef RESTRICT_JavaBeansPropertyDescriptor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaBeansPropertyDescriptor_) && (INCLUDE_ALL_JavaBeansPropertyDescriptor || defined(INCLUDE_JavaBeansPropertyDescriptor))
#define JavaBeansPropertyDescriptor_

#define RESTRICT_JavaBeansFeatureDescriptor 1
#define INCLUDE_JavaBeansFeatureDescriptor 1
#include "../../java/beans/FeatureDescriptor.h"

@class IOSClass;
@class JavaLangReflectMethod;

/*!
 @brief Describes one Java Bean property.
 NOTE: PropertyEditor support is not available in j2objc, since it depends
  on core AWT classes.
 */
@interface JavaBeansPropertyDescriptor : JavaBeansFeatureDescriptor {
 @public
  jboolean constrained_;
  jboolean bound_;
}

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString *)propertyName
                              withIOSClass:(IOSClass *)beanClass;

- (instancetype __nonnull)initWithNSString:(NSString *)propertyName
                              withIOSClass:(IOSClass *)beanClass
                              withNSString:(NSString *)getterName
                              withNSString:(NSString *)setterName;

- (instancetype __nonnull)initWithNSString:(NSString *)propertyName
                 withJavaLangReflectMethod:(JavaLangReflectMethod *)getter
                 withJavaLangReflectMethod:(JavaLangReflectMethod *)setter;

- (jboolean)isEqual:(id)object;

- (IOSClass *)getPropertyType;

- (JavaLangReflectMethod *)getReadMethod;

- (JavaLangReflectMethod *)getWriteMethod;

- (NSUInteger)hash;

- (jboolean)isBound;

- (jboolean)isConstrained;

- (void)setBoundWithBoolean:(jboolean)bound;

- (void)setConstrainedWithBoolean:(jboolean)constrained;

- (void)setReadMethodWithJavaLangReflectMethod:(JavaLangReflectMethod *)getter;

- (void)setWriteMethodWithJavaLangReflectMethod:(JavaLangReflectMethod *)setter;

#pragma mark Package-Private

- (NSString *)createDefaultMethodNameWithNSString:(NSString *)propertyName
                                     withNSString:(NSString *)prefix;

- (void)setReadMethodWithIOSClass:(IOSClass *)beanClass
                     withNSString:(NSString *)getterName;

- (void)setWriteMethodWithIOSClass:(IOSClass *)beanClass
                      withNSString:(NSString *)setterName;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaBeansPropertyDescriptor)

FOUNDATION_EXPORT void JavaBeansPropertyDescriptor_initWithNSString_withIOSClass_withNSString_withNSString_(JavaBeansPropertyDescriptor *self, NSString *propertyName, IOSClass *beanClass, NSString *getterName, NSString *setterName);

FOUNDATION_EXPORT JavaBeansPropertyDescriptor *new_JavaBeansPropertyDescriptor_initWithNSString_withIOSClass_withNSString_withNSString_(NSString *propertyName, IOSClass *beanClass, NSString *getterName, NSString *setterName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaBeansPropertyDescriptor *create_JavaBeansPropertyDescriptor_initWithNSString_withIOSClass_withNSString_withNSString_(NSString *propertyName, IOSClass *beanClass, NSString *getterName, NSString *setterName);

FOUNDATION_EXPORT void JavaBeansPropertyDescriptor_initWithNSString_withJavaLangReflectMethod_withJavaLangReflectMethod_(JavaBeansPropertyDescriptor *self, NSString *propertyName, JavaLangReflectMethod *getter, JavaLangReflectMethod *setter);

FOUNDATION_EXPORT JavaBeansPropertyDescriptor *new_JavaBeansPropertyDescriptor_initWithNSString_withJavaLangReflectMethod_withJavaLangReflectMethod_(NSString *propertyName, JavaLangReflectMethod *getter, JavaLangReflectMethod *setter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaBeansPropertyDescriptor *create_JavaBeansPropertyDescriptor_initWithNSString_withJavaLangReflectMethod_withJavaLangReflectMethod_(NSString *propertyName, JavaLangReflectMethod *getter, JavaLangReflectMethod *setter);

FOUNDATION_EXPORT void JavaBeansPropertyDescriptor_initWithNSString_withIOSClass_(JavaBeansPropertyDescriptor *self, NSString *propertyName, IOSClass *beanClass);

FOUNDATION_EXPORT JavaBeansPropertyDescriptor *new_JavaBeansPropertyDescriptor_initWithNSString_withIOSClass_(NSString *propertyName, IOSClass *beanClass) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaBeansPropertyDescriptor *create_JavaBeansPropertyDescriptor_initWithNSString_withIOSClass_(NSString *propertyName, IOSClass *beanClass);

J2OBJC_TYPE_LITERAL_HEADER(JavaBeansPropertyDescriptor)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaBeansPropertyDescriptor")
