//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/hash/FarmHashFingerprint64.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonHashFarmHashFingerprint64")
#ifdef RESTRICT_ComGoogleCommonHashFarmHashFingerprint64
#define INCLUDE_ALL_ComGoogleCommonHashFarmHashFingerprint64 0
#else
#define INCLUDE_ALL_ComGoogleCommonHashFarmHashFingerprint64 1
#endif
#undef RESTRICT_ComGoogleCommonHashFarmHashFingerprint64

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonHashFarmHashFingerprint64_) && (INCLUDE_ALL_ComGoogleCommonHashFarmHashFingerprint64 || defined(INCLUDE_ComGoogleCommonHashFarmHashFingerprint64))
#define ComGoogleCommonHashFarmHashFingerprint64_

#define RESTRICT_ComGoogleCommonHashAbstractNonStreamingHashFunction 1
#define INCLUDE_ComGoogleCommonHashAbstractNonStreamingHashFunction 1
#include "../../../../../com/google/common/hash/AbstractNonStreamingHashFunction.h"

@class ComGoogleCommonHashHashCode;
@class IOSByteArray;
@protocol ComGoogleCommonHashHashFunction;

/*!
 @brief Implementation of FarmHash Fingerprint64, an open-source fingerprinting algorithm for strings.
 <p>Its speed is comparable to CityHash64, and its quality of hashing is at least as good. 
 <p>Note to maintainers: This implementation relies on signed arithmetic being bit-wise equivalent
  to unsigned arithmetic in all cases except: 
 <ul>
    <li>comparisons (signed values can be negative)
    <li>division (avoided here)
    <li>shifting (right shift must be unsigned) 
 </ul>
 @author Kyle Maddison
 @author Geoff Pike
 */
@interface ComGoogleCommonHashFarmHashFingerprint64 : ComGoogleCommonHashAbstractNonStreamingHashFunction
@property (readonly, class, strong) id<ComGoogleCommonHashHashFunction> FARMHASH_FINGERPRINT_64 NS_SWIFT_NAME(FARMHASH_FINGERPRINT_64);

+ (id<ComGoogleCommonHashHashFunction>)FARMHASH_FINGERPRINT_64;

#pragma mark Public

- (jint)bits;

- (ComGoogleCommonHashHashCode *)hashBytesWithByteArray:(IOSByteArray *)input
                                                withInt:(jint)off
                                                withInt:(jint)len;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype __nonnull)init;

+ (jlong)fingerprintWithByteArray:(IOSByteArray *)bytes
                          withInt:(jint)offset
                          withInt:(jint)length;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonHashFarmHashFingerprint64)

inline id<ComGoogleCommonHashHashFunction> ComGoogleCommonHashFarmHashFingerprint64_get_FARMHASH_FINGERPRINT_64(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<ComGoogleCommonHashHashFunction> ComGoogleCommonHashFarmHashFingerprint64_FARMHASH_FINGERPRINT_64;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonHashFarmHashFingerprint64, FARMHASH_FINGERPRINT_64, id<ComGoogleCommonHashHashFunction>)

FOUNDATION_EXPORT void ComGoogleCommonHashFarmHashFingerprint64_init(ComGoogleCommonHashFarmHashFingerprint64 *self);

FOUNDATION_EXPORT ComGoogleCommonHashFarmHashFingerprint64 *new_ComGoogleCommonHashFarmHashFingerprint64_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonHashFarmHashFingerprint64 *create_ComGoogleCommonHashFarmHashFingerprint64_init(void);

FOUNDATION_EXPORT jlong ComGoogleCommonHashFarmHashFingerprint64_fingerprintWithByteArray_withInt_withInt_(IOSByteArray *bytes, jint offset, jint length);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashFarmHashFingerprint64)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonHashFarmHashFingerprint64")
