#include<stdio.h>
#include<math.h>
int func(void);

int main(){
    float a = sqrt(func());
    printf("%f", a);
}
func(){
    return 19;
}