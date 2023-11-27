#include<stdio.h>
/*
Name: R DEVANARAYANAN
Date: 06 june 2023
Title: WAP to print triangle pattern as shown below
Sample I/O: Enter the number: 4
Sample O/P: 1 2 3 4
            5   6
            7 8
            9
*/

int main ()
{
    int num,i,j,flag=1;
    printf("enter the number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)                //the loop  will run num rime
    {
	for(j=1;j<=num;j++)
	{
	    if(i==1||j==1||i+j==num+1) //to check the condition it will true print the pattern
	    {
	    printf("%d ",flag);        //to print the flag value
		flag++;               // falg is incremented
	    }
	    else
	    {
		printf("  ");           //to print the space
	    }
	}
	printf("\n");
    }




    return 0;
}

