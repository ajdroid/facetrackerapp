/*
 * nativeact.h
 *
 *  Created on: 24-May-2015
 *      Author: abhijat
 */

#ifndef NATIVEACT_H_
#define NATIVEACT_H_

#include <android_native_app_glue.h>


#include <errno.h>
#include <jni.h>
#include <sys/time.h>
#include <time.h>
#include <android/log.h>
#include <android/window.h>

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <queue>


#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/features2d/features2d.hpp>
#include <opencv2/objdetect/objdetect.hpp>



#define  LOG_TAG    "OCV:libnative_activity"
#define  LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG,__VA_ARGS__)
#define  LOGI(...)  __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)
#define  LOGW(...)  __android_log_print(ANDROID_LOG_WARN,LOG_TAG,__VA_ARGS__)
#define  LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)




#endif /* NATIVEACT_H_ */
