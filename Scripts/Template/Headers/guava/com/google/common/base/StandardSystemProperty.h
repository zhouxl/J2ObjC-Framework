//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/base/StandardSystemProperty.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseStandardSystemProperty")
#ifdef RESTRICT_ComGoogleCommonBaseStandardSystemProperty
#define INCLUDE_ALL_ComGoogleCommonBaseStandardSystemProperty 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseStandardSystemProperty 1
#endif
#undef RESTRICT_ComGoogleCommonBaseStandardSystemProperty

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBaseStandardSystemProperty_) && (INCLUDE_ALL_ComGoogleCommonBaseStandardSystemProperty || defined(INCLUDE_ComGoogleCommonBaseStandardSystemProperty))
#define ComGoogleCommonBaseStandardSystemProperty_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "../../../../../java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, ComGoogleCommonBaseStandardSystemProperty_Enum) {
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_VERSION = 0,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_VENDOR = 1,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_VENDOR_URL = 2,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_HOME = 3,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_VM_SPECIFICATION_VERSION = 4,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_VM_SPECIFICATION_VENDOR = 5,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_VM_SPECIFICATION_NAME = 6,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_VM_VERSION = 7,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_VM_VENDOR = 8,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_VM_NAME = 9,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_SPECIFICATION_VERSION = 10,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_SPECIFICATION_VENDOR = 11,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_SPECIFICATION_NAME = 12,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_CLASS_VERSION = 13,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_CLASS_PATH = 14,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_LIBRARY_PATH = 15,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_IO_TMPDIR = 16,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_COMPILER = 17,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_EXT_DIRS = 18,
  ComGoogleCommonBaseStandardSystemProperty_Enum_OS_NAME = 19,
  ComGoogleCommonBaseStandardSystemProperty_Enum_OS_ARCH = 20,
  ComGoogleCommonBaseStandardSystemProperty_Enum_OS_VERSION = 21,
  ComGoogleCommonBaseStandardSystemProperty_Enum_FILE_SEPARATOR = 22,
  ComGoogleCommonBaseStandardSystemProperty_Enum_PATH_SEPARATOR = 23,
  ComGoogleCommonBaseStandardSystemProperty_Enum_LINE_SEPARATOR = 24,
  ComGoogleCommonBaseStandardSystemProperty_Enum_USER_NAME = 25,
  ComGoogleCommonBaseStandardSystemProperty_Enum_USER_HOME = 26,
  ComGoogleCommonBaseStandardSystemProperty_Enum_USER_DIR = 27,
};

/*!
 @brief Represents a system property.
 @author Kurt Alfred Kluever
 @since 15.0
 */
@interface ComGoogleCommonBaseStandardSystemProperty : JavaLangEnum

@property (readonly, class, nonnull) ComGoogleCommonBaseStandardSystemProperty *JAVA_VERSION NS_SWIFT_NAME(JAVA_VERSION);
@property (readonly, class, nonnull) ComGoogleCommonBaseStandardSystemProperty *JAVA_VENDOR NS_SWIFT_NAME(JAVA_VENDOR);
@property (readonly, class, nonnull) ComGoogleCommonBaseStandardSystemProperty *JAVA_VENDOR_URL NS_SWIFT_NAME(JAVA_VENDOR_URL);
@property (readonly, class, nonnull) ComGoogleCommonBaseStandardSystemProperty *JAVA_HOME NS_SWIFT_NAME(JAVA_HOME);
@property (readonly, class, nonnull) ComGoogleCommonBaseStandardSystemProperty *JAVA_VM_SPECIFICATION_VERSION NS_SWIFT_NAME(JAVA_VM_SPECIFICATION_VERSION);
@property (readonly, class, nonnull) ComGoogleCommonBaseStandardSystemProperty *JAVA_VM_SPECIFICATION_VENDOR NS_SWIFT_NAME(JAVA_VM_SPECIFICATION_VENDOR);
@property (readonly, class, nonnull) ComGoogleCommonBaseStandardSystemProperty *JAVA_VM_SPECIFICATION_NAME NS_SWIFT_NAME(JAVA_VM_SPECIFICATION_NAME);
@property (readonly, class, nonnull) ComGoogleCommonBaseStandardSystemProperty *JAVA_VM_VERSION NS_SWIFT_NAME(JAVA_VM_VERSION);
@property (readonly, class, nonnull) ComGoogleCommonBaseStandardSystemProperty *JAVA_VM_VENDOR NS_SWIFT_NAME(JAVA_VM_VENDOR);
@property (readonly, class, nonnull) ComGoogleCommonBaseStandardSystemProperty *JAVA_VM_NAME NS_SWIFT_NAME(JAVA_VM_NAME);
@property (readonly, class, nonnull) ComGoogleCommonBaseStandardSystemProperty *JAVA_SPECIFICATION_VERSION NS_SWIFT_NAME(JAVA_SPECIFICATION_VERSION);
@property (readonly, class, nonnull) ComGoogleCommonBaseStandardSystemProperty *JAVA_SPECIFICATION_VENDOR NS_SWIFT_NAME(JAVA_SPECIFICATION_VENDOR);
@property (readonly, class, nonnull) ComGoogleCommonBaseStandardSystemProperty *JAVA_SPECIFICATION_NAME NS_SWIFT_NAME(JAVA_SPECIFICATION_NAME);
@property (readonly, class, nonnull) ComGoogleCommonBaseStandardSystemProperty *JAVA_CLASS_VERSION NS_SWIFT_NAME(JAVA_CLASS_VERSION);
@property (readonly, class, nonnull) ComGoogleCommonBaseStandardSystemProperty *JAVA_CLASS_PATH NS_SWIFT_NAME(JAVA_CLASS_PATH);
@property (readonly, class, nonnull) ComGoogleCommonBaseStandardSystemProperty *JAVA_LIBRARY_PATH NS_SWIFT_NAME(JAVA_LIBRARY_PATH);
@property (readonly, class, nonnull) ComGoogleCommonBaseStandardSystemProperty *JAVA_IO_TMPDIR NS_SWIFT_NAME(JAVA_IO_TMPDIR);
@property (readonly, class, nonnull) ComGoogleCommonBaseStandardSystemProperty *JAVA_COMPILER NS_SWIFT_NAME(JAVA_COMPILER);
@property (readonly, class, nonnull) ComGoogleCommonBaseStandardSystemProperty *JAVA_EXT_DIRS NS_SWIFT_NAME(JAVA_EXT_DIRS);
@property (readonly, class, nonnull) ComGoogleCommonBaseStandardSystemProperty *OS_NAME NS_SWIFT_NAME(OS_NAME);
@property (readonly, class, nonnull) ComGoogleCommonBaseStandardSystemProperty *OS_ARCH NS_SWIFT_NAME(OS_ARCH);
@property (readonly, class, nonnull) ComGoogleCommonBaseStandardSystemProperty *OS_VERSION NS_SWIFT_NAME(OS_VERSION);
@property (readonly, class, nonnull) ComGoogleCommonBaseStandardSystemProperty *FILE_SEPARATOR NS_SWIFT_NAME(FILE_SEPARATOR);
@property (readonly, class, nonnull) ComGoogleCommonBaseStandardSystemProperty *PATH_SEPARATOR NS_SWIFT_NAME(PATH_SEPARATOR);
@property (readonly, class, nonnull) ComGoogleCommonBaseStandardSystemProperty *LINE_SEPARATOR NS_SWIFT_NAME(LINE_SEPARATOR);
@property (readonly, class, nonnull) ComGoogleCommonBaseStandardSystemProperty *USER_NAME NS_SWIFT_NAME(USER_NAME);
@property (readonly, class, nonnull) ComGoogleCommonBaseStandardSystemProperty *USER_HOME NS_SWIFT_NAME(USER_HOME);
@property (readonly, class, nonnull) ComGoogleCommonBaseStandardSystemProperty *USER_DIR NS_SWIFT_NAME(USER_DIR);
+ (ComGoogleCommonBaseStandardSystemProperty * __nonnull)JAVA_VERSION;

+ (ComGoogleCommonBaseStandardSystemProperty * __nonnull)JAVA_VENDOR;

+ (ComGoogleCommonBaseStandardSystemProperty * __nonnull)JAVA_VENDOR_URL;

+ (ComGoogleCommonBaseStandardSystemProperty * __nonnull)JAVA_HOME;

+ (ComGoogleCommonBaseStandardSystemProperty * __nonnull)JAVA_VM_SPECIFICATION_VERSION;

+ (ComGoogleCommonBaseStandardSystemProperty * __nonnull)JAVA_VM_SPECIFICATION_VENDOR;

+ (ComGoogleCommonBaseStandardSystemProperty * __nonnull)JAVA_VM_SPECIFICATION_NAME;

+ (ComGoogleCommonBaseStandardSystemProperty * __nonnull)JAVA_VM_VERSION;

+ (ComGoogleCommonBaseStandardSystemProperty * __nonnull)JAVA_VM_VENDOR;

+ (ComGoogleCommonBaseStandardSystemProperty * __nonnull)JAVA_VM_NAME;

+ (ComGoogleCommonBaseStandardSystemProperty * __nonnull)JAVA_SPECIFICATION_VERSION;

+ (ComGoogleCommonBaseStandardSystemProperty * __nonnull)JAVA_SPECIFICATION_VENDOR;

+ (ComGoogleCommonBaseStandardSystemProperty * __nonnull)JAVA_SPECIFICATION_NAME;

+ (ComGoogleCommonBaseStandardSystemProperty * __nonnull)JAVA_CLASS_VERSION;

+ (ComGoogleCommonBaseStandardSystemProperty * __nonnull)JAVA_CLASS_PATH;

+ (ComGoogleCommonBaseStandardSystemProperty * __nonnull)JAVA_LIBRARY_PATH;

+ (ComGoogleCommonBaseStandardSystemProperty * __nonnull)JAVA_IO_TMPDIR;

+ (ComGoogleCommonBaseStandardSystemProperty * __nonnull)JAVA_COMPILER;

+ (ComGoogleCommonBaseStandardSystemProperty * __nonnull)JAVA_EXT_DIRS;

+ (ComGoogleCommonBaseStandardSystemProperty * __nonnull)OS_NAME;

+ (ComGoogleCommonBaseStandardSystemProperty * __nonnull)OS_ARCH;

+ (ComGoogleCommonBaseStandardSystemProperty * __nonnull)OS_VERSION;

+ (ComGoogleCommonBaseStandardSystemProperty * __nonnull)FILE_SEPARATOR;

+ (ComGoogleCommonBaseStandardSystemProperty * __nonnull)PATH_SEPARATOR;

+ (ComGoogleCommonBaseStandardSystemProperty * __nonnull)LINE_SEPARATOR;

+ (ComGoogleCommonBaseStandardSystemProperty * __nonnull)USER_NAME;

+ (ComGoogleCommonBaseStandardSystemProperty * __nonnull)USER_HOME;

+ (ComGoogleCommonBaseStandardSystemProperty * __nonnull)USER_DIR;

#pragma mark Public

/*!
 @brief Returns the key used to lookup this system property.
 */
- (NSString *)key;

/*!
 @brief Returns a string representation of this system property.
 */
- (NSString *)description;

/*!
 @brief Returns the current value for this system property by delegating to <code>System.getProperty(String)</code>
 .
 */
- (NSString * __nullable)value;

+ (ComGoogleCommonBaseStandardSystemProperty *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (ComGoogleCommonBaseStandardSystemProperty_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonBaseStandardSystemProperty)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_values_[];

/*!
 @brief Java Runtime Environment version.
 */
inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_VERSION(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_VERSION)

/*!
 @brief Java Runtime Environment vendor.
 */
inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_VENDOR(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_VENDOR)

/*!
 @brief Java vendor URL.
 */
inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_VENDOR_URL(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_VENDOR_URL)

/*!
 @brief Java installation directory.
 */
inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_HOME(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_HOME)

/*!
 @brief Java Virtual Machine specification version.
 */
inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_VM_SPECIFICATION_VERSION(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_VM_SPECIFICATION_VERSION)

/*!
 @brief Java Virtual Machine specification vendor.
 */
inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_VM_SPECIFICATION_VENDOR(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_VM_SPECIFICATION_VENDOR)

/*!
 @brief Java Virtual Machine specification name.
 */
inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_VM_SPECIFICATION_NAME(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_VM_SPECIFICATION_NAME)

/*!
 @brief Java Virtual Machine implementation version.
 */
inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_VM_VERSION(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_VM_VERSION)

/*!
 @brief Java Virtual Machine implementation vendor.
 */
inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_VM_VENDOR(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_VM_VENDOR)

/*!
 @brief Java Virtual Machine implementation name.
 */
inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_VM_NAME(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_VM_NAME)

/*!
 @brief Java Runtime Environment specification version.
 */
inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_SPECIFICATION_VERSION(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_SPECIFICATION_VERSION)

/*!
 @brief Java Runtime Environment specification vendor.
 */
inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_SPECIFICATION_VENDOR(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_SPECIFICATION_VENDOR)

/*!
 @brief Java Runtime Environment specification name.
 */
inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_SPECIFICATION_NAME(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_SPECIFICATION_NAME)

/*!
 @brief Java class format version number.
 */
inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_CLASS_VERSION(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_CLASS_VERSION)

/*!
 @brief Java class path.
 */
inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_CLASS_PATH(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_CLASS_PATH)

/*!
 @brief List of paths to search when loading libraries.
 */
inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_LIBRARY_PATH(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_LIBRARY_PATH)

/*!
 @brief Default temp file path.
 */
inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_IO_TMPDIR(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_IO_TMPDIR)

/*!
 @brief Name of JIT compiler to use.
 */
inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_COMPILER(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_COMPILER)

/*!
 @brief Path of extension directory or directories.
 */
inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_EXT_DIRS(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_EXT_DIRS)

/*!
 @brief Operating system name.
 */
inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_OS_NAME(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, OS_NAME)

/*!
 @brief Operating system architecture.
 */
inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_OS_ARCH(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, OS_ARCH)

/*!
 @brief Operating system version.
 */
inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_OS_VERSION(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, OS_VERSION)

/*!
 @brief File separator ("/" on UNIX).
 */
inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_FILE_SEPARATOR(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, FILE_SEPARATOR)

/*!
 @brief Path separator (":" on UNIX).
 */
inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_PATH_SEPARATOR(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, PATH_SEPARATOR)

/*!
 @brief Line separator ("\n" on UNIX).
 */
inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_LINE_SEPARATOR(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, LINE_SEPARATOR)

/*!
 @brief User's account name.
 */
inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_USER_NAME(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, USER_NAME)

/*!
 @brief User's home directory.
 */
inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_USER_HOME(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, USER_HOME)

/*!
 @brief User's current working directory.
 */
inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_USER_DIR(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, USER_DIR)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonBaseStandardSystemProperty_values(void);

FOUNDATION_EXPORT ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseStandardSystemProperty)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseStandardSystemProperty")
