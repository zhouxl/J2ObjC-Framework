//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/base/Ticker.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseTicker")
#ifdef RESTRICT_ComGoogleCommonBaseTicker
#define INCLUDE_ALL_ComGoogleCommonBaseTicker 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseTicker 1
#endif
#undef RESTRICT_ComGoogleCommonBaseTicker

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBaseTicker_) && (INCLUDE_ALL_ComGoogleCommonBaseTicker || defined(INCLUDE_ComGoogleCommonBaseTicker))
#define ComGoogleCommonBaseTicker_

@interface ComGoogleCommonBaseTicker : NSObject

#pragma mark Public

- (jlong)read;

+ (ComGoogleCommonBaseTicker *)systemTicker;

#pragma mark Protected

- (instancetype)init;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonBaseTicker)

FOUNDATION_EXPORT void ComGoogleCommonBaseTicker_init(ComGoogleCommonBaseTicker *self);

FOUNDATION_EXPORT ComGoogleCommonBaseTicker *ComGoogleCommonBaseTicker_systemTicker(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseTicker)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseTicker")
