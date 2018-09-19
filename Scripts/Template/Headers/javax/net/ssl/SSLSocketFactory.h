//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/net/ssl/SSLSocketFactory.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxNetSslSSLSocketFactory")
#ifdef RESTRICT_JavaxNetSslSSLSocketFactory
#define INCLUDE_ALL_JavaxNetSslSSLSocketFactory 0
#else
#define INCLUDE_ALL_JavaxNetSslSSLSocketFactory 1
#endif
#undef RESTRICT_JavaxNetSslSSLSocketFactory
#ifdef INCLUDE_JavaxNetSslDefaultSSLSocketFactory
#define INCLUDE_JavaxNetSslSSLSocketFactory 1
#endif

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxNetSslSSLSocketFactory_) && (INCLUDE_ALL_JavaxNetSslSSLSocketFactory || defined(INCLUDE_JavaxNetSslSSLSocketFactory))
#define JavaxNetSslSSLSocketFactory_

#define RESTRICT_JavaxNetSocketFactory 1
#define INCLUDE_JavaxNetSocketFactory 1
#include "../../../javax/net/SocketFactory.h"

@class IOSObjectArray;
@class JavaNetSocket;

/*!
 @brief <code>SSLSocketFactory</code>s create <code>SSLSocket</code>s.
 @since 1.4
 - seealso: SSLSocket
 @author David Brownell
 */
@interface JavaxNetSslSSLSocketFactory : JavaxNetSocketFactory

#pragma mark Public

/*!
 @brief Constructor is used only by subclasses.
 */
- (instancetype __nonnull)init;

/*!
 @brief Returns a socket layered over an existing socket connected to the named
  host, at the given port.This constructor can be used when tunneling SSL
  through a proxy or when negotiating the use of SSL over an existing
  socket.
 The host and port refer to the logical peer destination.
  This socket is configured using the socket options established for
  this factory.
 @param s the existing socket
 @param host the server host
 @param port the server port
 @param autoClose close the underlying socket when this socket is closed
 @return a socket connected to the specified host and port
 @throw IOExceptionif an I/O error occurs when creating the socket
 @throw NullPointerExceptionif the parameter s is null
 */
- (JavaNetSocket *)createSocketWithJavaNetSocket:(JavaNetSocket *)s
                                    withNSString:(NSString *)host
                                         withInt:(jint)port
                                     withBoolean:(jboolean)autoClose;

/*!
 @brief Returns the default SSL socket factory.
 <p>The first time this method is called, the security property
  "ssl.SocketFactory.provider" is examined. If it is non-null, a class by
  that name is loaded and instantiated. If that is successful and the
  object is an instance of SSLSocketFactory, it is made the default SSL
  socket factory. 
 <p>Otherwise, this method returns 
 <code>SSLContext.getDefault().getSocketFactory()</code>. If that
  call fails, an inoperative factory is returned.
 @return the default <code>SocketFactory</code>
 - seealso: SSLContext#getDefault
 */
+ (JavaxNetSocketFactory *)getDefault;

/*!
 @brief Returns the list of cipher suites which are enabled by default.
 Unless a different list is enabled, handshaking on an SSL connection
  will use one of these cipher suites.  The minimum quality of service
  for these defaults requires confidentiality protection and server
  authentication (that is, no anonymous cipher suites).
 - seealso: #getSupportedCipherSuites()
 @return array of the cipher suites enabled by default
 */
- (IOSObjectArray *)getDefaultCipherSuites;

/*!
 @brief Returns the names of the cipher suites which could be enabled for use
  on an SSL connection.Normally, only a subset of these will actually
  be enabled by default, since this list may include cipher suites which
  do not meet quality of service requirements for those defaults.
 Such
  cipher suites are useful in specialized applications.
 - seealso: #getDefaultCipherSuites()
 @return an array of cipher suite names
 */
- (IOSObjectArray *)getSupportedCipherSuites;

#pragma mark Package-Private

+ (NSString *)getSecurityPropertyWithNSString:(NSString *)name;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslSSLSocketFactory)

FOUNDATION_EXPORT void JavaxNetSslSSLSocketFactory_init(JavaxNetSslSSLSocketFactory *self);

FOUNDATION_EXPORT JavaxNetSocketFactory *JavaxNetSslSSLSocketFactory_getDefault(void);

FOUNDATION_EXPORT NSString *JavaxNetSslSSLSocketFactory_getSecurityPropertyWithNSString_(NSString *name);

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLSocketFactory)

#endif

#if !defined (JavaxNetSslDefaultSSLSocketFactory_) && (INCLUDE_ALL_JavaxNetSslSSLSocketFactory || defined(INCLUDE_JavaxNetSslDefaultSSLSocketFactory))
#define JavaxNetSslDefaultSSLSocketFactory_

@class IOSObjectArray;
@class JavaLangException;
@class JavaNetInetAddress;
@class JavaNetSocket;

@interface JavaxNetSslDefaultSSLSocketFactory : JavaxNetSslSSLSocketFactory

#pragma mark Public

- (JavaNetSocket *)createSocket;

- (JavaNetSocket *)createSocketWithJavaNetInetAddress:(JavaNetInetAddress *)address
                                              withInt:(jint)port;

- (JavaNetSocket *)createSocketWithJavaNetInetAddress:(JavaNetInetAddress *)address
                                              withInt:(jint)port
                               withJavaNetInetAddress:(JavaNetInetAddress *)clientAddress
                                              withInt:(jint)clientPort;

- (JavaNetSocket *)createSocketWithJavaNetSocket:(JavaNetSocket *)s
                                    withNSString:(NSString *)host
                                         withInt:(jint)port
                                     withBoolean:(jboolean)autoClose;

- (JavaNetSocket *)createSocketWithNSString:(NSString *)host
                                    withInt:(jint)port;

- (JavaNetSocket *)createSocketWithNSString:(NSString *)host
                                    withInt:(jint)port
                     withJavaNetInetAddress:(JavaNetInetAddress *)clientAddress
                                    withInt:(jint)clientPort;

- (IOSObjectArray *)getDefaultCipherSuites;

- (IOSObjectArray *)getSupportedCipherSuites;

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaLangException:(JavaLangException *)reason;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslDefaultSSLSocketFactory)

FOUNDATION_EXPORT void JavaxNetSslDefaultSSLSocketFactory_initWithJavaLangException_(JavaxNetSslDefaultSSLSocketFactory *self, JavaLangException *reason);

FOUNDATION_EXPORT JavaxNetSslDefaultSSLSocketFactory *new_JavaxNetSslDefaultSSLSocketFactory_initWithJavaLangException_(JavaLangException *reason) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxNetSslDefaultSSLSocketFactory *create_JavaxNetSslDefaultSSLSocketFactory_initWithJavaLangException_(JavaLangException *reason);

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslDefaultSSLSocketFactory)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxNetSslSSLSocketFactory")
