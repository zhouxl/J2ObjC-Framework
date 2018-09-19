//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/dtm/DTMAxisTraverser.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlDtmDTMAxisTraverser")
#ifdef RESTRICT_OrgApacheXmlDtmDTMAxisTraverser
#define INCLUDE_ALL_OrgApacheXmlDtmDTMAxisTraverser 0
#else
#define INCLUDE_ALL_OrgApacheXmlDtmDTMAxisTraverser 1
#endif
#undef RESTRICT_OrgApacheXmlDtmDTMAxisTraverser

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlDtmDTMAxisTraverser_) && (INCLUDE_ALL_OrgApacheXmlDtmDTMAxisTraverser || defined(INCLUDE_OrgApacheXmlDtmDTMAxisTraverser))
#define OrgApacheXmlDtmDTMAxisTraverser_

/*!
 @brief A class that implements traverses DTMAxisTraverser interface can traverse
  a set of nodes, usually as defined by an XPath axis.It is different from
  an iterator, because it does not need to hold state, and, in fact, must not
  hold any iteration-based state.
 It is meant to be implemented as an inner
  class of a DTM, and returned by the getAxisTraverser(final int axis)
  function. 
 <p>A DTMAxisTraverser can probably not traverse a reverse axis in
  document order.</p>
  
 <p>Typical usage:</p>
  @code
<code>
  for(int nodeHandle=myTraverser.first(myContext);
      nodeHandle!=DTM.NULL;
      nodeHandle=myTraverser.next(myContext,nodeHandle))
  { ... processing for node indicated by nodeHandle goes here ... } 
  </code>
@endcode
 @author Scott Boag
 */
@interface OrgApacheXmlDtmDTMAxisTraverser : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief By the nature of the stateless traversal, the context node can not be
  returned or the iteration will go into an infinate loop.So to traverse 
  an axis, the first function must be used to get the first node.
 <p>This method needs to be overloaded only by those axis that process
  the self node. <\p>
 @param context The context node of this traversal. This is the point  that the traversal starts from.
 @return the first node in the traversal.
 */
- (jint)firstWithInt:(jint)context;

/*!
 @brief By the nature of the stateless traversal, the context node can not be
  returned or the iteration will go into an infinate loop.So to traverse 
  an axis, the first function must be used to get the first node.
 <p>This method needs to be overloaded only by those axis that process
  the self node. <\p>
 @param context The context node of this traversal. This is the point  of origin for the traversal -- its "root node" or starting point.
 @param extendedTypeID The extended type ID that must match.
 @return the first node in the traversal.
 */
- (jint)firstWithInt:(jint)context
             withInt:(jint)extendedTypeID;

/*!
 @brief Traverse to the next node after the current node.
 @param context The context node of this traversal. This is the point  of origin for the traversal -- its "root node" or starting point.
 @param current The current node of the traversal. This is the last known  location in the traversal, typically the node-handle returned by the
   previous traversal step. For the first traversal step, context
   should be set equal to current. Note that in order to test whether
   context is in the set, you must use the first() method instead.
 @return the next node in the iteration, or DTM.NULL.
 - seealso: #first(int)
 */
- (jint)nextWithInt:(jint)context
            withInt:(jint)current;

/*!
 @brief Traverse to the next node after the current node that is matched
  by the extended type ID.
 @param context The context node of this traversal. This is the point  of origin for the traversal -- its "root node" or starting point.
 @param current The current node of the traversal. This is the last known  location in the traversal, typically the node-handle returned by the
   previous traversal step. For the first traversal step, context
   should be set equal to current. Note that in order to test whether
   context is in the set, you must use the first() method instead.
 @param extendedTypeID The extended type ID that must match.
 @return the next node in the iteration, or DTM.NULL.
 - seealso: #first(int,int)
 */
- (jint)nextWithInt:(jint)context
            withInt:(jint)current
            withInt:(jint)extendedTypeID;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlDtmDTMAxisTraverser)

FOUNDATION_EXPORT void OrgApacheXmlDtmDTMAxisTraverser_init(OrgApacheXmlDtmDTMAxisTraverser *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmDTMAxisTraverser)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlDtmDTMAxisTraverser")
