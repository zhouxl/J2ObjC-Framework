//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/internal/runners/model/ReflectiveCallable.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalRunnersModelReflectiveCallable")
#ifdef RESTRICT_OrgJunitInternalRunnersModelReflectiveCallable
#define INCLUDE_ALL_OrgJunitInternalRunnersModelReflectiveCallable 0
#else
#define INCLUDE_ALL_OrgJunitInternalRunnersModelReflectiveCallable 1
#endif
#undef RESTRICT_OrgJunitInternalRunnersModelReflectiveCallable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitInternalRunnersModelReflectiveCallable_) && (INCLUDE_ALL_OrgJunitInternalRunnersModelReflectiveCallable || defined(INCLUDE_OrgJunitInternalRunnersModelReflectiveCallable))
#define OrgJunitInternalRunnersModelReflectiveCallable_

/*!
 @brief When invoked, throws the exception from the reflected method, rather than
  wrapping it in an InvocationTargetException.
 */
@interface OrgJunitInternalRunnersModelReflectiveCallable : NSObject

#pragma mark Public

- (instancetype)init;

- (id)run;

#pragma mark Protected

- (id)runReflectiveCall;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRunnersModelReflectiveCallable)

FOUNDATION_EXPORT void OrgJunitInternalRunnersModelReflectiveCallable_init(OrgJunitInternalRunnersModelReflectiveCallable *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRunnersModelReflectiveCallable)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalRunnersModelReflectiveCallable")