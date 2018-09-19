//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/base/MoreObjects.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseMoreObjects")
#ifdef RESTRICT_ComGoogleCommonBaseMoreObjects
#define INCLUDE_ALL_ComGoogleCommonBaseMoreObjects 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseMoreObjects 1
#endif
#undef RESTRICT_ComGoogleCommonBaseMoreObjects

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBaseMoreObjects_) && (INCLUDE_ALL_ComGoogleCommonBaseMoreObjects || defined(INCLUDE_ComGoogleCommonBaseMoreObjects))
#define ComGoogleCommonBaseMoreObjects_

@class ComGoogleCommonBaseMoreObjects_ToStringHelper;
@class IOSClass;

@interface ComGoogleCommonBaseMoreObjects : NSObject

#pragma mark Public

+ (id)firstNonNullWithId:(id)first
                  withId:(id)second;

+ (ComGoogleCommonBaseMoreObjects_ToStringHelper *)toStringHelperWithIOSClass:(IOSClass *)clazz;

+ (ComGoogleCommonBaseMoreObjects_ToStringHelper *)toStringHelperWithId:(id)self_;

+ (ComGoogleCommonBaseMoreObjects_ToStringHelper *)toStringHelperWithNSString:(NSString *)className_;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseMoreObjects)

FOUNDATION_EXPORT id ComGoogleCommonBaseMoreObjects_firstNonNullWithId_withId_(id first, id second);

FOUNDATION_EXPORT ComGoogleCommonBaseMoreObjects_ToStringHelper *ComGoogleCommonBaseMoreObjects_toStringHelperWithId_(id self_);

FOUNDATION_EXPORT ComGoogleCommonBaseMoreObjects_ToStringHelper *ComGoogleCommonBaseMoreObjects_toStringHelperWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT ComGoogleCommonBaseMoreObjects_ToStringHelper *ComGoogleCommonBaseMoreObjects_toStringHelperWithNSString_(NSString *className_);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseMoreObjects)

#endif

#if !defined (ComGoogleCommonBaseMoreObjects_ToStringHelper_) && (INCLUDE_ALL_ComGoogleCommonBaseMoreObjects || defined(INCLUDE_ComGoogleCommonBaseMoreObjects_ToStringHelper))
#define ComGoogleCommonBaseMoreObjects_ToStringHelper_

@interface ComGoogleCommonBaseMoreObjects_ToStringHelper : NSObject

#pragma mark Public

- (ComGoogleCommonBaseMoreObjects_ToStringHelper *)addWithNSString:(NSString *)name
                                                       withBoolean:(jboolean)value;

- (ComGoogleCommonBaseMoreObjects_ToStringHelper *)addWithNSString:(NSString *)name
                                                          withChar:(jchar)value;

- (ComGoogleCommonBaseMoreObjects_ToStringHelper *)addWithNSString:(NSString *)name
                                                        withDouble:(jdouble)value;

- (ComGoogleCommonBaseMoreObjects_ToStringHelper *)addWithNSString:(NSString *)name
                                                         withFloat:(jfloat)value;

- (ComGoogleCommonBaseMoreObjects_ToStringHelper *)addWithNSString:(NSString *)name
                                                           withInt:(jint)value;

- (ComGoogleCommonBaseMoreObjects_ToStringHelper *)addWithNSString:(NSString *)name
                                                          withLong:(jlong)value;

- (ComGoogleCommonBaseMoreObjects_ToStringHelper *)addWithNSString:(NSString *)name
                                                            withId:(id)value;

- (ComGoogleCommonBaseMoreObjects_ToStringHelper *)addValueWithBoolean:(jboolean)value;

- (ComGoogleCommonBaseMoreObjects_ToStringHelper *)addValueWithChar:(jchar)value;

- (ComGoogleCommonBaseMoreObjects_ToStringHelper *)addValueWithDouble:(jdouble)value;

- (ComGoogleCommonBaseMoreObjects_ToStringHelper *)addValueWithFloat:(jfloat)value;

- (ComGoogleCommonBaseMoreObjects_ToStringHelper *)addValueWithInt:(jint)value;

- (ComGoogleCommonBaseMoreObjects_ToStringHelper *)addValueWithLong:(jlong)value;

- (ComGoogleCommonBaseMoreObjects_ToStringHelper *)addValueWithId:(id)value;

- (ComGoogleCommonBaseMoreObjects_ToStringHelper *)omitNullValues;

- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseMoreObjects_ToStringHelper)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseMoreObjects_ToStringHelper)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseMoreObjects")
