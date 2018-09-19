//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/cache/LongAddable.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCacheLongAddable")
#ifdef RESTRICT_ComGoogleCommonCacheLongAddable
#define INCLUDE_ALL_ComGoogleCommonCacheLongAddable 0
#else
#define INCLUDE_ALL_ComGoogleCommonCacheLongAddable 1
#endif
#undef RESTRICT_ComGoogleCommonCacheLongAddable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCacheLongAddable_) && (INCLUDE_ALL_ComGoogleCommonCacheLongAddable || defined(INCLUDE_ComGoogleCommonCacheLongAddable))
#define ComGoogleCommonCacheLongAddable_

/*!
 @brief Abstract interface for objects that can concurrently add longs.
 @author Louis Wasserman
 */
@protocol ComGoogleCommonCacheLongAddable < JavaObject >

- (void)increment;

- (void)addWithLong:(jlong)x;

- (jlong)sum;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheLongAddable)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheLongAddable)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCacheLongAddable")
