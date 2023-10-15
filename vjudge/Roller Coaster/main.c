#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,
        K,
        h[500];
        count = 0;
    scanf("%d", &N);
    scanf("%d", &K);

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &h[i]);
        if(h[i] >= K) count++;
    }
    printf("%d", count);
    return 0;
}
