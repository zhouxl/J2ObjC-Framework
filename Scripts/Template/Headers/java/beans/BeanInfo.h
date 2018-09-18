//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/beans/src/main/java/java/beans/BeanInfo.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaBeansBeanInfo")
#ifdef RESTRICT_JavaBeansBeanInfo
#define INCLUDE_ALL_JavaBeansBeanInfo 0
#else
#define INCLUDE_ALL_JavaBeansBeanInfo 1
#endif
#undef RESTRICT_JavaBeansBeanInfo

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaBeansBeanInfo_) && (INCLUDE_ALL_JavaBeansBeanInfo || defined(INCLUDE_JavaBeansBeanInfo))
#define JavaBeansBeanInfo_

@class IOSObjectArray;
@class JavaBeansBeanDescriptor;

@protocol JavaBeansBeanInfo < JavaObject >

- (IOSObjectArray *)getPropertyDescriptors;

- (IOSObjectArray *)getMethodDescriptors;

- (IOSObjectArray *)getEventSetDescriptors;

- (IOSObjectArray *)getAdditionalBeanInfo;

- (JavaBeansBeanDescriptor *)getBeanDescriptor;

- (jint)getDefaultPropertyIndex;

- (jint)getDefaultEventIndex;

@end

@interface JavaBeansBeanInfo : NSObject
@property (readonly, class) jint ICON_COLOR_16x16 NS_SWIFT_NAME(ICON_COLOR_16x16);
@property (readonly, class) jint ICON_COLOR_32x32 NS_SWIFT_NAME(ICON_COLOR_32x32);
@property (readonly, class) jint ICON_MONO_16x16 NS_SWIFT_NAME(ICON_MONO_16x16);
@property (readonly, class) jint ICON_MONO_32x32 NS_SWIFT_NAME(ICON_MONO_32x32);

+ (jint)ICON_COLOR_16x16;

+ (jint)ICON_COLOR_32x32;

+ (jint)ICON_MONO_16x16;

+ (jint)ICON_MONO_32x32;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaBeansBeanInfo)

inline jint JavaBeansBeanInfo_get_ICON_COLOR_16x16(void);
#define JavaBeansBeanInfo_ICON_COLOR_16x16 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaBeansBeanInfo, ICON_COLOR_16x16, jint)

inline jint JavaBeansBeanInfo_get_ICON_COLOR_32x32(void);
#define JavaBeansBeanInfo_ICON_COLOR_32x32 2
J2OBJC_STATIC_FIELD_CONSTANT(JavaBeansBeanInfo, ICON_COLOR_32x32, jint)

inline jint JavaBeansBeanInfo_get_ICON_MONO_16x16(void);
#define JavaBeansBeanInfo_ICON_MONO_16x16 3
J2OBJC_STATIC_FIELD_CONSTANT(JavaBeansBeanInfo, ICON_MONO_16x16, jint)

inline jint JavaBeansBeanInfo_get_ICON_MONO_32x32(void);
#define JavaBeansBeanInfo_ICON_MONO_32x32 4
J2OBJC_STATIC_FIELD_CONSTANT(JavaBeansBeanInfo, ICON_MONO_32x32, jint)

J2OBJC_TYPE_LITERAL_HEADER(JavaBeansBeanInfo)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaBeansBeanInfo")
