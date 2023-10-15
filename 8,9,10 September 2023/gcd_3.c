#include<stdio.h>
int gcd(int num1, int num2);
int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int result = gcd(a, b);

    printf("%d", result);
}
int gcd(int num1, int num2){
    while (num1%num2 != 0){
        num2=num1;

        if (num1%num2 == 0){
            return num2;
        
    
    }
    
}
    }
    
    
