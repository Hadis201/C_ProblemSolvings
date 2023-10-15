#include <iostream>

using namespace std;

int main()
{
    int N,//previously contained ball
        A,//removed ball
        B;//newly added ball

    scanf("%d %d %d", &N, &A, &B);

    printf("%d", N - A +B);

    return 0;
}
