#include <stdio.h>
#include <stdlib.h>

int main(){
int arr[5] = {10, 20, 30, 40, 50, 60};
int *pt = arr;
printf("Pointer points at 0th index: %d\n", *pt);
pt += 3;
printf("After adding 3: %d\n", *pt);
pt -= 2;
printf("After subtracting 2: %d\n", *pt);

int *p1 = &arr[1];
int *p2 = &arr[4];
int diff = p2 - p1;
printf("index Difference between 1st index and 4th index: %d\n", diff);
}
