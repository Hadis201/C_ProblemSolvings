#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--){

        int n;//total residents
        scanf("%d", &n);

        int p;//police has to pay p per person
        scanf("%d", &p);

        int sum = 0;
        sum+=p;

        int a[100];//
        for(int i = 0; i<n-1; i++){
            scanf("%d", &a[i]);
        }

        int b[100];//
        for(int j = 0; j<n; j++){
            scanf("%d", &b[j]);
        }

        int min = b[0];
        for (int k = 0; k < n; k++) {
        if (b[k] < min) {
            min = b[k];
            minIndex = k;
        }
        int x = 0;
        while(x != 0)
        int x =if((n-a[k])>-1)? n - a[k]:n-a[k]
        printf("%d\n", sum);

    }
    return 0;
}
