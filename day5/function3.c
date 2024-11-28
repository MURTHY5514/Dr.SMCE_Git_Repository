#include<stdio.h>
// pass by value
void pass_by_value(int);
int main(){
    int a=10;
    pass_by_value(a);
    printf("The value of a in main function is : %d",a);
    return 0;
}

// function definition
void pass_by_value(int a){
    a=30;
    printf("The value of a in pass_by_value function is : %d \n",a);
}






