//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/StubberImpl.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalStubbingStubberImpl")
#ifdef RESTRICT_OrgMockitoInternalStubbingStubberImpl
#define INCLUDE_ALL_OrgMockitoInternalStubbingStubberImpl 0
#else
#define INCLUDE_ALL_OrgMockitoInternalStubbingStubberImpl 1
#endif
#undef RESTRICT_OrgMockitoInternalStubbingStubberImpl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalStubbingStubberImpl_) && (INCLUDE_ALL_OrgMockitoInternalStubbingStubberImpl || defined(INCLUDE_OrgMockitoInternalStubbingStubberImpl))
#define OrgMockitoInternalStubbingStubberImpl_

#define RESTRICT_OrgMockitoStubbingStubber 1
#define INCLUDE_OrgMockitoStubbingStubber 1
#include "../../../../org/mockito/stubbing/Stubber.h"

@class IOSClass;
@class JavaLangThrowable;
@protocol JavaUtilList;
@protocol OrgMockitoStubbingAnswer;

@interface OrgMockitoInternalStubbingStubberImpl : NSObject < OrgMockitoStubbingStubber > {
 @public
  id<JavaUtilList> answers_;
}

#pragma mark Public

- (instancetype __nonnull)init;

- (id<OrgMockitoStubbingStubber>)doAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

- (id<OrgMockitoStubbingStubber>)doCallRealMethod;

- (id<OrgMockitoStubbingStubber>)doNothing;

- (id<OrgMockitoStubbingStubber>)doReturnWithId:(id)toBeReturned;

- (id<OrgMockitoStubbingStubber>)doThrowWithIOSClass:(IOSClass *)toBeThrown;

- (id<OrgMockitoStubbingStubber>)doThrowWithJavaLangThrowable:(JavaLangThrowable *)toBeThrown;

- (id)whenWithId:(id)mock;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingStubberImpl)

J2OBJC_FIELD_SETTER(OrgMockitoInternalStubbingStubberImpl, answers_, id<JavaUtilList>)

FOUNDATION_EXPORT void OrgMockitoInternalStubbingStubberImpl_init(OrgMockitoInternalStubbingStubberImpl *self);

FOUNDATION_EXPORT OrgMockitoInternalStubbingStubberImpl *new_OrgMockitoInternalStubbingStubberImpl_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalStubbingStubberImpl *create_OrgMockitoInternalStubbingStubberImpl_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingStubberImpl)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalStubbingStubberImpl")
