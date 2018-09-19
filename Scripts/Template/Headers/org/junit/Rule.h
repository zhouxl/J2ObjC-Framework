//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/Rule.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRule")
#ifdef RESTRICT_OrgJunitRule
#define INCLUDE_ALL_OrgJunitRule 0
#else
#define INCLUDE_ALL_OrgJunitRule 1
#endif
#undef RESTRICT_OrgJunitRule

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitRule_) && (INCLUDE_ALL_OrgJunitRule || defined(INCLUDE_OrgJunitRule))
#define OrgJunitRule_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "../../java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief Annotates fields that reference rules or methods that return a rule.A field must be public, not
  static, and a subtype of <code>org.junit.rules.TestRule</code> (preferred) or 
 <code>org.junit.rules.MethodRule</code>.
 A method must be public, not static,
  and must return a subtype of <code>org.junit.rules.TestRule</code> (preferred) or 
 <code>org.junit.rules.MethodRule</code>.<p>
  The <code>org.junit.runners.model.Statement</code> passed
  to the <code>org.junit.rules.TestRule</code> will run any <code>Before</code> methods,
  then the <code>Test</code> method, and finally any <code>After</code> methods,
  throwing an exception if any of these fail.  If there are multiple
  annotated <code>Rule</code>s on a class, they will be applied in order of fields first, then methods.
  However, if there are mutliple fields (or methods) they will be applied in an order
  that depends on your JVM's implementation of the reflection API, which is
  undefined, in general. Rules defined by fields will always be applied
  before Rules defined by methods.<p>
  For example, here is a test class that creates a temporary folder before
  each test method, and deletes it after each: 
 @code

  public static class HasTempFolder {
          &#064;Rule
      public TemporaryFolder folder= new TemporaryFolder();     
     &#064;Test
      public void testUsingTempFolder() throws IOException {
          File createdFile= folder.newFile(&quot;myfile.txt&quot;);
          File createdFolder= folder.newFolder(&quot;subfolder&quot;);
          // ...
      }    }    
  
@endcode
  And the same using a method. 
 @code

  public static class HasTempFolder {
      private TemporaryFolder folder= new TemporaryFolder();     
     &#064;Rule
      public TemporaryFolder getFolder() {
          return folder;
      }     
     &#064;Test
      public void testUsingTempFolder() throws IOException {
          File createdFile= folder.newFile(&quot;myfile.txt&quot;);
          File createdFolder= folder.newFolder(&quot;subfolder&quot;);
          // ...
      }    }    
  
@endcode
  For more information and more examples, see 
 <code>org.junit.rules.TestRule</code>.
 @since 4.7
 */
@protocol OrgJunitRule < JavaLangAnnotationAnnotation >

@end

@interface OrgJunitRule : NSObject < OrgJunitRule >

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRule)

FOUNDATION_EXPORT id<OrgJunitRule> create_OrgJunitRule(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRule)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRule")
