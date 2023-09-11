#include<stdio.h>
int weight_in_moon(int my_weight){



    
    return my_weight*9.8*.17;
}
int main(){
    int my_weight;
    printf("Please enter my weight in kg: ");
    scanf("%d", &my_weight);
    
    int res =  weight_in_moon(my_weight);
    
    printf("Your weight in moon is %d N",res);
    return 0;
}