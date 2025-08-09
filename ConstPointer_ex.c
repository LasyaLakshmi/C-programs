#include <stdio.h>
#include <stdlib.h>

void main(){
int x = 7;
int y = 18;
int const*pt = &x;
printf("Value of x is: %d\n", *pt);
pt = &y;
printf("Value of y is: %d\n", *pt);
}
