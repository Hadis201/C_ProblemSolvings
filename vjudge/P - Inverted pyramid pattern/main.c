#include <stdio.h>
#include <stdlib.h>

int x()
{
    int N;
    scanf("%d", &N);
    for (int row = 1; row <= N; row++)
    {
        for(int col = 1; col <= N-row+1; col++)
        {
//            if(col <= N - row)

        for(int col = 3; col <= N - row; col++){ printf(" ");

//            break;

            if(col == 2 || col <= N-row){

            printf("* ");

            }printf("\n");


}            }}
}
int main()
{
    int N;
    scanf("%d", &N);

    for (int row = 1; row<N ;row++ )
        for(int col = 1; col<n-row+1; col++){
            if(col == 1 || col == row )printf("* ");
            else printf(" ");
        }

        printf("");

}
