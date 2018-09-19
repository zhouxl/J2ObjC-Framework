//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/BufferOverflowException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioBufferOverflowException")
#ifdef RESTRICT_JavaNioBufferOverflowException
#define INCLUDE_ALL_JavaNioBufferOverflowException 0
#else
#define INCLUDE_ALL_JavaNioBufferOverflowException 1
#endif
#undef RESTRICT_JavaNioBufferOverflowException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioBufferOverflowException_) && (INCLUDE_ALL_JavaNioBufferOverflowException || defined(INCLUDE_JavaNioBufferOverflowException))
#define JavaNioBufferOverflowException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "../../java/lang/RuntimeException.h"

@class JavaLangThrowable;

/*!
 @brief Unchecked exception thrown when a relative <i>put</i> operation reaches
  the target buffer's limit.
 @since 1.4
 */
@interface JavaNioBufferOverflowException : JavaLangRuntimeException

#pragma mark Public

/*!
 @brief Constructs an instance of this class.
 */
- (instancetype)init;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1
                     withBoolean:(jboolean)arg2
                     withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioBufferOverflowException)

FOUNDATION_EXPORT void JavaNioBufferOverflowException_init(JavaNioBufferOverflowException *self);

FOUNDATION_EXPORT JavaNioBufferOverflowException *new_JavaNioBufferOverflowException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioBufferOverflowException *create_JavaNioBufferOverflowException_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioBufferOverflowException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioBufferOverflowException")
