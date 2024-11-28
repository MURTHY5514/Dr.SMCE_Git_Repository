#include<stdio.h>
// function declaration
// int sum(int a,int b);
int sum(int,int);

int main(){
    int num1=10,num2=20,res,res1,res2;
    // function call
    res = sum(num1,num2);
    printf("result of %d and %d is : %d \n",num1,num2,res);
    res1 = sum(2,3);
    printf("result of 2 and 3 is : %d \n",res1);
    res2 = sum(5,5);
    printf("result of 5 and 5 is : %d \n",res2);
    return 0;
}

// function definition
int sum(int a, int b){

    int sum = a+b;
    return sum;
}