//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/java/util/concurrent/locks/package-info.java
//

/*!
 @brief Interfaces and classes providing a framework for locking and waiting
  for conditions that is distinct from built-in synchronization and
  monitors.The framework permits much greater flexibility in the use of
  locks and conditions, at the expense of more awkward syntax.
 <p>The <code>java.util.concurrent.locks.Lock</code> interface supports
  locking disciplines that differ in semantics (reentrant, fair, etc),
  and that can be used in non-block-structured contexts including
  hand-over-hand and lock reordering algorithms.  The main implementation
  is <code>java.util.concurrent.locks.ReentrantLock</code>.
  
 <p>The <code>java.util.concurrent.locks.ReadWriteLock</code> interface
  similarly defines locks that may be shared among readers but are
  exclusive to writers.  Only a single implementation, <code>java.util.concurrent.locks.ReentrantReadWriteLock</code>
 , is provided, since
  it covers most standard usage contexts.  But programmers may create
  their own implementations to cover nonstandard requirements. 
 <p>The <code>java.util.concurrent.locks.Condition</code> interface
  describes condition variables that may be associated with Locks.
  These are similar in usage to the implicit monitors accessed using 
 <code>Object.wait</code>, but offer extended capabilities.
  In particular, multiple <code>Condition</code> objects may be associated
  with a single <code>Lock</code>.  To avoid compatibility issues, the
  names of <code>Condition</code> methods are different from the
  corresponding <code>Object</code> versions. 
 <p>The <code>java.util.concurrent.locks.AbstractQueuedSynchronizer</code>
  class serves as a useful superclass for defining locks and other
  synchronizers that rely on queuing blocked threads.  The <code>java.util.concurrent.locks.AbstractQueuedLongSynchronizer</code>
  class
  provides the same functionality but extends support to 64 bits of
  synchronization state.  Both extend class <code>java.util.concurrent.locks.AbstractOwnableSynchronizer</code>
 , a simple
  class that helps record the thread currently holding exclusive
  synchronization.  The <code>java.util.concurrent.locks.LockSupport</code>
  class provides lower-level blocking and unblocking support that is
  useful for those developers implementing their own customized lock
  classes.
 @since 1.5
 */
#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentLocksPackage_info")
#ifdef RESTRICT_JavaUtilConcurrentLocksPackage_info
#define INCLUDE_ALL_JavaUtilConcurrentLocksPackage_info 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentLocksPackage_info 1
#endif
#undef RESTRICT_JavaUtilConcurrentLocksPackage_info

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
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentLocksPackage_info")
