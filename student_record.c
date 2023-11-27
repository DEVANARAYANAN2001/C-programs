#include<stdio.h>
#include<stdlib.h>
/*
Name: R DEVANARAYANAN 
Date: 29/08/2023
Title: WAP to Implement the student record using array of structures
Sample I/O: Enter no.of students : 2
            Enter no.of subjects : 2
            Enter the name of subject 1 : Maths
            Enter the name of subject 2 : Science
            ----------Enter the student datails-------------
            Enter the student Roll no. : 1
            Enter the student 1 name : Nandhu
            Enter Maths mark : 99
            Enter Science mark : 91
            ----------Enter the student datails-------------
            Enter the student Roll no. : 2
            Enter the student 2 name : Bindhu
            Enter Maths mark : 88
            Enter Science mark : 78
            Sample O/P:---Display Menu----
            1. All student details
            2. Particular student details
            Enter your choice : 2

           ----Menu for Particular student----
           1. Name.
           2. Roll no.
           Enter you choice : 1
           Enter the name of the student : Nandhu
           Roll No.       Name           Maths         Science       Average       Grade
           1              Nandhu          99              91           95            A
           Do you want to continue to display(Y/y) : n
 */
int my_strcmp(char *,char *);                                   //the function prototype 
struct Student_record                                           //the structure definition
{
    int roll_no;
    char name[20];
    int *marks;
    float avg;
    char grade;
};

int main()
{
    int n=0,no_sub,i,j,k,ch1,ch2;                               
    int sum=0;
    printf("Enter no. of students : ");             
    scanf("%d",&n); 
    printf("Enter no. of subjects : ");
    scanf("%d",&no_sub);
    char *arr[no_sub];                                          
    char ch='y';
    struct Student_record Student[n];                                           //creat the array of structures
    for(i=0;i<no_sub;i++)
    { 
	printf("Enter the name of subject %d : ",i+1);          
        arr[i]=malloc(no_sub*sizeof(int));                                      //dynamic memory allocation
	scanf("%s",arr[i]);                                                     //read the subject names
	Student[i].marks=malloc(no_sub*sizeof(int));                            //dynamic memory allocation
    }
    printf("----------Enter the student details----------\n");
    for(j=0;j<n;j++)
    {
	printf("Enter the student Roll no.: ");
	scanf("%d",&Student[j].roll_no);                                        //read the student details
	printf("Enter the student %d name :  ",j+1);
	scanf(" %20[^\n]",Student[j].name);
	for(k=0;k<no_sub;k++)
	{
	    printf("Enter %s mark : ",arr[k]);
	    scanf("%d",&Student[j].marks[k]);                                   //read the student marks
	    sum+=Student[j].marks[k];
	}
	fflush(stdin);
	Student[j].avg=sum/no_sub;                                       
	sum=0;
	if(Student[j].avg>90 && Student[j].avg<=100)                            //grade based on the  average
	{
	    Student[j].grade='A';
	}
	else if(Student[j].avg>80 && Student[j].avg<=90)
	{
	    Student[j].grade='B';
	}
	else if(Student[j].avg>70 && Student[j].avg<=80)
	{
	    Student[j].grade='C';
	}
	else if(Student[j].avg>=60 && Student[j].avg<=70)
	{
	    Student[j].grade='D';
	}
	else if(Student[j].avg>=50 && Student[j].avg<=60)
	{
	    Student[j].grade='E';
	}
	else
	    Student[j].grade='F';
    }
    while(ch=='y' || ch=='Y') 
    {
	printf("---Display Menu---\n");                                                    //displaying the menu
	printf("1. All student details\n");
	printf("2. Particular student details\n");                                       
	printf("Enter your choice : ");
	scanf("%d",&ch1);
	int flag=0;
	switch(ch1)                                           
	{
	    case 1:                                                                         //the  user atr enter 1 then display the details
		printf("Roll No.   Name\t\t");                                              
		for(j=0;j<no_sub;j++)
		{
		    printf("%-10s\t",arr[j]);
		}
		printf("Average\t\t Grade\n");
		for(i=0;i<n;i++)
		{
		    printf("%-10d %-20s",Student[i].roll_no,Student[i].name);
		    for(j=0;j<no_sub;j++)
		    {
			printf("%-10d\t",Student[i].marks[j]);
		    }
		    printf("%-5.2f\t %c\n",Student[i].avg,Student[i].grade);
		}
		break;
	    case 2:
		printf("----Menu for Particular student----\n");                             //menu for particular student
		printf("1. Name.\n");
		printf("2. Roll no.\n");
		printf("Enter you choice : ");                                              
		scanf("%d",&ch2);
                    char st_name[20];
		    int st_roll;
		switch(ch2)
		{
		    case 1:                                                     
		    printf("Enter the name of the student : ");                   
		    scanf(" %[^\n]",st_name);
		    fflush(stdin);
		    for(i=0;i<n;i++)                                                  //display the matching student name
		    {
			if(my_strcmp(st_name,Student[i].name)==0)
			{
			    printf("Roll No.   Name\t\t");
			    for(j=0;j<no_sub;j++)
			    {
				printf("%-10s\t",arr[j]);
			    }
			    printf("Average\t\t Grade\n");
			    printf("%-10d %-20s",Student[i].roll_no,Student[i].name);
			    for(j=0;j<n;j++)
			    {
				printf("%-10d\t",Student[i].marks[j]);
			    }
			    printf("%-5.2f\t %c\n",Student[i].avg,Student[i].grade);
			    flag=1;
			    break;
			}
		    }
		    if(flag==0)                                                       //if name is not matching display this error message will print
		    printf("Error:The entered name is not available\n");
		    break;
		    case 2:
		    printf("Enter the roll no. of the student : ");                   //if choice is 2 then ask roll no.
		    scanf("%d",&st_roll); 
		    fflush(stdin);
		    for(i=0;i<n;i++)                                           //display the details of matching student roll number
		    {
			if(st_roll==Student[i].roll_no)
			{
			    printf("Roll No.   Name\t\t");
			    for(j=0;j<no_sub;j++)
			    {
				printf("%-10s\t",arr[j]);
			    }
			    printf("Average\t\t Grade\n");
			    printf("%-10d %-20s",Student[i].roll_no,Student[i].name);
			    for(j=0;j<n;j++)
			    {
				printf("%-10d\t",Student[i].marks[j]);
			    }
			    printf("%-5.2f \t %c\n",Student[i].avg,Student[i].grade);
			    flag=1;
			    break;
			}
		    }
		    if(flag==0)                                               //else display this error message
		    printf("Error:The entered roll no. is not available\n");
		    break;
		}
		break;
	}
printf("Do you want to continue to display(Y/y)");                          //is the user wants to continue to display the student details
scanf(" %c",&ch);
    }
  for(i=0;i<no_sub;i++)                                                   //freeing the dynamically allocated memory
    {
	free(arr[i]);
    }
    for(i=0;i<no_sub;i++)
    {
	free(Student[i].marks);
    }
    return 0;
}
int my_strcmp(char *str1,char *str2)                                   //function definition for string comparison
{
  while((*str1!='\0' && *str2!='\0')&& *str1==*str2)               //if string 1 and 2 is not equal to NULL and both the strings are equal
    {
	str1++;                                                         //incrementing both the pointers
	str2++;
    }
    if(*str1==*str2)                                                   //both are equal return zero
    {
	return 0;
    }
    else
    {
	return *str1-*str2;                                            //else returns difference of ASCII values
    }
} 
