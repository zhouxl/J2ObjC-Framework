//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/Flushable.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaIoFlushable_INCLUDE_ALL")
#ifdef JavaIoFlushable_RESTRICT
#define JavaIoFlushable_INCLUDE_ALL 0
#else
#define JavaIoFlushable_INCLUDE_ALL 1
#endif
#undef JavaIoFlushable_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoFlushable_) && (JavaIoFlushable_INCLUDE_ALL || defined(JavaIoFlushable_INCLUDE))
#define JavaIoFlushable_

/*!
 @brief Defines an interface for classes that can (or need to) be flushed, typically
 before some output processing is considered to be finished and the object
 gets closed.
 */
@protocol JavaIoFlushable < NSObject, JavaObject >

/*!
 @brief Flushes the object by writing out any buffered data to the underlying
 output.
 @throws IOException
 if there are any issues writing the data.
 */
- (void)flush;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoFlushable)

J2OBJC_TYPE_LITERAL_HEADER(JavaIoFlushable)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaIoFlushable_INCLUDE_ALL")
