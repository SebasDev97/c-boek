#include <stdio.h>
#include <stdbool.h>

int main(void){
    int numerator,denominator,gcd,smaller;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator,&denominator);

    smaller = (numerator < denominator) ? numerator : denominator;
    gcd = smaller;

    while(gcd > 1){
        if(numerator % gcd == 0 && denominator % gcd == 0){
            break;
        }
        gcd--;
    }

    numerator /= gcd;
    denominator /= gcd;

    printf("In lowest terms: %d/%d", numerator, denominator);

    return 0;
}