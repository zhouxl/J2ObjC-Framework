//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/cache/CacheBuilder.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCacheCacheBuilder")
#ifdef RESTRICT_ComGoogleCommonCacheCacheBuilder
#define INCLUDE_ALL_ComGoogleCommonCacheCacheBuilder 0
#else
#define INCLUDE_ALL_ComGoogleCommonCacheCacheBuilder 1
#endif
#undef RESTRICT_ComGoogleCommonCacheCacheBuilder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCacheCacheBuilder_) && (INCLUDE_ALL_ComGoogleCommonCacheCacheBuilder || defined(INCLUDE_ComGoogleCommonCacheCacheBuilder))
#define ComGoogleCommonCacheCacheBuilder_

@class ComGoogleCommonBaseEquivalence;
@class ComGoogleCommonBaseTicker;
@class ComGoogleCommonCacheCacheBuilderSpec;
@class ComGoogleCommonCacheCacheLoader;
@class ComGoogleCommonCacheCacheStats;
@class ComGoogleCommonCacheLocalCache_Strength;
@class JavaUtilConcurrentTimeUnit;
@protocol ComGoogleCommonBaseSupplier;
@protocol ComGoogleCommonCacheCache;
@protocol ComGoogleCommonCacheLoadingCache;
@protocol ComGoogleCommonCacheRemovalListener;
@protocol ComGoogleCommonCacheWeigher;

/*!
 @brief A builder of <code>LoadingCache</code> and <code>Cache</code> instances having any combination of the
  following features: 
 <ul>
    <li>automatic loading of entries into the cache
    <li>least-recently-used eviction when a maximum size is exceeded
    <li>time-based expiration of entries, measured since last access or last write
    <li>keys automatically wrapped in weak references
    <li>values automatically wrapped in weak or soft
  references
    <li>notification of evicted (or otherwise removed) entries
    <li>accumulation of cache access statistics 
 </ul>
 <p>These features are all optional; caches can be created using all or none of them.
 By default
  cache instances created by <code>CacheBuilder</code> will not perform any type of eviction. 
 <p>Usage example: 
 @code
 LoadingCache<Key, Graph> graphs = CacheBuilder.newBuilder()
      .maximumSize(10000)
      .expireAfterWrite(Duration.ofMinutes(10))
      .removalListener(MY_LISTENER)
      .build(
          new CacheLoader<Key, Graph>() {
            public Graph load(Key key) throws AnyException {
              return createExpensiveGraph(key);
            }
          }); 
 
@endcode
  
 <p>Or equivalently, 
 @code
 // In real life this would come from a command-line flag or config file
  String spec = "maximumSize=10000,expireAfterWrite=10m";
  LoadingCache<Key, Graph> graphs = CacheBuilder.from(spec)
      .removalListener(MY_LISTENER)
      .build(
          new CacheLoader<Key, Graph>() {
            public Graph load(Key key) throws AnyException {
              return createExpensiveGraph(key);
            }
          }); 
 
@endcode
  
 <p>The returned cache is implemented as a hash table with similar performance characteristics to 
 <code>ConcurrentHashMap</code>. It implements all optional operations of the <code>LoadingCache</code> and 
 <code>Cache</code> interfaces. The <code>asMap</code> view (and its collection views) have <i>weakly
  consistent iterators</i>. This means that they are safe for concurrent use, but if other threads
  modify the cache after the iterator is created, it is undefined which of these changes, if any,
  are reflected in that iterator. These iterators never throw <code>ConcurrentModificationException</code>
 .
  
 <p><b>Note:</b> by default, the returned cache uses equality comparisons (the <code>equals</code>
  method) to determine equality for keys or values. However, if <code>weakKeys</code>
  was specified, the cache uses identity (<code>==</code>) comparisons instead for keys.
  Likewise, if <code>weakValues</code> or <code>softValues</code> was specified, the cache uses identity
  comparisons for values. 
 <p>Entries are automatically evicted from the cache when any of maximumSize
 , maximumWeight, expireAfterWrite
 , expireAfterAccess, weakKeys
 , weakValues, or softValues are
  requested. 
 <p>If maximumSize or maximumWeight
  is requested entries may be evicted on each cache modification. 
 <p>If expireAfterWrite or expireAfterAccess
  is requested entries may be evicted on each cache modification, on occasional
  cache accesses, or on calls to <code>Cache.cleanUp</code>. Expired entries may be counted by <code>Cache.size</code>
 , but will never be visible to read or write operations. 
 <p>If weakKeys, weakValues, or softValues
  are requested, it is possible for a key or value present in the cache to
  be reclaimed by the garbage collector. Entries with reclaimed keys or values may be removed from
  the cache on each cache modification, on occasional cache accesses, or on calls to <code>Cache.cleanUp</code>
 ; such entries may be counted in <code>Cache.size</code>, but will never be visible to
  read or write operations. 
 <p>Certain cache configurations will result in the accrual of periodic maintenance tasks which
  will be performed during write operations, or during occasional read operations in the absence of
  writes. The <code>Cache.cleanUp</code> method of the returned cache will also perform maintenance, but
  calling it should not be necessary with a high throughput cache. Only caches built with 
 removalListener, expireAfterWrite,
  expireAfterAccess, weakKeys, weakValues
 , or softValues perform periodic maintenance. 
 <p>The caches produced by <code>CacheBuilder</code> are serializable, and the deserialized caches
  retain all the configuration properties of the original cache. Note that the serialized form does 
 <i>not</i> include cache contents, but only configuration. 
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/CachesExplained">
 caching</a> for a higher-level
  explanation.
 @author Charles Fry
 @author Kevin Bourrillion
 @since 10.0
 */
@interface ComGoogleCommonCacheCacheBuilder : NSObject {
 @public
  jboolean strictParsing_;
  jint initialCapacity_;
  jint concurrencyLevel_;
  jlong maximumSize_;
  jlong maximumWeight_;
  id<ComGoogleCommonCacheWeigher> weigher_;
  ComGoogleCommonCacheLocalCache_Strength *keyStrength_;
  ComGoogleCommonCacheLocalCache_Strength *valueStrength_;
  jlong expireAfterWriteNanos_;
  jlong expireAfterAccessNanos_;
  jlong refreshNanos_;
  ComGoogleCommonBaseEquivalence *keyEquivalence_;
  ComGoogleCommonBaseEquivalence *valueEquivalence_;
  id<ComGoogleCommonCacheRemovalListener> removalListener_;
  ComGoogleCommonBaseTicker *ticker_;
  id<ComGoogleCommonBaseSupplier> statsCounterSupplier_;
}
@property (readonly, class, strong) id<ComGoogleCommonBaseSupplier> NULL_STATS_COUNTER NS_SWIFT_NAME(NULL_STATS_COUNTER);
@property (readonly, class, strong) ComGoogleCommonCacheCacheStats *EMPTY_STATS NS_SWIFT_NAME(EMPTY_STATS);
@property (readonly, class, strong) id<ComGoogleCommonBaseSupplier> CACHE_STATS_COUNTER NS_SWIFT_NAME(CACHE_STATS_COUNTER);
@property (readonly, class, strong) ComGoogleCommonBaseTicker *NULL_TICKER NS_SWIFT_NAME(NULL_TICKER);
@property (readonly, class) jint UNSET_INT NS_SWIFT_NAME(UNSET_INT);

+ (id<ComGoogleCommonBaseSupplier>)NULL_STATS_COUNTER;

+ (ComGoogleCommonCacheCacheStats *)EMPTY_STATS;

+ (id<ComGoogleCommonBaseSupplier>)CACHE_STATS_COUNTER;

+ (ComGoogleCommonBaseTicker *)NULL_TICKER;

+ (jint)UNSET_INT;

#pragma mark Public

/*!
 @brief Builds a cache which does not automatically load values when keys are requested.
 <p>Consider <code>build(CacheLoader)</code> instead, if it is feasible to implement a <code>CacheLoader</code>
 .
  
 <p>This method does not alter the state of this <code>CacheBuilder</code> instance, so it can be
  invoked again to create multiple independent caches.
 @return a cache having the requested features
 @since 11.0
 */
- (id<ComGoogleCommonCacheCache>)build;

/*!
 @brief Builds a cache, which either returns an already-loaded value for a given key or atomically
  computes or retrieves it using the supplied <code>CacheLoader</code>.If another thread is currently
  loading the value for this key, simply waits for that thread to finish and returns its loaded
  value.
 Note that multiple threads can concurrently load values for distinct keys. 
 <p>This method does not alter the state of this <code>CacheBuilder</code> instance, so it can be
  invoked again to create multiple independent caches.
 @param loader the cache loader used to obtain new values
 @return a cache having the requested features
 */
- (id<ComGoogleCommonCacheLoadingCache>)buildWithComGoogleCommonCacheCacheLoader:(ComGoogleCommonCacheCacheLoader *)loader;

/*!
 @brief Guides the allowed concurrency among update operations.Used as a hint for internal sizing.
 The
  table is internally partitioned to try to permit the indicated number of concurrent updates
  without contention. Because assignment of entries to these partitions is not necessarily
  uniform, the actual concurrency observed may vary. Ideally, you should choose a value to
  accommodate as many threads as will ever concurrently modify the table. Using a significantly
  higher value than you need can waste space and time, and a significantly lower value can lead
  to thread contention. But overestimates and underestimates within an order of magnitude do not
  usually have much noticeable impact. A value of one permits only one thread to modify the cache
  at a time, but since read operations and cache loading computations can proceed concurrently,
  this still yields higher concurrency than full synchronization. 
 <p>Defaults to 4. <b>Note:</b>The default may change in the future. If you care about this
  value, you should always choose it explicitly. 
 <p>The current implementation uses the concurrency level to create a fixed number of hashtable
  segments, each governed by its own write lock. The segment lock is taken once for each explicit
  write, and twice for each cache loading computation (once prior to loading the new value, and
  once after loading completes). Much internal cache management is performed at the segment
  granularity. For example, access queues and write queues are kept per segment when they are
  required by the selected eviction algorithm. As such, when writing unit tests it is not
  uncommon to specify <code>concurrencyLevel(1)</code> in order to achieve more deterministic eviction
  behavior. 
 <p>Note that future implementations may abandon segment locking in favor of more advanced
  concurrency controls.
 @return this <code>CacheBuilder</code> instance (for chaining)
 @throw IllegalArgumentExceptionif <code>concurrencyLevel</code> is nonpositive
 @throw IllegalStateExceptionif a concurrency level was already set
 */
- (ComGoogleCommonCacheCacheBuilder *)concurrencyLevelWithInt:(jint)concurrencyLevel;

/*!
 @brief Specifies that each entry should be automatically removed from the cache once a fixed duration
  has elapsed after the entry's creation, the most recent replacement of its value, or its last
  access.Access time is reset by all cache read and write operations (including <code>Cache.asMap().get(Object)</code>
  and <code>Cache.asMap().put(K, V)</code>), but not by operations on the
  collection-views of <code>Cache.asMap</code>.
 <p>When <code>duration</code> is zero, this method hands off to <code>maximumSize</code>
 <code>(0)</code>, ignoring any otherwise-specified maximum size or weight. This can be
  useful in testing, or to disable caching temporarily without a code change. 
 <p>Expired entries may be counted in <code>Cache.size</code>, but will never be visible to read or
  write operations. Expired entries are cleaned up as part of the routine maintenance described
  in the class javadoc. 
 <p>If you can represent the duration as a <code>java.time.Duration</code> (which should be preferred
  when feasible), use <code>expireAfterAccess(Duration)</code> instead.
 @param duration the length of time after an entry is last accessed that it should be      automatically removed
 @param unit the unit that <code>duration</code>  is expressed in
 @return this <code>CacheBuilder</code> instance (for chaining)
 @throw IllegalArgumentExceptionif <code>duration</code> is negative
 @throw IllegalStateExceptionif the time to idle or time to live was already set
 */
- (ComGoogleCommonCacheCacheBuilder *)expireAfterAccessWithLong:(jlong)duration
                                 withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @brief Specifies that each entry should be automatically removed from the cache once a fixed duration
  has elapsed after the entry's creation, or the most recent replacement of its value.
 <p>When <code>duration</code> is zero, this method hands off to <code>maximumSize</code>
 <code>(0)</code>, ignoring any otherwise-specified maximum size or weight. This can be
  useful in testing, or to disable caching temporarily without a code change. 
 <p>Expired entries may be counted in <code>Cache.size</code>, but will never be visible to read or
  write operations. Expired entries are cleaned up as part of the routine maintenance described
  in the class javadoc. 
 <p>If you can represent the duration as a <code>java.time.Duration</code> (which should be preferred
  when feasible), use <code>expireAfterWrite(Duration)</code> instead.
 @param duration the length of time after an entry is created that it should be automatically      removed
 @param unit the unit that <code>duration</code>  is expressed in
 @return this <code>CacheBuilder</code> instance (for chaining)
 @throw IllegalArgumentExceptionif <code>duration</code> is negative
 @throw IllegalStateExceptionif the time to live or time to idle was already set
 */
- (ComGoogleCommonCacheCacheBuilder *)expireAfterWriteWithLong:(jlong)duration
                                withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @brief Constructs a new <code>CacheBuilder</code> instance with the settings specified in <code>spec</code>.
 @since 12.0
 */
+ (ComGoogleCommonCacheCacheBuilder *)fromWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec;

/*!
 @brief Constructs a new <code>CacheBuilder</code> instance with the settings specified in <code>spec</code>.
 This is especially useful for command-line configuration of a <code>CacheBuilder</code>.
 @param spec a String in the format specified by <code>CacheBuilderSpec</code>
 @since 12.0
 */
+ (ComGoogleCommonCacheCacheBuilder *)fromWithNSString:(NSString *)spec;

/*!
 @brief Sets the minimum total size for the internal hash tables.For example, if the initial capacity
  is <code>60</code>, and the concurrency level is <code>8</code>, then eight segments are created, each
  having a hash table of size eight.
 Providing a large enough estimate at construction time
  avoids the need for expensive resizing operations later, but setting this value unnecessarily
  high wastes memory.
 @return this <code>CacheBuilder</code> instance (for chaining)
 @throw IllegalArgumentExceptionif <code>initialCapacity</code> is negative
 @throw IllegalStateExceptionif an initial capacity was already set
 */
- (ComGoogleCommonCacheCacheBuilder *)initialCapacityWithInt:(jint)initialCapacity OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Specifies the maximum number of entries the cache may contain.
 <p>Note that the cache <b>may evict an entry before this limit is exceeded</b>. For example, in
  the current implementation, when <code>concurrencyLevel</code> is greater than <code>1</code>, each
  resulting segment inside the cache <i>independently</i> limits its own size to approximately 
 <code>maximumSize / concurrencyLevel</code>.
  
 <p>When eviction is necessary, the cache evicts entries that are less likely to be used again.
  For example, the cache may evict an entry because it hasn't been used recently or very often. 
 <p>If <code>maximumSize</code> is zero, elements will be evicted immediately after being loaded into
  cache. This can be useful in testing, or to disable caching temporarily. 
 <p>This feature cannot be used in conjunction with <code>maximumWeight</code>.
 @param maximumSize the maximum size of the cache
 @return this <code>CacheBuilder</code> instance (for chaining)
 @throw IllegalArgumentExceptionif <code>maximumSize</code> is negative
 @throw IllegalStateExceptionif a maximum size or weight was already set
 */
- (ComGoogleCommonCacheCacheBuilder *)maximumSizeWithLong:(jlong)maximumSize;

/*!
 @brief Specifies the maximum weight of entries the cache may contain.Weight is determined using the 
 <code>Weigher</code> specified with <code>weigher</code>, and use of this method requires a
  corresponding call to <code>weigher</code> prior to calling <code>build</code>.
 <p>Note that the cache <b>may evict an entry before this limit is exceeded</b>. For example, in
  the current implementation, when <code>concurrencyLevel</code> is greater than <code>1</code>, each
  resulting segment inside the cache <i>independently</i> limits its own weight to approximately 
 <code>maximumWeight / concurrencyLevel</code>.
  
 <p>When eviction is necessary, the cache evicts entries that are less likely to be used again.
  For example, the cache may evict an entry because it hasn't been used recently or very often. 
 <p>If <code>maximumWeight</code> is zero, elements will be evicted immediately after being loaded
  into cache. This can be useful in testing, or to disable caching temporarily. 
 <p>Note that weight is only used to determine whether the cache is over capacity; it has no
  effect on selecting which entry should be evicted next. 
 <p>This feature cannot be used in conjunction with <code>maximumSize</code>.
 @param maximumWeight the maximum total weight of entries the cache may contain
 @return this <code>CacheBuilder</code> instance (for chaining)
 @throw IllegalArgumentExceptionif <code>maximumWeight</code> is negative
 @throw IllegalStateExceptionif a maximum weight or size was already set
 @since 11.0
 */
- (ComGoogleCommonCacheCacheBuilder *)maximumWeightWithLong:(jlong)maximumWeight;

/*!
 @brief Constructs a new <code>CacheBuilder</code> instance with default settings, including strong keys,
  strong values, and no automatic eviction of any kind.
 <p>Note that while this return type is <code>CacheBuilder<Object, Object></code>, type parameters on
  the <code>build</code> methods allow you to create a cache of any key and value type desired.
 */
+ (ComGoogleCommonCacheCacheBuilder *)newBuilder OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Enable the accumulation of <code>CacheStats</code> during the operation of the cache.Without this 
 <code>Cache.stats</code> will return zero for all statistics.
 Note that recording stats requires
  bookkeeping to be performed with each operation, and thus imposes a performance penalty on
  cache operation.
 @return this <code>CacheBuilder</code> instance (for chaining)
 @since 12.0 (previously, stats collection was automatic)
 */
- (ComGoogleCommonCacheCacheBuilder *)recordStats;

/*!
 @brief Specifies that active entries are eligible for automatic refresh once a fixed duration has
  elapsed after the entry's creation, or the most recent replacement of its value.The semantics
  of refreshes are specified in <code>LoadingCache.refresh</code>, and are performed by calling <code>CacheLoader.reload</code>
 .
 <p>As the default implementation of <code>CacheLoader.reload</code> is synchronous, it is
  recommended that users of this method override <code>CacheLoader.reload</code> with an asynchronous
  implementation; otherwise refreshes will be performed during unrelated cache read and write
  operations. 
 <p>Currently automatic refreshes are performed when the first stale request for an entry
  occurs. The request triggering refresh will make a blocking call to <code>CacheLoader.reload</code>
  and immediately return the new value if the returned future is complete, and the old value
  otherwise. 
 <p><b>Note:</b> <i>all exceptions thrown during refresh will be logged and then swallowed</i>.
  
 <p>If you can represent the duration as a <code>java.time.Duration</code> (which should be preferred
  when feasible), use <code>refreshAfterWrite(Duration)</code> instead.
 @param duration the length of time after an entry is created that it should be considered      stale, and thus eligible for refresh
 @param unit the unit that <code>duration</code>  is expressed in
 @return this <code>CacheBuilder</code> instance (for chaining)
 @throw IllegalArgumentExceptionif <code>duration</code> is negative
 @throw IllegalStateExceptionif the refresh interval was already set
 @since 11.0
 */
- (ComGoogleCommonCacheCacheBuilder *)refreshAfterWriteWithLong:(jlong)duration
                                 withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @brief Specifies a listener instance that caches should notify each time an entry is removed for any 
 reason.Each cache created by this builder will invoke this listener
  as part of the routine maintenance described in the class documentation above.
 <p><b>Warning:</b> after invoking this method, do not continue to use <i>this</i> cache builder
  reference; instead use the reference this method <i>returns</i>. At runtime, these point to the
  same instance, but only the returned reference has the correct generic type information so as
  to ensure type safety. For best results, use the standard method-chaining idiom illustrated in
  the class documentation above, configuring a builder and building your cache in a single
  statement. Failure to heed this advice can result in a <code>ClassCastException</code> being thrown
  by a cache operation at some <i>undefined</i> point in the future. 
 <p><b>Warning:</b> any exception thrown by <code>listener</code> will <i>not</i> be propagated to
  the <code>Cache</code> user, only logged via a <code>Logger</code>.
 @return the cache builder reference that should be used instead of <code>this</code> for any
      remaining configuration and cache building
 @return this <code>CacheBuilder</code> instance (for chaining)
 @throw IllegalStateExceptionif a removal listener was already set
 */
- (ComGoogleCommonCacheCacheBuilder *)removalListenerWithComGoogleCommonCacheRemovalListener:(id<ComGoogleCommonCacheRemovalListener>)listener;

/*!
 @brief Specifies that each value (not key) stored in the cache should be wrapped in a <code>SoftReference</code>
  (by default, strong references are used).Softly-referenced objects will be
  garbage-collected in a <i>globally</i> least-recently-used manner, in response to memory
  demand.
 <p><b>Warning:</b> in most circumstances it is better to set a per-cache size
  instead of using soft references. You should only use this
  method if you are well familiar with the practical consequences of soft references. 
 <p><b>Note:</b> when this method is used, the resulting cache will use identity (<code>==</code>)
  comparison to determine equality of values. 
 <p>Entries with values that have been garbage collected may be counted in <code>Cache.size</code>,
  but will never be visible to read or write operations; such entries are cleaned up as part of
  the routine maintenance described in the class javadoc.
 @return this <code>CacheBuilder</code> instance (for chaining)
 @throw IllegalStateExceptionif the value strength was already set
 */
- (ComGoogleCommonCacheCacheBuilder *)softValues;

/*!
 @brief Specifies a nanosecond-precision time source for this cache.By default, <code>System.nanoTime</code>
  is used.
 <p>The primary intent of this method is to facilitate testing of caches with a fake or mock
  time source.
 @return this <code>CacheBuilder</code> instance (for chaining)
 @throw IllegalStateExceptionif a ticker was already set
 */
- (ComGoogleCommonCacheCacheBuilder *)tickerWithComGoogleCommonBaseTicker:(ComGoogleCommonBaseTicker *)ticker;

/*!
 @brief Returns a string representation for this CacheBuilder instance.The exact form of the returned
  string is not specified.
 */
- (NSString *)description;

/*!
 @brief Specifies that each key (not value) stored in the cache should be wrapped in a <code>WeakReference</code>
  (by default, strong references are used).
 <p><b>Warning:</b> when this method is used, the resulting cache will use identity (<code>==</code>)
  comparison to determine equality of keys. Its <code>Cache.asMap</code> view will therefore
  technically violate the <code>Map</code> specification (in the same way that <code>IdentityHashMap</code>
  does). 
 <p>Entries with keys that have been garbage collected may be counted in <code>Cache.size</code>, but
  will never be visible to read or write operations; such entries are cleaned up as part of the
  routine maintenance described in the class javadoc.
 @return this <code>CacheBuilder</code> instance (for chaining)
 @throw IllegalStateExceptionif the key strength was already set
 */
- (ComGoogleCommonCacheCacheBuilder *)weakKeys;

/*!
 @brief Specifies that each value (not key) stored in the cache should be wrapped in a <code>WeakReference</code>
  (by default, strong references are used).
 <p>Weak values will be garbage collected once they are weakly reachable. This makes them a poor
  candidate for caching; consider <code>softValues</code> instead. 
 <p><b>Note:</b> when this method is used, the resulting cache will use identity (<code>==</code>)
  comparison to determine equality of values. 
 <p>Entries with values that have been garbage collected may be counted in <code>Cache.size</code>,
  but will never be visible to read or write operations; such entries are cleaned up as part of
  the routine maintenance described in the class javadoc.
 @return this <code>CacheBuilder</code> instance (for chaining)
 @throw IllegalStateExceptionif the value strength was already set
 */
- (ComGoogleCommonCacheCacheBuilder *)weakValues;

/*!
 @brief Specifies the weigher to use in determining the weight of entries.Entry weight is taken into
  consideration by <code>maximumWeight(long)</code> when determining which entries to evict, and use
  of this method requires a corresponding call to <code>maximumWeight(long)</code> prior to calling 
 <code>build</code>.
 Weights are measured and recorded when entries are inserted into the cache, and
  are thus effectively static during the lifetime of a cache entry. 
 <p>When the weight of an entry is zero it will not be considered for size-based eviction
  (though it still may be evicted by other means). 
 <p><b>Important note:</b> Instead of returning <em>this</em> as a <code>CacheBuilder</code>
  instance, this method returns <code>CacheBuilder<K1, V1></code>. From this point on, either the
  original reference or the returned reference may be used to complete configuration and build
  the cache, but only the "generic" one is type-safe. That is, it will properly prevent you from
  building caches whose key or value types are incompatible with the types accepted by the
  weigher already provided; the <code>CacheBuilder</code> type cannot do this. For best results,
  simply use the standard method-chaining idiom, as illustrated in the documentation at top,
  configuring a <code>CacheBuilder</code> and building your <code>Cache</code> all in a single statement. 
 <p><b>Warning:</b> if you ignore the above advice, and use this <code>CacheBuilder</code> to build a
  cache whose key or value type is incompatible with the weigher, you will likely experience a 
 <code>ClassCastException</code> at some <i>undefined</i> point in the future.
 @param weigher the weigher to use in calculating the weight of cache entries
 @return this <code>CacheBuilder</code> instance (for chaining)
 @throw IllegalArgumentExceptionif <code>size</code> is negative
 @throw IllegalStateExceptionif a maximum size was already set
 @since 11.0
 */
- (ComGoogleCommonCacheCacheBuilder *)weigherWithComGoogleCommonCacheWeigher:(id<ComGoogleCommonCacheWeigher>)weigher;

#pragma mark Package-Private

- (jint)getConcurrencyLevel;

- (jlong)getExpireAfterAccessNanos;

- (jlong)getExpireAfterWriteNanos;

- (jint)getInitialCapacity;

- (ComGoogleCommonBaseEquivalence *)getKeyEquivalence;

- (ComGoogleCommonCacheLocalCache_Strength *)getKeyStrength;

- (jlong)getMaximumWeight;

- (jlong)getRefreshNanos;

- (id<ComGoogleCommonCacheRemovalListener>)getRemovalListener;

- (id<ComGoogleCommonBaseSupplier>)getStatsCounterSupplier;

- (ComGoogleCommonBaseTicker *)getTickerWithBoolean:(jboolean)recordsTime;

- (ComGoogleCommonBaseEquivalence *)getValueEquivalence;

- (ComGoogleCommonCacheLocalCache_Strength *)getValueStrength;

- (id<ComGoogleCommonCacheWeigher>)getWeigher;

- (jboolean)isRecordingStats;

/*!
 @brief Sets a custom <code>Equivalence</code> strategy for comparing keys.
 <p>By default, the cache uses <code>Equivalence.identity</code> to determine key equality when 
 <code>weakKeys</code> is specified, and <code>Equivalence.equals()</code> otherwise.
 @return this <code>CacheBuilder</code> instance (for chaining)
 */
- (ComGoogleCommonCacheCacheBuilder *)keyEquivalenceWithComGoogleCommonBaseEquivalence:(ComGoogleCommonBaseEquivalence *)equivalence;

/*!
 @brief Enables lenient parsing.Useful for tests and spec parsing.
 @return this <code>CacheBuilder</code> instance (for chaining)
 */
- (ComGoogleCommonCacheCacheBuilder *)lenientParsing;

- (ComGoogleCommonCacheCacheBuilder *)setKeyStrengthWithComGoogleCommonCacheLocalCache_Strength:(ComGoogleCommonCacheLocalCache_Strength *)strength;

- (ComGoogleCommonCacheCacheBuilder *)setValueStrengthWithComGoogleCommonCacheLocalCache_Strength:(ComGoogleCommonCacheLocalCache_Strength *)strength;

/*!
 @brief Sets a custom <code>Equivalence</code> strategy for comparing values.
 <p>By default, the cache uses <code>Equivalence.identity</code> to determine value equality when 
 <code>weakValues</code> or <code>softValues</code> is specified, and <code>Equivalence.equals()</code>
  otherwise.
 @return this <code>CacheBuilder</code> instance (for chaining)
 */
- (ComGoogleCommonCacheCacheBuilder *)valueEquivalenceWithComGoogleCommonBaseEquivalence:(ComGoogleCommonBaseEquivalence *)equivalence;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCacheCacheBuilder)

J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilder, weigher_, id<ComGoogleCommonCacheWeigher>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilder, keyStrength_, ComGoogleCommonCacheLocalCache_Strength *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilder, valueStrength_, ComGoogleCommonCacheLocalCache_Strength *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilder, keyEquivalence_, ComGoogleCommonBaseEquivalence *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilder, valueEquivalence_, ComGoogleCommonBaseEquivalence *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilder, removalListener_, id<ComGoogleCommonCacheRemovalListener>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilder, ticker_, ComGoogleCommonBaseTicker *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilder, statsCounterSupplier_, id<ComGoogleCommonBaseSupplier>)

inline id<ComGoogleCommonBaseSupplier> ComGoogleCommonCacheCacheBuilder_get_NULL_STATS_COUNTER(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<ComGoogleCommonBaseSupplier> ComGoogleCommonCacheCacheBuilder_NULL_STATS_COUNTER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonCacheCacheBuilder, NULL_STATS_COUNTER, id<ComGoogleCommonBaseSupplier>)

inline ComGoogleCommonCacheCacheStats *ComGoogleCommonCacheCacheBuilder_get_EMPTY_STATS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonCacheCacheStats *ComGoogleCommonCacheCacheBuilder_EMPTY_STATS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonCacheCacheBuilder, EMPTY_STATS, ComGoogleCommonCacheCacheStats *)

inline id<ComGoogleCommonBaseSupplier> ComGoogleCommonCacheCacheBuilder_get_CACHE_STATS_COUNTER(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<ComGoogleCommonBaseSupplier> ComGoogleCommonCacheCacheBuilder_CACHE_STATS_COUNTER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonCacheCacheBuilder, CACHE_STATS_COUNTER, id<ComGoogleCommonBaseSupplier>)

inline ComGoogleCommonBaseTicker *ComGoogleCommonCacheCacheBuilder_get_NULL_TICKER(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonBaseTicker *ComGoogleCommonCacheCacheBuilder_NULL_TICKER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonCacheCacheBuilder, NULL_TICKER, ComGoogleCommonBaseTicker *)

inline jint ComGoogleCommonCacheCacheBuilder_get_UNSET_INT(void);
#define ComGoogleCommonCacheCacheBuilder_UNSET_INT -1
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonCacheCacheBuilder, UNSET_INT, jint)

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder *ComGoogleCommonCacheCacheBuilder_newBuilder(void);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder *ComGoogleCommonCacheCacheBuilder_fromWithComGoogleCommonCacheCacheBuilderSpec_(ComGoogleCommonCacheCacheBuilderSpec *spec);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder *ComGoogleCommonCacheCacheBuilder_fromWithNSString_(NSString *spec);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilder)

#endif

#if !defined (ComGoogleCommonCacheCacheBuilder_NullListener_) && (INCLUDE_ALL_ComGoogleCommonCacheCacheBuilder || defined(INCLUDE_ComGoogleCommonCacheCacheBuilder_NullListener))
#define ComGoogleCommonCacheCacheBuilder_NullListener_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "../../../../../java/lang/Enum.h"

#define RESTRICT_ComGoogleCommonCacheRemovalListener 1
#define INCLUDE_ComGoogleCommonCacheRemovalListener 1
#include "../../../../../com/google/common/cache/RemovalListener.h"

@class ComGoogleCommonCacheRemovalNotification;
@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, ComGoogleCommonCacheCacheBuilder_NullListener_Enum) {
  ComGoogleCommonCacheCacheBuilder_NullListener_Enum_INSTANCE = 0,
};

@interface ComGoogleCommonCacheCacheBuilder_NullListener : JavaLangEnum < ComGoogleCommonCacheRemovalListener >

@property (readonly, class, nonnull) ComGoogleCommonCacheCacheBuilder_NullListener *INSTANCE NS_SWIFT_NAME(INSTANCE);
+ (ComGoogleCommonCacheCacheBuilder_NullListener * __nonnull)INSTANCE;

#pragma mark Public

- (void)onRemovalWithComGoogleCommonCacheRemovalNotification:(ComGoogleCommonCacheRemovalNotification *)notification;

+ (ComGoogleCommonCacheCacheBuilder_NullListener *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (ComGoogleCommonCacheCacheBuilder_NullListener_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCacheCacheBuilder_NullListener)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder_NullListener *ComGoogleCommonCacheCacheBuilder_NullListener_values_[];

inline ComGoogleCommonCacheCacheBuilder_NullListener *ComGoogleCommonCacheCacheBuilder_NullListener_get_INSTANCE(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonCacheCacheBuilder_NullListener, INSTANCE)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCacheCacheBuilder_NullListener_values(void);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder_NullListener *ComGoogleCommonCacheCacheBuilder_NullListener_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder_NullListener *ComGoogleCommonCacheCacheBuilder_NullListener_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilder_NullListener)

#endif

#if !defined (ComGoogleCommonCacheCacheBuilder_OneWeigher_) && (INCLUDE_ALL_ComGoogleCommonCacheCacheBuilder || defined(INCLUDE_ComGoogleCommonCacheCacheBuilder_OneWeigher))
#define ComGoogleCommonCacheCacheBuilder_OneWeigher_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "../../../../../java/lang/Enum.h"

#define RESTRICT_ComGoogleCommonCacheWeigher 1
#define INCLUDE_ComGoogleCommonCacheWeigher 1
#include "../../../../../com/google/common/cache/Weigher.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, ComGoogleCommonCacheCacheBuilder_OneWeigher_Enum) {
  ComGoogleCommonCacheCacheBuilder_OneWeigher_Enum_INSTANCE = 0,
};

@interface ComGoogleCommonCacheCacheBuilder_OneWeigher : JavaLangEnum < ComGoogleCommonCacheWeigher >

@property (readonly, class, nonnull) ComGoogleCommonCacheCacheBuilder_OneWeigher *INSTANCE NS_SWIFT_NAME(INSTANCE);
+ (ComGoogleCommonCacheCacheBuilder_OneWeigher * __nonnull)INSTANCE;

#pragma mark Public

+ (ComGoogleCommonCacheCacheBuilder_OneWeigher *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

- (jint)weighWithId:(id)key
             withId:(id)value;

#pragma mark Package-Private

- (ComGoogleCommonCacheCacheBuilder_OneWeigher_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCacheCacheBuilder_OneWeigher)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder_OneWeigher *ComGoogleCommonCacheCacheBuilder_OneWeigher_values_[];

inline ComGoogleCommonCacheCacheBuilder_OneWeigher *ComGoogleCommonCacheCacheBuilder_OneWeigher_get_INSTANCE(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonCacheCacheBuilder_OneWeigher, INSTANCE)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCacheCacheBuilder_OneWeigher_values(void);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder_OneWeigher *ComGoogleCommonCacheCacheBuilder_OneWeigher_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder_OneWeigher *ComGoogleCommonCacheCacheBuilder_OneWeigher_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilder_OneWeigher)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCacheCacheBuilder")
