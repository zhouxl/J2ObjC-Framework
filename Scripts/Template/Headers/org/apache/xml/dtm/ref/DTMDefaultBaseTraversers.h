//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/dtm/ref/DTMDefaultBaseTraversers.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlDtmRefDTMDefaultBaseTraversers")
#ifdef RESTRICT_OrgApacheXmlDtmRefDTMDefaultBaseTraversers
#define INCLUDE_ALL_OrgApacheXmlDtmRefDTMDefaultBaseTraversers 0
#else
#define INCLUDE_ALL_OrgApacheXmlDtmRefDTMDefaultBaseTraversers 1
#endif
#undef RESTRICT_OrgApacheXmlDtmRefDTMDefaultBaseTraversers

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlDtmRefDTMDefaultBaseTraversers_) && (INCLUDE_ALL_OrgApacheXmlDtmRefDTMDefaultBaseTraversers || defined(INCLUDE_OrgApacheXmlDtmRefDTMDefaultBaseTraversers))
#define OrgApacheXmlDtmRefDTMDefaultBaseTraversers_

#define RESTRICT_OrgApacheXmlDtmRefDTMDefaultBase 1
#define INCLUDE_OrgApacheXmlDtmRefDTMDefaultBase 1
#include "org/apache/xml/dtm/ref/DTMDefaultBase.h"

@class OrgApacheXmlDtmDTMAxisTraverser;
@class OrgApacheXmlDtmDTMManager;
@class OrgApacheXmlUtilsXMLStringFactory;
@protocol JavaxXmlTransformSource;
@protocol OrgApacheXmlDtmDTMWSFilter;

/*!
 @brief This class implements the traversers for DTMDefaultBase.
 PLEASE NOTE that the public interface for all traversers should be
  in terms of DTM Node Handles... but they may use the internal node
  identity indices within their logic, for efficiency's sake. Be very
  careful to avoid confusing these when maintaining this code.
 */
@interface OrgApacheXmlDtmRefDTMDefaultBaseTraversers : OrgApacheXmlDtmRefDTMDefaultBase

#pragma mark Public

/*!
 @brief Construct a DTMDefaultBaseTraversers object from a DOM node.
 @param mgr The DTMManager who owns this DTM.
 @param source The object that is used to specify the construction source.
 @param dtmIdentity The DTM identity ID for this DTM.
 @param whiteSpaceFilter The white space filter for this DTM, which may                          be null.
 @param xstringfactory The factory to use for creating XMLStrings.
 @param doIndexing true if the caller considers it worth it to use                    indexing schemes.
 */
- (instancetype __nonnull)initWithOrgApacheXmlDtmDTMManager:(OrgApacheXmlDtmDTMManager *)mgr
                                withJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)source
                                                    withInt:(jint)dtmIdentity
                             withOrgApacheXmlDtmDTMWSFilter:(id<OrgApacheXmlDtmDTMWSFilter>)whiteSpaceFilter
                      withOrgApacheXmlUtilsXMLStringFactory:(OrgApacheXmlUtilsXMLStringFactory *)xstringfactory
                                                withBoolean:(jboolean)doIndexing;

/*!
 @brief Construct a DTMDefaultBaseTraversers object from a DOM node.
 @param mgr The DTMManager who owns this DTM.
 @param source The object that is used to specify the construction source.
 @param dtmIdentity The DTM identity ID for this DTM.
 @param whiteSpaceFilter The white space filter for this DTM, which may                          be null.
 @param xstringfactory The factory to use for creating XMLStrings.
 @param doIndexing true if the caller considers it worth it to use                    indexing schemes.
 @param blocksize The block size of the DTM.
 @param usePrevsib true if we want to build the previous sibling node array.
 @param newNameTable true if we want to use a new ExpandedNameTable for this DTM.
 */
- (instancetype __nonnull)initWithOrgApacheXmlDtmDTMManager:(OrgApacheXmlDtmDTMManager *)mgr
                                withJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)source
                                                    withInt:(jint)dtmIdentity
                             withOrgApacheXmlDtmDTMWSFilter:(id<OrgApacheXmlDtmDTMWSFilter>)whiteSpaceFilter
                      withOrgApacheXmlUtilsXMLStringFactory:(OrgApacheXmlUtilsXMLStringFactory *)xstringfactory
                                                withBoolean:(jboolean)doIndexing
                                                    withInt:(jint)blocksize
                                                withBoolean:(jboolean)usePrevsib
                                                withBoolean:(jboolean)newNameTable;

/*!
 @brief This returns a stateless "traverser", that can navigate
  over an XPath axis, though perhaps not in document order.
 @param axis One of Axes.ANCESTORORSELF, etc.
 @return A DTMAxisTraverser, or null if the given axis isn't supported.
 */
- (OrgApacheXmlDtmDTMAxisTraverser *)getAxisTraverserWithInt:(jint)axis;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlDtmRefDTMDefaultBaseTraversers)

FOUNDATION_EXPORT void OrgApacheXmlDtmRefDTMDefaultBaseTraversers_initWithOrgApacheXmlDtmDTMManager_withJavaxXmlTransformSource_withInt_withOrgApacheXmlDtmDTMWSFilter_withOrgApacheXmlUtilsXMLStringFactory_withBoolean_(OrgApacheXmlDtmRefDTMDefaultBaseTraversers *self, OrgApacheXmlDtmDTMManager *mgr, id<JavaxXmlTransformSource> source, jint dtmIdentity, id<OrgApacheXmlDtmDTMWSFilter> whiteSpaceFilter, OrgApacheXmlUtilsXMLStringFactory *xstringfactory, jboolean doIndexing);

FOUNDATION_EXPORT void OrgApacheXmlDtmRefDTMDefaultBaseTraversers_initWithOrgApacheXmlDtmDTMManager_withJavaxXmlTransformSource_withInt_withOrgApacheXmlDtmDTMWSFilter_withOrgApacheXmlUtilsXMLStringFactory_withBoolean_withInt_withBoolean_withBoolean_(OrgApacheXmlDtmRefDTMDefaultBaseTraversers *self, OrgApacheXmlDtmDTMManager *mgr, id<JavaxXmlTransformSource> source, jint dtmIdentity, id<OrgApacheXmlDtmDTMWSFilter> whiteSpaceFilter, OrgApacheXmlUtilsXMLStringFactory *xstringfactory, jboolean doIndexing, jint blocksize, jboolean usePrevsib, jboolean newNameTable);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmRefDTMDefaultBaseTraversers)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlDtmRefDTMDefaultBaseTraversers")
