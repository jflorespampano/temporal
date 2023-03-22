#include <iostream>
using namespace std;
const int N=6;

int main(void){
    char s[80]="hola uno dos tres cuatro mundo";
    int i=0,palabras=0;
    //contar palabras
    while(s[i++])
    	if(s[i-1]==' ') palabras++;
    ;
    cout<<"son "<<palabras+1<<" palabras"<<endl;

    return 0;
}
