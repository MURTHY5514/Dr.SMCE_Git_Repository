#include<stdio.h>
int main(){

    float val1=0,val2=0,sum=0;
    printf("Enter the two number with space:");
    scanf("%f%f",&val1,&val2);
    sum=val1+val2;
    printf("%f + %f = %f",val1,val2,sum);
    return 0;
}