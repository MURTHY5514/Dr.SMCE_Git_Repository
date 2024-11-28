
   /*
get the number
get the choice to 

1 : Even or Odd
2 : Sum Of digit
3 : reverse a number
4 : exit
*/

#include<stdio.h>
int main(){

   int choice,num,sum=0,rem,rev=0;

   do{
      printf("Enter the number to perform below operations:");
      scanf("%d",&num);
      printf("Choose the choices below mentioned : \n");
      printf("1: Even or Odd\n");
      printf("2: Sum of Digits\n");
      printf("3: Reverse of Number\n");
      printf("4: Exit\n");
      scanf("%d",&choice);
      rem = 0;sum=0;rev=0;
      switch(choice){
         case 1 : {
               (num%2 == 0) ? printf("it is Even Number\n") : printf("it is Odd Number \n");
         }break;
         case 2 : {
                  
                  while(num >0 ){
                     rem = num%10; //3
                     sum = sum + rem;
                     num = num/10; 
                     }
                  printf("Sum of Digits = %d\n",sum);
         }break;
         case 3:{
                  while(num >0 ){
                     rem = num%10; //3
                     rev = rev * 10 + rem; 
                     num = num/10; 
                     }
                  printf("Reverse Number = %d\n",rev);
         }break;
         default: printf("Exiting from App!!!\n");break;
      }

   }while(choice != 4);
}
