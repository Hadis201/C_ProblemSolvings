#include <stdio.h>
#include <stdlib.h>

int main()
{
    int K,
        cnteven = 0,
        cntodd = 0;
    scanf("%d", &K);

    for (int i =1; i<=K; i++){
        if(i%2 == 0)cnteven++;
        else cntodd++;

    }
    printf("%d", cnteven*cntodd);
    return 0;
}
