#include <stdio.h>

int main(void){

    int numToTransform;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d",&numToTransform);
    printf("In octal, your number is: %o\n",numToTransform);

    return 0;
}