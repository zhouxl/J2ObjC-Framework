//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/lambda/java/java/lang/invoke/CallSite.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangInvokeCallSite")
#ifdef RESTRICT_JavaLangInvokeCallSite
#define INCLUDE_ALL_JavaLangInvokeCallSite 0
#else
#define INCLUDE_ALL_JavaLangInvokeCallSite 1
#endif
#undef RESTRICT_JavaLangInvokeCallSite

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangInvokeCallSite_) && (INCLUDE_ALL_JavaLangInvokeCallSite || defined(INCLUDE_JavaLangInvokeCallSite))
#define JavaLangInvokeCallSite_

@class JavaLangInvokeMethodHandle;
@class JavaLangInvokeMethodType;

@interface JavaLangInvokeCallSite : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

- (JavaLangInvokeMethodHandle *)dynamicInvoker;

- (JavaLangInvokeMethodHandle *)getTarget;

- (void)setTargetWithJavaLangInvokeMethodHandle:(JavaLangInvokeMethodHandle *)newTarget;

- (JavaLangInvokeMethodType *)type;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangInvokeCallSite)

FOUNDATION_EXPORT void JavaLangInvokeCallSite_init(JavaLangInvokeCallSite *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangInvokeCallSite)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangInvokeCallSite")
