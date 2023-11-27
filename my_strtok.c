#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
/*
Name: R DEVANARAYANAN 
Date: 20 aug 2023
Title: WAP to implement the strtok function
Sample I/P: Enter string1 : Bangalore;;::---Chennai:;Kolkata:;Delhi:-:Mumbai
            Enter strings2 : ;./-;
Sample O/P: Tokens :
            Bangalore
            Chennai
            Kolkata
            Delhi
            Mumbai
*/
char *my_strtok(char str[], const char delim[]);                   //function prototype
int main()
{
    char str[50], delim[50];                                       

    printf("Enter the string  : ");                                
    scanf("%s", str);
    __fpurge(stdout);
    printf("Enter the delimeter : ");
    scanf("\n%s", delim);
    __fpurge(stdout);
    char *token = my_strtok(str, delim);                           //calling the function 
    printf("Tokens :\n");
    while (token!=NULL)                                            //iterates till token not equal to NULL      
    {
	if(*token!='\0')                                               //if the value is not equal to NULL then prints
	    printf("%s\n", token);
	token = my_strtok(NULL, delim);                                //calling the function and passing NULL
    }
    return 0;
}
char *my_strtok(char str[], const char delim[])                    //function definition
{
    static int i=0;                                              
    static char *ptr;
    int j;
    if(str!=NULL)                                                  //if str not equal to NULL,then assign str to ptr
    {
	ptr=str;
    }
    if(ptr[i]=='\0')                                             //if condition true then return NULL
	return NULL;
	int k=i;                                                     //i is for used for returning so that it points to starting of word
	for(;ptr[i]!='\0';i++)                                     //iterating till ptr[ind]!='\0'
	{
	    for(j=0;delim[j]!='\0';j++)                                
	    {
		if(ptr[i]==delim[j])
		{
		    ptr[i]='\0';                                         //if the above condition is true then make ptr[ind as '\0'
		    i++;                                                 
		    return ptr+k;                                          //returning ptr+i
		}
	    }
	}
	return (ptr+k);
}
