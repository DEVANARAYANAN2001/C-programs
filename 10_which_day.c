#include<stdio.h>
/*
Name: R DEVANARAYANAN 
Date: 13 june 2023
Title: WAP to find which day of the year
Sample I/O: Enter the value of 'n' : 9
            Choose First Day :
            1. Sunday
            2. Monday
            3. Tuesday
            4. Wednesday
            5. Thursday
            6. Friday
            7. Saturday
            Enter the option to set the first day : 3
Sample O/P: The day is Wednesday
*/

int main ()
{
    int n,first;
    printf("enter the value 'n': ");
    scanf("%d",&n);                    //read the n value from the user
    if(n>0 && n<=365)
    {
	printf("Choose First Day :\n");  //to print the given message
	printf("1.sunday\n");
	printf("2.monday\n");
	printf("3.tuesday\n");
	printf("4.wednesday\n");
	printf("5.thursday\n");
	printf("6.friday\n");
	printf("7.saturday\n");
	printf("enter the option to set the first day: ");
	scanf("%d",&first);       // read the first day from the user
	if(first>0 && first<=7)   //the first day will grater 0 and less than equal 7 its true go in
	{
	    switch (((n-1)+first)%7)   //to add the first and n+1 days and that answer will divided by 7
	    {
		case 1 :
		    printf("The day is Sunday");    //to print the given message
		    break;	
		case 2 :
		    printf("The day is Monday");  //to print the given message
		    break;
		case 3 :
		    printf("The day is Tuesday");
		    break;
		case 4 :
		    printf("The day is Wednesday");
		    break;
		case 5 :
		    printf("The day is Thursday");
		    break;
		case 6 :
		    printf("The day is Friday");
		    break;
		case 0 :
		    printf("The day is Saturday");
		    break;	
	    }
	}
	    else
	    {
		printf("Error: Invalid input, first day should be > 0 and <= 7"); //to print error message
	    }
	}
	else
	{
	    printf("Error: Invalid Input, n value should be > 0 and <= 365"); // to print error message
	}
	return 0;
    }
