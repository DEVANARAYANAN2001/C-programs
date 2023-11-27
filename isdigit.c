#include<stdio.h>
/*
Name: R DEVANARAYANAN
Date: 27 bjune 2023 
Title: WAP to implement your own isxdigit() function
Sample I/O: Enter the character: a
Sample O/P: Entered character is an hexadecimal digit
 */
int my_isalnum(int);                                                   //prototype
int main()
{
    char ch;                                                          //initia;ization 
    int ret;
    printf("Enter the character:");
    scanf("%c", &ch);                                                  //to read the character from the user
    ret=my_isalnum(ch);                                                //function calling and the result will store the ret variable
    if(ret==1)                                                          //the ret value will be equal to 1 the condition true so print the statement
	printf("Entered character is an hexadecimal digit\n");
    else
	printf("Entered character is not an hexadecimal digit\n");
    return 0;
}
int my_isalnum(int ch)                                                       
{
    if('A'<=ch && ch<='F' || 'a'<=ch && ch<='f' || '0'<=ch && ch<='9')      //the given character will to check that are hexadecimal or not
	return 1;                                                           //teh character will hexadecimal return 1 to the function
}





