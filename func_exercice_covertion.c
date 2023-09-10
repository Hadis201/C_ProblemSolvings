#include<stdio.h>
int convert(void);
int main(){
    printf("You have %d pounds", convert());
}

convert(void){
    int $dollar, pound;
    printf("Enter your dollar($) amount ");
    scanf("%d", &$dollar);

    pound = 2*$dollar;

    return pound;

}
