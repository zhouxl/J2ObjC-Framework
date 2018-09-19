//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/MoreCollectors.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectMoreCollectors")
#ifdef RESTRICT_ComGoogleCommonCollectMoreCollectors
#define INCLUDE_ALL_ComGoogleCommonCollectMoreCollectors 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectMoreCollectors 1
#endif
#undef RESTRICT_ComGoogleCommonCollectMoreCollectors

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectMoreCollectors_) && (INCLUDE_ALL_ComGoogleCommonCollectMoreCollectors || defined(INCLUDE_ComGoogleCommonCollectMoreCollectors))
#define ComGoogleCommonCollectMoreCollectors_

@protocol JavaUtilStreamCollector;

/*!
 @brief Collectors not present in <code>java.util.stream.Collectors</code> that are not otherwise associated
  with a <code>com.google.common</code> type.
 @author Louis Wasserman
 @since 21.0
 */
@interface ComGoogleCommonCollectMoreCollectors : NSObject

#pragma mark Public

/*!
 @brief A collector that takes a stream containing exactly one element and returns that element.The
  returned collector throws an <code>IllegalArgumentException</code> if the stream consists of two or
  more elements, and a <code>NoSuchElementException</code> if the stream is empty.
 */
+ (id<JavaUtilStreamCollector>)onlyElement;

/*!
 @brief A collector that converts a stream of zero or one elements to an <code>Optional</code>.The returned
  collector throws an <code>IllegalArgumentException</code> if the stream consists of two or more
  elements, and a <code>NullPointerException</code> if the stream consists of exactly one element,
  which is null.
 */
+ (id<JavaUtilStreamCollector>)toOptional;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectMoreCollectors)

FOUNDATION_EXPORT id<JavaUtilStreamCollector> ComGoogleCommonCollectMoreCollectors_toOptional(void);

FOUNDATION_EXPORT id<JavaUtilStreamCollector> ComGoogleCommonCollectMoreCollectors_onlyElement(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMoreCollectors)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectMoreCollectors")
