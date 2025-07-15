#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 18;
    int b = 45;
    int c = 7;
    if (a > b && a > c){
        printf("a -> %d is greater than b -> %d and c -> %d", a, b, c);
    }
    else if (b > a){
        printf("b -> %d is greater than a -> %d and c -> %d", b, a, c);
    }
    else{
        printf("c -> %d is greater than a -> %d and b -> %d", c, a, b);
    }
}
