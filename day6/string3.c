#include<stdio.h>
#include<string.h>
int main(){
    // reverse string
    // char str1[]="Hello";
    // printf("%s \n",str1);
    // strrev(str1);
    // printf("%s",str1);

    // compare a two strings
    char str2[]="Hello";
    char str3[]="hello";
    // int res=strcmp(str2,str3);
    int res=stricmp(str2,str3);
    if(res==0)
    {
        printf("Strings are equal");
    }
    else{
        printf("Strings are not equal");
    }
    return 0;
}



