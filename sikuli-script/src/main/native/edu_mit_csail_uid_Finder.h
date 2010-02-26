/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class edu_mit_csail_uid_Finder */

#ifndef _Included_edu_mit_csail_uid_Finder
#define _Included_edu_mit_csail_uid_Finder
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     edu_mit_csail_uid_Finder
 * Method:    createFinder
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_edu_mit_csail_uid_Finder_createFinder
  (JNIEnv *, jobject, jstring);

/*
 * Class:     edu_mit_csail_uid_Finder
 * Method:    find
 * Signature: (JLjava/lang/String;D)V
 */
JNIEXPORT void JNICALL Java_edu_mit_csail_uid_Finder_find
  (JNIEnv *, jobject, jlong, jstring, jdouble);

/*
 * Class:     edu_mit_csail_uid_Finder
 * Method:    hasNext
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_edu_mit_csail_uid_Finder_hasNext
  (JNIEnv *, jobject, jlong);

/*
 * Class:     edu_mit_csail_uid_Finder
 * Method:    next
 * Signature: (J)Ledu/mit/csail/uid/Match;
 */
JNIEXPORT jobject JNICALL Java_edu_mit_csail_uid_Finder_next
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif