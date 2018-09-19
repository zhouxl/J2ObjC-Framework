//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/Find.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalMatchersFind")
#ifdef RESTRICT_OrgMockitoInternalMatchersFind
#define INCLUDE_ALL_OrgMockitoInternalMatchersFind 0
#else
#define INCLUDE_ALL_OrgMockitoInternalMatchersFind 1
#endif
#undef RESTRICT_OrgMockitoInternalMatchersFind

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalMatchersFind_) && (INCLUDE_ALL_OrgMockitoInternalMatchersFind || defined(INCLUDE_OrgMockitoInternalMatchersFind))
#define OrgMockitoInternalMatchersFind_

#define RESTRICT_OrgMockitoArgumentMatcher 1
#define INCLUDE_OrgMockitoArgumentMatcher 1
#include "../../../../org/mockito/ArgumentMatcher.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../java/io/Serializable.h"

@protocol OrgHamcrestDescription;

@interface OrgMockitoInternalMatchersFind : OrgMockitoArgumentMatcher < JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)regex;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesWithId:(id)actual;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersFind)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersFind_initWithNSString_(OrgMockitoInternalMatchersFind *self, NSString *regex);

FOUNDATION_EXPORT OrgMockitoInternalMatchersFind *new_OrgMockitoInternalMatchersFind_initWithNSString_(NSString *regex) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalMatchersFind *create_OrgMockitoInternalMatchersFind_initWithNSString_(NSString *regex);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersFind)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalMatchersFind")
