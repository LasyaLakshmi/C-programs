#include <stdio.h>
#include <stdlib.h>

int main(){
int i, j, temp, n, a[10], s;

printf("Enter size of array: ");
scanf("%d", &n);
printf("Enter values :");
for(i = 0; i < n; i++)
    scanf("%d", &a[i]);

for(i = 0; i < n; i++){
    for(j = i+1; j < n; j++){
    if(a[j]< a[i]){
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
}
}
printf("The sorted array is: \n");
for(i=0; i<n; i++){
printf("%d ",a[i]);
}
}
