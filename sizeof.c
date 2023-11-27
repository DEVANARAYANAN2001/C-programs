#include<stdio.h>
#define SIZEOF(x) ((char*)(&x+1)-(char*)(&x))              //macro for find the size to the datatypes
/*
Name: R DEVANARAYANAN
Date: 08 aug 2023
Title: WAP to define a macro SIZEOF(x), without using sizeof operator
Sample I/P: Size of int : 
            Size of char : 
            Size of float : 
            Size of double : 
            Size of unsigned int : 
            Size of long int : 
Sample O/P: 4 bytes
            1 bytes
	    4 bytes
	    8 bytes
	    4 bytes
	    8 bytes
 */

int main ()
{
    int x;
    printf("size of int : %ld bytes\n",SIZEOF(x));               //to print the int datatype size
    char x1;
    printf("size of char : %ld bytes\n",SIZEOF(x1));              //to print char datatype size
    float x2;
    printf("size of float : %ld bytes\n",SIZEOF(x2));        //to print float datatype size
    double x3;
    printf("size of dounle : %ld bytes\n",SIZEOF(x3));       //to print double datatype size
    unsigned int x4;
    printf("size of unsigned int : %lu bytes\n",SIZEOF(x4));    //to print unsigned int size
    signed int x5;
    printf("size of signed int : %ld bytes\n",SIZEOF(x5));    //to print signed int size
    long int x6;
    printf("size of long int : %ld bytes\n",SIZEOF(x6));       //to print long int size 
    unsigned char x7;                                        
    printf("size of unsigned char : %lu bytes\n",SIZEOF(x7));   //to print unsigned char size
    signed char x8;
    printf("size of signed char : %ld bytes\n",SIZEOF(x8));      //to print signed char size
    return 0;
}

