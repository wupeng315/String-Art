#ifndef CONFIG_H
#define CONFIG_H

#include <string.h>
#include "status.h"


class Config
{
public:
    bool invertInput;
    bool invertOutput;
    
    float threadThickness;
    float frameDiameter;

    unsigned int superSamplingWindowWidth;
    unsigned int numPins;

    std::string importanceMapPath;
    std::string dataPath;

    Config();
    ~Config(){};

    void printInfo();
    STATUS parseFile(std::string filePath);
};

#endif
