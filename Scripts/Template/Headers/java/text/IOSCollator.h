//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/java/text/IOSCollator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaTextIOSCollator")
#ifdef RESTRICT_JavaTextIOSCollator
#define INCLUDE_ALL_JavaTextIOSCollator 0
#else
#define INCLUDE_ALL_JavaTextIOSCollator 1
#endif
#undef RESTRICT_JavaTextIOSCollator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaTextIOSCollator_) && (INCLUDE_ALL_JavaTextIOSCollator || defined(INCLUDE_JavaTextIOSCollator))
#define JavaTextIOSCollator_

#define RESTRICT_JavaTextCollator 1
#define INCLUDE_JavaTextCollator 1
#include "java/text/Collator.h"

@class JavaTextCollationKey;
@class JavaUtilLocale;

/*!
 @brief A concrete implementation class for <code>Collation</code> for iOS.Although
  iOS uses ICU, its collation data is not available from any public APIs.
 This class implements collation by invoking the NSString localized
  comparison methods.
 @author Tom Ball
 */
@interface JavaTextIOSCollator : JavaTextCollator

#pragma mark Public

- (jint)compareWithNSString:(NSString *)string1
               withNSString:(NSString *)string2;

- (jboolean)isEqual:(id)obj;

- (JavaTextCollationKey *)getCollationKeyWithNSString:(NSString *)string;

- (jint)getDecomposition;

- (jint)getStrength;

- (NSUInteger)hash;

/*!
 @brief Sets decomposition field, but is otherwise unused.
 */
- (void)setDecompositionWithInt:(jint)value;

/*!
 @brief Sets strength field, but is otherwise unused.
 */
- (void)setStrengthWithInt:(jint)value;

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaUtilLocale:(JavaUtilLocale *)locale;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTextIOSCollator)

FOUNDATION_EXPORT void JavaTextIOSCollator_initWithJavaUtilLocale_(JavaTextIOSCollator *self, JavaUtilLocale *locale);

FOUNDATION_EXPORT JavaTextIOSCollator *new_JavaTextIOSCollator_initWithJavaUtilLocale_(JavaUtilLocale *locale) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTextIOSCollator *create_JavaTextIOSCollator_initWithJavaUtilLocale_(JavaUtilLocale *locale);

J2OBJC_TYPE_LITERAL_HEADER(JavaTextIOSCollator)

#endif

#if !defined (JavaTextIOSCollator_IOSCollationKey_) && (INCLUDE_ALL_JavaTextIOSCollator || defined(INCLUDE_JavaTextIOSCollator_IOSCollationKey))
#define JavaTextIOSCollator_IOSCollationKey_

#define RESTRICT_JavaTextCollationKey 1
#define INCLUDE_JavaTextCollationKey 1
#include "java/text/CollationKey.h"

@class IOSByteArray;

@interface JavaTextIOSCollator_IOSCollationKey : JavaTextCollationKey

#pragma mark Public

- (jint)compareToWithId:(JavaTextCollationKey *)value;

- (IOSByteArray *)toByteArray;

#pragma mark Protected

- (instancetype __nonnull)initWithNSString:(NSString *)source;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTextIOSCollator_IOSCollationKey)

FOUNDATION_EXPORT void JavaTextIOSCollator_IOSCollationKey_initWithNSString_(JavaTextIOSCollator_IOSCollationKey *self, NSString *source);

FOUNDATION_EXPORT JavaTextIOSCollator_IOSCollationKey *new_JavaTextIOSCollator_IOSCollationKey_initWithNSString_(NSString *source) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTextIOSCollator_IOSCollationKey *create_JavaTextIOSCollator_IOSCollationKey_initWithNSString_(NSString *source);

J2OBJC_TYPE_LITERAL_HEADER(JavaTextIOSCollator_IOSCollationKey)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaTextIOSCollator")
