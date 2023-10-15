#include<stdio.h>
int main(){

    int z = myFunc(10,20);
    printf("%d", z);

}
int myFunc(int x, int y){
    
    y = 2*x;
    x = 2*y;

    return x + y;
    
    
    
    }

