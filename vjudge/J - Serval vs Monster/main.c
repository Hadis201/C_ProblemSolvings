#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int H,//The health of the monster is H
        A;//In one attack, Serval can decrease the monster by A

    scanf("%d %d", &H, &A);

    float ans = ceil(((float)H/A));
    printf("%.0f", ans);

    return 0;
}
