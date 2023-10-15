#include<stdio.h>

int main()
{

    int max, testcase, elmnt;

    scanf("%d", &testcase);

    for(int i = 0; i<testcase; i++)
    {
        scanf("%d", &elmnt);

        int a[elmnt-1];

        for(int j = 0; j<elmnt; j++)
        {
            scanf("%d", &a[j]);
        }

        max = a[0];
        for (int k = 1; k <= elmnt; k++)
        {
            if(a[k]>max)
            max = a[k];
        }

        printf("%d\n", max+1);
    }
    return 0;

}
