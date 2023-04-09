#include <stdio.h>

int main(void){
    int amount;
    
    printf("Enter an amount: ");
    scanf("%d", &amount);
    printf("With tax added: %d", (int) ((amount / 100) * 105));
}