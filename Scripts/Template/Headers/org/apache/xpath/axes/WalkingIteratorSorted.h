//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/axes/WalkingIteratorSorted.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathAxesWalkingIteratorSorted")
#ifdef RESTRICT_OrgApacheXpathAxesWalkingIteratorSorted
#define INCLUDE_ALL_OrgApacheXpathAxesWalkingIteratorSorted 0
#else
#define INCLUDE_ALL_OrgApacheXpathAxesWalkingIteratorSorted 1
#endif
#undef RESTRICT_OrgApacheXpathAxesWalkingIteratorSorted

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathAxesWalkingIteratorSorted_) && (INCLUDE_ALL_OrgApacheXpathAxesWalkingIteratorSorted || defined(INCLUDE_OrgApacheXpathAxesWalkingIteratorSorted))
#define OrgApacheXpathAxesWalkingIteratorSorted_

#define RESTRICT_OrgApacheXpathAxesWalkingIterator 1
#define INCLUDE_OrgApacheXpathAxesWalkingIterator 1
#include "../../../../org/apache/xpath/axes/WalkingIterator.h"

@class JavaUtilVector;
@class OrgApacheXpathCompilerCompiler;
@protocol OrgApacheXmlUtilsPrefixResolver;

/*!
 @brief This class iterates over set of nodes that needs to be sorted.
 */
@interface OrgApacheXpathAxesWalkingIteratorSorted : OrgApacheXpathAxesWalkingIterator {
 @public
  /*!
   @brief True if the nodes will be found in document order, and this can 
  be determined statically.
   */
  jboolean m_inNaturalOrderStatic_;
}
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Create a WalkingIteratorSorted object.
 @param nscontext The namespace context for this iterator,  should be OK if null.
 */
- (instancetype __nonnull)initWithOrgApacheXmlUtilsPrefixResolver:(id<OrgApacheXmlUtilsPrefixResolver>)nscontext;

/*!
 @brief This function is used to perform some extra analysis of the iterator.
 @param vars List of QNames that correspond to variables.  This list   should be searched backwards for the first qualified name that 
   corresponds to the variable reference qname.  The position of the 
   QName in the vector from the start of the vector will be its position 
   in the stack frame (but variables above the globalsTop value will need 
   to be offset to the current stack frame).
 */
- (void)fixupVariablesWithJavaUtilVector:(JavaUtilVector *)vars
                                 withInt:(jint)globalsSize;

/*!
 @brief Returns true if all the nodes in the iteration well be returned in document 
  order.
 @return true as a default.
 */
- (jboolean)isDocOrdered;

#pragma mark Package-Private

/*!
 @brief Create a WalkingIterator iterator, including creation
  of step walkers from the opcode list, and call back
  into the Compiler to create predicate expressions.
 @param compiler The Compiler which is creating  this expression.
 @param opPos The position of this iterator in the  opcode list from the compiler.
 @param shouldLoadWalkers True if walkers should be  loaded, or false if this is a derived iterator and
   it doesn't wish to load child walkers.
 @throw javax.xml.transform.TransformerException
 */
- (instancetype __nonnull)initWithOrgApacheXpathCompilerCompiler:(OrgApacheXpathCompilerCompiler *)compiler
                                                         withInt:(jint)opPos
                                                         withInt:(jint)analysis
                                                     withBoolean:(jboolean)shouldLoadWalkers;

/*!
 @brief Tell if the nodeset can be walked in doc order, via static analysis.
 @return true if the nodeset can be walked in doc order, without sorting.
 */
- (jboolean)canBeWalkedInNaturalDocOrderStatic;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathAxesWalkingIteratorSorted)

inline jlong OrgApacheXpathAxesWalkingIteratorSorted_get_serialVersionUID(void);
#define OrgApacheXpathAxesWalkingIteratorSorted_serialVersionUID -4512512007542368213LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathAxesWalkingIteratorSorted, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathAxesWalkingIteratorSorted_initWithOrgApacheXmlUtilsPrefixResolver_(OrgApacheXpathAxesWalkingIteratorSorted *self, id<OrgApacheXmlUtilsPrefixResolver> nscontext);

FOUNDATION_EXPORT OrgApacheXpathAxesWalkingIteratorSorted *new_OrgApacheXpathAxesWalkingIteratorSorted_initWithOrgApacheXmlUtilsPrefixResolver_(id<OrgApacheXmlUtilsPrefixResolver> nscontext) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathAxesWalkingIteratorSorted *create_OrgApacheXpathAxesWalkingIteratorSorted_initWithOrgApacheXmlUtilsPrefixResolver_(id<OrgApacheXmlUtilsPrefixResolver> nscontext);

FOUNDATION_EXPORT void OrgApacheXpathAxesWalkingIteratorSorted_initWithOrgApacheXpathCompilerCompiler_withInt_withInt_withBoolean_(OrgApacheXpathAxesWalkingIteratorSorted *self, OrgApacheXpathCompilerCompiler *compiler, jint opPos, jint analysis, jboolean shouldLoadWalkers);

FOUNDATION_EXPORT OrgApacheXpathAxesWalkingIteratorSorted *new_OrgApacheXpathAxesWalkingIteratorSorted_initWithOrgApacheXpathCompilerCompiler_withInt_withInt_withBoolean_(OrgApacheXpathCompilerCompiler *compiler, jint opPos, jint analysis, jboolean shouldLoadWalkers) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathAxesWalkingIteratorSorted *create_OrgApacheXpathAxesWalkingIteratorSorted_initWithOrgApacheXpathCompilerCompiler_withInt_withInt_withBoolean_(OrgApacheXpathCompilerCompiler *compiler, jint opPos, jint analysis, jboolean shouldLoadWalkers);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathAxesWalkingIteratorSorted)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathAxesWalkingIteratorSorted")
