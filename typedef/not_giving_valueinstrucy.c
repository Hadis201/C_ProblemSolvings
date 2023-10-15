//practice of struct 

#include<stdio.h>

typedef struct {
    char name[10];
    int roll;
    char hometown[20];
}tops;
int main()
{
    tops no1 ={.name = "Drubo",.hometown = "Netrokona"};
    tops no2 ={"Rhyme", 2, "Bogura"};
    
    
    printf("%s\n", no2.hometown);
    printf("Hello world!");
    return 0;
}