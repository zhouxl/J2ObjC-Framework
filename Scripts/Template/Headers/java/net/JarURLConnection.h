//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/JarURLConnection.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetJarURLConnection")
#ifdef RESTRICT_JavaNetJarURLConnection
#define INCLUDE_ALL_JavaNetJarURLConnection 0
#else
#define INCLUDE_ALL_JavaNetJarURLConnection 1
#endif
#undef RESTRICT_JavaNetJarURLConnection

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNetJarURLConnection_) && (INCLUDE_ALL_JavaNetJarURLConnection || defined(INCLUDE_JavaNetJarURLConnection))
#define JavaNetJarURLConnection_

#define RESTRICT_JavaNetURLConnection 1
#define INCLUDE_JavaNetURLConnection 1
#include "../../java/net/URLConnection.h"

@class IOSObjectArray;
@class JavaNetURL;
@class JavaUtilJarAttributes;
@class JavaUtilJarJarEntry;
@class JavaUtilJarJarFile;
@class JavaUtilJarManifest;

/*!
 @brief A URL Connection to a Java ARchive (JAR) file or an entry in a JAR
  file.
 <p>The syntax of a JAR URL is: 
 @code

  jar:&lt;url&gt;!/{entry}
   
@endcode
  
 <p>for example: 
 <p><code>
  jar:http://www.foo.com/bar/baz.jar!/COM/foo/Quux.class<br>
  </code>
  
 <p>Jar URLs should be used to refer to a JAR file or entries in
  a JAR file. The example above is a JAR URL which refers to a JAR
  entry. If the entry name is omitted, the URL refers to the whole
  JAR file: 
 <code>
  jar:http://www.foo.com/bar/baz.jar!/ 
 </code>
  
 <p>Users should cast the generic URLConnection to a
  JarURLConnection when they know that the URL they created is a JAR
  URL, and they need JAR-specific functionality. For example: 
 @code

  URL url = new URL("jar:file:/home/duke/duke.jar!/");
  JarURLConnection jarConnection = (JarURLConnection)url.openConnection();
  Manifest manifest = jarConnection.getManifest(); 
  
@endcode
  
 <p>JarURLConnection instances can only be used to read from JAR files.
  It is not possible to get a <code>java.io.OutputStream</code> to modify or write
  to the underlying JAR file using this class. 
 <p>Examples:
  
 <dl>
  
 <dt>A Jar entry 
 <dd><code>jar:http://www.foo.com/bar/baz.jar!/COM/foo/Quux.class</code>
  
 <dt>A Jar file 
 <dd><code>jar:http://www.foo.com/bar/baz.jar!/</code>
  
 <dt>A Jar directory 
 <dd><code>jar:http://www.foo.com/bar/baz.jar!/COM/foo/</code>
  
 </dl>
  
 <p><code>!/</code> is refered to as the <em>separator</em>.
  
 <p>When constructing a JAR url via <code>new URL(context, spec)</code>,
  the following rules apply: 
 <ul>
  
 <li>if there is no context URL and the specification passed to the
  URL constructor doesn't contain a separator, the URL is considered
  to refer to a JarFile. 
 <li>if there is a context URL, the context URL is assumed to refer
  to a JAR file or a Jar directory. 
 <li>if the specification begins with a '/', the Jar directory is
  ignored, and the spec is considered to be at the root of the Jar
  file. 
 <p>Examples:
  
 <dl>
  
 <dt>context: <b>jar:http://www.foo.com/bar/jar.jar!/</b>,
  spec:<b>baz/entry.txt</b>
  
 <dd>url:<b>jar:http://www.foo.com/bar/jar.jar!/baz/entry.txt</b>
  
 <dt>context: <b>jar:http://www.foo.com/bar/jar.jar!/baz</b>,
  spec:<b>entry.txt</b>
  
 <dd>url:<b>jar:http://www.foo.com/bar/jar.jar!/baz/entry.txt</b>
  
 <dt>context: <b>jar:http://www.foo.com/bar/jar.jar!/baz</b>,
  spec:<b>/entry.txt</b>
  
 <dd>url:<b>jar:http://www.foo.com/bar/jar.jar!/entry.txt</b>
  
 </dl>
  
 </ul>
 - seealso: java.net.URL
 - seealso: java.net.URLConnection
 - seealso: java.util.jar.JarFile
 - seealso: java.util.jar.JarInputStream
 - seealso: java.util.jar.Manifest
 - seealso: java.util.zip.ZipEntry
 @author Benjamin Renaud
 @since 1.2
 */
@interface JavaNetJarURLConnection : JavaNetURLConnection {
 @public
  /*!
   @brief The connection to the JAR file URL, if the connection has been
  initiated.This should be set by connect.
   */
  JavaNetURLConnection *jarFileURLConnection_;
}

#pragma mark Public

/*!
 @brief Return the Attributes object for this connection if the URL
  for it points to a JAR file entry, null otherwise.
 @return the Attributes object for this connection if the URL
  for it points to a JAR file entry, null otherwise.
 @throw IOExceptionif getting the JAR entry causes an
  IOException to be thrown.
 - seealso: #getJarEntry
 */
- (JavaUtilJarAttributes *)getAttributes;

/*!
 @brief Return the Certificate object for this connection if the URL
  for it points to a JAR file entry, null otherwise.This method
  can only be called once
  the connection has been completely verified by reading
  from the input stream until the end of the stream has been
  reached.
 Otherwise, this method will return <code>null</code>
 @return the Certificate object for this connection if the URL
  for it points to a JAR file entry, null otherwise.
 @throw IOExceptionif getting the JAR entry causes an
  IOException to be thrown.
 - seealso: #getJarEntry
 */
- (IOSObjectArray *)getCertificates;

/*!
 @brief Return the entry name for this connection.This method
  returns null if the JAR file URL corresponding to this
  connection points to a JAR file and not a JAR file entry.
 @return the entry name for this connection, if any.
 */
- (NSString *)getEntryName;

/*!
 @brief Return the JAR entry object for this connection, if any.This
  method returns null if the JAR file URL corresponding to this
  connection points to a JAR file and not a JAR file entry.
 @return the JAR entry object for this connection, or null if
  the JAR URL for this connection points to a JAR file.
 @throw IOExceptionif getting the JAR file for this
  connection causes an IOException to be trown.
 - seealso: #getJarFile
 - seealso: #getJarEntry
 */
- (JavaUtilJarJarEntry *)getJarEntry;

/*!
 @brief Return the JAR file for this connection.
 @return the JAR file for this connection. If the connection is
  a connection to an entry of a JAR file, the JAR file object is
  returned
 @throw IOExceptionif an IOException occurs while trying to
  connect to the JAR file for this connection.
 - seealso: #connect
 */
- (JavaUtilJarJarFile *)getJarFile;

/*!
 @brief Returns the URL for the Jar file for this connection.
 @return the URL for the Jar file for this connection.
 */
- (JavaNetURL *)getJarFileURL;

/*!
 @brief Returns the main Attributes for the JAR file for this
  connection.
 @return the main Attributes for the JAR file for this
  connection.
 @throw IOExceptionif getting the manifest causes an
  IOException to be thrown.
 - seealso: #getJarFile
 - seealso: #getManifest
 */
- (JavaUtilJarAttributes *)getMainAttributes;

/*!
 @brief Returns the Manifest for this connection, or null if none.
 @return the manifest object corresponding to the JAR file object
  for this connection.
 @throw IOExceptionif getting the JAR file for this
  connection causes an IOException to be trown.
 - seealso: #getJarFile
 */
- (JavaUtilJarManifest *)getManifest;

#pragma mark Protected

/*!
 @brief Creates the new JarURLConnection to the specified URL.
 @param url the URL
 @throw MalformedURLExceptionif no legal protocol
  could be found in a specification string or the
  string could not be parsed.
 */
- (instancetype __nonnull)initWithJavaNetURL:(JavaNetURL *)url;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetJarURLConnection)

J2OBJC_FIELD_SETTER(JavaNetJarURLConnection, jarFileURLConnection_, JavaNetURLConnection *)

FOUNDATION_EXPORT void JavaNetJarURLConnection_initWithJavaNetURL_(JavaNetJarURLConnection *self, JavaNetURL *url);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetJarURLConnection)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetJarURLConnection")
