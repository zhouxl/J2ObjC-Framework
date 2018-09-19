//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/channels/NotYetBoundException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsNotYetBoundException")
#ifdef RESTRICT_JavaNioChannelsNotYetBoundException
#define INCLUDE_ALL_JavaNioChannelsNotYetBoundException 0
#else
#define INCLUDE_ALL_JavaNioChannelsNotYetBoundException 1
#endif
#undef RESTRICT_JavaNioChannelsNotYetBoundException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioChannelsNotYetBoundException_) && (INCLUDE_ALL_JavaNioChannelsNotYetBoundException || defined(INCLUDE_JavaNioChannelsNotYetBoundException))
#define JavaNioChannelsNotYetBoundException_

#define RESTRICT_JavaLangIllegalStateException 1
#define INCLUDE_JavaLangIllegalStateException 1
#include "../../../java/lang/IllegalStateException.h"

@class JavaLangThrowable;

/*!
 @brief Unchecked exception thrown when an attempt is made to invoke an I/O
  operation upon a server socket channel that is not yet bound.
 @since 1.4
 */
@interface JavaNioChannelsNotYetBoundException : JavaLangIllegalStateException

#pragma mark Public

/*!
 @brief Constructs an instance of this class.
 */
- (instancetype __nonnull)init;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsNotYetBoundException)

FOUNDATION_EXPORT void JavaNioChannelsNotYetBoundException_init(JavaNioChannelsNotYetBoundException *self);

FOUNDATION_EXPORT JavaNioChannelsNotYetBoundException *new_JavaNioChannelsNotYetBoundException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioChannelsNotYetBoundException *create_JavaNioChannelsNotYetBoundException_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsNotYetBoundException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsNotYetBoundException")
