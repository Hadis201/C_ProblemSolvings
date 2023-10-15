
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;scanf("%d", &n);
    int a[n];



    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%d", a[1] - 1);
    return 0;
}
