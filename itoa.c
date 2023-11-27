#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*
Name: R DEAVANARAYANAN 
Date: 26 july 2023
Title: WAP to implement itoa function
Sample I/O: Enter the number : 1234
Sample O/P: Integer to string is 1234
 */
void itoa(int, char str[]);
int main()
{
    int num;
    char str[100]='0';                             //to create the character array
    printf("Enter the number:");
    scanf("%d", &num);                             //to read the num value from the user
    itoa(num, str);                                //the function calling
    printf("Integer to string is %s", str);        //to print the string of teh given integer number
}
void itoa(int num,char str[])
{
    int var,var1,var2,var3,var4=0,i=0,j=0;
    if(num > 0 )                                       //to check the number are grater than zero or not if its grater the below operation will performed
    {
	while(num != 0)                                //if the number are not equal to zero the will condition are performed
	{
	    var=num%10;                               //the number are divided by 10 and the remaining value will store the variable var
	    num=num/10;                              //the number are divided by 10 and the quasient will store the variable num
	    str[i]=var+48;                            //to change the number into string
	    i++;
	}
	int len=strlen(str);                       //to find the length of the string
	var1=len/2;
	int temp;
	for(int k=0;k<var1;k++)
	{
	    temp=str[k];
	    str[k]=str[len-k-1];
	    str[len-k-1]=temp;                      //to perform the swap operation 
	}
	str[len]='\0';                              //to defind the lost one is null character
    }
    else if(num < 0 )                             //to check the number are less than zero or not 
    {
	num=num*-1;                               //to change the number negative into positive
	while(num != 0)
	{
	    var2= num % 10;
	    num= num / 10;
	    str[j]= var2 + 48;                       //to change the number into strings
	    j++;
	}
	int len=strlen(str);
	var3=len/2;
	int temp;
	for(int k=0;k<var3;k++)
	{
	    temp=str[k];
	    str[k]=str[len-k-1];
	    str[len-k-1]=temp;                    //to perform the swap operation
	}
	str[len]='\0';
	char str1[len];
	strcpy(str1,str);                      //to create the duplicate strings
	for(int m=0;m<len;m++)
	{
	    str[var4+1]=str1[m];                 //to swap to one character forward
	    var4++;
	}         

	str[0]='-';                  //to defind the - to zero th string value
    }
    else
	str[0]='0';                  //othrwise the output is zero

}
