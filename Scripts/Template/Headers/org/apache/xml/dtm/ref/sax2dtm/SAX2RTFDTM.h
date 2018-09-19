//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/dtm/ref/sax2dtm/SAX2RTFDTM.java
//

#include "../../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlDtmRefSax2dtmSAX2RTFDTM")
#ifdef RESTRICT_OrgApacheXmlDtmRefSax2dtmSAX2RTFDTM
#define INCLUDE_ALL_OrgApacheXmlDtmRefSax2dtmSAX2RTFDTM 0
#else
#define INCLUDE_ALL_OrgApacheXmlDtmRefSax2dtmSAX2RTFDTM 1
#endif
#undef RESTRICT_OrgApacheXmlDtmRefSax2dtmSAX2RTFDTM

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlDtmRefSax2dtmSAX2RTFDTM_) && (INCLUDE_ALL_OrgApacheXmlDtmRefSax2dtmSAX2RTFDTM || defined(INCLUDE_OrgApacheXmlDtmRefSax2dtmSAX2RTFDTM))
#define OrgApacheXmlDtmRefSax2dtmSAX2RTFDTM_

#define RESTRICT_OrgApacheXmlDtmRefSax2dtmSAX2DTM 1
#define INCLUDE_OrgApacheXmlDtmRefSax2dtmSAX2DTM 1
#include "../../../../../../org/apache/xml/dtm/ref/sax2dtm/SAX2DTM.h"

@class OrgApacheXmlDtmDTMManager;
@class OrgApacheXmlUtilsIntStack;
@class OrgApacheXmlUtilsXMLStringFactory;
@protocol JavaxXmlTransformSource;
@protocol OrgApacheXmlDtmDTMWSFilter;

/*!
 @brief This is a subclass of SAX2DTM which has been modified to meet the needs of
  Result Tree Frameworks (RTFs).The differences are:
  1) Multiple XML trees may be appended to the single DTM.
 This means
  that the root node of each document is _not_ node 0. Some code has
  had to be deoptimized to support this mode of operation, and an
  explicit mechanism for obtaining the Node Handle of the root node
  has been provided.
  2) A stack of these documents is maintained, allowing us to "tail-prune" the
  most recently added trees off the end of the DTM as stylesheet elements 
  (and thus variable contexts) are exited.
  PLEASE NOTE that this class may be _heavily_ dependent upon the
  internals of the SAX2DTM superclass, and must be maintained in
  parallel with that code.  Arguably, they should be conditionals
  within a single class... but they have deen separated for
  performance reasons. (In fact, one could even argue about which is
  the superclass and which is the subclass; the current arrangement
  is as much about preserving stability of existing code during
  development as anything else.) 
  %REVIEW% In fact, since the differences are so minor, I think it
  may be possible/practical to fold them back into the base
  SAX2DTM. Consider that as a future code-size optimization.
 */
@interface OrgApacheXmlDtmRefSax2dtmSAX2RTFDTM : OrgApacheXmlDtmRefSax2dtmSAX2DTM {
 @public
  /*!
   @brief Tail-pruning mark: Number of nodes in use
   */
  OrgApacheXmlUtilsIntStack *mark_size_;
  /*!
   @brief Tail-pruning mark: Number of data items in use
   */
  OrgApacheXmlUtilsIntStack *mark_data_size_;
  /*!
   @brief Tail-pruning mark: Number of size-of-data fields in use
   */
  OrgApacheXmlUtilsIntStack *mark_char_size_;
  /*!
   @brief Tail-pruning mark: Number of dataOrQName slots in use
   */
  OrgApacheXmlUtilsIntStack *mark_doq_size_;
  /*!
   @brief Tail-pruning mark: Number of namespace declaration sets in use
  %REVIEW% I don't think number of NS sets is ever different from number
  of NS elements.We can probabably reduce these to a single stack and save
  some storage.
   */
  OrgApacheXmlUtilsIntStack *mark_nsdeclset_size_;
  /*!
   @brief Tail-pruning mark: Number of naespace declaration elements in use
  %REVIEW% I don't think number of NS sets is ever different from number
  of NS elements.We can probabably reduce these to a single stack and save
  some storage.
   */
  OrgApacheXmlUtilsIntStack *mark_nsdeclelem_size_;
  /*!
   @brief Tail-pruning mark:  initial number of nodes in use
   */
  jint m_emptyNodeCount_;
  /*!
   @brief Tail-pruning mark:  initial number of namespace declaration sets
   */
  jint m_emptyNSDeclSetCount_;
  /*!
   @brief Tail-pruning mark:  initial number of namespace declaration elements
   */
  jint m_emptyNSDeclSetElemsCount_;
  /*!
   @brief Tail-pruning mark:  initial number of data items in use
   */
  jint m_emptyDataCount_;
  /*!
   @brief Tail-pruning mark:  initial number of characters in use
   */
  jint m_emptyCharsCount_;
  /*!
   @brief Tail-pruning mark:  default initial number of dataOrQName slots in use
   */
  jint m_emptyDataQNCount_;
}

#pragma mark Public

- (instancetype)initWithOrgApacheXmlDtmDTMManager:(OrgApacheXmlDtmDTMManager *)mgr
                      withJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)source
                                          withInt:(jint)dtmIdentity
                   withOrgApacheXmlDtmDTMWSFilter:(id<OrgApacheXmlDtmDTMWSFilter>)whiteSpaceFilter
            withOrgApacheXmlUtilsXMLStringFactory:(OrgApacheXmlUtilsXMLStringFactory *)xstringfactory
                                      withBoolean:(jboolean)doIndexing;

/*!
 @brief Receive notification of the end of the document.
 %REVIEW% Y'know, this isn't all that much of a deoptimization. We
  might want to consider folding the start/endDocument changes back
  into the main SAX2DTM so we don't have to expose so many fields
  (even as Protected).
 @throw SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: org.xml.sax.ContentHandler
 */
- (void)endDocument;

/*!
 @brief Given a DTM, find the owning document node.In the case of
  SAX2RTFDTM, which may contain multiple documents, this returns
  the <b>most recently started</b> document, or null if the DTM is
  empty or no document is currently under construction.
 %REVIEW% Should we continue to report the most recent after
  construction has ended? I think not, given that it may have been
  tail-pruned.
 @return int Node handle of Document node, or null if this DTM does not
   contain an "active" document.
 */
- (jint)getDocument;

/*!
 @brief Given a node handle, find the owning document node, using DTM semantics
  (Document owns itself) rather than DOM semantics (Document has no owner).
 (I'm counting on the fact that getOwnerDocument() is implemented on top
  of this call, in the superclass, to avoid having to rewrite that one.
  Be careful if that code changes!)
 @param nodeHandle the id of the node.
 @return int Node handle of owning document
 */
- (jint)getDocumentRootWithInt:(jint)nodeHandle;

/*!
 @return true if a DTM tree is currently under construction.
 */
- (jboolean)isTreeIncomplete;

/*!
 @brief "Tail-pruning" support for RTFs.
 This function pops the information previously saved by
  pushRewindMark (which see) and uses it to discard all nodes added
  to the DTM after that time. We expect that this will allow us to
  reuse storage more effectively.
  This is _not_ intended to be called while a document is still being
  constructed -- only between endDocument and the next startDocument
  %REVIEW% WARNING: This is the first use of some of the truncation
  methods.  If Xalan blows up after this is called, that's a likely
  place to check.
  %REVIEW% Our original design for DTMs permitted them to share
  string pools.  If there any risk that this might be happening, we
  can _not_ rewind and recover the string storage. One solution
  might to assert that DTMs used for RTFs Must Not take advantage
  of that feature, but this seems excessively fragile. Another, much
  less attractive, would be to just let them leak... Nah.
 @return true if and only if the pop completely emptied the
  RTF. That response is used when determining how to unspool
  RTF-started-while-RTF-open situations.
 */
- (jboolean)popRewindMark;

/*!
 @brief "Tail-pruning" support for RTFs.
 This function pushes information about the current size of the
  DTM's data structures onto a stack, for use by popRewindMark()
  (which see).
  %REVIEW% I have no idea how to rewind m_elemIndexes. However,
  RTFs will not be indexed, so I can simply panic if that case
  arises. Hey, it works...
 */
- (void)pushRewindMark;

/*!
 @brief Receive notification of the beginning of a new RTF document.
 %REVIEW% Y'know, this isn't all that much of a deoptimization. We
  might want to consider folding the start/endDocument changes back
  into the main SAX2DTM so we don't have to expose so many fields
  (even as Protected) and carry the additional code.
 @throw SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: org.xml.sax.ContentHandler
 */
- (void)startDocument;

#pragma mark Protected

/*!
 @brief Given a node identifier, find the owning document node.Unlike the DOM,
  this considers the owningDocument of a Document to be itself.
 Note that
  in shared DTMs this may not be zero.
 @param nodeIdentifier the id of the starting node.
 @return int Node identifier of the root of this DTM tree
 */
- (jint)_documentRootWithInt:(jint)nodeIdentifier;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithOrgApacheXmlDtmDTMManager:(OrgApacheXmlDtmDTMManager *)arg0
                      withJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)arg1
                                          withInt:(jint)arg2
                   withOrgApacheXmlDtmDTMWSFilter:(id<OrgApacheXmlDtmDTMWSFilter>)arg3
            withOrgApacheXmlUtilsXMLStringFactory:(OrgApacheXmlUtilsXMLStringFactory *)arg4
                                      withBoolean:(jboolean)arg5
                                          withInt:(jint)arg6
                                      withBoolean:(jboolean)arg7
                                      withBoolean:(jboolean)arg8 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlDtmRefSax2dtmSAX2RTFDTM)

J2OBJC_FIELD_SETTER(OrgApacheXmlDtmRefSax2dtmSAX2RTFDTM, mark_size_, OrgApacheXmlUtilsIntStack *)
J2OBJC_FIELD_SETTER(OrgApacheXmlDtmRefSax2dtmSAX2RTFDTM, mark_data_size_, OrgApacheXmlUtilsIntStack *)
J2OBJC_FIELD_SETTER(OrgApacheXmlDtmRefSax2dtmSAX2RTFDTM, mark_char_size_, OrgApacheXmlUtilsIntStack *)
J2OBJC_FIELD_SETTER(OrgApacheXmlDtmRefSax2dtmSAX2RTFDTM, mark_doq_size_, OrgApacheXmlUtilsIntStack *)
J2OBJC_FIELD_SETTER(OrgApacheXmlDtmRefSax2dtmSAX2RTFDTM, mark_nsdeclset_size_, OrgApacheXmlUtilsIntStack *)
J2OBJC_FIELD_SETTER(OrgApacheXmlDtmRefSax2dtmSAX2RTFDTM, mark_nsdeclelem_size_, OrgApacheXmlUtilsIntStack *)

FOUNDATION_EXPORT void OrgApacheXmlDtmRefSax2dtmSAX2RTFDTM_initWithOrgApacheXmlDtmDTMManager_withJavaxXmlTransformSource_withInt_withOrgApacheXmlDtmDTMWSFilter_withOrgApacheXmlUtilsXMLStringFactory_withBoolean_(OrgApacheXmlDtmRefSax2dtmSAX2RTFDTM *self, OrgApacheXmlDtmDTMManager *mgr, id<JavaxXmlTransformSource> source, jint dtmIdentity, id<OrgApacheXmlDtmDTMWSFilter> whiteSpaceFilter, OrgApacheXmlUtilsXMLStringFactory *xstringfactory, jboolean doIndexing);

FOUNDATION_EXPORT OrgApacheXmlDtmRefSax2dtmSAX2RTFDTM *new_OrgApacheXmlDtmRefSax2dtmSAX2RTFDTM_initWithOrgApacheXmlDtmDTMManager_withJavaxXmlTransformSource_withInt_withOrgApacheXmlDtmDTMWSFilter_withOrgApacheXmlUtilsXMLStringFactory_withBoolean_(OrgApacheXmlDtmDTMManager *mgr, id<JavaxXmlTransformSource> source, jint dtmIdentity, id<OrgApacheXmlDtmDTMWSFilter> whiteSpaceFilter, OrgApacheXmlUtilsXMLStringFactory *xstringfactory, jboolean doIndexing) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmRefSax2dtmSAX2RTFDTM *create_OrgApacheXmlDtmRefSax2dtmSAX2RTFDTM_initWithOrgApacheXmlDtmDTMManager_withJavaxXmlTransformSource_withInt_withOrgApacheXmlDtmDTMWSFilter_withOrgApacheXmlUtilsXMLStringFactory_withBoolean_(OrgApacheXmlDtmDTMManager *mgr, id<JavaxXmlTransformSource> source, jint dtmIdentity, id<OrgApacheXmlDtmDTMWSFilter> whiteSpaceFilter, OrgApacheXmlUtilsXMLStringFactory *xstringfactory, jboolean doIndexing);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmRefSax2dtmSAX2RTFDTM)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlDtmRefSax2dtmSAX2RTFDTM")
