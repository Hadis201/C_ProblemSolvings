#include<stdio.h>
int main(){
    char ch;
    printf("Enter a vowel number\n");
    ch = getchar();
   

    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("You're correct");
            break;
        default:
            printf("Sorry, you have entered a consonant");
            
    return 0;
    }

}