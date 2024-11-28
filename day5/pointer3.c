#include<stdio.h>
#include<stdlib.h>
int main(){
    // null pointer
    int *ptr=NULL;
    printf("%d",*ptr);

    // wild pointer
    int *ptr1;
    printf("%p",*ptr1);

    // dangling pointer
    int *ptr2;
    ptr2=(int *)malloc(sizeof(int));
    free(ptr2);
    ptr2=NULL;
    printf("%d",*ptr2);

    // void pointer
    int num=10;
    void *ptr3;
    ptr3=&num;
    printf("Value of num: %d",*(int *)ptr3);
    return 0;
}