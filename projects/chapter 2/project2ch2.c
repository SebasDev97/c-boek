#include <stdio.h>

int main (void){
    int radius;
    float PI = 3.14,area,ci;

    printf("Enter the radius of the circle: \n");
    scanf("%d",&radius);
    area = PI * radius * radius;
    printf("the area of the circle is: %f", area);

}