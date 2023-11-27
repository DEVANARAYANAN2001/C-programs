#include<stdio.h>
#include<string.h>
/*
Name: R DEVANARAYANAN
Date: 25 july 2023
Title: WAP to implement atoi function
Sample I/O: test case 1: Enter a numeric string: -12345
            test case 2: Enter a numeric string: +12345

Sample O/P: test case 1: String to integer is 12345
            test case 2:String to integer is -12345
 */
int my_atoi(const char []);
int main()
{
    char str[20];
    printf("Enter a numeric string : ");
    scanf("%s", str);                                        //to read the string from the user
    printf("String to integer is %d\n", my_atoi(str));       //print the output sting and the function calling
}
int my_atoi(const char str[])
{
    int i,num=0,ret=0;
    int len=strlen(str);
    if (str[0] == 45 && str[1] == 43 || str[0] == 43 && str[1] == 45)  //the first character is non numeric to return 0
    {
	return 0;
    } 
    else if(str[0] == 43)                                             //to check the first character is positive or not
    {
	for(i=1;i<len;i++)
	{

	    if(str[i] >= 48 && str[i] <=57)                    //the character are numeric or not
	    {
		ret = str[i]-48;                              
		num=num*10+ret;                              //to convert ascii to normal number
	    }
	    else                                          //the character are not numeric to break the condition
	    {
		break;
	    }
	}
	return num;                                 //to return the output string
    }	

    else if(str[0] == 45)                //to check the first character negative or not 
    {

	for(i=1;i<len;i++)
	{

	    if(str[i] >= 48 && str[i] <=57)        // find the next character are numeric or not
	    {
		ret = str[i]-48;                    //to convert the ascii to normal number
		num=num*10+ret;
	    }
	    else                            //the character are not numeric to nreak the loop
	    {
		break;
	    }
	}
	num=num * -1;     
	return num;                             //to return the output string
    }        

    else if(str[0] >= 48 && str[0] <=57)       //to check the character are numeric or not
    {
	for(i=0;i<len;i++)
	{

	    if(str[i] >= 48 && str[i] <=57)
	    {
		ret = str[i]-48;                  //to convert ascii to normal number
		num=num*10+ret; 
	    }
	    else                            //the character are not numeric to break the loop 
	    {
		break;
	    }
	}
	return num;                //to return the output string
    }
    else
	return 0;
}
