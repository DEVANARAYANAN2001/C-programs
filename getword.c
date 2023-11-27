#include<stdio.h>
/*
Name: R DEVANARAYANAN
Date: 15 july 2023
Title: WAP to implement getword function
Sample I/O: Welcome to Emertxe
Sample O/P: You entered Welcome and the length is 7
 */
int getword(char str[]);
int main()
{
    int len = 0;
    char str[100];
    printf("Enter the string : ");
    scanf(" %[^\n]", str);                                        //to raed the string from the user help of selective scanf
    len = getword(str);                                          //the function calling
    printf("You entered %s and the length is %d\n", str, len);
    return 0;
}
int getword(char arr[])
{
    int count=0,i=0;                                               //to initialize the count and i variable
    for(i=0;arr[i] != '\0';i++)                                   //the loop will run at the null character
    {
	if(arr[i] == ' ')                                          //to find the space cahracter after swap the to null 
	{
	    arr[i]='\0';
	    break;
	}
	count++;                                           //the character is not space the count will be incraesed
    }
    return count;                                           //to return the count value to the main getword function
}


