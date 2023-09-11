#include<stdio.h>
float o_to_c(float mass_in_ounce);

int main(){
    float ounce_weight;
    scanf("%f", &ounce_weight);

    float cups_weight = printf("%f", o_to_c(ounce_weight));

    return 0;
}

float o_to_c(float mass_in_ounce){
    return mass_in_ounce*.125;
}