#include<stdio.h>
/*
Name: R DEVANARAYANAN
Date: 08 june 2023
Title: WAP to generate AP, GP, HP series
Sample I/O: Enter the First Number 'A': 2
            Enter the Common Difference / Ratio 'R': 3
            Enter the number of terms 'N': 5
Sample O/P: AP = 2, 5, 8, 11, 14
            GP = 2, 6, 18, 54, 162
            HP = 0.500000, 0.200000, 0.125000, 0.090909, 0.071428
*/

int main ()
{
    int first,diff,num,var1,var2,var3,i,j,k;
    printf("Enthe the First Number 'A': ");
    scanf("%d",&first);                                //read the first number from user
    printf("Enter Common Difference / Ratio 'R: ");
    scanf("%d",&diff);                                //read the different number from user
    printf("Enter the Number of terms 'N': ");
    scanf("%d",&num);                                 //read the number of terms from the user
    if(num>0)                                         //the num value will grater than one condition true go in
    {
	var1=first;                                   //the first value will store variable var1
	printf("AP = %d",var1);
	for(i=1;i<num;i++)
	{
	    var1+=diff;                              //the var1 and different value will be add and that answer will store var1
	    printf(", %d",var1);
	}
	printf("\n");
	var2=first;                                 //the first value will store the variable var2
	printf("GP = %d",var2);
	for(j=1;j<num;j++)
	{
	    var2*=diff;                            //the var2 and diff value will multiplyed after store variable var2
	    printf(", %d",var2);
	}
	printf("\n");
	printf("HP = %f",(float)1/first);            //type casting will used and find float value
	var1=first;
	for(k=1;k<num;k++)
	{
	    var1+=diff;                              //the var1 and diff avlue will added and after the value will store var1
	    printf(", %f",(float)1/var1);            //there also type casting used and float value will printed
	}
	printf("\n");
    }
    else
    {
	printf("Invalid input\n");                  //the num vlaue less than one the error message will printed
    }
    return 0;
}

