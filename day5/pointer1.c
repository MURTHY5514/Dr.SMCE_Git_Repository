#include<stdio.h>
int main(){
    int num=10;
    int *ptr;
    ptr=&num;
    printf("%p \n",&num);
    // printf("%p \n",ptr);  //address of num
    // printf("Address of a pointer: %p",&ptr);
    printf("Value of num by using num : %d \n",num);
    printf("Value of num by using Pointer : %d \n",*ptr);
    printf("Value of num by using num : %d \n",*(&num));
    printf("Value of num by using pointer : %d \n",*(*(&ptr)));
    return 0;
}






