// 123
// 1+2+3 = 6
   /*
hunds  tens one   hunds  tens one
1       2     3 = 3      2     1
3X1000 = 3000
3X100 = 300
3X10 = 30

3X10 = 30 
30X10  = 300
300X10 = 3000

123
rev =32
0X10 + 3  = 3
3X10 + 2  = 32
32X10 + 1 = 321


10)123(12
    10
    -----
    23
    20
    -----------
    3

    10)12(1
        10
        ------
        2

    10)1(0



    1+2+3

    1+2+3+4+5
  
    3+3+4+5
    6+4+5
    10+5
    15
 */

 #include<stdio.h>
 int main(){
    int rev=0,num,rem=0;
    printf("Enter a number to get rev :");
    scanf("%d",&num);
    while(num >0 ){
    rem = num%10; //3
    rev = rev * 10 + rem; // 0+3 = 3
    num = num/10; // 123/10 = 12
    }
    printf("Reverse = %d",rev);
    return 0;
 }