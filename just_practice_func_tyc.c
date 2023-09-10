#include<stdio.h>
int func(){
    int i;

    printf("Enter a number");
    scanf("%d", &i);

    return i;
}

int main(){
   
    printf("your number + 100 = %d ", func() + 100);
}