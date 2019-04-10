#include <iostream>
#include <Eigen/Dense>
#include <opencv2/opencv.hpp>
#include "../include/config.h"
#include "../include/status.h"

using Eigen::MatrixXd;
using cv::Mat;

int main()
{
  Config config;
  config.invertInput = true;
  config.numPins = 128;
  config.printInfo();
  STATUS parse_status = config.parseFile("");
  if(parse_status == STATUS::PARSE_DEFAULT){
    std::cout<< "use default configuration" << std::endl;
  }
  MatrixXd m(2,2);
  m(0,0) = 3;
  m(1,0) = 2.5;
  m(0,1) = -1;
  m(1,1) = m(1,0) + m(0,1);
  std::cout << m << std::endl;
}
