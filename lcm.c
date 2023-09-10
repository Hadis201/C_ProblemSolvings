#include<stdio.h>
int is_gcd(int a, int b){
    if (b%a == 0){
        return a;
    }
    else 
        return (b%a, a);
}

int main(){
    int num1, num2, lcm;
    scanf("%d %d", &num1, &num2);
    lcm = num1*num2/ is_gcd (num1, num2);
    
    printf("lcm = %d", lcm);
    return 0;
}