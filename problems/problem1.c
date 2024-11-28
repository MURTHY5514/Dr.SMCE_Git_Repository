#include<stdio.h>

void evenSum(int*,int);
void oddSum(int*,int);
int main(){
int *e=0,*o=0,n;
printf("Enter n Value: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    if(i%2 == 0)
        evenSum(&e,i);
    else
        oddSum(&o,i);
}
printf("Even Sum: %d\nOdd Sum: %d",*e,*o);
}

void evenSum(int *e,int eve){
    printf("%d",eve);
    *e+=eve;
    
}
void oddSum(int *o,int odd){
     printf("%d",odd);
     *o+=odd;
    
}
