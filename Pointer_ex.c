#include <stdio.h>
#include <stdlib.h>

int main(){
int a = 80;
int *pt;
pt = &a;
printf("Address of the variable is: %x\n", pt);
printf("Value of the variable is: %d\n", *pt);
}
