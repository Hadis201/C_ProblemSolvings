#include<stdio.h>

int main()
{
    int n,k,a[1000],count=0;

    scanf("%d %d", &n, &k);

    for (int i=0; i<n; i++) scanf("%d", &a[i]);

    for (int i=0; i<n; i++){
            if(  a[i] >= a[k-1])
                {
                    if (a[i]>0)
                    count++;
                }
    }
    printf("%d", count);
//    return 0;    
}
