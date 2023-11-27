#include<stdio.h>
/*
Name: R DEVANARAYANAN 
Date: 28 july 2023 
Title: WAP to check given string is Pangram or not
Sample I/O: Enter the string: The quick brown fox jumps over the lazy dog
Sample O/P: The Entered String is a Pangram String
 */
int pangram(char []);
int main()
{
    char str[100];                                 //to crate the character array 
    printf("Enter the string: ");
    scanf("%[^\n]",str);                             //to read the striings upto new line
    int ret=pangram(str);                            //the function calling
    if(ret == 1)
	printf("The Entered String is a Pangram String");           
    else
	printf("The Entered String is not a Pangram String");
}
int pangram(char str[])
{
    int arr[26]={0};                                    //to create the integer array initialy fill with zeros
    for(int i=0;str[i]!='\0';i++)                       //the loop will run upto null character
    {
	if(str[i] >=65 && str[i] <= 90)        //the character are upper case below operation will be performed
	{
	    int var=str[i]-65;               //to change the character to integer value
	    arr[var]=1;                      //to fill one the respect array indux of var number
	}
	else if(str[i] >=97 && str[i] <= 122)      //to same operation perfrom to lower case caharacter
	{
	    int var=str[i]-97;
	    arr[var]=1;
	}
    }
    int count=0;
    for(int i=0;i<26;i++)            
    {
	if(arr[i]==1)               //to check the array filled will 1 or not 
	{
	    count++;            //if filled by one the count value will be increased
	}
	else                   
	{
	    break;            //there are not present the 1 the loop will be break 
	    return 0;
	}
    }
    if(count==26)            //the count will equal to 26 and return 1 ontherwise not return
	return 1;
}
