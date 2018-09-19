//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/net/ssl/SSLSession.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxNetSslSSLSession")
#ifdef RESTRICT_JavaxNetSslSSLSession
#define INCLUDE_ALL_JavaxNetSslSSLSession 0
#else
#define INCLUDE_ALL_JavaxNetSslSSLSession 1
#endif
#undef RESTRICT_JavaxNetSslSSLSession

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxNetSslSSLSession_) && (INCLUDE_ALL_JavaxNetSslSSLSession || defined(INCLUDE_JavaxNetSslSSLSession))
#define JavaxNetSslSSLSession_

@class IOSByteArray;
@class IOSObjectArray;
@protocol JavaSecurityPrincipal;
@protocol JavaxNetSslSSLSessionContext;

/*!
 @brief In SSL, sessions are used to describe an ongoing relationship between
  two entities.Each SSL connection involves one session at a time, but
  that session may be used on many connections between those entities,
  simultaneously or sequentially.
 The session used on a connection may
  also be replaced by a different session.  Sessions are created, or
  rejoined, as part of the SSL handshaking protocol. Sessions may be
  invalidated due to policies affecting security or resource usage,
  or by an application explicitly calling <code>invalidate</code>.
  Session management policies are typically used to tune performance. 
 <P> In addition to the standard session attributes, SSL sessions expose
  these read-only attributes:  <UL>
       <LI> <em>Peer Identity.</em>  Sessions are between a particular
       client and a particular server.  The identity of the peer may
       have been established as part of session setup.  Peers are
       generally identified by X.509 certificate chains.      
 <LI> <em>Cipher Suite Name.</em>  Cipher suites describe the
       kind of cryptographic protection that's used by connections
       in a particular session.      
 <LI> <em>Peer Host.</em>  All connections in a session are
       between the same two hosts.  The address of the host on the other
       side of the connection is available.      
 </UL>
  
 <P> Sessions may be explicitly invalidated.  Invalidation may also
  be done implicitly, when faced with certain kinds of errors.
 @since 1.4
 @author David Brownell
 */
@protocol JavaxNetSslSSLSession < JavaObject >

/*!
 @brief Returns the identifier assigned to this Session.
 @return the Session identifier
 */
- (IOSByteArray *)getId;

/*!
 @brief Returns the context in which this session is bound.
 <P>
  This context may be unavailable in some environments,
  in which case this method returns null. 
 <P>
  If the context is available and there is a
  security manager installed, the caller may require
  permission to access it or a security exception may be thrown.
  In a Java environment, the security manager's 
 <code>checkPermission</code> method is called with a 
 <code>SSLPermission("getSSLSessionContext")</code> permission.
 @throw SecurityExceptionif the calling thread does not have
          permission to get SSL session context.
 @return the session context used for this session, or null
  if the context is unavailable.
 */
- (id<JavaxNetSslSSLSessionContext>)getSessionContext;

/*!
 @brief Returns the time at which this Session representation was created,
  in milliseconds since midnight, January 1, 1970 UTC.
 @return the time this Session was created
 */
- (jlong)getCreationTime;

/*!
 @brief Returns the last time this Session representation was accessed by the
  session level infrastructure, in milliseconds since
  midnight, January 1, 1970 UTC.
 <P>
  Access indicates a new connection being established using session data.
  Application level operations, such as getting or setting a value
  associated with the session, are not reflected in this access time. 
 <P> This information is particularly useful in session management
  policies.  For example, a session manager thread could leave all
  sessions in a given context which haven't been used in a long time;
  or, the sessions might be sorted according to age to optimize some task.
 @return the last time this Session was accessed
 */
- (jlong)getLastAccessedTime;

/*!
 @brief Invalidates the session.
 <P>
  Future connections will not be able to
  resume or join this session.  However, any existing connection
  using this session can continue to use the session until the
  connection is closed.
 - seealso: #isValid()
 */
- (void)invalidate;

/*!
 @brief Returns whether this session is valid and available for resuming or
  joining.
 @return true if this session may be rejoined.
 - seealso: #invalidate()
 @since 1.5
 */
- (jboolean)isValid;

/*!
 @brief Binds the specified <code>value</code> object into the
  session's application layer data
  with the given <code>name</code>.
 <P>
  Any existing binding using the same <code>name</code> is
  replaced.  If the new (or existing) <code>value</code> implements the 
 <code>SSLSessionBindingListener</code> interface, the object
  represented by <code>value</code> is notified appropriately. 
 <p>
  For security reasons, the same named values may not be
  visible across different access control contexts.
 @param name the name to which the data object will be bound.           This may not be null.
 @param value the data object to be bound. This may not be null.
 @throw IllegalArgumentExceptionif either argument is null.
 */
- (void)putValueWithNSString:(NSString *)name
                      withId:(id)value;

/*!
 @brief Returns the object bound to the given name in the session's
  application layer data.Returns null if there is no such binding.
 <p>
  For security reasons, the same named values may not be
  visible across different access control contexts.
 @param name the name of the binding to find.
 @return the value bound to that name, or null if the binding does
           not exist.
 @throw IllegalArgumentExceptionif the argument is null.
 */
- (id)getValueWithNSString:(NSString *)name;

/*!
 @brief Removes the object bound to the given name in the session's
  application layer data.Does nothing if there is no object
  bound to the given name.
 If the bound existing object
  implements the <code>SessionBindingListener</code> interface,
  it is notified appropriately. 
 <p>
  For security reasons, the same named values may not be
  visible across different access control contexts.
 @param name the name of the object to remove visible           across different access control contexts
 @throw IllegalArgumentExceptionif the argument is null.
 */
- (void)removeValueWithNSString:(NSString *)name;

/*!
 @brief Returns an array of the names of all the application layer
  data objects bound into the Session.
 <p>
  For security reasons, the same named values may not be
  visible across different access control contexts.
 @return a non-null (possibly empty) array of names of the objects
   bound to this Session.
 */
- (IOSObjectArray *)getValueNames;

/*!
 @brief Returns the identity of the peer which was established as part
  of defining the session.
 <P>
  Note: This method can be used only when using certificate-based
  cipher suites; using it with non-certificate-based cipher suites,
  such as Kerberos, will throw an SSLPeerUnverifiedException.
 @return an ordered array of peer certificates,
           with the peer's own certificate first followed by any
           certificate authorities.
 @throw SSLPeerUnverifiedExceptionif the peer's identity has not
           been verified
 - seealso: #getPeerPrincipal()
 */
- (IOSObjectArray *)getPeerCertificates;

/*!
 @brief Returns the certificate(s) that were sent to the peer during
  handshaking.
 <P>
  Note: This method is useful only when using certificate-based
  cipher suites. 
 <P>
  When multiple certificates are available for use in a
  handshake, the implementation chooses what it considers the
  "best" certificate chain available, and transmits that to
  the other side.  This method allows the caller to know
  which certificate chain was actually used.
 @return an ordered array of certificates,
  with the local certificate first followed by any
  certificate authorities.  If no certificates were sent,
  then null is returned.
 - seealso: #getLocalPrincipal()
 */
- (IOSObjectArray *)getLocalCertificates;

/*!
 @brief Returns the identity of the peer which was identified as part
  of defining the session.
 <P>
  Note: This method can be used only when using certificate-based
  cipher suites; using it with non-certificate-based cipher suites,
  such as Kerberos, will throw an SSLPeerUnverifiedException. 
 <p><em>Note: this method exists for compatibility with previous
  releases. New applications should use 
 <code>getPeerCertificates</code> instead.</em></p>
 @return an ordered array of peer X.509 certificates,
           with the peer's own certificate first followed by any
           certificate authorities.  (The certificates are in
           the original JSSE certificate          
 <code>javax.security.cert.X509Certificate</code> format.)
 @throw SSLPeerUnverifiedExceptionif the peer's identity
           has not been verified
 - seealso: #getPeerPrincipal()
 */
- (IOSObjectArray *)getPeerCertificateChain;

/*!
 @brief Returns the identity of the peer which was established as part of
  defining the session.
 @return the peer's principal. Returns an X500Principal of the
  end-entity certiticate for X509-based cipher suites, and
  KerberosPrincipal for Kerberos cipher suites.
 @throw SSLPeerUnverifiedExceptionif the peer's identity has not
           been verified
 - seealso: #getPeerCertificates()
 - seealso: #getLocalPrincipal()
 @since 1.5
 */
- (id<JavaSecurityPrincipal>)getPeerPrincipal;

/*!
 @brief Returns the principal that was sent to the peer during handshaking.
 @return the principal sent to the peer. Returns an X500Principal
  of the end-entity certificate for X509-based cipher suites, and
  KerberosPrincipal for Kerberos cipher suites. If no principal was
  sent, then null is returned.
 - seealso: #getLocalCertificates()
 - seealso: #getPeerPrincipal()
 @since 1.5
 */
- (id<JavaSecurityPrincipal>)getLocalPrincipal;

/*!
 @brief Returns the name of the SSL cipher suite which is used for all
  connections in the session.
 <P> This defines the level of protection
  provided to the data sent on the connection, including the kind
  of encryption used and most aspects of how authentication is done.
 @return the name of the session's cipher suite
 */
- (NSString *)getCipherSuite;

/*!
 @brief Returns the standard name of the protocol used for all
  connections in the session.
 <P> This defines the protocol used in the connection.
 @return the standard name of the protocol used for all
  connections in the session.
 */
- (NSString *)getProtocol;

/*!
 @brief Returns the host name of the peer in this session.
 <P>
  For the server, this is the client's host;  and for
  the client, it is the server's host. The name may not be
  a fully qualified host name or even a host name at all as
  it may represent a string encoding of the peer's network address.
  If such a name is desired, it might
  be resolved through a name service based on the value returned
  by this method. 
 <P>
  This value is not authenticated and should not be relied upon.
  It is mainly used as a hint for <code>SSLSession</code> caching
  strategies.
 @return the host name of the peer host, or null if no information
           is available.
 */
- (NSString *)getPeerHost;

/*!
 @brief Returns the port number of the peer in this session.
 <P>
  For the server, this is the client's port number;  and for
  the client, it is the server's port number. 
 <P>
  This value is not authenticated and should not be relied upon.
  It is mainly used as a hint for <code>SSLSession</code> caching
  strategies.
 @return the port number of the peer host, or -1 if no information
           is available.
 @since 1.5
 */
- (jint)getPeerPort;

/*!
 @brief Gets the current size of the largest SSL/TLS packet that is expected
  when using this session.
 <P>
  A <code>SSLEngine</code> using this session may generate SSL/TLS
  packets of any size up to and including the value returned by this
  method. All <code>SSLEngine</code> network buffers should be sized
  at least this large to avoid insufficient space problems when
  performing <code>wrap</code> and <code>unwrap</code> calls.
 @return the current maximum expected network packet size
 - seealso: SSLEngine#wrap(ByteBuffer, ByteBuffer)
 - seealso: SSLEngine#unwrap(ByteBuffer, ByteBuffer)
 @since 1.5
 */
- (jint)getPacketBufferSize;

/*!
 @brief Gets the current size of the largest application data that is
  expected when using this session.
 <P>
  <code>SSLEngine</code> application data buffers must be large
  enough to hold the application data from any inbound network
  application data packet received.  Typically, outbound
  application data buffers can be of any size.
 @return the current maximum expected application packet size
 - seealso: SSLEngine#wrap(ByteBuffer, ByteBuffer)
 - seealso: SSLEngine#unwrap(ByteBuffer, ByteBuffer)
 @since 1.5
 */
- (jint)getApplicationBufferSize;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslSSLSession)

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLSession)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxNetSslSSLSession")
