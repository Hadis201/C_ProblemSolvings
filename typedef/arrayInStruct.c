#include<stdio.h>

typedef struct {
    char name[10];
    int roll;
    char hometown[20];
} tops;

int main() {
    tops no1 = {"Drubo", NULL, "Netrokona"};
    tops no2 = {"Rhyme", 2, "Bogura"};
    tops topss[] = {no1, no2};
    printf("%s\n", no2.hometown);
    printf("Hello world!");
    return 0;
}
