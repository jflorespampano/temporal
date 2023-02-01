#include <stdio.h>
int mifuncion(int x){ /*función que recibe un dato y lo convierte en 10*/
    x=10;
    return 0;
}

int main(void){
    
    int x=0; /*declaramos x con 0*/
    mifuncion(x); /*mandaamos a ponerle u 10*/
    printf("x=%d",x); /*muestra el resultado*/
    return 0;
}
