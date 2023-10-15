#include <stdio.h>
#include<math.h>


int x()
{
    long long int N;
    scanf("%lld", &N);

    float x = log10(N);

    if(-1*pow(2,31) <= N <= pow(2,31)-1) printf("Yes");
    else printf("No");
    return 0;
}
int main(){
printf("%lld", -pow(2,31));
}
