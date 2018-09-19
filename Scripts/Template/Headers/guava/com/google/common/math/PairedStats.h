//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/math/PairedStats.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonMathPairedStats")
#ifdef RESTRICT_ComGoogleCommonMathPairedStats
#define INCLUDE_ALL_ComGoogleCommonMathPairedStats 0
#else
#define INCLUDE_ALL_ComGoogleCommonMathPairedStats 1
#endif
#undef RESTRICT_ComGoogleCommonMathPairedStats

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonMathPairedStats_) && (INCLUDE_ALL_ComGoogleCommonMathPairedStats || defined(INCLUDE_ComGoogleCommonMathPairedStats))
#define ComGoogleCommonMathPairedStats_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../../java/io/Serializable.h"

@class ComGoogleCommonMathLinearTransformation;
@class ComGoogleCommonMathStats;
@class IOSByteArray;

/*!
 @brief An immutable value object capturing some basic statistics about a collection of paired double
  values (e.g.points on a plane).
 Build instances with <code>PairedStatsAccumulator.snapshot</code>.
 @author Pete Gillin
 @since 20.0
 */
@interface ComGoogleCommonMathPairedStats : NSObject < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Returns the number of pairs in the dataset.
 */
- (jlong)count;

/*!
 @brief <p><b>Note:</b> This tests exact equality of the calculated statistics, including the floating
  point values.
 Two instances are guaranteed to be considered equal if one is copied from the
  other using <code>second = new PairedStatsAccumulator().addAll(first).snapshot()</code>, if both
  were obtained by calling <code>snapshot()</code> on the same <code>PairedStatsAccumulator</code> without
  adding any values in between the two calls, or if one is obtained from the other after
  round-tripping through java serialization. However, floating point rounding errors mean that it
  may be false for some instances where the statistics are mathematically equal, including
  instances constructed from the same values in a different order... or (in the general case)
  even in the same order. (It is guaranteed to return true for instances constructed from the
  same values in the same order if <code>strictfp</code> is in effect, or if the system architecture
  guarantees <code>strictfp</code>-like semantics.)
 */
- (jboolean)isEqual:(id __nullable)obj;

/*!
 @brief Creates a <code>PairedStats</code> instance from the given byte representation which was obtained by 
 <code>toByteArray</code>.
 <p><b>Note:</b> No guarantees are made regarding stability of the representation between
  versions.
 */
+ (ComGoogleCommonMathPairedStats *)fromByteArrayWithByteArray:(IOSByteArray *)byteArray;

/*!
 @brief <p><b>Note:</b> This hash code is consistent with exact equality of the calculated statistics,
  including the floating point values.
 See the note on <code>equals</code> for details.
 */
- (NSUInteger)hash;

/*!
 @brief Returns a linear transformation giving the best fit to the data according to <a href="http://mathworld.wolfram.com/LeastSquaresFitting.html">
 Ordinary Least Squares linear
  regression</a> of <code>y</code> as a function of <code>x</code>.The count must be greater than one, and
  either the <code>x</code> or <code>y</code> data must have a non-zero population variance (i.e.
 <code>xStats().populationVariance() > 0.0 || yStats().populationVariance() > 0.0</code>
 ). The result is
  guaranteed to be horizontal if there is variance in the <code>x</code> data but not the <code>y</code>
  data, and vertical if there is variance in the <code>y</code> data but not the <code>x</code> data. 
 <p>This fit minimizes the root-mean-square error in <code>y</code> as a function of <code>x</code>. This
  error is defined as the square root of the mean of the squares of the differences between the
  actual <code>y</code> values of the data and the values predicted by the fit for the <code>x</code>
  values (i.e. it is the square root of the mean of the squares of the vertical distances between
  the data points and the best fit line). For this fit, this error is a fraction <code>sqrt(1 -
  R*R)</code>
  of the population standard deviation of <code>y</code>, where <code>R</code> is the Pearson's
  correlation coefficient (as given by <code>pearsonsCorrelationCoefficient()</code>).
  
 <p>The corresponding root-mean-square error in <code>x</code> as a function of <code>y</code> is a
  fraction <code>sqrt(1/(R*R) - 1)</code> of the population standard deviation of <code>x</code>. This fit
  does not normally minimize that error: to do that, you should swap the roles of <code>x</code> and 
 <code>y</code>.
  
 <h3>Non-finite values</h3>
  
 <p>If the dataset contains any non-finite values (<code>Double.POSITIVE_INFINITY</code>, <code>Double.NEGATIVE_INFINITY</code>
 , or <code>Double.NaN</code>) then the result is <code>LinearTransformation.forNaN()</code>
 .
 @throw IllegalStateExceptionif the dataset is empty or contains a single pair of values, or
      both the <code>x</code> and <code>y</code> dataset must have zero population variance
 */
- (ComGoogleCommonMathLinearTransformation *)leastSquaresFit;

/*!
 @brief Returns the <a href="http://mathworld.wolfram.com/CorrelationCoefficient.html">Pearson's or
  product-moment correlation coefficient</a> of the values.The count must greater than one, and
  the <code>x</code> and <code>y</code> values must both have non-zero population variance (i.e.
 <code>xStats().populationVariance() > 0.0 && yStats().populationVariance() > 0.0</code>
 ). The result is not
  guaranteed to be exactly +/-1 even when the data are perfectly (anti-)correlated, due to
  numerical errors. However, it is guaranteed to be in the inclusive range [-1, +1]. 
 <h3>Non-finite values</h3>
  
 <p>If the dataset contains any non-finite values (<code>Double.POSITIVE_INFINITY</code>, <code>Double.NEGATIVE_INFINITY</code>
 , or <code>Double.NaN</code>) then the result is <code>Double.NaN</code>.
 @throw IllegalStateExceptionif the dataset is empty or contains a single pair of values, or
      either the <code>x</code> and <code>y</code> dataset has zero population variance
 */
- (jdouble)pearsonsCorrelationCoefficient;

/*!
 @brief Returns the population covariance of the values.The count must be non-zero.
 <p>This is guaranteed to return zero if the dataset contains a single pair of finite values. It
  is not guaranteed to return zero when the dataset consists of the same pair of values multiple
  times, due to numerical errors. 
 <h3>Non-finite values</h3>
  
 <p>If the dataset contains any non-finite values (<code>Double.POSITIVE_INFINITY</code>, <code>Double.NEGATIVE_INFINITY</code>
 , or <code>Double.NaN</code>) then the result is <code>Double.NaN</code>.
 @throw IllegalStateExceptionif the dataset is empty
 */
- (jdouble)populationCovariance;

/*!
 @brief Returns the sample covariance of the values.The count must be greater than one.
 <p>This is not guaranteed to return zero when the dataset consists of the same pair of values
  multiple times, due to numerical errors. 
 <h3>Non-finite values</h3>
  
 <p>If the dataset contains any non-finite values (<code>Double.POSITIVE_INFINITY</code>, <code>Double.NEGATIVE_INFINITY</code>
 , or <code>Double.NaN</code>) then the result is <code>Double.NaN</code>.
 @throw IllegalStateExceptionif the dataset is empty or contains a single pair of values
 */
- (jdouble)sampleCovariance;

/*!
 @brief Gets a byte array representation of this instance.
 <p><b>Note:</b> No guarantees are made regarding stability of the representation between
  versions.
 */
- (IOSByteArray *)toByteArray;

- (NSString *)description;

/*!
 @brief Returns the statistics on the <code>x</code> values alone.
 */
- (ComGoogleCommonMathStats *)xStats;

/*!
 @brief Returns the statistics on the <code>y</code> values alone.
 */
- (ComGoogleCommonMathStats *)yStats;

#pragma mark Package-Private

/*!
 @brief Internal constructor.Users should use <code>PairedStatsAccumulator.snapshot</code>.
 <p>To ensure that the created instance obeys its contract, the parameters should satisfy the
  following constraints. This is the callers responsibility and is not enforced here. 
 <ul>
    <li>Both <code>xStats</code> and <code>yStats</code> must have the same <code>count</code>.
    <li>If that <code>count</code> is 1, <code>sumOfProductsOfDeltas</code> must be exactly 0.0.
    <li>If that <code>count</code> is more than 1, <code>sumOfProductsOfDeltas</code> must be finite. 
 </ul>
 */
- (instancetype __nonnull)initWithComGoogleCommonMathStats:(ComGoogleCommonMathStats *)xStats
                              withComGoogleCommonMathStats:(ComGoogleCommonMathStats *)yStats
                                                withDouble:(jdouble)sumOfProductsOfDeltas;

- (jdouble)sumOfProductsOfDeltas;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonMathPairedStats)

FOUNDATION_EXPORT void ComGoogleCommonMathPairedStats_initWithComGoogleCommonMathStats_withComGoogleCommonMathStats_withDouble_(ComGoogleCommonMathPairedStats *self, ComGoogleCommonMathStats *xStats, ComGoogleCommonMathStats *yStats, jdouble sumOfProductsOfDeltas);

FOUNDATION_EXPORT ComGoogleCommonMathPairedStats *new_ComGoogleCommonMathPairedStats_initWithComGoogleCommonMathStats_withComGoogleCommonMathStats_withDouble_(ComGoogleCommonMathStats *xStats, ComGoogleCommonMathStats *yStats, jdouble sumOfProductsOfDeltas) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonMathPairedStats *create_ComGoogleCommonMathPairedStats_initWithComGoogleCommonMathStats_withComGoogleCommonMathStats_withDouble_(ComGoogleCommonMathStats *xStats, ComGoogleCommonMathStats *yStats, jdouble sumOfProductsOfDeltas);

FOUNDATION_EXPORT ComGoogleCommonMathPairedStats *ComGoogleCommonMathPairedStats_fromByteArrayWithByteArray_(IOSByteArray *byteArray);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonMathPairedStats)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonMathPairedStats")
