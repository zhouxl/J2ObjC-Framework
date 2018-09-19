//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/operations/VariableSafeAbsRef.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathOperationsVariableSafeAbsRef")
#ifdef RESTRICT_OrgApacheXpathOperationsVariableSafeAbsRef
#define INCLUDE_ALL_OrgApacheXpathOperationsVariableSafeAbsRef 0
#else
#define INCLUDE_ALL_OrgApacheXpathOperationsVariableSafeAbsRef 1
#endif
#undef RESTRICT_OrgApacheXpathOperationsVariableSafeAbsRef

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathOperationsVariableSafeAbsRef_) && (INCLUDE_ALL_OrgApacheXpathOperationsVariableSafeAbsRef || defined(INCLUDE_OrgApacheXpathOperationsVariableSafeAbsRef))
#define OrgApacheXpathOperationsVariableSafeAbsRef_

#define RESTRICT_OrgApacheXpathOperationsVariable 1
#define INCLUDE_OrgApacheXpathOperationsVariable 1
#include "../../../../org/apache/xpath/operations/Variable.h"

@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

/*!
 @brief This is a "smart" variable reference that is used in situations where 
  an absolute path is optimized into a variable reference, but may 
  be used in some situations where the document context may have changed.
 For instance, in select="document(doc/@@href)//name[//salary &gt; 7250]", the 
  root in the predicate will be different for each node in the set.  While 
  this is easy to detect statically in this case, in other cases static 
  detection would be very hard or impossible.  So, this class does a dynamic check 
  to make sure the document context of the referenced variable is the same as 
  the current document context, and, if it is not, execute the referenced variable's 
  expression with the current context instead.
 */
@interface OrgApacheXpathOperationsVariableSafeAbsRef : OrgApacheXpathOperationsVariable

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)init;

/*!
 @brief Dereference the variable, and return the reference value.Note that lazy 
  evaluation will occur.
 If a variable within scope is not found, a warning 
  will be sent to the error listener, and an empty nodeset will be returned.
 @param xctxt The runtime execution context.
 @return The evaluated variable, or an empty nodeset if not found.
 @throw javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                            withBoolean:(jboolean)destructiveOK;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathOperationsVariableSafeAbsRef)

inline jlong OrgApacheXpathOperationsVariableSafeAbsRef_get_serialVersionUID(void);
#define OrgApacheXpathOperationsVariableSafeAbsRef_serialVersionUID -9174661990819967452LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathOperationsVariableSafeAbsRef, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathOperationsVariableSafeAbsRef_init(OrgApacheXpathOperationsVariableSafeAbsRef *self);

FOUNDATION_EXPORT OrgApacheXpathOperationsVariableSafeAbsRef *new_OrgApacheXpathOperationsVariableSafeAbsRef_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathOperationsVariableSafeAbsRef *create_OrgApacheXpathOperationsVariableSafeAbsRef_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathOperationsVariableSafeAbsRef)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathOperationsVariableSafeAbsRef")
