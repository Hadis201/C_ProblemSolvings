#include<stdio.h>

int gcd(int a, int b){
    if (a%b==0){
        return b;
    }   
    return gcd(b,a%b);

}

int main(){
    int res ;
    int num1, num2;

    num1 = 12;
    num2 = 13;
    //scanf("%d %d", &num1, &num2);

    res = gcd(num1, num2);

    printf("%d",res);

    return 0;
}