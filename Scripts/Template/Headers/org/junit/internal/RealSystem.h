//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/internal/RealSystem.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalRealSystem")
#ifdef RESTRICT_OrgJunitInternalRealSystem
#define INCLUDE_ALL_OrgJunitInternalRealSystem 0
#else
#define INCLUDE_ALL_OrgJunitInternalRealSystem 1
#endif
#undef RESTRICT_OrgJunitInternalRealSystem

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitInternalRealSystem_) && (INCLUDE_ALL_OrgJunitInternalRealSystem || defined(INCLUDE_OrgJunitInternalRealSystem))
#define OrgJunitInternalRealSystem_

#define RESTRICT_OrgJunitInternalJUnitSystem 1
#define INCLUDE_OrgJunitInternalJUnitSystem 1
#include "../../../org/junit/internal/JUnitSystem.h"

@class JavaIoPrintStream;

@interface OrgJunitInternalRealSystem : NSObject < OrgJunitInternalJUnitSystem >

#pragma mark Public

- (instancetype)init;

- (JavaIoPrintStream *)out;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRealSystem)

FOUNDATION_EXPORT void OrgJunitInternalRealSystem_init(OrgJunitInternalRealSystem *self);

FOUNDATION_EXPORT OrgJunitInternalRealSystem *new_OrgJunitInternalRealSystem_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalRealSystem *create_OrgJunitInternalRealSystem_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRealSystem)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalRealSystem")