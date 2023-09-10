#include<stdio.h>

void no_return_func(void);

int main(){
    no_return_func();
    return 0;
}

void no_return_func(void){
    printf("this is printed");
    return;
    printf("this is never printed");


}