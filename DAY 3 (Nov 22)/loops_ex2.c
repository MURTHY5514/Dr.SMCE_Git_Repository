#include<stdio.h>
int main(){
    char charFromUser;
    int checkUpper;
    printf("Enter the Character:");
    scanf("%c",&charFromUser);
    if(charFromUser == 'a' || charFromUser == 'A' ){
        if(charFromUser == 'A'){
             printf(" It is Uppercase Vowel");
        }else {
            printf(" It is lowercase Vowel");
        }
         
    }
    else if ( charFromUser == 'E' || charFromUser == 'e'){
            printf(" It is a Vowel");
    }
    else if ( charFromUser == 'I' || charFromUser == 'i'){
        printf(" It is a Vowel");
    }
    else if ( charFromUser == 'O' || charFromUser == 'o'){
        printf(" It is a Vowel");
    }
    else if ( charFromUser == 'U' || charFromUser == 'u'){
         printf(" It is a Vowel");
    }else{
        if(charFromUser == 0){
            printf(" It is a number ");
        }
        printf(" It is not a Vowel ");
    }

    switch(charFromUser){
        case 'A':
        case 'a':printf(" It is a Vowel switch");break;
        case 'E':
        case 'e':printf(" It is a Vowel switch");break;
        case 'I':
        case 'i':printf(" It is a Vowel switch");break;
        case 'o':
        case 'O':printf(" It is a Vowel switch");break;
        case 'U':
        case 'u':printf(" It is a Vowel switch");break;
        default:{
            printf(" It is not a Vowel switch");
            checkUpper = charFromUser == 'z' ? 1 : 0;

              if (charFromUser == 'z'){
                    checkUpper = 1;
              }else{
                    checkUpper = 0;
              }


              if(checkUpper)
                printf("the Character is lowercase not a vowel switch");
        }
    }

}