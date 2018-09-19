//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/AVTPartSimple.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesAVTPartSimple")
#ifdef RESTRICT_OrgApacheXalanTemplatesAVTPartSimple
#define INCLUDE_ALL_OrgApacheXalanTemplatesAVTPartSimple 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesAVTPartSimple 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesAVTPartSimple

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanTemplatesAVTPartSimple_) && (INCLUDE_ALL_OrgApacheXalanTemplatesAVTPartSimple || defined(INCLUDE_OrgApacheXalanTemplatesAVTPartSimple))
#define OrgApacheXalanTemplatesAVTPartSimple_

#define RESTRICT_OrgApacheXalanTemplatesAVTPart 1
#define INCLUDE_OrgApacheXalanTemplatesAVTPart 1
#include "../../../../org/apache/xalan/templates/AVTPart.h"

@class JavaUtilVector;
@class OrgApacheXalanTemplatesXSLTVisitor;
@class OrgApacheXmlUtilsFastStringBuffer;
@class OrgApacheXpathXPathContext;
@protocol OrgApacheXmlUtilsPrefixResolver;

/*!
 @brief Simple string part of a complex AVT.
 */
@interface OrgApacheXalanTemplatesAVTPartSimple : OrgApacheXalanTemplatesAVTPart
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Construct a simple AVT part.
 @param val A pure string section of an AVT.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)val;

/*!
 - seealso: XSLTVisitable#callVisitors(XSLTVisitor)
 */
- (void)callVisitorsWithOrgApacheXalanTemplatesXSLTVisitor:(OrgApacheXalanTemplatesXSLTVisitor *)visitor;

/*!
 @brief Write the value into the buffer.
 @param xctxt An XPathContext object, providing infomation specific  to this invocation and this thread. Maintains SAX state, variables, 
   error handler and  so on, so the transformation/XPath object itself
   can be simultaneously invoked from multiple threads.
 @param buf Buffer to write into.
 @param context The current source tree context.
 @param nsNode The current namespace context (stylesheet tree context).
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

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesAVTPartSimple)

inline jlong OrgApacheXalanTemplatesAVTPartSimple_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesAVTPartSimple_serialVersionUID -3744957690598727913LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesAVTPartSimple, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesAVTPartSimple_initWithNSString_(OrgApacheXalanTemplatesAVTPartSimple *self, NSString *val);

FOUNDATION_EXPORT OrgApacheXalanTemplatesAVTPartSimple *new_OrgApacheXalanTemplatesAVTPartSimple_initWithNSString_(NSString *val) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesAVTPartSimple *create_OrgApacheXalanTemplatesAVTPartSimple_initWithNSString_(NSString *val);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesAVTPartSimple)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesAVTPartSimple")
