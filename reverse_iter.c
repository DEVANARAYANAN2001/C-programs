#include<stdio.h>
#include<string.h>
/*
Name: R DEVANARAYANAN
Date: 25 july 2023
Title: WAP to reverse the given string using iterative method
Sample I/O: Enter a string : Hello World
Sample O/P: Reverse string is : dlroW olleH
 */

void reverse_iterative(char str[]);
int main()
{
    char str[30];
    printf("Enter any string : ");
    scanf("%[^\n]", str);                       //to read the string from teh user 
    reverse_iterative(str);                     //teh function call
    printf("Reversed string is %s\n", str);    //to print the output of the reverse string
}
void reverse_iterative(char str[])
{
    int len=strlen(str);                   //to find the 
    int var=len/2;                        
    for(int i=0;i<var;i++)         
    {
	str[len]=str[i];
	str[i]=str[len-i-1];
	str[len-i-1]=str[len];          //swap the string to reverse order
    }
    str[len]='\0';                     //to assign the lost character to the null character
}
