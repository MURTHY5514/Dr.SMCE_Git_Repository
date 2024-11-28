#include<stdio.h>
#include<string.h>
int main(){
    char str[6]="PAVAN";
    char str2[6]="PAVAN";
    // int res=strlen(str);  //length of a string
    // printf("the lenght of string \"%s\" is : %d",str,res);
    // strupr(str); //uppcase
    // printf("the upper case of string \"%s\" is : %s",str2,str);
    // strlwr(str); //lowercase
    // printf("the lower case of string \"%s\" is : %s",str2,str);
    char name[16]="pavan";
    char end[6]="gowda";
    strcat(name,end);
    printf("%s",name);
    return 0;
}















