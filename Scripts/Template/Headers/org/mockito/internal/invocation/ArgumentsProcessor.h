//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/invocation/ArgumentsProcessor.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalInvocationArgumentsProcessor")
#ifdef RESTRICT_OrgMockitoInternalInvocationArgumentsProcessor
#define INCLUDE_ALL_OrgMockitoInternalInvocationArgumentsProcessor 0
#else
#define INCLUDE_ALL_OrgMockitoInternalInvocationArgumentsProcessor 1
#endif
#undef RESTRICT_OrgMockitoInternalInvocationArgumentsProcessor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalInvocationArgumentsProcessor_) && (INCLUDE_ALL_OrgMockitoInternalInvocationArgumentsProcessor || defined(INCLUDE_OrgMockitoInternalInvocationArgumentsProcessor))
#define OrgMockitoInternalInvocationArgumentsProcessor_

@class IOSObjectArray;
@protocol JavaUtilList;

/*!
 @brief by Szczepan Faber, created at: 3/31/12
 */
@interface OrgMockitoInternalInvocationArgumentsProcessor : NSObject

#pragma mark Public

- (instancetype)init;

+ (id<JavaUtilList>)argumentsToMatchersWithNSObjectArray:(IOSObjectArray *)arguments;

+ (IOSObjectArray *)expandVarArgsWithBoolean:(jboolean)isVarArgs
                           withNSObjectArray:(IOSObjectArray *)args;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalInvocationArgumentsProcessor)

FOUNDATION_EXPORT void OrgMockitoInternalInvocationArgumentsProcessor_init(OrgMockitoInternalInvocationArgumentsProcessor *self);

FOUNDATION_EXPORT OrgMockitoInternalInvocationArgumentsProcessor *new_OrgMockitoInternalInvocationArgumentsProcessor_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalInvocationArgumentsProcessor *create_OrgMockitoInternalInvocationArgumentsProcessor_init(void);

FOUNDATION_EXPORT IOSObjectArray *OrgMockitoInternalInvocationArgumentsProcessor_expandVarArgsWithBoolean_withNSObjectArray_(jboolean isVarArgs, IOSObjectArray *args);

FOUNDATION_EXPORT id<JavaUtilList> OrgMockitoInternalInvocationArgumentsProcessor_argumentsToMatchersWithNSObjectArray_(IOSObjectArray *arguments);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationArgumentsProcessor)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalInvocationArgumentsProcessor")
