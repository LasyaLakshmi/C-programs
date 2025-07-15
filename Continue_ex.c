#include <stdio.h>
#include <stdlib.h>

int main(){

int a = 0;
do{
    if(a == 7){
    a++;
    continue;
    }
    printf("%d\n", a);
    a++;
    }
    while(a<10);
}
