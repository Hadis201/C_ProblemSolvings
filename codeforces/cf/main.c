#include <stdio.h>
#include <stdlib.h>
/*
void sort(int array[], int size)
{

    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j]>array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

}
*/



int main()
{
    int t;
    scanf("%d", &t); // number of test cases


    for (int i = 0; i<t; i++)
    {
        int n;
        scanf("%d", &n); // n

        int k;
        scanf("%d", &k); // k --. target

        int a[n]; //  size of array

        int count =0;
        // getting the array
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
            // counting target
            if (a[j]==k)
                count++;


        }

        //  output or result logic
        if (count>=1)
            printf("YES\n");
        else
            printf("NO\n");

    }


    return 0;
}
