#include <stdio.h>
#include <stdlib.h>

int main()
{

    int N,
        A[100];

    scanf("%d", &N);

    for(int i = 0; i<N; i++)
    {
        scanf("%d", &A[i]);
        if(A[i]%2 == 0) printf("%d ", A[i]);
    }
    return 0;
}
