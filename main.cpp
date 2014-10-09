#include <iostream>  
#include <vector>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp>  

using namespace std;
using namespace cv;

int main()
{
	// 读入一张图片（游戏原画）  
	Mat src = imread("e:/pp.jpg");
	vector<int> compression_params;
	compression_params.push_back(95);
	int i, j;
	int cPointR, cPointG, cPointB, cPoint;//currentPoint;  
	for (i = 1; i<src.rows; i++)
	for (j = 1; j<src.cols; j++)
	{
		cPointB = src.at<Vec3b>(i, j)[0];
		cPointG = src.at<Vec3b>(i, j)[1];
		cPointR = src.at<Vec3b>(i, j)[2];
		//if (cPointB>100 & cPointR<100 & cPointG<100)
		{
			src.at<Vec3b>(i, j)[0] = 0;
			src.at<Vec3b>(i, j)[1] = 0;
			src.at<Vec3b>(i, j)[2] = 0;
		}

	}
	imwrite("e:/qq.jpg", src, compression_params);

	return 0;
}