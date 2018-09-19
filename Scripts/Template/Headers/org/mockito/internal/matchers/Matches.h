//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/Matches.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalMatchersMatches")
#ifdef RESTRICT_OrgMockitoInternalMatchersMatches
#define INCLUDE_ALL_OrgMockitoInternalMatchersMatches 0
#else
#define INCLUDE_ALL_OrgMockitoInternalMatchersMatches 1
#endif
#undef RESTRICT_OrgMockitoInternalMatchersMatches

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalMatchersMatches_) && (INCLUDE_ALL_OrgMockitoInternalMatchersMatches || defined(INCLUDE_OrgMockitoInternalMatchersMatches))
#define OrgMockitoInternalMatchersMatches_

#define RESTRICT_OrgMockitoArgumentMatcher 1
#define INCLUDE_OrgMockitoArgumentMatcher 1
#include "../../../../org/mockito/ArgumentMatcher.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../java/io/Serializable.h"

@protocol OrgHamcrestDescription;

@interface OrgMockitoInternalMatchersMatches : OrgMockitoArgumentMatcher < JavaIoSerializable >

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString *)regex;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesWithId:(id)actual;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersMatches)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersMatches_initWithNSString_(OrgMockitoInternalMatchersMatches *self, NSString *regex);

FOUNDATION_EXPORT OrgMockitoInternalMatchersMatches *new_OrgMockitoInternalMatchersMatches_initWithNSString_(NSString *regex) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalMatchersMatches *create_OrgMockitoInternalMatchersMatches_initWithNSString_(NSString *regex);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersMatches)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalMatchersMatches")
