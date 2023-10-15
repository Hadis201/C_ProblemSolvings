#include<stdio.h>
int main(){
    float num;
    int choice;

    printf("Enter the value: ");
    scanf("%f", &num);

    printf("If you want to convert from meter to feet enter 1, or viceversa 2\n");
    scanf("%d", &choice);

    if ( choice == 1){
        printf("\n %f feet", 3.29*num);
    }

    else if(choice == 2){
        printf("%f meter", num/3.29);
    }

    return 0;
}