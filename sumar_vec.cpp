#include <iostream>
using namespace std;
const int N=6;

int mostrar_vector(int v[]){
    for(int i=0;i<N;i++){
        cout<<v[i]<<",";
    }
    return 0;
}
int sumar_vector(int r[], int v[], int w[]){
	for(int i=0; i<N;i++){
		if((v[i]%2)==0){
			r[i]=v[i]+w[i];	
		}else{
			r[i]=v[i]-w[i];
		}
		
	}
}
int mult_escalar(int v[], int e){
	for(int i=0; i< N ; i++){
		v[i]*=e;
	}
}
int main(void){
    int r[N],pm=0;
    int v[N]={0,11,22,33,44,55};
    int w[N]={2,2,2,2,2,2};

    mostrar_vector(v);
    cout<<endl;
    sumar_vector(r,v,w);
    cout<<"suma de vectores: "<<endl;
    mostrar_vector(r);
    /*mul x escalar */
    mult_escalar(v, 2);
    cout<<endl<<"mult x escalar"<<endl;
    mostrar_vector(v);
    
    return 0;
}
