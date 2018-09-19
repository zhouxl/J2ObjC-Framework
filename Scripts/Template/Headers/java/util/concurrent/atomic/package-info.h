//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/java/util/concurrent/atomic/package-info.java
//

/*!
 @brief A small toolkit of classes that support lock-free thread-safe
  programming on single variables.In essence, the classes in this
  package extend the notion of <code>volatile</code> values, fields, and
  array elements to those that also provide an atomic conditional update
  operation of the form: 
 @code
 boolean compareAndSet(expectedValue, updateValue);
@endcode
  
 <p>This method (which varies in argument types across different
  classes) atomically sets a variable to the <code>updateValue</code> if it
  currently holds the <code>expectedValue</code>, reporting <code>true</code> on
  success.
 The classes in this package also contain methods to get and
  unconditionally set values, as well as a weaker conditional atomic
  update operation <code>weakCompareAndSet</code> described below. 
 <p>The specifications of these methods enable implementations to
  employ efficient machine-level atomic instructions that are available
  on contemporary processors.  However on some platforms, support may
  entail some form of internal locking.  Thus the methods are not
  strictly guaranteed to be non-blocking --
  a thread may block transiently before performing the operation. 
 <p>Instances of classes 
 <code>java.util.concurrent.atomic.AtomicBoolean</code>,
  <code>java.util.concurrent.atomic.AtomicInteger</code>,
  <code>java.util.concurrent.atomic.AtomicLong</code>, and 
 <code>java.util.concurrent.atomic.AtomicReference</code>
  each provide access and updates to a single variable of the
  corresponding type.  Each class also provides appropriate utility
  methods for that type.  For example, classes <code>AtomicLong</code> and 
 <code>AtomicInteger</code> provide atomic increment methods.  One
  application is to generate sequence numbers, as in: 
 @code
  class Sequencer {
    private final AtomicLong sequenceNumber
      = new AtomicLong(0);
    public long next() {
      return sequenceNumber.getAndIncrement();
    }  }
 
@endcode
  
 <p>It is straightforward to define new utility functions that, like 
 <code>getAndIncrement</code>, apply a function to a value atomically.
  For example, given some transformation 
 @code
 long transform(long input)
@endcode
  write your utility method as follows: 
 @code
  long getAndTransform(AtomicLong var) {
    long prev, next;
    do {
      prev = var.get();
      next = transform(prev);
    } while (!var.compareAndSet(prev, next));
    return prev; // return next; for transformAndGet
  }
 
@endcode
  
 <p>The memory effects for accesses and updates of atomics generally
  follow the rules for volatiles, as stated in 
 <a href="https://docs.oracle.com/javase/specs/jls/se8/html/jls-17.html#jls-17.4">
  Chapter 17 of 
 <cite>The Java&trade; Language Specification</cite></a>:
  
 <ul>
    <li><code>get</code> has the memory effects of reading a 
 <code>volatile</code> variable.
    <li><code>set</code> has the memory effects of writing (assigning) a 
 <code>volatile</code> variable.
    <li><code>lazySet</code> has the memory effects of writing (assigning)
    a <code>volatile</code> variable except that it permits reorderings with
    subsequent (but not previous) memory actions that do not themselves
    impose reordering constraints with ordinary non-<code>volatile</code>
    writes.  Among other usage contexts, <code>lazySet</code> may apply when
    nulling out, for the sake of garbage collection, a reference that is
    never accessed again.   
 <li><code>weakCompareAndSet</code> atomically reads and conditionally
    writes a variable but does <em>not</em>
    create any happens-before orderings, so provides no guarantees
    with respect to previous or subsequent reads and writes of any
    variables other than the target of the <code>weakCompareAndSet</code>.
    <li><code>compareAndSet</code>
    and all other read-and-update operations such as <code>getAndIncrement</code>
    have the memory effects of both reading and
    writing <code>volatile</code> variables. 
 </ul>
  
 <p>In addition to classes representing single values, this package
  contains <em>Updater</em> classes that can be used to obtain 
 <code>compareAndSet</code> operations on any selected <code>volatile</code>
  field of any selected class. 
 <code>java.util.concurrent.atomic.AtomicReferenceFieldUpdater</code>,
  <code>java.util.concurrent.atomic.AtomicIntegerFieldUpdater</code>, and 
 <code>java.util.concurrent.atomic.AtomicLongFieldUpdater</code> are
  reflection-based utilities that provide access to the associated
  field types.  These are mainly of use in atomic data structures in
  which several <code>volatile</code> fields of the same node (for
  example, the links of a tree node) are independently subject to
  atomic updates.  These classes enable greater flexibility in how
  and when to use atomic updates, at the expense of more awkward
  reflection-based setup, less convenient usage, and weaker
  guarantees. 
 <p>The
  <code>java.util.concurrent.atomic.AtomicIntegerArray</code>,
  <code>java.util.concurrent.atomic.AtomicLongArray</code>, and 
 <code>java.util.concurrent.atomic.AtomicReferenceArray</code> classes
  further extend atomic operation support to arrays of these types.
  These classes are also notable in providing <code>volatile</code> access
  semantics for their array elements, which is not supported for
  ordinary arrays. 
 <p id="weakCompareAndSet">The atomic classes also support method 
 <code>weakCompareAndSet</code>, which has limited applicability.  On some
  platforms, the weak version may be more efficient than <code>compareAndSet</code>
  in the normal case, but differs in that any given
  invocation of the <code>weakCompareAndSet</code> method may return <code>false</code>
  <em>spuriously</em> (that is, for no apparent reason).  A 
 <code>false</code> return means only that the operation may be retried if
  desired, relying on the guarantee that repeated invocation when the
  variable holds <code>expectedValue</code> and no other thread is also
  attempting to set the variable will eventually succeed.  (Such
  spurious failures may for example be due to memory contention effects
  that are unrelated to whether the expected and current values are
  equal.)  Additionally <code>weakCompareAndSet</code> does not provide
  ordering guarantees that are usually needed for synchronization
  control.  However, the method may be useful for updating counters and
  statistics when such updates are unrelated to the other
  happens-before orderings of a program.  When a thread sees an update
  to an atomic variable caused by a <code>weakCompareAndSet</code>, it does
  not necessarily see updates to any <em>other</em> variables that
  occurred before the <code>weakCompareAndSet</code>.  This may be
  acceptable when, for example, updating performance statistics, but
  rarely otherwise. 
 <p>The <code>java.util.concurrent.atomic.AtomicMarkableReference</code>
  class associates a single boolean with a reference.  For example, this
  bit might be used inside a data structure to mean that the object
  being referenced has logically been deleted.
  The <code>java.util.concurrent.atomic.AtomicStampedReference</code>
  class associates an integer value with a reference.  This may be
  used for example, to represent version numbers corresponding to
  series of updates. 
 <p>Atomic classes are designed primarily as building blocks for
  implementing non-blocking data structures and related infrastructure
  classes.  The <code>compareAndSet</code> method is not a general
  replacement for locking.  It applies only when critical updates for an
  object are confined to a <em>single</em> variable. 
 <p>Atomic classes are not general purpose replacements for 
 <code>java.lang.Integer</code> and related classes.  They do <em>not</em>
  define methods such as <code>equals</code>, <code>hashCode</code> and 
 <code>compareTo</code>.  (Because atomic variables are expected to be
  mutated, they are poor choices for hash table keys.)  Additionally,
  classes are provided only for those types that are commonly useful in
  intended applications.  For example, there is no atomic class for
  representing <code>byte</code>.  In those infrequent cases where you would
  like to do so, you can use an <code>AtomicInteger</code> to hold 
 <code>byte</code> values, and cast appropriately.
  You can also hold floats using 
 <code>java.lang.Float</code> and 
 <code>java.lang.Float</code> conversions, and doubles using 
 <code>java.lang.Double</code> and 
 <code>java.lang.Double</code> conversions.
 @since 1.5
 */
#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentAtomicPackage_info")
#ifdef RESTRICT_JavaUtilConcurrentAtomicPackage_info
#define INCLUDE_ALL_JavaUtilConcurrentAtomicPackage_info 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentAtomicPackage_info 1
#endif
#undef RESTRICT_JavaUtilConcurrentAtomicPackage_info

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentAtomicPackage_info")