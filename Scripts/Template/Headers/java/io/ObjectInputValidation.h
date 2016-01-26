//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/ObjectInputValidation.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaIoObjectInputValidation_INCLUDE_ALL")
#ifdef JavaIoObjectInputValidation_RESTRICT
#define JavaIoObjectInputValidation_INCLUDE_ALL 0
#else
#define JavaIoObjectInputValidation_INCLUDE_ALL 1
#endif
#undef JavaIoObjectInputValidation_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoObjectInputValidation_) && (JavaIoObjectInputValidation_INCLUDE_ALL || defined(JavaIoObjectInputValidation_INCLUDE))
#define JavaIoObjectInputValidation_

/*!
 @brief A callback interface for post-deserialization checks on objects.
 Allows, for
 example, the validation of a whole graph of objects after all of them have
 been loaded.
 - seealso: ObjectInputStream#registerValidation(ObjectInputValidation,int)
 */
@protocol JavaIoObjectInputValidation < NSObject, JavaObject >

/*!
 @brief Validates this object.
 @throws InvalidObjectException
 if this object fails to validate itself.
 */
- (void)validateObject;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoObjectInputValidation)

J2OBJC_TYPE_LITERAL_HEADER(JavaIoObjectInputValidation)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaIoObjectInputValidation_INCLUDE_ALL")
