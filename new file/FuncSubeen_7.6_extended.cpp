#include<stdio.h>
int myFunc();
int main(){

    int z = myFunc(10, 20);
    printf("%d", z);

}
int myFunc(int x, int y){
    
    y = x;//x=y=10
    x = 2*y;//x=20

    return x + y;
    
    
    
    }

