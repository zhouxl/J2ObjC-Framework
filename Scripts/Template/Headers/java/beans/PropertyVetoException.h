//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/beans/src/main/java/java/beans/PropertyVetoException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaBeansPropertyVetoException")
#ifdef RESTRICT_JavaBeansPropertyVetoException
#define INCLUDE_ALL_JavaBeansPropertyVetoException 0
#else
#define INCLUDE_ALL_JavaBeansPropertyVetoException 1
#endif
#undef RESTRICT_JavaBeansPropertyVetoException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaBeansPropertyVetoException_) && (INCLUDE_ALL_JavaBeansPropertyVetoException || defined(INCLUDE_JavaBeansPropertyVetoException))
#define JavaBeansPropertyVetoException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "../../java/lang/Exception.h"

@class JavaBeansPropertyChangeEvent;
@class JavaLangThrowable;

/*!
 @brief Indicates that a proposed property change is unacceptable.
 */
@interface JavaBeansPropertyVetoException : JavaLangException

#pragma mark Public

/*!
 @brief <p>
  Constructs an instance with a message and the change event.
 </p>
 @param message A description of the veto.
 @param event The event that was vetoed.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message
          withJavaBeansPropertyChangeEvent:(JavaBeansPropertyChangeEvent *)event;

/*!
 @brief <p>
  Gets the property change event.
 </p>
 @return An instance of <code>PropertyChangeEvent</code>
 */
- (JavaBeansPropertyChangeEvent *)getPropertyChangeEvent;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaBeansPropertyVetoException)

FOUNDATION_EXPORT void JavaBeansPropertyVetoException_initWithNSString_withJavaBeansPropertyChangeEvent_(JavaBeansPropertyVetoException *self, NSString *message, JavaBeansPropertyChangeEvent *event);

FOUNDATION_EXPORT JavaBeansPropertyVetoException *new_JavaBeansPropertyVetoException_initWithNSString_withJavaBeansPropertyChangeEvent_(NSString *message, JavaBeansPropertyChangeEvent *event) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaBeansPropertyVetoException *create_JavaBeansPropertyVetoException_initWithNSString_withJavaBeansPropertyChangeEvent_(NSString *message, JavaBeansPropertyChangeEvent *event);

J2OBJC_TYPE_LITERAL_HEADER(JavaBeansPropertyVetoException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaBeansPropertyVetoException")
