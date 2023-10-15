#include<stdio.h>

bool isPalindrome(int x){
    if (x<0)
        return false;

   
        //new x
    int div = 1;
    while (x >= div*10){
        div = div * 10;
    }
    // ekok ber kori     
    int first_number = x/div; // left part 
    int last_number = x%10; // or right part 
    if (first_number!= last_number)
        return false;


    // Loop 2
    while (x){
        x = (x%div)/10;
        div = div/100;


    }
    
    return true;

    

}

int main(){
    int a = 345676543;
    // printf("This program will find out if a number is palindrom or not. \nEnter your number: ");
    // scanf("%d", &a);

    bool res = isPalindrome(a);
    if (res == true){
        printf("Yes!!!, it's palindrome\n");
    } 
    else
        printf("No, it's not palindrome\n");

    return 0;
}