#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B;

    scanf("%d %d", &A, &B);

    if(A == 1 && B == (2) )printf("Yes");
    else if(A == 2 && B == ( 3) )printf("Yes");
    //else if(A == 3 && B == 2 )printf("Yes");
    else if(A == 4 && B == 5 )printf("Yes");
    else if(A == 5 && B == (6 ) )printf("Yes");
    //else if(A == 6 && (B == 5||3||9) )printf("Yes");
    else if(A == 7 && B == 8 )printf("Yes");
    else if(A == 8 && B == ( 9))printf("Yes");
    //else if(A == 9 && B == 8 )printf("Yes");
    else printf("No");

    return 0;
}
