//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/internal/progress/SequenceNumber.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalProgressSequenceNumber")
#ifdef RESTRICT_OrgMockitoInternalProgressSequenceNumber
#define INCLUDE_ALL_OrgMockitoInternalProgressSequenceNumber 0
#else
#define INCLUDE_ALL_OrgMockitoInternalProgressSequenceNumber 1
#endif
#undef RESTRICT_OrgMockitoInternalProgressSequenceNumber

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalProgressSequenceNumber_) && (INCLUDE_ALL_OrgMockitoInternalProgressSequenceNumber || defined(INCLUDE_OrgMockitoInternalProgressSequenceNumber))
#define OrgMockitoInternalProgressSequenceNumber_

@interface OrgMockitoInternalProgressSequenceNumber : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

+ (jint)next;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalProgressSequenceNumber)

FOUNDATION_EXPORT void OrgMockitoInternalProgressSequenceNumber_init(OrgMockitoInternalProgressSequenceNumber *self);

FOUNDATION_EXPORT OrgMockitoInternalProgressSequenceNumber *new_OrgMockitoInternalProgressSequenceNumber_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalProgressSequenceNumber *create_OrgMockitoInternalProgressSequenceNumber_init(void);

FOUNDATION_EXPORT jint OrgMockitoInternalProgressSequenceNumber_next(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalProgressSequenceNumber)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalProgressSequenceNumber")
