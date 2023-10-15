#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,
        count = 0;
    float probability;

    scanf("%d", &N);
    for (int i = 1; i<=N; i++)
    {
        if(i%2 == 1) count++;
    }

    probability = (float)count/N;
    printf("%f", probability);
    return 0;
}
