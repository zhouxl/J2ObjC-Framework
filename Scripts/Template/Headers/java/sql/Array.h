//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/Array.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaSqlArray_INCLUDE_ALL")
#ifdef JavaSqlArray_RESTRICT
#define JavaSqlArray_INCLUDE_ALL 0
#else
#define JavaSqlArray_INCLUDE_ALL 1
#endif
#undef JavaSqlArray_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSqlArray_) && (JavaSqlArray_INCLUDE_ALL || defined(JavaSqlArray_INCLUDE))
#define JavaSqlArray_

@protocol JavaSqlResultSet;
@protocol JavaUtilMap;

/*!
 @brief A Java representation of the SQL <code>ARRAY</code> type.
 */
@protocol JavaSqlArray < NSObject, JavaObject >

/*!
 @brief Retrieves the contents of the SQL <code>ARRAY</code> value as a Java array
 object.
 @return A Java array containing the elements of this Array
 @throws SQLException
 if there is a database error.
 */
- (id)getArray;

/*!
 @brief Returns part of the SQL <code>ARRAY</code> associated with this array,
 starting at a particular <code>index</code> and comprising up to <code>count</code>
 successive elements of the SQL array.
 @param index
 the start position in the array where the values are
 retrieved.
 @param count
 the number of elements to retrieve.
 @return A Java array containing the desired set of elements from this Array
 @throws SQLException
 if there is a database error.
 */
- (id)getArrayWithLong:(jlong)index
               withInt:(jint)count;

/*!
 @brief Returns part of the SQL <code>ARRAY</code> associated with this array,
 starting at a particular <code>index</code> and comprising up to <code>count</code>
 successive elements of the SQL array.
 @param index
 the start position in the array where the values are
 retrieved.
 @param count
 the number of elements to retrieve.
 @param map
 the map defining the correspondence between SQL type names
 and Java types.
 @return A Java array containing the desired set of elements from this Array
 @throws SQLException
 if there is a database error.
 */
- (id)getArrayWithLong:(jlong)index
               withInt:(jint)count
       withJavaUtilMap:(id<JavaUtilMap>)map;

/*!
 @brief Returns the data from the underlying SQL <code>ARRAY</code> as a Java array.
 @param map
 the map defining the correspondence between SQL type names
 and Java types.
 @return A Java array containing the elements of this array
 @throws SQLException
 if there is a database error.
 */
- (id)getArrayWithJavaUtilMap:(id<JavaUtilMap>)map;

/*!
 @brief Returns the JDBC type of the entries in this array's underlying
 SQL array.
 @return An integer constant from the <code>java.sql.Types</code> class
 @throws SQLException
 if there is a database error.
 */
- (jint)getBaseType;

/*!
 @brief Returns the SQL type name of the entries in this array's underlying
 SQL array.
 @return The database specific name or a fully-qualified SQL type name.
 @throws SQLException
 if there is a database error.
 */
- (NSString *)getBaseTypeName;

/*!
 @brief Returns a ResultSet object which holds the entries of the SQL <code>ARRAY</code>
  associated with this array.
 @return the elements of the array as a <code>ResultSet</code>.
 @throws SQLException
 if there is a database error.
 */
- (id<JavaSqlResultSet>)getResultSet;

/*!
 @brief Returns a <code>ResultSet</code> object that holds the entries of a subarray,
 beginning at a particular index and comprising up to <code>count</code>
 successive entries.
 @param index
 the start position in the array where the values are
 retrieved.
 @param count
 the number of elements to retrieve.
 @return the elements of the array as a <code>ResultSet</code>.
 @throws SQLException
 if there is a database error.
 */
- (id<JavaSqlResultSet>)getResultSetWithLong:(jlong)index
                                     withInt:(jint)count;

/*!
 @brief Returns a <code>ResultSet</code> object that holds the entries of a subarray,
 beginning at a particular index and comprising up to <code>count</code>
 successive entries.
 @param index
 the start position in the array where the values are
 retrieved.
 @param count
 the number of elements to retrieve.
 @param map
 the map defining the correspondence between SQL type names
 and Java types.
 @return the <code>ResultSet</code> the array's custom type values. if a
 database error has occurred.
 @throws SQLException
 if there is a database error.
 */
- (id<JavaSqlResultSet>)getResultSetWithLong:(jlong)index
                                     withInt:(jint)count
                             withJavaUtilMap:(id<JavaUtilMap>)map;

/*!
 @brief Returns a <code>ResultSet</code> object which holds the entries of the SQL
 <code>ARRAY</code> associated with this array.
 @param map
 the map defining the correspondence between SQL type names
 and Java types.
 @return the array as a <code>ResultSet</code>.
 @throws SQLException
 if there is a database error.
 */
- (id<JavaSqlResultSet>)getResultSetWithJavaUtilMap:(id<JavaUtilMap>)map;

/*!
 @brief Frees any resources held by this array.
 After <code>free</code> is called, calling
 method other than <code>free</code> will throw <code>SQLException</code> (calling <code>free</code>
 repeatedly will do nothing).
 @throws SQLException
 */
- (void)free;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlArray)

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlArray)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaSqlArray_INCLUDE_ALL")
