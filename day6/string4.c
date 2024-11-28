#include<stdio.h>
#include<string.h>
int main(){
    char str1[10];
    printf("Enter a string: ");
    // scanf("%[^\n]s",str1);
    fgets(str1,9,stdin);
    printf("String is : %s",str1);
    return 0;
}






