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

