#include<stdio.h>
int sum(int a, int b){
    printf("The sum is %d\n", a+b);
}
int main(){
    sum(10, 12);
    sum(9,100);
    sum(9-199, 1888);
}