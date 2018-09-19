//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/Proxy.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetProxy")
#ifdef RESTRICT_JavaNetProxy
#define INCLUDE_ALL_JavaNetProxy 0
#else
#define INCLUDE_ALL_JavaNetProxy 1
#endif
#undef RESTRICT_JavaNetProxy

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNetProxy_) && (INCLUDE_ALL_JavaNetProxy || defined(INCLUDE_JavaNetProxy))
#define JavaNetProxy_

@class JavaNetProxy_Type;
@class JavaNetSocketAddress;

/*!
 @brief This class represents a proxy setting, typically a type (http, socks) and
  a socket address.
 A <code>Proxy</code> is an immutable object.
 - seealso: java.net.ProxySelector
 @author Yingxian Wang
 @author Jean-Christophe Collet
 @since 1.5
 */
@interface JavaNetProxy : NSObject
@property (readonly, class, strong) JavaNetProxy *NO_PROXY NS_SWIFT_NAME(NO_PROXY);

+ (JavaNetProxy *)NO_PROXY;

#pragma mark Public

/*!
 @brief Creates an entry representing a PROXY connection.
 Certain combinations are illegal. For instance, for types Http, and
  Socks, a SocketAddress <b>must</b> be provided. 
 <P>
  Use the <code>Proxy.NO_PROXY</code> constant
  for representing a direct connection.
 @param type the  <code> Type </code>  of the proxy
 @param sa the  <code> SocketAddress </code>  for that proxy
 @throw IllegalArgumentExceptionwhen the type and the address are
  incompatible
 */
- (instancetype __nonnull)initWithJavaNetProxy_Type:(JavaNetProxy_Type *)type
                           withJavaNetSocketAddress:(JavaNetSocketAddress *)sa;

/*!
 @brief Returns the socket address of the proxy, or 
 <code>null</code> if its a direct connection.
 @return a <code>SocketAddress</code> representing the socket end
          point of the proxy
 */
- (JavaNetSocketAddress *)address;

/*!
 @brief Compares this object against the specified object.
 The result is <code>true</code> if and only if the argument is
  not <code>null</code> and it represents the same proxy as
  this object. 
 <p>
  Two instances of <code>Proxy</code> represent the same
  address if both the SocketAddresses and type are equal.
 @param obj the object to compare against.
 @return <code>true</code> if the objects are the same;
           <code>false</code> otherwise.
 - seealso: java.net.InetSocketAddress
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Returns a hashcode for this Proxy.
 @return a hash code value for this Proxy.
 */
- (NSUInteger)hash;

/*!
 @brief Constructs a string representation of this Proxy.
 This String is constructed by calling toString() on its type
  and concatenating " @@ " and the toString() result from its address
  if its type is not <code>DIRECT</code>.
 @return a string representation of this object.
 */
- (NSString *)description;

/*!
 @brief Returns the proxy type.
 @return a Type representing the proxy type
 */
- (JavaNetProxy_Type *)type;

@end

J2OBJC_STATIC_INIT(JavaNetProxy)

/*!
 @brief A proxy setting that represents a <code>DIRECT</code> connection,
  basically telling the protocol handler not to use any proxying.
 Used, for instance, to create sockets bypassing any other global
  proxy settings (like SOCKS): 
 <P>
  <code>Socket s = new Socket(Proxy.NO_PROXY);</code><br>
  <P>
 */
inline JavaNetProxy *JavaNetProxy_get_NO_PROXY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNetProxy *JavaNetProxy_NO_PROXY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNetProxy, NO_PROXY, JavaNetProxy *)

FOUNDATION_EXPORT void JavaNetProxy_initWithJavaNetProxy_Type_withJavaNetSocketAddress_(JavaNetProxy *self, JavaNetProxy_Type *type, JavaNetSocketAddress *sa);

FOUNDATION_EXPORT JavaNetProxy *new_JavaNetProxy_initWithJavaNetProxy_Type_withJavaNetSocketAddress_(JavaNetProxy_Type *type, JavaNetSocketAddress *sa) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetProxy *create_JavaNetProxy_initWithJavaNetProxy_Type_withJavaNetSocketAddress_(JavaNetProxy_Type *type, JavaNetSocketAddress *sa);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetProxy)

#endif

#if !defined (JavaNetProxy_Type_) && (INCLUDE_ALL_JavaNetProxy || defined(INCLUDE_JavaNetProxy_Type))
#define JavaNetProxy_Type_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "../../java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, JavaNetProxy_Type_Enum) {
  JavaNetProxy_Type_Enum_DIRECT = 0,
  JavaNetProxy_Type_Enum_HTTP = 1,
  JavaNetProxy_Type_Enum_SOCKS = 2,
};

/*!
 @brief Represents the proxy type.
 @since 1.5
 */
@interface JavaNetProxy_Type : JavaLangEnum

@property (readonly, class, nonnull) JavaNetProxy_Type *DIRECT NS_SWIFT_NAME(DIRECT);
@property (readonly, class, nonnull) JavaNetProxy_Type *HTTP NS_SWIFT_NAME(HTTP);
@property (readonly, class, nonnull) JavaNetProxy_Type *SOCKS NS_SWIFT_NAME(SOCKS);
+ (JavaNetProxy_Type * __nonnull)DIRECT;

+ (JavaNetProxy_Type * __nonnull)HTTP;

+ (JavaNetProxy_Type * __nonnull)SOCKS;

#pragma mark Public

+ (JavaNetProxy_Type *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (JavaNetProxy_Type_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(JavaNetProxy_Type)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT JavaNetProxy_Type *JavaNetProxy_Type_values_[];

/*!
 @brief Represents a direct connection, or the absence of a proxy.
 */
inline JavaNetProxy_Type *JavaNetProxy_Type_get_DIRECT(void);
J2OBJC_ENUM_CONSTANT(JavaNetProxy_Type, DIRECT)

/*!
 @brief Represents proxy for high level protocols such as HTTP or FTP.
 */
inline JavaNetProxy_Type *JavaNetProxy_Type_get_HTTP(void);
J2OBJC_ENUM_CONSTANT(JavaNetProxy_Type, HTTP)

/*!
 @brief Represents a SOCKS (V4 or V5) proxy.
 */
inline JavaNetProxy_Type *JavaNetProxy_Type_get_SOCKS(void);
J2OBJC_ENUM_CONSTANT(JavaNetProxy_Type, SOCKS)

FOUNDATION_EXPORT IOSObjectArray *JavaNetProxy_Type_values(void);

FOUNDATION_EXPORT JavaNetProxy_Type *JavaNetProxy_Type_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaNetProxy_Type *JavaNetProxy_Type_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetProxy_Type)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetProxy")
