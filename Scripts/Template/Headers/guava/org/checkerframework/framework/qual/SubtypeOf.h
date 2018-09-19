//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/org/checkerframework/framework/qual/SubtypeOf.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgCheckerframeworkFrameworkQualSubtypeOf")
#ifdef RESTRICT_OrgCheckerframeworkFrameworkQualSubtypeOf
#define INCLUDE_ALL_OrgCheckerframeworkFrameworkQualSubtypeOf 0
#else
#define INCLUDE_ALL_OrgCheckerframeworkFrameworkQualSubtypeOf 1
#endif
#undef RESTRICT_OrgCheckerframeworkFrameworkQualSubtypeOf

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgCheckerframeworkFrameworkQualSubtypeOf_) && (INCLUDE_ALL_OrgCheckerframeworkFrameworkQualSubtypeOf || defined(INCLUDE_OrgCheckerframeworkFrameworkQualSubtypeOf))
#define OrgCheckerframeworkFrameworkQualSubtypeOf_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "../../../../../java/lang/annotation/Annotation.h"

@class IOSClass;
@class IOSObjectArray;

/*!
 @brief A meta-annotation to specify all the qualifiers that the given qualifier
  is a subtype of.This provides a declarative way to specify the type
  qualifier hierarchy.
 (Alternatively, the hierarchy can be defined
  procedurally by subclassing <code>org.checkerframework.framework.type.QualifierHierarchy</code> or 
 <code>org.checkerframework.framework.type.TypeHierarchy</code>.)
  
 <p>
  Example: 
 @code
 @@SubtypeOf( { Nullable.class } )
  public @@interface NonNull { } 
  
@endcode
  
 <p>
  If a qualified type is a subtype of the same type without any qualifier,
  then use <code>Unqualified.class</code> in place of a type qualifier
  class.  For example, to express that <code>@@Encrypted <em>C</em></code>
  is a subtype of <code><em>C</em></code> (for every class 
 <code><em>C</em></code>), and likewise for <code>@@Interned</code>, write: 
 @code
 @@SubtypeOf(Unqualified.class)
  public @@interface Encrypted { } 
  &#64;SubtypeOf(Unqualified.class)
  public @@interface Interned { } 
  
@endcode
  
 <p>
  For the top qualifier in the qualifier hierarchy (i.e., the
  qualifier that is a supertype of all other qualifiers in the given
  hierarchy), use an empty set of values: 
 @code
 @@SubtypeOf( { } )
  public @@interface Nullable { } 
  &#64;SubtypeOf( {} )
  public @@interface MaybeAliased { } 
  
@endcode
  
 <p>
  Together, all the @@SubtypeOf meta-annotations fully describe the type
  qualifier hierarchy.
  No @@SubtypeOf meta-annotation is needed on (or can be written on) the
  Unqualified pseudo-qualifier, whose position in the hierarchy is
  inferred from the meta-annotations on the explicit qualifiers.
 */
@protocol OrgCheckerframeworkFrameworkQualSubtypeOf < JavaLangAnnotationAnnotation >

@property (readonly) IOSObjectArray *value;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface OrgCheckerframeworkFrameworkQualSubtypeOf : NSObject < OrgCheckerframeworkFrameworkQualSubtypeOf > {
 @public
  IOSObjectArray *value_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(OrgCheckerframeworkFrameworkQualSubtypeOf)

FOUNDATION_EXPORT id<OrgCheckerframeworkFrameworkQualSubtypeOf> create_OrgCheckerframeworkFrameworkQualSubtypeOf(IOSObjectArray *value);

J2OBJC_TYPE_LITERAL_HEADER(OrgCheckerframeworkFrameworkQualSubtypeOf)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgCheckerframeworkFrameworkQualSubtypeOf")
