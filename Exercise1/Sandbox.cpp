/*****************************************************************************************************
 * Lecture sample code.
 *****************************************************************************************************
 * Author: Marc Hensel, http://www.haw-hamburg.de/marc-hensel
 * Project: https://github.com/MarcOnTheMoon/imaging_learners/
 * Copyright: 2024, Marc Hensel
 * Version: 2024.10.09
 * License: CC BY-NC-SA 4.0, see https://creativecommons.org/licenses/by-nc-sa/4.0/deed.en
 *****************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
 /* Include files */
#include <iostream>
#include <string>
#include <opencv2/opencv.hpp>

//#define DATA_ROOT_PATH getenv("ImagingData")
//#define INPUT_IMAGE "/images/misc/Locks.jpg"
//#define VIDEO_FILE "/videos/Pocketcube.mp4"

 /* Namespaces */
using namespace cv;
using namespace std;

/* Main function */
int main(void) {

	//Mat image(200, 500, CV_8UC3, Scalar(0,0,255));

	Mat image = Mat::zeros(Size(600, 400), CV_8U);

	imshow("Image", image);



	/*
	string inputVideoPath = string(DATA_ROOT_PATH).append(VIDEO_FILE);
	// VideoCapture video(inputVideoPath);
	VideoCapture video(0); // camera

	//double fps = video.get(CAP_PROP_FPS);
	//int count = video.get(CAP_PROP_FRAME_COUNT);
	//int waitTimeMs = 1000 / fps;
	Mat frame;

	while (true) {
		video >> frame;
		imshow("Frame", frame);
		if (waitKey(1) > 0) {
			break;
		}
	}


	for (int i = 0; i < count;i++) {
		video >> frame;
		imshow("Frame", frame);
		if(waitKey(waitTimeMs)>0) {
			break;
		}
	}


	video.release();



	 Example : Open an image and display it

	string inputImagePath = string(DATA_ROOT_PATH).append(INPUT_IMAGE);
	Mat image = cv::imread(inputImagePath, IMREAD_GRAYSCALE);

	if(image.empty()) {
		cout << "Could not read the image" << endl;
		return 1;
	}

	cv::imshow("Image", image);
	*/


	waitKey(0);
	return 0;
}