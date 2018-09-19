//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/objects/XNumber.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathObjectsXNumber")
#ifdef RESTRICT_OrgApacheXpathObjectsXNumber
#define INCLUDE_ALL_OrgApacheXpathObjectsXNumber 0
#else
#define INCLUDE_ALL_OrgApacheXpathObjectsXNumber 1
#endif
#undef RESTRICT_OrgApacheXpathObjectsXNumber

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathObjectsXNumber_) && (INCLUDE_ALL_OrgApacheXpathObjectsXNumber || defined(INCLUDE_OrgApacheXpathObjectsXNumber))
#define OrgApacheXpathObjectsXNumber_

#define RESTRICT_OrgApacheXpathObjectsXObject 1
#define INCLUDE_OrgApacheXpathObjectsXObject 1
#include "../../../../org/apache/xpath/objects/XObject.h"

@class OrgApacheXpathXPathContext;
@class OrgApacheXpathXPathVisitor;
@protocol OrgApacheXpathExpressionOwner;

/*!
 @brief This class represents an XPath number, and is capable of
  converting the number to other types, such as a string.
 */
@interface OrgApacheXpathObjectsXNumber : OrgApacheXpathObjectsXObject {
 @public
  /*!
   @brief Value of the XNumber object.
   */
  jdouble m_val_;
}
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Construct a XNodeSet object.
 @param d Value of the object
 */
- (instancetype __nonnull)initWithDouble:(jdouble)d;

/*!
 @brief Construct a XNodeSet object.
 @param num Value of the object
 */
- (instancetype __nonnull)initWithNSNumber:(NSNumber *)num;

/*!
 @brief Cast result object to a boolean.
 @return false if the value is NaN or equal to 0.0
 */
- (jboolean)bool__;

/*!
 - seealso: org.apache.xpath.XPathVisitable
 */
- (void)callVisitorsWithOrgApacheXpathExpressionOwner:(id<OrgApacheXpathExpressionOwner>)owner
                       withOrgApacheXpathXPathVisitor:(OrgApacheXpathXPathVisitor *)visitor;

/*!
 @brief Tell if two objects are functionally equal.
 @param obj2 Object to compare this to
 @return true if the two objects are equal
 @throw javax.xml.transform.TransformerException
 */
- (jboolean)equalsWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)obj2;

/*!
 @brief Tell that this is a CLASS_NUMBER.
 @return node type CLASS_NUMBER
 */
- (jint)getType;

/*!
 @brief Given a request type, return the equivalent string.
 For diagnostic purposes.
 @return type string "#NUMBER"
 */
- (NSString *)getTypeString;

/*!
 @brief Tell if this expression returns a stable number that will not change during 
  iterations within the expression.This is used to determine if a proximity 
  position predicate can indicate that no more searching has to occur.
 @return true if the expression represents a stable number.
 */
- (jboolean)isStableNumber;

/*!
 @brief Cast result object to a number.
 @return the value of the XNumber object
 */
- (jdouble)num;

/*!
 @brief Evaluate expression to a number.
 @return 0.0
 @throw javax.xml.transform.TransformerException
 */
- (jdouble)numWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Return a java object that's closest to the representation
  that should be handed to an extension.
 @return The value of this XNumber as a Double object
 */
- (id)object;

/*!
 @brief Cast result object to a string.
 @return "NaN" if the number is NaN, Infinity or -Infinity if
  the number is infinite or the string value of the number.
 */
- (NSString *)str;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithId:(id)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathObjectsXNumber)

inline jlong OrgApacheXpathObjectsXNumber_get_serialVersionUID(void);
#define OrgApacheXpathObjectsXNumber_serialVersionUID -2720400709619020193LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathObjectsXNumber, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathObjectsXNumber_initWithDouble_(OrgApacheXpathObjectsXNumber *self, jdouble d);

FOUNDATION_EXPORT OrgApacheXpathObjectsXNumber *new_OrgApacheXpathObjectsXNumber_initWithDouble_(jdouble d) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXNumber *create_OrgApacheXpathObjectsXNumber_initWithDouble_(jdouble d);

FOUNDATION_EXPORT void OrgApacheXpathObjectsXNumber_initWithNSNumber_(OrgApacheXpathObjectsXNumber *self, NSNumber *num);

FOUNDATION_EXPORT OrgApacheXpathObjectsXNumber *new_OrgApacheXpathObjectsXNumber_initWithNSNumber_(NSNumber *num) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXNumber *create_OrgApacheXpathObjectsXNumber_initWithNSNumber_(NSNumber *num);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathObjectsXNumber)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathObjectsXNumber")
