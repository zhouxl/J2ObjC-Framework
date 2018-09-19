//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/IntStack.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsIntStack")
#ifdef RESTRICT_OrgApacheXmlUtilsIntStack
#define INCLUDE_ALL_OrgApacheXmlUtilsIntStack 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsIntStack 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsIntStack

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlUtilsIntStack_) && (INCLUDE_ALL_OrgApacheXmlUtilsIntStack || defined(INCLUDE_OrgApacheXmlUtilsIntStack))
#define OrgApacheXmlUtilsIntStack_

#define RESTRICT_OrgApacheXmlUtilsIntVector 1
#define INCLUDE_OrgApacheXmlUtilsIntVector 1
#include "../../../../org/apache/xml/utils/IntVector.h"

/*!
 @brief Implement a stack of simple integers.
 %OPT%
  This is currently based on IntVector, which permits fast acess but pays a
  heavy recopying penalty if/when its size is increased. If we expect deep
  stacks, we should consider a version based on ChunkedIntVector.
 */
@interface OrgApacheXmlUtilsIntStack : OrgApacheXmlUtilsIntVector

#pragma mark Public

/*!
 @brief Default constructor.Note that the default
  block size is very small, for small lists.
 */
- (instancetype __nonnull)init;

/*!
 @brief Construct a IntVector, using the given block size.
 @param blocksize Size of block to allocate
 */
- (instancetype __nonnull)initWithInt:(jint)blocksize;

/*!
 @brief Copy constructor for IntStack
 @param v IntStack to copy
 */
- (instancetype __nonnull)initWithOrgApacheXmlUtilsIntStack:(OrgApacheXmlUtilsIntStack *)v;

/*!
 @brief Returns clone of current IntStack
 @return clone of current IntStack
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
- (jint)peek;

/*!
 @brief Looks at the object at the position the stack counting down n items.
 @param n The number of items down, indexed from zero.
 @return the object at n items down.
 @throw EmptyStackExceptionif this stack is empty.
 */
- (jint)peekWithInt:(jint)n;

/*!
 @brief Removes the object at the top of this stack and returns that
  object as the value of this function.
 @return The object at the top of this stack.
 */
- (jint)pop;

/*!
 @brief Pushes an item onto the top of this stack.
 @param i the int to be pushed onto this stack.
 @return the <code>item</code> argument.
 */
- (jint)pushWithInt:(jint)i;

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
- (jint)searchWithInt:(jint)o;

/*!
 @brief Sets an object at a the top of the statck
 @param val object to set at the top
 @throw EmptyStackExceptionif this stack is empty.
 */
- (void)setTopWithInt:(jint)val;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithInt:(jint)arg0
                              withInt:(jint)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithOrgApacheXmlUtilsIntVector:(OrgApacheXmlUtilsIntVector *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsIntStack)

FOUNDATION_EXPORT void OrgApacheXmlUtilsIntStack_init(OrgApacheXmlUtilsIntStack *self);

FOUNDATION_EXPORT OrgApacheXmlUtilsIntStack *new_OrgApacheXmlUtilsIntStack_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsIntStack *create_OrgApacheXmlUtilsIntStack_init(void);

FOUNDATION_EXPORT void OrgApacheXmlUtilsIntStack_initWithInt_(OrgApacheXmlUtilsIntStack *self, jint blocksize);

FOUNDATION_EXPORT OrgApacheXmlUtilsIntStack *new_OrgApacheXmlUtilsIntStack_initWithInt_(jint blocksize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsIntStack *create_OrgApacheXmlUtilsIntStack_initWithInt_(jint blocksize);

FOUNDATION_EXPORT void OrgApacheXmlUtilsIntStack_initWithOrgApacheXmlUtilsIntStack_(OrgApacheXmlUtilsIntStack *self, OrgApacheXmlUtilsIntStack *v);

FOUNDATION_EXPORT OrgApacheXmlUtilsIntStack *new_OrgApacheXmlUtilsIntStack_initWithOrgApacheXmlUtilsIntStack_(OrgApacheXmlUtilsIntStack *v) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsIntStack *create_OrgApacheXmlUtilsIntStack_initWithOrgApacheXmlUtilsIntStack_(OrgApacheXmlUtilsIntStack *v);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsIntStack)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsIntStack")
