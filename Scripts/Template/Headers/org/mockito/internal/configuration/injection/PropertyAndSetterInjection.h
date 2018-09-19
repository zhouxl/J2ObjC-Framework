//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/internal/configuration/injection/PropertyAndSetterInjection.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection")
#ifdef RESTRICT_OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection
#define INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection 0
#else
#define INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection 1
#endif
#undef RESTRICT_OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection_) && (INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection || defined(INCLUDE_OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection))
#define OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection_

#define RESTRICT_OrgMockitoInternalConfigurationInjectionMockInjectionStrategy 1
#define INCLUDE_OrgMockitoInternalConfigurationInjectionMockInjectionStrategy 1
#include "../../../../../org/mockito/internal/configuration/injection/MockInjectionStrategy.h"

@class JavaLangReflectField;
@protocol JavaUtilSet;

/*!
 @brief Inject mocks using first setters then fields, if no setters available.
 <p>
  <u>Algorithm :<br></u>
  for each field annotated by @@InjectMocks
    <ul>
    <li>initialize field annotated by @@InjectMocks
    <li>for each fields of a class in @@InjectMocks type hierarchy
      <ul>
      <li>make a copy of mock candidates
      <li>order fields rom sub-type to super-type, then by field name
      <li>for the list of fields in a class try two passes of :
          <ul>
              <li>find mock candidate by type
              <li>if more than <b>*one*</b> candidate find mock candidate on name
              <li>if one mock candidate then
                  <ul>
                      <li>set mock by property setter if possible
                      <li>else set mock by field injection
                  </ul>
              <li>remove mock from mocks copy (mocks are just injected once in a class)
              <li>remove injected field from list of class fields
          </ul>
      <li>else don't fail, user will then provide dependencies
      </ul>
    </ul>
  </p>
  
 <p>
  <u>Note:</u> If the field needing injection is not initialized, the strategy tries
  to create one using a no-arg constructor of the field type. 
 </p>
 */
@interface OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection : OrgMockitoInternalConfigurationInjectionMockInjectionStrategy

#pragma mark Public

- (instancetype __nonnull)init;

- (jboolean)processInjectionWithJavaLangReflectField:(JavaLangReflectField *)injectMocksField
                                              withId:(id)injectMocksFieldOwner
                                     withJavaUtilSet:(id<JavaUtilSet>)mockCandidates;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection_init(OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection *self);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection *new_OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection *create_OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection)

#endif

#if !defined (OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection_FieldTypeAndNameComparator_) && (INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection || defined(INCLUDE_OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection_FieldTypeAndNameComparator))
#define OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection_FieldTypeAndNameComparator_

#define RESTRICT_JavaUtilComparator 1
#define INCLUDE_JavaUtilComparator 1
#include "../../../../../java/util/Comparator.h"

@class JavaLangReflectField;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilFunctionToDoubleFunction;
@protocol JavaUtilFunctionToIntFunction;
@protocol JavaUtilFunctionToLongFunction;

@interface OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection_FieldTypeAndNameComparator : NSObject < JavaUtilComparator >

#pragma mark Public

- (jint)compareWithId:(JavaLangReflectField *)field1
               withId:(JavaLangReflectField *)field2;

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection_FieldTypeAndNameComparator)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection_FieldTypeAndNameComparator_init(OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection_FieldTypeAndNameComparator *self);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection_FieldTypeAndNameComparator *new_OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection_FieldTypeAndNameComparator_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection_FieldTypeAndNameComparator *create_OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection_FieldTypeAndNameComparator_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection_FieldTypeAndNameComparator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection")
