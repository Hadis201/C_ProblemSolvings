#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    long N;
    float x = 0;
    scanf("%ld", &N);

    long long int A[N];

    long long int mul = 1;

    while(N--)
    {
        scanf("%lld", &A[N]);
        if(A[N] == 0){printf("0");
            return 0;
        }
        x = x + log10(A[N]);
        //printf("%.30Lf\n", x);
        mul = mul*A[N];
    }
//    if(mul> pow(10,18)) printf("-1");
//    else printf("%lld", mul);
//////
    if(x>18.1)printf("-1");
    else if(mul<=1000000000000000000){printf("%i", mul);}
    else if(x<18.1) {printf("%lld", mul);}

    return 0;
}
