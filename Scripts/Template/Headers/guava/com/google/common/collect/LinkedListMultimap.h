//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/LinkedListMultimap.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectLinkedListMultimap")
#ifdef RESTRICT_ComGoogleCommonCollectLinkedListMultimap
#define INCLUDE_ALL_ComGoogleCommonCollectLinkedListMultimap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectLinkedListMultimap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectLinkedListMultimap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectLinkedListMultimap_) && (INCLUDE_ALL_ComGoogleCommonCollectLinkedListMultimap || defined(INCLUDE_ComGoogleCommonCollectLinkedListMultimap))
#define ComGoogleCommonCollectLinkedListMultimap_

#define RESTRICT_ComGoogleCommonCollectAbstractMultimap 1
#define INCLUDE_ComGoogleCommonCollectAbstractMultimap 1
#include "../../../../../com/google/common/collect/AbstractMultimap.h"

#define RESTRICT_ComGoogleCommonCollectListMultimap 1
#define INCLUDE_ComGoogleCommonCollectListMultimap 1
#include "../../../../../com/google/common/collect/ListMultimap.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../../java/io/Serializable.h"

@protocol ComGoogleCommonCollectMultimap;
@protocol ComGoogleCommonCollectMultiset;
@protocol JavaLangIterable;
@protocol JavaUtilIterator;
@protocol JavaUtilList;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

/*!
 @brief An implementation of <code>ListMultimap</code> that supports deterministic iteration order for both
  keys and values.The iteration order is preserved across non-distinct key values.
 For example,
  for the following multimap definition: 
 @code
 Multimap<K, V> multimap = LinkedListMultimap.create();
  multimap.put(key1, foo);
  multimap.put(key2, bar);
  multimap.put(key1, baz); 
 
@endcode
  ... the iteration order for <code>keys()</code> is <code>[key1, key2, key1]</code>, and similarly for 
 <code>entries()</code>. Unlike <code>LinkedHashMultimap</code>, the iteration order is kept consistent
  between keys, entries and values. For example, calling: 
 @code
 map.remove(key1, foo); 
 
@endcode
  
 <p>changes the entries iteration order to <code>[key2=bar, key1=baz]</code> and the key iteration
  order to <code>[key2, key1]</code>. The <code>entries()</code> iterator returns mutable map entries, and 
 <code>replaceValues</code> attempts to preserve iteration order as much as possible. 
 <p>The collections returned by <code>keySet()</code> and <code>asMap</code> iterate through the keys in
  the order they were first added to the multimap. Similarly, <code>get</code>, <code>removeAll</code>, and 
 <code>replaceValues</code> return collections that iterate through the values in the order they were
  added. The collections generated by <code>entries()</code>, <code>keys()</code>, and <code>values</code>
  iterate across the key-value mappings in the order they were added to the multimap. 
 <p>The <code>values()</code> and <code>entries()</code> methods both return a <code>List</code>, instead of
  the <code>Collection</code> specified by the <code>ListMultimap</code> interface. 
 <p>The methods <code>get</code>, <code>keySet()</code>, <code>keys()</code>, <code>values</code>, <code>entries()</code>
 , and <code>asMap</code> return collections that are views of the multimap. If the
  multimap is modified while an iteration over any of those collections is in progress, except
  through the iterator's methods, the results of the iteration are undefined. 
 <p>Keys and values may be null. All optional multimap methods are supported, and all returned
  views are modifiable. 
 <p>This class is not threadsafe when any concurrent operations update the multimap. Concurrent
  read operations will work correctly. To allow concurrent update operations, wrap your multimap
  with a call to <code>Multimaps.synchronizedListMultimap</code>.
  
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/NewCollectionTypesExplained#multimap">
  <code>Multimap</code>
 </a>.
 @author Mike Bostock
 @since 2.0
 */
@interface ComGoogleCommonCollectLinkedListMultimap : ComGoogleCommonCollectAbstractMultimap < ComGoogleCommonCollectListMultimap, JavaIoSerializable >

#pragma mark Public

- (void)clear;

- (jboolean)containsKeyWithId:(id __nullable)key;

- (jboolean)containsValueWithId:(id __nullable)value;

/*!
 @brief Creates a new, empty <code>LinkedListMultimap</code> with the default initial capacity.
 */
+ (ComGoogleCommonCollectLinkedListMultimap *)create;

/*!
 @brief Constructs an empty <code>LinkedListMultimap</code> with enough capacity to hold the specified
  number of keys without rehashing.
 @param expectedKeys the expected number of distinct keys
 @throw IllegalArgumentExceptionif <code>expectedKeys</code> is negative
 */
+ (ComGoogleCommonCollectLinkedListMultimap *)createWithInt:(jint)expectedKeys;

/*!
 @brief Constructs a <code>LinkedListMultimap</code> with the same mappings as the specified <code>Multimap</code>
 .The new multimap has the same <code>Multimap.entries()</code> iteration order as the
  input multimap.
 @param multimap the multimap whose contents are copied to this multimap
 */
+ (ComGoogleCommonCollectLinkedListMultimap *)createWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap;

/*!
 @brief <p>The iterator generated by the returned collection traverses the entries in the order they
  were added to the multimap.
 Because the entries may have duplicates and follow the insertion
  ordering, this method returns a <code>List</code>, instead of the <code>Collection</code> specified in
  the <code>ListMultimap</code> interface. 
 <p>An entry's <code>Entry.getKey</code> method always returns the same key, regardless of what
  happens subsequently. As long as the corresponding key-value mapping is not removed from the
  multimap, <code>Entry.getValue</code> returns the value from the multimap, which may change over
  time, and <code>Entry.setValue</code> modifies that value. Removing the mapping from the multimap
  does not alter the value returned by <code>getValue()</code>, though a subsequent <code>setValue()</code>
  call won't update the multimap but will lead to a revised value being returned by <code>getValue()</code>
 .
 */
- (id<JavaUtilList>)entries;

/*!
 @brief <p>If the multimap is modified while an iteration over the list is in progress (except through
  the iterator's own <code>add</code>, <code>set</code> or <code>remove</code> operations) the results of the
  iteration are undefined.
 <p>The returned list is not serializable and does not have random access.
 */
- (id<JavaUtilList>)getWithId:(id)key;

- (jboolean)isEmpty;

/*!
 @brief Stores a key-value pair in the multimap.
 @param key key to store in the multimap
 @param value value to store in the multimap
 @return <code>true</code> always
 */
- (jboolean)putWithId:(id)key
               withId:(id)value;

/*!
 @brief <p>The returned list is immutable and implements <code>java.util.RandomAccess</code>.
 */
- (id<JavaUtilList>)removeAllWithId:(id __nullable)key;

/*!
 @brief <p>If any entries for the specified <code>key</code> already exist in the multimap, their values are
  changed in-place without affecting the iteration order.
 <p>The returned list is immutable and implements <code>java.util.RandomAccess</code>.
 */
- (id<JavaUtilList>)replaceValuesWithId:(id)key
                   withJavaLangIterable:(id<JavaLangIterable>)values;

- (jint)size;

/*!
 @brief <p>The iterator generated by the returned collection traverses the values in the order they
  were added to the multimap.
 Because the values may have duplicates and follow the insertion
  ordering, this method returns a <code>List</code>, instead of the <code>Collection</code> specified in
  the <code>ListMultimap</code> interface.
 */
- (id<JavaUtilList>)values;

#pragma mark Package-Private

- (instancetype __nonnull)init;

- (id<JavaUtilMap>)createAsMap;

- (id<JavaUtilList>)createEntries;

- (id<ComGoogleCommonCollectMultiset>)createKeys;

- (id<JavaUtilSet>)createKeySet;

- (id<JavaUtilList>)createValues;

- (id<JavaUtilIterator>)entryIterator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectLinkedListMultimap)

FOUNDATION_EXPORT ComGoogleCommonCollectLinkedListMultimap *ComGoogleCommonCollectLinkedListMultimap_create(void);

FOUNDATION_EXPORT ComGoogleCommonCollectLinkedListMultimap *ComGoogleCommonCollectLinkedListMultimap_createWithInt_(jint expectedKeys);

FOUNDATION_EXPORT ComGoogleCommonCollectLinkedListMultimap *ComGoogleCommonCollectLinkedListMultimap_createWithComGoogleCommonCollectMultimap_(id<ComGoogleCommonCollectMultimap> multimap);

FOUNDATION_EXPORT void ComGoogleCommonCollectLinkedListMultimap_init(ComGoogleCommonCollectLinkedListMultimap *self);

FOUNDATION_EXPORT ComGoogleCommonCollectLinkedListMultimap *new_ComGoogleCommonCollectLinkedListMultimap_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectLinkedListMultimap *create_ComGoogleCommonCollectLinkedListMultimap_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectLinkedListMultimap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectLinkedListMultimap")
