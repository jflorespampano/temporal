# temporal
archivos de programacion 1
## practica 1
1 abrir el archivo expresiones.cpp y probarlo
2 atender la exposicion de expresiones del profesor
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int mifuncion(){ return 5;}
int main(){
	//int r=0;
	//int r=mifuncion();
	int r=mifuncion()+4;
	
	cout<<"La suma de los valores es: "<<r;

	getch();
	return 0;
}
3 abrir el archivo parametros.cpp y probarlo
4 atender la explicacion de parametros del profesor
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
void incrementa(int x){ 
	x++;
}

void incrementa_ver2(int &x){ 
	x++;
}
int main(){
	int r=0;
	//incrementa(r);
	incrementa_ver2(r);
	cout<<"el valor de r es: "<<r;

	getch();
	return 0;
}
