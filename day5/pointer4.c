#include<stdio.h>
int main(){
    int const arr[5] = {1, 2, 3, 4, 5};
    const int *const p = arr;  
    printf("%d\n", *p);        
    // *p = 10;  
    // p = arr + 1;  
    return 0; 
}