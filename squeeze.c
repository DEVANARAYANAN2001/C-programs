#include<stdio.h> 
/*
Name: R DEVANARAYANAN 
Date: 25 july 2023
Title: Squeeze the character in s1 that matches any character in the string s2
Sample I/O: string1 : hai how are you
            string2 : aor
Sample O/P: hi hw ae yu
 */
void squeeze(char str1[], char str2[]);
int main()
{
    char str1[30]={0}, str2[30]={0};
    printf("Enter string1:");
    scanf(" %[^\n]", str1);                          //to read the first string from the user
    printf("Enter string2:");
    scanf(" %[^\n]", str2);                         //to raed teh second string from teh user
    squeeze(str1, str2);                             //the function calling
    printf("After squeeze s1 : %s\n", str1);        //to print the squeeze output

}
void squeeze(char str1[], char str2[])
{
    int i,j,k;
    for(i=0;str2[i] != '\0';i++)               //the loop run upto null character
    {
	for(j=0;str1[j] !='\0';j++)
	{
	    if(str2[i]==str1[j])                        //find the string1 and string2 character are equal or not
	    {
		for(k=j;str1[k] !='\0';k++)            //to swap the character to backword
		{
		    str1[k]=str1[k+1];               
		}
		j--;
	    }
	}
    }
}
