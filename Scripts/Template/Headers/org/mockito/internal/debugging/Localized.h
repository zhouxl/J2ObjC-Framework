//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/internal/debugging/Localized.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalDebuggingLocalized")
#ifdef RESTRICT_OrgMockitoInternalDebuggingLocalized
#define INCLUDE_ALL_OrgMockitoInternalDebuggingLocalized 0
#else
#define INCLUDE_ALL_OrgMockitoInternalDebuggingLocalized 1
#endif
#undef RESTRICT_OrgMockitoInternalDebuggingLocalized

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalDebuggingLocalized_) && (INCLUDE_ALL_OrgMockitoInternalDebuggingLocalized || defined(INCLUDE_OrgMockitoInternalDebuggingLocalized))
#define OrgMockitoInternalDebuggingLocalized_

@protocol OrgMockitoInvocationLocation;

@interface OrgMockitoInternalDebuggingLocalized : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithId:(id)object;

- (id<OrgMockitoInvocationLocation>)getLocation;

- (id)getObject;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalDebuggingLocalized)

FOUNDATION_EXPORT void OrgMockitoInternalDebuggingLocalized_initWithId_(OrgMockitoInternalDebuggingLocalized *self, id object);

FOUNDATION_EXPORT OrgMockitoInternalDebuggingLocalized *new_OrgMockitoInternalDebuggingLocalized_initWithId_(id object) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalDebuggingLocalized *create_OrgMockitoInternalDebuggingLocalized_initWithId_(id object);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalDebuggingLocalized)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalDebuggingLocalized")
