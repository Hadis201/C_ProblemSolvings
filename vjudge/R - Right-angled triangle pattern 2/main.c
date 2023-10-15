#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    for(int row = 1; row<=N; row++)
    {
        int x = 1;
        int i = row;

        for(int col = 1; col <= row; col++)
        {
            printf("%d ", i);
            i = i + N - x;
            x++;
        }

        printf("\n");
    }

    return 0;
}
