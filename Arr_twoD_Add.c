#include <stdio.h>
#include <stdlib.h>

void main(){
int a[3][3], b[3][3], add[3][3];
int i,j;
printf("Enter Matrix a:");
for(i=0; i<3; i++) {
for(j=0; j<3; j++) {
scanf("%d", &a[i][j]);
}}
printf("Enter Matrix b:");
for(i=0; i<3; i++) {
for(j=0; j<3; j++) {
scanf("%d", &b[i][j]);
}}
for(i=0; i<3; i++) {
for(j=0; j<3; j++) {
add[i][j]=a[i][j]+b[i][j]; }}
printf("\nAddition of a and b is: \n");
for(i=0; i<3; i++) {
for(j=0; j<3; j++) {
printf("%d  ",add[i][j]);
}
printf("\n");
}
}
