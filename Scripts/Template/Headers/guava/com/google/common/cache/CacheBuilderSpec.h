//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/cache/CacheBuilderSpec.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCacheCacheBuilderSpec")
#ifdef RESTRICT_ComGoogleCommonCacheCacheBuilderSpec
#define INCLUDE_ALL_ComGoogleCommonCacheCacheBuilderSpec 0
#else
#define INCLUDE_ALL_ComGoogleCommonCacheCacheBuilderSpec 1
#endif
#undef RESTRICT_ComGoogleCommonCacheCacheBuilderSpec
#ifdef INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_RefreshDurationParser
#define INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_DurationParser 1
#endif
#ifdef INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_WriteDurationParser
#define INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_DurationParser 1
#endif
#ifdef INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_AccessDurationParser
#define INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_DurationParser 1
#endif
#ifdef INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_DurationParser
#define INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_ValueParser 1
#endif
#ifdef INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_RecordStatsParser
#define INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_ValueParser 1
#endif
#ifdef INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_ValueStrengthParser
#define INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_ValueParser 1
#endif
#ifdef INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_KeyStrengthParser
#define INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_ValueParser 1
#endif
#ifdef INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_ConcurrencyLevelParser
#define INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_IntegerParser 1
#endif
#ifdef INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_MaximumWeightParser
#define INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_LongParser 1
#endif
#ifdef INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_MaximumSizeParser
#define INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_LongParser 1
#endif
#ifdef INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_InitialCapacityParser
#define INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_IntegerParser 1
#endif
#ifdef INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_LongParser
#define INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_ValueParser 1
#endif
#ifdef INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_IntegerParser
#define INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_ValueParser 1
#endif

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCacheCacheBuilderSpec_) && (INCLUDE_ALL_ComGoogleCommonCacheCacheBuilderSpec || defined(INCLUDE_ComGoogleCommonCacheCacheBuilderSpec))
#define ComGoogleCommonCacheCacheBuilderSpec_

@class ComGoogleCommonCacheCacheBuilder;
@class ComGoogleCommonCacheLocalCache_Strength;
@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaUtilConcurrentTimeUnit;

/*!
 @brief A specification of a <code>CacheBuilder</code> configuration.
 <p><code>CacheBuilderSpec</code> supports parsing configuration off of a string, which makes it
  especially useful for command-line configuration of a <code>CacheBuilder</code>.
  
 <p>The string syntax is a series of comma-separated keys or key-value pairs, each corresponding
  to a <code>CacheBuilder</code> method. 
 <ul>
    <li><code>concurrencyLevel=[integer]</code>: sets <code>CacheBuilder.concurrencyLevel</code>.
    <li><code>initialCapacity=[integer]</code>: sets <code>CacheBuilder.initialCapacity</code>.
    <li><code>maximumSize=[long]</code>: sets <code>CacheBuilder.maximumSize</code>.
    <li><code>maximumWeight=[long]</code>: sets <code>CacheBuilder.maximumWeight</code>.
    <li><code>expireAfterAccess=[duration]</code>: sets <code>CacheBuilder.expireAfterAccess</code>.
    <li><code>expireAfterWrite=[duration]</code>: sets <code>CacheBuilder.expireAfterWrite</code>.
    <li><code>refreshAfterWrite=[duration]</code>: sets <code>CacheBuilder.refreshAfterWrite</code>.
    <li><code>weakKeys</code>: sets <code>CacheBuilder.weakKeys</code>.
    <li><code>softValues</code>: sets <code>CacheBuilder.softValues</code>.
    <li><code>weakValues</code>: sets <code>CacheBuilder.weakValues</code>.
    <li><code>recordStats</code>: sets <code>CacheBuilder.recordStats</code>.
  </ul>
  
 <p>The set of supported keys will grow as <code>CacheBuilder</code> evolves, but existing keys will
  never be removed. 
 <p>Durations are represented by an integer, followed by one of "d", "h", "m", or "s",
  representing days, hours, minutes, or seconds respectively. (There is currently no syntax to
  request expiration in milliseconds, microseconds, or nanoseconds.) 
 <p>Whitespace before and after commas and equal signs is ignored. Keys may not be repeated; it is
  also illegal to use the following pairs of keys in a single value: 
 <ul>
    <li><code>maximumSize</code> and <code>maximumWeight</code>
    <li><code>softValues</code> and <code>weakValues</code>
  </ul>
  
 <p><code>CacheBuilderSpec</code> does not support configuring <code>CacheBuilder</code> methods with
  non-value parameters. These must be configured in code. 
 <p>A new <code>CacheBuilder</code> can be instantiated from a <code>CacheBuilderSpec</code> using <code>CacheBuilder.from(CacheBuilderSpec)</code>
  or <code>CacheBuilder.from(String)</code>.
 @author Adam Winer
 @since 12.0
 */
@interface ComGoogleCommonCacheCacheBuilderSpec : NSObject {
 @public
  JavaLangInteger *initialCapacity_;
  JavaLangLong *maximumSize_;
  JavaLangLong *maximumWeight_;
  JavaLangInteger *concurrencyLevel_;
  ComGoogleCommonCacheLocalCache_Strength *keyStrength_;
  ComGoogleCommonCacheLocalCache_Strength *valueStrength_;
  JavaLangBoolean *recordStats_;
  jlong writeExpirationDuration_;
  JavaUtilConcurrentTimeUnit *writeExpirationTimeUnit_;
  jlong accessExpirationDuration_;
  JavaUtilConcurrentTimeUnit *accessExpirationTimeUnit_;
  jlong refreshDuration_;
  JavaUtilConcurrentTimeUnit *refreshTimeUnit_;
}

#pragma mark Public

/*!
 @brief Returns a CacheBuilderSpec that will prevent caching.
 */
+ (ComGoogleCommonCacheCacheBuilderSpec *)disableCaching;

- (jboolean)isEqual:(id __nullable)obj;

- (NSUInteger)hash;

/*!
 @brief Creates a CacheBuilderSpec from a string.
 @param cacheBuilderSpecification the string form
 */
+ (ComGoogleCommonCacheCacheBuilderSpec *)parseWithNSString:(NSString *)cacheBuilderSpecification;

/*!
 @brief Returns a string that can be used to parse an equivalent <code>CacheBuilderSpec</code>.The order
  and form of this representation is not guaranteed, except that reparsing its output will
  produce a <code>CacheBuilderSpec</code> equal to this instance.
 */
- (NSString *)toParsableString;

/*!
 @brief Returns a string representation for this CacheBuilderSpec instance.The form of this
  representation is not guaranteed.
 */
- (NSString *)description;

#pragma mark Package-Private

/*!
 @brief Returns a CacheBuilder configured according to this instance's specification.
 */
- (ComGoogleCommonCacheCacheBuilder *)toCacheBuilder;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec)

J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilderSpec, initialCapacity_, JavaLangInteger *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilderSpec, maximumSize_, JavaLangLong *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilderSpec, maximumWeight_, JavaLangLong *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilderSpec, concurrencyLevel_, JavaLangInteger *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilderSpec, keyStrength_, ComGoogleCommonCacheLocalCache_Strength *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilderSpec, valueStrength_, ComGoogleCommonCacheLocalCache_Strength *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilderSpec, recordStats_, JavaLangBoolean *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilderSpec, writeExpirationTimeUnit_, JavaUtilConcurrentTimeUnit *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilderSpec, accessExpirationTimeUnit_, JavaUtilConcurrentTimeUnit *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilderSpec, refreshTimeUnit_, JavaUtilConcurrentTimeUnit *)

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec *ComGoogleCommonCacheCacheBuilderSpec_parseWithNSString_(NSString *cacheBuilderSpecification);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec *ComGoogleCommonCacheCacheBuilderSpec_disableCaching(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec)

#endif

#if !defined (ComGoogleCommonCacheCacheBuilderSpec_ValueParser_) && (INCLUDE_ALL_ComGoogleCommonCacheCacheBuilderSpec || defined(INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_ValueParser))
#define ComGoogleCommonCacheCacheBuilderSpec_ValueParser_

@class ComGoogleCommonCacheCacheBuilderSpec;

/*!
 @brief Parses a single value.
 */
@protocol ComGoogleCommonCacheCacheBuilderSpec_ValueParser < JavaObject >

- (void)parseWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                         withNSString:(NSString *)key
                                         withNSString:(NSString * __nullable)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_ValueParser)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_ValueParser)

#endif

#if !defined (ComGoogleCommonCacheCacheBuilderSpec_IntegerParser_) && (INCLUDE_ALL_ComGoogleCommonCacheCacheBuilderSpec || defined(INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_IntegerParser))
#define ComGoogleCommonCacheCacheBuilderSpec_IntegerParser_

@class ComGoogleCommonCacheCacheBuilderSpec;

/*!
 @brief Base class for parsing integers.
 */
@interface ComGoogleCommonCacheCacheBuilderSpec_IntegerParser : NSObject < ComGoogleCommonCacheCacheBuilderSpec_ValueParser >

#pragma mark Public

- (void)parseWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                         withNSString:(NSString *)key
                                         withNSString:(NSString *)value;

#pragma mark Protected

- (void)parseIntegerWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                                     withInt:(jint)value;

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_IntegerParser)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheBuilderSpec_IntegerParser_init(ComGoogleCommonCacheCacheBuilderSpec_IntegerParser *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_IntegerParser)

#endif

#if !defined (ComGoogleCommonCacheCacheBuilderSpec_LongParser_) && (INCLUDE_ALL_ComGoogleCommonCacheCacheBuilderSpec || defined(INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_LongParser))
#define ComGoogleCommonCacheCacheBuilderSpec_LongParser_

@class ComGoogleCommonCacheCacheBuilderSpec;

/*!
 @brief Base class for parsing integers.
 */
@interface ComGoogleCommonCacheCacheBuilderSpec_LongParser : NSObject < ComGoogleCommonCacheCacheBuilderSpec_ValueParser >

#pragma mark Public

- (void)parseWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                         withNSString:(NSString *)key
                                         withNSString:(NSString *)value;

#pragma mark Protected

- (void)parseLongWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                                 withLong:(jlong)value;

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_LongParser)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheBuilderSpec_LongParser_init(ComGoogleCommonCacheCacheBuilderSpec_LongParser *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_LongParser)

#endif

#if !defined (ComGoogleCommonCacheCacheBuilderSpec_InitialCapacityParser_) && (INCLUDE_ALL_ComGoogleCommonCacheCacheBuilderSpec || defined(INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_InitialCapacityParser))
#define ComGoogleCommonCacheCacheBuilderSpec_InitialCapacityParser_

@class ComGoogleCommonCacheCacheBuilderSpec;

/*!
 @brief Parse initialCapacity
 */
@interface ComGoogleCommonCacheCacheBuilderSpec_InitialCapacityParser : ComGoogleCommonCacheCacheBuilderSpec_IntegerParser

#pragma mark Protected

- (void)parseIntegerWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                                     withInt:(jint)value;

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_InitialCapacityParser)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheBuilderSpec_InitialCapacityParser_init(ComGoogleCommonCacheCacheBuilderSpec_InitialCapacityParser *self);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec_InitialCapacityParser *new_ComGoogleCommonCacheCacheBuilderSpec_InitialCapacityParser_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec_InitialCapacityParser *create_ComGoogleCommonCacheCacheBuilderSpec_InitialCapacityParser_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_InitialCapacityParser)

#endif

#if !defined (ComGoogleCommonCacheCacheBuilderSpec_MaximumSizeParser_) && (INCLUDE_ALL_ComGoogleCommonCacheCacheBuilderSpec || defined(INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_MaximumSizeParser))
#define ComGoogleCommonCacheCacheBuilderSpec_MaximumSizeParser_

@class ComGoogleCommonCacheCacheBuilderSpec;

/*!
 @brief Parse maximumSize
 */
@interface ComGoogleCommonCacheCacheBuilderSpec_MaximumSizeParser : ComGoogleCommonCacheCacheBuilderSpec_LongParser

#pragma mark Protected

- (void)parseLongWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                                 withLong:(jlong)value;

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_MaximumSizeParser)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheBuilderSpec_MaximumSizeParser_init(ComGoogleCommonCacheCacheBuilderSpec_MaximumSizeParser *self);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec_MaximumSizeParser *new_ComGoogleCommonCacheCacheBuilderSpec_MaximumSizeParser_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec_MaximumSizeParser *create_ComGoogleCommonCacheCacheBuilderSpec_MaximumSizeParser_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_MaximumSizeParser)

#endif

#if !defined (ComGoogleCommonCacheCacheBuilderSpec_MaximumWeightParser_) && (INCLUDE_ALL_ComGoogleCommonCacheCacheBuilderSpec || defined(INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_MaximumWeightParser))
#define ComGoogleCommonCacheCacheBuilderSpec_MaximumWeightParser_

@class ComGoogleCommonCacheCacheBuilderSpec;

/*!
 @brief Parse maximumWeight
 */
@interface ComGoogleCommonCacheCacheBuilderSpec_MaximumWeightParser : ComGoogleCommonCacheCacheBuilderSpec_LongParser

#pragma mark Protected

- (void)parseLongWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                                 withLong:(jlong)value;

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_MaximumWeightParser)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheBuilderSpec_MaximumWeightParser_init(ComGoogleCommonCacheCacheBuilderSpec_MaximumWeightParser *self);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec_MaximumWeightParser *new_ComGoogleCommonCacheCacheBuilderSpec_MaximumWeightParser_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec_MaximumWeightParser *create_ComGoogleCommonCacheCacheBuilderSpec_MaximumWeightParser_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_MaximumWeightParser)

#endif

#if !defined (ComGoogleCommonCacheCacheBuilderSpec_ConcurrencyLevelParser_) && (INCLUDE_ALL_ComGoogleCommonCacheCacheBuilderSpec || defined(INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_ConcurrencyLevelParser))
#define ComGoogleCommonCacheCacheBuilderSpec_ConcurrencyLevelParser_

@class ComGoogleCommonCacheCacheBuilderSpec;

/*!
 @brief Parse concurrencyLevel
 */
@interface ComGoogleCommonCacheCacheBuilderSpec_ConcurrencyLevelParser : ComGoogleCommonCacheCacheBuilderSpec_IntegerParser

#pragma mark Protected

- (void)parseIntegerWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                                     withInt:(jint)value;

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_ConcurrencyLevelParser)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheBuilderSpec_ConcurrencyLevelParser_init(ComGoogleCommonCacheCacheBuilderSpec_ConcurrencyLevelParser *self);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec_ConcurrencyLevelParser *new_ComGoogleCommonCacheCacheBuilderSpec_ConcurrencyLevelParser_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec_ConcurrencyLevelParser *create_ComGoogleCommonCacheCacheBuilderSpec_ConcurrencyLevelParser_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_ConcurrencyLevelParser)

#endif

#if !defined (ComGoogleCommonCacheCacheBuilderSpec_KeyStrengthParser_) && (INCLUDE_ALL_ComGoogleCommonCacheCacheBuilderSpec || defined(INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_KeyStrengthParser))
#define ComGoogleCommonCacheCacheBuilderSpec_KeyStrengthParser_

@class ComGoogleCommonCacheCacheBuilderSpec;
@class ComGoogleCommonCacheLocalCache_Strength;

/*!
 @brief Parse weakKeys
 */
@interface ComGoogleCommonCacheCacheBuilderSpec_KeyStrengthParser : NSObject < ComGoogleCommonCacheCacheBuilderSpec_ValueParser >

#pragma mark Public

- (instancetype __nonnull)initWithComGoogleCommonCacheLocalCache_Strength:(ComGoogleCommonCacheLocalCache_Strength *)strength;

- (void)parseWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                         withNSString:(NSString *)key
                                         withNSString:(NSString * __nullable)value;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_KeyStrengthParser)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheBuilderSpec_KeyStrengthParser_initWithComGoogleCommonCacheLocalCache_Strength_(ComGoogleCommonCacheCacheBuilderSpec_KeyStrengthParser *self, ComGoogleCommonCacheLocalCache_Strength *strength);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec_KeyStrengthParser *new_ComGoogleCommonCacheCacheBuilderSpec_KeyStrengthParser_initWithComGoogleCommonCacheLocalCache_Strength_(ComGoogleCommonCacheLocalCache_Strength *strength) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec_KeyStrengthParser *create_ComGoogleCommonCacheCacheBuilderSpec_KeyStrengthParser_initWithComGoogleCommonCacheLocalCache_Strength_(ComGoogleCommonCacheLocalCache_Strength *strength);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_KeyStrengthParser)

#endif

#if !defined (ComGoogleCommonCacheCacheBuilderSpec_ValueStrengthParser_) && (INCLUDE_ALL_ComGoogleCommonCacheCacheBuilderSpec || defined(INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_ValueStrengthParser))
#define ComGoogleCommonCacheCacheBuilderSpec_ValueStrengthParser_

@class ComGoogleCommonCacheCacheBuilderSpec;
@class ComGoogleCommonCacheLocalCache_Strength;

/*!
 @brief Parse weakValues and softValues
 */
@interface ComGoogleCommonCacheCacheBuilderSpec_ValueStrengthParser : NSObject < ComGoogleCommonCacheCacheBuilderSpec_ValueParser >

#pragma mark Public

- (instancetype __nonnull)initWithComGoogleCommonCacheLocalCache_Strength:(ComGoogleCommonCacheLocalCache_Strength *)strength;

- (void)parseWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                         withNSString:(NSString *)key
                                         withNSString:(NSString * __nullable)value;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_ValueStrengthParser)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheBuilderSpec_ValueStrengthParser_initWithComGoogleCommonCacheLocalCache_Strength_(ComGoogleCommonCacheCacheBuilderSpec_ValueStrengthParser *self, ComGoogleCommonCacheLocalCache_Strength *strength);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec_ValueStrengthParser *new_ComGoogleCommonCacheCacheBuilderSpec_ValueStrengthParser_initWithComGoogleCommonCacheLocalCache_Strength_(ComGoogleCommonCacheLocalCache_Strength *strength) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec_ValueStrengthParser *create_ComGoogleCommonCacheCacheBuilderSpec_ValueStrengthParser_initWithComGoogleCommonCacheLocalCache_Strength_(ComGoogleCommonCacheLocalCache_Strength *strength);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_ValueStrengthParser)

#endif

#if !defined (ComGoogleCommonCacheCacheBuilderSpec_RecordStatsParser_) && (INCLUDE_ALL_ComGoogleCommonCacheCacheBuilderSpec || defined(INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_RecordStatsParser))
#define ComGoogleCommonCacheCacheBuilderSpec_RecordStatsParser_

@class ComGoogleCommonCacheCacheBuilderSpec;

/*!
 @brief Parse recordStats
 */
@interface ComGoogleCommonCacheCacheBuilderSpec_RecordStatsParser : NSObject < ComGoogleCommonCacheCacheBuilderSpec_ValueParser >

#pragma mark Public

- (void)parseWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                         withNSString:(NSString *)key
                                         withNSString:(NSString * __nullable)value;

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_RecordStatsParser)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheBuilderSpec_RecordStatsParser_init(ComGoogleCommonCacheCacheBuilderSpec_RecordStatsParser *self);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec_RecordStatsParser *new_ComGoogleCommonCacheCacheBuilderSpec_RecordStatsParser_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec_RecordStatsParser *create_ComGoogleCommonCacheCacheBuilderSpec_RecordStatsParser_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_RecordStatsParser)

#endif

#if !defined (ComGoogleCommonCacheCacheBuilderSpec_DurationParser_) && (INCLUDE_ALL_ComGoogleCommonCacheCacheBuilderSpec || defined(INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_DurationParser))
#define ComGoogleCommonCacheCacheBuilderSpec_DurationParser_

@class ComGoogleCommonCacheCacheBuilderSpec;
@class JavaUtilConcurrentTimeUnit;

/*!
 @brief Base class for parsing times with durations
 */
@interface ComGoogleCommonCacheCacheBuilderSpec_DurationParser : NSObject < ComGoogleCommonCacheCacheBuilderSpec_ValueParser >

#pragma mark Public

- (void)parseWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                         withNSString:(NSString *)key
                                         withNSString:(NSString *)value;

#pragma mark Protected

- (void)parseDurationWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                                     withLong:(jlong)duration
                               withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_DurationParser)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheBuilderSpec_DurationParser_init(ComGoogleCommonCacheCacheBuilderSpec_DurationParser *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_DurationParser)

#endif

#if !defined (ComGoogleCommonCacheCacheBuilderSpec_AccessDurationParser_) && (INCLUDE_ALL_ComGoogleCommonCacheCacheBuilderSpec || defined(INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_AccessDurationParser))
#define ComGoogleCommonCacheCacheBuilderSpec_AccessDurationParser_

@class ComGoogleCommonCacheCacheBuilderSpec;
@class JavaUtilConcurrentTimeUnit;

/*!
 @brief Parse expireAfterAccess
 */
@interface ComGoogleCommonCacheCacheBuilderSpec_AccessDurationParser : ComGoogleCommonCacheCacheBuilderSpec_DurationParser

#pragma mark Protected

- (void)parseDurationWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                                     withLong:(jlong)duration
                               withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_AccessDurationParser)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheBuilderSpec_AccessDurationParser_init(ComGoogleCommonCacheCacheBuilderSpec_AccessDurationParser *self);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec_AccessDurationParser *new_ComGoogleCommonCacheCacheBuilderSpec_AccessDurationParser_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec_AccessDurationParser *create_ComGoogleCommonCacheCacheBuilderSpec_AccessDurationParser_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_AccessDurationParser)

#endif

#if !defined (ComGoogleCommonCacheCacheBuilderSpec_WriteDurationParser_) && (INCLUDE_ALL_ComGoogleCommonCacheCacheBuilderSpec || defined(INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_WriteDurationParser))
#define ComGoogleCommonCacheCacheBuilderSpec_WriteDurationParser_

@class ComGoogleCommonCacheCacheBuilderSpec;
@class JavaUtilConcurrentTimeUnit;

/*!
 @brief Parse expireAfterWrite
 */
@interface ComGoogleCommonCacheCacheBuilderSpec_WriteDurationParser : ComGoogleCommonCacheCacheBuilderSpec_DurationParser

#pragma mark Protected

- (void)parseDurationWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                                     withLong:(jlong)duration
                               withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_WriteDurationParser)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheBuilderSpec_WriteDurationParser_init(ComGoogleCommonCacheCacheBuilderSpec_WriteDurationParser *self);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec_WriteDurationParser *new_ComGoogleCommonCacheCacheBuilderSpec_WriteDurationParser_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec_WriteDurationParser *create_ComGoogleCommonCacheCacheBuilderSpec_WriteDurationParser_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_WriteDurationParser)

#endif

#if !defined (ComGoogleCommonCacheCacheBuilderSpec_RefreshDurationParser_) && (INCLUDE_ALL_ComGoogleCommonCacheCacheBuilderSpec || defined(INCLUDE_ComGoogleCommonCacheCacheBuilderSpec_RefreshDurationParser))
#define ComGoogleCommonCacheCacheBuilderSpec_RefreshDurationParser_

@class ComGoogleCommonCacheCacheBuilderSpec;
@class JavaUtilConcurrentTimeUnit;

/*!
 @brief Parse refreshAfterWrite
 */
@interface ComGoogleCommonCacheCacheBuilderSpec_RefreshDurationParser : ComGoogleCommonCacheCacheBuilderSpec_DurationParser

#pragma mark Protected

- (void)parseDurationWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                                     withLong:(jlong)duration
                               withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_RefreshDurationParser)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheBuilderSpec_RefreshDurationParser_init(ComGoogleCommonCacheCacheBuilderSpec_RefreshDurationParser *self);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec_RefreshDurationParser *new_ComGoogleCommonCacheCacheBuilderSpec_RefreshDurationParser_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec_RefreshDurationParser *create_ComGoogleCommonCacheCacheBuilderSpec_RefreshDurationParser_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_RefreshDurationParser)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCacheCacheBuilderSpec")
