//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/AccessController.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaSecurityAccessController_INCLUDE_ALL")
#ifdef JavaSecurityAccessController_RESTRICT
#define JavaSecurityAccessController_INCLUDE_ALL 0
#else
#define JavaSecurityAccessController_INCLUDE_ALL 1
#endif
#undef JavaSecurityAccessController_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityAccessController_) && (JavaSecurityAccessController_INCLUDE_ALL || defined(JavaSecurityAccessController_INCLUDE))
#define JavaSecurityAccessController_

@class JavaSecurityAccessControlContext;
@class JavaSecurityPermission;
@protocol JavaSecurityPrivilegedAction;
@protocol JavaSecurityPrivilegedExceptionAction;

/*!
 @brief Legacy security code; do not use.
 */
@interface JavaSecurityAccessController : NSObject

#pragma mark Public

+ (void)checkPermissionWithJavaSecurityPermission:(JavaSecurityPermission *)permission;

/*!
 @brief Calls <code>action.run()</code>.
 */
+ (id)doPrivilegedWithJavaSecurityPrivilegedAction:(id<JavaSecurityPrivilegedAction>)action;

/*!
 @brief Calls <code>action.run()</code>.
 */
+ (id)doPrivilegedWithJavaSecurityPrivilegedAction:(id<JavaSecurityPrivilegedAction>)action
              withJavaSecurityAccessControlContext:(JavaSecurityAccessControlContext *)context;

/*!
 @brief Calls <code>action.run()</code>.
 */
+ (id)doPrivilegedWithJavaSecurityPrivilegedExceptionAction:(id<JavaSecurityPrivilegedExceptionAction>)action;

/*!
 @brief Calls <code>action.run()</code>.
 */
+ (id)doPrivilegedWithJavaSecurityPrivilegedExceptionAction:(id<JavaSecurityPrivilegedExceptionAction>)action
                       withJavaSecurityAccessControlContext:(JavaSecurityAccessControlContext *)context;

/*!
 @brief Calls <code>action.run()</code>.
 */
+ (id)doPrivilegedWithCombinerWithJavaSecurityPrivilegedAction:(id<JavaSecurityPrivilegedAction>)action;

/*!
 @brief Calls <code>action.run()</code>.
 */
+ (id)doPrivilegedWithCombinerWithJavaSecurityPrivilegedExceptionAction:(id<JavaSecurityPrivilegedExceptionAction>)action;

+ (JavaSecurityAccessControlContext *)getContext;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityAccessController)

FOUNDATION_EXPORT id JavaSecurityAccessController_doPrivilegedWithJavaSecurityPrivilegedAction_(id<JavaSecurityPrivilegedAction> action);

FOUNDATION_EXPORT id JavaSecurityAccessController_doPrivilegedWithJavaSecurityPrivilegedAction_withJavaSecurityAccessControlContext_(id<JavaSecurityPrivilegedAction> action, JavaSecurityAccessControlContext *context);

FOUNDATION_EXPORT id JavaSecurityAccessController_doPrivilegedWithJavaSecurityPrivilegedExceptionAction_(id<JavaSecurityPrivilegedExceptionAction> action);

FOUNDATION_EXPORT id JavaSecurityAccessController_doPrivilegedWithJavaSecurityPrivilegedExceptionAction_withJavaSecurityAccessControlContext_(id<JavaSecurityPrivilegedExceptionAction> action, JavaSecurityAccessControlContext *context);

FOUNDATION_EXPORT id JavaSecurityAccessController_doPrivilegedWithCombinerWithJavaSecurityPrivilegedAction_(id<JavaSecurityPrivilegedAction> action);

FOUNDATION_EXPORT id JavaSecurityAccessController_doPrivilegedWithCombinerWithJavaSecurityPrivilegedExceptionAction_(id<JavaSecurityPrivilegedExceptionAction> action);

FOUNDATION_EXPORT void JavaSecurityAccessController_checkPermissionWithJavaSecurityPermission_(JavaSecurityPermission *permission);

FOUNDATION_EXPORT JavaSecurityAccessControlContext *JavaSecurityAccessController_getContext();

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityAccessController)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaSecurityAccessController_INCLUDE_ALL")
