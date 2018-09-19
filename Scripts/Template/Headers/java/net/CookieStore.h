//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/CookieStore.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetCookieStore")
#ifdef RESTRICT_JavaNetCookieStore
#define INCLUDE_ALL_JavaNetCookieStore 0
#else
#define INCLUDE_ALL_JavaNetCookieStore 1
#endif
#undef RESTRICT_JavaNetCookieStore

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNetCookieStore_) && (INCLUDE_ALL_JavaNetCookieStore || defined(INCLUDE_JavaNetCookieStore))
#define JavaNetCookieStore_

@class JavaNetHttpCookie;
@class JavaNetURI;
@protocol JavaUtilList;

/*!
 @brief A CookieStore object represents a storage for cookie.Can store and retrieve
  cookies.
 <p><code>CookieManager</code> will call <tt>CookieStore.add</tt> to save cookies
  for every incoming HTTP response, and call <tt>CookieStore.get</tt> to
  retrieve cookie for every outgoing HTTP request. A CookieStore
  is responsible for removing HttpCookie instances which have expired.
 @author Edward Wang
 @since 1.6
 */
@protocol JavaNetCookieStore < JavaObject >

/*!
 @brief Adds one HTTP cookie to the store.This is called for every
  incoming HTTP response.
 <p>A cookie to store may or may not be associated with an URI. If it
  is not associated with an URI, the cookie's domain and path attribute
  will indicate where it comes from. If it is associated with an URI and
  its domain and path attribute are not speicifed, given URI will indicate
  where this cookie comes from. 
 <p>If a cookie corresponding to the given URI already exists,
  then it is replaced with the new one.
 @param uri the uri this cookie associated with.                   if 
  <tt> null </tt> , this cookie will not be associated                   with an URI
 @param cookie the cookie to store
 @throw NullPointerExceptionif <tt>cookie</tt> is <tt>null</tt>
 - seealso: #get
 */
- (void)addWithJavaNetURI:(JavaNetURI *)uri
    withJavaNetHttpCookie:(JavaNetHttpCookie *)cookie;

/*!
 @brief Retrieve cookies associated with given URI, or whose domain matches the
  given URI.Only cookies that have not expired are returned.
 This is called for every outgoing HTTP request.
 @return an immutable list of HttpCookie,
                   return empty list if no cookies match the given URI
 @throw NullPointerExceptionif <tt>uri</tt> is <tt>null</tt>
 - seealso: #add
 */
- (id<JavaUtilList>)getWithJavaNetURI:(JavaNetURI *)uri;

/*!
 @brief Get all not-expired cookies in cookie store.
 @return an immutable list of http cookies;
                   return empty list if there's no http cookie in store
 */
- (id<JavaUtilList>)getCookies;

/*!
 @brief Get all URIs which identify the cookies in this cookie store.
 @return an immutable list of URIs;
                   return empty list if no cookie in this cookie store
                   is associated with an URI
 */
- (id<JavaUtilList>)getURIs;

/*!
 @brief Remove a cookie from store.
 @param uri the uri this cookie associated with.                   if 
  <tt> null </tt> , the cookie to be removed is not associated                   with an URI when added; if not 
  <tt> null </tt> , the cookie                   to be removed is associated with the given URI when added.
 @param cookie the cookie to remove
 @return <tt>true</tt> if this store contained the specified cookie
 @throw NullPointerExceptionif <tt>cookie</tt> is <tt>null</tt>
 */
- (jboolean)removeWithJavaNetURI:(JavaNetURI *)uri
           withJavaNetHttpCookie:(JavaNetHttpCookie *)cookie;

/*!
 @brief Remove all cookies in this cookie store.
 @return <tt>true</tt> if this store changed as a result of the call
 */
- (jboolean)removeAll;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetCookieStore)

J2OBJC_TYPE_LITERAL_HEADER(JavaNetCookieStore)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetCookieStore")
