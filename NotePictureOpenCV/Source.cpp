//Code demo Group 05

//Bao g?m th? vi?n
#include<opencv2/opencv.hpp>
#include<iostream>
//Namespace vô hi?u hóa vi?c s? d?ng cv::function();
using namespace std;
using namespace cv;
int main() {


    Mat img = imread("C:\\Users\\84395\\Music\\MEmu Music\\NotePictureOpenCV\\ptit.jpg");

    if (img.empty())
    {
        cout << "Khong the doc duoc anh" << endl;
    }
    // Ve mot duong tren anh
    Mat Anhduocve = img.clone();
    Point pointA(200, 80);
    Point pointB(450, 80);
    line(Anhduocve, pointA, pointB, Scalar(255, 255, 0), 3, 8, 0);
    imshow("Anh sau khi chinh sua", Anhduocve);
    waitKey();
}

