// OpenCV3_wrapper.cpp : Defines the exported functions for the DLL application.
//


#include "stdafx.h"
#include "OpenCV3_wrapper.h"


DECLDIR void get_gray_mat(int rows, int cols, Mat &mat)
{
	mat = Mat(rows, cols, CV_32F).clone();

	float colour = 0.0f;

	for (int j = 0; j < mat.rows; j++)
	{
		for (int i = 0; i < mat.cols; i++)
		{
			mat.at<float>(j, i) = colour;
			colour += 0.01f;
		}
	}
}