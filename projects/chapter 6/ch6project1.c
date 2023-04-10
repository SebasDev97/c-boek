#include <stdio.h>
#include <stdbool.h>

int main(void){
    float num,max = -1.0;
    
    do{
        printf("Enter a number: ");
        scanf("%f", &num);
        if (num > max && num > 0.0){
            max = num;
        }
    }while(num > 0.0);

    printf("The largest number entered was %.2f\n", max);

    return 0;
}