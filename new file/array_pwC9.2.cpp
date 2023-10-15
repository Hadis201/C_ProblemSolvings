#include<stdio.h>
#include<ctype.h>

#define SIZE 6

int main(){

    char letter [SIZE];

    int count;

    for (count = 0; count < SIZE; ++count)
        letter[count] = getchar();
    for (count = 0; count < SIZE; ++count) 
        putchar(toupper(letter[count]));
    }
    