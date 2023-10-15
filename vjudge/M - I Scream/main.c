#include<stdio.h>

int main()
{
    int A,// A = percentage of milk solids-not-fat
        B;//B percentage of milk fat.
    scanf("%d %d", &A, &B);
    if(A+B>= 15 && B>=8) printf("1");//ice cream
    else if(A+B>= 10 && B>=3) printf("2");// ice milk;
    else if(A+B>= 3 && B>=0) printf("3");//lacto ice
    else if(A+B>= 0 && B>=0) printf("4");// flavored ice
}

