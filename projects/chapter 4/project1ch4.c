#include <stdio.h>

int main(void){
    int numToReverse, firstDigit, secondDigit,thirdDigit;

    printf("Enter a two-digit number: ");
    scanf("%d", &numToReverse);

    printf("The reversal is: %d%d%d", numToReverse % 10, (numToReverse / 10) % 10,numToReverse / 100);

    return 0;   
}