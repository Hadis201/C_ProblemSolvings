#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k, n, w;
    //k =  the cost of the first banana
    //n =initial number of dollars the soldier has and
    // w = number of bananas he wants.
    //x = money he needs from his friend

    scanf("%d", &k);
    scanf("%d", &n);
    scanf("%d", &w);

    int x = k*w*(w+1)/2 - n;
    if(x<0) printf("0\n");
    else printf("%d", x);

    return 0;
}
