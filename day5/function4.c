#include<stdio.h>
// pass by reference
void pass_by_reference(int *);
int main(){
    int a=10;
    pass_by_reference(&a);
    printf("The value of a in main function is : %d",a);
    return 0;
}

// function definition
void pass_by_reference(int *a){
    *a=30;
    printf("The value of a in pass_by_reference function is : %d \n",*a);
}







