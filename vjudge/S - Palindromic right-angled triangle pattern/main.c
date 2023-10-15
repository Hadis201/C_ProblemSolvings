#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    for(int row =1; row <= N; row++)
    {
        char x = 'A';
        for(int col = 1; col < row; col++)
        {

            printf("%c ", x);
            x++;

        }

        for(int col = 1; col <= row; col++)
        {

            printf("%c ", x);
            x--;
        }

        printf("\n");
    }
    return 0;
}
