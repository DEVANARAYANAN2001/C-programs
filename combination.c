#include<stdio.h>
/*
Name: R DEVANARAYANAN 
Date: 26/08/2023
Title: WAP to print all possible combinations of given string.
Sample I/O:Enter a string: abc
Sample O/P:All possible combinations of given string :abc
           acb
           bca
           bac
           cab
           cba
 */
void combination(char [],int ,int );                                     //function prototypes
void swap(char[],int,int);
int my_strlen(char []);
int main()
{
    char str[100];
    int len;
    int res;
    printf("Enter a string: ");
    scanf("%100[^\n]",str);                                          //reading the string help of selective scanf
    len = my_strlen(str);                                              //finding the string length
    combination(str,0,len-1);                                          //function call
    return 0;
}
void combination(char str[],int var ,int len)                            //function definition
{
    int i,j;
    for(i = 0; i <= len; i++)                                            // checking for duplicates
    {
	for(j = 0; j <=len; j++)
	{
	    if((str[i] == str[j]) && (j != i))
	    {
		printf("Error :please enter distinct characters");   //print this message and return if duplicate is present
		return;
	    }
	}
    }
    if(var==0)
    {
	printf("All possible combinations of given string :");
    }
    if(len==var)
    {
	printf("%s\n",str);
    }
    else
    {
	for(i=var;i<=len;i++)
	{
	    swap(str,var,i);                                                       //this function call for generation of combination
	    combination(str,var+1,len);
	    swap(str,var,i);                                                       //for backtracking
	}
    }
}
void swap(char str[],int var,int len)                                      //swapping 
{
    char temp=str[var];
    str[var]=str[len];
    str[len]=temp;
}
int my_strlen(char str[])                                                   //function for finding string length
{
    int count=0,i=0;
    while(str[i]!='\0')
    {
	count++;
	i++;
    }
    return count;
}

