#include<stdio.h>
struct student
{  
    char stu_name[30],branch[10],usn[15];
    int sem;
 }stu1, stu2;

int main( )
{	
    
     struct student stu3 = {.stu_name="Student 1",.branch="CSE",.usn="1CC23ME044",.sem=4};

    printf("Enter Student 1 name : ");
    scanf("%s",stu1.stu_name);
    printf("Enter Student 1 branch : ");
    scanf("%s",stu1.branch);
    printf("Enter Student 1 usn : ");
    scanf("%s",stu1.usn);
    printf("Enter Student 1 sem : ");
    scanf("%d",&stu1.sem);

    printf("Enter Student 2 name : ");
    scanf("%s",stu2.stu_name);
    printf("Enter Student 2 branch : ");
    scanf("%s",stu2.branch);
    printf("Enter Student 2 usn : ");
    scanf("%s",stu2.usn);
    printf("Enter Student 2 sem : ");
    scanf("%d",&stu2.sem);

     printf("Student name 1 : %s\n",stu1.stu_name);
     printf("Student branch 1: %s\n",stu1.branch);
     printf("Student usn 1: %s\n",stu1.usn);
     printf("Student sem 1: %d\n",stu1.sem);

     printf("Student name 2 : %s\n",stu2.stu_name);
     printf("Student branch 2: %s\n",stu2.branch);
     printf("Student usn 2: %s\n",stu2.usn);
     printf("Student sem 2: %d\n",stu2.sem);

     printf("Student name 3 : %s\n",stu3.stu_name);
     printf("Student branch 3: %s\n",stu3.branch);
     printf("Student usn 3: %s\n",stu3.usn);
     printf("Student sem 3: %d\n",stu3.sem);
}
