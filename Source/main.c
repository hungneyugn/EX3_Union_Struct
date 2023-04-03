/*
*File: main.c
*Author: Nguyen Phi Hung
*Date: 11/03/2023
*Description: This file demonstrate using union to transmit frame data
*/
#include<transmitData.h>

int main()
{
    printf("Data_frame: ");
    transmit((char*)"1001", (char*)"10110111");
    return 0;
}