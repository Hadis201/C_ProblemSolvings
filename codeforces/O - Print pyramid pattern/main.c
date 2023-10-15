#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;//number of lines
    scanf("%d", &N);

    for(int i = 0; i<N; i++)
    {
        for (int j = 0; j<(5-i)-1; j++)printf(" ");
        for (int k = 0; k<2*i+1; k++)printf("*");
        printf("\n");
    }

    return 0;
}
