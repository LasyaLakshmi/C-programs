#include <stdio.h>
#include <stdlib.h>

int main(){

int a = 1;
repeat:
    printf("%d\n", a);
    a++;
if(a<=10){
goto repeat;
}
}
