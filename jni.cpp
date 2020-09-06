#include <iostream>
#include "C:\Users\Atalay Korkut\source\repos\Dll1\Dll1\jni1.h"

using namespace std;
JNIEXPORT void JNICALL
Java_jnidemojava_JniDemoJava_hello(JNIEnv* env, jobject obj)
{
	cout << "Hello World" << endl;
	return;
}




