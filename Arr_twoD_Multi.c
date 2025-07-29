#include <stdio.h>
#include <stdlib.h>

void main(){
    int a[2][2], b[2][2], mul[2][2];
    int i, j, k;
printf("Enter Matrix a:\n");
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
    scanf("%d", &a[i][j]);
}}
printf("\na is: \n");
for(i=0; i<2; i++) {
for(j=0; j<2; j++) {
printf("%d  ",a[i][j]);
}
printf("\n");
}
printf("\nEnter Matrix b:\n");
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
    scanf("%d", &b[i][j]);
}}
printf("\nb is: \n");
for(i=0; i<2; i++) {
for(j=0; j<2; j++) {
printf("%d  ",b[i][j]);
}
printf("\n");
}
for(i=0; i<2; i++) {
    for(j=0; j<2; j++) {
        for(k=0; k<2; k++) {
    mul[i][j]+=a[i][k]*b[k][j]; }}}
printf("\nMultiplication of a and b is: \n");
for(i=0; i<2; i++) {
    for(j=0; j<2; j++) {
        printf("%d  ",mul[i][j]);
    }
    printf("\n");
}}
