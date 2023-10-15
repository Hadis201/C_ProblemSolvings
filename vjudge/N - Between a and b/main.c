#include <stdio.h>
#include <stdlib.h>

int main()
{


    long long int count = 0, a, b, x;// nonnegative integers a and b(a≤b), and a positive integer x.
    scanf("%lld %lld %lld", &a, &b, &x);
    for (int i = a; i<= b; i++)
    {
        if(i%x == 0) count++;
    }
    printf("%lld", count);

    return 0;
}
