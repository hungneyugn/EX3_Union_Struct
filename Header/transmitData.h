/*
*File: main.c
*Author: Nguyen Phi Hung
*Date: 11/03/2023
*Description: File header for transmitting frame data
*/
#ifndef __TRANSMITDATA_H
#define __TRANSMITDATA_H

#include<stdio.h>
#include<string.h>

/* union for data frame*/
typedef union 
{
    struct 
    {
        char uid[4];
        char data[8];
    } frame;
    char data_frame[13];
}FrameNfc;
/*function to combine uid and data to a frame data*/
void transmit(char* uid, char* data);
#endif