#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x, y, z, count = 0;
    //enter the number of problems (n)
    scanf("%d", &n);

    while(n--)
        {
            scanf("%d %d %d", &x, &y, &z);
            if(x+y+z >=2)count++;
        }

    printf("%d", count);

    return 0;
}
