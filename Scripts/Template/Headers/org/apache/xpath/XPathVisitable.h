//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/XPathVisitable.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathXPathVisitable")
#ifdef RESTRICT_OrgApacheXpathXPathVisitable
#define INCLUDE_ALL_OrgApacheXpathXPathVisitable 0
#else
#define INCLUDE_ALL_OrgApacheXpathXPathVisitable 1
#endif
#undef RESTRICT_OrgApacheXpathXPathVisitable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathXPathVisitable_) && (INCLUDE_ALL_OrgApacheXpathXPathVisitable || defined(INCLUDE_OrgApacheXpathXPathVisitable))
#define OrgApacheXpathXPathVisitable_

@class OrgApacheXpathXPathVisitor;
@protocol OrgApacheXpathExpressionOwner;

/*!
 @brief A class that implements this interface will call a XPathVisitor 
  for itself and members within it's heararchy.If the XPathVisitor's 
  method returns false, the sub-member heararchy will not be 
  traversed.
 */
@protocol OrgApacheXpathXPathVisitable < JavaObject >

/*!
 @brief This will traverse the heararchy, calling the visitor for 
  each member.If the called visitor method returns 
  false, the subtree should not be called.
 @param owner The owner of the visitor, where that path may be                rewritten if needed.
 @param visitor The visitor whose appropriate method will be called.
 */
- (void)callVisitorsWithOrgApacheXpathExpressionOwner:(id<OrgApacheXpathExpressionOwner>)owner
                       withOrgApacheXpathXPathVisitor:(OrgApacheXpathXPathVisitor *)visitor;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathXPathVisitable)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathXPathVisitable)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathXPathVisitable")