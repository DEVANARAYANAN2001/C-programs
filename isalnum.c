#include<stdio.h>
/*
Name: R DEVANARAYANAN
Date: 27 june 2023
Title: WAP to implement your own isalnum() function
Sample I/O: Enter the character: a
Sample O/P: The character 'a' is an alnum character.
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
	printf("Entered character is alnum character");    //to print the statement
    else
	printf("Entered character is not alnum character");
    return 0;
}
int my_isalnum(int ch)  
{
    if('A'<=ch && ch<='Z' || 'a'<=ch && ch<='z' || '0'<=ch && ch<='9')    //to check the character is alphabet number or no
	return 1;
}





