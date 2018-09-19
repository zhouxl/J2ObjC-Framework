//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/Cut.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectCut")
#ifdef RESTRICT_ComGoogleCommonCollectCut
#define INCLUDE_ALL_ComGoogleCommonCollectCut 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectCut 1
#endif
#undef RESTRICT_ComGoogleCommonCollectCut

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectCut_) && (INCLUDE_ALL_ComGoogleCommonCollectCut || defined(INCLUDE_ComGoogleCommonCollectCut))
#define ComGoogleCommonCollectCut_

#define RESTRICT_JavaLangComparable 1
#define INCLUDE_JavaLangComparable 1
#include "../../../../../java/lang/Comparable.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../../java/io/Serializable.h"

@class ComGoogleCommonCollectBoundType;
@class ComGoogleCommonCollectDiscreteDomain;
@class JavaLangStringBuilder;

/*!
 @brief Implementation detail for the internal structure of <code>Range</code> instances.Represents a unique
  way of "cutting" a "number line" (actually of instances of type <code>C</code>, not necessarily
  "numbers") into two sections; this can be done below a certain value, above a certain value,
  below all values or above all values.
 With this object defined in this way, an interval can
  always be represented by a pair of <code>Cut</code> instances.
 @author Kevin Bourrillion
 */
@interface ComGoogleCommonCollectCut : NSObject < JavaLangComparable, JavaIoSerializable > {
 @public
  id<JavaLangComparable> endpoint_;
}

#pragma mark Public

- (jint)compareToWithId:(ComGoogleCommonCollectCut *)that;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaLangComparable:(id<JavaLangComparable>)endpoint;

+ (ComGoogleCommonCollectCut *)aboveAll;

+ (ComGoogleCommonCollectCut *)aboveValueWithJavaLangComparable:(id<JavaLangComparable>)endpoint;

+ (ComGoogleCommonCollectCut *)belowAll;

+ (ComGoogleCommonCollectCut *)belowValueWithJavaLangComparable:(id<JavaLangComparable>)endpoint;

- (ComGoogleCommonCollectCut *)canonicalWithComGoogleCommonCollectDiscreteDomain:(ComGoogleCommonCollectDiscreteDomain *)domain;

- (void)describeAsLowerBoundWithJavaLangStringBuilder:(JavaLangStringBuilder *)sb;

- (void)describeAsUpperBoundWithJavaLangStringBuilder:(JavaLangStringBuilder *)sb;

- (id<JavaLangComparable>)endpoint;

- (id<JavaLangComparable>)greatestValueBelowWithComGoogleCommonCollectDiscreteDomain:(ComGoogleCommonCollectDiscreteDomain *)domain;

- (jboolean)isLessThanWithJavaLangComparable:(id<JavaLangComparable>)value;

- (id<JavaLangComparable>)leastValueAboveWithComGoogleCommonCollectDiscreteDomain:(ComGoogleCommonCollectDiscreteDomain *)domain;

- (ComGoogleCommonCollectBoundType *)typeAsLowerBound;

- (ComGoogleCommonCollectBoundType *)typeAsUpperBound;

- (ComGoogleCommonCollectCut *)withLowerBoundTypeWithComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType *)boundType
                                            withComGoogleCommonCollectDiscreteDomain:(ComGoogleCommonCollectDiscreteDomain *)domain;

- (ComGoogleCommonCollectCut *)withUpperBoundTypeWithComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType *)boundType
                                            withComGoogleCommonCollectDiscreteDomain:(ComGoogleCommonCollectDiscreteDomain *)domain;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectCut)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectCut, endpoint_, id<JavaLangComparable>)

FOUNDATION_EXPORT void ComGoogleCommonCollectCut_initWithJavaLangComparable_(ComGoogleCommonCollectCut *self, id<JavaLangComparable> endpoint);

FOUNDATION_EXPORT ComGoogleCommonCollectCut *ComGoogleCommonCollectCut_belowAll(void);

FOUNDATION_EXPORT ComGoogleCommonCollectCut *ComGoogleCommonCollectCut_aboveAll(void);

FOUNDATION_EXPORT ComGoogleCommonCollectCut *ComGoogleCommonCollectCut_belowValueWithJavaLangComparable_(id<JavaLangComparable> endpoint);

FOUNDATION_EXPORT ComGoogleCommonCollectCut *ComGoogleCommonCollectCut_aboveValueWithJavaLangComparable_(id<JavaLangComparable> endpoint);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectCut)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectCut")
