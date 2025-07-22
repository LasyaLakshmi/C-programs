#include <stdio.h>
#include <stdlib.h>

int main(){
int i;
int age[5];
printf("Enter values :");
for(i = 0; i < 5; i++)
    scanf("%d", &age[i]);
for(i = 0; i < 5; i++)
    printf("%d ", age[i]);
}
