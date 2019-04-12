#include <iostream>
#include <stdio.h>
#include "../include/config.h"
#include "../include/status.h"
#include <sys/stat.h>


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

  struct stat sb;

  if(stat(config.dataPath.c_str(), &sb) != 0 || !S_ISDIR(sb.st_mode)){
    char inst[256];
    strcpy(inst, "mkdir ");
    strcat(inst, config.dataPath.c_str());
    system(inst);
  }else{
    std::cout << "data directory exists" << std::endl;
  }
  return 0; 
}
