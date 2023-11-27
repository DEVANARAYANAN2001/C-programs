#include<stdio.h>
#include<stdlib.h>
/*
Name: R DEVANARAYANAN
Date: 10 aug 2023
Title: WAP to define a macro swap (t, x, y) that swaps 2 arguments of type t
Sample I/O: 1. Int
            2. char
            3. short
            4. float
            5. double
            6. string
Enter you choice : 1
Enter the num1 : 10
Enter the num2 : 20
Sample O/P: After Swapping :
num1 : 20
num2 : 10
 */
#define SWAP(type,x,y) \
{                      \
    type temp=x;       \
    x=y;               \
    y=temp;            \
}                               
int main ()
{
    int x;
    printf("1.int\n");
    printf("2.char\n");
    printf("3.float\n");
    printf("4.double\n");
    printf("5.short\n");
    printf("6.string\n");
    printf("Enter you choice :");
    scanf("%d",&x);
    switch(x)
    {
	case 1:
	    {
		int num1,num2;
		printf("Enter the num1 : ");
		scanf("%d",&num1);                      //read the integer value from user
		printf("Enter the num2 : ");
		scanf("%d",&num2);
		SWAP(int,num1,num2);                //to swap the integer value help of macros
		printf("After Swapping :\n");
		printf("num1 : %d\n",num1);            //to print the swaped output value
		printf("num1 : %d\n",num2);
	    }
	    break;
	case 2:
	    {
		char ch1,ch2; 
		printf("Enter the character1 : ");
		scanf(" %c",&ch1);
		printf("Enter the character2 : ");
		scanf(" %c",&ch2);                           //read the character value from the user 
		SWAP(char,ch1,ch2);                     //to swap the character help of macros
		printf("After Swapping :\n");
		printf("num1 : %c\n",ch1);
		printf("num1 : %c\n",ch2);                      //to print the swaped output
	    }
	    break;
	case 3:
	    {
		float f1,f2; 
		printf("Enter the float value 1 : ");
		scanf(" %f",&f1);
		printf("Enter the float value 2 : ");
		scanf(" %f",&f2);                        //to read the flat value from the user
		SWAP(float,f1,f2);                         //to swap the float with the help of macros
		printf("After Swapping :\n");
		printf("num1 : %g\n",f1);
		printf("num1 : %g\n",f2);            //to print the swaped output
	    }
	    break;
	case 4:
	    {
		double d1,d2;
		printf("Enter the value1 : ");
		scanf(" %lg",&d1);
		printf("Enter the value2 : ");
		scanf(" %lg",&d2);                    //read the double vlue from the user
		SWAP(double,d1,d2);                   //swap the folat value help of macros
		printf("After Swapping :\n");
		printf("num1 : %lg\n",d1);
		printf("num1 : %lg\n",d2);           //to print the swped output
	    }
	    break;
	case 5:
	    {
		short int sh1,sh2;
		printf("Enter the num1 : ");
		scanf(" %hd",&sh1);
		printf("Enter the num2 : ");
		scanf(" %hd",&sh2);                   //to read the short value from the user
		SWAP(short int,sh1,sh2);               //swap the short value help of macros
		printf("After Swapping :\n");
		printf("num1 : %hd\n",sh1);
		printf("num1 : %hd\n",sh2);               //to print the swpaed short output
	    }
	    break;
	case 6:
	    { char *str1=malloc(20);
		char *str2=malloc(20);                       //the memory will allocated by dynamically
		printf("Enter the character1 : ");
		scanf(" %[^\n]",str1);
		printf("Enter the character2 : ");
		scanf(" %[^\n]",str2);                      //to raed the string from the user
		SWAP(char*,str1,str2);          //to swap the two strings with the help of macros
		printf("After Swapping :\n");
		printf("num1 : %s\n",str1);
		printf("num1 : %s\n",str2);             //to print the swaped output strings
	    }
	    break;
    }
    return 0;
}
