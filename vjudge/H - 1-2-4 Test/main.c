#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B;//A and B is for Takahashi and  Aoki's score
    scanf("%d %d", &A, &B);

    if(A+B>7) printf("7");
    else printf("%d", A + B);

    return 0;
}
