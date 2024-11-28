#include<stdio.h>
#include<string.h>
int main(){
    // char str1[2][10]={
    //     {'H','e','l','l','o'},
    //     {'W','o','r','l','d'}
    // };
    char str1[2][10]={
        "Hello",
        "World"
    };
    printf("%s\n",strupr(str1[0]));
    printf("%s\n",str1[1]);
    printf("%c\n",str1[0][4]);
    return 0;
}

