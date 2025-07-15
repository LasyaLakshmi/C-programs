#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a ;
    int b ;
    int op ;
    int ans;

    printf("Enter the first value : ");
    scanf("%d", &a);

    printf("Enter the second value : ");
    scanf("%d", &b);

    printf("1. Addition \n");
    printf("2. Subtraction \n");
    printf("3. Multiplication \n");
    printf("4. Division \n");
    printf("Enter The number for operation \n");
    scanf("%d", &op);

    switch(op){
    case 1: ans = a + b;
    printf("a -> %d Plus b -> %d is equal to %d", a, b, ans);
    break;
    case 2: ans = a - b;
    printf("a -> %d Minus b -> %d is equal to %d", a, b, ans);
    break;
    case 3: ans = a * b;
    printf("a -> %d Multiplied by b -> %d is equal to %d", a, b, ans);
    break;
    case 4: ans = a / b;
    printf("a -> %d Divided by b -> %d is equal to %d", a, b, ans);
    break;
    }
    return 0;
}
