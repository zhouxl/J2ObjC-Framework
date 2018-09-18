//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/InetAddress.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetInetAddress")
#ifdef RESTRICT_JavaNetInetAddress
#define INCLUDE_ALL_JavaNetInetAddress 0
#else
#define INCLUDE_ALL_JavaNetInetAddress 1
#endif
#undef RESTRICT_JavaNetInetAddress

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNetInetAddress_) && (INCLUDE_ALL_JavaNetInetAddress || defined(INCLUDE_JavaNetInetAddress))
#define JavaNetInetAddress_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSByteArray;
@class IOSObjectArray;
@class JavaNetInetAddress_InetAddressHolder;
@class JavaNetNetworkInterface;
@protocol JavaNetInetAddressImpl;

/*!
 @brief This class represents an Internet Protocol (IP) address.
 <p> An IP address is either a 32-bit or 128-bit unsigned number
  used by IP, a lower-level protocol on which protocols like UDP and
  TCP are built. The IP address architecture is defined by <a href="http://www.ietf.org/rfc/rfc790.txt">
 <i>RFC&nbsp;790:
  Assigned Numbers</i></a>, <a href="http://www.ietf.org/rfc/rfc1918.txt">
  <i>RFC&nbsp;1918:
  Address Allocation for Private Internets</i></a>, <a href="http://www.ietf.org/rfc/rfc2365.txt">
 <i>RFC&nbsp;2365:
  Administratively Scoped IP Multicast</i></a>, and <a href="http://www.ietf.org/rfc/rfc2373.txt">
 <i>RFC&nbsp;2373: IP
  Version 6 Addressing Architecture</i></a>. An instance of an
  InetAddress consists of an IP address and possibly its
  corresponding host name (depending on whether it is constructed
  with a host name or whether it has already done reverse host name
  resolution). 
 <h4> Address types </h4>
  
 <blockquote><table cellspacing=2 summary="Description of unicast and multicast address types">
    <tr><th valign=top><i>unicast</i></th>
        <td>An identifier for a single interface. A packet sent to
          a unicast address is delivered to the interface identified by
          that address.         
 <p> The Unspecified Address -- Also called anylocal or wildcard
          address. It must never be assigned to any node. It indicates the
          absence of an address. One example of its use is as the target of
          bind, which allows a server to accept a client connection on any
          interface, in case the server host has multiple interfaces.         
 <p> The <i>unspecified</i> address must not be used as
          the destination address of an IP packet.         
 <p> The <i>Loopback</i> Addresses -- This is the address
          assigned to the loopback interface. Anything sent to this
          IP address loops around and becomes IP input on the local
          host. This address is often used when testing a
          client.</td></tr>
    <tr><th valign=top><i>multicast</i></th>
        <td>An identifier for a set of interfaces (typically belonging
          to different nodes). A packet sent to a multicast address is
          delivered to all interfaces identified by that address.</td></tr>
  </table></blockquote>
  
 <h4> IP address scope </h4>
  
 <p> <i>Link-local</i> addresses are designed to be used for addressing
  on a single link for purposes such as auto-address configuration,
  neighbor discovery, or when no routers are present. 
 <p> <i>Site-local</i> addresses are designed to be used for addressing
  inside of a site without the need for a global prefix. 
 <p> <i>Global</i> addresses are unique across the internet. 
 <h4> Textual representation of IP addresses </h4>
  The textual representation of an IP address is address family specific. 
 <p>
  For IPv4 address format, please refer to <A HREF="Inet4Address.html#format">
 Inet4Address#format</A>; For IPv6
  address format, please refer to <A HREF="Inet6Address.html#format">
 Inet6Address#format</A>.
  
 <P>There is a <a href="doc-files/net-properties.html#Ipv4IPv6">couple of
  System Properties</a> affecting how IPv4 and IPv6 addresses are used.</P>
  
 <h4> Host Name Resolution </h4>
  Host name-to-IP address <i>resolution</i> is accomplished through
  the use of a combination of local machine configuration information
  and network naming services such as the Domain Name System (DNS)
  and Network Information Service(NIS). The particular naming
  services(s) being used is by default the local machine configured
  one. For any host name, its corresponding IP address is returned. 
 <p> <i>Reverse name resolution</i> means that for any IP address,
  the host associated with the IP address is returned. 
 <p> The InetAddress class provides methods to resolve host names to
  their IP addresses and vice versa. 
 <h4> InetAddress Caching </h4>
  The InetAddress class has a cache to store successful as well as
  unsuccessful host name resolutions. 
 <p> By default, when a security manager is installed, in order to
  protect against DNS spoofing attacks,
  the result of positive host name resolutions are
  cached forever. When a security manager is not installed, the default
  behavior is to cache entries for a finite (implementation dependent)
  period of time. The result of unsuccessful host
  name resolution is cached for a very short period of time (10
  seconds) to improve performance. 
 <p> If the default behavior is not desired, then a Java security property
  can be set to a different Time-to-live (TTL) value for positive
  caching. Likewise, a system admin can configure a different
  negative caching TTL value when needed. 
 <p> Two Java security properties control the TTL values used for
   positive and negative host name resolution caching: 
 <blockquote>
  <dl>
  <dt><b>networkaddress.cache.ttl</b></dt>
  <dd>Indicates the caching policy for successful name lookups from
  the name service. The value is specified as as integer to indicate
  the number of seconds to cache the successful lookup. The default
  setting is to cache for an implementation specific period of time. 
 <p>
  A value of -1 indicates "cache forever". 
 </dd>
  <p>
  <dt><b>networkaddress.cache.negative.ttl</b> (default: 10)</dt>
  <dd>Indicates the caching policy for un-successful name lookups
  from the name service. The value is specified as as integer to
  indicate the number of seconds to cache the failure for
  un-successful lookups. 
 <p>
  A value of 0 indicates "never cache".
  A value of -1 indicates "cache forever". 
 </dd>
  </dl>
  </blockquote>
 @author Chris Warth
 - seealso: java.net.InetAddress
 - seealso: java.net.InetAddress
 - seealso: java.net.InetAddress
 - seealso: java.net.InetAddress
 - seealso: java.net.InetAddress
 @since JDK1.0
 */
@interface JavaNetInetAddress : NSObject < JavaIoSerializable > {
 @public
  JavaNetInetAddress_InetAddressHolder *holder_;
}
@property (readonly, class, strong) id<JavaNetInetAddressImpl> impl NS_SWIFT_NAME(impl);
@property (readonly, class) jint NETID_UNSET NS_SWIFT_NAME(NETID_UNSET);

+ (id<JavaNetInetAddressImpl>)impl;

+ (jint)NETID_UNSET;

#pragma mark Public

/*!
 @brief Removes all entries from the VM's DNS cache.This does not affect the C library's DNS
  cache, nor any caching DNS servers between you and the canonical server.
 */
+ (void)clearDnsCache;

/*!
 @brief Compares this object against the specified object.
 The result is <code>true</code> if and only if the argument is
  not <code>null</code> and it represents the same IP address as
  this object. 
 <p>
  Two instances of <code>InetAddress</code> represent the same IP
  address if the length of the byte arrays returned by 
 <code>getAddress</code> is the same for both, and each of the
  array components is the same for the byte arrays.
 @param obj the object to compare against.
 @return <code>true</code> if the objects are the same;
           <code>false</code> otherwise.
 - seealso: java.net.InetAddress
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Returns the raw IP address of this <code>InetAddress</code>
  object.The result is in network byte order: the highest order
  byte of the address is in <code>getAddress()[0]</code>.
 @return the raw IP address of this object.
 */
- (IOSByteArray *)getAddress;

/*!
 @brief Given the name of a host, returns an array of its IP addresses,
  based on the configured name service on the system.
 <p> The host name can either be a machine name, such as
  "<code>java.sun.com</code>", or a textual representation of its IP
  address. If a literal IP address is supplied, only the
  validity of the address format is checked. 
 <p> For <code>host</code> specified in <i>literal IPv6 address</i>,
  either the form defined in RFC 2732 or the literal IPv6 address
  format defined in RFC 2373 is accepted. A literal IPv6 address may
  also be qualified by appending a scoped zone identifier or scope_id.
  The syntax and usage of scope_ids is described 
 <a href="Inet6Address.html#scoped">here</a>.
  <p> If the host is <tt>null</tt> then an <tt>InetAddress</tt>
  representing an address of the loopback interface is returned.
  See <a href="http://www.ietf.org/rfc/rfc3330.txt">RFC&nbsp;3330</a>
  section&nbsp;2 and <a href="http://www.ietf.org/rfc/rfc2373.txt">RFC&nbsp;2373</a>
  section&nbsp;2.5.3. </p>
  
 <p> If there is a security manager and <code>host</code> is not
  null and <code>host.length() </code> is not equal to zero, the
  security manager's 
 <code>checkConnect</code> method is called
  with the hostname and <code>-1</code>
  as its arguments to see if the operation is allowed.
 @param host the name of the host, or  <code> null </code> .
 @return an array of all the IP addresses for a given host name.
 @throw UnknownHostExceptionif no IP address for the
                <code>host</code> could be found, or if a scope_id was specified
                for a global IPv6 address.
 @throw SecurityExceptionif a security manager exists and its
                <code>checkConnect</code> method doesn't allow the operation.
 - seealso: SecurityManager#checkConnect
 */
+ (IOSObjectArray *)getAllByNameWithNSString:(NSString *)host;

/*!
 @brief Operates identically to <code>getAllByName</code> except host resolution is
  performed on the network designated by <code>netId</code>.
 @param host the hostname or literal IP string to be resolved.
 @param netId the network to use for host resolution.
 @return the array of addresses associated with the specified host.
 @throw UnknownHostExceptionif the address lookup fails.
 */
+ (IOSObjectArray *)getAllByNameOnNetWithNSString:(NSString *)host
                                          withInt:(jint)netId;

/*!
 @brief Returns an <code>InetAddress</code> object given the raw IP address .
 The argument is in network byte order: the highest order
  byte of the address is in <code>getAddress()[0]</code>.
  
 <p> This method doesn't block, i.e. no reverse name service lookup
  is performed. 
 <p> IPv4 address byte array must be 4 bytes long and IPv6 byte array
  must be 16 bytes long
 @param addr the raw IP address in network byte order
 @return an InetAddress object created from the raw IP address.
 @throw UnknownHostExceptionif IP address is of illegal length
 @since 1.4
 */
+ (JavaNetInetAddress *)getByAddressWithByteArray:(IOSByteArray *)addr;

/*!
 @brief Creates an InetAddress based on the provided host name and IP address.
 No name service is checked for the validity of the address. 
 <p> The host name can either be a machine name, such as
  "<code>java.sun.com</code>", or a textual representation of its IP
  address. 
 <p> No validity checking is done on the host name either. 
 <p> If addr specifies an IPv4 address an instance of Inet4Address
  will be returned; otherwise, an instance of Inet6Address
  will be returned. 
 <p> IPv4 address byte array must be 4 bytes long and IPv6 byte array
  must be 16 bytes long
 @param host the specified host
 @param addr the raw IP address in network byte order
 @return an InetAddress object created from the raw IP address.
 @throw UnknownHostExceptionif IP address is of illegal length
 @since 1.4
 */
+ (JavaNetInetAddress *)getByAddressWithNSString:(NSString *)host
                                   withByteArray:(IOSByteArray *)addr;

+ (JavaNetInetAddress *)getByAddressWithNSString:(NSString *)host
                                   withByteArray:(IOSByteArray *)addr
                                         withInt:(jint)scopeId;

/*!
 @brief Determines the IP address of a host, given the host's name.
 <p> The host name can either be a machine name, such as
  "<code>java.sun.com</code>", or a textual representation of its
  IP address. If a literal IP address is supplied, only the
  validity of the address format is checked. 
 <p> For <code>host</code> specified in literal IPv6 address,
  either the form defined in RFC 2732 or the literal IPv6 address
  format defined in RFC 2373 is accepted. IPv6 scoped addresses are also
  supported. See <a href="Inet6Address.html#scoped">here</a> for a description of IPv6
  scoped addresses. 
 <p> If the host is <tt>null</tt> then an <tt>InetAddress</tt>
  representing an address of the loopback interface is returned.
  See <a href="http://www.ietf.org/rfc/rfc3330.txt">RFC&nbsp;3330</a>
  section&nbsp;2 and <a href="http://www.ietf.org/rfc/rfc2373.txt">RFC&nbsp;2373</a>
  section&nbsp;2.5.3. </p>
 @param host the specified host, or  <code> null </code> .
 @return an IP address for the given host name.
 @throw UnknownHostExceptionif no IP address for the
                <code>host</code> could be found, or if a scope_id was specified
                for a global IPv6 address.
 @throw SecurityExceptionif a security manager exists
              and its checkConnect method doesn't allow the operation
 */
+ (JavaNetInetAddress *)getByNameWithNSString:(NSString *)host;

/*!
 @brief Operates identically to <code>getByName</code> except host resolution is
  performed on the network designated by <code>netId</code>.
 @param host the hostName to be resolved to an address or 
 <code>null</code> .
 @param netId the network to use for host resolution.
 @return the <code>InetAddress</code> instance representing the host.
 @throw UnknownHostExceptionif the address lookup fails.
 */
+ (JavaNetInetAddress *)getByNameOnNetWithNSString:(NSString *)host
                                           withInt:(jint)netId;

/*!
 @brief Gets the fully qualified domain name for this IP address.
 Best effort method, meaning we may not be able to return
  the FQDN depending on the underlying system configuration. 
 <p>If there is a security manager, this method first
  calls its <code>checkConnect</code> method
  with the hostname and <code>-1</code>
  as its arguments to see if the calling code is allowed to know
  the hostname for this IP address, i.e., to connect to the host.
  If the operation is not allowed, it will return
  the textual representation of the IP address.
 @return the fully qualified domain name for this IP address,
     or if the operation is not allowed by the security check,
     the textual representation of the IP address.
 - seealso: SecurityManager#checkConnect
 @since 1.4
 */
- (NSString *)getCanonicalHostName;

/*!
 @brief Returns the IP address string in textual presentation.
 @return the raw IP address in a string format.
 @since JDK1.0.2
 */
- (NSString *)getHostAddress;

/*!
 @brief Gets the host name for this IP address.
 <p>If this InetAddress was created with a host name,
  this host name will be remembered and returned;
  otherwise, a reverse name lookup will be performed
  and the result will be returned based on the system
  configured name lookup service. If a lookup of the name service
  is required, call 
 <code>getCanonicalHostName</code>.
  
 <p>If there is a security manager, its 
 <code>checkConnect</code> method is first called
  with the hostname and <code>-1</code>
  as its arguments to see if the operation is allowed.
  If the operation is not allowed, it will return
  the textual representation of the IP address.
 @return the host name for this IP address, or if the operation
     is not allowed by the security check, the textual
     representation of the IP address.
 - seealso: InetAddress#getCanonicalHostName
 - seealso: SecurityManager#checkConnect
 */
- (NSString *)getHostName;

/*!
 @brief Returns the address of the local host.This is achieved by retrieving
  the name of the host from the system, then resolving that name into
  an <code>InetAddress</code>.
 <P>Note: The resolved address may be cached for a short period of time. 
 </P>
  
 <p>If there is a security manager, its 
 <code>checkConnect</code> method is called
  with the local host name and <code>-1</code>
  as its arguments to see if the operation is allowed.
  If the operation is not allowed, an InetAddress representing
  the loopback address is returned.
 @return the address of the local host.
 @throw UnknownHostExceptionif the local host name could not
              be resolved into an address.
 - seealso: SecurityManager#checkConnect
 - seealso: java.net.InetAddress
 */
+ (JavaNetInetAddress *)getLocalHost;

/*!
 @brief Returns the loopback address.
 <p>
  The InetAddress returned will represent the IPv4
  loopback address, 127.0.0.1, or the IPv6 loopback
  address, ::1. The IPv4 loopback address returned
  is only one of many in the form 127.*.*.*
 @return the InetAddress loopback instance.
 @since 1.7
 */
+ (JavaNetInetAddress *)getLoopbackAddress;

/*!
 @brief Returns a hashcode for this IP address.
 @return a hash code value for this IP address.
 */
- (NSUInteger)hash;

/*!
 @brief Utility routine to check if the InetAddress in a wildcard address.
 @return a <code>boolean</code> indicating if the Inetaddress is
          a wildcard address.
 @since 1.4
 */
- (jboolean)isAnyLocalAddress;

/*!
 @brief Utility routine to check if the InetAddress is an link local address.
 @return a <code>boolean</code> indicating if the InetAddress is
  a link local address; or false if address is not a link local unicast address.
 @since 1.4
 */
- (jboolean)isLinkLocalAddress;

/*!
 @brief Utility routine to check if the InetAddress is a loopback address.
 @return a <code>boolean</code> indicating if the InetAddress is
  a loopback address; or false otherwise.
 @since 1.4
 */
- (jboolean)isLoopbackAddress;

/*!
 @brief Utility routine to check if the multicast address has global scope.
 @return a <code>boolean</code> indicating if the address has
          is a multicast address of global scope, false if it is not
          of global scope or it is not a multicast address
 @since 1.4
 */
- (jboolean)isMCGlobal;

/*!
 @brief Utility routine to check if the multicast address has link scope.
 @return a <code>boolean</code> indicating if the address has
          is a multicast address of link-local scope, false if it is not
          of link-local scope or it is not a multicast address
 @since 1.4
 */
- (jboolean)isMCLinkLocal;

/*!
 @brief Utility routine to check if the multicast address has node scope.
 @return a <code>boolean</code> indicating if the address has
          is a multicast address of node-local scope, false if it is not
          of node-local scope or it is not a multicast address
 @since 1.4
 */
- (jboolean)isMCNodeLocal;

/*!
 @brief Utility routine to check if the multicast address has organization scope.
 @return a <code>boolean</code> indicating if the address has
          is a multicast address of organization-local scope,
          false if it is not of organization-local scope
          or it is not a multicast address
 @since 1.4
 */
- (jboolean)isMCOrgLocal;

/*!
 @brief Utility routine to check if the multicast address has site scope.
 @return a <code>boolean</code> indicating if the address has
          is a multicast address of site-local scope, false if it is not
          of site-local scope or it is not a multicast address
 @since 1.4
 */
- (jboolean)isMCSiteLocal;

/*!
 @brief Utility routine to check if the InetAddress is an
  IP multicast address.
 @return a <code>boolean</code> indicating if the InetAddress is
  an IP multicast address
 @since JDK1.1
 */
- (jboolean)isMulticastAddress;

/*!
 @brief Returns true if the string is a valid numeric IPv4 or IPv6 address (such as "192.168.0.1").
 This copes with all forms of address that Java supports, detailed in the <code>InetAddress</code>
  class documentation.
 */
+ (jboolean)isNumericWithNSString:(NSString *)address;

/*!
 @brief Test whether that address is reachable.Best effort is made by the
  implementation to try to reach the host, but firewalls and server
  configuration may block requests resulting in a unreachable status
  while some specific ports may be accessible.
 A typical implementation will use ICMP ECHO REQUESTs if the
  privilege can be obtained, otherwise it will try to establish
  a TCP connection on port 7 (Echo) of the destination host. 
 <p>
  The timeout value, in milliseconds, indicates the maximum amount of time
  the try should take. If the operation times out before getting an
  answer, the host is deemed unreachable. A negative value will result
  in an IllegalArgumentException being thrown.
 @param timeout the time, in milliseconds, before the call aborts
 @return a <code>boolean</code> indicating if the address is reachable.
 @throw IOExceptionif a network error occurs
 @throw IllegalArgumentExceptionif <code>timeout</code> is negative.
 @since 1.5
 */
- (jboolean)isReachableWithInt:(jint)timeout;

/*!
 @brief Test whether that address is reachable.Best effort is made by the
  implementation to try to reach the host, but firewalls and server
  configuration may block requests resulting in a unreachable status
  while some specific ports may be accessible.
 A typical implementation will use ICMP ECHO REQUESTs if the
  privilege can be obtained, otherwise it will try to establish
  a TCP connection on port 7 (Echo) of the destination host. 
 <p>
  The <code>network interface</code> and <code>ttl</code> parameters
  let the caller specify which network interface the test will go through
  and the maximum number of hops the packets should go through.
  A negative value for the <code>ttl</code> will result in an
  IllegalArgumentException being thrown. 
 <p>
  The timeout value, in milliseconds, indicates the maximum amount of time
  the try should take. If the operation times out before getting an
  answer, the host is deemed unreachable. A negative value will result
  in an IllegalArgumentException being thrown.
 @param netif the NetworkInterface through which the                     test will be done, or null for any interface
 @param ttl the maximum numbers of hops to try or 0 for the                   default
 @param timeout the time, in milliseconds, before the call aborts
 @throw IllegalArgumentExceptionif either <code>timeout</code>
                           or <code>ttl</code> are negative.
 @return a <code>boolean</code>indicating if the address is reachable.
 @throw IOExceptionif a network error occurs
 @since 1.5
 */
- (jboolean)isReachableWithJavaNetNetworkInterface:(JavaNetNetworkInterface *)netif
                                           withInt:(jint)ttl
                                           withInt:(jint)timeout;

/*!
 @brief Utility routine to check if the InetAddress is a site local address.
 @return a <code>boolean</code> indicating if the InetAddress is
  a site local address; or false if address is not a site local unicast address.
 @since 1.4
 */
- (jboolean)isSiteLocalAddress;

/*!
 @brief Returns an InetAddress corresponding to the given numeric address (such
  as <code>"192.168.0.1"</code> or <code>"2001:4860:800d::68"</code>).
 This method will never do a DNS lookup. Non-numeric addresses are errors.
 @throw IllegalArgumentExceptionif <code>numericAddress</code> is not a numeric address
 */
+ (JavaNetInetAddress *)parseNumericAddressWithNSString:(NSString *)numericAddress;

/*!
 @brief Converts this IP address to a <code>String</code>.The
  string returned is of the form: hostname / literal IP
  address.
 If the host name is unresolved, no reverse name service lookup
  is performed. The hostname part will be represented by an empty string.
 @return a string representation of this IP address.
 */
- (NSString *)description;

#pragma mark Package-Private

/*!
 @brief Constructor for the Socket.accept() method.
 This creates an empty InetAddress, which is filled in by
  the accept() method.  This InetAddress, however, is not
  put in the address cache, since it is not created by name.
 */
- (instancetype __nonnull)init;

+ (JavaNetInetAddress *)anyLocalAddress;

+ (JavaNetInetAddress *)disallowDeprecatedFormatsWithNSString:(NSString *)address
                                       withJavaNetInetAddress:(JavaNetInetAddress *)inetAddress;

+ (IOSObjectArray *)getAllByName0WithNSString:(NSString *)authHost
                                  withBoolean:(jboolean)check;

- (NSString *)getHostNameWithBoolean:(jboolean)check;

- (JavaNetInetAddress_InetAddressHolder *)holder;

+ (JavaNetInetAddress *)parseNumericAddressNoThrowWithNSString:(NSString *)address;

@end

J2OBJC_STATIC_INIT(JavaNetInetAddress)

J2OBJC_FIELD_SETTER(JavaNetInetAddress, holder_, JavaNetInetAddress_InetAddressHolder *)

inline id<JavaNetInetAddressImpl> JavaNetInetAddress_get_impl(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<JavaNetInetAddressImpl> JavaNetInetAddress_impl;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNetInetAddress, impl, id<JavaNetInetAddressImpl>)

inline jint JavaNetInetAddress_get_NETID_UNSET(void);
#define JavaNetInetAddress_NETID_UNSET 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetInetAddress, NETID_UNSET, jint)

FOUNDATION_EXPORT void JavaNetInetAddress_init(JavaNetInetAddress *self);

FOUNDATION_EXPORT JavaNetInetAddress *new_JavaNetInetAddress_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetInetAddress *create_JavaNetInetAddress_init(void);

FOUNDATION_EXPORT JavaNetInetAddress *JavaNetInetAddress_getByAddressWithNSString_withByteArray_(NSString *host, IOSByteArray *addr);

FOUNDATION_EXPORT JavaNetInetAddress *JavaNetInetAddress_getByAddressWithNSString_withByteArray_withInt_(NSString *host, IOSByteArray *addr, jint scopeId);

FOUNDATION_EXPORT JavaNetInetAddress *JavaNetInetAddress_getByNameWithNSString_(NSString *host);

FOUNDATION_EXPORT IOSObjectArray *JavaNetInetAddress_getAllByNameWithNSString_(NSString *host);

FOUNDATION_EXPORT JavaNetInetAddress *JavaNetInetAddress_getLoopbackAddress(void);

FOUNDATION_EXPORT JavaNetInetAddress *JavaNetInetAddress_getByAddressWithByteArray_(IOSByteArray *addr);

FOUNDATION_EXPORT JavaNetInetAddress *JavaNetInetAddress_getLocalHost(void);

FOUNDATION_EXPORT JavaNetInetAddress *JavaNetInetAddress_anyLocalAddress(void);

FOUNDATION_EXPORT jboolean JavaNetInetAddress_isNumericWithNSString_(NSString *address);

FOUNDATION_EXPORT JavaNetInetAddress *JavaNetInetAddress_parseNumericAddressNoThrowWithNSString_(NSString *address);

FOUNDATION_EXPORT JavaNetInetAddress *JavaNetInetAddress_disallowDeprecatedFormatsWithNSString_withJavaNetInetAddress_(NSString *address, JavaNetInetAddress *inetAddress);

FOUNDATION_EXPORT JavaNetInetAddress *JavaNetInetAddress_parseNumericAddressWithNSString_(NSString *numericAddress);

FOUNDATION_EXPORT void JavaNetInetAddress_clearDnsCache(void);

FOUNDATION_EXPORT JavaNetInetAddress *JavaNetInetAddress_getByNameOnNetWithNSString_withInt_(NSString *host, jint netId);

FOUNDATION_EXPORT IOSObjectArray *JavaNetInetAddress_getAllByNameOnNetWithNSString_withInt_(NSString *host, jint netId);

FOUNDATION_EXPORT IOSObjectArray *JavaNetInetAddress_getAllByName0WithNSString_withBoolean_(NSString *authHost, jboolean check);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetInetAddress)

#endif

#if !defined (JavaNetInetAddress_InetAddressHolder_) && (INCLUDE_ALL_JavaNetInetAddress || defined(INCLUDE_JavaNetInetAddress_InetAddressHolder))
#define JavaNetInetAddress_InetAddressHolder_

@interface JavaNetInetAddress_InetAddressHolder : NSObject {
 @public
  NSString *hostName_;
  /*!
   @brief Holds a 32-bit IPv4 address.
   */
  jint address_;
  /*!
   @brief Specifies the address family type, for instance, AF_INET for IPv4
  addresses, and AF_INET6 for IPv6 addresses.
   */
  jint family_;
}

#pragma mark Package-Private

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)hostName
                                   withInt:(jint)address
                                   withInt:(jint)family;

- (jint)getAddress;

- (jint)getFamily;

- (NSString *)getHostName;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetInetAddress_InetAddressHolder)

J2OBJC_FIELD_SETTER(JavaNetInetAddress_InetAddressHolder, hostName_, NSString *)

FOUNDATION_EXPORT void JavaNetInetAddress_InetAddressHolder_init(JavaNetInetAddress_InetAddressHolder *self);

FOUNDATION_EXPORT JavaNetInetAddress_InetAddressHolder *new_JavaNetInetAddress_InetAddressHolder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetInetAddress_InetAddressHolder *create_JavaNetInetAddress_InetAddressHolder_init(void);

FOUNDATION_EXPORT void JavaNetInetAddress_InetAddressHolder_initWithNSString_withInt_withInt_(JavaNetInetAddress_InetAddressHolder *self, NSString *hostName, jint address, jint family);

FOUNDATION_EXPORT JavaNetInetAddress_InetAddressHolder *new_JavaNetInetAddress_InetAddressHolder_initWithNSString_withInt_withInt_(NSString *hostName, jint address, jint family) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetInetAddress_InetAddressHolder *create_JavaNetInetAddress_InetAddressHolder_initWithNSString_withInt_withInt_(NSString *hostName, jint address, jint family);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetInetAddress_InetAddressHolder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetInetAddress")
