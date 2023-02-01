#include <iostream>
using namespace std;
int main(){
	int i=0;
	int v[25]={5,8,2,5,7,0,1,2,7,4,56,78,11,22,59};
	//buscaremos la posición del número 0
	for(i=0;i<15;i++){
		if(!v[i]) break;
	}
	cout<<"El 0 esta en la posicion: "<<i;

	return 0;
}

