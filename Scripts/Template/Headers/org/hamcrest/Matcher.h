//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/hamcrest/Matcher.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgHamcrestMatcher")
#ifdef RESTRICT_OrgHamcrestMatcher
#define INCLUDE_ALL_OrgHamcrestMatcher 0
#else
#define INCLUDE_ALL_OrgHamcrestMatcher 1
#endif
#undef RESTRICT_OrgHamcrestMatcher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgHamcrestMatcher_) && (INCLUDE_ALL_OrgHamcrestMatcher || defined(INCLUDE_OrgHamcrestMatcher))
#define OrgHamcrestMatcher_

#define RESTRICT_OrgHamcrestSelfDescribing 1
#define INCLUDE_OrgHamcrestSelfDescribing 1
#include "../../org/hamcrest/SelfDescribing.h"

@protocol OrgHamcrestDescription;

/*!
 @brief A matcher over acceptable values.
 A matcher is able to describe itself to give feedback when it fails. 
 <p>
  Matcher implementations should <b>NOT directly implement this interface</b>.
  Instead, <b>extend</b> the <code>BaseMatcher</code> abstract class,
  which will ensure that the Matcher API can grow to support
  new features and remain compatible with all Matcher implementations. 
 <p>
  For easy access to common Matcher implementations, use the static factory
  methods in <code>CoreMatchers</code>.
  <p>
  N.B. Well designed matchers should be immutable.
 - seealso: CoreMatchers
 - seealso: BaseMatcher
 */
@protocol OrgHamcrestMatcher < OrgHamcrestSelfDescribing, JavaObject >

/*!
 @brief Evaluates the matcher for argument <var>item</var>.
 <p>
  This method matches against Object, instead of the generic type T. This is
  because the caller of the Matcher does not know at runtime what the type is
  (because of type erasure with Java generics). It is down to the implementations
  to check the correct type.
 @param item the object against which the matcher is evaluated.
 @return <code>true</code> if <var>item</var> matches, otherwise <code>false</code>.
 - seealso: BaseMatcher
 */
- (jboolean)matchesWithId:(id)item;

/*!
 @brief Generate a description of why the matcher has not accepted the item.
 The description will be part of a larger description of why a matching
  failed, so it should be concise. 
  This method assumes that <code>matches(item)</code> is false, but 
  will not check this.
 @param item The item that the Matcher has rejected.
 @param mismatchDescription The description to be built or appended to.
 */
- (void)describeMismatchWithId:(id)item
    withOrgHamcrestDescription:(id<OrgHamcrestDescription>)mismatchDescription;

/*!
 @brief This method simply acts a friendly reminder not to implement Matcher directly and
  instead extend BaseMatcher.It's easy to ignore JavaDoc, but a bit harder to ignore
  compile errors .
 - seealso: Matcherfor reasons why.
 - seealso: BaseMatcher
 */
- (void)_dont_implement_Matcher___instead_extend_BaseMatcher_ __attribute__((deprecated));

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestMatcher)

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestMatcher)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgHamcrestMatcher")
