#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a ;
    int b ;

    printf("Enter the first value : ");
    scanf("%d", &a);

    printf("Enter the second value : ");
    scanf("%d", &b);

    if (a!=b){
    printf("a -> %d is not equal to b -> %d", a, b);
    }

    if (a > b){
    printf("\n a -> %d is greater than b -> %d", a, b);
    }
    else if (a==b){
    printf("\n a -> %d is equal to b -> %d", a, b);
    }
    else{
    printf("\n a -> %d is lesser than b -> %d", a, b);
    }
}
