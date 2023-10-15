#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416
int main()
{
    int R;// radius of the circle
    scanf("%d", &R);
    float C = 2*PI*R; //circumference

    printf("%f", C);
    return 0;
}
