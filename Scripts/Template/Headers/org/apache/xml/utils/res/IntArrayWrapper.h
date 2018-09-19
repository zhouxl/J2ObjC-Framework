//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/res/IntArrayWrapper.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsResIntArrayWrapper")
#ifdef RESTRICT_OrgApacheXmlUtilsResIntArrayWrapper
#define INCLUDE_ALL_OrgApacheXmlUtilsResIntArrayWrapper 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsResIntArrayWrapper 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsResIntArrayWrapper

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlUtilsResIntArrayWrapper_) && (INCLUDE_ALL_OrgApacheXmlUtilsResIntArrayWrapper || defined(INCLUDE_OrgApacheXmlUtilsResIntArrayWrapper))
#define OrgApacheXmlUtilsResIntArrayWrapper_

@class IOSIntArray;

/*!
 @brief It is a mutable object to wrap the int[] used in
  the contents of the XResourceBundle class
 */
@interface OrgApacheXmlUtilsResIntArrayWrapper : NSObject

#pragma mark Public

- (instancetype)initWithIntArray:(IOSIntArray *)arg;

- (jint)getIntWithInt:(jint)index;

- (jint)getLength;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsResIntArrayWrapper)

FOUNDATION_EXPORT void OrgApacheXmlUtilsResIntArrayWrapper_initWithIntArray_(OrgApacheXmlUtilsResIntArrayWrapper *self, IOSIntArray *arg);

FOUNDATION_EXPORT OrgApacheXmlUtilsResIntArrayWrapper *new_OrgApacheXmlUtilsResIntArrayWrapper_initWithIntArray_(IOSIntArray *arg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsResIntArrayWrapper *create_OrgApacheXmlUtilsResIntArrayWrapper_initWithIntArray_(IOSIntArray *arg);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsResIntArrayWrapper)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsResIntArrayWrapper")