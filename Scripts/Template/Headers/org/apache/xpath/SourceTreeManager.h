//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/SourceTreeManager.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathSourceTreeManager")
#ifdef RESTRICT_OrgApacheXpathSourceTreeManager
#define INCLUDE_ALL_OrgApacheXpathSourceTreeManager 0
#else
#define INCLUDE_ALL_OrgApacheXpathSourceTreeManager 1
#endif
#undef RESTRICT_OrgApacheXpathSourceTreeManager

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathSourceTreeManager_) && (INCLUDE_ALL_OrgApacheXpathSourceTreeManager || defined(INCLUDE_OrgApacheXpathSourceTreeManager))
#define OrgApacheXpathSourceTreeManager_

@class OrgApacheXpathXPathContext;
@protocol JavaxXmlTransformSource;
@protocol JavaxXmlTransformSourceLocator;
@protocol JavaxXmlTransformURIResolver;
@protocol OrgXmlSaxXMLReader;

/*!
 @brief This class bottlenecks all management of source trees.The methods
  in this class should allow easy garbage collection of source
  trees (not yet!)
 , and should centralize parsing for those source trees.
 */
@interface OrgApacheXpathSourceTreeManager : NSObject {
 @public
  /*!
   @brief The TrAX URI resolver used to obtain source trees.
   */
  id<JavaxXmlTransformURIResolver> m_uriResolver_;
}

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Given a document, find the URL associated with that document.
 @param owner Document that was previously processed by this liaison.
 @return The base URI of the owner argument.
 */
- (NSString *)findURIFromDocWithInt:(jint)owner;

/*!
 @brief Given a Source object, find the node associated with it.
 @param source The Source object to act as the key.
 @return The node that is associated with the Source, or null if not found.
 */
- (jint)getNodeWithJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)source;

/*!
 @brief Get the source tree from the input source.
 @param source The Source object that should identify the desired node.
 @param locator The location of the caller, for diagnostic purposes.
 @return non-null reference to a node.
 @throw TransformerExceptionif the Source argument can't be resolved to 
          a node.
 */
- (jint)getSourceTreeWithJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)source
              withJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)locator
                  withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Get the source tree from the a base URL and a URL string.
 @param base The base URI to use if the urlString is relative.
 @param urlString An absolute or relative URL string.
 @param locator The location of the caller, for diagnostic purposes.
 @return should be a non-null reference to the node identified by the 
  base and urlString.
 @throw TransformerExceptionIf the URL can not resolve to a node.
 */
- (jint)getSourceTreeWithNSString:(NSString *)base
                     withNSString:(NSString *)urlString
withJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)locator
   withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Get the object that will be used to resolve URIs used in
  document(), etc.
 @return An object that implements the URIResolver interface,
  or null.
 */
- (id<JavaxXmlTransformURIResolver>)getURIResolver;

/*!
 @brief This method returns the SAX2 parser to use with the InputSource
  obtained from this URI.
 It may return null if any SAX2-conformant XML parser can be used,
  or if getInputSource() will also return null. The parser must
  be free for use (i.e.
  not currently in use for another parse().
 @param inputSource The value returned from the URIResolver.
 @return a SAX2 XMLReader to use to resolve the inputSource argument.
 @param locator The location of the original caller, for diagnostic purposes.
 @throw TransformerExceptionif the reader can not be created.
 */
+ (id<OrgXmlSaxXMLReader>)getXMLReaderWithJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)inputSource
                               withJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)locator;

/*!
 @brief Try to create a DOM source tree from the input source.
 @param source The Source object that identifies the source node.
 @param locator The location of the caller, for diagnostic purposes.
 @return non-null reference to node identified by the source argument.
 @throw TransformerExceptionif the source argument can not be resolved 
          to a source node.
 */
- (jint)parseToNodeWithJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)source
            withJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)locator
                withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Put the source tree root node in the document cache.
 TODO: This function needs to be a LOT more sophisticated.
 @param n The node to cache.
 @param source The Source object to cache.
 */
- (void)putDocumentInCacheWithInt:(jint)n
      withJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)source;

/*!
 @brief JJK: Support  <?
 xalan:doc_cache_off?> kluge in ElemForEach.
 TODO: This function is highly dangerous. Cache management must be improved.
 @param n The node to remove.
 */
- (void)removeDocumentFromCacheWithInt:(jint)n;

/*!
 @brief Reset the list of SourceTree objects that this manager manages.
 */
- (void)reset;

/*!
 @brief This will be called by the processor when it encounters
  an xsl:include, xsl:import, or document() function.
 @param base The base URI that should be used.
 @param urlString Value from an xsl:import or xsl:include's href attribute,  or a URI specified in the document() function.
 @return a Source that can be used to process the resource.
 @throw IOException
 @throw TransformerException
 */
- (id<JavaxXmlTransformSource>)resolveURIWithNSString:(NSString *)base
                                         withNSString:(NSString *)urlString
                   withJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)locator;

/*!
 @brief Set an object that will be used to resolve URIs used in
  document(), etc.
 @param resolver An object that implements the URIResolver interface,  or null.
 */
- (void)setURIResolverWithJavaxXmlTransformURIResolver:(id<JavaxXmlTransformURIResolver>)resolver;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathSourceTreeManager)

J2OBJC_FIELD_SETTER(OrgApacheXpathSourceTreeManager, m_uriResolver_, id<JavaxXmlTransformURIResolver>)

FOUNDATION_EXPORT void OrgApacheXpathSourceTreeManager_init(OrgApacheXpathSourceTreeManager *self);

FOUNDATION_EXPORT OrgApacheXpathSourceTreeManager *new_OrgApacheXpathSourceTreeManager_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathSourceTreeManager *create_OrgApacheXpathSourceTreeManager_init(void);

FOUNDATION_EXPORT id<OrgXmlSaxXMLReader> OrgApacheXpathSourceTreeManager_getXMLReaderWithJavaxXmlTransformSource_withJavaxXmlTransformSourceLocator_(id<JavaxXmlTransformSource> inputSource, id<JavaxXmlTransformSourceLocator> locator);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathSourceTreeManager)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathSourceTreeManager")
