/*              hunds   tens   ones
ex2 : 567       5        6       7
7 6 5
5 X 10 =  50
34 X 10 = 340
456 X 10 = 4560
5 6 7 = 7 6 5

0X10  = 0 + 7 = 7
7X10  = 70 + 6 = 76
76X10 = 760 + 5 = 765



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
    sum = sum * 10 + rem;
    num = num/10;
}
    printf(" Reverse = %d",sum);
}