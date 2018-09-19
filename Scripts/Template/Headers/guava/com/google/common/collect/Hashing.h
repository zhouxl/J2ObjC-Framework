//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/Hashing.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectHashing")
#ifdef RESTRICT_ComGoogleCommonCollectHashing
#define INCLUDE_ALL_ComGoogleCommonCollectHashing 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectHashing 1
#endif
#undef RESTRICT_ComGoogleCommonCollectHashing

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectHashing_) && (INCLUDE_ALL_ComGoogleCommonCollectHashing || defined(INCLUDE_ComGoogleCommonCollectHashing))
#define ComGoogleCommonCollectHashing_

@interface ComGoogleCommonCollectHashing : NSObject

#pragma mark Package-Private

+ (jint)closedTableSizeWithInt:(jint)expectedEntries
                    withDouble:(jdouble)loadFactor;

+ (jboolean)needsResizingWithInt:(jint)size
                         withInt:(jint)tableSize
                      withDouble:(jdouble)loadFactor;

+ (jint)smearWithInt:(jint)hashCode;

+ (jint)smearedHashWithId:(id)o;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectHashing)

FOUNDATION_EXPORT jint ComGoogleCommonCollectHashing_smearWithInt_(jint hashCode);

FOUNDATION_EXPORT jint ComGoogleCommonCollectHashing_smearedHashWithId_(id o);

FOUNDATION_EXPORT jint ComGoogleCommonCollectHashing_closedTableSizeWithInt_withDouble_(jint expectedEntries, jdouble loadFactor);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectHashing_needsResizingWithInt_withInt_withDouble_(jint size, jint tableSize, jdouble loadFactor);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectHashing)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectHashing")
