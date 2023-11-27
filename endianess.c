#include<stdlib.h>
#include<stdio.h>
/*
Name: R DEVANARAYANAN
Date: 14 aug 2023
Title: WAP to convert Little Endian data to Big Endian
Sample I/O: Enter the size: 2
            Enter any number in Hexadecimal: ABCD
Sample O/P: After conversion CDAB
 */
int main ()
{
    int byte,value;
    printf("Enter the size: ");      
    scanf("%d",&byte);                                  //to read the byte size from the user
    printf("Enter any number inHexadecimal: ");
    scanf("%X",&value);                                   //to read the hexa value from the user
    char *temp1,temp2;                                   //to initialize the character temporary pointer
    char *ptr = (char *) &value;                         //typecast the value to character type
    for(int i=0;i<(byte/2);i++)
    {
	temp1 = *(ptr+i);
	temp2 = *(ptr+byte-1-i);
	*(ptr+i) = temp2;
	*(ptr+byte-1-i) = temp1;                           //the swap operation
    } 
    printf("After conversion %X\n",value);            //to print the output value
    return 0;
}
