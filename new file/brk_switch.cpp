#include<stdio.h>

int main(){
    int x;
    printf("Please enter a unit number in ground floor in our building: \n");
    scanf("%d", &x);

    switch(x){
        case 1: printf("Civil");
            break;
        case 2: printf("Shayon, Rubayet, Sowrob");
            break;//if not break then continues 3,4.. 
        case 3: printf("Drubo, Saim, Diganta");
            break;
        case 4: printf("Hadis, Rafi, Azmine");
            //break;
        case 5: printf("Hamza");
            //break;
        default: printf("Invalid");
            break;
    }
}