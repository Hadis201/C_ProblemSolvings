#include<stdio.h>
int increment1(){
    int i, j;
    i = 10;
    j = i++;

    printf("i = %d\nj = %d\n", i, j);
}
int increment2(){
    int i, j;
    i = 10;
    j = ++i;

    printf("i = %d\nj = %d\n", i, j);
}
int increment3(){
    int i = 10;
    ++i;
    printf("++i = %d\n",i);
}

int increment4(){
    int i = 10;
    i--;
    printf("i-- = %d\n",i);
}
int increment5(){
    int i = 10;
    --i;
    printf("--i = %d\n",i);
}
/*int increment6(){
    int i = 10;
    i++;
    printf("i++ = %d\n",i);
}
*/
int main(){
    increment1();
    increment2();
    increment3();
    increment4();
    increment5();
//    increment6();
    
}