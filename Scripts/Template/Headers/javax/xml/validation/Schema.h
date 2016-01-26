//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/validation/Schema.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaxXmlValidationSchema_INCLUDE_ALL")
#ifdef JavaxXmlValidationSchema_RESTRICT
#define JavaxXmlValidationSchema_INCLUDE_ALL 0
#else
#define JavaxXmlValidationSchema_INCLUDE_ALL 1
#endif
#undef JavaxXmlValidationSchema_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxXmlValidationSchema_) && (JavaxXmlValidationSchema_INCLUDE_ALL || defined(JavaxXmlValidationSchema_INCLUDE))
#define JavaxXmlValidationSchema_

@class JavaxXmlValidationValidator;
@class JavaxXmlValidationValidatorHandler;

/*!
 @brief Immutable in-memory representation of grammar.
 <p>
 This object represents a set of constraints that can be checked/
 enforced against an XML document.
 <p>
 A <code>Schema</code> object is thread safe and applications are
 encouraged to share it across many parsers in many threads.
 <p>
 A <code>Schema</code> object is immutable in the sense that it shouldn't
 change the set of constraints once it is created. In other words,
 if an application validates the same document twice against the same
 <code>Schema</code>, it must always produce the same result.
 <p>
 A <code>Schema</code> object is usually created from <code>SchemaFactory</code>.
 <p>
 Two kinds of validators can be created from a <code>Schema</code> object.
 One is <code>Validator</code>, which provides highly-level validation
 operations that cover typical use cases. The other is
 <code>ValidatorHandler</code>, which works on top of SAX for better
 modularity.
 <p>
 This specification does not refine
 the <code>java.lang.Object.equals(java.lang.Object)</code> method.
 In other words, if you parse the same schema twice, you may
 still get <code>!schemaA.equals(schemaB)</code>.
 @author <a href="mailto:Kohsuke.Kawaguchi@@Sun.com">Kohsuke Kawaguchi</a>
 @version $Revision: 446598 $, $Date: 2006-09-15 05:55:40 -0700 (Fri, 15 Sep 2006) $
 - seealso: <a href="http://www.w3.org/TR/xmlschema-1/">XML Schema Part 1: Structures</a>
 - seealso: <a href="http://www.w3.org/TR/xml11/">Extensible Markup Language (XML) 1.1</a>
 - seealso: <a href="http://www.w3.org/TR/REC-xml">Extensible Markup Language (XML) 1.0 (Second Edition)</a>
 @since 1.5
 */
@interface JavaxXmlValidationSchema : NSObject

#pragma mark Public

/*!
 @brief Creates a new <code>Validator</code> for this <code>Schema</code>.
 <p>
 A validator enforces/checks the set of constraints this object
 represents.
 @return Always return a non-null valid object.
 */
- (JavaxXmlValidationValidator *)newValidator OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates a new <code>ValidatorHandler</code> for this <code>Schema</code>.
 @return Always return a non-null valid object.
 */
- (JavaxXmlValidationValidatorHandler *)newValidatorHandler OBJC_METHOD_FAMILY_NONE;

#pragma mark Protected

/*!
 @brief Constructor for the derived class.
 <p>
 The constructor does nothing.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlValidationSchema)

FOUNDATION_EXPORT void JavaxXmlValidationSchema_init(JavaxXmlValidationSchema *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlValidationSchema)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaxXmlValidationSchema_INCLUDE_ALL")
