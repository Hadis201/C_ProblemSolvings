#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, A, B;
    scanf("%d %d %d", &N, &A, &B);

    if(N*A >= B) printf("%d", B);
    else printf("%d", A*N);

    return 0;
}
