//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/internal/util/collections/ListUtil.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalUtilCollectionsListUtil")
#ifdef RESTRICT_OrgMockitoInternalUtilCollectionsListUtil
#define INCLUDE_ALL_OrgMockitoInternalUtilCollectionsListUtil 0
#else
#define INCLUDE_ALL_OrgMockitoInternalUtilCollectionsListUtil 1
#endif
#undef RESTRICT_OrgMockitoInternalUtilCollectionsListUtil

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalUtilCollectionsListUtil_) && (INCLUDE_ALL_OrgMockitoInternalUtilCollectionsListUtil || defined(INCLUDE_OrgMockitoInternalUtilCollectionsListUtil))
#define OrgMockitoInternalUtilCollectionsListUtil_

@class JavaUtilLinkedList;
@protocol JavaUtilCollection;
@protocol OrgMockitoInternalUtilCollectionsListUtil_Filter;

@interface OrgMockitoInternalUtilCollectionsListUtil : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

+ (JavaUtilLinkedList *)filterWithJavaUtilCollection:(id<JavaUtilCollection>)collection
withOrgMockitoInternalUtilCollectionsListUtil_Filter:(id<OrgMockitoInternalUtilCollectionsListUtil_Filter>)filter;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilCollectionsListUtil)

FOUNDATION_EXPORT void OrgMockitoInternalUtilCollectionsListUtil_init(OrgMockitoInternalUtilCollectionsListUtil *self);

FOUNDATION_EXPORT OrgMockitoInternalUtilCollectionsListUtil *new_OrgMockitoInternalUtilCollectionsListUtil_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalUtilCollectionsListUtil *create_OrgMockitoInternalUtilCollectionsListUtil_init(void);

FOUNDATION_EXPORT JavaUtilLinkedList *OrgMockitoInternalUtilCollectionsListUtil_filterWithJavaUtilCollection_withOrgMockitoInternalUtilCollectionsListUtil_Filter_(id<JavaUtilCollection> collection, id<OrgMockitoInternalUtilCollectionsListUtil_Filter> filter);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilCollectionsListUtil)

#endif

#if !defined (OrgMockitoInternalUtilCollectionsListUtil_Filter_) && (INCLUDE_ALL_OrgMockitoInternalUtilCollectionsListUtil || defined(INCLUDE_OrgMockitoInternalUtilCollectionsListUtil_Filter))
#define OrgMockitoInternalUtilCollectionsListUtil_Filter_

@protocol OrgMockitoInternalUtilCollectionsListUtil_Filter < JavaObject >

- (jboolean)isOutWithId:(id)object;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilCollectionsListUtil_Filter)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilCollectionsListUtil_Filter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalUtilCollectionsListUtil")
