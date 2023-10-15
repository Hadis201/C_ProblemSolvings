#include<stdio.h>


int main(){
    int given_num = 100;

    // Now we will get the first number;
    
    // else
    int temp_var = given_num;
    while (temp_var>=10)
    {
        temp_var = temp_var/10;
    }
    printf("The first number is %d", temp_var);


    



}