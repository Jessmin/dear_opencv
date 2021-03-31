#include<opencv2/opencv.hpp>
#include<iostream>

using namespace std;
using namespace cv;
int main(){
    cout<< "hello opencv"<< endl;
    Mat src;
    src = imread("/home/zhaohoj/Pictures/test.png");
    if (!src.data) {
		cout << "could not load image!";
		return -1;
	}
    imshow("image",src);
    waitKey(0);
    return 0;
}