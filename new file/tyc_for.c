#include<stdio.h>
int sqr_cube();
int main(){
    float a = 12.12222222222222222;
    double b= 12.1221111111111111;
    sqr_cube();
    printf("%f %lf", a,b);
}
int sqr_cube(){
    int i = 1;
    for (;i<11; i++){
        printf("%d, %d, %d\n", i,i*i, i*i*i);
    }   
}