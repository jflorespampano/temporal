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
int mostrar_vector(int v[]){
    for(int i=0;i<N;i++){
        cout<<v[i]<<",";
    }
    return 0;
}
int busca_dato(int x, int v[]){
    int i;
    for(i=0;i<N;i++){
        if(v[i]==x)break;
    }
    return i;
}
int busca_pos_mayor(int v[]){
    int posm=0;
    for(int i=1;i<N;i++){
        if(v[i]>v[posm]) posm=i;
    }
    return posm;
}
int intercambia(int v[],int i, int j){
    int aux;
    aux=v[i];
    v[i]=v[j];
    v[j]=aux;
}
int main(void){
    int v[N],pm=0;
    leer_vector(v);
    cout<<"vector leido:";
    mostrar_vector(v);
    cout<<endl;
    pm=busca_pos_mayor(v);
    cout<<"posicion del mayor: "<<pm<<";";
    intercambia(v,0,pm);
    cout<<endl<<"vector con menor al inicio: ";
    mostrar_vector(v);
    return 0;
}
