#include<stdio.h>

typedef struct {
    char name[10];
    int roll;
    char hometown[20];
} tops;

int main() {
    tops no1 = {"Drubo", 1, "Netrokona"};
    tops no2 = {"Rhyme", 2, "Bogura"};
    tops topss[] = {no1, no2};
    printf("%s\n", no2.hometown);
    printf("Hello world!\n");
    
    for (int i = 0; i< sizeof(topss)/ sizeof(topss[0]) ; i++)
    {
        printf("%.10s\t", topss[i].name);
        printf("%2d\t", topss[i].roll);
        printf("%.15s\n", topss[i].hometown);
    }
        
}        