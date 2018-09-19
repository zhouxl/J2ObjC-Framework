//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/text/SpannableString.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidTextSpannableString")
#ifdef RESTRICT_AndroidTextSpannableString
#define INCLUDE_ALL_AndroidTextSpannableString 0
#else
#define INCLUDE_ALL_AndroidTextSpannableString 1
#endif
#undef RESTRICT_AndroidTextSpannableString

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AndroidTextSpannableString_) && (INCLUDE_ALL_AndroidTextSpannableString || defined(INCLUDE_AndroidTextSpannableString))
#define AndroidTextSpannableString_

#define RESTRICT_AndroidTextSpannableStringInternal 1
#define INCLUDE_AndroidTextSpannableStringInternal 1
#include "../../android/text/SpannableStringInternal.h"

#define RESTRICT_JavaLangCharSequence 1
#define INCLUDE_JavaLangCharSequence 1
#include "../../java/lang/CharSequence.h"

#define RESTRICT_AndroidTextGetChars 1
#define INCLUDE_AndroidTextGetChars 1
#include "../../android/text/GetChars.h"

#define RESTRICT_AndroidTextSpannable 1
#define INCLUDE_AndroidTextSpannable 1
#include "../../android/text/Spannable.h"

/*!
 @brief This is the class for text whose content is immutable but to which
  markup objects can be attached and detached.
 For mutable text, see <code>SpannableStringBuilder</code>.
 */
@interface AndroidTextSpannableString : AndroidTextSpannableStringInternal < JavaLangCharSequence, AndroidTextGetChars, AndroidTextSpannable >

#pragma mark Public

- (instancetype __nonnull)initWithJavaLangCharSequence:(id<JavaLangCharSequence>)source;

- (void)removeSpanWithId:(id)what;

- (void)setSpanWithId:(id)what
              withInt:(jint)start
              withInt:(jint)end
              withInt:(jint)flags;

- (id<JavaLangCharSequence>)subSequenceFrom:(jint)start
                                         to:(jint)end;

+ (AndroidTextSpannableString *)valueOfWithJavaLangCharSequence:(id<JavaLangCharSequence>)source;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidTextSpannableString)

FOUNDATION_EXPORT void AndroidTextSpannableString_initWithJavaLangCharSequence_(AndroidTextSpannableString *self, id<JavaLangCharSequence> source);

FOUNDATION_EXPORT AndroidTextSpannableString *new_AndroidTextSpannableString_initWithJavaLangCharSequence_(id<JavaLangCharSequence> source) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidTextSpannableString *create_AndroidTextSpannableString_initWithJavaLangCharSequence_(id<JavaLangCharSequence> source);

FOUNDATION_EXPORT AndroidTextSpannableString *AndroidTextSpannableString_valueOfWithJavaLangCharSequence_(id<JavaLangCharSequence> source);

J2OBJC_TYPE_LITERAL_HEADER(AndroidTextSpannableString)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidTextSpannableString")
