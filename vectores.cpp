#include <iostream>
using namespace std;
const int N=6;

int mostrar_vector(int v[]){
    for(int i=0;i<N;i++){
        cout<<v[i]<<",";
    }
    cout<<"\n";
    return 0;
}

int duplica_valores(int v[]){
    for(int i=0;i<N;i++){
        v[i]*=2;
    }
    return 0;
}

int main(void){
    int r[N],pm=0;
    int v[N]={0,11,22,33,44,55};
    mostrar_vector(v);
    duplica_valores(v);
    mostrar_vector(v);
    
    return 0;
}
