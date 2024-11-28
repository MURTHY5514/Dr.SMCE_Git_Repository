/*
ex2 : 123
1+2+3 = 6

ex2 : 567

5+6+7 = 18

10)546(54
    50
    _______
    46
    40
    _______
    6

10) 54(5
    50
    ----------
    4


10) 5(0.5
50
50
--------
0
5+6+7 = 18

*/
#include<stdio.h>

int main(){
    int num,sum = 0,rem=0;

    printf("Enter the number : \n");
    scanf("%d",&num);

while(num > 0){
    rem = num%10;
    sum = sum + rem;
    num = num/10;
}
    printf(" sum of all digits = %d",sum);
}