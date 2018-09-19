//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/internal/util/collections/HashCodeAndEqualsMockWrapper.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalUtilCollectionsHashCodeAndEqualsMockWrapper")
#ifdef RESTRICT_OrgMockitoInternalUtilCollectionsHashCodeAndEqualsMockWrapper
#define INCLUDE_ALL_OrgMockitoInternalUtilCollectionsHashCodeAndEqualsMockWrapper 0
#else
#define INCLUDE_ALL_OrgMockitoInternalUtilCollectionsHashCodeAndEqualsMockWrapper 1
#endif
#undef RESTRICT_OrgMockitoInternalUtilCollectionsHashCodeAndEqualsMockWrapper

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalUtilCollectionsHashCodeAndEqualsMockWrapper_) && (INCLUDE_ALL_OrgMockitoInternalUtilCollectionsHashCodeAndEqualsMockWrapper || defined(INCLUDE_OrgMockitoInternalUtilCollectionsHashCodeAndEqualsMockWrapper))
#define OrgMockitoInternalUtilCollectionsHashCodeAndEqualsMockWrapper_

/*!
 @brief hashCode and equals safe mock wrapper.
 <p>
      It doesn't use the actual mock <code>Object.hashCode</code> and <code>Object.equals</code> method as they might
      throw an NPE if those method cannot be stubbed <em>even internally</em>.
  </p>
  
 <p>
      Instead the strategy is :     
 <ul>
          <li>For hashCode : <strong>use <code>System.identityHashCode</code></strong></li>
          <li>For equals : <strong>use the object reference equality</strong></li>
      </ul>
  </p>
 - seealso: HashCodeAndEqualsSafeSet
 */
@interface OrgMockitoInternalUtilCollectionsHashCodeAndEqualsMockWrapper : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithId:(id)mockInstance;

- (jboolean)isEqual:(id)o;

- (id)get;

- (NSUInteger)hash;

+ (OrgMockitoInternalUtilCollectionsHashCodeAndEqualsMockWrapper *)ofWithId:(id)mock;

- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilCollectionsHashCodeAndEqualsMockWrapper)

FOUNDATION_EXPORT void OrgMockitoInternalUtilCollectionsHashCodeAndEqualsMockWrapper_initWithId_(OrgMockitoInternalUtilCollectionsHashCodeAndEqualsMockWrapper *self, id mockInstance);

FOUNDATION_EXPORT OrgMockitoInternalUtilCollectionsHashCodeAndEqualsMockWrapper *new_OrgMockitoInternalUtilCollectionsHashCodeAndEqualsMockWrapper_initWithId_(id mockInstance) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalUtilCollectionsHashCodeAndEqualsMockWrapper *create_OrgMockitoInternalUtilCollectionsHashCodeAndEqualsMockWrapper_initWithId_(id mockInstance);

FOUNDATION_EXPORT OrgMockitoInternalUtilCollectionsHashCodeAndEqualsMockWrapper *OrgMockitoInternalUtilCollectionsHashCodeAndEqualsMockWrapper_ofWithId_(id mock);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilCollectionsHashCodeAndEqualsMockWrapper)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalUtilCollectionsHashCodeAndEqualsMockWrapper")
