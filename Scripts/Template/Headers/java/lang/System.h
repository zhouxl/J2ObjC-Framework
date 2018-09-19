//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/java/lang/System.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangSystem")
#ifdef RESTRICT_JavaLangSystem
#define INCLUDE_ALL_JavaLangSystem 0
#else
#define INCLUDE_ALL_JavaLangSystem 1
#endif
#undef RESTRICT_JavaLangSystem

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangSystem_) && (INCLUDE_ALL_JavaLangSystem || defined(INCLUDE_JavaLangSystem))
#define JavaLangSystem_

@class JavaIoConsole;
@class JavaIoInputStream;
@class JavaIoPrintStream;
@class JavaLangSecurityManager;
@class JavaLangThrowable;
@class JavaUtilProperties;
@protocol JavaUtilMap;

/*!
 @brief Simple iOS version of java.lang.System.No code was shared, just its
  public API.
 @author Tom Ball
 */
@interface JavaLangSystem : NSObject

+ (JavaIoInputStream *)in;

+ (JavaIoPrintStream *)out;

+ (JavaIoPrintStream *)err;

#pragma mark Public

- (instancetype)init;

+ (void)arraycopyWithId:(id)src
                withInt:(jint)srcPos
                 withId:(id)dest
                withInt:(jint)destPos
                withInt:(jint)length;

+ (NSString *)clearPropertyWithNSString:(NSString *)key;

/*!
 @brief Returns the <code>java.io.Console</code> associated with this VM, or null.
 Not all VMs will have an associated console. A console is typically only
  available for programs run from the command line.
 @since 1.6
 */
+ (JavaIoConsole *)console;

+ (jlong)currentTimeMillis;

+ (void)exitWithInt:(jint)status;

+ (void)gc;

+ (id<JavaUtilMap>)getenv;

+ (NSString *)getenvWithNSString:(NSString *)name;

+ (JavaUtilProperties *)getProperties;

+ (NSString *)getPropertyWithNSString:(NSString *)key;

+ (NSString *)getPropertyWithNSString:(NSString *)key
                         withNSString:(NSString *)defaultValue;

/*!
 @brief Returns null.Android does not use <code>SecurityManager</code>.
 This method
  is only provided for source compatibility.
 @return null
 */
+ (JavaLangSecurityManager *)getSecurityManager;

+ (jint)identityHashCodeWithId:(id)anObject;

/*!
 @brief Returns the system's line separator.
 @since 1.7
 */
+ (NSString *)lineSeparator;

/*!
 @brief See <code>Runtime.load</code>.
 */
+ (void)load__WithNSString:(NSString *)pathName;

/*!
 @brief See <code>Runtime.loadLibrary</code>.
 */
+ (void)loadLibraryWithNSString:(NSString *)libName;

/*!
 */
+ (void)logEWithNSString:(NSString *)message;

/*!
 */
+ (void)logEWithNSString:(NSString *)message
   withJavaLangThrowable:(JavaLangThrowable *)th;

/*!
 */
+ (void)logIWithNSString:(NSString *)message;

/*!
 */
+ (void)logIWithNSString:(NSString *)message
   withJavaLangThrowable:(JavaLangThrowable *)th;

/*!
 */
+ (void)logWWithNSString:(NSString *)message;

/*!
 */
+ (void)logWWithNSString:(NSString *)message
   withJavaLangThrowable:(JavaLangThrowable *)th;

+ (jlong)nanoTime;

/*!
 @brief No-op on iOS, since it doesn't use garbage collection.
 */
+ (void)runFinalization;

/*!
 @brief No-op on iOS, since it doesn't use garbage collection.
 */
+ (void)runFinalizersOnExitWithBoolean:(jboolean)b;

+ (void)setErrWithJavaIoPrintStream:(JavaIoPrintStream *)newErr;

+ (void)setInWithJavaIoInputStream:(JavaIoInputStream *)newIn;

+ (void)setOutWithJavaIoPrintStream:(JavaIoPrintStream *)newOut;

+ (void)setPropertiesWithJavaUtilProperties:(JavaUtilProperties *)properties;

+ (NSString *)setPropertyWithNSString:(NSString *)key
                         withNSString:(NSString *)value;

#pragma mark Package-Private

@end

J2OBJC_STATIC_INIT(JavaLangSystem)

inline JavaIoInputStream *JavaLangSystem_get_in(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaIoInputStream *JavaLangSystem_in;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaLangSystem, in, JavaIoInputStream *)

inline JavaIoPrintStream *JavaLangSystem_get_out(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaIoPrintStream *JavaLangSystem_out;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaLangSystem, out, JavaIoPrintStream *)

inline JavaIoPrintStream *JavaLangSystem_get_err(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaIoPrintStream *JavaLangSystem_err;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaLangSystem, err, JavaIoPrintStream *)

FOUNDATION_EXPORT void JavaLangSystem_init(JavaLangSystem *self);

FOUNDATION_EXPORT JavaLangSystem *new_JavaLangSystem_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangSystem *create_JavaLangSystem_init(void);

FOUNDATION_EXPORT void JavaLangSystem_setInWithJavaIoInputStream_(JavaIoInputStream *newIn);

FOUNDATION_EXPORT void JavaLangSystem_setOutWithJavaIoPrintStream_(JavaIoPrintStream *newOut);

FOUNDATION_EXPORT void JavaLangSystem_setErrWithJavaIoPrintStream_(JavaIoPrintStream *newErr);

FOUNDATION_EXPORT jlong JavaLangSystem_currentTimeMillis(void);

FOUNDATION_EXPORT jint JavaLangSystem_identityHashCodeWithId_(id anObject);

FOUNDATION_EXPORT void JavaLangSystem_arraycopyWithId_withInt_withId_withInt_withInt_(id src, jint srcPos, id dest, jint destPos, jint length);

FOUNDATION_EXPORT jlong JavaLangSystem_nanoTime(void);

FOUNDATION_EXPORT void JavaLangSystem_exitWithInt_(jint status);

FOUNDATION_EXPORT JavaUtilProperties *JavaLangSystem_getProperties(void);

FOUNDATION_EXPORT NSString *JavaLangSystem_getPropertyWithNSString_(NSString *key);

FOUNDATION_EXPORT NSString *JavaLangSystem_getPropertyWithNSString_withNSString_(NSString *key, NSString *defaultValue);

FOUNDATION_EXPORT NSString *JavaLangSystem_setPropertyWithNSString_withNSString_(NSString *key, NSString *value);

FOUNDATION_EXPORT void JavaLangSystem_setPropertiesWithJavaUtilProperties_(JavaUtilProperties *properties);

FOUNDATION_EXPORT NSString *JavaLangSystem_clearPropertyWithNSString_(NSString *key);

FOUNDATION_EXPORT NSString *JavaLangSystem_getenvWithNSString_(NSString *name);

FOUNDATION_EXPORT id<JavaUtilMap> JavaLangSystem_getenv(void);

FOUNDATION_EXPORT JavaLangSecurityManager *JavaLangSystem_getSecurityManager(void);

FOUNDATION_EXPORT NSString *JavaLangSystem_lineSeparator(void);

FOUNDATION_EXPORT void JavaLangSystem_load__WithNSString_(NSString *pathName);

FOUNDATION_EXPORT void JavaLangSystem_loadLibraryWithNSString_(NSString *libName);

FOUNDATION_EXPORT void JavaLangSystem_gc(void);

FOUNDATION_EXPORT void JavaLangSystem_runFinalization(void);

FOUNDATION_EXPORT void JavaLangSystem_runFinalizersOnExitWithBoolean_(jboolean b);

FOUNDATION_EXPORT JavaIoConsole *JavaLangSystem_console(void);

FOUNDATION_EXPORT void JavaLangSystem_logEWithNSString_(NSString *message);

FOUNDATION_EXPORT void JavaLangSystem_logEWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *th);

FOUNDATION_EXPORT void JavaLangSystem_logIWithNSString_(NSString *message);

FOUNDATION_EXPORT void JavaLangSystem_logIWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *th);

FOUNDATION_EXPORT void JavaLangSystem_logWWithNSString_(NSString *message);

FOUNDATION_EXPORT void JavaLangSystem_logWWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *th);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangSystem)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangSystem")
