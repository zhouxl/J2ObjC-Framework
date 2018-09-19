//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/ObjectStack.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsObjectStack")
#ifdef RESTRICT_OrgApacheXmlUtilsObjectStack
#define INCLUDE_ALL_OrgApacheXmlUtilsObjectStack 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsObjectStack 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsObjectStack

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlUtilsObjectStack_) && (INCLUDE_ALL_OrgApacheXmlUtilsObjectStack || defined(INCLUDE_OrgApacheXmlUtilsObjectStack))
#define OrgApacheXmlUtilsObjectStack_

#define RESTRICT_OrgApacheXmlUtilsObjectVector 1
#define INCLUDE_OrgApacheXmlUtilsObjectVector 1
#include "../../../../org/apache/xml/utils/ObjectVector.h"

/*!
 @brief Implement a stack of simple integers.
 %OPT%
  This is currently based on ObjectVector, which permits fast acess but pays a
  heavy recopying penalty if/when its size is increased. If we expect deep
  stacks, we should consider a version based on ChunkedObjectVector.
 */
@interface OrgApacheXmlUtilsObjectStack : OrgApacheXmlUtilsObjectVector

#pragma mark Public

/*!
 @brief Default constructor.Note that the default
  block size is very small, for small lists.
 */
- (instancetype)init;

/*!
 @brief Construct a ObjectVector, using the given block size.
 @param blocksize Size of block to allocate
 */
- (instancetype)initWithInt:(jint)blocksize;

/*!
 @brief Copy constructor for ObjectStack
 @param v ObjectStack to copy
 */
- (instancetype)initWithOrgApacheXmlUtilsObjectStack:(OrgApacheXmlUtilsObjectStack *)v;

/*!
 @brief Returns clone of current ObjectStack
 @return clone of current ObjectStack
 */
- (id)java_clone;

/*!
 @brief Tests if this stack is empty.
 @return <code>true</code> if this stack is empty;
           <code>false</code> otherwise.
 @since JDK1.0
 */
- (jboolean)empty;

/*!
 @brief Looks at the object at the top of this stack without removing it
  from the stack.
 @return the object at the top of this stack.
 @throw EmptyStackExceptionif this stack is empty.
 */
- (id)peek;

/*!
 @brief Looks at the object at the position the stack counting down n items.
 @param n The number of items down, indexed from zero.
 @return the object at n items down.
 @throw EmptyStackExceptionif this stack is empty.
 */
- (id)peekWithInt:(jint)n;

/*!
 @brief Removes the object at the top of this stack and returns that
  object as the value of this function.
 @return The object at the top of this stack.
 */
- (id)pop;

/*!
 @brief Pushes an item onto the top of this stack.
 @param i the int to be pushed onto this stack.
 @return the <code>item</code> argument.
 */
- (id)pushWithId:(id)i;

/*!
 @brief Quickly pops a number of items from the stack.
 */
- (void)quickPopWithInt:(jint)n;

/*!
 @brief Returns where an object is on this stack.
 @param o the desired object.
 @return the distance from the top of the stack where the object is]
           located; the return value <code>-1</code> indicates that the
           object is not on the stack.
 @since JDK1.0
 */
- (jint)searchWithId:(id)o;

/*!
 @brief Sets an object at a the top of the statck
 @param val object to set at the top
 @throw EmptyStackExceptionif this stack is empty.
 */
- (void)setTopWithId:(id)val;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithInt:(jint)arg0
                    withInt:(jint)arg1 NS_UNAVAILABLE;

- (instancetype)initWithOrgApacheXmlUtilsObjectVector:(OrgApacheXmlUtilsObjectVector *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsObjectStack)

FOUNDATION_EXPORT void OrgApacheXmlUtilsObjectStack_init(OrgApacheXmlUtilsObjectStack *self);

FOUNDATION_EXPORT OrgApacheXmlUtilsObjectStack *new_OrgApacheXmlUtilsObjectStack_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsObjectStack *create_OrgApacheXmlUtilsObjectStack_init(void);

FOUNDATION_EXPORT void OrgApacheXmlUtilsObjectStack_initWithInt_(OrgApacheXmlUtilsObjectStack *self, jint blocksize);

FOUNDATION_EXPORT OrgApacheXmlUtilsObjectStack *new_OrgApacheXmlUtilsObjectStack_initWithInt_(jint blocksize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsObjectStack *create_OrgApacheXmlUtilsObjectStack_initWithInt_(jint blocksize);

FOUNDATION_EXPORT void OrgApacheXmlUtilsObjectStack_initWithOrgApacheXmlUtilsObjectStack_(OrgApacheXmlUtilsObjectStack *self, OrgApacheXmlUtilsObjectStack *v);

FOUNDATION_EXPORT OrgApacheXmlUtilsObjectStack *new_OrgApacheXmlUtilsObjectStack_initWithOrgApacheXmlUtilsObjectStack_(OrgApacheXmlUtilsObjectStack *v) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsObjectStack *create_OrgApacheXmlUtilsObjectStack_initWithOrgApacheXmlUtilsObjectStack_(OrgApacheXmlUtilsObjectStack *v);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsObjectStack)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsObjectStack")