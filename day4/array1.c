#include<stdio.h>
int main(){
    // int arr[5];
    // arr[0]=20;
    // arr[1]=30;
    // arr[2]=40;
    // arr[3]=50;
    // arr[4]=60;
    char arr[5];
    arr[0]='A';
    arr[1]='B';
    arr[2]='C';
    arr[3]='D';
    arr[4]='E';


    char gender ='M';


    for(int i=0;i<5;i++){
        printf("%d : %c \n",i+1,arr[i]);
    }
    return 0;
}
