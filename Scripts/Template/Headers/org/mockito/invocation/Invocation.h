//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/invocation/Invocation.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInvocationInvocation")
#ifdef RESTRICT_OrgMockitoInvocationInvocation
#define INCLUDE_ALL_OrgMockitoInvocationInvocation 0
#else
#define INCLUDE_ALL_OrgMockitoInvocationInvocation 1
#endif
#undef RESTRICT_OrgMockitoInvocationInvocation

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInvocationInvocation_) && (INCLUDE_ALL_OrgMockitoInvocationInvocation || defined(INCLUDE_OrgMockitoInvocationInvocation))
#define OrgMockitoInvocationInvocation_

#define RESTRICT_OrgMockitoInvocationInvocationOnMock 1
#define INCLUDE_OrgMockitoInvocationInvocationOnMock 1
#include "../../../org/mockito/invocation/InvocationOnMock.h"

#define RESTRICT_OrgMockitoInvocationDescribedInvocation 1
#define INCLUDE_OrgMockitoInvocationDescribedInvocation 1
#include "../../../org/mockito/invocation/DescribedInvocation.h"

@class IOSObjectArray;
@protocol OrgMockitoInvocationLocation;
@protocol OrgMockitoInvocationStubInfo;

/*!
 @brief A method call on a mock object.Contains all information and state needed for the Mockito framework to operate.
 This API might be useful for developers who extend Mockito. 
 <p>
  The javadoc does not have lots of examples or documentation because its audience is different.
  Vast majority of users don't need to use the Invocation. It's mostly useful for other framework authors
  that extend Mockito.
 @since 1.9.5
 */
@protocol OrgMockitoInvocationInvocation < OrgMockitoInvocationInvocationOnMock, OrgMockitoInvocationDescribedInvocation, JavaObject >

/*!
 @return whether the invocation has been already verified.
  Needed for <code>org.mockito.Mockito</code>
 */
- (jboolean)isVerified;

/*!
 @return the sequence number of the Invocation. Useful to determine the order of invocations.
  Used by verification in order.
 */
- (jint)getSequenceNumber;

/*!
 @return the location in code of this invocation.
 */
- (id<OrgMockitoInvocationLocation>)getLocation;

/*!
 @brief Returns unprocessed arguments whereas <code>getArguments()</code> returns
  arguments already processed (e.g.varargs expended, etc.).
 @return unprocessed arguments, exactly as provided to this invocation.
 */
- (IOSObjectArray *)getRawArguments;

/*!
 @brief Marks this invocation as verified so that it will not cause verification error at 
 <code>org.mockito.Mockito</code>
 */
- (void)markVerified;

/*!
 @return the stubbing information for this invocation. May return null - this means
  the invocation was not stubbed.
 */
- (id<OrgMockitoInvocationStubInfo>)stubInfo;

/*!
 @brief Marks this invocation as stubbed.
 @param stubInfo the information about stubbing.
 */
- (void)markStubbedWithOrgMockitoInvocationStubInfo:(id<OrgMockitoInvocationStubInfo>)stubInfo;

/*!
 @brief Informs if the invocation participates in verify-no-more-invocations or verification in order.
 @return whether this invocation should be ignored for the purposes of
  verify-no-more-invocations or verification in order.
 */
- (jboolean)isIgnoredForVerification;

/*!
 @brief Configures this invocation to be ignored for verify-no-more-invocations or verification in order.
 See also <code>isIgnoredForVerification()</code>
 */
- (void)ignoreForVerification;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInvocationInvocation)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInvocationInvocation)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInvocationInvocation")
