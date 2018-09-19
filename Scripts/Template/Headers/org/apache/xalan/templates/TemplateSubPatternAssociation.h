//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/TemplateSubPatternAssociation.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesTemplateSubPatternAssociation")
#ifdef RESTRICT_OrgApacheXalanTemplatesTemplateSubPatternAssociation
#define INCLUDE_ALL_OrgApacheXalanTemplatesTemplateSubPatternAssociation 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesTemplateSubPatternAssociation 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesTemplateSubPatternAssociation

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanTemplatesTemplateSubPatternAssociation_) && (INCLUDE_ALL_OrgApacheXalanTemplatesTemplateSubPatternAssociation || defined(INCLUDE_OrgApacheXalanTemplatesTemplateSubPatternAssociation))
#define OrgApacheXalanTemplatesTemplateSubPatternAssociation_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../java/io/Serializable.h"

@class OrgApacheXalanTemplatesElemTemplate;
@class OrgApacheXmlUtilsQName;
@class OrgApacheXpathPatternsStepPattern;
@class OrgApacheXpathXPathContext;

/*!
 @brief A class to contain a match pattern and it's corresponding template.
 This class also defines a node in a match pattern linked list.
 */
@interface OrgApacheXalanTemplatesTemplateSubPatternAssociation : NSObject < JavaIoSerializable, NSCopying > {
 @public
  /*!
   @brief Step pattern
   */
  OrgApacheXpathPatternsStepPattern *m_stepPattern_;
}
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Clone this object.
 @return The cloned object.
 @throw CloneNotSupportedException
 */
- (id)java_clone;

/*!
 @brief Return the position of the template in document
  order in the stylesheet.
 @return The position of the template in the overall template order.
 */
- (jint)getDocOrderPos;

/*!
 @brief Return the import level associated with the stylesheet into which  
  this template is composed.
 @return The import level of this template.
 */
- (jint)getImportLevel;

/*!
 @brief Get the next association.
 @return A valid TemplateSubPatternAssociation, or null.
 */
- (OrgApacheXalanTemplatesTemplateSubPatternAssociation *)getNext;

/*!
 @brief Get the pattern string for diagnostic purposes.
 @return The pattern string for diagnostic purposes.
 */
- (NSString *)getPattern;

/*!
 @brief Get associated XSLT StepPattern.
 @return An executable StepPattern object, never null.
 */
- (OrgApacheXpathPatternsStepPattern *)getStepPattern;

/*!
 @brief Get the target string of the pattern.For instance, if the pattern is
  "foo/baz/boo[@@daba]", this string will be "boo".
 @return The "target" string.
 */
- (NSString *)getTargetString;

/*!
 @brief Get the assocated xsl:template.
 @return An ElemTemplate, never null.
 */
- (OrgApacheXalanTemplatesElemTemplate *)getTemplate;

/*!
 @brief Tell if the pattern for this association is a wildcard.
 @return true if this pattern is considered to be a wild match.
 */
- (jboolean)isWild;

/*!
 @brief Return the mode associated with the template.
 @param xctxt XPath context to use with this template
 @param targetNode Target node
 @param mode reference, which may be null, to the  <a href="http://www.w3.org/TR/xslt#modes"> current mode </a>
  .
 @return The mode associated with the template.
 @throw TransformerException
 */
- (jboolean)matchesWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                          withInt:(jint)targetNode
                       withOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)mode;

/*!
 @brief Set the next element on this association
  list, which should be equal or less in priority to
  this association, and, if equal priority, should occur
  before this template in document order.
 @param mp The next association to score if this one fails.
 */
- (void)setNextWithOrgApacheXalanTemplatesTemplateSubPatternAssociation:(OrgApacheXalanTemplatesTemplateSubPatternAssociation *)mp;

/*!
 @brief Set Target String for this template pattern
 @param key Target string to set
 */
- (void)setTargetStringWithNSString:(NSString *)key;

#pragma mark Package-Private

/*!
 @brief Construct a match pattern from a pattern and template.
 @param template_ The node that contains the template for this pattern.
 @param pattern An executable XSLT StepPattern.
 @param pat For now a Nodelist that contains old-style element patterns.
 */
- (instancetype __nonnull)initWithOrgApacheXalanTemplatesElemTemplate:(OrgApacheXalanTemplatesElemTemplate *)template_
                                withOrgApacheXpathPatternsStepPattern:(OrgApacheXpathPatternsStepPattern *)pattern
                                                         withNSString:(NSString *)pat;

/*!
 @brief Tell if two modes match according to the rules of XSLT.
 @param m1 mode to match
 @return True if the given mode matches this template's mode
 */
- (jboolean)matchModeWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)m1;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesTemplateSubPatternAssociation)

J2OBJC_FIELD_SETTER(OrgApacheXalanTemplatesTemplateSubPatternAssociation, m_stepPattern_, OrgApacheXpathPatternsStepPattern *)

inline jlong OrgApacheXalanTemplatesTemplateSubPatternAssociation_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesTemplateSubPatternAssociation_serialVersionUID -8902606755229903350LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesTemplateSubPatternAssociation, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesTemplateSubPatternAssociation_initWithOrgApacheXalanTemplatesElemTemplate_withOrgApacheXpathPatternsStepPattern_withNSString_(OrgApacheXalanTemplatesTemplateSubPatternAssociation *self, OrgApacheXalanTemplatesElemTemplate *template_, OrgApacheXpathPatternsStepPattern *pattern, NSString *pat);

FOUNDATION_EXPORT OrgApacheXalanTemplatesTemplateSubPatternAssociation *new_OrgApacheXalanTemplatesTemplateSubPatternAssociation_initWithOrgApacheXalanTemplatesElemTemplate_withOrgApacheXpathPatternsStepPattern_withNSString_(OrgApacheXalanTemplatesElemTemplate *template_, OrgApacheXpathPatternsStepPattern *pattern, NSString *pat) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesTemplateSubPatternAssociation *create_OrgApacheXalanTemplatesTemplateSubPatternAssociation_initWithOrgApacheXalanTemplatesElemTemplate_withOrgApacheXpathPatternsStepPattern_withNSString_(OrgApacheXalanTemplatesElemTemplate *template_, OrgApacheXpathPatternsStepPattern *pattern, NSString *pat);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesTemplateSubPatternAssociation)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesTemplateSubPatternAssociation")
