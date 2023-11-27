#include<stdio.h>
/*
Name: R DEVANARAYANAN 
Date: 27 june 2023
Title: WAP to implement your own islower() function
Sample I/O: Enter the character: a
Sample O/P: Entered character is lower case alphabet
 */
int my_isalnum(int);                                    //prototype
int main() 
{
    char ch;                                            //initialization
    int ret;
    printf("Enter the character: ");
    scanf("%c", &ch);                                  //to get the character from the user
    ret=my_isalnum(ch);                               //function calling and the return will store the ret variable
    if(ret==1)                                        //the ret value will equal to 1 the given statement will print
	printf("Entered character is lower case alphabet\n");
    else
	printf("Entered character is not lower case alphabet\n");
    return 0;
}
int my_isalnum(int ch)
{
    if('a'<=ch && ch<='z')              //to check the given character is lower case or not 
	return 1;
}





