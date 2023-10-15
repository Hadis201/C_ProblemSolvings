#include<stdio.h>
int gcd(int a, int b){
    if (b%a == 0)
        return a;
    
    else
        return(b%a, a);
}

int main(){
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    int res = gcd(num1, num2);
    printf("%d", res);
    return 0;
}