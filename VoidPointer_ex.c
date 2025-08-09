#include <stdio.h>
#include <stdlib.h>

void main(){
int a = 10;
void *v1 = &a;
float f = 5.9;
void *v2 = &f;

printf("Address of a is: %x\n", v1);
printf("Value of a is: %d\n", *(int*)v1);
printf("Address of f is: %x\n", v2);
printf("Value of f is: %d\n", *(float*)v2);
}
