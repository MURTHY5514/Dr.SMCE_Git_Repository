#include<stdio.h>
struct student
{  
    char stu_name[30],branch[10],usn[15];
    int sem;
    int marks[10];
 };

int main( )
{	
   struct student stu[15];
   for(int i=0;i<2;i++){
        printf("Enter Student %d name : ",i+1);
        scanf("%s",stu[i].stu_name);
        printf("Enter Student %d branch : ",i+1);
        scanf("%s",stu[i].branch);
        printf("Enter Student %d usn : ",i+1);
        scanf("%s",stu[i].usn);
        printf("Enter Student %d sem : ",i+1);
        scanf("%d",&stu[i].sem);
        printf("Enter a  marks of student: ");
        for(int j=0;j<5;j++){
            printf("Enter %d subject marks: ",j+1);
            scanf("%d",&stu[i].marks[j]);
        }
   }
    printf("\n\n");
    printf("Student Details");
    for(int i=0;i<2;i++){
        printf("Student name %d : %s\n",i+1,stu[i].stu_name);
        printf("Student branch %d: %s\n",i+1,stu[i].branch);
        printf("Student usn %d: %s\n",i+1,stu[i].usn);
        printf("Student sem %d: %d\n",i+1,stu[i].sem);
        printf("student %d marks: ");
        for(int j=0;j<5;j++){
            printf("subject %d marks: %d\n",i+1,stu[i].marks[j]);
        }
    }

}




