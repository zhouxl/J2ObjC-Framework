//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/argumentmatching/ArgumentMatchingTool.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool")
#ifdef RESTRICT_OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool
#define INCLUDE_ALL_OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool 0
#else
#define INCLUDE_ALL_OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool 1
#endif
#undef RESTRICT_OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool_) && (INCLUDE_ALL_OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool || defined(INCLUDE_OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool))
#define OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool_

@class IOSObjectArray;
@protocol JavaUtilList;

@interface OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief Suspiciously not matching arguments are those that don't match, the toString() representation is the same but types are different.
 */
- (IOSObjectArray *)getSuspiciouslyNotMatchingArgsIndexesWithJavaUtilList:(id<JavaUtilList>)matchers
                                                        withNSObjectArray:(IOSObjectArray *)arguments;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool_init(OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool *self);

FOUNDATION_EXPORT OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool *new_OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool *create_OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool")