//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/XUnresolvedVariableSimple.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesXUnresolvedVariableSimple")
#ifdef RESTRICT_OrgApacheXalanTemplatesXUnresolvedVariableSimple
#define INCLUDE_ALL_OrgApacheXalanTemplatesXUnresolvedVariableSimple 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesXUnresolvedVariableSimple 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesXUnresolvedVariableSimple

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTemplatesXUnresolvedVariableSimple_) && (INCLUDE_ALL_OrgApacheXalanTemplatesXUnresolvedVariableSimple || defined(INCLUDE_OrgApacheXalanTemplatesXUnresolvedVariableSimple))
#define OrgApacheXalanTemplatesXUnresolvedVariableSimple_

#define RESTRICT_OrgApacheXpathObjectsXObject 1
#define INCLUDE_OrgApacheXpathObjectsXObject 1
#include "../../../../org/apache/xpath/objects/XObject.h"

@class OrgApacheXalanTemplatesElemVariable;
@class OrgApacheXpathXPathContext;

/*!
 @brief This is the same as XUnresolvedVariable, but it assumes that the 
  context is already set up.For use with psuedo variables.
 Also, it holds an Expression object, instead of an ElemVariable.
  It must only hold static context, since a single copy will be 
  held in the template.
 */
@interface OrgApacheXalanTemplatesXUnresolvedVariableSimple : OrgApacheXpathObjectsXObject

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)initWithOrgApacheXalanTemplatesElemVariable:(OrgApacheXalanTemplatesElemVariable *)obj;

/*!
 @brief For support of literal objects in xpaths.
 @param xctxt The XPath execution context.
 @return This object.
 @throw javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Tell what kind of class this is.
 @return CLASS_UNRESOLVEDVARIABLE
 */
- (jint)getType;

/*!
 @brief Given a request type, return the equivalent string.
 For diagnostic purposes.
 @return An informational string.
 */
- (NSString *)getTypeString;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithId:(id)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesXUnresolvedVariableSimple)

inline jlong OrgApacheXalanTemplatesXUnresolvedVariableSimple_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesXUnresolvedVariableSimple_serialVersionUID -1224413807443958985LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesXUnresolvedVariableSimple, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesXUnresolvedVariableSimple_initWithOrgApacheXalanTemplatesElemVariable_(OrgApacheXalanTemplatesXUnresolvedVariableSimple *self, OrgApacheXalanTemplatesElemVariable *obj);

FOUNDATION_EXPORT OrgApacheXalanTemplatesXUnresolvedVariableSimple *new_OrgApacheXalanTemplatesXUnresolvedVariableSimple_initWithOrgApacheXalanTemplatesElemVariable_(OrgApacheXalanTemplatesElemVariable *obj) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesXUnresolvedVariableSimple *create_OrgApacheXalanTemplatesXUnresolvedVariableSimple_initWithOrgApacheXalanTemplatesElemVariable_(OrgApacheXalanTemplatesElemVariable *obj);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesXUnresolvedVariableSimple)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesXUnresolvedVariableSimple")
