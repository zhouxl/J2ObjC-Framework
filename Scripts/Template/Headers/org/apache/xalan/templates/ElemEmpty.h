//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemEmpty.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemEmpty")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemEmpty
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemEmpty 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemEmpty 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemEmpty

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanTemplatesElemEmpty_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemEmpty || defined(INCLUDE_OrgApacheXalanTemplatesElemEmpty))
#define OrgApacheXalanTemplatesElemEmpty_

#define RESTRICT_OrgApacheXalanTemplatesElemTemplateElement 1
#define INCLUDE_OrgApacheXalanTemplatesElemTemplateElement 1
#include "../../../../org/apache/xalan/templates/ElemTemplateElement.h"

/*!
 @brief Simple empty elem to push on the stack when nothing
  else got pushed, so that pop() works correctly.
 */
@interface OrgApacheXalanTemplatesElemEmpty : OrgApacheXalanTemplatesElemTemplateElement
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Constructor ElemEmpty
 */
- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemEmpty)

inline jlong OrgApacheXalanTemplatesElemEmpty_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesElemEmpty_serialVersionUID 7544753713671472252LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemEmpty, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemEmpty_init(OrgApacheXalanTemplatesElemEmpty *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemEmpty *new_OrgApacheXalanTemplatesElemEmpty_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemEmpty *create_OrgApacheXalanTemplatesElemEmpty_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemEmpty)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemEmpty")
