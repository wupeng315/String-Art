#include <iostream>
#include "../include/config.h"

Config::Config()
{
    invertInput = true;
    invertOutput = true;
    threadThickness = 0.15;
    frameDiameter = 614.4;
    superSamplingWindowWidth = 8;
    numPins = 256;
    importanceMapPath = "";
    dataPath = "./data";
}

void Config::printInfo()
{
    std::cout << "InvertInput: " << invertInput << std::endl;
    std::cout << "InvertOutput: "  << invertOutput << std::endl;
    std::cout << "ThreadThickness: " << threadThickness << std::endl;
    std::cout << "FrameDiameter: " << frameDiameter << std::endl;
    std::cout << "SuperSamplingWindowWidth: " << superSamplingWindowWidth << std::endl;
    std::cout << "NumPins: " << numPins << std::endl;
    std::cout << "ImportanceMapPath: " << importanceMapPath << std::endl;
    std::cout << "DataPath: " << dataPath << std::endl;
}

STATUS Config::parseFile(std::string filePath)
{
    if(filePath == "")
        return STATUS::PARSE_DEFAULT;
    return STATUS::PARSE_SUCCESS;
}