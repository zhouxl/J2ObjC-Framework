//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/transformer/TransformerImpl.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTransformerTransformerImpl")
#ifdef RESTRICT_OrgApacheXalanTransformerTransformerImpl
#define INCLUDE_ALL_OrgApacheXalanTransformerTransformerImpl 0
#else
#define INCLUDE_ALL_OrgApacheXalanTransformerTransformerImpl 1
#endif
#undef RESTRICT_OrgApacheXalanTransformerTransformerImpl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTransformerTransformerImpl_) && (INCLUDE_ALL_OrgApacheXalanTransformerTransformerImpl || defined(INCLUDE_OrgApacheXalanTransformerTransformerImpl))
#define OrgApacheXalanTransformerTransformerImpl_

#define RESTRICT_JavaxXmlTransformTransformer 1
#define INCLUDE_JavaxXmlTransformTransformer 1
#include "../../../../javax/xml/transform/Transformer.h"

#define RESTRICT_JavaLangRunnable 1
#define INCLUDE_JavaLangRunnable 1
#include "../../../../java/lang/Runnable.h"

#define RESTRICT_OrgApacheXmlDtmDTMWSFilter 1
#define INCLUDE_OrgApacheXmlDtmDTMWSFilter 1
#include "../../../../org/apache/xml/dtm/DTMWSFilter.h"

#define RESTRICT_OrgApacheXpathExtensionsProvider 1
#define INCLUDE_OrgApacheXpathExtensionsProvider 1
#include "../../../../org/apache/xpath/ExtensionsProvider.h"

#define RESTRICT_OrgApacheXmlSerializerSerializerTrace 1
#define INCLUDE_OrgApacheXmlSerializerSerializerTrace 1
#include "../../../../org/apache/xml/serializer/SerializerTrace.h"

@class IOSCharArray;
@class JavaLangException;
@class JavaLangThread;
@class JavaUtilProperties;
@class JavaUtilStack;
@class JavaUtilVector;
@class OrgApacheXalanExtensionsExtensionsTable;
@class OrgApacheXalanTemplatesElemAttributeSet;
@class OrgApacheXalanTemplatesElemForEach;
@class OrgApacheXalanTemplatesElemTemplate;
@class OrgApacheXalanTemplatesElemTemplateElement;
@class OrgApacheXalanTemplatesOutputProperties;
@class OrgApacheXalanTemplatesStylesheetRoot;
@class OrgApacheXalanTransformerCountersTable;
@class OrgApacheXalanTransformerKeyManager;
@class OrgApacheXalanTransformerMsgMgr;
@class OrgApacheXmlSerializerToXMLSAXHandler;
@class OrgApacheXmlUtilsBoolStack;
@class OrgApacheXmlUtilsNodeVector;
@class OrgApacheXmlUtilsObjectStack;
@class OrgApacheXmlUtilsQName;
@class OrgApacheXpathFunctionsFuncExtFunction;
@class OrgApacheXpathXPathContext;
@protocol JavaxXmlTransformErrorListener;
@protocol JavaxXmlTransformResult;
@protocol JavaxXmlTransformSource;
@protocol JavaxXmlTransformURIResolver;
@protocol OrgApacheXmlDtmDTM;
@protocol OrgApacheXmlDtmDTMIterator;
@protocol OrgApacheXmlSerializerSerializationHandler;
@protocol OrgW3cDomNode;
@protocol OrgXmlSaxAttributes;
@protocol OrgXmlSaxContentHandler;

/*!
 @brief This class implements the 
 <code>javax.xml.transform.Transformer</code> interface, and is the core
  representation of the transformation execution.
 </p>
 */
@interface OrgApacheXalanTransformerTransformerImpl : JavaxXmlTransformTransformer < JavaLangRunnable, OrgApacheXmlDtmDTMWSFilter, OrgApacheXpathExtensionsProvider, OrgApacheXmlSerializerSerializerTrace > {
 @public
  /*!
   @brief The content handler for the source input tree.
   */
  id<OrgXmlSaxContentHandler> m_inputContentHandler_;
  /*!
   @brief A node vector used as a stack to track the current
  ElemTemplateElement.Needed for the
  org.apache.xalan.transformer.TransformState interface,
  so a tool can discover the calling template.
   Note the use of an array 
  for this limits the recursion depth to 4K.
   */
  OrgApacheXmlUtilsObjectStack *m_currentTemplateElements_;
  /*!
   @brief A node vector used as a stack to track the current
  ElemTemplate that was matched.
   Needed for the
  org.apache.xalan.transformer.TransformState interface,
  so a tool can discover the matched template
   */
  JavaUtilStack *m_currentMatchTemplates_;
  /*!
   @brief A node vector used as a stack to track the current
  node that was matched.
   Needed for the
  org.apache.xalan.transformer.TransformState interface,
  so a tool can discover the matched
  node.
   */
  OrgApacheXmlUtilsNodeVector *m_currentMatchedNodes_;
  /*!
   @brief Stack for the purposes of flagging infinite recursion with
  attribute sets.
   */
  JavaUtilStack *m_attrSetStack_;
  /*!
   @brief The table of counters for xsl:number support.
   */
  OrgApacheXalanTransformerCountersTable *m_countersTable_;
  /*!
   @brief Is > 0 when we're processing a for-each.
   */
  OrgApacheXmlUtilsBoolStack *m_currentTemplateRuleIsNull_;
  /*!
   @brief Keeps track of the result delivered by any EXSLT <code>func:result</code>
  instruction that has been executed for the currently active EXSLT 
 <code>func:function</code>
   */
  OrgApacheXmlUtilsObjectStack *m_currentFuncResult_;
  /*!
   @brief NEEDSDOC Field m_userParams
   */
  JavaUtilVector *m_userParams_;
}

#pragma mark Public

/*!
 @brief Construct a TransformerImpl.
 @param stylesheet The root of the stylesheet tree.
 */
- (instancetype)initWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)stylesheet;

/*!
 @brief Given an element and mode, find the corresponding
  template and process the contents.
 @param xslInstruction The calling element.
 @param template_ The template to use if xsl:for-each, current template for apply-imports, or null.
 @param child The source context node.
 @throw TransformerException
 @return true if applied a template, false if not.
 */
- (jboolean)applyTemplateToNodeWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)xslInstruction
                                      withOrgApacheXalanTemplatesElemTemplate:(OrgApacheXalanTemplatesElemTemplate *)template_
                                                                      withInt:(jint)child;

/*!
 @brief Reset the parameters to a null list.
 */
- (void)clearParameters;

/*!
 @brief Create a result ContentHandler from a Result object, based
  on the current OutputProperties.
 @param outputTarget Where the transform result should go,  should not be null.
 @return A valid ContentHandler that will create the
  result tree when it is fed SAX events.
 @throw TransformerException
 */
- (id<OrgApacheXmlSerializerSerializationHandler>)createSerializationHandlerWithJavaxXmlTransformResult:(id<JavaxXmlTransformResult>)outputTarget;

/*!
 @brief Create a ContentHandler from a Result object and an OutputProperties.
 @param outputTarget Where the transform result should go,  should not be null.
 @param format The OutputProperties object that will contain  instructions on how to serialize the output.
 @return A valid ContentHandler that will create the
  result tree when it is fed SAX events.
 @throw TransformerException
 */
- (id<OrgApacheXmlSerializerSerializationHandler>)createSerializationHandlerWithJavaxXmlTransformResult:(id<JavaxXmlTransformResult>)outputTarget
                                                            withOrgApacheXalanTemplatesOutputProperties:(OrgApacheXalanTemplatesOutputProperties *)format;

/*!
 @brief Determines whether an EXSLT <code>func:result</code> instruction has been
  executed for the currently active EXSLT <code>func:function</code>.
 @return <code>true</code> if and only if a <code>func:result</code>
  instruction has been executed
 */
- (jboolean)currentFuncResultSeen;

/*!
 @brief Tell if the current template rule is null, i.e.if we are
  directly within an apply-templates.
 Used for xsl:apply-imports.
 @return True if the current template rule is null.
 */
- (jboolean)currentTemplateRuleIsNull;

- (jboolean)elementAvailableWithNSString:(NSString *)ns
                            withNSString:(NSString *)elemName;

/*!
 @brief Execute each of the children of a template element.
 @param elem The ElemTemplateElement that contains the children  that should execute.
 @param shouldAddAttrs true if xsl:attributes should be executed.
 @throw TransformerException
 */
- (void)executeChildTemplatesWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)elem
                                                                withBoolean:(jboolean)shouldAddAttrs;

/*!
 @brief Execute each of the children of a template element.
 @param elem The ElemTemplateElement that contains the children  that should execute.
 @param handler The ContentHandler to where the result events  should be fed.
 @throw TransformerException
 */
- (void)executeChildTemplatesWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)elem
                                                withOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)handler;

/*!
 @brief Execute each of the children of a template element.This method
  is only for extension use.
 @param elem The ElemTemplateElement that contains the children  that should execute.
   NEEDSDOC @@param context
 @param mode The current mode.
 @param handler The ContentHandler to where the result events  should be fed.
 @throw TransformerException
 */
- (void)executeChildTemplatesWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)elem
                                                          withOrgW3cDomNode:(id<OrgW3cDomNode>)context
                                                 withOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)mode
                                                withOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)handler;

- (id)extFunctionWithOrgApacheXpathFunctionsFuncExtFunction:(OrgApacheXpathFunctionsFuncExtFunction *)extFunction
                                         withJavaUtilVector:(JavaUtilVector *)argVec;

- (id)extFunctionWithNSString:(NSString *)ns
                 withNSString:(NSString *)funcName
           withJavaUtilVector:(JavaUtilVector *)argVec
                       withId:(id)methodKey;

/*!
 @brief Fire off startDocument, endDocument events.
 - seealso: org.apache.xml.serializer.SerializerTrace
 */
- (void)fireGenerateEventWithInt:(jint)eventType;

/*!
 @brief Fire off characters, cdate events.
 - seealso: org.apache.xml.serializer.SerializerTrace
 */
- (void)fireGenerateEventWithInt:(jint)eventType
                   withCharArray:(IOSCharArray *)ch
                         withInt:(jint)start
                         withInt:(jint)length;

/*!
 @brief Fire off comment and entity ref events.
 - seealso: org.apache.xml.serializer.SerializerTrace
 */
- (void)fireGenerateEventWithInt:(jint)eventType
                    withNSString:(NSString *)data;

/*!
 @brief Fire off startElement, endElement events.
 - seealso: org.apache.xml.serializer.SerializerTrace
 */
- (void)fireGenerateEventWithInt:(jint)eventType
                    withNSString:(NSString *)name
         withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)atts;

/*!
 @brief Fire off processingInstruction events.
 */
- (void)fireGenerateEventWithInt:(jint)eventType
                    withNSString:(NSString *)name
                    withNSString:(NSString *)data;

- (jboolean)functionAvailableWithNSString:(NSString *)ns
                             withNSString:(NSString *)funcName;

/*!
 @brief Get the content event handler.
 @return The current content handler, or null if none was set.
 - seealso: org.xml.sax.XMLReader
 */
- (id<OrgXmlSaxContentHandler>)getContentHandler;

/*!
 @brief Get the current context node list.
 @return A reset clone of the context node list.
 */
- (id<OrgApacheXmlDtmDTMIterator>)getContextNodeList;

/*!
 @brief Get the table of counters, for optimized xsl:number support.
 @return The CountersTable, never null.
 */
- (OrgApacheXalanTransformerCountersTable *)getCountersTable;

/*!
 @brief Retrieves the current ElemTemplateElement that is
  being executed.
 @return The current ElemTemplateElement that is executing,
  should not normally be null.
 */
- (OrgApacheXalanTemplatesElemTemplateElement *)getCurrentElement;

/*!
 @brief This method retrieves the current context node
  in the source tree.
 @return The current context node (should never be null?).
 */
- (jint)getCurrentNode;

/*!
 @brief This method retrieves the xsl:template
  that is in effect, which may be a matched template
  or a named template.
 <p>Please note that the ElemTemplate returned may
  be a default template, and thus may not have a template
  defined in the stylesheet.</p>
 @return The current xsl:template, should not be null.
 */
- (OrgApacheXalanTemplatesElemTemplate *)getCurrentTemplate;

/*!
 @brief Get the count of how many elements are 
  active.
 @return The number of active elements on 
  the currentTemplateElements stack.
 */
- (OrgApacheXmlUtilsObjectStack *)getCurrentTemplateElements;

/*!
 @brief Get the count of how many elements are 
  active.
 @return The number of active elements on 
  the currentTemplateElements stack.
 */
- (jint)getCurrentTemplateElementsCount;

/*!
 @brief Get the current error event handler.
 @return The current error handler, which should never be null.
 */
- (id<JavaxXmlTransformErrorListener>)getErrorListener;

/*!
 @brief Get the exception thrown by the secondary thread (normally
  the transform thread).
 @return The thrown exception, or null if no exception was
  thrown.
 */
- (JavaLangException *)getExceptionThrown;

/*!
 @brief Get the extensions table object.
 @return The extensions table.
 */
- (OrgApacheXalanExtensionsExtensionsTable *)getExtensionsTable;

/*!
 @brief Look up the value of a feature.
 <p>The feature name is any fully-qualified URI.  It is
  possible for an TransformerFactory to recognize a feature name but
  to be unable to return its value; this is especially true
  in the case of an adapter for a SAX1 Parser, which has
  no way of knowing whether the underlying parser is
  validating, for example.</p>
  
 <h3>Open issues:</h3>
  <dl>
     <dt><h4>Should getFeature be changed to hasFeature?</h4></dt>
     <dd>Keith Visco writes: Should getFeature be changed to hasFeature?
         It returns a boolean which indicated whether the "state"
         of feature is "true or false". I assume this means whether
         or not a feature is supported? I know SAX is using "getFeature",
         but to me "hasFeature" is cleaner.</dd>
  </dl>
 @param name The feature name, which is a fully-qualified         URI.
 @return The current state of the feature (true or false).
 @throw org.xml.sax.SAXNotRecognizedExceptionWhen the
             TransformerFactory does not recognize the feature name.
 @throw org.xml.sax.SAXNotSupportedExceptionWhen the
             TransformerFactory recognizes the feature name but
             cannot determine its value at this time.
 @throw SAXNotRecognizedException
 @throw SAXNotSupportedException
 */
- (jboolean)getFeatureWithNSString:(NSString *)name;

/*!
 @return Incremental flag
 */
- (jboolean)getIncremental;

/*!
 @brief Get a SAX2 ContentHandler for the input.
 @return A valid ContentHandler, which should never be null, as
  long as getFeature("http://xml.org/trax/features/sax/input")
  returns true.
 */
- (id<OrgXmlSaxContentHandler>)getInputContentHandler;

/*!
 @brief Get a SAX2 ContentHandler for the input.
 @param doDocFrag true if a DocumentFragment should be created as  the root, rather than a Document.
 @return A valid ContentHandler, which should never be null, as
  long as getFeature("http://xml.org/trax/features/sax/input")
  returns true.
 */
- (id<OrgXmlSaxContentHandler>)getInputContentHandlerWithBoolean:(jboolean)doDocFrag;

/*!
 @brief Get the KeyManager object.
 @return A reference to the KeyManager object, which should
  never be null.
 */
- (OrgApacheXalanTransformerKeyManager *)getKeyManager;

/*!
 @brief Retrieves the node in the source tree that matched
  the template obtained via getMatchedTemplate().
 @return The matched node that corresponds to the
  match attribute of the current xsl:template.
 */
- (jint)getMatchedNode;

/*!
 @brief This method retrieves the xsl:template
  that was matched.Note that this may not be
  the same thing as the current template (which
  may be from getCurrentElement()), since a named
  template may be in effect.
 @return The pushed template that was pushed via pushPairCurrentMatched.
 */
- (OrgApacheXalanTemplatesElemTemplate *)getMatchedTemplate;

/*!
 @brief NEEDSDOC Method getMode 
  NEEDSDOC (getMode) @@return
 */
- (OrgApacheXmlUtilsQName *)getMode;

/*!
 @brief Return the message manager.
 @return The message manager, never null.
 */
- (OrgApacheXalanTransformerMsgMgr *)getMsgMgr;

/*!
 @return Optimization flag
 */
- (jboolean)getOptimize;

/*!
 @brief Get the output properties used for the transformation.
 @return the output format that was set by the user,
  otherwise the output format from the stylesheet.
 */
- (OrgApacheXalanTemplatesOutputProperties *)getOutputFormat;

/*!
 @brief Get a copy of the output properties for the transformation.These
  properties will override properties set in the templates
  with xsl:output.
 <p>Note that mutation of the Properties object returned will not
  effect the properties that the transformation contains.</p>
 @return A copy of the set of output properties in effect
  for the next transformation.
  NEEDSDOC ($objectName$) @@return
 */
- (JavaUtilProperties *)getOutputProperties;

/*!
 @brief Get an output property that is in effect for the
  transformation.The property specified may be a property
  that was set with setOutputProperty, or it may be a
  property specified in the stylesheet.
 NEEDSDOC @@param qnameString
 @return The string value of the output property, or null
  if no property was found.
 @throw IllegalArgumentExceptionIf the property is not supported.
 - seealso: javax.xml.transform.OutputKeys
 */
- (NSString *)getOutputPropertyWithNSString:(NSString *)qnameString;

/*!
 @brief Get the value of a property, without using the default properties.This
  can be used to test if a property has been explicitly set by the stylesheet
  or user.
 NEEDSDOC @@param qnameString
 @return The value of the property, or null if not found.
 @throw IllegalArgumentExceptionIf the property is not supported,
  and is not namespaced.
 */
- (NSString *)getOutputPropertyNoDefaultWithNSString:(NSString *)qnameString;

/*!
 @brief Get a parameter that was explicitly set with setParameter
  or setParameters.
 NEEDSDOC @@param name
 @return A parameter that has been set with setParameter
  or setParameters,
  *not* all the xsl:params on the stylesheet (which require
  a transformation Source to be evaluated).
 */
- (id)getParameterWithNSString:(NSString *)name;

/*!
 @brief Get quietConflictWarnings property.If the quietConflictWarnings
  property is set to true, warnings about pattern conflicts won't be
  printed to the diagnostics stream.
 @return True if this transformer should not report
  template match conflicts.
 */
- (jboolean)getQuietConflictWarnings;

/*!
 @brief Get the SerializationHandler object.
 @return The current SerializationHandler, which may not
  be the main result tree manager.
 */
- (id<OrgApacheXmlSerializerSerializationHandler>)getResultTreeHandler;

/*!
 @brief Get the SerializationHandler object.
 @return The current SerializationHandler, which may not
  be the main result tree manager.
 */
- (id<OrgApacheXmlSerializerSerializationHandler>)getSerializationHandler;

/*!
 @brief Test whether whitespace-only text nodes are visible in the logical
  view of <code>DTM</code>.Normally, this function
  will be called by the implementation of <code>DTM</code>;
  it is not normally called directly from
  user code.
 @param elementHandle int Handle of the element.
 @return one of NOTSTRIP, STRIP, or INHERIT.
 */
- (jshort)getShouldStripSpaceWithInt:(jint)elementHandle
              withOrgApacheXmlDtmDTM:(id<OrgApacheXmlDtmDTM>)dtm;

/*!
 @return Source location flag
 */
- (jboolean)getSource_location;

/*!
 @brief Get the current stylesheet for this processor.
 @return The stylesheet that is associated with this
  transformer.
 */
- (OrgApacheXalanTemplatesStylesheetRoot *)getStylesheet;

/*!
 @brief Get the TrAX Transformer object in effect.
 @return This object.
 */
- (JavaxXmlTransformTransformer *)getTransformer;

/*!
 @brief Get the thread that the transform process is on.
 @return The thread that the transform process is on, or null.
 */
- (JavaLangThread *)getTransformThread;

/*!
 @brief Get an object that will be used to resolve URIs used in
  document(), etc.
 @return An object that implements the URIResolver interface,
  or null.
 */
- (id<JavaxXmlTransformURIResolver>)getURIResolver;

/*!
 @brief Get the XPath context associated with this transformer.
 @return The XPathContext reference, never null.
 */
- (OrgApacheXpathXPathContext *)getXPathContext;

/*!
 - seealso: org.apache.xml.serializer.SerializerTrace
 */
- (jboolean)hasTraceListeners;

/*!
 @brief Return true if the transform was initiated from the transform method,
  otherwise it was probably done from a pure parse events.
 NEEDSDOC ($objectName$) @@return
 */
- (jboolean)hasTransformThreadErrorCatcher;

/*!
 @brief Initializer method.
 @param transformer non-null transformer instance
 @param realHandler Content Handler instance
 */
- (void)init__WithOrgApacheXmlSerializerToXMLSAXHandler:(OrgApacheXmlSerializerToXMLSAXHandler *)h
                       withJavaxXmlTransformTransformer:(JavaxXmlTransformTransformer *)transformer
                            withOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)realHandler OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Check to see if this is a recursive attribute definition.
 @param attrSet A non-null ElemAttributeSet reference.
 @return true if the attribute set is recursive.
 */
- (jboolean)isRecursiveAttrSetWithOrgApacheXalanTemplatesElemAttributeSet:(OrgApacheXalanTemplatesElemAttributeSet *)attrSet;

/*!
 @brief Pops the result of the currently active EXSLT <code>func:function</code>.
 @return the value of the <code>func:function</code>
 */
- (id)popCurrentFuncResult;

/*!
 @brief Pop the elements that were pushed via pushPairCurrentMatched.
 */
- (void)popCurrentMatched;

/*!
 @brief Push true if the current template rule is null, false
  otherwise.
 */
- (void)popCurrentTemplateRuleIsNull;

/*!
 @brief Pop the current executing attribute set.
 */
- (void)popElemAttributeSet;

/*!
 @brief Pop the current template element.
 */
- (void)popElemTemplateElement;

/*!
 @brief NEEDSDOC Method popMode
 */
- (void)popMode;

/*!
 @brief Get the keys for the xsl:sort elements.
 Note: Should this go into ElemForEach?
 @param foreach Valid ElemForEach element, not null.
 @param sourceNodeContext The current node context in the source tree,  needed to evaluate the Attribute Value Templates.
 @return A Vector of NodeSortKeys, or null.
 @throw TransformerException
 */
- (JavaUtilVector *)processSortKeysWithOrgApacheXalanTemplatesElemForEach:(OrgApacheXalanTemplatesElemForEach *)foreach
                                                                  withInt:(jint)sourceNodeContext;

/*!
 @brief Push a funcion result for the currently active EXSLT 
 <code>func:function</code>.
 @param val the result of executing an EXSLT  
  <code> func:result </code>  instruction for the current  
  <code> func:function </code> .
 */
- (void)pushCurrentFuncResultWithId:(id)val;

/*!
 @brief Push true if the current template rule is null, false
  otherwise.
 @param b True if the we are executing an xsl:for-each  (or xsl:call-template?).
 */
- (void)pushCurrentTemplateRuleIsNullWithBoolean:(jboolean)b;

/*!
 @brief Push an executing attribute set, so we can check for
  recursive attribute definitions.
 @param attrSet A non-null ElemAttributeSet reference.
 */
- (void)pushElemAttributeSetWithOrgApacheXalanTemplatesElemAttributeSet:(OrgApacheXalanTemplatesElemAttributeSet *)attrSet;

/*!
 @brief Push the current template element.
 @param elem The current ElemTemplateElement (may be null, and then  set via setCurrentElement).
 */
- (void)pushElemTemplateElementWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)elem;

/*!
 @brief NEEDSDOC Method pushMode 
  NEEDSDOC @@param mode
 */
- (void)pushModeWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)mode;

/*!
 @brief Push both the current xsl:template or xsl:for-each onto the
  stack, along with the child node that was matched.
 (Note: should this only be used for xsl:templates?? -sb)
 @param template_ xsl:template or xsl:for-each.
 @param child The child that was matched.
 */
- (void)pushPairCurrentMatchedWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)template_
                                                                     withInt:(jint)child;

/*!
 @brief Reset the state.This needs to be called after a process() call
  is invoked, if the processor is to be used again.
 */
- (void)reset;

/*!
 @brief Run the transform thread.
 */
- (void)run;

/*!
 @brief Called by this.transform() if isParserEventsOnMain()==false.
 Similar with runTransformThread(), but no priority is set
   and setTransformThread is not set.
 */
- (void)runTransformThread;

/*!
 @brief Called by SourceTreeHandler to start the transformation
   in a separate thread
  NEEDSDOC @@param priority
 */
- (void)runTransformThreadWithInt:(jint)priority;

/*!
 @brief Called by CoRoutineSAXParser.Launches the CoroutineSAXParser
  in a thread, and prepares it to invoke the parser from that thread
  upon request.
 */
+ (void)runTransformThreadWithJavaLangRunnable:(id<JavaLangRunnable>)runnable;

/*!
 @brief Get the base URL of the source.
 NEEDSDOC @@param base
 @return The base URL of the source tree, or null.
 */
- (void)setBaseURLOfSourceWithNSString:(NSString *)base;

/*!
 @brief Set the content event handler.
 NEEDSDOC @@param handler
 @throw java.lang.NullPointerExceptionIf the handler
             is null.
 - seealso: org.xml.sax.XMLReader
 */
- (void)setContentHandlerWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)handler;

/*!
 @brief Set the top of the current template elements
  stack.
 @param e The current ElemTemplateElement about to  be executed.
 */
- (void)setCurrentElementWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)e;

/*!
 @brief Set the error event listener.
 @param listener The new error listener.
 @throw IllegalArgumentExceptionif
 */
- (void)setErrorListenerWithJavaxXmlTransformErrorListener:(id<JavaxXmlTransformErrorListener>)listener;

/*!
 @brief Set the exception thrown by the secondary thread (normally
  the transform thread).
 @param e The thrown exception, or null if no exception was  thrown.
 */
- (void)setExceptionThrownWithJavaLangException:(JavaLangException *)e;

/*!
 @brief Set the output properties for the transformation.These
  properties will override properties set in the templates
  with xsl:output.
 @param oformat A valid OutputProperties object (which will  not be mutated), or null.
 */
- (void)setOutputFormatWithOrgApacheXalanTemplatesOutputProperties:(OrgApacheXalanTemplatesOutputProperties *)oformat;

/*!
 @brief Set the output properties for the transformation.These
  properties will override properties set in the templates
  with xsl:output.
 <p>If argument to this function is null, any properties
  previously set will be removed.</p>
 @param oformat A set of output properties that will be  used to override any of the same properties in effect
   for the transformation.
 - seealso: javax.xml.transform.OutputKeys
 - seealso: java.util.Properties
 @throw IllegalArgumentExceptionif any of the argument keys are not
  recognized and are not namespace qualified.
 */
- (void)setOutputPropertiesWithJavaUtilProperties:(JavaUtilProperties *)oformat;

/*!
 @brief This method is used to set or override the value
  of the effective xsl:output attribute values
  specified in the stylesheet.
 <p>
  The recognized standard output properties are: 
 <ul>
  <li>cdata-section-elements
  <li>doctype-system
  <li>doctype-public
  <li>indent
  <li>media-type
  <li>method
  <li>omit-xml-declaration
  <li>standalone
  <li>version
  </ul>
  <p>
  For example: 
 @code

    tran.setOutputProperty("standalone", "yes"); 
  
@endcode
  <p>
  In the case of the cdata-section-elements property,
  the value should be a whitespace separated list of
  element names.  The element name is the local name
  of the element, if it is in no namespace, or, the URI
  in braces followed immediately by the local name
  if the element is in that namespace. For example:  
 @code

  tran.setOutputProperty(
    "cdata-section-elements", 
    "elem1 {http://example.uri}elem2 elem3"); 
  
@endcode
  <p>
  The recognized Xalan extension elements are:  
 <ul>
  <li>content-handler
  <li>entities
  <li>indent-amount
  <li>line-separator
  <li>omit-meta-tag
  <li>use-url-escaping
  </ul>
  <p>
  These must be in the extension namespace of
  "http://xml.apache.org/xalan".  This is accomplished
  by putting the namespace URI in braces before the 
  property name, for example: 
 @code

    tran.setOutputProperty(
      "{http://xml.apache.org/xalan}line-separator" ,
      "\n"); 
  
@endcode
 @param name The property name.
 @param value The requested value for the property.
 @throw IllegalArgumentExceptionif the property name is not legal.
 */
- (void)setOutputPropertyWithNSString:(NSString *)name
                         withNSString:(NSString *)value;

/*!
 @brief Set a parameter for the transformation.
 @param name The name of the parameter,              which may have a namespace URI.
 @param value The value object.  This can be any valid Java object  -- it's up to the processor to provide the proper
   coersion to the object, or simply pass it on for use
   in extensions.
 */
- (void)setParameterWithNSString:(NSString *)name
                          withId:(id)value;

/*!
 @brief Set a parameter for the templates.
 @param name The name of the parameter.
 @param namespace_ The namespace of the parameter.
 @param value The value object.  This can be any valid Java object  -- it's up to the processor to provide the proper
   coersion to the object, or simply pass it on for use
   in extensions.
 */
- (void)setParameterWithNSString:(NSString *)name
                    withNSString:(NSString *)namespace_
                          withId:(id)value;

/*!
 @brief Set a bag of parameters for the transformation.Note that
  these will not be additive, they will replace the existing
  set of parameters.
 NEEDSDOC @@param params
 */
- (void)setParametersWithJavaUtilProperties:(JavaUtilProperties *)params;

- (void)setSerializationHandlerWithOrgApacheXmlSerializerSerializationHandler:(id<OrgApacheXmlSerializerSerializationHandler>)xoh;

/*!
 @brief This is just a way to set the document for run().
 @param doc A non-null reference to the root of the  tree to be transformed.
 */
- (void)setSourceTreeDocForThreadWithInt:(jint)doc;

/*!
 @brief Set the stylesheet for this processor.If this is set, then the
  process calls that take only the input .xml will use
  this instead of looking for a stylesheet PI.
 Also,
  setting the stylesheet is needed if you are going
  to use the processor as a SAX ContentHandler.
 @param stylesheetRoot A non-null StylesheetRoot object,  or null if you wish to clear the stylesheet reference.
 */
- (void)setStylesheetWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)stylesheetRoot;

/*!
 @brief Get the thread that the transform process is on.
 @param t The transform thread, may be null.
 */
- (void)setTransformThreadWithJavaLangThread:(JavaLangThread *)t;

/*!
 @brief Set an object that will be used to resolve URIs used in
  document(), etc.
 @param resolver An object that implements the URIResolver interface,  or null.
 */
- (void)setURIResolverWithJavaxXmlTransformURIResolver:(id<JavaxXmlTransformURIResolver>)resolver;

/*!
 @brief Set the execution context for XPath.
 @param xcontext A non-null reference to the XPathContext  associated with this transformer.
 */
- (void)setXPathContextWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xcontext;

/*!
 @brief Process the source tree to SAX parse events.
 @param source The input for the source tree.
 @throw TransformerException
 */
- (void)transformWithJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)source;

/*!
 @brief Process the source tree to SAX parse events.
 @param source The input for the source tree.
 @param shouldRelease Flag indicating whether to release DTMManager.
 @throw TransformerException
 */
- (void)transformWithJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)source
                                 withBoolean:(jboolean)shouldRelease;

/*!
 @brief Process the source tree to the output result.
 @param xmlSource The input for the source tree.
 @param outputTarget The output source target.
 @throw TransformerException
 */
- (void)transformWithJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)xmlSource
                 withJavaxXmlTransformResult:(id<JavaxXmlTransformResult>)outputTarget;

/*!
 @brief Process the source tree to the output result.
 @param xmlSource The input for the source tree.
 @param outputTarget The output source target.
 @param shouldRelease Flag indicating whether to release DTMManager.
 @throw TransformerException
 */
- (void)transformWithJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)xmlSource
                 withJavaxXmlTransformResult:(id<JavaxXmlTransformResult>)outputTarget
                                 withBoolean:(jboolean)shouldRelease;

/*!
 @brief Process the source node to the output result, if the
  processor supports the "http://xml.org/trax/features/dom/input"
  feature.
 %REVIEW% Do we need a Node version of this?
 @param node The input source node, which can be any valid DTM node.
 @throw TransformerException
 */
- (void)transformNodeWithInt:(jint)node;

/*!
 @brief Process the source node to the output result, if the
  processor supports the "http://xml.org/trax/features/dom/input"
  feature.
 %REVIEW% Do we need a Node version of this?
 @param node The input source node, which can be any valid DTM node.
 @param outputTarget The output source target.
 @throw TransformerException
 */
- (void)transformNodeWithInt:(jint)node
 withJavaxXmlTransformResult:(id<JavaxXmlTransformResult>)outputTarget;

/*!
 @brief Given a stylesheet element, create a result tree fragment from it's
  contents.The fragment will also use the shared DTM system, but will
  obtain its space from the global variable pool rather than the dynamic
  variable stack.
 This allows late binding of XUnresolvedVariables without
  the risk that their content will be discarded when the variable stack
  is popped.
 @param templateParent The template element that holds the fragment.
 @return the NodeHandle for the root node of the resulting RTF.
 @throw TransformerException
 */
- (jint)transformToGlobalRTFWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)templateParent;

/*!
 @brief Given a stylesheet element, create a result tree fragment from it's
  contents.The fragment will be built within the shared RTF DTM system
  used as a variable stack.
 @param templateParent The template element that holds the fragment.
 @return the NodeHandle for the root node of the resulting RTF.
 @throw TransformerException
 */
- (jint)transformToRTFWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)templateParent;

/*!
 @brief Take the contents of a template element, process it, and
  convert it to a string.
 @param elem The parent element whose children will be output  as a string.
 @return The stringized result of executing the elements children.
 @throw TransformerException
 */
- (NSString *)transformToStringWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)elem;

/*!
 @brief Used by SourceTreeHandler to wait until the transform
    completes
 @throw SAXException
 */
- (void)waitTransformThread;

#pragma mark Protected

/*!
 @brief Internal -- push the global variables from the Stylesheet onto
  the context's runtime variable stack.
 <p>If we encounter a variable
  that is already defined in the variable stack, we ignore it.  This
  is because the second variable definition will be at a lower import
  precedence.  Presumably, global"variables at the same import precedence
  with the same name will have been caught during the recompose process. 
 <p>However, if we encounter a parameter that is already defined in the
  variable stack, we need to see if this is a parameter whose value was
  supplied by a setParameter call.  If so, we need to "receive" the one
  already in the stack, ignoring this one.  If it is just an earlier
  xsl:param or xsl:variable definition, we ignore it using the same
  reasoning as explained above for the variable.
 @param contextNode The root of the source tree, can't be null.
 @throw TransformerException
 */
- (void)pushGlobalVarsWithInt:(jint)contextNode;

#pragma mark Package-Private

/*!
 @brief From a secondary thread, post the exception, so that
  it can be picked up from the main thread.
 @param e The exception that was thrown.
 */
- (void)postExceptionFromThreadWithJavaLangException:(JavaLangException *)e;

/*!
 @brief If the stylesheet contains extensions, set the extensions table object.
 @param sroot The stylesheet.
 @throw javax.xml.transform.TransformerException
 */
- (void)setExtensionsTableWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)sroot;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTransformerTransformerImpl)

J2OBJC_FIELD_SETTER(OrgApacheXalanTransformerTransformerImpl, m_inputContentHandler_, id<OrgXmlSaxContentHandler>)
J2OBJC_FIELD_SETTER(OrgApacheXalanTransformerTransformerImpl, m_currentTemplateElements_, OrgApacheXmlUtilsObjectStack *)
J2OBJC_FIELD_SETTER(OrgApacheXalanTransformerTransformerImpl, m_currentMatchTemplates_, JavaUtilStack *)
J2OBJC_FIELD_SETTER(OrgApacheXalanTransformerTransformerImpl, m_currentMatchedNodes_, OrgApacheXmlUtilsNodeVector *)
J2OBJC_FIELD_SETTER(OrgApacheXalanTransformerTransformerImpl, m_attrSetStack_, JavaUtilStack *)
J2OBJC_FIELD_SETTER(OrgApacheXalanTransformerTransformerImpl, m_countersTable_, OrgApacheXalanTransformerCountersTable *)
J2OBJC_FIELD_SETTER(OrgApacheXalanTransformerTransformerImpl, m_currentTemplateRuleIsNull_, OrgApacheXmlUtilsBoolStack *)
J2OBJC_FIELD_SETTER(OrgApacheXalanTransformerTransformerImpl, m_currentFuncResult_, OrgApacheXmlUtilsObjectStack *)
J2OBJC_FIELD_SETTER(OrgApacheXalanTransformerTransformerImpl, m_userParams_, JavaUtilVector *)

FOUNDATION_EXPORT void OrgApacheXalanTransformerTransformerImpl_initWithOrgApacheXalanTemplatesStylesheetRoot_(OrgApacheXalanTransformerTransformerImpl *self, OrgApacheXalanTemplatesStylesheetRoot *stylesheet);

FOUNDATION_EXPORT OrgApacheXalanTransformerTransformerImpl *new_OrgApacheXalanTransformerTransformerImpl_initWithOrgApacheXalanTemplatesStylesheetRoot_(OrgApacheXalanTemplatesStylesheetRoot *stylesheet) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTransformerTransformerImpl *create_OrgApacheXalanTransformerTransformerImpl_initWithOrgApacheXalanTemplatesStylesheetRoot_(OrgApacheXalanTemplatesStylesheetRoot *stylesheet);

FOUNDATION_EXPORT void OrgApacheXalanTransformerTransformerImpl_runTransformThreadWithJavaLangRunnable_(id<JavaLangRunnable> runnable);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTransformerTransformerImpl)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTransformerTransformerImpl")
