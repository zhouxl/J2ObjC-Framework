//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/xslt/EnvironmentCheck.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanXsltEnvironmentCheck")
#ifdef RESTRICT_OrgApacheXalanXsltEnvironmentCheck
#define INCLUDE_ALL_OrgApacheXalanXsltEnvironmentCheck 0
#else
#define INCLUDE_ALL_OrgApacheXalanXsltEnvironmentCheck 1
#endif
#undef RESTRICT_OrgApacheXalanXsltEnvironmentCheck

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanXsltEnvironmentCheck_) && (INCLUDE_ALL_OrgApacheXalanXsltEnvironmentCheck || defined(INCLUDE_OrgApacheXalanXsltEnvironmentCheck))
#define OrgApacheXalanXsltEnvironmentCheck_

@class IOSObjectArray;
@class JavaIoPrintWriter;
@class JavaUtilHashtable;
@class JavaUtilVector;
@protocol OrgW3cDomDocument;
@protocol OrgW3cDomNode;

/*!
 @brief Utility class to report simple information about the environment.
 Simplistic reporting about certain classes found in your JVM may 
  help answer some FAQs for simple problems. 
 <p>Usage-command line:   
 <code>
  java org.apache.xalan.xslt.EnvironmentCheck [-out outFile] 
 </code></p>
   
 <p>Usage-from program:   
 <code>
  boolean environmentOK = 
  (new EnvironmentCheck()).checkEnvironment(yourPrintWriter); 
 </code></p>
  
 <p>Usage-from stylesheet:   
 <code>@code

        &lt;?xml version="1.0"?&gt;
        &lt;xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0"
         xmlns:xalan="http://xml.apache.org/xalan"
         exclude-result-prefixes="xalan"&gt;
        &lt;xsl:output indent="yes"/&gt;
        &lt;xsl:template match="/"&gt;
            &lt;xsl:copy-of select="xalan:checkEnvironment()"/&gt;
        &lt;/xsl:template&gt;
        &lt;/xsl:stylesheet&gt;
   
@endcode</code></p>
    
 <p>Xalan users reporting problems are encouraged to use this class 
  to see if there are potential problems with their actual 
  Java environment <b>before</b> reporting a bug.  Note that you 
  should both check from the JVM/JRE's command line as well as 
  temporarily calling checkEnvironment() directly from your code, 
  since the classpath may differ (especially for servlets, etc).</p>
  
 <p>Also see http://xml.apache.org/xalan-j/faq.html</p>
  
 <p>Note: This class is pretty simplistic: 
  results are not necessarily definitive nor will it find all 
  problems related to environment setup.  Also, you should avoid 
  calling this in deployed production code, both because it is 
  quite slow and because it forces classes to get loaded.</p>
  
 <p>Note: This class explicitly has very limited compile-time 
  dependencies to enable easy compilation and usage even when 
  Xalan, DOM/SAX/JAXP, etc. are not present.</p>
   
 <p>Note: for an improved version of this utility, please see 
  the xml-commons' project Which utility which does the same kind 
  of thing but in a much simpler manner.</p>
 @author Shane_Curcuru@@us.ibm.com
 @version $Id: EnvironmentCheck.java 468646 2006-10-28 06:57:58Z minchau $
 */
@interface OrgApacheXalanXsltEnvironmentCheck : NSObject {
 @public
  /*!
   @brief Listing of common .jar files that include Xalan-related classes.
   */
  IOSObjectArray *jarNames_;
  /*!
   @brief Simple PrintWriter we send output to; defaults to System.out.
   */
  JavaIoPrintWriter *outWriter_;
}
@property (readonly, copy, class) NSString *ERROR NS_SWIFT_NAME(ERROR);
@property (readonly, copy, class) NSString *WARNING NS_SWIFT_NAME(WARNING);
@property (readonly, copy, class) NSString *ERROR_FOUND NS_SWIFT_NAME(ERROR_FOUND);
@property (readonly, copy, class) NSString *VERSION NS_SWIFT_NAME(VERSION);
@property (readonly, copy, class) NSString *FOUNDCLASSES NS_SWIFT_NAME(FOUNDCLASSES);
@property (readonly, copy, class) NSString *CLASS_PRESENT NS_SWIFT_NAME(CLASS_PRESENT);
@property (readonly, copy, class) NSString *CLASS_NOTPRESENT NS_SWIFT_NAME(CLASS_NOTPRESENT);

+ (NSString *)ERROR;

+ (NSString *)WARNING;

+ (NSString *)ERROR_FOUND;

+ (NSString *)VERSION;

+ (NSString *)FOUNDCLASSES;

+ (NSString *)CLASS_PRESENT;

+ (NSString *)CLASS_NOTPRESENT;

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Stylesheet extension entrypoint: Dump a basic Xalan 
  environment report from getEnvironmentHash() to a Node.
 <p>Copy of writeEnvironmentReport that creates a Node suitable 
  for other processing instead of a properties-like text output. 
 </p>
 @param container Node to append our report to
 @param factory Document providing createElement, etc. services
 @param h Hash presumably from <code>getEnvironmentHash()</code>
 - seealso: #writeEnvironmentReport(Hashtable)
 for an equivalent that writes to a PrintWriter instead
 */
- (void)appendEnvironmentReportWithOrgW3cDomNode:(id<OrgW3cDomNode>)container
                           withOrgW3cDomDocument:(id<OrgW3cDomDocument>)factory
                           withJavaUtilHashtable:(JavaUtilHashtable *)h;

/*!
 @brief Programmatic entrypoint: Report on basic Java environment 
  and CLASSPATH settings that affect Xalan.
 <p>Note that this class is not advanced enough to tell you 
  everything about the environment that affects Xalan, and 
  sometimes reports errors that will not actually affect 
  Xalan's behavior.  Currently, it very simplistically 
  checks the JVM's environment for some basic properties and 
  logs them out; it will report a problem if it finds a setting 
  or .jar file that is <i>likely</i> to cause problems.</p>
  
 <p>Advanced users can peruse the code herein to help them 
  investigate potential environment problems found; other users 
  may simply send the output from this tool along with any bugs 
  they submit to help us in the debugging process.</p>
 @param pw PrintWriter to send output to; can be sent to a   file that will look similar to a Properties file; defaults 
   to System.out if null
 @return true if your environment appears to have no major 
  problems; false if potential environment problems found
 - seealso: #getEnvironmentHash()
 */
- (jboolean)checkEnvironmentWithJavaIoPrintWriter:(JavaIoPrintWriter *)pw;

/*!
 @brief Fill a hash with basic environment settings that affect Xalan.
 <p>Worker method called from various places.</p>
  <p>Various system and CLASSPATH, etc. properties are put into 
  the hash as keys with a brief description of the current state 
  of that item as the value.  Any serious problems will be put in 
  with a key that is prefixed with <code>'ERROR.'</code> so it
  stands out in any resulting report; also a key with just that 
  constant will be set as well for any error.</p>
  <p>Note that some legitimate cases are flaged as potential 
  errors - namely when a developer recompiles xalan.jar on their 
  own - and even a non-error state doesn't guaruntee that 
  everything in the environment is correct.  But this will help 
  point out the most common classpath and system property
  problems that we've seen.</p>
 @return Hashtable full of useful environment info about Xalan 
  and related system properties, etc.
 */
- (JavaUtilHashtable *)getEnvironmentHash;

/*!
 @brief Command line runnability: checks for [-out outFilename] arg.
 <p>Command line entrypoint; Sets output and calls  
 <code>checkEnvironment(PrintWriter)</code>.</p>
 @param args command line args
 */
+ (void)mainWithNSStringArray:(IOSObjectArray *)args;

#pragma mark Protected

/*!
 @brief Print out report of .jars found in a classpath.
 Takes the information encoded from a checkPathForJars() 
  call and dumps it out to our PrintWriter.
 @param container Node to append our report to
 @param factory Document providing createElement, etc. services
 @param v Vector of Hashtables of .jar file info
 @param desc description to print out in header
 @return false if OK, true if any .jars were reported 
  as having errors
 - seealso: #checkPathForJars(String, String[])
 */
- (jboolean)appendFoundJarsWithOrgW3cDomNode:(id<OrgW3cDomNode>)container
                       withOrgW3cDomDocument:(id<OrgW3cDomDocument>)factory
                          withJavaUtilVector:(JavaUtilVector *)v
                                withNSString:(NSString *)desc;

/*!
 @brief Report product version information from Ant.
 @param h Hashtable to put information in
 */
- (void)checkAntVersionWithJavaUtilHashtable:(JavaUtilHashtable *)h;

/*!
 @brief Report version info from DOM interfaces.
 Currently distinguishes between pre-DOM level 2, the DOM 
  level 2 working draft, the DOM level 2 final draft, 
  and not found.
 @param h Hashtable to put information in
 */
- (void)checkDOMVersionWithJavaUtilHashtable:(JavaUtilHashtable *)h;

/*!
 @brief Report version information about JAXP interfaces.
 Currently distinguishes between JAXP 1.0.1 and JAXP 1.1, 
  and not found; only tests the interfaces, and does not 
  check for reference implementation versions.
 @param h Hashtable to put information in
 */
- (void)checkJAXPVersionWithJavaUtilHashtable:(JavaUtilHashtable *)h;

/*!
 @brief Report product version information from common parsers.
 Looks for version info in xerces.jar/xercesImpl.jar/crimson.jar.
  //@@todo actually look up version info in crimson manifest
 @param h Hashtable to put information in
 */
- (void)checkParserVersionWithJavaUtilHashtable:(JavaUtilHashtable *)h;

/*!
 @brief Cheap-o listing of specified .jars found in the classpath.
 cp should be separated by the usual File.pathSeparator.  We 
  then do a simplistic search of the path for any requested 
  .jar filenames, and return a listing of their names and 
  where (apparently) they came from.
 @param cp classpath to search
 @param jars array of .jar base filenames to look for
 @return Vector of Hashtables filled with info about found .jars
 - seealso: #jarNames
 - seealso: #logFoundJars(Vector, String)
 - seealso: #appendFoundJars(Node, Document, Vector, String )
 - seealso: #getApparentVersion(String, long)
 */
- (JavaUtilVector *)checkPathForJarsWithNSString:(NSString *)cp
                               withNSStringArray:(IOSObjectArray *)jars;

/*!
 @brief Report product version information from Xalan-J.
 Looks for version info in xalan.jar from Xalan-J products.
 @param h Hashtable to put information in
 */
- (void)checkProcessorVersionWithJavaUtilHashtable:(JavaUtilHashtable *)h;

/*!
 @brief Report version info from SAX interfaces.
 Currently distinguishes between SAX 2, SAX 2.0beta2, 
  SAX1, and not found.
 @param h Hashtable to put information in
 */
- (void)checkSAXVersionWithJavaUtilHashtable:(JavaUtilHashtable *)h;

/*!
 @brief Fillin hash with info about SystemProperties.
 Logs java.class.path and other likely paths; then attempts 
  to search those paths for .jar files with Xalan-related classes.
  //@@todo NOTE: We don't actually search java.ext.dirs for 
  //  *.jar files therein! This should be updated
 @param h Hashtable to put information in
 - seealso: #jarNames
 - seealso: #checkPathForJars(String, String[])
 */
- (void)checkSystemPropertiesWithJavaUtilHashtable:(JavaUtilHashtable *)h;

/*!
 @brief Cheap-o method to determine the product version of a .jar.
 Currently does a lookup into a local table of some recent 
  shipped Xalan builds to determine where the .jar probably 
  came from.  Note that if you recompile Xalan or Xerces 
  yourself this will likely report a potential error, since 
  we can't certify builds other than the ones we ship.
  Only reports against selected posted Xalan-J builds.
  //@@todo actually look up version info in manifests
 @param jarName base filename of the .jarfile
 @param jarSize size of the .jarfile
 @return String describing where the .jar file probably 
  came from
 */
- (NSString *)getApparentVersionWithNSString:(NSString *)jarName
                                    withLong:(jlong)jarSize;

/*!
 @brief Print out report of .jars found in a classpath.
 Takes the information encoded from a checkPathForJars() 
  call and dumps it out to our PrintWriter.
 @param v Vector of Hashtables of .jar file info
 @param desc description to print out in header
 @return false if OK, true if any .jars were reported 
  as having errors
 - seealso: #checkPathForJars(String, String[])
 */
- (jboolean)logFoundJarsWithJavaUtilVector:(JavaUtilVector *)v
                              withNSString:(NSString *)desc;

/*!
 @brief Bottleneck output: calls outWriter.println(s).
 @param s String to print
 */
- (void)logMsgWithNSString:(NSString *)s;

/*!
 @brief Dump a basic Xalan environment report to outWriter.
 <p>This dumps a simple header and then each of the entries in 
  the Hashtable to our PrintWriter; it does special processing 
  for entries that are .jars found in the classpath.</p>
 @param h Hashtable of items to report on; presumably  filled in by our various check*() methods
 @return true if your environment appears to have no major 
  problems; false if potential environment problems found
 - seealso: #appendEnvironmentReport(Node, Document, Hashtable)
 for an equivalent that appends to a Node instead
 */
- (jboolean)writeEnvironmentReportWithJavaUtilHashtable:(JavaUtilHashtable *)h;

@end

J2OBJC_STATIC_INIT(OrgApacheXalanXsltEnvironmentCheck)

J2OBJC_FIELD_SETTER(OrgApacheXalanXsltEnvironmentCheck, jarNames_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(OrgApacheXalanXsltEnvironmentCheck, outWriter_, JavaIoPrintWriter *)

/*!
 @brief Prefixed to hash keys that signify serious problems.
 */
inline NSString *OrgApacheXalanXsltEnvironmentCheck_get_ERROR(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXalanXsltEnvironmentCheck_ERROR;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXalanXsltEnvironmentCheck, ERROR, NSString *)

/*!
 @brief Added to descriptions that signify potential problems.
 */
inline NSString *OrgApacheXalanXsltEnvironmentCheck_get_WARNING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXalanXsltEnvironmentCheck_WARNING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXalanXsltEnvironmentCheck, WARNING, NSString *)

/*!
 @brief Value for any error found.
 */
inline NSString *OrgApacheXalanXsltEnvironmentCheck_get_ERROR_FOUND(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXalanXsltEnvironmentCheck_ERROR_FOUND;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXalanXsltEnvironmentCheck, ERROR_FOUND, NSString *)

/*!
 @brief Prefixed to hash keys that signify version numbers.
 */
inline NSString *OrgApacheXalanXsltEnvironmentCheck_get_VERSION(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXalanXsltEnvironmentCheck_VERSION;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXalanXsltEnvironmentCheck, VERSION, NSString *)

/*!
 @brief Prefixed to hash keys that signify .jars found in classpath.
 */
inline NSString *OrgApacheXalanXsltEnvironmentCheck_get_FOUNDCLASSES(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXalanXsltEnvironmentCheck_FOUNDCLASSES;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXalanXsltEnvironmentCheck, FOUNDCLASSES, NSString *)

/*!
 @brief Marker that a class or .jar was found.
 */
inline NSString *OrgApacheXalanXsltEnvironmentCheck_get_CLASS_PRESENT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXalanXsltEnvironmentCheck_CLASS_PRESENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXalanXsltEnvironmentCheck, CLASS_PRESENT, NSString *)

/*!
 @brief Marker that a class or .jar was not found.
 */
inline NSString *OrgApacheXalanXsltEnvironmentCheck_get_CLASS_NOTPRESENT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXalanXsltEnvironmentCheck_CLASS_NOTPRESENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXalanXsltEnvironmentCheck, CLASS_NOTPRESENT, NSString *)

FOUNDATION_EXPORT void OrgApacheXalanXsltEnvironmentCheck_init(OrgApacheXalanXsltEnvironmentCheck *self);

FOUNDATION_EXPORT OrgApacheXalanXsltEnvironmentCheck *new_OrgApacheXalanXsltEnvironmentCheck_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanXsltEnvironmentCheck *create_OrgApacheXalanXsltEnvironmentCheck_init(void);

FOUNDATION_EXPORT void OrgApacheXalanXsltEnvironmentCheck_mainWithNSStringArray_(IOSObjectArray *args);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanXsltEnvironmentCheck)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanXsltEnvironmentCheck")
