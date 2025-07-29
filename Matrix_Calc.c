#include <stdio.h>
#include <stdlib.h>

void main(){
    int a[2][2], b[2][2],add[2][2], sub[2][2], mul[2][2];
    int i, j, k, op;
printf("Enter a 2x2 Matrix a:\n");
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
printf("\nEnter 2x2 Matrix b:\n");
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

    printf("\n1. Addition \n");
    printf("2. Subtraction \n");
    printf("3. Multiplication \n");
    printf("Enter The number for operation \n");
    scanf("%d", &op);

switch(op){
case 1:

for(i=0; i<2; i++) {
    for(j=0; j<2; j++) {
        add[i][j]=a[i][j]+b[i][j]; }}
    printf("\nAddition of a and b is: \n");
for(i=0; i<2; i++) {
    for(j=0; j<2; j++) {
        printf("%d  ",add[i][j]);
    }
    printf("\n");
}
break;

case 2:

for(i=0; i<2; i++) {
    for(j=0; j<2; j++) {
        sub[i][j]=a[i][j]-b[i][j]; }}
    printf("\nSubtraction of a and b is: \n");
for(i=0; i<2; i++) {
    for(j=0; j<2; j++) {
        printf("%d  ",sub[i][j]);
    }
printf("\n");
}
break;

case 3:

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
}
break;
}
}
