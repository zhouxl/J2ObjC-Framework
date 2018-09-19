//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/dtm/SecuritySupport12.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlDtmSecuritySupport12")
#ifdef RESTRICT_OrgApacheXmlDtmSecuritySupport12
#define INCLUDE_ALL_OrgApacheXmlDtmSecuritySupport12 0
#else
#define INCLUDE_ALL_OrgApacheXmlDtmSecuritySupport12 1
#endif
#undef RESTRICT_OrgApacheXmlDtmSecuritySupport12

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlDtmSecuritySupport12_) && (INCLUDE_ALL_OrgApacheXmlDtmSecuritySupport12 || defined(INCLUDE_OrgApacheXmlDtmSecuritySupport12))
#define OrgApacheXmlDtmSecuritySupport12_

#define RESTRICT_OrgApacheXmlDtmSecuritySupport 1
#define INCLUDE_OrgApacheXmlDtmSecuritySupport 1
#include "../../../../org/apache/xml/dtm/SecuritySupport.h"

@class JavaIoFile;
@class JavaIoFileInputStream;
@class JavaIoInputStream;
@class JavaLangClassLoader;

/*!
 @brief This class is duplicated for each Xalan-Java subpackage so keep it in sync.
 It is package private and therefore is not exposed as part of the Xalan-Java
  API.
  Security related methods that only work on J2SE 1.2 and newer.
 */
@interface OrgApacheXmlDtmSecuritySupport12 : OrgApacheXmlDtmSecuritySupport

#pragma mark Package-Private

- (instancetype __nonnull)init;

- (JavaLangClassLoader *)getContextClassLoader;

- (jboolean)getFileExistsWithJavaIoFile:(JavaIoFile *)f;

- (JavaIoFileInputStream *)getFileInputStreamWithJavaIoFile:(JavaIoFile *)file;

- (jlong)getLastModifiedWithJavaIoFile:(JavaIoFile *)f;

- (JavaLangClassLoader *)getParentClassLoaderWithJavaLangClassLoader:(JavaLangClassLoader *)cl;

- (JavaIoInputStream *)getResourceAsStreamWithJavaLangClassLoader:(JavaLangClassLoader *)cl
                                                     withNSString:(NSString *)name;

- (JavaLangClassLoader *)getSystemClassLoader;

- (NSString *)getSystemPropertyWithNSString:(NSString *)propName;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlDtmSecuritySupport12)

FOUNDATION_EXPORT void OrgApacheXmlDtmSecuritySupport12_init(OrgApacheXmlDtmSecuritySupport12 *self);

FOUNDATION_EXPORT OrgApacheXmlDtmSecuritySupport12 *new_OrgApacheXmlDtmSecuritySupport12_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmSecuritySupport12 *create_OrgApacheXmlDtmSecuritySupport12_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmSecuritySupport12)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlDtmSecuritySupport12")
