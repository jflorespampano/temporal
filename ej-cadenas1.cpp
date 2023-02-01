#include <iostream>
using namespace std;
const int N=6;
int leer_vector(int v[]){
    for(int i=0;i<N;i++){
    	cout<<"deme dato que ira en la posicion "<<i<<" de "<<N<<": ";
        cin>>v[i];
    } 
    return 0;
}

int main(void){
    char s[80]="hola uno dos tres cuatro mundo";
    int i=0;
    while(s[i++]!='u')
    ;
    cout<<(i-1)<<endl;
    cout<<s;
    return 0;
}
