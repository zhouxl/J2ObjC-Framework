//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/org/checkerframework/checker/nullness/qual/RequiresNonNull.java
//

#include "../../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgCheckerframeworkCheckerNullnessQualRequiresNonNull")
#ifdef RESTRICT_OrgCheckerframeworkCheckerNullnessQualRequiresNonNull
#define INCLUDE_ALL_OrgCheckerframeworkCheckerNullnessQualRequiresNonNull 0
#else
#define INCLUDE_ALL_OrgCheckerframeworkCheckerNullnessQualRequiresNonNull 1
#endif
#undef RESTRICT_OrgCheckerframeworkCheckerNullnessQualRequiresNonNull

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgCheckerframeworkCheckerNullnessQualRequiresNonNull_) && (INCLUDE_ALL_OrgCheckerframeworkCheckerNullnessQualRequiresNonNull || defined(INCLUDE_OrgCheckerframeworkCheckerNullnessQualRequiresNonNull))
#define OrgCheckerframeworkCheckerNullnessQualRequiresNonNull_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "../../../../../../java/lang/annotation/Annotation.h"

@class IOSClass;
@class IOSObjectArray;

/*!
 @brief Indicates a method precondition:  the method expects the specified
  expressions to be non-null when the annotated method is invoked.
 <p>For example: 
 <!-- The "&nbsp;" is to hide the at-signs from Javadoc. -->
  @code

   &nbsp;@@Nullable Object field1; 
  &nbsp;@@Nullable Object field2; 
  &nbsp;@@RequiresNonNull("field1")
   void method1() {
     field1.toString();        // OK, field1 is known to be non-null
     field2.toString();        // error, might throw NullPointerException
   }
   void method2() {
     field1 = new Object();
     method1();                // OK, satisfies method precondition
     field1 = null;
     method1();                // error, does not satisfy method precondition
   } 
  
@endcode
 */
@protocol OrgCheckerframeworkCheckerNullnessQualRequiresNonNull < JavaLangAnnotationAnnotation >

@property (readonly) IOSObjectArray *value;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface OrgCheckerframeworkCheckerNullnessQualRequiresNonNull : NSObject < OrgCheckerframeworkCheckerNullnessQualRequiresNonNull > {
 @public
  IOSObjectArray *value_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(OrgCheckerframeworkCheckerNullnessQualRequiresNonNull)

FOUNDATION_EXPORT id<OrgCheckerframeworkCheckerNullnessQualRequiresNonNull> create_OrgCheckerframeworkCheckerNullnessQualRequiresNonNull(IOSObjectArray *value);

J2OBJC_TYPE_LITERAL_HEADER(OrgCheckerframeworkCheckerNullnessQualRequiresNonNull)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgCheckerframeworkCheckerNullnessQualRequiresNonNull")
