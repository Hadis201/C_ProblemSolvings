#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B;//JUST NUMBERS

    scanf("%d %d", &A, &B);
    if(A<B){
    printf("%d", B-A+1);
    return 0;
    }

    else printf("0");
    return 0;
}
