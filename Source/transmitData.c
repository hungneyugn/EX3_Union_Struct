/*
*File: main.c
*Author: Nguyen Phi Hung
*Date: 11/03/2023
*Description: Define funtions which are declarated in header file
*/
#include<transmitData.h>

/*
*Function: transmit
*Description: save uid and data to struct frame and read data from data frame in union
*Input:
    uid: String uid of frame
    data: String data of frame
*Ouput: 
    Data frame include uid and data
*/
void transmit(char* uid, char* data) 
{
    /*Generate union nfc*/
    FrameNfc nfc;  
    /*Save data frame from nfc*/
    char result[12];            
    strcpy(nfc.frame.uid, uid);      
    strcpy(nfc.frame.data, data);    
    strcpy(result, nfc.data_frame);  
    puts(result);                  
}