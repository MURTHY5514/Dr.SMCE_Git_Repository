#include<stdio.h>
void show(void);
static int a=1;
int main(){
    printf("From main : %d \n",a);
    show();
    show();
    show();
    printf("From main end : %d \n",a);
    return 0;
}
void show(void){
    printf("From show : %d \n",a);
    a++;
}