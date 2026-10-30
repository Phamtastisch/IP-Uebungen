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

#define DATA_ROOT_PATH getenv("ImagingData")
#define INPUT_IMAGE_LOCKS "/images/misc/Locks.jpg"
#define INPUT_IMAGE_DOCKS "/images/misc/Docks.jpg"
 //#define VIDEO_FILE "/videos/Pocketcube.mp4"

 /* Include files */
#include <iostream>
#include <string>
#include <opencv2/opencv.hpp>



 /* Namespaces */
using namespace cv;
using namespace std;






/* Main function */
int main(void) {

	string inputImagePath_LOCKS = string(DATA_ROOT_PATH).append(INPUT_IMAGE_LOCKS);
	string inputImagePath_DOCKS = string(DATA_ROOT_PATH).append(INPUT_IMAGE_DOCKS);

	Mat image_Locks = imread(inputImagePath_LOCKS);
	Mat image_Docks = imread(inputImagePath_DOCKS);

	/*
	Beobachtung: Erstmal wird ein leeres Fenster erstellt und danach werden die Bilder im Fenster geladen und kein neues erstellt.
	
	*/

	namedWindow("Image");
	waitKey(0);
	imshow("Image", image_Locks);
	waitKey(0);
	imshow("Image", image_Docks);
	waitKey(0);
	return 0;
}

