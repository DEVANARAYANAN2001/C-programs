#include<stdio.h>
/*
Name: R DEVANARAYANAN
Date: 28 june 2023
Title: WAP to implement your own ispunct() function
Sample I/O: Enter the character: $
Sample O/P: Entered character is punctuation character.
 */
int my_isalnum(int);                            //the protoytpe
int main()
{
    char ch;                                    //initialization 
    int ret;
    printf("Enter the character:");
    scanf("%c", &ch);                            //to get the input from the user
    ret=my_isalnum(ch);                          //function calling
    if(ret==1)                                   //to check the ret value if it 1 condition true go in the statement
	printf("Entered character is  punctuation character");    //to print the statement
    else
	printf("Entered character is not punctuation character");
    return 0;
}
int my_isalnum(int ch)  
{
    if(32<=ch && ch<=47 || 58<=ch && ch<=64 )    //to check the character is alphabet number or no
	return 1;
}





