#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5;
    for (int i = 1; i <= 5; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            printf("%d ", i);
            j++;
            if(i>j)break;
        }

        printf("\n");
    }
    return 0;
}
