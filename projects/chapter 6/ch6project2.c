#include <stdio.h>
#include <stdbool.h>

int main(void){
    int n, m, r;
    
    printf("Enter two integers: ");
    scanf("%d %d", &n, &m);

    while(n > 0){
        r = m % n;
        m = n;
        n = r;
    }
    printf("Greatest common divider: %d\n",m );
    return 0;
}