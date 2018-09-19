//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/Inet4Address.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetInet4Address")
#ifdef RESTRICT_JavaNetInet4Address
#define INCLUDE_ALL_JavaNetInet4Address 0
#else
#define INCLUDE_ALL_JavaNetInet4Address 1
#endif
#undef RESTRICT_JavaNetInet4Address

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNetInet4Address_) && (INCLUDE_ALL_JavaNetInet4Address || defined(INCLUDE_JavaNetInet4Address))
#define JavaNetInet4Address_

#define RESTRICT_JavaNetInetAddress 1
#define INCLUDE_JavaNetInetAddress 1
#include "../../java/net/InetAddress.h"

@class IOSByteArray;

/*!
 @brief This class represents an Internet Protocol version 4 (IPv4) address.
 Defined by <a href="http://www.ietf.org/rfc/rfc790.txt">
  <i>RFC&nbsp;790: Assigned Numbers</i></a>,
  <a href="http://www.ietf.org/rfc/rfc1918.txt">
  <i>RFC&nbsp;1918: Address Allocation for Private Internets</i></a>,
  and <a href="http://www.ietf.org/rfc/rfc2365.txt"><i>RFC&nbsp;2365:
  Administratively Scoped IP Multicast</i></a>
  
 <h4> <A NAME="format">Textual representation of IP addresses</a> </h4>
  Textual representation of IPv4 address used as input to methods
  takes one of the following forms: 
 <blockquote><table cellpadding=0 cellspacing=0 summary="layout">
  <tr><td><tt>d.d.d.d</tt></td></tr>
  <tr><td><tt>d.d.d</tt></td></tr>
  <tr><td><tt>d.d</tt></td></tr>
  <tr><td><tt>d</tt></td></tr>
  </table></blockquote>
  
 <p> When four parts are specified, each is interpreted as a byte of
  data and assigned, from left to right, to the four bytes of an IPv4
  address. 
 <p> When a three part address is specified, the last part is
  interpreted as a 16-bit quantity and placed in the right most two
  bytes of the network address. This makes the three part address
  format convenient for specifying Class B net- work addresses as
  128.net.host. 
 <p> When a two part address is supplied, the last part is
  interpreted as a 24-bit quantity and placed in the right most three
  bytes of the network address. This makes the two part address
  format convenient for specifying Class A network addresses as
  net.host. 
 <p> When only one part is given, the value is stored directly in
  the network address without any byte rearrangement. 
 <p> For methods that return a textual representation as output
  value, the first form, i.e. a dotted-quad string, is used. 
 <h4> The Scope of a Multicast Address </h4>
  Historically the IPv4 TTL field in the IP header has doubled as a
  multicast scope field: a TTL of 0 means node-local, 1 means
  link-local, up through 32 means site-local, up through 64 means
  region-local, up through 128 means continent-local, and up through
  255 are global. However, the administrative scoping is preferred.
  Please refer to <a href="http://www.ietf.org/rfc/rfc2365.txt">
  <i>RFC&nbsp;2365: Administratively Scoped IP Multicast</i></a>
 @since 1.4
 */
@interface JavaNetInet4Address : JavaNetInetAddress
@property (readonly, class) jint INADDRSZ NS_SWIFT_NAME(INADDRSZ);
@property (readonly, class, strong) JavaNetInetAddress *ANY NS_SWIFT_NAME(ANY);
@property (readonly, class, strong) JavaNetInetAddress *ALL NS_SWIFT_NAME(ALL);
@property (readonly, class, strong) JavaNetInetAddress *LOOPBACK NS_SWIFT_NAME(LOOPBACK);

+ (jint)INADDRSZ;

+ (JavaNetInetAddress *)ANY;

+ (JavaNetInetAddress *)ALL;

+ (JavaNetInetAddress *)LOOPBACK;

#pragma mark Public

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
 @brief Returns the IP address string in textual presentation form.
 @return the raw IP address in a string format.
 @since JDK1.0.2
 */
- (NSString *)getHostAddress;

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
  IP multicast address.IP multicast address is a Class D
  address i.e first four bits of the address are 1110.
 @return a <code>boolean</code> indicating if the InetAddress is
  an IP multicast address
 @since JDK1.1
 */
- (jboolean)isMulticastAddress;

/*!
 @brief Utility routine to check if the InetAddress is a site local address.
 @return a <code>boolean</code> indicating if the InetAddress is
  a site local address; or false if address is not a site local unicast address.
 @since 1.4
 */
- (jboolean)isSiteLocalAddress;

#pragma mark Package-Private

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)hostName
                             withByteArray:(IOSByteArray *)addr;

- (instancetype __nonnull)initWithNSString:(NSString *)hostName
                                   withInt:(jint)address;

+ (NSString *)numericToTextFormatWithByteArray:(IOSByteArray *)src;

@end

J2OBJC_STATIC_INIT(JavaNetInet4Address)

inline jint JavaNetInet4Address_get_INADDRSZ(void);
#define JavaNetInet4Address_INADDRSZ 4
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetInet4Address, INADDRSZ, jint)

/*!
 */
inline JavaNetInetAddress *JavaNetInet4Address_get_ANY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNetInetAddress *JavaNetInet4Address_ANY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNetInet4Address, ANY, JavaNetInetAddress *)

/*!
 */
inline JavaNetInetAddress *JavaNetInet4Address_get_ALL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNetInetAddress *JavaNetInet4Address_ALL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNetInet4Address, ALL, JavaNetInetAddress *)

/*!
 */
inline JavaNetInetAddress *JavaNetInet4Address_get_LOOPBACK(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNetInetAddress *JavaNetInet4Address_LOOPBACK;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNetInet4Address, LOOPBACK, JavaNetInetAddress *)

FOUNDATION_EXPORT void JavaNetInet4Address_init(JavaNetInet4Address *self);

FOUNDATION_EXPORT JavaNetInet4Address *new_JavaNetInet4Address_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetInet4Address *create_JavaNetInet4Address_init(void);

FOUNDATION_EXPORT void JavaNetInet4Address_initWithNSString_withByteArray_(JavaNetInet4Address *self, NSString *hostName, IOSByteArray *addr);

FOUNDATION_EXPORT JavaNetInet4Address *new_JavaNetInet4Address_initWithNSString_withByteArray_(NSString *hostName, IOSByteArray *addr) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetInet4Address *create_JavaNetInet4Address_initWithNSString_withByteArray_(NSString *hostName, IOSByteArray *addr);

FOUNDATION_EXPORT void JavaNetInet4Address_initWithNSString_withInt_(JavaNetInet4Address *self, NSString *hostName, jint address);

FOUNDATION_EXPORT JavaNetInet4Address *new_JavaNetInet4Address_initWithNSString_withInt_(NSString *hostName, jint address) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetInet4Address *create_JavaNetInet4Address_initWithNSString_withInt_(NSString *hostName, jint address);

FOUNDATION_EXPORT NSString *JavaNetInet4Address_numericToTextFormatWithByteArray_(IOSByteArray *src);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetInet4Address)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetInet4Address")
