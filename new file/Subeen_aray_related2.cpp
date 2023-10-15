#include<stdio.h>

int main(){
    const char* ara[10] = {"Drubo", "Rhyme", "Rudro", "Emon", "Nazmul", "Hadis", "Saim", "Adib", "Deen", "Tusher"};

    int i; 
    /* for straight representation(for (i = 9; i>-1; i--))*/ 

    for (i = 9; i>-1; i--) /*for inverse represtation*/{
        printf(" Roll no:%d     Name: %s\n", i+1, ara[i]);
    }
    
    return 0;

}