//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/operations/Div.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathOperationsDiv")
#ifdef RESTRICT_OrgApacheXpathOperationsDiv
#define INCLUDE_ALL_OrgApacheXpathOperationsDiv 0
#else
#define INCLUDE_ALL_OrgApacheXpathOperationsDiv 1
#endif
#undef RESTRICT_OrgApacheXpathOperationsDiv

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathOperationsDiv_) && (INCLUDE_ALL_OrgApacheXpathOperationsDiv || defined(INCLUDE_OrgApacheXpathOperationsDiv))
#define OrgApacheXpathOperationsDiv_

#define RESTRICT_OrgApacheXpathOperationsOperation 1
#define INCLUDE_OrgApacheXpathOperationsOperation 1
#include "../../../../org/apache/xpath/operations/Operation.h"

@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

/*!
 @brief The 'div' operation expression executer.
 */
@interface OrgApacheXpathOperationsDiv : OrgApacheXpathOperationsOperation
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Evaluate this operation directly to a double.
 @param xctxt The runtime execution context.
 @return The result of the operation as a double.
 @throw javax.xml.transform.TransformerException
 */
- (jdouble)numWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

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

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathOperationsDiv)

inline jlong OrgApacheXpathOperationsDiv_get_serialVersionUID(void);
#define OrgApacheXpathOperationsDiv_serialVersionUID 6220756595959798135LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathOperationsDiv, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathOperationsDiv_init(OrgApacheXpathOperationsDiv *self);

FOUNDATION_EXPORT OrgApacheXpathOperationsDiv *new_OrgApacheXpathOperationsDiv_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathOperationsDiv *create_OrgApacheXpathOperationsDiv_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathOperationsDiv)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathOperationsDiv")
