#include<stdio.h>
#include<stdlib.h>
/*
Name: R DEVANARAYANAN 
Date: 16 aug 2023
Title: Provide a menu to manipulate or display the value of variable of type t
Sample I/O:  

Menu :
1. Add element
2. Remove element
3. Display element
4. Exit from the program

Choice ---> 1

Enter the type you have to insert:
1. int
2. char
3. float
4. double
Choice ---> 2

Enter the char : k

1. Add element
2. Remove element
3. Display element
4. Exit from the program

Choice ---> 3
-------------------------
0 -> k
-------------------------
1. Add element
2. Remove element
3. Display element
4. Exit from the program

Choice ---> 1

Enter the type you have to insert:
1. int
2. char
3. float
4. double

Choice ---> 1

Enter the int : 10

1. Add element
2. Remove element
3. Display element
4. Exit from the program

Choice ---> 3
------------------------
0 -> k (char)
1 -> 10 (int)
------------------------
1. Add element
2. Remove element
3. Display element
4. Exit from the program

Choice ---> 2
0 -> k
1 -> 10

Enter the index value to be deleted : 0
index 0 successfully deleted.

1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 4
    */
int main ()
{
    int flag=0,char1_flag=0,char2_flag=0,short_flag=0,float_flag=0,int_flag=0,double_flag=0;
    void *ptr=malloc(8);                //memory allocated by dynamically
    int menu;
    while(flag == 0) 
    {
	printf("Menu :\n");
	printf("1.Add element\n");
	printf("2.Remove element\n");
	printf("3.Dispaly element\n");
	printf("4.Exit from the program\n");        //to print the menu 
	printf("Choice ---> ");
	scanf("%d",&menu);                         //to read the menu option from the user
	switch (menu)
	{
	    case 1: 
		{
		    printf("Enter the type you have to insert:\n");
		    printf("1.int\n");
		    printf("2.char\n");
		    printf("3.short\n");
		    printf("4.float\n");
		    printf("5.double\n");
		    int menu1;
		    printf("Choice ---> ");
		    scanf("%d",&menu1);                  //to read the insert option from the user
		    switch (menu1)
		    {
			case 1:
			    {
				int num1;
				if(int_flag == 0 && float_flag == 0 && double_flag == 0)    //the int and float and double flag is 0 below operation will be performed
				{
				    printf("Enter the value : ");
				    scanf("%d",&num1);                                 //to read the int value from the user
				    *(int *) (ptr+4) = num1;			    //to insert the integer number
				    int_flag=1;
				}
				else 
				{
				    printf("Memory is full");        //the flag value not equal to zero this error msg dispalyed

				}
				flag=0;
			    }
			    break;
			case 2:
			    {
				char ch1,ch2;
				if(char1_flag == 0 && double_flag == 0)
				{
				    printf("Enter the character : ");
				    scanf(" %c",&ch1);                            //to read the character from the user
				    *(char *) ptr = ch1;                           //to insert the character value
				    char1_flag=1;
				}
				else if(char2_flag == 0 && double_flag == 0)
				{
				    printf("Enter the character : ");
				    scanf(" %c",&ch2);                            //to read the cahracter from the user
				    *(char *) (ptr+1) = ch2;                       //to insert the character vlaue 
				    char2_flag=1;
				}
				else
				{
				    printf("Memory is full");
				}
				flag=0;
			    }
			    break;
			case 3:
			    {
				short int num2;
				if(short_flag == 0 && double_flag == 0)
				{
				    printf("Enter the value : ");
				    scanf("%hd",&num2);                                   //to read the short value from the user
				    *(short int *) (ptr+2) = num2;			     //to insert the short value
				    short_flag=1;
				}
				else 
				{
				    printf("Memory is full");
				}
				flag=0;
			    }
			    break;
			case 4:
			    {
				float num3;
				if(int_flag == 0 && float_flag == 0 && double_flag == 0)
				{
				    printf("Enter the value : ");
				    scanf("%f",&num3);                      //to read the float value from the user
				    *(float *) (ptr+4) = num3;			  //to insert the float value
				    float_flag=1;
				}
				else 
				{
				    printf("Memory is full");
				}
				flag=0;
			    }
			    break;
			case 5:
			    {
				double num4;
				if(char1_flag == 0 && char2_flag == 0 && short_flag == 0 && int_flag == 0 && float_flag == 0 && double_flag == 0)
				{
				    printf("Enter the value : ");
				    scanf("%le",&num4);                                //to read the double value from the user
				    *(double *) (ptr+4) = num4;			     //to insert the double value
				    double_flag=1;
				}
				else 
				{
				    printf("Memory is full");
				}
				flag=0;
			    }
			    break;
			default:
			    {
				printf("Worng option");
			    }
			    flag=0;
			    break;
		    }
		}
		break;	
	    case 2:
		{
		    printf("--------------------------------\n");
		    if(char1_flag==1)
		    {
			printf("0 -> %c\n",*(char *)ptr);
		    }
		    if(char2_flag==1)
		    {
			printf("1 -> %d\n",*(char *)(ptr+1) );
		    }
		    if(short_flag==1)
		    {
			printf("2 -> %hd\n",*(short int *) (ptr+2) );			    
		    }
		    if(int_flag==1)
		    {
			printf("4 -> %d\n",*(int *) (ptr+4) );			    
		    }
		    if(float_flag==1)
		    {
			printf("4 -> %f\n",*(float *) (ptr+4) );			    
		    }
		    if(double_flag==1)
		    {
			printf("5 -> %f\n",*(double *) (ptr+4) );			    //to display the all vlaues
		    }
		    printf("--------------------------------\n");
		    int var;
		    printf("Enter the indux value to be deleted : ");
		    scanf("%d",&var);
		    if(var==0)
		    {
			char1_flag=0;                                       //to remove the character value
			double_flag=0;                                          //to remove the double value
			printf("indux %d successfully deleted",var);
		    }
		    if(var==1)
		    {
			char2_flag=0;                                       //to remove the character value
			printf("indux %d successfully deleted",var);
		    }
		    if(var==2)
		    {
			short_flag=0;                                                //to remove the short value
			printf("indux %d successfully deleted",var);
		    }
		    if(var==4)
		    {
			int_flag=0;                                         //to remove the int and float value
			float_flag=0;
			printf("indux %d successfully deleted",var);
		    }
		}
		break;
	    case 3:
		{
		    printf("--------------------------------\n");
		    if(char1_flag==1)
		    {
			printf("0 -> %c (char)\n",*(char *)ptr);
		    }
		    if(char2_flag==1)
		    {
			printf("1 -> %d (char)\n",*(char *)(ptr+1) );
		    }
		    if(short_flag==1)
		    {
			printf("2 -> %hd (short)\n",*(short int *) (ptr+2) );			    
		    }
		    if(int_flag==1)
		    {
			printf("4 -> %d (int)\n",*(int *) (ptr+4) );			    
		    }
		    if(float_flag==1)
		    {
			printf("4 -> %f (float)\n",*(float *) (ptr+4) );			    
		    }
		    if(double_flag==1)
		    {
			printf("5 -> %f (double)\n",*(double *) (ptr+4) );			    //to display the all vlaues
		    }
		    else
			if(char1_flag == 0 && char2_flag == 0 && short_flag == 0 && int_flag == 0 && float_flag == 0 && double_flag == 0)
			{
			    printf("Nothing will be there\n");                  //not present any value print the error message
			}
		    printf("--------------------------------\n");
		}
		break;
	    case 4:
		{
		    flag=1;                               //exit the loop
		}
		break;
	}
    }
    return 0;
}
