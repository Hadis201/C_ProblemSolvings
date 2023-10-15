#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--){

        int n;
        scanf("%d", &n);
        int sum = 0;
        int a[100];

        for(int i = 0; i<n-1; i++){
            scanf("%d", &a[i]);
            sum+=a[i];
        }
        printf("%d\n", -sum);

    }
    return 0;
}
