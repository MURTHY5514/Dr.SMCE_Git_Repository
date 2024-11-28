/* get two numbers from user
// a = 1, b = 2
// 1+2 = 3 X 4 = 12/2 = 6
// find even or odd
// print its even or odd number
*/
#include<stdio.h>
int main(){
    int val1=0, val2=0,res=0;
    printf("Enter the two numbers : ");
    scanf("%d%d",&val1,&val2);
    res = (((val1 +val2)*4)/2)%2; 
    if(!res){ // res == 1 or res != 0 or res == 0 
        printf("\n a=%d,b=%d  is Even",val1,val2);
    }else{
        printf("\n a=%d,b=%d  is Odd",val1,val2);
    }
    
}