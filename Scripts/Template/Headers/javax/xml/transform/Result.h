//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/javax/xml/transform/Result.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxXmlTransformResult")
#ifdef RESTRICT_JavaxXmlTransformResult
#define INCLUDE_ALL_JavaxXmlTransformResult 0
#else
#define INCLUDE_ALL_JavaxXmlTransformResult 1
#endif
#undef RESTRICT_JavaxXmlTransformResult

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxXmlTransformResult_) && (INCLUDE_ALL_JavaxXmlTransformResult || defined(INCLUDE_JavaxXmlTransformResult))
#define JavaxXmlTransformResult_

/*!
 @brief <p>An object that implements this interface contains the information
  needed to build a transformation result tree.
 </p>
 @author <a href="Jeff.Suttor@@Sun.com">Jeff Suttor</a>
 */
@protocol JavaxXmlTransformResult < JavaObject >

/*!
 @brief Set the system identifier for this Result.
 <p>If the Result is not to be written to a file, the system identifier is optional.
  The application may still want to provide one, however, for use in error messages
  and warnings, or to resolve relative output identifiers.</p>
 @param systemId The system identifier as a URI string.
 */
- (void)setSystemIdWithNSString:(NSString *)systemId;

/*!
 @brief Get the system identifier that was set with setSystemId.
 @return The system identifier that was set with setSystemId,
  or null if setSystemId was not called.
 */
- (NSString *)getSystemId;

@end

@interface JavaxXmlTransformResult : NSObject
@property (readonly, copy, class) NSString *PI_DISABLE_OUTPUT_ESCAPING NS_SWIFT_NAME(PI_DISABLE_OUTPUT_ESCAPING);
@property (readonly, copy, class) NSString *PI_ENABLE_OUTPUT_ESCAPING NS_SWIFT_NAME(PI_ENABLE_OUTPUT_ESCAPING);

+ (NSString *)PI_DISABLE_OUTPUT_ESCAPING;

+ (NSString *)PI_ENABLE_OUTPUT_ESCAPING;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformResult)

/*!
 @brief The name of the processing instruction that is sent if the
  result tree disables output escaping.
 <p>Normally, result tree serialization escapes & and < (and
  possibly other characters) when outputting text nodes.
  This ensures that the output is well-formed XML. However,
  it is sometimes convenient to be able to produce output that is
  almost, but not quite well-formed XML; for example,
  the output may include ill-formed sections that will
  be transformed into well-formed XML by a subsequent non-XML aware
  process. If a processing instruction is sent with this name,
  serialization should be output without any escaping. </p>
  
 <p>Result DOM trees may also have PI_DISABLE_OUTPUT_ESCAPING and
  PI_ENABLE_OUTPUT_ESCAPING inserted into the tree.</p>
 - seealso: <a href="http://www.w3.org/TR/xslt#disable-output-escaping">disable-output-escaping in XSLT Specification</a>
 */
inline NSString *JavaxXmlTransformResult_get_PI_DISABLE_OUTPUT_ESCAPING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaxXmlTransformResult_PI_DISABLE_OUTPUT_ESCAPING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaxXmlTransformResult, PI_DISABLE_OUTPUT_ESCAPING, NSString *)

/*!
 @brief The name of the processing instruction that is sent
  if the result tree enables output escaping at some point after having
  received a PI_DISABLE_OUTPUT_ESCAPING processing instruction.
 - seealso: <a href="http://www.w3.org/TR/xslt#disable-output-escaping">disable-output-escaping in XSLT Specification</a>
 */
inline NSString *JavaxXmlTransformResult_get_PI_ENABLE_OUTPUT_ESCAPING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaxXmlTransformResult_PI_ENABLE_OUTPUT_ESCAPING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaxXmlTransformResult, PI_ENABLE_OUTPUT_ESCAPING, NSString *)

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformResult)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxXmlTransformResult")
