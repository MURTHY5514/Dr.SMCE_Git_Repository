#include<stdio.h>
int main(){
    int arr[2][2];
    // arr[0][0]=10;
    // arr[0][1]=20;
    // arr[1][0]=30;
    // arr[1][1]=40;
    printf("Enter the elements of an array: \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}
