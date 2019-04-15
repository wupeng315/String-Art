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
    IMAGE_PROCESS_SUCCESS,

    /*handle matrix generation*/
    INVALID_PIN_NUMBER,
    PIN_LOG_FILE_OPEN_ERROR,
    PIN_MATRIX_GENERATION_SUCCESS,
    EDGE_MATRIX_GENERATION_SUCCESS,
    ALL_MATRIX_GENERATION_SUCCESS
};

#endif
