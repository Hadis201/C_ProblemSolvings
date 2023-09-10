#include<stdio.h>

int get_sqr();
int main(){
    
    printf("square value is %d", get_sqr());
}

get_sqr(){
    int num;
    printf("please enter a number");
    scanf("%d", &num);
    return num*num;
}