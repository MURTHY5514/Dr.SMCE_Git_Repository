#include<stdio.h>
#include<string.h>
int main(){
    int num1;
    float num2;
    char character;
    char str[10];
    char str2[50];
    printf("Enter a number: ");
    scanf("%d",&num1);

    printf("Enter a float value: ");
    scanf("%f",&num2);
    getchar(); //to avoid new line

    printf("Enter a character: ");
    scanf("%c",&character);
    getchar(); //to avoid new line

    printf("Enter a word: ");
    scanf("%s",str);
    getchar(); //to avoid new line

    printf("Enter a sentence: ");
    scanf("%[^\n]s",str2);
    // fgets(str2,9,stdin);

    printf("The number is : %d \n",num1);
    printf("The float value is : %f \n",num2);
    printf("The character is : %c \n",character);
    printf("The word is : %s \n",str);
    printf("The sentence is : %s \n",str2);
    return 0;
}



