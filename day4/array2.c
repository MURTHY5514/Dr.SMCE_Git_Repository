// #include<stdio.h>
// int main(){
//     int arr[5];
//     printf("Enter the elements of an Array: \n");
//     for(int i=0;i<5;i++){
//         scanf("%d", &arr[i]);
//     }
//     for(int i=0;i<5;i++){
//         printf("%d : %d \n",i+1,arr[i]);
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    char arr[5];
    printf("Enter the elements of an Array: \n");
    for(int i=0;i<5;i++){
        scanf("%c", &arr[i]);
        getchar();
    }
    for(int i=0;i<5;i++){
        printf("%d : %c \n",i+1,arr[i]);
    }
    return 0;
}

