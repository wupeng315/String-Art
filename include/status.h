#ifndef STATUS_H
#define STATUS_H

enum class STATUS
{
    /*Parse config file*/
    PARSE_DEFAULT,
    PARSE_SUCCESS,
    PARSE_FILE_OPEN_ERROR,
    PARSE_FORMAT_ERROR,

    /*handle input image*/
    IMAGE_FILE_OPEN_ERROR,
    IMAGE_PROCESS_SUCCESS
};

#endif
