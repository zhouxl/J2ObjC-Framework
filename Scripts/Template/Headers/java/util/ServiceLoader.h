//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/ServiceLoader.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilServiceLoader")
#ifdef RESTRICT_JavaUtilServiceLoader
#define INCLUDE_ALL_JavaUtilServiceLoader 0
#else
#define INCLUDE_ALL_JavaUtilServiceLoader 1
#endif
#undef RESTRICT_JavaUtilServiceLoader

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilServiceLoader_) && (INCLUDE_ALL_JavaUtilServiceLoader || defined(INCLUDE_JavaUtilServiceLoader))
#define JavaUtilServiceLoader_

#define RESTRICT_JavaLangIterable 1
#define INCLUDE_JavaLangIterable 1
#include "../../java/lang/Iterable.h"

@class IOSClass;
@class JavaLangClassLoader;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilIterator;
@protocol JavaUtilSpliterator;

/*!
 @brief A simple service-provider loading facility.
 <p> A <i>service</i> is a well-known set of interfaces and (usually
  abstract) classes.  A <i>service provider</i> is a specific implementation
  of a service.  The classes in a provider typically implement the interfaces
  and subclass the classes defined in the service itself.  Service providers
  can be installed in an implementation of the Java platform in the form of
  extensions, that is, jar files placed into any of the usual extension
  directories.  Providers can also be made available by adding them to the
  application's class path or by some other platform-specific means. 
 <p> For the purpose of loading, a service is represented by a single type,
  that is, a single interface or abstract class.  (A concrete class can be
  used, but this is not recommended.)  A provider of a given service contains
  one or more concrete classes that extend this <i>service type</i> with data
  and code specific to the provider.  The <i>provider class</i> is typically
  not the entire provider itself but rather a proxy which contains enough
  information to decide whether the provider is able to satisfy a particular
  request together with code that can create the actual provider on demand.
  The details of provider classes tend to be highly service-specific; no
  single class or interface could possibly unify them, so no such type is
  defined here.  The only requirement enforced by this facility is that
  provider classes must have a zero-argument constructor so that they can be
  instantiated during loading. 
 <p><a name="format"> A service provider is identified by placing a 
 <i>provider-configuration file</i> in the resource directory 
 <tt>META-INF/services</tt>.  The file's name is the fully-qualified <a href="../lang/ClassLoader.html#name">
 binary name</a> of the service's type.
  The file contains a list of fully-qualified binary names of concrete
  provider classes, one per line.  Space and tab characters surrounding each
  name, as well as blank lines, are ignored.  The comment character is 
 <tt>'#'</tt> (<tt>'&#92;u0023'</tt>, <font size="-1">NUMBER SIGN</font>); on
  each line all characters following the first comment character are ignored.
  The file must be encoded in UTF-8. 
 <p> If a particular concrete provider class is named in more than one
  configuration file, or is named in the same configuration file more than
  once, then the duplicates are ignored.  The configuration file naming a
  particular provider need not be in the same jar file or other distribution
  unit as the provider itself.  The provider must be accessible from the same
  class loader that was initially queried to locate the configuration file;
  note that this is not necessarily the class loader from which the file was
  actually loaded. 
 <p> Providers are located and instantiated lazily, that is, on demand.  A
  service loader maintains a cache of the providers that have been loaded so
  far.  Each invocation of the <code>iterator</code> method returns an
  iterator that first yields all of the elements of the cache, in
  instantiation order, and then lazily locates and instantiates any remaining
  providers, adding each one to the cache in turn.  The cache can be cleared
  via the <code>reload</code> method. 
 <p> Service loaders always execute in the security context of the caller.
  Trusted system code should typically invoke the methods in this class, and
  the methods of the iterators which they return, from within a privileged
  security context. 
 <p> Instances of this class are not safe for use by multiple concurrent
  threads. 
 <p> Unless otherwise specified, passing a <tt>null</tt> argument to any
  method in this class will cause a <code>NullPointerException</code> to be thrown. 
 <p><span style="font-weight: bold; padding-right: 1em">Example</span>
  Suppose we have a service type <tt>com.example.CodecSet</tt> which is
  intended to represent sets of encoder/decoder pairs for some protocol.  In
  this case it is an abstract class with two abstract methods: 
 <blockquote>@code

  public abstract Encoder getEncoder(String encodingName);
  public abstract Decoder getDecoder(String encodingName);
@endcode</blockquote>
  Each method returns an appropriate object or <tt>null</tt> if the provider
  does not support the given encoding.  Typical providers support more than
  one encoding. 
 <p> If <tt>com.example.impl.StandardCodecs</tt> is an implementation of the 
 <tt>CodecSet</tt> service then its jar file also contains a file named 
 <blockquote>@code

  META-INF/services/com.example.CodecSet
@endcode</blockquote>
  
 <p> This file contains the single line: 
 <blockquote>@code

  com.example.impl.StandardCodecs    # Standard codecs
@endcode</blockquote>
  
 <p> The <tt>CodecSet</tt> class creates and saves a single service instance
  at initialization: 
 <blockquote>@code

  private static ServiceLoader&lt;CodecSet&gt; codecSetLoader
      = ServiceLoader.load(CodecSet.class);
@endcode</blockquote>
  
 <p> To locate an encoder for a given encoding name it defines a static
  factory method which iterates through the known and available providers,
  returning only when it has located a suitable encoder or has run out of
  providers. 
 <blockquote>@code

  public static Encoder getEncoder(String encodingName) {
      for (CodecSet cp : codecSetLoader) {
          Encoder enc = cp.getEncoder(encodingName);
          if (enc != null)
              return enc;
      }
      return null;
  }
@endcode</blockquote>
  
 <p> A <tt>getDecoder</tt> method is defined similarly. 
 <p><span style="font-weight: bold; padding-right: 1em">Usage Note</span> If
  the class path of a class loader that is used for provider loading includes
  remote network URLs then those URLs will be dereferenced in the process of
  searching for provider-configuration files. 
 <p> This activity is normal, although it may cause puzzling entries to be
  created in web-server logs.  If a web server is not configured correctly,
  however, then this activity may cause the provider-loading algorithm to fail
  spuriously. 
 <p> A web server should return an HTTP 404 (Not Found) response when a
  requested resource does not exist.  Sometimes, however, web servers are
  erroneously configured to return an HTTP 200 (OK) response along with a
  helpful HTML error page in such cases.  This will cause a <code>ServiceConfigurationError</code>
  to be thrown when this class attempts to parse
  the HTML page as a provider-configuration file.  The best solution to this
  problem is to fix the misconfigured web server to return the correct
  response code (HTTP 404) along with the HTML error page.
 @author Mark Reinhold
 @since 1.6
 */
@interface JavaUtilServiceLoader : NSObject < JavaLangIterable >

#pragma mark Public

/*!
 @brief Lazily loads the available providers of this loader's service.
 <p> The iterator returned by this method first yields all of the
  elements of the provider cache, in instantiation order.  It then lazily
  loads and instantiates any remaining providers, adding each one to the
  cache in turn. 
 <p> To achieve laziness the actual work of parsing the available
  provider-configuration files and instantiating providers must be done by
  the iterator itself.  Its <code>hasNext</code> and 
 <code>next</code> methods can therefore throw a 
 <code>ServiceConfigurationError</code> if a provider-configuration file
  violates the specified format, or if it names a provider class that
  cannot be found and instantiated, or if the result of instantiating the
  class is not assignable to the service type, or if any other kind of
  exception or error is thrown as the next provider is located and
  instantiated.  To write robust code it is only necessary to catch <code>ServiceConfigurationError</code>
  when using a service iterator. 
 <p> If such an error is thrown then subsequent invocations of the
  iterator will make a best effort to locate and instantiate the next
  available provider, but in general such recovery cannot be guaranteed. 
 <blockquote style="font-size: smaller; line-height: 1.2"><span style="padding-right: 1em; font-weight: bold">
 Design Note</span>
  Throwing an error in these cases may seem extreme.  The rationale for
  this behavior is that a malformed provider-configuration file, like a
  malformed class file, indicates a serious problem with the way the Java
  virtual machine is configured or is being used.  As such it is
  preferable to throw an error rather than try to recover or, even worse,
  fail silently.</blockquote>
  
 <p> The iterator returned by this method does not support removal.
  Invoking its <code>remove</code> method will
  cause an <code>UnsupportedOperationException</code> to be thrown.
 @return An iterator that lazily loads providers for this loader's
           service
 */
- (id<JavaUtilIterator>)iterator;

/*!
 @brief Creates a new service loader for the given service type, using the
  current thread's class loader
 .
 <p> An invocation of this convenience method of the form 
 <blockquote>@code

  ServiceLoader.load(<i>service</i>)
@endcode</blockquote>
  is equivalent to 
 <blockquote>@code

  ServiceLoader.load(<i>service</i>,
                     Thread.currentThread().getContextClassLoader())
@endcode</blockquote>
 @param service The interface or abstract class representing the service
 @return A new service loader
 */
+ (JavaUtilServiceLoader *)load__WithIOSClass:(IOSClass *)service;

/*!
 @brief Creates a new service loader for the given service type and class
  loader.
 @param service The interface or abstract class representing the service
 @param loader The class loader to be used to load provider-configuration files
           and provider classes, or 
  <tt> null </tt>  if the system class          loader (or, failing that, the bootstrap class loader) is to be
           used
 @return A new service loader
 */
+ (JavaUtilServiceLoader *)load__WithIOSClass:(IOSClass *)service
                      withJavaLangClassLoader:(JavaLangClassLoader *)loader;

/*!
 @brief Internal API to support built-in SPIs that check a system property first.
 Returns an instance specified by a property with the class' binary name, or null if
  no such property is set.
 */
+ (id)loadFromSystemPropertyWithIOSClass:(IOSClass *)service;

/*!
 @brief Creates a new service loader for the given service type, using the
  extension class loader.
 <p> This convenience method simply locates the extension class loader,
  call it <tt><i>extClassLoader</i></tt>, and then returns 
 <blockquote>@code

  ServiceLoader.load(<i>service</i>, <i>extClassLoader</i>)
@endcode</blockquote>
  
 <p> If the extension class loader cannot be found then the system class
  loader is used; if there is no system class loader then the bootstrap
  class loader is used. 
 <p> This method is intended for use when only installed providers are
  desired.  The resulting service will only find and load providers that
  have been installed into the current Java virtual machine; providers on
  the application's class path will be ignored.
 @param service The interface or abstract class representing the service
 @return A new service loader
 */
+ (JavaUtilServiceLoader *)loadInstalledWithIOSClass:(IOSClass *)service;

/*!
 @brief Clear this loader's provider cache so that all providers will be
  reloaded.
 <p> After invoking this method, subsequent invocations of the <code>iterator</code>
  method will lazily look up and instantiate
  providers from scratch, just as is done by a newly-created loader. 
 <p> This method is intended for use in situations in which new providers
  can be installed into a running Java virtual machine.
 */
- (void)reload;

/*!
 @brief Returns a string describing this service.
 @return A descriptive string
 */
- (NSString *)description;

#pragma mark Package-Private

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilServiceLoader)

FOUNDATION_EXPORT JavaUtilServiceLoader *JavaUtilServiceLoader_load__WithIOSClass_withJavaLangClassLoader_(IOSClass *service, JavaLangClassLoader *loader);

FOUNDATION_EXPORT JavaUtilServiceLoader *JavaUtilServiceLoader_load__WithIOSClass_(IOSClass *service);

FOUNDATION_EXPORT JavaUtilServiceLoader *JavaUtilServiceLoader_loadInstalledWithIOSClass_(IOSClass *service);

FOUNDATION_EXPORT id JavaUtilServiceLoader_loadFromSystemPropertyWithIOSClass_(IOSClass *service);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilServiceLoader)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilServiceLoader")
