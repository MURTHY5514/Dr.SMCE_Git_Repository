#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int *ptr=NULL;
    ptr=&arr[0];
    // ptr=ptr+2;
    ptr=++ptr;  //ptr=ptr+1
    printf("value of pointer : %p \n",ptr);
    printf("value of arry element is : %d",*ptr);
    return 0;
}





