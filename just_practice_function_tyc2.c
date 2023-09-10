#include<stdio.h>
int f1(void);
int main(){
    float result = f1();

    printf("your result is %f ", result); 

}

f1(){
    return 84;
}