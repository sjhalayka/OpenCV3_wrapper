#pragma once

#define DLL_EXPORT

#if defined DLL_EXPORT
#define DECLDIR __declspec(dllexport)
#else
#define DECLDIR __declspec(dllimport)
#endif

#include <vector>
using namespace std;

// Replace these three lines with the OpenCV 2.x include/lib
#include <opencv2/opencv.hpp>
using namespace cv;
#pragma comment(lib, "opencv_world331.lib")


DECLDIR void get_gray_image(int rows, int cols, vector<float> &img_data);
