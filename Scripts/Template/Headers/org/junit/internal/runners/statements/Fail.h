//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/internal/runners/statements/Fail.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalRunnersStatementsFail")
#ifdef RESTRICT_OrgJunitInternalRunnersStatementsFail
#define INCLUDE_ALL_OrgJunitInternalRunnersStatementsFail 0
#else
#define INCLUDE_ALL_OrgJunitInternalRunnersStatementsFail 1
#endif
#undef RESTRICT_OrgJunitInternalRunnersStatementsFail

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitInternalRunnersStatementsFail_) && (INCLUDE_ALL_OrgJunitInternalRunnersStatementsFail || defined(INCLUDE_OrgJunitInternalRunnersStatementsFail))
#define OrgJunitInternalRunnersStatementsFail_

#define RESTRICT_OrgJunitRunnersModelStatement 1
#define INCLUDE_OrgJunitRunnersModelStatement 1
#include "../../../../../org/junit/runners/model/Statement.h"

@class JavaLangThrowable;

@interface OrgJunitInternalRunnersStatementsFail : OrgJunitRunnersModelStatement

#pragma mark Public

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)e;

- (void)evaluate;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRunnersStatementsFail)

FOUNDATION_EXPORT void OrgJunitInternalRunnersStatementsFail_initWithJavaLangThrowable_(OrgJunitInternalRunnersStatementsFail *self, JavaLangThrowable *e);

FOUNDATION_EXPORT OrgJunitInternalRunnersStatementsFail *new_OrgJunitInternalRunnersStatementsFail_initWithJavaLangThrowable_(JavaLangThrowable *e) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalRunnersStatementsFail *create_OrgJunitInternalRunnersStatementsFail_initWithJavaLangThrowable_(JavaLangThrowable *e);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRunnersStatementsFail)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalRunnersStatementsFail")
