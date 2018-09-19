//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/logging/LogManager.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilLoggingLogManager")
#ifdef RESTRICT_JavaUtilLoggingLogManager
#define INCLUDE_ALL_JavaUtilLoggingLogManager 0
#else
#define INCLUDE_ALL_JavaUtilLoggingLogManager 1
#endif
#undef RESTRICT_JavaUtilLoggingLogManager
#ifdef INCLUDE_JavaUtilLoggingLogManager_SystemLoggerContext
#define INCLUDE_JavaUtilLoggingLogManager_LoggerContext 1
#endif

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilLoggingLogManager_) && (INCLUDE_ALL_JavaUtilLoggingLogManager || defined(INCLUDE_JavaUtilLoggingLogManager))
#define JavaUtilLoggingLogManager_

@class IOSClass;
@class JavaIoInputStream;
@class JavaUtilLoggingFormatter;
@class JavaUtilLoggingLevel;
@class JavaUtilLoggingLogger;
@protocol JavaBeansPropertyChangeListener;
@protocol JavaUtilEnumeration;
@protocol JavaUtilLoggingFilter;
@protocol JavaUtilLoggingLoggingMXBean;

/*!
 @brief There is a single global LogManager object that is used to
  maintain a set of shared state about Loggers and log services.
 <p>
  This LogManager object: 
 <ul>
  <li> Manages a hierarchical namespace of Logger objects.  All
       named Loggers are stored in this namespace. 
 <li> Manages a set of logging control properties.  These are
       simple key-value pairs that can be used by Handlers and
       other logging objects to configure themselves. 
 </ul>
  <p>
  The global LogManager object can be retrieved using LogManager.getLogManager().
  The LogManager object is created during class initialization and
  cannot subsequently be changed. 
 <p>
  At startup the LogManager class is located using the
  java.util.logging.manager system property. 
 <p>
  By default, the LogManager reads its initial configuration from
  a properties file "lib/logging.properties" in the JRE directory.
  If you edit that property file you can change the default logging
  configuration for all uses of that JRE. 
 <p>
  In addition, the LogManager uses two optional system properties that
  allow more control over reading the initial configuration: 
 <ul>
  <li>"java.util.logging.config.class"
  <li>"java.util.logging.config.file"
  </ul>
  These two properties may be set via the Preferences API, or as
  command line property definitions to the "java" command, or as
  system property definitions passed to JNI_CreateJavaVM. 
 <p>
  If the "java.util.logging.config.class" property is set, then the
  property value is treated as a class name.  The given class will be
  loaded, an object will be instantiated, and that object's constructor
  is responsible for reading in the initial configuration.  (That object
  may use other system properties to control its configuration.)  The
  alternate configuration class can use <tt>readConfiguration(InputStream)</tt>
  to define properties in the LogManager. 
 <p>
  If "java.util.logging.config.class" property is <b>not</b> set,
  then the "java.util.logging.config.file" system property can be used
  to specify a properties file (in java.util.Properties format). The
  initial logging configuration will be read from this file. 
 <p>
  If neither of these properties is defined then, as described
  above, the LogManager will read its initial configuration from
  a properties file "lib/logging.properties" in the JRE directory. 
 <p>
  The properties for loggers and Handlers will have names starting
  with the dot-separated name for the handler or logger. 
 <p>
  The global logging properties may include: 
 <ul>
  <li>A property "handlers".  This defines a whitespace or comma separated
  list of class names for handler classes to load and register as
  handlers on the root Logger (the Logger named "").  Each class
  name must be for a Handler class which has a default constructor.
  Note that these Handlers may be created lazily, when they are
  first used. 
 <li>A property "&lt;logger&gt;.handlers". This defines a whitespace or
  comma separated list of class names for handlers classes to
  load and register as handlers to the specified logger. Each class
  name must be for a Handler class which has a default constructor.
  Note that these Handlers may be created lazily, when they are
  first used. 
 <li>A property "&lt;logger&gt;.useParentHandlers". This defines a boolean
  value. By default every logger calls its parent in addition to
  handling the logging message itself, this often result in messages
  being handled by the root logger as well. When setting this property
  to false a Handler needs to be configured for this logger otherwise
  no logging messages are delivered. 
 <li>A property "config".  This property is intended to allow
  arbitrary configuration code to be run.  The property defines a
  whitespace or comma separated list of class names.  A new instance will be
  created for each named class.  The default constructor of each class
  may execute arbitrary code to update the logging configuration, such as
  setting logger levels, adding handlers, adding filters, etc. 
 </ul>
  <p>
  Note that all classes loaded during LogManager configuration are
  first searched on the system class path before any user class path.
  That includes the LogManager class, any config classes, and any
  handler classes. 
 <p>
  Loggers are organized into a naming hierarchy based on their
  dot separated names.  Thus "a.b.c" is a child of "a.b", but
  "a.b1" and a.b2" are peers. 
 <p>
  All properties whose names end with ".level" are assumed to define
  log levels for Loggers.  Thus "foo.level" defines a log level for
  the logger called "foo" and (recursively) for any of its children
  in the naming hierarchy.  Log Levels are applied in the order they
  are defined in the properties file.  Thus level settings for child
  nodes in the tree should come after settings for their parents.
  The property name ".level" can be used to set the level for the
  root of the tree. 
 <p>
  All methods on the LogManager object are multi-thread safe.
 @since 1.4
 */
@interface JavaUtilLoggingLogManager : NSObject
@property (readonly, copy, class) NSString *LOGGING_MXBEAN_NAME NS_SWIFT_NAME(LOGGING_MXBEAN_NAME);

+ (NSString *)LOGGING_MXBEAN_NAME;

#pragma mark Public

/*!
 @brief Add a named logger.This does nothing and returns false if a logger
  with the same name is already registered.
 <p>
  The Logger factory methods call this method to register each
  newly created Logger. 
 <p>
  The application should retain its own reference to the Logger
  object to avoid it being garbage collected.  The LogManager
  may only retain a weak reference.
 @param logger the new logger.
 @return true if the argument logger was registered successfully,
           false if a logger of that name already exists.
 @throw NullPointerExceptionif the logger name is null.
 */
- (jboolean)addLoggerWithJavaUtilLoggingLogger:(JavaUtilLoggingLogger *)logger;

/*!
 @brief Adds an event listener to be invoked when the logging
  properties are re-read.Adding multiple instances of
  the same event Listener results in multiple entries
  in the property event listener table.
 @param l event listener
 @throw SecurityExceptionif a security manager exists and if
              the caller does not have LoggingPermission("control").
 @throw NullPointerExceptionif the PropertyChangeListener is null.
 */
- (void)addPropertyChangeListenerWithJavaBeansPropertyChangeListener:(id<JavaBeansPropertyChangeListener>)l;

/*!
 @brief Check that the current context is trusted to modify the logging
  configuration.This requires LoggingPermission("control").
 <p>
  If the check fails we throw a SecurityException, otherwise
  we return normally.
 @throw SecurityExceptionif a security manager exists and if
              the caller does not have LoggingPermission("control").
 */
- (void)checkAccess;

/*!
 @brief Method to find a named logger.
 <p>
  Note that since untrusted code may create loggers with
  arbitrary names this method should not be relied on to
  find Loggers for security sensitive logging.
  It is also important to note that the Logger associated with the
  String <code>name</code> may be garbage collected at any time if there
  is no strong reference to the Logger. The caller of this method
  must check the return value for null in order to properly handle
  the case where the Logger has been garbage collected. 
 <p>
 @param name name of the logger
 @return matching logger or null if none is found
 */
- (JavaUtilLoggingLogger *)getLoggerWithNSString:(NSString *)name;

/*!
 @brief Get an enumeration of known logger names.
 <p>
  Note:  Loggers may be added dynamically as new classes are loaded.
  This method only reports on the loggers that are currently registered.
  It is also important to note that this method only returns the name
  of a Logger, not a strong reference to the Logger itself.
  The returned String does nothing to prevent the Logger from being
  garbage collected. In particular, if the returned name is passed
  to <code>LogManager.getLogger()</code>, then the caller must check the
  return value from <code>LogManager.getLogger()</code> for null to properly
  handle the case where the Logger has been garbage collected in the
  time since its name was returned by this method. 
 <p>
 @return enumeration of logger name strings
 */
- (id<JavaUtilEnumeration>)getLoggerNames;

/*!
 @brief Returns <tt>LoggingMXBean</tt> for managing loggers.
 @return a <code>LoggingMXBean</code> object.
 @since 1.5
 */
+ (id<JavaUtilLoggingLoggingMXBean>)getLoggingMXBean;

/*!
 @brief Return the global LogManager object.
 */
+ (JavaUtilLoggingLogManager *)getLogManager;

/*!
 @brief Get the value of a logging property.
 The method returns null if the property is not found.
 @param name property name
 @return property value
 */
- (NSString *)getPropertyWithNSString:(NSString *)name;

/*!
 @brief Reinitialize the logging properties and reread the logging configuration.
 <p>
  The same rules are used for locating the configuration properties
  as are used at startup.  So normally the logging properties will
  be re-read from the same file that was used at startup. 
 <P>
  Any log level definitions in the new configuration file will be
  applied using Logger.setLevel(), if the target Logger exists. 
 <p>
  A PropertyChangeEvent will be fired after the properties are read.
 @throw SecurityExceptionif a security manager exists and if
              the caller does not have LoggingPermission("control").
 @throw IOExceptionif there are IO problems reading the configuration.
 */
- (void)readConfiguration;

/*!
 @brief Reinitialize the logging properties and reread the logging configuration
  from the given stream, which should be in java.util.Properties format.
 A PropertyChangeEvent will be fired after the properties are read. 
 <p>
  Any log level definitions in the new configuration file will be
  applied using Logger.setLevel(), if the target Logger exists.
 @param ins stream to read properties from
 @throw SecurityExceptionif a security manager exists and if
              the caller does not have LoggingPermission("control").
 @throw IOExceptionif there are problems reading from the stream.
 */
- (void)readConfigurationWithJavaIoInputStream:(JavaIoInputStream *)ins;

/*!
 @brief Removes an event listener for property change events.
 If the same listener instance has been added to the listener table
  through multiple invocations of <CODE>addPropertyChangeListener</CODE>,
  then an equivalent number of 
 <CODE>removePropertyChangeListener</CODE> invocations are required to remove
  all instances of that listener from the listener table. 
 <P>
  Returns silently if the given listener is not found.
 @param l event listener (can be null)
 @throw SecurityExceptionif a security manager exists and if
              the caller does not have LoggingPermission("control").
 */
- (void)removePropertyChangeListenerWithJavaBeansPropertyChangeListener:(id<JavaBeansPropertyChangeListener>)l;

/*!
 @brief Reset the logging configuration.
 <p>
  For all named loggers, the reset operation removes and closes
  all Handlers and (except for the root logger) sets the level
  to null.  The root logger's level is set to Level.INFO.
 @throw SecurityExceptionif a security manager exists and if
              the caller does not have LoggingPermission("control").
 */
- (void)reset;

#pragma mark Protected

/*!
 @brief Protected constructor.This is protected so that container applications
  (such as J2EE containers) can subclass the object.
 It is non-public as
  it is intended that there only be one LogManager object, whose value is
  retrieved by calling Logmanager.getLogManager.
 */
- (instancetype __nonnull)init;

#pragma mark Package-Private

- (void)checkPermission;

- (JavaUtilLoggingLogger *)demandLoggerWithNSString:(NSString *)name
                                       withNSString:(NSString *)resourceBundleName
                                       withIOSClass:(IOSClass *)caller;

- (JavaUtilLoggingLogger *)demandSystemLoggerWithNSString:(NSString *)name
                                             withNSString:(NSString *)resourceBundleName;

- (void)drainLoggerRefQueueBounded;

- (jboolean)getBooleanPropertyWithNSString:(NSString *)name
                               withBoolean:(jboolean)defaultValue;

- (id<JavaUtilLoggingFilter>)getFilterPropertyWithNSString:(NSString *)name
                                 withJavaUtilLoggingFilter:(id<JavaUtilLoggingFilter>)defaultValue;

- (JavaUtilLoggingFormatter *)getFormatterPropertyWithNSString:(NSString *)name
                                  withJavaUtilLoggingFormatter:(JavaUtilLoggingFormatter *)defaultValue;

- (jint)getIntPropertyWithNSString:(NSString *)name
                           withInt:(jint)defaultValue;

- (JavaUtilLoggingLevel *)getLevelPropertyWithNSString:(NSString *)name
                              withJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)defaultValue;

- (NSString *)getStringPropertyWithNSString:(NSString *)name
                               withNSString:(NSString *)defaultValue;

@end

J2OBJC_STATIC_INIT(JavaUtilLoggingLogManager)

/*!
 @brief String representation of the <code>ObjectName</code> for the management interface
  for the logging facility.
 - seealso: java.util.logging.LoggingMXBean
 @since 1.5
 */
inline NSString *JavaUtilLoggingLogManager_get_LOGGING_MXBEAN_NAME(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaUtilLoggingLogManager_LOGGING_MXBEAN_NAME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilLoggingLogManager, LOGGING_MXBEAN_NAME, NSString *)

FOUNDATION_EXPORT void JavaUtilLoggingLogManager_init(JavaUtilLoggingLogManager *self);

FOUNDATION_EXPORT JavaUtilLoggingLogManager *new_JavaUtilLoggingLogManager_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilLoggingLogManager *create_JavaUtilLoggingLogManager_init(void);

FOUNDATION_EXPORT JavaUtilLoggingLogManager *JavaUtilLoggingLogManager_getLogManager(void);

FOUNDATION_EXPORT id<JavaUtilLoggingLoggingMXBean> JavaUtilLoggingLogManager_getLoggingMXBean(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLoggingLogManager)

#endif

#if !defined (JavaUtilLoggingLogManager_LoggerContext_) && (INCLUDE_ALL_JavaUtilLoggingLogManager || defined(INCLUDE_JavaUtilLoggingLogManager_LoggerContext))
#define JavaUtilLoggingLogManager_LoggerContext_

@class JavaUtilLoggingLogManager;
@class JavaUtilLoggingLogManager_LogNode;
@class JavaUtilLoggingLogger;
@protocol JavaUtilEnumeration;

@interface JavaUtilLoggingLogManager_LoggerContext : NSObject

#pragma mark Package-Private

- (jboolean)addLocalLoggerWithJavaUtilLoggingLogger:(JavaUtilLoggingLogger *)logger;

- (jboolean)addLocalLoggerWithJavaUtilLoggingLogger:(JavaUtilLoggingLogger *)logger
                                        withBoolean:(jboolean)addDefaultLoggersIfNeeded;

- (jboolean)addLocalLoggerWithJavaUtilLoggingLogger:(JavaUtilLoggingLogger *)logger
                                        withBoolean:(jboolean)addDefaultLoggersIfNeeded
                      withJavaUtilLoggingLogManager:(JavaUtilLoggingLogManager *)manager;

- (jboolean)addLocalLoggerWithJavaUtilLoggingLogger:(JavaUtilLoggingLogger *)logger
                      withJavaUtilLoggingLogManager:(JavaUtilLoggingLogManager *)manager;

- (JavaUtilLoggingLogger *)demandLoggerWithNSString:(NSString *)name
                                       withNSString:(NSString *)resourceBundleName;

- (JavaUtilLoggingLogger *)findLoggerWithNSString:(NSString *)name;

- (id<JavaUtilEnumeration>)getLoggerNames;

- (JavaUtilLoggingLogManager_LogNode *)getNodeWithNSString:(NSString *)name;

- (void)removeLoggerWithNSString:(NSString *)name;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilLoggingLogManager_LoggerContext)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLoggingLogManager_LoggerContext)

#endif

#if !defined (JavaUtilLoggingLogManager_SystemLoggerContext_) && (INCLUDE_ALL_JavaUtilLoggingLogManager || defined(INCLUDE_JavaUtilLoggingLogManager_SystemLoggerContext))
#define JavaUtilLoggingLogManager_SystemLoggerContext_

@class JavaUtilLoggingLogger;

@interface JavaUtilLoggingLogManager_SystemLoggerContext : JavaUtilLoggingLogManager_LoggerContext

#pragma mark Package-Private

- (instancetype __nonnull)init;

- (JavaUtilLoggingLogger *)demandLoggerWithNSString:(NSString *)name
                                       withNSString:(NSString *)resourceBundleName;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilLoggingLogManager_SystemLoggerContext)

FOUNDATION_EXPORT void JavaUtilLoggingLogManager_SystemLoggerContext_init(JavaUtilLoggingLogManager_SystemLoggerContext *self);

FOUNDATION_EXPORT JavaUtilLoggingLogManager_SystemLoggerContext *new_JavaUtilLoggingLogManager_SystemLoggerContext_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilLoggingLogManager_SystemLoggerContext *create_JavaUtilLoggingLogManager_SystemLoggerContext_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLoggingLogManager_SystemLoggerContext)

#endif

#if !defined (JavaUtilLoggingLogManager_LoggerWeakRef_) && (INCLUDE_ALL_JavaUtilLoggingLogManager || defined(INCLUDE_JavaUtilLoggingLogManager_LoggerWeakRef))
#define JavaUtilLoggingLogManager_LoggerWeakRef_

#define RESTRICT_JavaLangRefWeakReference 1
#define INCLUDE_JavaLangRefWeakReference 1
#include "../../../java/lang/ref/WeakReference.h"

@class JavaLangRefReferenceQueue;
@class JavaUtilLoggingLogManager;
@class JavaUtilLoggingLogManager_LogNode;
@class JavaUtilLoggingLogger;

@interface JavaUtilLoggingLogManager_LoggerWeakRef : JavaLangRefWeakReference

#pragma mark Public

- (JavaUtilLoggingLogger *)get;

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaUtilLoggingLogManager:(JavaUtilLoggingLogManager *)outer$
                                  withJavaUtilLoggingLogger:(JavaUtilLoggingLogger *)logger;

- (void)dispose;

- (void)setNodeWithJavaUtilLoggingLogManager_LogNode:(JavaUtilLoggingLogManager_LogNode *)node;

- (void)setParentRefWithJavaLangRefWeakReference:(JavaLangRefWeakReference *)parentRef;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithId:(id)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithId:(id)arg0
       withJavaLangRefReferenceQueue:(JavaLangRefReferenceQueue *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilLoggingLogManager_LoggerWeakRef)

FOUNDATION_EXPORT void JavaUtilLoggingLogManager_LoggerWeakRef_initWithJavaUtilLoggingLogManager_withJavaUtilLoggingLogger_(JavaUtilLoggingLogManager_LoggerWeakRef *self, JavaUtilLoggingLogManager *outer$, JavaUtilLoggingLogger *logger);

FOUNDATION_EXPORT JavaUtilLoggingLogManager_LoggerWeakRef *new_JavaUtilLoggingLogManager_LoggerWeakRef_initWithJavaUtilLoggingLogManager_withJavaUtilLoggingLogger_(JavaUtilLoggingLogManager *outer$, JavaUtilLoggingLogger *logger) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilLoggingLogManager_LoggerWeakRef *create_JavaUtilLoggingLogManager_LoggerWeakRef_initWithJavaUtilLoggingLogManager_withJavaUtilLoggingLogger_(JavaUtilLoggingLogManager *outer$, JavaUtilLoggingLogger *logger);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLoggingLogManager_LoggerWeakRef)

#endif

#if !defined (JavaUtilLoggingLogManager_LogNode_) && (INCLUDE_ALL_JavaUtilLoggingLogManager || defined(INCLUDE_JavaUtilLoggingLogManager_LogNode))
#define JavaUtilLoggingLogManager_LogNode_

@class JavaUtilHashMap;
@class JavaUtilLoggingLogManager_LoggerContext;
@class JavaUtilLoggingLogManager_LoggerWeakRef;
@class JavaUtilLoggingLogger;

@interface JavaUtilLoggingLogManager_LogNode : NSObject {
 @public
  JavaUtilHashMap *children_;
  JavaUtilLoggingLogManager_LoggerWeakRef *loggerRef_;
  JavaUtilLoggingLogManager_LogNode *parent_;
  __unsafe_unretained JavaUtilLoggingLogManager_LoggerContext *context_;
}

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaUtilLoggingLogManager_LogNode:(JavaUtilLoggingLogManager_LogNode *)parent
                        withJavaUtilLoggingLogManager_LoggerContext:(JavaUtilLoggingLogManager_LoggerContext *)context;

- (void)walkAndSetParentWithJavaUtilLoggingLogger:(JavaUtilLoggingLogger *)parent;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilLoggingLogManager_LogNode)

J2OBJC_FIELD_SETTER(JavaUtilLoggingLogManager_LogNode, children_, JavaUtilHashMap *)
J2OBJC_FIELD_SETTER(JavaUtilLoggingLogManager_LogNode, loggerRef_, JavaUtilLoggingLogManager_LoggerWeakRef *)
J2OBJC_FIELD_SETTER(JavaUtilLoggingLogManager_LogNode, parent_, JavaUtilLoggingLogManager_LogNode *)

FOUNDATION_EXPORT void JavaUtilLoggingLogManager_LogNode_initWithJavaUtilLoggingLogManager_LogNode_withJavaUtilLoggingLogManager_LoggerContext_(JavaUtilLoggingLogManager_LogNode *self, JavaUtilLoggingLogManager_LogNode *parent, JavaUtilLoggingLogManager_LoggerContext *context);

FOUNDATION_EXPORT JavaUtilLoggingLogManager_LogNode *new_JavaUtilLoggingLogManager_LogNode_initWithJavaUtilLoggingLogManager_LogNode_withJavaUtilLoggingLogManager_LoggerContext_(JavaUtilLoggingLogManager_LogNode *parent, JavaUtilLoggingLogManager_LoggerContext *context) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilLoggingLogManager_LogNode *create_JavaUtilLoggingLogManager_LogNode_initWithJavaUtilLoggingLogManager_LogNode_withJavaUtilLoggingLogManager_LoggerContext_(JavaUtilLoggingLogManager_LogNode *parent, JavaUtilLoggingLogManager_LoggerContext *context);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLoggingLogManager_LogNode)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilLoggingLogManager")
