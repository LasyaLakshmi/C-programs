#include <stdio.h>
#include <stdlib.h>

int main(){

int i, j, n;

    printf("Enter the value : ");
    scanf("%d", &n);

for(i = 1; i<=n; n--){
    for(j = 1; j<=n; j++){
        printf("* ");
    }
    printf("\n");
}
}
