//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/beans/PropertyChangeListenerProxy.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaBeansPropertyChangeListenerProxy")
#ifdef RESTRICT_JavaBeansPropertyChangeListenerProxy
#define INCLUDE_ALL_JavaBeansPropertyChangeListenerProxy 0
#else
#define INCLUDE_ALL_JavaBeansPropertyChangeListenerProxy 1
#endif
#undef RESTRICT_JavaBeansPropertyChangeListenerProxy

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaBeansPropertyChangeListenerProxy_) && (INCLUDE_ALL_JavaBeansPropertyChangeListenerProxy || defined(INCLUDE_JavaBeansPropertyChangeListenerProxy))
#define JavaBeansPropertyChangeListenerProxy_

#define RESTRICT_JavaUtilEventListenerProxy 1
#define INCLUDE_JavaUtilEventListenerProxy 1
#include "../../java/util/EventListenerProxy.h"

#define RESTRICT_JavaBeansPropertyChangeListener 1
#define INCLUDE_JavaBeansPropertyChangeListener 1
#include "../../java/beans/PropertyChangeListener.h"

@class JavaBeansPropertyChangeEvent;
@protocol JavaUtilEventListener;

/*!
 @brief A class which extends the <code>EventListenerProxy</code>
  specifically for adding a <code>PropertyChangeListener</code>
  with a "bound" property.
 Instances of this class can be added
  as <code>PropertyChangeListener</code>s to a bean
  which supports firing property change events. 
 <p>
  If the object has a <code>getPropertyChangeListeners</code> method
  then the array returned could be a mixture of <code>PropertyChangeListener</code>
  and <code>PropertyChangeListenerProxy</code> objects.
 - seealso: java.util.EventListenerProxy
 - seealso: PropertyChangeSupport#getPropertyChangeListeners
 @since 1.4
 */
@interface JavaBeansPropertyChangeListenerProxy : JavaUtilEventListenerProxy < JavaBeansPropertyChangeListener >

#pragma mark Public

/*!
 @brief Constructor which binds the <code>PropertyChangeListener</code>
  to a specific property.
 @param propertyName the name of the property to listen on
 @param listener the listener object
 */
- (instancetype __nonnull)initWithNSString:(NSString *)propertyName
       withJavaBeansPropertyChangeListener:(id<JavaBeansPropertyChangeListener>)listener;

- (id<JavaBeansPropertyChangeListener>)getListener;

/*!
 @brief Returns the name of the named property associated with the listener.
 @return the name of the named property associated with the listener
 */
- (NSString *)getPropertyName;

/*!
 @brief Forwards the property change event to the listener delegate.
 @param event the property change event
 */
- (void)propertyChangeWithJavaBeansPropertyChangeEvent:(JavaBeansPropertyChangeEvent *)event;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaUtilEventListener:(id<JavaUtilEventListener>)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaBeansPropertyChangeListenerProxy)

FOUNDATION_EXPORT void JavaBeansPropertyChangeListenerProxy_initWithNSString_withJavaBeansPropertyChangeListener_(JavaBeansPropertyChangeListenerProxy *self, NSString *propertyName, id<JavaBeansPropertyChangeListener> listener);

FOUNDATION_EXPORT JavaBeansPropertyChangeListenerProxy *new_JavaBeansPropertyChangeListenerProxy_initWithNSString_withJavaBeansPropertyChangeListener_(NSString *propertyName, id<JavaBeansPropertyChangeListener> listener) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaBeansPropertyChangeListenerProxy *create_JavaBeansPropertyChangeListenerProxy_initWithNSString_withJavaBeansPropertyChangeListener_(NSString *propertyName, id<JavaBeansPropertyChangeListener> listener);

J2OBJC_TYPE_LITERAL_HEADER(JavaBeansPropertyChangeListenerProxy)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaBeansPropertyChangeListenerProxy")
