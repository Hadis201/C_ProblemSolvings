#include <stdio.h>
#include <stdlib.h>

int main()
{
    float marks = 0,
          min = 100,
          max = 0,
          sum = 0,
          avg;
    int count = 0,
        countfail = 0;

    while(marks>=0)
    {
        scanf("%f", &marks);
        if(marks<0) break;
        count++;
        sum+=marks;

        if(marks<40) countfail++;
        if (min>marks) min = marks;
        if (max<marks) max = marks;

    }
    avg = sum/count;
    printf("Average: %.2f\n", avg);
    printf("Maximum: %.2f\n", max);
    printf("Minimum: %.2f\n", min);
    printf("Failed: %d\n", countfail);

    return 0;
}
