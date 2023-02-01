#include <stdio.h>

int main(void){
    
    int x=0;
    int *p;
    p=&x;
    *p=10;
    printf("x=%d",x);
    return 0;
}
