#include<stdio.h>
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;  // Pointer to the first element of the array
    printf("%d\n", *p);        // Access the first element
    printf("%d\n", *(p + 1));  // Access the second element
}