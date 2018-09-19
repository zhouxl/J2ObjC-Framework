//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/extensions/ExtensionNamespacesManager.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanExtensionsExtensionNamespacesManager")
#ifdef RESTRICT_OrgApacheXalanExtensionsExtensionNamespacesManager
#define INCLUDE_ALL_OrgApacheXalanExtensionsExtensionNamespacesManager 0
#else
#define INCLUDE_ALL_OrgApacheXalanExtensionsExtensionNamespacesManager 1
#endif
#undef RESTRICT_OrgApacheXalanExtensionsExtensionNamespacesManager

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanExtensionsExtensionNamespacesManager_) && (INCLUDE_ALL_OrgApacheXalanExtensionsExtensionNamespacesManager || defined(INCLUDE_OrgApacheXalanExtensionsExtensionNamespacesManager))
#define OrgApacheXalanExtensionsExtensionNamespacesManager_

@class JavaUtilVector;
@class OrgApacheXalanExtensionsExtensionNamespaceSupport;

/*!
 @brief Used during assembly of a stylesheet to collect the information for each 
  extension namespace that is required during the transformation process 
  to generate an <code>ExtensionHandler</code>.
 */
@interface OrgApacheXalanExtensionsExtensionNamespacesManager : NSObject

#pragma mark Public

/*!
 @brief An ExtensionNamespacesManager is instantiated the first time an extension function or
  element is found in the stylesheet.During initialization, a vector of ExtensionNamespaceSupport
  objects is created, one for each predefined extension namespace.
 */
- (instancetype)init;

/*!
 @brief For any extension namespace that is not either predefined or defined 
  by a "component" declaration or exslt function declaration, attempt 
  to create an ExtensionNamespaceSuport object for the appropriate 
  Java class or Java package Extension Handler.
 Called by StylesheetRoot.recompose(), after all ElemTemplate compose()
  operations have taken place, in order to set up handlers for
  the remaining extension namespaces.
 @param ns The extension namespace URI.
 @return An ExtensionNamespaceSupport object for this namespace
  (which defines the ExtensionHandler to be used), or null if such 
  an object cannot be created.
 @throw javax.xml.transform.TransformerException
 */
- (OrgApacheXalanExtensionsExtensionNamespaceSupport *)defineJavaNamespaceWithNSString:(NSString *)ns;

- (OrgApacheXalanExtensionsExtensionNamespaceSupport *)defineJavaNamespaceWithNSString:(NSString *)ns
                                                                          withNSString:(NSString *)classOrPackage;

/*!
 @brief Get the vector of extension namespaces.Used to provide
  the extensions table access to a list of extension
  namespaces encountered during composition of a stylesheet.
 */
- (JavaUtilVector *)getExtensions;

/*!
 @brief Get the index for a namespace entry in the extension namespace Vector, -1 if
  no such entry yet exists.
 */
- (jint)namespaceIndexWithNSString:(NSString *)namespace_
                withJavaUtilVector:(JavaUtilVector *)extensions;

/*!
 @brief Register the extension namespace for an ElemExtensionDecl or ElemFunction,
  and prepare a support object to launch the appropriate ExtensionHandler at 
  transformation runtime.
 */
- (void)registerExtensionWithOrgApacheXalanExtensionsExtensionNamespaceSupport:(OrgApacheXalanExtensionsExtensionNamespaceSupport *)extNsSpt;

/*!
 @brief If necessary, register the extension namespace found compiling a function or 
  creating an extension element.
 If it is a predefined namespace, create a
  support object to simplify the instantiate of an appropriate ExtensionHandler
  during transformation runtime. Otherwise, add the namespace, if necessary,
  to a vector of undefined extension namespaces, to be defined later.
 */
- (void)registerExtensionWithNSString:(NSString *)namespace_;

/*!
 @brief Attempt to register any unregistered extension namespaces.
 */
- (void)registerUnregisteredNamespaces;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanExtensionsExtensionNamespacesManager)

FOUNDATION_EXPORT void OrgApacheXalanExtensionsExtensionNamespacesManager_init(OrgApacheXalanExtensionsExtensionNamespacesManager *self);

FOUNDATION_EXPORT OrgApacheXalanExtensionsExtensionNamespacesManager *new_OrgApacheXalanExtensionsExtensionNamespacesManager_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanExtensionsExtensionNamespacesManager *create_OrgApacheXalanExtensionsExtensionNamespacesManager_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanExtensionsExtensionNamespacesManager)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanExtensionsExtensionNamespacesManager")
