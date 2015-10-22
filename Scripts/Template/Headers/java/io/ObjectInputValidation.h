//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/ObjectInputValidation.java
//

#ifndef _JavaIoObjectInputValidation_H_
#define _JavaIoObjectInputValidation_H_

#include <j2objc/J2ObjC_header.h>

/*!
 @brief A callback interface for post-deserialization checks on objects.
 Allows, for
 example, the validation of a whole graph of objects after all of them have
 been loaded.
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

#endif // _JavaIoObjectInputValidation_H_