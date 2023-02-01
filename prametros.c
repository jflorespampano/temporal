#include <stdio.h>
int mifuncion(int *x){
    *x=10;
    return 0;
}

int main(void){
    
    int x=0;
    mifuncion(&x);
    printf("x=%d",x);
    return 0;
}
