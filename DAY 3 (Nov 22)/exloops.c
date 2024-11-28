/* 
5
0 1 2 3 4
1 2 3 4 5
1+2+3+4+5= 15
1<5
2<4
3<3
4<2
5<1


 10
1+2+3+4+5+6+7+8+9+10 = 10(9)/2 = N(N-1)/2

 */ 



#include<stdio.h>
int main(){
int sumofno=0, number;
printf("Enter the number to sum :\n");
scanf("%d",&number);
for(int i=1;i<=number;i++){
    sumofno = sumofno + i;
    printf("+%d", i);
}
printf("= %d",sumofno);
return 0;
}