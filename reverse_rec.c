#include<stdio.h>
#include<string.h>
/*
Name: R DEVANARAYANAN 
Date: 26 july 2023
Title: WAP to reverse the given string using recursive method
Sample I/O: Enter a string : Hello World
Sample O/P: Reverse string is : dlroW olleH
 */
void reverse_iterative(char str[],int ind,int len);
int main()
{
    char str[50];
    printf("Enter any string : ");
    scanf("%[^\n]", str);                     //to read the string from the user
    int len=strlen(str);                      //to find the length of the string 
    int ind=len/2;
    reverse_iterative(str,ind,len);              //the function calling
    printf("Reversed string is %s\n", str);      //to print the reverse order string
}
void reverse_iterative(char str[],int ind, int len)
{
    static int i=0;
    if(i<ind)
    {
	str[len]=str[i];
	str[i]=str[len-i-1];
	str[len-i-1]=str[len];                       //to change the reverse order of string
	i++;
	reverse_iterative(str,ind,len);              //the function calling mean recurser
    }
    str[len]='\0';                                   //to assign the null character from the lost indux
}
