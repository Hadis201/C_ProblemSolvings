#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, count;
    //enter the number of problems
    scanf("%d", &num);

    int x[3];
    for (int i =0; i<3; i++)
        scanf("%d", x[i]);

    for (int i =0; i<num; i++)
    {
        if (( x[0]&&x[1] == 1) || (x[0]&&x[2] == 1) ||(x[1]&&x[2] ==1)) count += 1;
        printf("%d", count);
    }

    return 0;
}
