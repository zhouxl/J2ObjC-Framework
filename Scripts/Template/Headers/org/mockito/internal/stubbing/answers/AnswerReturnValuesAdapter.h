//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/answers/AnswerReturnValuesAdapter.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter")
#ifdef RESTRICT_OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter
#define INCLUDE_ALL_OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter 0
#else
#define INCLUDE_ALL_OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter 1
#endif
#undef RESTRICT_OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter_) && (INCLUDE_ALL_OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter || defined(INCLUDE_OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter))
#define OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter_

#define RESTRICT_OrgMockitoStubbingAnswer 1
#define INCLUDE_OrgMockitoStubbingAnswer 1
#include "../../../../../org/mockito/stubbing/Answer.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../../java/io/Serializable.h"

@protocol OrgMockitoInvocationInvocationOnMock;
@protocol OrgMockitoReturnValues;

@interface OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter : NSObject < OrgMockitoStubbingAnswer, JavaIoSerializable >

#pragma mark Public

- (instancetype __nonnull)initWithOrgMockitoReturnValues:(id<OrgMockitoReturnValues>)returnValues;

- (id)answerWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter)

FOUNDATION_EXPORT void OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter_initWithOrgMockitoReturnValues_(OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter *self, id<OrgMockitoReturnValues> returnValues);

FOUNDATION_EXPORT OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter *new_OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter_initWithOrgMockitoReturnValues_(id<OrgMockitoReturnValues> returnValues) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter *create_OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter_initWithOrgMockitoReturnValues_(id<OrgMockitoReturnValues> returnValues);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter")
