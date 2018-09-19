//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/io/PatternFilenameFilter.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonIoPatternFilenameFilter")
#ifdef RESTRICT_ComGoogleCommonIoPatternFilenameFilter
#define INCLUDE_ALL_ComGoogleCommonIoPatternFilenameFilter 0
#else
#define INCLUDE_ALL_ComGoogleCommonIoPatternFilenameFilter 1
#endif
#undef RESTRICT_ComGoogleCommonIoPatternFilenameFilter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonIoPatternFilenameFilter_) && (INCLUDE_ALL_ComGoogleCommonIoPatternFilenameFilter || defined(INCLUDE_ComGoogleCommonIoPatternFilenameFilter))
#define ComGoogleCommonIoPatternFilenameFilter_

#define RESTRICT_JavaIoFilenameFilter 1
#define INCLUDE_JavaIoFilenameFilter 1
#include "../../../../../java/io/FilenameFilter.h"

@class JavaIoFile;
@class JavaUtilRegexPattern;

/*!
 @brief File name filter that only accepts files matching a regular expression.This class is thread-safe
  and immutable.
 @author Apple Chow
 @since 1.0
 */
@interface ComGoogleCommonIoPatternFilenameFilter : NSObject < JavaIoFilenameFilter >

#pragma mark Public

/*!
 @brief Constructs a pattern file name filter object.
 @param pattern the pattern on which to filter file names
 */
- (instancetype __nonnull)initWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern;

/*!
 @brief Constructs a pattern file name filter object.
 @param patternStr the pattern string on which to filter file names
 @throw PatternSyntaxExceptionif pattern compilation fails (runtime)
 */
- (instancetype __nonnull)initWithNSString:(NSString *)patternStr;

- (jboolean)acceptWithJavaIoFile:(JavaIoFile * __nullable)dir
                    withNSString:(NSString *)fileName;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoPatternFilenameFilter)

FOUNDATION_EXPORT void ComGoogleCommonIoPatternFilenameFilter_initWithNSString_(ComGoogleCommonIoPatternFilenameFilter *self, NSString *patternStr);

FOUNDATION_EXPORT ComGoogleCommonIoPatternFilenameFilter *new_ComGoogleCommonIoPatternFilenameFilter_initWithNSString_(NSString *patternStr) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonIoPatternFilenameFilter *create_ComGoogleCommonIoPatternFilenameFilter_initWithNSString_(NSString *patternStr);

FOUNDATION_EXPORT void ComGoogleCommonIoPatternFilenameFilter_initWithJavaUtilRegexPattern_(ComGoogleCommonIoPatternFilenameFilter *self, JavaUtilRegexPattern *pattern);

FOUNDATION_EXPORT ComGoogleCommonIoPatternFilenameFilter *new_ComGoogleCommonIoPatternFilenameFilter_initWithJavaUtilRegexPattern_(JavaUtilRegexPattern *pattern) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonIoPatternFilenameFilter *create_ComGoogleCommonIoPatternFilenameFilter_initWithJavaUtilRegexPattern_(JavaUtilRegexPattern *pattern);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoPatternFilenameFilter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonIoPatternFilenameFilter")
