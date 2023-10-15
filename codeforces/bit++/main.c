#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,// the number of statements or lines
        x = 0;
    char s1[4];

    scanf("%d", &n);

    while(n--)
    {
        scanf("%s", &s1);
        if(s1 == "x++") x+=1;
        if(s1 == "++x") x++;
        if(s1[1] == "-") x--;
    }
    printf("%d", x);
//printf("%s", s1);
    return 0;
}
