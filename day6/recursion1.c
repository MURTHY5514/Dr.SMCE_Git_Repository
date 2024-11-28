#include<stdio.h>
int sum_of_natural_nums(int);
int main(){
    int num,res;
    printf("Enter a number: ");
    scanf("%d",&num);
    res = sum_of_natural_nums(num);
    printf("sum of %d natural numbers is : %d",num,res);
}

int sum_of_natural_nums(int num){
    if(num==1){
        return 1;
    }
    else{
        return num+sum_of_natural_nums(num-1);
    }
}






