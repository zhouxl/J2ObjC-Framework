//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/junit/build_result/java/org/hamcrest/StringDescription.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgHamcrestStringDescription")
#ifdef RESTRICT_OrgHamcrestStringDescription
#define INCLUDE_ALL_OrgHamcrestStringDescription 0
#else
#define INCLUDE_ALL_OrgHamcrestStringDescription 1
#endif
#undef RESTRICT_OrgHamcrestStringDescription

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgHamcrestStringDescription_) && (INCLUDE_ALL_OrgHamcrestStringDescription || defined(INCLUDE_OrgHamcrestStringDescription))
#define OrgHamcrestStringDescription_

#define RESTRICT_OrgHamcrestBaseDescription 1
#define INCLUDE_OrgHamcrestBaseDescription 1
#include "org/hamcrest/BaseDescription.h"

@protocol JavaLangAppendable;
@protocol OrgHamcrestSelfDescribing;

/*!
 @brief A <code>Description</code> that is stored as a string.
 */
@interface OrgHamcrestStringDescription : OrgHamcrestBaseDescription

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithJavaLangAppendable:(id<JavaLangAppendable>)outArg;

/*!
 @brief Alias for <code>toString(SelfDescribing)</code>.
 */
+ (NSString *)asStringWithOrgHamcrestSelfDescribing:(id<OrgHamcrestSelfDescribing>)selfDescribing;

/*!
 @brief Returns the description as a string.
 */
- (NSString *)description;

/*!
 @brief Return the description of a <code>SelfDescribing</code> object as a String.
 @param selfDescribing The object to be described.
 @return The description of the object.
 */
+ (NSString *)toStringWithOrgHamcrestSelfDescribing:(id<OrgHamcrestSelfDescribing>)selfDescribing;

#pragma mark Protected

- (void)appendWithChar:(jchar)c;

- (void)appendWithNSString:(NSString *)str;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestStringDescription)

FOUNDATION_EXPORT void OrgHamcrestStringDescription_init(OrgHamcrestStringDescription *self);

FOUNDATION_EXPORT OrgHamcrestStringDescription *new_OrgHamcrestStringDescription_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgHamcrestStringDescription *create_OrgHamcrestStringDescription_init(void);

FOUNDATION_EXPORT void OrgHamcrestStringDescription_initWithJavaLangAppendable_(OrgHamcrestStringDescription *self, id<JavaLangAppendable> outArg);

FOUNDATION_EXPORT OrgHamcrestStringDescription *new_OrgHamcrestStringDescription_initWithJavaLangAppendable_(id<JavaLangAppendable> outArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgHamcrestStringDescription *create_OrgHamcrestStringDescription_initWithJavaLangAppendable_(id<JavaLangAppendable> outArg);

FOUNDATION_EXPORT NSString *OrgHamcrestStringDescription_toStringWithOrgHamcrestSelfDescribing_(id<OrgHamcrestSelfDescribing> selfDescribing);

FOUNDATION_EXPORT NSString *OrgHamcrestStringDescription_asStringWithOrgHamcrestSelfDescribing_(id<OrgHamcrestSelfDescribing> selfDescribing);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestStringDescription)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgHamcrestStringDescription")
