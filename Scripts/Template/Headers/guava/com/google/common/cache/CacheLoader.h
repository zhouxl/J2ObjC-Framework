//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/cache/CacheLoader.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCacheCacheLoader")
#ifdef RESTRICT_ComGoogleCommonCacheCacheLoader
#define INCLUDE_ALL_ComGoogleCommonCacheCacheLoader 0
#else
#define INCLUDE_ALL_ComGoogleCommonCacheCacheLoader 1
#endif
#undef RESTRICT_ComGoogleCommonCacheCacheLoader

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCacheCacheLoader_) && (INCLUDE_ALL_ComGoogleCommonCacheCacheLoader || defined(INCLUDE_ComGoogleCommonCacheCacheLoader))
#define ComGoogleCommonCacheCacheLoader_

@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonBaseSupplier;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;
@protocol JavaLangIterable;
@protocol JavaUtilConcurrentExecutor;
@protocol JavaUtilMap;

@interface ComGoogleCommonCacheCacheLoader : NSObject

#pragma mark Public

+ (ComGoogleCommonCacheCacheLoader *)asyncReloadingWithComGoogleCommonCacheCacheLoader:(ComGoogleCommonCacheCacheLoader *)loader
                                                        withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

+ (ComGoogleCommonCacheCacheLoader *)fromWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

+ (ComGoogleCommonCacheCacheLoader *)fromWithComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)supplier;

- (id)load__WithId:(id)key;

- (id<JavaUtilMap>)loadAllWithJavaLangIterable:(id<JavaLangIterable>)keys;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)reloadWithId:(id)key
                                                           withId:(id)oldValue;

#pragma mark Protected

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheLoader)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheLoader_init(ComGoogleCommonCacheCacheLoader *self);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheLoader *ComGoogleCommonCacheCacheLoader_fromWithComGoogleCommonBaseFunction_(id<ComGoogleCommonBaseFunction> function);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheLoader *ComGoogleCommonCacheCacheLoader_fromWithComGoogleCommonBaseSupplier_(id<ComGoogleCommonBaseSupplier> supplier);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheLoader *ComGoogleCommonCacheCacheLoader_asyncReloadingWithComGoogleCommonCacheCacheLoader_withJavaUtilConcurrentExecutor_(ComGoogleCommonCacheCacheLoader *loader, id<JavaUtilConcurrentExecutor> executor);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheLoader)

#endif

#if !defined (ComGoogleCommonCacheCacheLoader_UnsupportedLoadingOperationException_) && (INCLUDE_ALL_ComGoogleCommonCacheCacheLoader || defined(INCLUDE_ComGoogleCommonCacheCacheLoader_UnsupportedLoadingOperationException))
#define ComGoogleCommonCacheCacheLoader_UnsupportedLoadingOperationException_

#define RESTRICT_JavaLangUnsupportedOperationException 1
#define INCLUDE_JavaLangUnsupportedOperationException 1
#include "../../../../../java/lang/UnsupportedOperationException.h"

@class JavaLangThrowable;

@interface ComGoogleCommonCacheCacheLoader_UnsupportedLoadingOperationException : JavaLangUnsupportedOperationException

#pragma mark Package-Private

- (instancetype)init;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheLoader_UnsupportedLoadingOperationException)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheLoader_UnsupportedLoadingOperationException_init(ComGoogleCommonCacheCacheLoader_UnsupportedLoadingOperationException *self);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheLoader_UnsupportedLoadingOperationException *new_ComGoogleCommonCacheCacheLoader_UnsupportedLoadingOperationException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCacheCacheLoader_UnsupportedLoadingOperationException *create_ComGoogleCommonCacheCacheLoader_UnsupportedLoadingOperationException_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheLoader_UnsupportedLoadingOperationException)

#endif

#if !defined (ComGoogleCommonCacheCacheLoader_InvalidCacheLoadException_) && (INCLUDE_ALL_ComGoogleCommonCacheCacheLoader || defined(INCLUDE_ComGoogleCommonCacheCacheLoader_InvalidCacheLoadException))
#define ComGoogleCommonCacheCacheLoader_InvalidCacheLoadException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "../../../../../java/lang/RuntimeException.h"

@class JavaLangThrowable;

@interface ComGoogleCommonCacheCacheLoader_InvalidCacheLoadException : JavaLangRuntimeException

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)message;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1
                     withBoolean:(jboolean)arg2
                     withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheLoader_InvalidCacheLoadException)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheLoader_InvalidCacheLoadException_initWithNSString_(ComGoogleCommonCacheCacheLoader_InvalidCacheLoadException *self, NSString *message);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheLoader_InvalidCacheLoadException *new_ComGoogleCommonCacheCacheLoader_InvalidCacheLoadException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCacheCacheLoader_InvalidCacheLoadException *create_ComGoogleCommonCacheCacheLoader_InvalidCacheLoadException_initWithNSString_(NSString *message);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheLoader_InvalidCacheLoadException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCacheCacheLoader")
