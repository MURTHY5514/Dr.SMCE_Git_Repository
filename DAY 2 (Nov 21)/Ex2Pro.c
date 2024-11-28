/* get two numbers from user
// a = 1, b = 2
// 1+2 = 3 X 4 = 12/2 = 6
// find even or odd
// print its even or odd number
*/
#include<stdio.h>
int main(){
    int val1=0, val2=0, sum =0, mul=0, div =0;
    printf("Enter the two numbers : ");
    scanf("%d%d",&val1,&val2);
    sum = val1 +val2;
    printf("\n %d + %d = %d ",val1,val2,sum);
    mul = sum * 4;
    printf("\n %d * %d = %d ",sum,4,mul);
    div = mul / 2;
    printf("\n %d / %d = %d ",mul,2,div);
    if(div%2==0){
        printf("\n %d  is Even",div);
    }else{
        printf("\n %d is Odd",div);
    }
}