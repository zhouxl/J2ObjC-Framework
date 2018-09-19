//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/internal/configuration/DefaultInjectionEngine.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationDefaultInjectionEngine")
#ifdef RESTRICT_OrgMockitoInternalConfigurationDefaultInjectionEngine
#define INCLUDE_ALL_OrgMockitoInternalConfigurationDefaultInjectionEngine 0
#else
#define INCLUDE_ALL_OrgMockitoInternalConfigurationDefaultInjectionEngine 1
#endif
#undef RESTRICT_OrgMockitoInternalConfigurationDefaultInjectionEngine

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalConfigurationDefaultInjectionEngine_) && (INCLUDE_ALL_OrgMockitoInternalConfigurationDefaultInjectionEngine || defined(INCLUDE_OrgMockitoInternalConfigurationDefaultInjectionEngine))
#define OrgMockitoInternalConfigurationDefaultInjectionEngine_

@protocol JavaUtilSet;

/*!
 @brief Inject mock/spies dependencies for fields annotated with &#064;InjectMocks
 <p>
  See <code>org.mockito.MockitoAnnotations</code>
 */
@interface OrgMockitoInternalConfigurationDefaultInjectionEngine : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

- (void)injectMocksOnFieldsWithJavaUtilSet:(id<JavaUtilSet>)needingInjection
                           withJavaUtilSet:(id<JavaUtilSet>)mocks
                                    withId:(id)testClassInstance;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationDefaultInjectionEngine)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationDefaultInjectionEngine_init(OrgMockitoInternalConfigurationDefaultInjectionEngine *self);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationDefaultInjectionEngine *new_OrgMockitoInternalConfigurationDefaultInjectionEngine_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalConfigurationDefaultInjectionEngine *create_OrgMockitoInternalConfigurationDefaultInjectionEngine_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationDefaultInjectionEngine)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationDefaultInjectionEngine")
