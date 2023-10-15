#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0,
        cntEven = 0,
        cntOdd = 0;

    while(num >= 0){

        if(num>=0 && num%2 == 0){
            cntEven++;
            }

        else {
            cntOdd++;
        }
        scanf("%d", &num);
    }

    printf("EVEN=%d \nODD=%d", cntEven - 1, cntOdd);
    return 0;
}
