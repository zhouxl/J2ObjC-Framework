//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/ArrayListMultimapGwtSerializationDependencies.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectArrayListMultimapGwtSerializationDependencies")
#ifdef RESTRICT_ComGoogleCommonCollectArrayListMultimapGwtSerializationDependencies
#define INCLUDE_ALL_ComGoogleCommonCollectArrayListMultimapGwtSerializationDependencies 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectArrayListMultimapGwtSerializationDependencies 1
#endif
#undef RESTRICT_ComGoogleCommonCollectArrayListMultimapGwtSerializationDependencies

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectArrayListMultimapGwtSerializationDependencies_) && (INCLUDE_ALL_ComGoogleCommonCollectArrayListMultimapGwtSerializationDependencies || defined(INCLUDE_ComGoogleCommonCollectArrayListMultimapGwtSerializationDependencies))
#define ComGoogleCommonCollectArrayListMultimapGwtSerializationDependencies_

#define RESTRICT_ComGoogleCommonCollectAbstractListMultimap 1
#define INCLUDE_ComGoogleCommonCollectAbstractListMultimap 1
#include "../../../../../com/google/common/collect/AbstractListMultimap.h"

@protocol JavaUtilMap;

/*!
 @brief A dummy superclass to support GWT serialization of the element types of an <code>ArrayListMultimap</code>
 .The GWT supersource for this class contains a field for each type.
 <p>For details about this hack, see <code>GwtSerializationDependencies</code>, which takes the same
  approach but with a subclass rather than a superclass. 
 <p>TODO(cpovirk): Consider applying this subclass approach to our other types.
 */
@interface ComGoogleCommonCollectArrayListMultimapGwtSerializationDependencies : ComGoogleCommonCollectAbstractListMultimap

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaUtilMap:(id<JavaUtilMap>)map;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectArrayListMultimapGwtSerializationDependencies)

FOUNDATION_EXPORT void ComGoogleCommonCollectArrayListMultimapGwtSerializationDependencies_initWithJavaUtilMap_(ComGoogleCommonCollectArrayListMultimapGwtSerializationDependencies *self, id<JavaUtilMap> map);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectArrayListMultimapGwtSerializationDependencies)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectArrayListMultimapGwtSerializationDependencies")
