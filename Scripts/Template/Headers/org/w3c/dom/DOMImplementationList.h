//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/w3c/dom/DOMImplementationList.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("OrgW3cDomDOMImplementationList_INCLUDE_ALL")
#ifdef OrgW3cDomDOMImplementationList_RESTRICT
#define OrgW3cDomDOMImplementationList_INCLUDE_ALL 0
#else
#define OrgW3cDomDOMImplementationList_INCLUDE_ALL 1
#endif
#undef OrgW3cDomDOMImplementationList_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgW3cDomDOMImplementationList_) && (OrgW3cDomDOMImplementationList_INCLUDE_ALL || defined(OrgW3cDomDOMImplementationList_INCLUDE))
#define OrgW3cDomDOMImplementationList_

@protocol OrgW3cDomDOMImplementation;

/*!
 @brief The <code>DOMImplementationList</code> interface provides the abstraction
 of an ordered collection of DOM implementations, without defining or
 constraining how this collection is implemented.
 The items in the
 <code>DOMImplementationList</code> are accessible via an integral index,
 starting from 0.
 <p>See also the <a href='http://www.w3.org/TR/2004/REC-DOM-Level-3-Core-20040407'>Document Object Model (DOM) Level 3 Core Specification</a>.
 @since DOM Level 3
 */
@protocol OrgW3cDomDOMImplementationList < NSObject, JavaObject >

/*!
 @brief Returns the <code>index</code>th item in the collection.
 If
 <code>index</code> is greater than or equal to the number of
 <code>DOMImplementation</code>s in the list, this returns
 <code>null</code>.
 @param index Index into the collection.
 @return The <code>DOMImplementation</code> at the <code>index</code>
 th position in the <code>DOMImplementationList</code>, or
 <code>null</code> if that is not a valid index.
 */
- (id<OrgW3cDomDOMImplementation>)itemWithInt:(jint)index;

/*!
 @brief The number of <code>DOMImplementation</code>s in the list.
 The range
 of valid child node indices is 0 to <code>length-1</code> inclusive.
 */
- (jint)getLength;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomDOMImplementationList)

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomDOMImplementationList)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("OrgW3cDomDOMImplementationList_INCLUDE_ALL")
