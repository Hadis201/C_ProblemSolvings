#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    int x = 1;

    for(int i =1; i<= N; i++){
        for(int j = 1; j <= i; j++){
            printf("%i ", x);
            x++;
        }
        printf("\n");
    }
    return 0;
}
