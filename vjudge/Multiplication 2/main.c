#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int N;
    long double x = 0;
    scanf("%d", &N);

    long long int A[100000];

    long long int mul = 1;
    for(int i = 0; i < N; i++)
    {
        scanf("%lld", &A[N]);


    }
    for(int i = 0; i<N; i++){
        if(A[i] == 0){printf("0"); return 0;}

        x = x + log10(A[i]);
       // printf("%llf\n", x);


        mul = mul*A[i];
            if(x>=18)printf("-1");

    }
//    if(mul> pow(10,18)) printf("-1");
//    else printf("%lld", mul);
////////
    printf("%lld", mul);

    return 0;
}
