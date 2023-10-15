#include <stdio.h>
#include <stdlib.h>
enum BookshelfPrice
    {
        Low = 600,
        Medium = 750,
        High = 1100
    };

int main()
{

    enum BookshelfPrice rafi = Medium ;

    switch (rafi)
    {
    case Low:
        printf("plastic rack");
        break;
    case Medium:
        printf("book case");
        break;
    case High:
        printf("Good level bookcase");
        break;
    default:
        printf("Unknown Bookshelf\n");
    break;

    }
return 0;
}
