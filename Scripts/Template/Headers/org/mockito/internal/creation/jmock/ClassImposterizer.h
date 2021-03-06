//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: src/main/java/org/mockito/internal/creation/jmock/ClassImposterizer.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalCreationJmockClassImposterizer")
#ifdef RESTRICT_OrgMockitoInternalCreationJmockClassImposterizer
#define INCLUDE_ALL_OrgMockitoInternalCreationJmockClassImposterizer 0
#else
#define INCLUDE_ALL_OrgMockitoInternalCreationJmockClassImposterizer 1
#endif
#undef RESTRICT_OrgMockitoInternalCreationJmockClassImposterizer

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalCreationJmockClassImposterizer_) && (INCLUDE_ALL_OrgMockitoInternalCreationJmockClassImposterizer || defined(INCLUDE_OrgMockitoInternalCreationJmockClassImposterizer))
#define OrgMockitoInternalCreationJmockClassImposterizer_

@class IOSClass;

/*!
 @brief Subset of Mockito's implementation that removes all Objenesis and CGLib
  references (not useful on iOS).
 */
@interface OrgMockitoInternalCreationJmockClassImposterizer : NSObject
@property (readonly, class, strong) OrgMockitoInternalCreationJmockClassImposterizer *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (OrgMockitoInternalCreationJmockClassImposterizer *)INSTANCE;

#pragma mark Public

- (jboolean)canImposteriseWithIOSClass:(IOSClass *)type;

@end

J2OBJC_STATIC_INIT(OrgMockitoInternalCreationJmockClassImposterizer)

inline OrgMockitoInternalCreationJmockClassImposterizer *OrgMockitoInternalCreationJmockClassImposterizer_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgMockitoInternalCreationJmockClassImposterizer *OrgMockitoInternalCreationJmockClassImposterizer_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgMockitoInternalCreationJmockClassImposterizer, INSTANCE, OrgMockitoInternalCreationJmockClassImposterizer *)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalCreationJmockClassImposterizer)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalCreationJmockClassImposterizer")
