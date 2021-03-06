﻿// OpenCV3_wrapper.cpp : Defines the exported functions for the DLL application.
//


#include "stdafx.h"
#include "OpenCV3_wrapper.h"


DECLDIR void get_gray_image(int rows, int cols, vector<float> &img_data)
{
	img_data.clear();

	Mat m = Mat(rows, cols, CV_32F).clone();

	float colour = 0.0f;

	for (int j = 0; j < m.rows; j++)
	{
		for (int i = 0; i < m.cols; i++)
		{
			m.at<float>(j, i) = colour;
			colour += 0.0001f;
		}
	}

	for (int j = 0; j < m.rows; j++)
		for (int i = 0; i < m.cols; i++)
			img_data.push_back(m.at<float>(j, i));
}
