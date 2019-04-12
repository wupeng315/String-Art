#include <iostream>
#include <Eigen/Dense>
#include <opencv2/opencv.hpp>
#include "../include/config.h"
#include "../include/status.h"

using Eigen::MatrixXd;
using cv::Mat;

int main(int argc, char *argv[])
{
  Config config;
  std::string filePath = "";
  if (argc > 1){
      filePath = argv[1];
  }
  STATUS parse_status = config.parseFile(filePath);
  if(parse_status == STATUS::PARSE_DEFAULT){
    std::cout << "use default configuration" << std::endl;
  }else if(parse_status == STATUS::PARSE_FILE_OPEN_ERROR){
    std::cout << "configuration file open error" << std::endl;
    return -1;
  }else if(parse_status == STATUS::PARSE_FORMAT_ERROR){
    std::cout << "configuration file format error" << std::endl;
    return -1;
  }else{
    std::cout << "configuration parse succeed" << std::endl;
  }
  config.printInfo();

  
  return 0;
}
