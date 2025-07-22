#include <stdio.h>
#include <stdlib.h>

int main(){
int i, n, a[10], pos, val;

printf("Enter size of array: ");
scanf("%d", &n);
printf("Enter values :");
for(i = 0; i < n; i++)
    scanf("%d", &a[i]);

printf("Enter The position you want to insert in: ");
scanf("%d", &pos);
printf("Enter The value you want to insert: ");
scanf("%d", &val);

for(i = n-1; i>=pos; i--)
    a[i+1] = a[i];
a[pos] = val;
n = n+1;

printf("The Resultant array is:\n");
for(i = 0; i < n; i++)
    printf("%d ", a[i]);

}
