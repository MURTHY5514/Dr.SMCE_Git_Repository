#include<stdio.h>
struct student
{  
    char stu_name[30],branch[10],usn[15];
    int sem;
    int marks[10];
 }stu1;

int main( )
{	
   
    printf("Enter Student 1 name : ");
    scanf("%s",stu1.stu_name);
    printf("Enter Student 1 branch : ");
    scanf("%s",stu1.branch);
    printf("Enter Student 1 usn : ");
    scanf("%s",stu1.usn);
    printf("Enter Student 1 sem : ");
    scanf("%d",&stu1.sem);
    printf("Enter a  marks of student: ");
    for(int i=0;i<5;i++){
        printf("Enter %d subject marks: ",i+1);
        scanf("%d",&stu1.marks[i]);
    }

    printf("Student name 1 : %s\n",stu1.stu_name);
    printf("Student branch 1: %s\n",stu1.branch);
    printf("Student usn 1: %s\n",stu1.usn);
    printf("Student sem 1: %d\n",stu1.sem);
    printf("student 1 marks: ");
    for(int i=0;i<5;i++){
        printf("subject %d marks: %d\n",i+1,stu1.marks[i]);
    }

}