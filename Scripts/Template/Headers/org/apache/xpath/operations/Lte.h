//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/operations/Lte.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathOperationsLte")
#ifdef RESTRICT_OrgApacheXpathOperationsLte
#define INCLUDE_ALL_OrgApacheXpathOperationsLte 0
#else
#define INCLUDE_ALL_OrgApacheXpathOperationsLte 1
#endif
#undef RESTRICT_OrgApacheXpathOperationsLte

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathOperationsLte_) && (INCLUDE_ALL_OrgApacheXpathOperationsLte || defined(INCLUDE_OrgApacheXpathOperationsLte))
#define OrgApacheXpathOperationsLte_

#define RESTRICT_OrgApacheXpathOperationsOperation 1
#define INCLUDE_OrgApacheXpathOperationsOperation 1
#include "../../../../org/apache/xpath/operations/Operation.h"

@class OrgApacheXpathObjectsXObject;

/*!
 @brief The '<=' operation expression executer.
 */
@interface OrgApacheXpathOperationsLte : OrgApacheXpathOperationsOperation
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Apply the operation to two operands, and return the result.
 @param left non-null reference to the evaluated left operand.
 @param right non-null reference to the evaluated right operand.
 @return non-null reference to the XObject that represents the result of the operation.
 @throw javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)operateWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)left
                                         withOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)right;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathOperationsLte)

inline jlong OrgApacheXpathOperationsLte_get_serialVersionUID(void);
#define OrgApacheXpathOperationsLte_serialVersionUID 6945650810527140228LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathOperationsLte, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathOperationsLte_init(OrgApacheXpathOperationsLte *self);

FOUNDATION_EXPORT OrgApacheXpathOperationsLte *new_OrgApacheXpathOperationsLte_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathOperationsLte *create_OrgApacheXpathOperationsLte_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathOperationsLte)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathOperationsLte")
