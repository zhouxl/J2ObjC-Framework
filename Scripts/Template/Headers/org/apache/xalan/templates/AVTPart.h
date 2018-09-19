//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/AVTPart.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesAVTPart")
#ifdef RESTRICT_OrgApacheXalanTemplatesAVTPart
#define INCLUDE_ALL_OrgApacheXalanTemplatesAVTPart 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesAVTPart 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesAVTPart

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanTemplatesAVTPart_) && (INCLUDE_ALL_OrgApacheXalanTemplatesAVTPart || defined(INCLUDE_OrgApacheXalanTemplatesAVTPart))
#define OrgApacheXalanTemplatesAVTPart_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../java/io/Serializable.h"

#define RESTRICT_OrgApacheXalanTemplatesXSLTVisitable 1
#define INCLUDE_OrgApacheXalanTemplatesXSLTVisitable 1
#include "../../../../org/apache/xalan/templates/XSLTVisitable.h"

@class JavaUtilVector;
@class OrgApacheXmlUtilsFastStringBuffer;
@class OrgApacheXpathXPathContext;
@protocol OrgApacheXmlUtilsPrefixResolver;

/*!
 @brief Class to hold a part, either a string or XPath,
  of an Attribute Value Template.
 */
@interface OrgApacheXalanTemplatesAVTPart : NSObject < JavaIoSerializable, OrgApacheXalanTemplatesXSLTVisitable >
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Construct a part.
 */
- (instancetype __nonnull)init;

/*!
 @brief Tell if this expression or it's subexpressions can traverse outside 
  the current subtree.
 @return true if traversal outside the context node's subtree can occur.
 */
- (jboolean)canTraverseOutsideSubtree;

/*!
 @brief Write the evaluated value into the given
  string buffer.
 @param xctxt The XPath context to use to evaluate this AVT.
 @param buf Buffer to write into.
 @param context The current source tree context.
 @param nsNode The current namespace context (stylesheet tree context).
 @throw javax.xml.transform.TransformerException
 */
- (void)evaluateWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
         withOrgApacheXmlUtilsFastStringBuffer:(OrgApacheXmlUtilsFastStringBuffer *)buf
                                       withInt:(jint)context
           withOrgApacheXmlUtilsPrefixResolver:(id<OrgApacheXmlUtilsPrefixResolver>)nsNode;

/*!
 @brief This function is used to fixup variables from QNames to stack frame 
  indexes at stylesheet build time.
 @param vars List of QNames that correspond to variables.  This list   should be searched backwards for the first qualified name that 
   corresponds to the variable reference qname.  The position of the 
   QName in the vector from the start of the vector will be its position 
   in the stack frame (but variables above the globalsTop value will need 
   to be offset to the current stack frame).
 */
- (void)fixupVariablesWithJavaUtilVector:(JavaUtilVector *)vars
                                 withInt:(jint)globalsSize;

/*!
 @brief Get the AVT part as the original string.
 @return the AVT part as the original string.
 */
- (NSString *)getSimpleString;

/*!
 @brief Set the XPath support.
 @param support XPathContext to set.
 */
- (void)setXPathSupportWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)support;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesAVTPart)

inline jlong OrgApacheXalanTemplatesAVTPart_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesAVTPart_serialVersionUID -1747749903613916025LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesAVTPart, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesAVTPart_init(OrgApacheXalanTemplatesAVTPart *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesAVTPart)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesAVTPart")
