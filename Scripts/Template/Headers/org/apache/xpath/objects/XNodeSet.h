//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/objects/XNodeSet.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathObjectsXNodeSet")
#ifdef RESTRICT_OrgApacheXpathObjectsXNodeSet
#define INCLUDE_ALL_OrgApacheXpathObjectsXNodeSet 0
#else
#define INCLUDE_ALL_OrgApacheXpathObjectsXNodeSet 1
#endif
#undef RESTRICT_OrgApacheXpathObjectsXNodeSet
#ifdef INCLUDE_OrgApacheXpathObjectsNotEqualComparator
#define INCLUDE_OrgApacheXpathObjectsComparator 1
#endif
#ifdef INCLUDE_OrgApacheXpathObjectsEqualComparator
#define INCLUDE_OrgApacheXpathObjectsComparator 1
#endif
#ifdef INCLUDE_OrgApacheXpathObjectsGreaterThanOrEqualComparator
#define INCLUDE_OrgApacheXpathObjectsComparator 1
#endif
#ifdef INCLUDE_OrgApacheXpathObjectsGreaterThanComparator
#define INCLUDE_OrgApacheXpathObjectsComparator 1
#endif
#ifdef INCLUDE_OrgApacheXpathObjectsLessThanOrEqualComparator
#define INCLUDE_OrgApacheXpathObjectsComparator 1
#endif
#ifdef INCLUDE_OrgApacheXpathObjectsLessThanComparator
#define INCLUDE_OrgApacheXpathObjectsComparator 1
#endif

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathObjectsXNodeSet_) && (INCLUDE_ALL_OrgApacheXpathObjectsXNodeSet || defined(INCLUDE_OrgApacheXpathObjectsXNodeSet))
#define OrgApacheXpathObjectsXNodeSet_

#define RESTRICT_OrgApacheXpathAxesNodeSequence 1
#define INCLUDE_OrgApacheXpathAxesNodeSequence 1
#include "../../../../org/apache/xpath/axes/NodeSequence.h"

@class OrgApacheXmlDtmDTMManager;
@class OrgApacheXmlUtilsFastStringBuffer;
@class OrgApacheXpathNodeSetDTM;
@class OrgApacheXpathObjectsComparator;
@class OrgApacheXpathObjectsEqualComparator;
@class OrgApacheXpathObjectsGreaterThanComparator;
@class OrgApacheXpathObjectsGreaterThanOrEqualComparator;
@class OrgApacheXpathObjectsLessThanComparator;
@class OrgApacheXpathObjectsLessThanOrEqualComparator;
@class OrgApacheXpathObjectsNotEqualComparator;
@class OrgApacheXpathObjectsXObject;
@protocol OrgApacheXmlDtmDTMIterator;
@protocol OrgApacheXmlUtilsXMLString;
@protocol OrgW3cDomNodeList;
@protocol OrgW3cDomTraversalNodeIterator;
@protocol OrgXmlSaxContentHandler;

/*!
 @brief This class represents an XPath nodeset object, and is capable of
  converting the nodeset to other types, such as a string.
 */
@interface OrgApacheXpathObjectsXNodeSet : OrgApacheXpathAxesNodeSequence
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);
@property (readonly, class, strong) OrgApacheXpathObjectsLessThanComparator *S_LT NS_SWIFT_NAME(S_LT);
@property (readonly, class, strong) OrgApacheXpathObjectsLessThanOrEqualComparator *S_LTE NS_SWIFT_NAME(S_LTE);
@property (readonly, class, strong) OrgApacheXpathObjectsGreaterThanComparator *S_GT NS_SWIFT_NAME(S_GT);
@property (readonly, class, strong) OrgApacheXpathObjectsGreaterThanOrEqualComparator *S_GTE NS_SWIFT_NAME(S_GTE);
@property (readonly, class, strong) OrgApacheXpathObjectsEqualComparator *S_EQ NS_SWIFT_NAME(S_EQ);
@property (readonly, class, strong) OrgApacheXpathObjectsNotEqualComparator *S_NEQ NS_SWIFT_NAME(S_NEQ);

+ (jlong)serialVersionUID;

+ (OrgApacheXpathObjectsLessThanComparator *)S_LT;

+ (OrgApacheXpathObjectsLessThanOrEqualComparator *)S_LTE;

+ (OrgApacheXpathObjectsGreaterThanComparator *)S_GT;

+ (OrgApacheXpathObjectsGreaterThanOrEqualComparator *)S_GTE;

+ (OrgApacheXpathObjectsEqualComparator *)S_EQ;

+ (OrgApacheXpathObjectsNotEqualComparator *)S_NEQ;

#pragma mark Public

/*!
 @brief Construct a XNodeSet object.
 @param val Value of the XNodeSet object
 */
- (instancetype __nonnull)initWithOrgApacheXmlDtmDTMIterator:(id<OrgApacheXmlDtmDTMIterator>)val;

/*!
 @brief Construct an empty XNodeSet object.This is used to create a mutable 
  nodeset to which random nodes may be added.
 */
- (instancetype __nonnull)initWithOrgApacheXmlDtmDTMManager:(OrgApacheXmlDtmDTMManager *)dtmMgr;

/*!
 @brief Construct a XNodeSet object for one node.
 @param n Node to add to the new XNodeSet object
 */
- (instancetype __nonnull)initWithInt:(jint)n
        withOrgApacheXmlDtmDTMManager:(OrgApacheXmlDtmDTMManager *)dtmMgr;

/*!
 @brief Construct a XNodeSet object.
 @param val Value of the XNodeSet object
 */
- (instancetype __nonnull)initWithOrgApacheXpathObjectsXNodeSet:(OrgApacheXpathObjectsXNodeSet *)val;

/*!
 @brief Cast result object to a string.
 @return The string this wraps or the empty string if null
 */
- (void)appendToFsbWithOrgApacheXmlUtilsFastStringBuffer:(OrgApacheXmlUtilsFastStringBuffer *)fsb;

/*!
 @brief Cast result object to a boolean.
 @return True if there is a next node in the nodeset
 */
- (jboolean)bool__;

/*!
 @brief Cast result object to a boolean, but allow side effects, such as the 
  incrementing of an iterator.
 @return True if there is a next node in the nodeset
 */
- (jboolean)boolWithSideEffects;

/*!
 @brief Tell if one object is less than the other.
 @param obj2 Object to compare this nodeset to
 @param comparator Comparator to use
 @return See the comments below for each object type comparison
 @throw javax.xml.transform.TransformerException
 */
- (jboolean)compareWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)obj2
                withOrgApacheXpathObjectsComparator:(OrgApacheXpathObjectsComparator *)comparator;

/*!
 @brief Directly call the
  characters method on the passed ContentHandler for the
  string-value.Multiple calls to the
  ContentHandler's characters methods may well occur for a single call to
  this method.
 @param ch A non-null reference to a ContentHandler.
 @throw org.xml.sax.SAXException
 */
- (void)dispatchCharactersEventsWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)ch;

/*!
 @brief Tell if two objects are functionally equal.
 @param obj2 object to compare this nodeset to
 @return see this.compare(...)
 @throw javax.xml.transform.TransformerException
 */
- (jboolean)equalsWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)obj2;

/*!
 @brief Get a fresh copy of the object.For use with variables.
 @return A fresh nodelist.
 */
- (OrgApacheXpathObjectsXObject *)getFresh;

/*!
 @brief Get numeric value of the string conversion from a single node.
 @param n Node to convert
 @return numeric value of the string conversion from a single node.
 */
- (jdouble)getNumberFromNodeWithInt:(jint)n;

/*!
 @brief Get the string conversion from a single node.
 @param n Node to convert
 @return the string conversion from a single node.
 */
- (id<OrgApacheXmlUtilsXMLString>)getStringFromNodeWithInt:(jint)n;

/*!
 @brief Tell that this is a CLASS_NODESET.
 @return type CLASS_NODESET
 */
- (jint)getType;

/*!
 @brief Given a request type, return the equivalent string.
 For diagnostic purposes.
 @return type string "#NODESET"
 */
- (NSString *)getTypeString;

/*!
 @brief Tell if one object is less than the other.
 @param obj2 object to compare this nodeset to
 @return see this.compare(...)
 @throw javax.xml.transform.TransformerException
 */
- (jboolean)greaterThanWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)obj2;

/*!
 @brief Tell if one object is less than the other.
 @param obj2 object to compare this nodeset to
 @return see this.compare(...)
 @throw javax.xml.transform.TransformerException
 */
- (jboolean)greaterThanOrEqualWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)obj2;

/*!
 @brief Cast result object to a nodelist.
 @return The nodeset as a nodelist
 */
- (id<OrgApacheXmlDtmDTMIterator>)iter;

/*!
 @brief Return the iterator without cloning, etc.
 */
- (id<OrgApacheXmlDtmDTMIterator>)iterRaw;

/*!
 @brief Tell if one object is less than the other.
 @param obj2 object to compare this nodeset to
 @return see this.compare(...)
 @throw javax.xml.transform.TransformerException
 */
- (jboolean)lessThanWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)obj2;

/*!
 @brief Tell if one object is less than or equal to the other.
 @param obj2 object to compare this nodeset to
 @return see this.compare(...)
 @throw javax.xml.transform.TransformerException
 */
- (jboolean)lessThanOrEqualWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)obj2;

/*!
 @brief Cast result object to a mutableNodeset.
 @return The nodeset as a mutableNodeset
 */
- (OrgApacheXpathNodeSetDTM *)mutableNodeset;

/*!
 @brief Cast result object to a nodelist.
 @return a NodeList.
 @throw javax.xml.transform.TransformerException
 */
- (id<OrgW3cDomNodeList>)nodelist;

/*!
 @brief Cast result object to a nodelist.
 @return a NodeIterator.
 @throw javax.xml.transform.TransformerException
 */
- (id<OrgW3cDomTraversalNodeIterator>)nodeset;

/*!
 @brief Tell if two objects are functionally not equal.
 @param obj2 object to compare this nodeset to
 @return see this.compare(...)
 @throw javax.xml.transform.TransformerException
 */
- (jboolean)notEqualsWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)obj2;

/*!
 @brief Cast result object to a number.
 @return numeric value of the string conversion from the 
  next node in the NodeSetDTM, or NAN if no node was found
 */
- (jdouble)num;

/*!
 @brief Cast result object to a number, but allow side effects, such as the 
  incrementing of an iterator.
 @return numeric value of the string conversion from the 
  next node in the NodeSetDTM, or NAN if no node was found
 */
- (jdouble)numWithSideEffects;

/*!
 @brief Return a java object that's closest to the representation
  that should be handed to an extension.
 @return The object that this class wraps
 */
- (id)object;

- (void)release__WithOrgApacheXmlDtmDTMIterator:(id<OrgApacheXmlDtmDTMIterator>)iter;

/*!
 @brief Cast result object to a string.
 @return the string conversion from the next node in the nodeset
  or "" if there is no next node
 */
- (NSString *)str;

/*!
 @brief Cast result object to an XMLString.
 @return The document fragment node data or the empty string.
 */
- (id<OrgApacheXmlUtilsXMLString>)xstr;

#pragma mark Protected

/*!
 @brief Default constructor for derived objects.
 */
- (instancetype __nonnull)init;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithId:(id)arg0 NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(OrgApacheXpathObjectsXNodeSet)

inline jlong OrgApacheXpathObjectsXNodeSet_get_serialVersionUID(void);
#define OrgApacheXpathObjectsXNodeSet_serialVersionUID 1916026368035639667LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathObjectsXNodeSet, serialVersionUID, jlong)

/*!
 @brief Less than comparator
 */
inline OrgApacheXpathObjectsLessThanComparator *OrgApacheXpathObjectsXNodeSet_get_S_LT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheXpathObjectsLessThanComparator *OrgApacheXpathObjectsXNodeSet_S_LT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathObjectsXNodeSet, S_LT, OrgApacheXpathObjectsLessThanComparator *)

/*!
 @brief Less than or equal comparator
 */
inline OrgApacheXpathObjectsLessThanOrEqualComparator *OrgApacheXpathObjectsXNodeSet_get_S_LTE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheXpathObjectsLessThanOrEqualComparator *OrgApacheXpathObjectsXNodeSet_S_LTE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathObjectsXNodeSet, S_LTE, OrgApacheXpathObjectsLessThanOrEqualComparator *)

/*!
 @brief Greater than comparator
 */
inline OrgApacheXpathObjectsGreaterThanComparator *OrgApacheXpathObjectsXNodeSet_get_S_GT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheXpathObjectsGreaterThanComparator *OrgApacheXpathObjectsXNodeSet_S_GT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathObjectsXNodeSet, S_GT, OrgApacheXpathObjectsGreaterThanComparator *)

/*!
 @brief Greater than or equal comparator
 */
inline OrgApacheXpathObjectsGreaterThanOrEqualComparator *OrgApacheXpathObjectsXNodeSet_get_S_GTE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheXpathObjectsGreaterThanOrEqualComparator *OrgApacheXpathObjectsXNodeSet_S_GTE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathObjectsXNodeSet, S_GTE, OrgApacheXpathObjectsGreaterThanOrEqualComparator *)

/*!
 @brief Equal comparator
 */
inline OrgApacheXpathObjectsEqualComparator *OrgApacheXpathObjectsXNodeSet_get_S_EQ(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheXpathObjectsEqualComparator *OrgApacheXpathObjectsXNodeSet_S_EQ;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathObjectsXNodeSet, S_EQ, OrgApacheXpathObjectsEqualComparator *)

/*!
 @brief Not equal comparator
 */
inline OrgApacheXpathObjectsNotEqualComparator *OrgApacheXpathObjectsXNodeSet_get_S_NEQ(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheXpathObjectsNotEqualComparator *OrgApacheXpathObjectsXNodeSet_S_NEQ;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathObjectsXNodeSet, S_NEQ, OrgApacheXpathObjectsNotEqualComparator *)

FOUNDATION_EXPORT void OrgApacheXpathObjectsXNodeSet_init(OrgApacheXpathObjectsXNodeSet *self);

FOUNDATION_EXPORT OrgApacheXpathObjectsXNodeSet *new_OrgApacheXpathObjectsXNodeSet_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXNodeSet *create_OrgApacheXpathObjectsXNodeSet_init(void);

FOUNDATION_EXPORT void OrgApacheXpathObjectsXNodeSet_initWithOrgApacheXmlDtmDTMIterator_(OrgApacheXpathObjectsXNodeSet *self, id<OrgApacheXmlDtmDTMIterator> val);

FOUNDATION_EXPORT OrgApacheXpathObjectsXNodeSet *new_OrgApacheXpathObjectsXNodeSet_initWithOrgApacheXmlDtmDTMIterator_(id<OrgApacheXmlDtmDTMIterator> val) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXNodeSet *create_OrgApacheXpathObjectsXNodeSet_initWithOrgApacheXmlDtmDTMIterator_(id<OrgApacheXmlDtmDTMIterator> val);

FOUNDATION_EXPORT void OrgApacheXpathObjectsXNodeSet_initWithOrgApacheXpathObjectsXNodeSet_(OrgApacheXpathObjectsXNodeSet *self, OrgApacheXpathObjectsXNodeSet *val);

FOUNDATION_EXPORT OrgApacheXpathObjectsXNodeSet *new_OrgApacheXpathObjectsXNodeSet_initWithOrgApacheXpathObjectsXNodeSet_(OrgApacheXpathObjectsXNodeSet *val) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXNodeSet *create_OrgApacheXpathObjectsXNodeSet_initWithOrgApacheXpathObjectsXNodeSet_(OrgApacheXpathObjectsXNodeSet *val);

FOUNDATION_EXPORT void OrgApacheXpathObjectsXNodeSet_initWithOrgApacheXmlDtmDTMManager_(OrgApacheXpathObjectsXNodeSet *self, OrgApacheXmlDtmDTMManager *dtmMgr);

FOUNDATION_EXPORT OrgApacheXpathObjectsXNodeSet *new_OrgApacheXpathObjectsXNodeSet_initWithOrgApacheXmlDtmDTMManager_(OrgApacheXmlDtmDTMManager *dtmMgr) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXNodeSet *create_OrgApacheXpathObjectsXNodeSet_initWithOrgApacheXmlDtmDTMManager_(OrgApacheXmlDtmDTMManager *dtmMgr);

FOUNDATION_EXPORT void OrgApacheXpathObjectsXNodeSet_initWithInt_withOrgApacheXmlDtmDTMManager_(OrgApacheXpathObjectsXNodeSet *self, jint n, OrgApacheXmlDtmDTMManager *dtmMgr);

FOUNDATION_EXPORT OrgApacheXpathObjectsXNodeSet *new_OrgApacheXpathObjectsXNodeSet_initWithInt_withOrgApacheXmlDtmDTMManager_(jint n, OrgApacheXmlDtmDTMManager *dtmMgr) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXNodeSet *create_OrgApacheXpathObjectsXNodeSet_initWithInt_withOrgApacheXmlDtmDTMManager_(jint n, OrgApacheXmlDtmDTMManager *dtmMgr);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathObjectsXNodeSet)

#endif

#if !defined (OrgApacheXpathObjectsComparator_) && (INCLUDE_ALL_OrgApacheXpathObjectsXNodeSet || defined(INCLUDE_OrgApacheXpathObjectsComparator))
#define OrgApacheXpathObjectsComparator_

@protocol OrgApacheXmlUtilsXMLString;

/*!
 @brief compares nodes for various boolean operations.
 */
@interface OrgApacheXpathObjectsComparator : NSObject

#pragma mark Package-Private

- (instancetype __nonnull)init;

/*!
 @brief Compare two numbers
 @param n1 First number to compare
 @param n2 Second number to compare
 @return Whether the numbers are equal or not
 */
- (jboolean)compareNumbersWithDouble:(jdouble)n1
                          withDouble:(jdouble)n2;

/*!
 @brief Compare two strings
 @param s1 First string to compare
 @param s2 Second String to compare
 @return Whether the strings are equal or not
 */
- (jboolean)compareStringsWithOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)s1
                          withOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)s2;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathObjectsComparator)

FOUNDATION_EXPORT void OrgApacheXpathObjectsComparator_init(OrgApacheXpathObjectsComparator *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathObjectsComparator)

#endif

#if !defined (OrgApacheXpathObjectsLessThanComparator_) && (INCLUDE_ALL_OrgApacheXpathObjectsXNodeSet || defined(INCLUDE_OrgApacheXpathObjectsLessThanComparator))
#define OrgApacheXpathObjectsLessThanComparator_

@protocol OrgApacheXmlUtilsXMLString;

/*!
 @brief Compare strings or numbers for less than.
 */
@interface OrgApacheXpathObjectsLessThanComparator : OrgApacheXpathObjectsComparator

#pragma mark Package-Private

- (instancetype __nonnull)init;

/*!
 @brief Compare two numbers for less than.
 @param n1 First number to compare
 @param n2 Second number to compare
 @return true if n1 is less than n2
 */
- (jboolean)compareNumbersWithDouble:(jdouble)n1
                          withDouble:(jdouble)n2;

/*!
 @brief Compare two strings for less than.
 @param s1 First string to compare
 @param s2 Second String to compare
 @return True if s1 is less than s2
 */
- (jboolean)compareStringsWithOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)s1
                          withOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)s2;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathObjectsLessThanComparator)

FOUNDATION_EXPORT void OrgApacheXpathObjectsLessThanComparator_init(OrgApacheXpathObjectsLessThanComparator *self);

FOUNDATION_EXPORT OrgApacheXpathObjectsLessThanComparator *new_OrgApacheXpathObjectsLessThanComparator_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsLessThanComparator *create_OrgApacheXpathObjectsLessThanComparator_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathObjectsLessThanComparator)

#endif

#if !defined (OrgApacheXpathObjectsLessThanOrEqualComparator_) && (INCLUDE_ALL_OrgApacheXpathObjectsXNodeSet || defined(INCLUDE_OrgApacheXpathObjectsLessThanOrEqualComparator))
#define OrgApacheXpathObjectsLessThanOrEqualComparator_

@protocol OrgApacheXmlUtilsXMLString;

/*!
 @brief Compare strings or numbers for less than or equal.
 */
@interface OrgApacheXpathObjectsLessThanOrEqualComparator : OrgApacheXpathObjectsComparator

#pragma mark Package-Private

- (instancetype __nonnull)init;

/*!
 @brief Compare two numbers for less than or equal.
 @param n1 First number to compare
 @param n2 Second number to compare
 @return true if n1 is less than or equal to n2
 */
- (jboolean)compareNumbersWithDouble:(jdouble)n1
                          withDouble:(jdouble)n2;

/*!
 @brief Compare two strings for less than or equal.
 @param s1 First string to compare
 @param s2 Second String to compare
 @return true if s1 is less than or equal to s2
 */
- (jboolean)compareStringsWithOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)s1
                          withOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)s2;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathObjectsLessThanOrEqualComparator)

FOUNDATION_EXPORT void OrgApacheXpathObjectsLessThanOrEqualComparator_init(OrgApacheXpathObjectsLessThanOrEqualComparator *self);

FOUNDATION_EXPORT OrgApacheXpathObjectsLessThanOrEqualComparator *new_OrgApacheXpathObjectsLessThanOrEqualComparator_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsLessThanOrEqualComparator *create_OrgApacheXpathObjectsLessThanOrEqualComparator_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathObjectsLessThanOrEqualComparator)

#endif

#if !defined (OrgApacheXpathObjectsGreaterThanComparator_) && (INCLUDE_ALL_OrgApacheXpathObjectsXNodeSet || defined(INCLUDE_OrgApacheXpathObjectsGreaterThanComparator))
#define OrgApacheXpathObjectsGreaterThanComparator_

@protocol OrgApacheXmlUtilsXMLString;

/*!
 @brief Compare strings or numbers for greater than.
 */
@interface OrgApacheXpathObjectsGreaterThanComparator : OrgApacheXpathObjectsComparator

#pragma mark Package-Private

- (instancetype __nonnull)init;

/*!
 @brief Compare two numbers for greater than.
 @param n1 First number to compare
 @param n2 Second number to compare
 @return true if n1 is greater than n2
 */
- (jboolean)compareNumbersWithDouble:(jdouble)n1
                          withDouble:(jdouble)n2;

/*!
 @brief Compare two strings for greater than.
 @param s1 First string to compare
 @param s2 Second String to compare
 @return true if s1 is greater than s2
 */
- (jboolean)compareStringsWithOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)s1
                          withOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)s2;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathObjectsGreaterThanComparator)

FOUNDATION_EXPORT void OrgApacheXpathObjectsGreaterThanComparator_init(OrgApacheXpathObjectsGreaterThanComparator *self);

FOUNDATION_EXPORT OrgApacheXpathObjectsGreaterThanComparator *new_OrgApacheXpathObjectsGreaterThanComparator_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsGreaterThanComparator *create_OrgApacheXpathObjectsGreaterThanComparator_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathObjectsGreaterThanComparator)

#endif

#if !defined (OrgApacheXpathObjectsGreaterThanOrEqualComparator_) && (INCLUDE_ALL_OrgApacheXpathObjectsXNodeSet || defined(INCLUDE_OrgApacheXpathObjectsGreaterThanOrEqualComparator))
#define OrgApacheXpathObjectsGreaterThanOrEqualComparator_

@protocol OrgApacheXmlUtilsXMLString;

/*!
 @brief Compare strings or numbers for greater than or equal.
 */
@interface OrgApacheXpathObjectsGreaterThanOrEqualComparator : OrgApacheXpathObjectsComparator

#pragma mark Package-Private

- (instancetype __nonnull)init;

/*!
 @brief Compare two numbers for greater than or equal.
 @param n1 First number to compare
 @param n2 Second number to compare
 @return true if n1 is greater than or equal to n2
 */
- (jboolean)compareNumbersWithDouble:(jdouble)n1
                          withDouble:(jdouble)n2;

/*!
 @brief Compare two strings for greater than or equal.
 @param s1 First string to compare
 @param s2 Second String to compare
 @return true if s1 is greater than or equal to s2
 */
- (jboolean)compareStringsWithOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)s1
                          withOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)s2;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathObjectsGreaterThanOrEqualComparator)

FOUNDATION_EXPORT void OrgApacheXpathObjectsGreaterThanOrEqualComparator_init(OrgApacheXpathObjectsGreaterThanOrEqualComparator *self);

FOUNDATION_EXPORT OrgApacheXpathObjectsGreaterThanOrEqualComparator *new_OrgApacheXpathObjectsGreaterThanOrEqualComparator_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsGreaterThanOrEqualComparator *create_OrgApacheXpathObjectsGreaterThanOrEqualComparator_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathObjectsGreaterThanOrEqualComparator)

#endif

#if !defined (OrgApacheXpathObjectsEqualComparator_) && (INCLUDE_ALL_OrgApacheXpathObjectsXNodeSet || defined(INCLUDE_OrgApacheXpathObjectsEqualComparator))
#define OrgApacheXpathObjectsEqualComparator_

@protocol OrgApacheXmlUtilsXMLString;

/*!
 @brief Compare strings or numbers for equality.
 */
@interface OrgApacheXpathObjectsEqualComparator : OrgApacheXpathObjectsComparator

#pragma mark Package-Private

- (instancetype __nonnull)init;

/*!
 @brief Compare two numbers for equality.
 @param n1 First number to compare
 @param n2 Second number to compare
 @return true if n1 is equal to n2
 */
- (jboolean)compareNumbersWithDouble:(jdouble)n1
                          withDouble:(jdouble)n2;

/*!
 @brief Compare two strings for equality.
 @param s1 First string to compare
 @param s2 Second String to compare
 @return true if s1 is equal to s2
 */
- (jboolean)compareStringsWithOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)s1
                          withOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)s2;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathObjectsEqualComparator)

FOUNDATION_EXPORT void OrgApacheXpathObjectsEqualComparator_init(OrgApacheXpathObjectsEqualComparator *self);

FOUNDATION_EXPORT OrgApacheXpathObjectsEqualComparator *new_OrgApacheXpathObjectsEqualComparator_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsEqualComparator *create_OrgApacheXpathObjectsEqualComparator_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathObjectsEqualComparator)

#endif

#if !defined (OrgApacheXpathObjectsNotEqualComparator_) && (INCLUDE_ALL_OrgApacheXpathObjectsXNodeSet || defined(INCLUDE_OrgApacheXpathObjectsNotEqualComparator))
#define OrgApacheXpathObjectsNotEqualComparator_

@protocol OrgApacheXmlUtilsXMLString;

/*!
 @brief Compare strings or numbers for non-equality.
 */
@interface OrgApacheXpathObjectsNotEqualComparator : OrgApacheXpathObjectsComparator

#pragma mark Package-Private

- (instancetype __nonnull)init;

/*!
 @brief Compare two numbers for non-equality.
 @param n1 First number to compare
 @param n2 Second number to compare
 @return true if n1 is not equal to n2
 */
- (jboolean)compareNumbersWithDouble:(jdouble)n1
                          withDouble:(jdouble)n2;

/*!
 @brief Compare two strings for non-equality.
 @param s1 First string to compare
 @param s2 Second String to compare
 @return true if s1 is not equal to s2
 */
- (jboolean)compareStringsWithOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)s1
                          withOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)s2;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathObjectsNotEqualComparator)

FOUNDATION_EXPORT void OrgApacheXpathObjectsNotEqualComparator_init(OrgApacheXpathObjectsNotEqualComparator *self);

FOUNDATION_EXPORT OrgApacheXpathObjectsNotEqualComparator *new_OrgApacheXpathObjectsNotEqualComparator_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsNotEqualComparator *create_OrgApacheXpathObjectsNotEqualComparator_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathObjectsNotEqualComparator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathObjectsXNodeSet")
