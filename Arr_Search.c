#include <stdio.h>
#include <stdlib.h>

int main(){
int i, n, a[10], s;

printf("Enter size of array: ");
scanf("%d", &n);
printf("Enter values :");
for(i = 0; i < n; i++)
    scanf("%d", &a[i]);

printf("Enter The value you want to search: ");
scanf("%d", &s);

for(i = 0; i < n; i++){
if (a[i]==s){
    printf("%d is present at the location a[%d]", s, i);
break;
}
}
if (i==n){
    printf("%d not found", s);
}
}
