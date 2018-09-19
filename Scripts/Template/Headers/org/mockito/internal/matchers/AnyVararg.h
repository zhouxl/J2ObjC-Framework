//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/AnyVararg.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalMatchersAnyVararg")
#ifdef RESTRICT_OrgMockitoInternalMatchersAnyVararg
#define INCLUDE_ALL_OrgMockitoInternalMatchersAnyVararg 0
#else
#define INCLUDE_ALL_OrgMockitoInternalMatchersAnyVararg 1
#endif
#undef RESTRICT_OrgMockitoInternalMatchersAnyVararg

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalMatchersAnyVararg_) && (INCLUDE_ALL_OrgMockitoInternalMatchersAnyVararg || defined(INCLUDE_OrgMockitoInternalMatchersAnyVararg))
#define OrgMockitoInternalMatchersAnyVararg_

#define RESTRICT_OrgMockitoArgumentMatcher 1
#define INCLUDE_OrgMockitoArgumentMatcher 1
#include "../../../../org/mockito/ArgumentMatcher.h"

#define RESTRICT_OrgMockitoInternalMatchersVarargMatcher 1
#define INCLUDE_OrgMockitoInternalMatchersVarargMatcher 1
#include "../../../../org/mockito/internal/matchers/VarargMatcher.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../java/io/Serializable.h"

@protocol OrgHamcrestMatcher;

@interface OrgMockitoInternalMatchersAnyVararg : OrgMockitoArgumentMatcher < OrgMockitoInternalMatchersVarargMatcher, JavaIoSerializable >

+ (id<OrgHamcrestMatcher>)ANY_VARARG;

#pragma mark Public

- (instancetype)init;

- (jboolean)matchesWithId:(id)arg;

@end

J2OBJC_STATIC_INIT(OrgMockitoInternalMatchersAnyVararg)

inline id<OrgHamcrestMatcher> OrgMockitoInternalMatchersAnyVararg_get_ANY_VARARG(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgMockitoInternalMatchersAnyVararg_ANY_VARARG;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgMockitoInternalMatchersAnyVararg, ANY_VARARG, id<OrgHamcrestMatcher>)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersAnyVararg_init(OrgMockitoInternalMatchersAnyVararg *self);

FOUNDATION_EXPORT OrgMockitoInternalMatchersAnyVararg *new_OrgMockitoInternalMatchersAnyVararg_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalMatchersAnyVararg *create_OrgMockitoInternalMatchersAnyVararg_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersAnyVararg)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalMatchersAnyVararg")
