#include<stdio.h>
// function declaration
// int sum(int a,int b);
int sum(int,int);
void sum1(int,int);
int sum2();
void sum3();

int main(){
    int res = sum(10,20);
    printf("function 1 result is : %d \n",res);
    sum1(10,20);
    int res2 = sum2();
    printf("function 3 result is : %d \n",res2);
    sum3();
    return 0;
}

// function definition
int sum(int a, int b){
    int sum = a+b;
    return sum;
}

void sum1(int a, int b){
    int sum = a+b;
    printf("Function2 result of %d and %d is : %d \n",a,b,sum);
}

int sum2(){
    int a=10,b=20;
    int sum = a+b;
    return sum;
}

void sum3(){
    int a=10,b=20;
    int sum = a+b;
    printf("Function4 result of %d and %d is : %d ",a,b,sum);
}






