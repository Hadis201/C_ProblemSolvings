#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a, b, x, count = 0;
    scanf("*%d *%d *%d", &a,&b, &x);

    for(int i = a; i<=b; i++)
    {
        if(i%x == 0)
            count++;
    }
    printf("%d", count);

    return 0;
}
