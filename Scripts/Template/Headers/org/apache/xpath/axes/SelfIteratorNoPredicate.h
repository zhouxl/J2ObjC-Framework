//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/axes/SelfIteratorNoPredicate.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathAxesSelfIteratorNoPredicate")
#ifdef RESTRICT_OrgApacheXpathAxesSelfIteratorNoPredicate
#define INCLUDE_ALL_OrgApacheXpathAxesSelfIteratorNoPredicate 0
#else
#define INCLUDE_ALL_OrgApacheXpathAxesSelfIteratorNoPredicate 1
#endif
#undef RESTRICT_OrgApacheXpathAxesSelfIteratorNoPredicate

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathAxesSelfIteratorNoPredicate_) && (INCLUDE_ALL_OrgApacheXpathAxesSelfIteratorNoPredicate || defined(INCLUDE_OrgApacheXpathAxesSelfIteratorNoPredicate))
#define OrgApacheXpathAxesSelfIteratorNoPredicate_

#define RESTRICT_OrgApacheXpathAxesLocPathIterator 1
#define INCLUDE_OrgApacheXpathAxesLocPathIterator 1
#include "../../../../org/apache/xpath/axes/LocPathIterator.h"

@class OrgApacheXpathCompilerCompiler;
@class OrgApacheXpathXPathContext;
@protocol OrgApacheXmlUtilsPrefixResolver;

/*!
 @brief This class implements an optimized iterator for
  "." patterns, that is, the self axes without any predicates.
 - seealso: org.apache.xpath.axes.LocPathIterator
 */
@interface OrgApacheXpathAxesSelfIteratorNoPredicate : OrgApacheXpathAxesLocPathIterator
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Create a SelfIteratorNoPredicate object.
 @throw javax.xml.transform.TransformerException
 */
- (instancetype __nonnull)init;

/*!
 @brief Return the first node out of the nodeset, if this expression is 
  a nodeset expression.This is the default implementation for 
  nodesets.
 Derived classes should try and override this and return a 
  value without having to do a clone operation.
 @param xctxt The XPath runtime context.
 @return the first node out of the nodeset, or DTM.NULL.
 */
- (jint)asNodeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Get the index of the last node that can be itterated to.
 This probably will need to be overridded by derived classes.
 @param xctxt XPath runtime context.
 @return the index of the last node that can be itterated to.
 */
- (jint)getLastPosWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Returns the next node in the set and advances the position of the
  iterator in the set.After a NodeIterator is created, the first call
  to nextNode() returns the first node in the set.
 @return The next <code>Node</code> in the set being iterated over, or
    <code>null</code> if there are no more members in that set.
 */
- (jint)nextNode;

#pragma mark Package-Private

/*!
 @brief Create a SelfIteratorNoPredicate object.
 @param compiler A reference to the Compiler that contains the op map.
 @param opPos The position within the op map, which contains the  location path expression for this itterator.
 @param analysis Analysis bits.
 @throw javax.xml.transform.TransformerException
 */
- (instancetype __nonnull)initWithOrgApacheXpathCompilerCompiler:(OrgApacheXpathCompilerCompiler *)compiler
                                                         withInt:(jint)opPos
                                                         withInt:(jint)analysis;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithOrgApacheXmlUtilsPrefixResolver:(id<OrgApacheXmlUtilsPrefixResolver>)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithOrgApacheXpathCompilerCompiler:(OrgApacheXpathCompilerCompiler *)arg0
                                                         withInt:(jint)arg1
                                                         withInt:(jint)arg2
                                                     withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathAxesSelfIteratorNoPredicate)

inline jlong OrgApacheXpathAxesSelfIteratorNoPredicate_get_serialVersionUID(void);
#define OrgApacheXpathAxesSelfIteratorNoPredicate_serialVersionUID -4226887905279814201LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathAxesSelfIteratorNoPredicate, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathAxesSelfIteratorNoPredicate_initWithOrgApacheXpathCompilerCompiler_withInt_withInt_(OrgApacheXpathAxesSelfIteratorNoPredicate *self, OrgApacheXpathCompilerCompiler *compiler, jint opPos, jint analysis);

FOUNDATION_EXPORT OrgApacheXpathAxesSelfIteratorNoPredicate *new_OrgApacheXpathAxesSelfIteratorNoPredicate_initWithOrgApacheXpathCompilerCompiler_withInt_withInt_(OrgApacheXpathCompilerCompiler *compiler, jint opPos, jint analysis) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathAxesSelfIteratorNoPredicate *create_OrgApacheXpathAxesSelfIteratorNoPredicate_initWithOrgApacheXpathCompilerCompiler_withInt_withInt_(OrgApacheXpathCompilerCompiler *compiler, jint opPos, jint analysis);

FOUNDATION_EXPORT void OrgApacheXpathAxesSelfIteratorNoPredicate_init(OrgApacheXpathAxesSelfIteratorNoPredicate *self);

FOUNDATION_EXPORT OrgApacheXpathAxesSelfIteratorNoPredicate *new_OrgApacheXpathAxesSelfIteratorNoPredicate_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathAxesSelfIteratorNoPredicate *create_OrgApacheXpathAxesSelfIteratorNoPredicate_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathAxesSelfIteratorNoPredicate)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathAxesSelfIteratorNoPredicate")
