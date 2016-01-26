//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/DomainCombiner.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaSecurityDomainCombiner_INCLUDE_ALL")
#ifdef JavaSecurityDomainCombiner_RESTRICT
#define JavaSecurityDomainCombiner_INCLUDE_ALL 0
#else
#define JavaSecurityDomainCombiner_INCLUDE_ALL 1
#endif
#undef JavaSecurityDomainCombiner_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityDomainCombiner_) && (JavaSecurityDomainCombiner_INCLUDE_ALL || defined(JavaSecurityDomainCombiner_INCLUDE))
#define JavaSecurityDomainCombiner_

@class IOSObjectArray;

/*!
 @brief Legacy security code; do not use.
 */
@protocol JavaSecurityDomainCombiner < NSObject, JavaObject >

/*!
 @brief Returns a combination of the two provided <code>ProtectionDomain</code>
 arrays.
 Implementers can simply merge the two arrays into one, remove
 duplicates and perform other optimizations.
 @param current
 the protection domains of the current execution thread
 @param assigned
 the protection domains of the parent thread, may be <code>null</code>.
 @return a single <code>ProtectionDomain</code> array computed from the two
 provided arrays.
 */
- (IOSObjectArray *)combineWithJavaSecurityProtectionDomainArray:(IOSObjectArray *)current
                           withJavaSecurityProtectionDomainArray:(IOSObjectArray *)assigned;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityDomainCombiner)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityDomainCombiner)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaSecurityDomainCombiner_INCLUDE_ALL")
