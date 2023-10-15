#include<stdio.h>
int main(){
    int array1[3];

    int i;
    for (i = 0; i < 3; i++) scanf("%d", &array1[i]);

    for (i = 0; i < 3; i++) printf("%d", array1[i]);

}