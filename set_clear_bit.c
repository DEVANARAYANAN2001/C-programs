#include<stdio.h>
/*
Name: R DEVANARAYANAN
Date: 12 june 2023
Title: WAP to check N th bit is set or not, If yes, clear the M th bit
Sample I/O: Enter the number: 19
            Enter 'N': 1
            Enter 'M': 4
Sample O/P: Updated value of num is 3 
*/

int main ()
{
    int num,n,m,i;
    printf("Enter the number:");
    scanf("%d",&num);                   //read the number value from user 
    printf("Enter 'N': ");
    scanf("%d",&n);                     //read the N bit value form the user
    printf("Enter 'M': ");
    scanf("%d",&m);                     //read the M bit value from the user
    if(num&1<<n)                       //check the N th bit set or not
    {
	num=num&~(1<<m);              //clear the M th bit
	printf("Updated value of num is %d\n",num);  //print the updated value of num
    }
    else
    {
	printf("Updated value of num is %d\n",num); //print error message
    } 
    return 0;
}

