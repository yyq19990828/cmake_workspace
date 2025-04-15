#include <opencv2/opencv.hpp>
#include <iostream>

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <image_path>" << std::endl;
        return -1;
    }
    std::cout << "OpenCV version: " << CV_VERSION << std::endl;
    cv::Mat img = cv::imread(argv[1]);
    if (img.empty()) {
        std::cerr << "Failed to load image!" << std::endl;
        return -1;
    }
    cv::imshow("Image", img);
    cv::waitKey(0);
    return 0;
}