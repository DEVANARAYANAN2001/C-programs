#include<stdio.h>
/*
Name: R DEVANARAYANAN
Date: 25 july 2023
Title: WAP to replace each string of one or more blanks by a single blank
Sample I/O: Enter the string with more spaces in between two words
            Pointers     are               sharp     knives.
Sample O/P: Pointers are sharp knives.
 */
void replace_blank(char []);
int main()
{
    char str[50];
    printf("Enter the string with more spaces in between two words\n");
    scanf("%[^\n]", str);                                                     //to raed the string from the user
    replace_blank(str);
    printf("%s\n", str);                                                     //to print the removed blank space string 
}
void replace_blank(char str[])
{
    int i=0, j=0;
    for(i=0;str[i] != '\0';i++)                                            //the loop will run upto null character
    {
	if((str[i] == 32 || str[i] == 9) && (str[i+1] == 32 || str[i+1] == 9)) //to check the character are space or not
	{
	    for(j=i;str[j] != '\0';j++)
	    {
		str[j]=str[j+1];                                              //to swap the character
	    }
	    i--;
	}
    }
}

